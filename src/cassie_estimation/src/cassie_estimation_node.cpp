#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <string>
#include <fstream>

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
#include <cassie_common_toolbox/cassie_proprioception_msg.h>
#include <cassie_common_toolbox/cassie_velocity_estimation_msg.h>

using namespace cassie_model;

cassie_model::Cassie robot;
static ros_utilities::Timer timeout_timer(true);
static ros_utilities::Timer estimation_realtime_timer(true);

static bool isCalibrated;
static VectorXd w(3), a(3);
static VectorXd encoder(14), dencoder(14), con(2);
static VectorXd radio(16);
static VectorXd Simvel(3);
static bool reset_ekf_needed;

// Callback for estimation subscriber
void proprioception_callback(const cassie_common_toolbox::cassie_proprioception_msg::ConstPtr &proprioceptionmsg)
{
    timeout_timer.restart();
    robot.q.setZero();
    robot.dq.setZero();
    unpack_proprioception(proprioceptionmsg, robot.q, robot.dq, radio, robot.gyroscope, robot.accelerometer, robot.torque, robot.leftContact, robot.rightContact);
    get_proprioception_orientation(*proprioceptionmsg, robot.q, robot.dq, robot.quat_pelvis);

    isCalibrated = proprioceptionmsg->isCalibrated;
    // get measured quantities
    w << proprioceptionmsg->angular_velocity.x, proprioceptionmsg->angular_velocity.y, proprioceptionmsg->angular_velocity.z;
    a << proprioceptionmsg->linear_acceleration.x, proprioceptionmsg->linear_acceleration.y, proprioceptionmsg->linear_acceleration.z;

    for (int i = 0; i < 14; i++)
    {
        encoder(i) = proprioceptionmsg->encoder_position[i];
        dencoder(i) = proprioceptionmsg->encoder_velocity[i];
    }
    con << proprioceptionmsg->contact[0], proprioceptionmsg->contact[1];
    reset_ekf_needed = (proprioceptionmsg->radio[SA] < 1 || proprioceptionmsg->radio[SB] < 0);

    Simvel(0) = proprioceptionmsg->linear_velocity.x;
    Simvel(1) = proprioceptionmsg->linear_velocity.y;
    Simvel(2) = proprioceptionmsg->linear_velocity.z;
    //    std::cout << "q" << robot.q << std::endl;
    //    std::cout << "contact" << proprioceptionmsg->contact[0] << proprioceptionmsg->contact[1] <<std::endl;
    //    ROS_INFO("got proprioception"); //update rate 2kHz
}

