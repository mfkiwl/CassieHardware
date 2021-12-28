/*
Xiong
*/

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <string>
#include <fstream>

// Agility includes
#include <cassie_interface/udp.h>
#include <cassie_interface/cassie_out_t.h>
#include <cassie_interface/cassie_user_in_t.h>
#include <cassie_interface/cassiemujoco.h> // mujoco

// ROS includes
#include <ros/ros.h>
#include <ros_utilities/timing.hpp>
#include <control_eigen_utilities/limits.hpp>
#include <cassie_description/cassie_model.hpp>
#include <cassie_estimation/heelspring_solver.hpp>
#include <cassie_estimation/contact_classifier.hpp>
#include <cassie_estimation/contact_ekf.hpp>
#include <yaml_eigen_utilities/yaml_eigen_utilities.hpp>
#include <cassie_estimation/kinematics_hip_velocity_estimator.hpp>
#include <cassie_common_toolbox/RadioButtonMap.hpp>

// Load in message types
#include <cassie_common_toolbox/callback_helpers.hpp>
#include <cassie_common_toolbox/cassie_control_msg.h>
#include <cassie_common_toolbox/cassie_proprioception_msg.h>

using namespace cassie_model;
using namespace std;

cassie_common_toolbox::cassie_proprioception_msg proprioception_msg;

// Common Variables
static cassie_user_in_t cassie_user_in = { 0 };
static cassie_out_t cassie_out;
static ros_utilities::Timer timeout_timer(true);
static double tMujoco = 0;
static bool isSimRunning = true;

// Callback for controller subscriber
void controller_callback(const cassie_common_toolbox::cassie_control_msg::ConstPtr& controlmsg) {
    timeout_timer.restart();
    for (unsigned long i = 0; i < 10; i++) {
        cassie_user_in.torque[i] = controlmsg->motor_torque[i];
    }
    // cout << "getting torques ";
}

static long long get_microseconds(void) {
    struct timespec now;
    clock_gettime(CLOCK_MONOTONIC, &now);
    return now.tv_sec * 1000000 + now.tv_nsec / 1000;
}

void processProprioception_msg();

void CheatWithSimulationVel(cassie_sim_t* sim);

void logSimulation(fstream& logfile);

void FakeJoystickCmd();

