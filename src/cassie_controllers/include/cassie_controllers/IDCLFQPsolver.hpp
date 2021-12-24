#ifndef IDCLFQPSOLVER_HPP
#define IDCLFQPSOLVER_HPP

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

#include <cassie_controllers/OUTPUT_HZD.hpp>
#include <cassie_controllers/OUTPUT_HLIP.hpp>
USING_NAMESPACE_QPOASES

class IDCLFQPsolver {
public:
    IDCLFQPsolver(ros::NodeHandle &nh, cassie_model::Cassie &robot, int control_mode);
    void update( VectorXd &u, OUTPUT_HLIP &output); //update control input
    void reset();
    bool reconfigure();
    void getDebug(VectorXf &dbg);


private:
    struct Config{
        int outputsize;
        int holsize;
        int qsize;
        int usize;
        int othercons_size;
        int relaxation_size;
        int nV;
        int nC;

        int control_mode;

        bool isSim;
        bool isRigid;

        VectorXd output_selec;
        VectorXd Kpy;
        VectorXd Kdy;

        // QP Terms
        int nQPIter;
        double w_outputs;
        MatrixXd W_outputs;
        MatrixXd Reg_Matrix;

        MatrixXd Be;
        MatrixXd contact_pyramid;
        VectorXd lb;
        VectorXd ub;
        VectorXd torque_bounds;

        // Parameter checker
        ros_utilities::ParamChecker paramChecker;

        // Methods
        void init();
        void reconfigure();
    } config;
    struct Cache {
        // QP cache allocation
        MatrixXd Jc;
        MatrixXd dJc;
        MatrixXd Js;
        MatrixXd dJs;
        MatrixXd Jcs;
        MatrixXd dJcs;

        MatrixXd Proj;

        VectorXd b_y;
        VectorXd d2y;

        //qp solution
        VectorXd qpsol;
        VectorXd ddqtar;
        VectorXd u;
        VectorXd Fdes;


        //QP: min 1/2*X'*G*X + X'*g
        //    s.t. lbA <= AX <= ubA
        //    s.t. lb <= X <= ub
        Eigen::Matrix<double,Dynamic,Dynamic,RowMajor> G;
        VectorXd g;
        Eigen::Matrix<double,Dynamic,Dynamic,RowMajor> Aconstr;
        VectorXd lbA;
        VectorXd ubA;

        void init(Config *config);
        void reset();

    } cache;

    struct Memory{
        VectorXd u_prev;
        bool qp_initialized;
        void init();
        void reset();
    }memory;

    ros::NodeHandle *nh;
    SQProblem *qpsolver;

    // Pointer to robot model
    cassie_model::Cassie *robot;

    // Gait phasing variable
    PhaseVariable phase;

    // Swing leg tarsus ik solver
    RigidTarsusSolver tarsusSolver;

    VectorXd getTorqueQP(OUTPUT_HLIP &output);
    VectorXd getTorqueQP_compliant(OUTPUT_HLIP &output);
};















#endif //IDCLFQPSOLVER_HPP