int main(int argc, char *argv[])
{
    ros::init(argc, argv, "cassie_estimation_node");
    ros::NodeHandle nh("/cassie/estimation");

    ros::Rate looprate(2000);

    // Check if the simulated joystick command is enabled!
    bool isSim = false;
    ros::param::get("/cassie/is_simulation", isSim);

    timeout_timer.start();
    estimation_realtime_timer.start();

    bool useContactEKF = false;
    ros::param::get("/cassie/use_ekf", useContactEKF);

    cassie_common_toolbox::cassie_velocity_estimation_msg out_msg;
    ros::Publisher post_estimation_pub = nh.advertise<cassie_common_toolbox::cassie_velocity_estimation_msg>("/cassie_velocity_estimation", 1);
    ros::Subscriber pre_estimation_sub = nh.subscribe("/cassie_proprioception", 1, proprioception_callback, ros::TransportHints().tcpNoDelay(true));

    //  initialize estimator
    KinematicsHipVelocityEstimator velocityEstimator(nh, robot, true); // not useful
    contact_ekf ekf(nh, robot, true);

    // Whether to log data
    VectorXf log = VectorXf::Zero(3);
    std::fstream logfile;
    bool log_estimation = false;
    ros::param::get("/cassie/log_estimation", log_estimation);
    if (log_estimation)
    {
        std::string home = getenv("HOME");
        std::string path = home + "/datalog/estimation_log.bin";
        logfile.open(path, std::ios::out | std::ios::binary);
    }

    while (ros::ok())
    {
        // Spin ROS once to get proprioception_callback
        ros::spinOnce();
        // if calibrated start estimator
        if (isCalibrated)
        {
            if (useContactEKF)
            {
                // Reset the EKF if the SA/SB radio gets pulled down
                if (reset_ekf_needed)
                {
                    ekf.reset();
                }
                ekf.update(0.0005, w, a, encoder, dencoder, con);
                //ekf.update(estimation_realtime_timer.elapsed(), w, a, encoder, dencoder, con);
                estimation_realtime_timer.restart();

                // Extract result
                Matrix3d R;
                Vector2d footYaws;
                Vector3d pos, vel, ba, bg, plf, prf;
                ekf.getValues(R, pos, vel, ba, bg, plf, prf, footYaws);

                // Rotate yaw
                Eigen::EulerAnglesXYZd euler;
                eulerXYZ(R, euler);
                Eigen::Matrix3d Rz;
                Rz << cos(euler.gamma()), -sin(euler.gamma()), 0,
                    sin(euler.gamma()), cos(euler.gamma()), 0,
                    0, 0, 1;
                vel = Rz.transpose() * vel;

                // Rotate into foot frames
                VectorXd q(22);
                q.setZero();
                for (int i = 0; i < robot.iEncoderMap.size(); i++)
                    q(robot.iEncoderMap(i)) = encoder(i);

                Matrix3d Rzl, Rzr;
                MatrixXd temp(6, 1);
                SymFunction::pose_leftFoot(temp, q);
                Rzl << cos(temp(5)), -sin(temp(5)), 0,
                    sin(temp(5)), cos(temp(5)), 0,
                    0, 0, 1.0;

                SymFunction::pose_rightFoot(temp, q);
                Rzr << cos(temp(5)), -sin(temp(5)), 0,
                    sin(temp(5)), cos(temp(5)), 0,
                    0, 0, 1.0;

                // Rotate into frame relative to stance foot
                if ((con(0) >= 0.25) && (con(1) >= 0.25))
                {
                    // Double support
                    VectorXd vl(3), vr(3);
                    vl = Rzl * vel;
                    vr = Rzr * vel;
                    vel = (vl + vr) / 2.0;
                }
                else if (con(1) >= 0.25)
                {
                    // Right support
                    vel = Rzr * vel;
                }
                else if (con(0) >= 0.25)
                {
                    // Left support
                    vel = Rzl * vel;
                }

                out_msg.linear_velocity.x = vel(0);
                out_msg.linear_velocity.y = vel(1);
                out_msg.linear_velocity.z = vel(2);

                //                std::cout << "EKF_vel"<< vel << std::endl;
            }
            else
            {
                // later
            }

            if (isSim)
            {
                out_msg.linear_velocity.x = Simvel(0);
                out_msg.linear_velocity.y = Simvel(1);
                out_msg.linear_velocity.z = Simvel(2);
                //               std::cout << "gazebo_vel" <<Simvel << std::endl;
            }

            //            Add header & publish message
            out_msg.header.stamp = ros::Time::now();
            post_estimation_pub.publish(out_msg);

            if (log_estimation)
            {
                double tsec = static_cast<double>(ros::Time::now().sec);
                double tnsec = static_cast<double>(ros::Time::now().nsec) * 1e-9;
                // Move zero to closer time rather than 1970 so it fits in a float
                // Still bad practice to put time in floats, but this is just for logging
                if (!isSim)
                    tsec -= 1.6074545e9;
                log <<
                    //               static_cast<float>(tsec),static_cast<float>(tnsec),
                    static_cast<float>(out_msg.linear_velocity.x),
                    static_cast<float>(out_msg.linear_velocity.y),
                    static_cast<float>(out_msg.linear_velocity.z); // 3
                logfile.write(reinterpret_cast<char *>(log.data()), (log.size()) * sizeof(float));
            }
        }
        looprate.sleep();
    }

    if (log_estimation)
    {
        logfile.close();
    }
}