///////////////////////////// Main node ////////////////////////////////////////////
int main(int argc, char* argv[]) {
    ///////////////////////// CONFIG ///////////////////////////
    // Establish the current ROS node and associated timing
    ros::init(argc, argv, "cassie_interface");
    ros::NodeHandle nh("/cassie/interface");
    ros::Rate looprate(2000); // Run at 2 kHz

    double tNodeStart = ros::Time::now().toSec();
    timeout_timer.start();

    int control_mode;
    ros::param::get("/cassie/locomotion_control/HLIP/control_mode", control_mode);

    // Get the safe torque limit from the parameter server
    std::string stl;
    VectorXd safe_torque_limit(10);
    ros::param::get("/cassie/interface/safe_torque_limit", stl);
    yaml_utilities::yaml_read_string(stl, safe_torque_limit);
    cout << "Using safe torque limit: " << safe_torque_limit.transpose() << endl;

    //////////////////////// Mujoco Setup /////////////////////////////////////////////////
    bool visualize = true;
    bool hold = false;
    ROS_INFO("Using Mujoco Simulator");
    // Create cassie simulation
    const char modelfile[] = "/home/xiaobin/cassie_ws/src/cassie_interface/model/cassie.xml";
    cassie_sim_t* sim = cassie_sim_init(modelfile, false);
    cassie_vis_t* vis;
    double* timeMujoP = cassie_sim_time(sim);

    if (visualize)
        vis = cassie_vis_init(sim, modelfile, false);
    if (hold)
        cassie_sim_hold(sim);

    // Manage simulation loop, use for control display HZ
    unsigned long long loop_counter = 0;

    ////////////////////////////////////////////////////////////////////////////////////
    // Setup ROS publisher/subscriber networks
    ros::Publisher proprioception_pub = nh.advertise<cassie_common_toolbox::cassie_proprioception_msg>("/cassie_proprioception", 1);
    ros::Subscriber controller_sub = nh.subscribe("/cassie_control", 1, controller_callback, ros::TransportHints().tcpNoDelay(true));

    // Prepare initial null command packet to start communication
    printf("Running the interface node...\n");

    // Run our own characterization of the shin and heel spring offsets
    cassie_model::Cassie robot;
    ContactClassifier contact(nh, robot, 0.0005);
    HeelspringSolver achillesSolver(nh, robot);

    // Whether to log data
    std::fstream logfile;
    bool log_interface = false;
    ros::param::get("/cassie/log_interface", log_interface);
    if (log_interface) {
        std::string home = getenv("HOME");
        std::string path = home + "/datalog/interface_log.bin";
        logfile.open(path, std::ios::out | std::ios::binary);
    }

    // Listen/respond loop
    while (ros::ok()) {
        // Spin ROS once to get updated control values
        ros::spinOnce();

        // Check the timeout and see if the torque must be zeroed
        if (isSimRunning && timeout_timer.elapsed() > 0.1) // seconds
        { // if sim is running then check if time out for receiving torques
            for (int i = 0; i < 10; i++)
                cassie_user_in.torque[i] = 0;
        }
        else { // Apply saturation
            Eigen::Map<Eigen::VectorXd> tempU(cassie_user_in.torque, 10);
            control_eigen_utilities::clamp(tempU, -safe_torque_limit, safe_torque_limit);
            for (int i = 0; i < 10; i++) {
                cassie_user_in.torque[i] = tempU[i];
                // cout << cassie_user_in.torque[i] << " ";
            }
        }

        ///////////////////////////////  receive ///////////////////////////////////
        // Draw no more then once every 33 simulation steps
        if (visualize && loop_counter % 33 == 0)
            cassie_vis_draw(vis, sim);
        // Increment loop counter
        ++loop_counter;
        isSimRunning = !cassie_vis_paused(vis);
        if (isSimRunning)
            cassie_sim_step(sim, &cassie_out, &cassie_user_in);

        tMujoco = *timeMujoP;
        // cout << "MujocoTime:" << tMujoco << endl;
        // out << "Mujo Ros Time Diff:" << tMujo - (ros::Time::now().toSec()- tNodeStart) << endl;
        ///////////////////////////////////////////////////////
        FakeJoystickCmd();
        processProprioception_msg();

        // Get encoder positions and pass them to robot object
        robot.q.setZero();
        robot.dq.setZero();
        get_proprioception_torques(proprioception_msg, robot.torque);
        get_proprioception_encoders(proprioception_msg, robot.q, robot.dq);
        get_proprioception_orientation(proprioception_msg, robot.q, robot.dq, robot.quat_pelvis);

        if (cassie_out.isCalibrated) // cassie is calibrated in sim when the sim starts.
        {
            // Update contact / achilles and export
            achillesSolver.update();   // use the closed loop chain to calaculate the heel spring deflection
            contact.update();

            proprioception_msg.q_achilles[0] = robot.q(LeftHeelSpring);
            proprioception_msg.q_achilles[1] = robot.q(RightHeelSpring);
            proprioception_msg.dq_achilles[0] = robot.dq(LeftHeelSpring);
            proprioception_msg.dq_achilles[1] = robot.dq(RightHeelSpring);
            proprioception_msg.contact[0] = robot.leftContact;
            proprioception_msg.contact[1] = robot.rightContact;

            CheatWithSimulationVel(sim);  // otherwise, use an estimator to pass velocity to proprioception_msg

            // publish 
            proprioception_msg.header.stamp = ros::Time::now();
            proprioception_pub.publish(proprioception_msg);
            // Write log
            if (log_interface) {
                logSimulation(logfile);
            }
            looprate.sleep();
        }
    }
    if (log_interface)
        logfile.close();
}

