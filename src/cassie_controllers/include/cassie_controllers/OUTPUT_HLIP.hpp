
#ifndef OUTPUT_HLIP_HPP
#define OUTPUT_HLIP_HPP

#include <cassie_description/cassie_model.hpp>
#include <ros_utilities/ros_utilities.hpp>
#include <cassie_common_toolbox/PhaseVariable.hpp>
#include <cassie_common_toolbox/smoothing.hpp>
#include <std_srvs/Empty.h>
#include <ros_utilities/timing.hpp>
#include <cassie_controllers/feedforward_controller.hpp>
#include <qpOASES.hpp>
#include <control_utilities/filters.hpp>
#include <control_utilities/limits.hpp>
#include <cassie_estimation/rigidtarsus_solver.hpp>
#include <Eigen/Sparse>
#include <unsupported/Eigen/MatrixFunctions>

USING_NAMESPACE_QPOASES

class OUTPUT_HLIP {
public:

    OUTPUT_HLIP(ros::NodeHandle &nh, cassie_model::Cassie &robot, int control_mode);
    void update(VectorXd &radio); //update output
    void reset();
    bool reconfigure();
    bool isReadyToTransition() {return this->memory.readyToStop;}
    int getDomain() {return this->memory.iDomain;}
    void getSize(int &outputsize, int &holsize, int &qsize, int &usize){
        outputsize = this->config.outputsize;
        holsize = this->config.holsize;
        qsize = this->config.qsize;
        usize = this->config.usize;
    };
    void getDebug(VectorXf &dbg);
private:

    /**
    * @brief Persistent controller configurations
    */
    struct Config {
        //standing
        double nom_stand_height;
        double stand_radio_ratio;
        double yaw_ref;

        int MPC_N;

        int outputsize;
        int holsize;
        int qsize;
        int usize;

        double g = 9.80665;
        bool isSim;
        bool useHLIP;
        bool useDCBF;
        int control_mode;

        double wdes; //global, to pull launch param
        double HLIP_Ts;
        double HLIP_vxd;
        double HLIP_vyd;
        double HLIP_udes;
        double Edes; //global, to pull launch param
        double z0des;
        double xratio;
        double zsw_max;
        double zsw_neg;
        VectorXd bh;
        //stone of x and z in world frame
        VectorXd stonex;
        VectorXd stonez;

        //used for nextDomain
        int nDomain;
        //used get Phase variable
        double time_scale;

        double vx_offset;
        double vy_offset;
        double stoppable_velocity_threshold;

        // Parameter checker
        ros_utilities::ParamChecker paramChecker;

        //qp
        VectorXd lb;
        VectorXd ub;

        //discrete CBF
        double Edes_eps;
        double Edes_gamma_in;
        double Edes_gamma_out;


        // Methods
        void init();
        void reconfigure();

    } config;


public:
    // Gait phasing variable
    PhaseVariable phase;

    struct Cache {

        double stepW_log;
        double dstepW_log;

        //from SymFunction
        VectorXd ya;
        VectorXd dya;
        MatrixXd Dya;
        MatrixXd DLfya;

        //compute from bezier polynomial
        VectorXd yd;
        VectorXd dyd;
        VectorXd d2yd;

        //compute from library
        VectorXd ddqd;
        VectorXd pd;
        VectorXd vd;
        VectorXd Fd;
        VectorXd uff;

        //QP: min 1/2*X'*G*X + X'*g
        //    s.t. lbA <= A*X <= ubA
        //    s.t. lb <= X <= ub
        Eigen::Matrix<double,Dynamic,Dynamic,RowMajor> G;
        VectorXd g;
        Eigen::Matrix<double,Dynamic,Dynamic,RowMajor> Aconstr;
        VectorXd lbA;
        VectorXd ubA;
        VectorXd mpcsol;


        //stepping stone related
        double udes;
        double Ly;
        double Lx;
        double xcLIP;
        double ycLIP;
        double z0LIP;
        double zcLIP;
        double dxcLIP;
        double dycLIP;
        double dzcLIP;
        double dz0LIP;
        double dxcLIP_f;
        double dycLIP_f;
        double dzcLIP_f;
        double dz0LIP_f;

        double xcLIP_minus;
        double Ly_minus;
        double z0_minus;
        double dzc_minus;

        double Enow;

        bool justimpacted;
        bool isDSP;

        void init(Config *config);
        void reset();
    } cache;

private:
    typedef enum {
        deltaRoll = 0,
        deltaPitch = 1,
        StanceHipYaw = 2,
        zCOM = 3,
        SwingStepz = 4,
        SwingStepx = 5,
        SwingStepy = 6,
        SwingHipYaw = 7,
        deltaSwingFoot = 8
    } HLIPOutputEnum;

    // data persist within each step
    struct Param{
        double Ts;
        double ldes;
        double hdes;
        double wdes; //local
        double Edes; //local
        double xratio;//local
        double HLIP_vxd;//local

        double E0;

        double x_pivot;
        double y_pivot;
        double z_pivot;

        double ldesnext;
        double hdesnext;
        double hdesprev;

        VectorXd alpha0;
        VectorXd dalpha0;
        VectorXd alphaf;

        void init();
        void reset();
    }param;

    /**
    * @brief Data meant to persist across data frames
    */
    struct Memory {
        // Timer to compute phase variable
        ros_utilities::Timer timer = ros_utilities::Timer(true);
        //contact domain
        int iDomain;
        int iDomainlast;
        bool isInitialized;
        int ithstep;