void FakeJoystickCmd() {
    cassie_out.pelvis.radio.channel[SA] = 1.0;
    cassie_out.pelvis.radio.channel[SB] = 0.; // standing
    cassie_out.pelvis.radio.channel[LS] = 1.0; // height 

    cassie_out.pelvis.radio.channel[SH] = 1.0; // default 

    if (cassie_out.pelvis.radio.channel[SB] > 0) {
        // Crouch simulation
        // cassie_out.pelvis.radio.channel[SH] = -1.0;
        //  cout << "ROS time:" << ros::Time::now().toSec() << endl;
        // Walk simulation
        // cassie_out.pelvis.radio.channel[SB] = 1.0;

        if (tMujoco > 25.0)
            cassie_out.pelvis.radio.channel[LV] = 1.;
        if (tMujoco > 45.0)
            cassie_out.pelvis.radio.channel[LV] = 0.;
        if (tMujoco > 55.0)
            cassie_out.pelvis.radio.channel[LV] = -1.;
        if (tMujoco > 65.0)
            cassie_out.pelvis.radio.channel[LV] = 0.;
        if (tMujoco > 75.0)
            cassie_out.pelvis.radio.channel[LH] = 1.;
        if (tMujoco > 85.0)
            cassie_out.pelvis.radio.channel[LH] = 0.;
        if (tMujoco > 95.0) {
            cassie_out.pelvis.radio.channel[LH] = -0.50;
            cassie_out.pelvis.radio.channel[LV] = 0.50;
        }
    }
    return;
}

void processProprioception_msg() {
    // Pack and publish the proprioception data
    proprioception_msg.isSimRunning = isSimRunning;
    proprioception_msg.orientation.w = cassie_out.pelvis.vectorNav.orientation[0];
    proprioception_msg.orientation.x = cassie_out.pelvis.vectorNav.orientation[1];
    proprioception_msg.orientation.y = cassie_out.pelvis.vectorNav.orientation[2];
    proprioception_msg.orientation.z = cassie_out.pelvis.vectorNav.orientation[3];
    proprioception_msg.angular_velocity.x = cassie_out.pelvis.vectorNav.angularVelocity[0];
    proprioception_msg.angular_velocity.y = cassie_out.pelvis.vectorNav.angularVelocity[1];
    proprioception_msg.angular_velocity.z = cassie_out.pelvis.vectorNav.angularVelocity[2];
    proprioception_msg.linear_acceleration.x = cassie_out.pelvis.vectorNav.linearAcceleration[0];
    proprioception_msg.linear_acceleration.y = cassie_out.pelvis.vectorNav.linearAcceleration[1];
    proprioception_msg.linear_acceleration.z = cassie_out.pelvis.vectorNav.linearAcceleration[2];
    proprioception_msg.motor_torque[0] = cassie_out.leftLeg.hipRollDrive.torque;
    proprioception_msg.motor_torque[1] = cassie_out.leftLeg.hipYawDrive.torque;
    proprioception_msg.motor_torque[2] = cassie_out.leftLeg.hipPitchDrive.torque;
    proprioception_msg.motor_torque[3] = cassie_out.leftLeg.kneeDrive.torque;
    proprioception_msg.motor_torque[4] = cassie_out.leftLeg.footDrive.torque;
    proprioception_msg.motor_torque[5] = cassie_out.rightLeg.hipRollDrive.torque;
    proprioception_msg.motor_torque[6] = cassie_out.rightLeg.hipYawDrive.torque;
    proprioception_msg.motor_torque[7] = cassie_out.rightLeg.hipPitchDrive.torque;
    proprioception_msg.motor_torque[8] = cassie_out.rightLeg.kneeDrive.torque;
    proprioception_msg.motor_torque[9] = cassie_out.rightLeg.footDrive.torque;
    proprioception_msg.encoder_position[0] = cassie_out.leftLeg.hipRollDrive.position;
    proprioception_msg.encoder_position[1] = cassie_out.leftLeg.hipYawDrive.position;
    proprioception_msg.encoder_position[2] = cassie_out.leftLeg.hipPitchDrive.position;
    proprioception_msg.encoder_position[3] = cassie_out.leftLeg.kneeDrive.position;
    proprioception_msg.encoder_position[4] = cassie_out.leftLeg.shinJoint.position;
    proprioception_msg.encoder_position[5] = cassie_out.leftLeg.tarsusJoint.position;
    proprioception_msg.encoder_position[6] = cassie_out.leftLeg.footJoint.position;
    proprioception_msg.encoder_position[7] = cassie_out.rightLeg.hipRollDrive.position;
    proprioception_msg.encoder_position[8] = cassie_out.rightLeg.hipYawDrive.position;
    proprioception_msg.encoder_position[9] = cassie_out.rightLeg.hipPitchDrive.position;
    proprioception_msg.encoder_position[10] = cassie_out.rightLeg.kneeDrive.position;
    proprioception_msg.encoder_position[11] = cassie_out.rightLeg.shinJoint.position;
    proprioception_msg.encoder_position[12] = cassie_out.rightLeg.tarsusJoint.position;
    proprioception_msg.encoder_position[13] = cassie_out.rightLeg.footJoint.position;
    proprioception_msg.encoder_velocity[0] = cassie_out.leftLeg.hipRollDrive.velocity;
    proprioception_msg.encoder_velocity[1] = cassie_out.leftLeg.hipYawDrive.velocity;
    proprioception_msg.encoder_velocity[2] = cassie_out.leftLeg.hipPitchDrive.velocity;
    proprioception_msg.encoder_velocity[3] = cassie_out.leftLeg.kneeDrive.velocity;
    proprioception_msg.encoder_velocity[4] = cassie_out.leftLeg.shinJoint.velocity;
    proprioception_msg.encoder_velocity[5] = cassie_out.leftLeg.tarsusJoint.velocity;
    proprioception_msg.encoder_velocity[6] = cassie_out.leftLeg.footJoint.velocity;
    proprioception_msg.encoder_velocity[7] = cassie_out.rightLeg.hipRollDrive.velocity;
    proprioception_msg.encoder_velocity[8] = cassie_out.rightLeg.hipYawDrive.velocity;
    proprioception_msg.encoder_velocity[9] = cassie_out.rightLeg.hipPitchDrive.velocity;
    proprioception_msg.encoder_velocity[10] = cassie_out.rightLeg.kneeDrive.velocity;
    proprioception_msg.encoder_velocity[11] = cassie_out.rightLeg.shinJoint.velocity;
    proprioception_msg.encoder_velocity[12] = cassie_out.rightLeg.tarsusJoint.velocity;
    proprioception_msg.encoder_velocity[13] = cassie_out.rightLeg.footJoint.velocity;
    for (unsigned int i = 0; i < 16; i++)
        proprioception_msg.radio[i] = cassie_out.pelvis.radio.channel[i];

    return;
}