        //??????
        bool readyToStop;
        bool queueStop;

        bool qp_initialized;

        void init();
        void reset();
    } memory;


    // Pointer to the controlling nodehandle and related ROS things
    ros::NodeHandle *nh;
    //    ros::ServiceServer reconfigureService;

    control_utilities::LowPassFilter lpVdX    = control_utilities::LowPassFilter(0.001, 0.75);
    control_utilities::LowPassFilter lpVdY    = control_utilities::LowPassFilter(0.001, 0.25);
    control_utilities::LowPassFilter lpVdTurn = control_utilities::LowPassFilter(0.001, 0.25);

    control_utilities::LowPassFilter lpVaX = control_utilities::LowPassFilter(0.0005, 0.01);
    control_utilities::LowPassFilter lpVaY = control_utilities::LowPassFilter(0.0005, 0.01);
    control_utilities::LowPassFilter lpVaZ = control_utilities::LowPassFilter(0.0005, 0.01);

    control_utilities::LowPassFilter lpVaXlastStep = control_utilities::LowPassFilter(0.001, 0.0001);
    control_utilities::LowPassFilter lpVaYlastStep = control_utilities::LowPassFilter(0.001, 0.0001);

    control_utilities::RateLimiter rateRaibertX    = control_utilities::RateLimiter(-75, 75); // (-0.2, 0.2);
    control_utilities::RateLimiter rateRaibertY    = control_utilities::RateLimiter(-75, 75); // (-0.2, 0.2);

    control_utilities::RateLimiter rateStepX    = control_utilities::RateLimiter(-0.15, 0.15);
    control_utilities::RateLimiter rateStepY    = control_utilities::RateLimiter(-0.10, 0.10);

    control_utilities::RateLimiter rateJoyX    = control_utilities::RateLimiter(-0.30, 0.30);
    control_utilities::RateLimiter rateJoyY    = control_utilities::RateLimiter(-0.30, 0.30);
    control_utilities::RateLimiter rateJoyTurn = control_utilities::RateLimiter(-0.15, 0.15);

    cassie_common_toolbox::MovingAverage stepPeriodAverager = cassie_common_toolbox::MovingAverage(400, 2); // Moving average for one step period (T=0.4s)

    // Pointer to robot model
    cassie_model::Cassie *robot;
    SQProblem *mpcsolver;

    // Feedforward controller
    //    feedforward_underactuated ff;



    // Swing leg tarsus ik solver
    RigidTarsusSolver tarsusSolver;

    // Private methods
    void nextDomain();
    void computeGuard();
    void computeActual(VectorXd &ya, VectorXd &dya, MatrixXd &Dya, MatrixXd &DLfya);
    void computeDesired(VectorXd &yd, VectorXd &dyd, VectorXd &d2yd);

    void computeActual_inair(VectorXd &ya, VectorXd &dya, MatrixXd &Dya, MatrixXd &DLfya);
    void computeDesired_inair(VectorXd &yd, VectorXd &dyd, VectorXd &d2yd);

    void computeActual_standing(VectorXd &ya, VectorXd &dya, MatrixXd &Dya, MatrixXd &DLfya);
    void computeDesired_standing(VectorXd &yd, VectorXd &dyd, VectorXd &d2yd, VectorXd &radio);



    void updateTurning(double yawUpdate);
    void updateRaibert(double xVd, double yVd);
    void updateAccelerations(double xVd, double yVd);
    void updateForces(double xVd, double yVd);
    void computeLibrary();


    void get_z_traj(VectorXd &d2yd);
    void get_steppingstone_swx_traj(double &ydswx, double &dydswx, double &d2ydswx);
    void get_steppingstone_swy_traj(double &ydswy, double &dydswy, double &d2ydswy);
    void get_steppingstone_swz_traj(double &ydswz, double &dydswz, double &d2ydswz);

    void get_steppingstone_swx_traj_steppinginplace(double &ydswx, double &dydswx, double &d2ydswx);

    void get_steppingstone_comz_traj(double &ydswz, double &dydswz, double &d2ydswz) ;

    void update_turning_yaw(VectorXd &yd, VectorXd &dyd, VectorXd &d2yd);

    //post-impact recalculate parameters
    void update_param();//Ts, lhwdes




    //LIP related functions

    void update_foot_pin_pos(VectorXd q, int iDomain, double &xst, double &yst, double &zst);
    void update_LIP_xz0(double &xc, double &yc, double &z0, double &zc, double &dxc, double &dyc, double &dzc, double &dz0);

    void update_preimpact_xL(double t, double Ts, double &xcminus, double &Lyminus);

    void update_LxLy(double &Lx,double &Ly);
    void update_preimpact_yL(double t, double Ts, double &ycminus, double &Lxminus);


    void get_orbitalenergy(double &E);
    void solve_Ts(double &Ts);

    void get_LIPsol(double t, double z0,double x0, double L0, VectorXd &sol);
    void get_LIPsol_lateral(double t, double z0,double y0, double L0, VectorXd &sol);


    void update_dzcomf(double t, double &udes);
    void update_dzcomf_DCBF(double t, double &udes);

    void update_preimpact_estimation(double t, double Ts);

};


#endif // OUTPUT_HLIP_HPP