void logSimulation(fstream& logfile)
{
    VectorXf log = VectorXf::Zero(51);

    VectorXd encoder(14), dencoder(14);
    for (int i = 0; i < 14; i++) {
        encoder(i) = proprioception_msg.encoder_position[i];
        dencoder(i) = proprioception_msg.encoder_velocity[i];
    }
    double tsec = static_cast<double>(ros::Time::now().sec);
    // Get the mean voltage measured on the DC bus input to the motors
    double voltage = 0.;
    voltage = (cassie_out.leftLeg.hipRollDrive.dcLinkVoltage + cassie_out.leftLeg.hipYawDrive.dcLinkVoltage + cassie_out.leftLeg.hipPitchDrive.dcLinkVoltage + cassie_out.leftLeg.kneeDrive.dcLinkVoltage + cassie_out.leftLeg.hipRollDrive.dcLinkVoltage + cassie_out.rightLeg.footDrive.dcLinkVoltage + cassie_out.rightLeg.hipYawDrive.dcLinkVoltage + cassie_out.rightLeg.hipPitchDrive.dcLinkVoltage + cassie_out.rightLeg.kneeDrive.dcLinkVoltage + cassie_out.rightLeg.footDrive.dcLinkVoltage) / 10.;

    // Convert torques to current: current = torque / (gearRatio * motorConstant)
    // gear ratio and motorConstant obtained from Agility Robotics
    double motorCurrent = 0.;
    motorCurrent = fabs(cassie_out.leftLeg.hipRollDrive.torque * 0.30769230769) + fabs(cassie_out.leftLeg.hipYawDrive.torque * 0.30769230769) + fabs(cassie_out.leftLeg.hipPitchDrive.torque * 0.23148148148) + fabs(cassie_out.leftLeg.kneeDrive.torque * 0.23148148148) + fabs(cassie_out.leftLeg.footDrive.torque * 0.35087719298) + fabs(cassie_out.rightLeg.hipRollDrive.torque * 0.30769230769) + fabs(cassie_out.rightLeg.hipYawDrive.torque * 0.30769230769) + fabs(cassie_out.rightLeg.hipPitchDrive.torque * 0.23148148148) + fabs(cassie_out.rightLeg.kneeDrive.torque * 0.23148148148) + fabs(cassie_out.rightLeg.footDrive.torque * 0.35087719298);

    // Use floats for logging size and speed
    log << static_cast<float>(tMujoco),
        static_cast<float>(tsec), // 2                                                                                                             // 1
        static_cast<float>(proprioception_msg.orientation.w),
        static_cast<float>(proprioception_msg.orientation.x),
        static_cast<float>(proprioception_msg.orientation.y),
        static_cast<float>(proprioception_msg.orientation.z), // 4
        static_cast<float>(proprioception_msg.angular_velocity.x),
        static_cast<float>(proprioception_msg.angular_velocity.y),
        static_cast<float>(proprioception_msg.angular_velocity.z), // 3
        static_cast<float>(proprioception_msg.linear_acceleration.x),
        static_cast<float>(proprioception_msg.linear_acceleration.y),
        static_cast<float>(proprioception_msg.linear_acceleration.z), // 3
        static_cast<float>(proprioception_msg.linear_velocity.x),
        static_cast<float>(proprioception_msg.linear_velocity.y),
        static_cast<float>(proprioception_msg.linear_velocity.z), // 3
        encoder.cast<float>(),                                    // 14
        dencoder.cast<float>(),                                   // 14
        static_cast<float>(proprioception_msg.q_achilles[0]),
        static_cast<float>(proprioception_msg.q_achilles[1]), // 2
        static_cast<float>(proprioception_msg.dq_achilles[0]),
        static_cast<float>(proprioception_msg.dq_achilles[1]), // 2
        static_cast<float>(proprioception_msg.contact[0]),
        static_cast<float>(proprioception_msg.contact[1]),
        static_cast<float>(motorCurrent), //cassie_out.pelvis.battery.current),
        static_cast<float>(voltage);

    logfile.write(reinterpret_cast<char*>(log.data()), (log.size()) * sizeof(float));

    return;
}

void CheatWithSimulationVel(cassie_sim_t* sim) {

    // Use real velocity from simulation
    Eigen::Quaterniond quat;
    quat.w() = proprioception_msg.orientation.w;
    quat.x() = proprioception_msg.orientation.x;
    quat.y() = proprioception_msg.orientation.y;
    quat.z() = proprioception_msg.orientation.z;
    Eigen::EulerAnglesXYZd euler;
    eulerXYZ(quat, euler);
    Eigen::Matrix3d Rz;
    Rz << cos(euler.gamma()), -sin(euler.gamma()), 0,
        sin(euler.gamma()), cos(euler.gamma()), 0,
        0, 0, 1;
    // get the rotation matrix to the base 

    double comVel[3];
    cassie_sim_cm_velocity(sim, comVel); // this is getting COM velocity from Mujoco; TODO: just get the base velocity
    Vector3d vel(comVel[0], comVel[1], comVel[2]);
    vel = Rz.transpose() * vel;
    proprioception_msg.linear_velocity.x = vel[0];
    proprioception_msg.linear_velocity.y = vel[1];
    proprioception_msg.linear_velocity.z = vel[2];

    return;
}