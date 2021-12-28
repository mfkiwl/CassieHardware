/**
 given radio input (user command) and output_option (either Xiaobin's (0) or Jenna's (1) option)
 filter radio input as needed
 compute output
*/

#include <cassie_controllers/walking_onedomain.hpp>
#include <cassie_controllers/OUTPUT_HLIP.hpp>
#include <cassie_common_toolbox/motion_transition.hpp>
#include <cassie_common_toolbox/RadioButtonMap.hpp>
#include <cassie_controllers/feedforward_controller.hpp>
#include <cassie_common_toolbox/bezier_tools.hpp>
#include <roslib_utilities/ros_package_utilities.hpp>
#include <control_utilities/limits.hpp>
#include <cassie_common_toolbox/linear_interpolation.hpp>

USING_NAMESPACE_QPOASES
using namespace control_utilities;

void OUTPUT_HLIP::Cache::init(Config* config) {

    this->ya.resize(config->outputsize);
    this->dya.resize(config->outputsize);
    this->Dya.resize(config->outputsize, 44);
    this->DLfya.resize(config->outputsize, 44);

    this->yd.resize(config->outputsize);
    this->dyd.resize(config->outputsize);
    this->d2yd.resize(config->outputsize);

    this->ddqd.resize(22);
    this->uff.resize(10);
    this->pd.resize(2);
    this->vd.resize(2);
    this->Fd.resize(7);

    int N = config->MPC_N;
    this->G.resize(3 * N + 2, 3 * N + 2);
    this->g.resize(3 * N + 2);
    this->Aconstr.resize(2 * N, 3 * N + 2);
    this->lbA.resize(2 * N);
    this->ubA.resize(2 * N);
    this->mpcsol.resize(3 * N + 2);

    // Initialize matrices
    this->reset();
}

void OUTPUT_HLIP::Cache::reset() {
    this->ya.setZero();
    this->dya.setZero();
    this->Dya.setZero();
    this->DLfya.setZero();

    this->yd.setZero();
    this->dyd.setZero();
    this->d2yd.setZero();

    this->ddqd.setZero();
    this->uff.setZero();
    this->pd.setZero();
    this->vd.setZero();
    this->Fd.setZero();

    this->udes = 0;
    this->Ly = 0;
    this->Lx = 0;
    this->xcLIP = 0;
    this->z0LIP = 0;
    this->zcLIP = 0;
    this->dxcLIP = 0;
    this->dzcLIP = 0;
    this->dz0LIP = 0;
    this->justimpacted = false;
    this->isDSP = false;

    this->xcLIP_minus = 0;
    this->Ly_minus = 0;
    this->z0_minus = 0;

    this->Enow = 0;

    this->G.setZero();
    this->g.setZero();
    this->Aconstr.setZero();
    this->lbA.setZero();
    this->ubA.setZero();
    this->mpcsol.setZero();
}

void OUTPUT_HLIP::Memory::init() {

    this->reset();
}

void OUTPUT_HLIP::Memory::reset() {
    this->timer.restart();

    this->iDomain = 1;
    this->iDomainlast = 0;
    this->ithstep = 0;
    this->isInitialized = false;

    this->readyToStop = false;
    this->queueStop = false;

    this->qp_initialized = false;
}

void OUTPUT_HLIP::Param::init() {
    this->alpha0.resize(9);
    this->dalpha0.resize(9);
    this->alphaf.resize(9);
    this->reset();
}

void OUTPUT_HLIP::Param::reset() {
    this->Ts = .5;
    this->ldes = .5;
    this->hdes = 0;
    this->wdes = 0;
    this->Edes = 0;
    this->xratio = 0;

    this->E0 = 0;

    this->x_pivot = 0;
    this->y_pivot = 0;
    this->z_pivot = 0;

    this->ldesnext = this->ldes;
    this->hdesnext = this->hdes;
    this->hdesprev = 0;


    this->alpha0.setZero();
    this->dalpha0.setZero();
    this->alphaf.setZero();
}

void OUTPUT_HLIP::Config::init() {
    int N = MPC_N;
    this->lb.resize(3 * N + 2);
    this->ub.resize(3 * N + 2);
    this->lb << -INFTY * VectorXd::Ones(3 * N + 2);
    this->ub << INFTY * VectorXd::Ones(3 * N + 2);
    this->lb.segment(2 * N + 2, N) << -9.81 * VectorXd::Ones(N);
    this->ub.segment(2 * N + 2, N) << 20 * VectorXd::Ones(N);
}

void OUTPUT_HLIP::Config::reconfigure() {
    this->isSim = false;
    this->useHLIP = false;
    this->useDCBF = false;
    ros::param::get("/cassie/is_simulation", this->isSim);
    this->paramChecker.checkAndUpdate("useHLIP", this->useHLIP);
    this->paramChecker.checkAndUpdate("useDCBF", this->useDCBF);
    this->paramChecker.checkAndUpdate("nDomain", this->nDomain);
    this->paramChecker.checkAndUpdate("time_scale", this->time_scale);
    this->paramChecker.checkAndUpdate("vx_offset", this->vx_offset);
    this->paramChecker.checkAndUpdate("vy_offset", this->vy_offset);

    this->paramChecker.checkAndUpdate("stoppable_velocity_threshold", this->stoppable_velocity_threshold);

    this->paramChecker.checkAndUpdateYaml("bh", this->bh);
    this->paramChecker.checkAndUpdate("z0des", this->z0des);
    this->paramChecker.checkAndUpdate("zsw_max", this->zsw_max);
    this->paramChecker.checkAndUpdate("zsw_neg", this->zsw_neg);
    this->paramChecker.checkAndUpdate("MPC_N", this->MPC_N);
    this->paramChecker.checkAndUpdate("xratio", this->xratio);
    this->paramChecker.checkAndUpdate("Edes", this->Edes);
    this->paramChecker.checkAndUpdateYaml("stonex", this->stonex);
    this->paramChecker.checkAndUpdateYaml("stonez", this->stonez);
    this->paramChecker.checkAndUpdate("wdes", this->wdes);
    this->paramChecker.checkAndUpdate("HLIP_Ts", this->HLIP_Ts);
    this->paramChecker.checkAndUpdate("HLIP_vxd", this->HLIP_vxd);
    this->paramChecker.checkAndUpdate("HLIP_vyd", this->HLIP_vyd);
    this->paramChecker.checkAndUpdate("HLIP_udes", this->HLIP_udes);

    this->paramChecker.checkAndUpdate("Edes_gamma_in", this->Edes_gamma_in);
    this->paramChecker.checkAndUpdate("Edes_gamma_out", this->Edes_gamma_out);
    this->paramChecker.checkAndUpdate("Edes_eps", this->Edes_eps);
    if (this->control_mode == 0) {
        // standing
        this->paramChecker.checkAndUpdate("nom_stand_height", this->nom_stand_height);
        this->paramChecker.checkAndUpdate("stand_radio_ratio", this->stand_radio_ratio);
    }
}

OUTPUT_HLIP::OUTPUT_HLIP(ros::NodeHandle& nh, cassie_model::Cassie& robot, int control_mode) : nh(&nh), tarsusSolver(robot) {
    this->robot = &robot;

    this->config.control_mode = control_mode;

    if (this->config.control_mode == 1) {
        // walking
        this->config.outputsize = 9;
        //    this->config.holsize = 12;
        //    this->config.qsize = 22;
        //    this->config.usize = 10;
    }
    else if (this->config.control_mode == 0) {
        // standing
        this->config.outputsize = 6;
    }
    else if (this->config.control_mode == -1) {
        // in the air
        this->config.outputsize = 10;
    }
    else {
        ROS_ERROR("INVALID CONTROL MODE");
    }

    // Parameter checker
    this->config.paramChecker.init(nh.getNamespace() + "/HLIP");

    // All the storage
    this->reconfigure();
    this->cache.init(&this->config);
    this->memory.init();
    this->config.init();
    this->param.init();

    //create MPC solver
    mpcsolver = new SQProblem(3 * this->config.MPC_N + 2, 2 * this->config.MPC_N,
        HST_SEMIDEF); // (num vars, num constr)

// Set QP Options
    Options options;
    //    options.setToMPC();
    options.enableRegularisation = BT_FALSE;//BT_FALSE;
    options.setToDefault();
    options.printLevel = PL_LOW;//PL_MEDIUM;
    mpcsolver->setOptions(options);

}

void OUTPUT_HLIP::reset() {
    this->cache.reset();
    this->memory.reset();

    this->lpVaX.reset();
    this->lpVaY.reset();

    this->tarsusSolver.reset();
}

bool OUTPUT_HLIP::reconfigure() {
    std::cout << "Polling rosparams under: " << this->config.paramChecker.node.getNamespace() << std::endl;


    this->config.reconfigure();
    //    this->phase.reconfigure(this->config.gaitlib.phaseRange, this->config.time_scale);

    return true;
}

void OUTPUT_HLIP::update(VectorXd& radio) {

    if (this->config.control_mode == 1) {
        //walking
        /*
        //    // update contact with this->robot->leftContact && this->robot->rightContact
        //    if (this->robot->leftContact > this->robot->rightContact){
        //        this->memory.iDomain = 1;
        //    }else if (this->robot->leftContact < this->robot->rightContact ){
        //        this->memory.iDomain = 0;
        //    } else{
        //        this->memory.iDomain = this->memory.iDomainlast;
        //    }
        //
        //    if(this->memory.iDomain != this->memory.iDomainlast){
        //        this->cache.justimpacted = true;
        //    }else{
        //        this->cache.justimpacted = false;
        //    }

        //    this->memory.iDomainlast = this->memory.iDomain;
        */

        //try add DSP (bound is from ground reaction force)
        if (this->robot->leftContact > 5 && this->robot->rightContact > 5) {
            this->cache.isDSP = true;
        }
        else {
            this->cache.isDSP = false;
        }

        // Compute the phase and average velocity
        /*this->robot->dq(BasePosX) += this->config.vx_offset;

        if (this->memory.iDomain == 0) {
            this->robot->dq(BasePosY) += this->config.vy_offset;
        } else {
            this->robot->dq(BasePosY) -= this->config.vy_offset;
        }
        */
        if (this->cache.justimpacted || this->memory.ithstep == 0) {
            this->computeActual(this->cache.ya, this->cache.dya, this->cache.Dya, this->cache.DLfya);
            //after compute actual
            this->param.alpha0 = this->cache.ya;
            this->param.dalpha0 = this->cache.dya;
            //get stance foot position
            this->update_LIP_xz0(this->cache.xcLIP, this->cache.ycLIP, this->cache.z0LIP, this->cache.zcLIP,
                this->cache.dxcLIP, this->cache.dycLIP, this->cache.dzcLIP, this->cache.dz0LIP);
            this->update_LxLy(this->cache.Lx, this->cache.Ly);
            this->get_orbitalenergy(this->param.E0);

            if (this->memory.ithstep < this->config.stonex.size() - 2) {
                this->param.ldes = this->config.stonex(this->memory.ithstep + 1) - this->config.stonex(this->memory.ithstep);
                this->param.hdes = this->config.stonez(this->memory.ithstep + 1) - this->config.stonez(this->memory.ithstep);
                this->param.ldesnext =
                    this->config.stonex(this->memory.ithstep + 2) - this->config.stonex(this->memory.ithstep + 1);
                this->param.hdesnext =
                    this->config.stonez(this->memory.ithstep + 2) - this->config.stonez(this->memory.ithstep + 1);
                if (this->memory.ithstep > 0) {
                    this->param.hdesprev = this->config.stonez(this->memory.ithstep) - this->config.stonez(this->memory.ithstep - 1);
                }

            }
            else {
                this->param.ldes = .3;
                this->param.hdes = 0;
                this->param.ldesnext = .3;
                this->param.hdesnext = 0;
                this->param.hdesprev = 0;
            }

            this->param.xratio = this->config.xratio;
            this->param.Edes = this->config.Edes;
            this->param.wdes = this->config.wdes;

            if (!this->config.useHLIP) {
                //stepping stone
                if (this->memory.ithstep < 4) {
                    this->param.Edes = .3;
                    this->param.wdes = .4;
                    this->param.xratio = this->config.xratio;
                    this->param.Ts = this->config.HLIP_Ts;
                }
                else {
                    if (this->param.ldesnext >= 0.6) {
                        this->param.Edes = 0.9;
                        this->param.wdes = .4;
                    }
                    //                    if (this->param.ldes >=0.6){
                    //                        this->param.xratio = .7;
                    //                    }
                    this->solve_Ts(this->param.Ts);
                }
                std::cout << "Ts: " << this->param.Ts << std::endl;
            }
            else {
                // HLIP stepping
                this->param.wdes = this->config.wdes;
                this->param.Ts = this->config.HLIP_Ts; //for HLIP stepping
                //        VectorXd TsList(30); TsList.setZero();
                //        TsList << .4, .3, .5 , .4, .3, .4, .3, .4, .5, .3,.4, .3, .5 , .4, .3, .4, .3, .4, .5, .3,.4, .3, .5 , .4, .3, .4, .3, .4, .5, .3;
                //        this->param.Ts = TsList(this->memory.ithstep);
            }

            //get desired preimpact posture -> alphaf
            //zcom_f = z0des + xcom_f*hdes/ldes
            double tmp = this->param.xratio * this->param.hdes + this->param.hdesnext / this->param.ldesnext * (this->param.xratio - 1.0) * this->param.ldes + this->param.hdes;
            //        this->param.alphaf << 0, 0, 0, this->config.z0des + this->param.xratio * this->param.hdes, this->param.hdes, this->param.ldes, 0, 0, 0;
            this->param.alphaf << 0, 0, 0, this->config.z0des + tmp / 2.0, this->param.hdes, this->param.ldes, 0, 0, 0;
            this->config.paramChecker.checkAndUpdate("HLIP_vxd", this->config.HLIP_vxd);
            this->config.paramChecker.checkAndUpdate("HLIP_vyd", this->config.HLIP_vyd);

            //reconfigure phase
            Vector2d PhaseRange;
            PhaseRange << 0, this->param.Ts;
            phase.reconfigure(PhaseRange, this->config.time_scale);

            //if just impact, update parameters
            this->memory.ithstep += 1;

            // Motion transition on a first loop
            this->memory.timer.restart();
        }
        else {
            //update parameters needed for actual and desired output
            this->update_LIP_xz0(this->cache.xcLIP, this->cache.ycLIP, this->cache.z0LIP, this->cache.zcLIP,
                this->cache.dxcLIP, this->cache.dycLIP, this->cache.dzcLIP, this->cache.dz0LIP);
            //        this->update_Ly(this->cache.Ly);
            this->update_LxLy(this->cache.Lx, this->cache.Ly);
        }

        if (abs(this->param.hdes) > 0.01 || abs(this->param.hdesprev) > 0.01) {
            double tmp = std::max(this->param.hdes, this->param.hdesprev);
            this->config.zsw_max = 0.1 + std::max(tmp, 0.0);
        }
        else {
            this->config.zsw_max = 0.1;
        }

        this->phase.update(this->memory.timer.elapsed() * this->config.time_scale);

        this->update_preimpact_estimation(this->phase.pActual, this->param.Ts);

        // Pull the radio outputs for movement
        bool requestTransition = (radio(SB) < 1.0);

        // Get the outputs and update kinematics
        this->robot->kinematics.update(this->robot->model, this->robot->q, this->robot->dq);
        this->computeActual(this->cache.ya, this->cache.dya, this->cache.Dya, this->cache.DLfya);
        this->computeDesired(this->cache.yd, this->cache.dyd, this->cache.d2yd);


        // Update guard
        this->computeGuard();

        this->cache.uff.setZero();
        this->cache.Fd.setZero();
        this->cache.ddqd.setZero();

        this->cache.stepW_log = 0;
        this->cache.stepW_log = this->cache.udes;
        this->cache.dstepW_log = 0;
        this->cache.dstepW_log = this->cache.d2yd(zCOM);
    }
    //standing
    else if (this->config.control_mode == 0) {

        if (!this->memory.isInitialized) {
            this->memory.timer.restart();
            this->memory.isInitialized = true;
            this->computeActual_standing(this->cache.ya, this->cache.dya, this->cache.Dya, this->cache.DLfya);
            this->param.alpha0 = this->cache.ya;
            this->config.yaw_ref = this->cache.ya(5);
        }
        this->computeActual_standing(this->cache.ya, this->cache.dya, this->cache.Dya, this->cache.DLfya);
        this->computeDesired_standing(this->cache.yd, this->cache.dyd, this->cache.d2yd, radio);
    }
    // in air
    else if (this->config.control_mode == -1) {
        if (!this->memory.isInitialized) {
            this->memory.timer.restart();
            this->memory.isInitialized = true;
        }
        this->computeActual_inair(this->cache.ya, this->cache.dya, this->cache.Dya, this->cache.DLfya);
        this->computeDesired_inair(this->cache.yd, this->cache.dyd, this->cache.d2yd);
    }
}

//time-based domain switching
void OUTPUT_HLIP::computeGuard() {
    // Check if we are stoppable
    //    bool stoppable = ((fabs(this->memory.velocityAllocator(0)) + fabs(this->memory.velocityAllocator(1))) / this->memory.nVelocitySamplesThisStep < this->config.stoppable_velocity_threshold);
    bool guard = (this->phase.tau >= 1.0);

    //    if (this->memory.iDomain == 0) {
    //        if (this->phase.tau >= 0.75)
    //            guard = guard || ((this->robot->leftContact > 0.25) && this->config.use_contact_switching);
    //    } else {
    //        if (this->phase.tau >= 0.75)
    //            guard = guard || ((this->robot->rightContact > 0.25) && this->config.use_contact_switching);
    //    }

    // If guard was triggered, handle domain switch
//        this->memory.readyToStop = false;
    if (guard) {
        //        if (this->memory.queueStop)
        //todo add stopable
        this->memory.readyToStop = true;

        // Increment
        this->nextDomain();
    }
    else {
        this->cache.justimpacted = false;
    }
}

void OUTPUT_HLIP::nextDomain() {
    // Increment the domain indexing
    this->memory.iDomain += 1;
    if (this->memory.iDomain >= this->config.nDomain)
        this->memory.iDomain = 0;
    //    this->memory.timer.restart();
    this->cache.justimpacted = true;
}

// get actual and desired output function
void OUTPUT_HLIP::computeActual(VectorXd& ya, VectorXd& dya, MatrixXd& Dya, MatrixXd& DLfya) {
    if (this->memory.iDomain == 0) {
        VectorWrap ya_(ya), dya_(dya);
        SymFunction::yaRightStance_new(ya_, this->robot->q);
        SymFunction::dyaRightStance_new(dya_, this->robot->q, this->robot->dq);
        SymFunction::Dya_RightStanceActual_new(Dya, this->robot->q);
        SymFunction::DLfya_RightStanceActual_new(DLfya, this->robot->q, this->robot->dq);
    }
    else {
        VectorWrap ya_(ya), dya_(dya);
        SymFunction::yaLeftStance_new(ya_, this->robot->q);
        SymFunction::dyaLeftStance_new(dya_, this->robot->q, this->robot->dq);
        SymFunction::Dya_LeftStanceActual_new(Dya, this->robot->q);
        SymFunction::DLfya_LeftStanceActual_new(DLfya, this->robot->q, this->robot->dq);
    }
}

void OUTPUT_HLIP::computeDesired(VectorXd& yd, VectorXd& dyd, VectorXd& d2yd) {
    if (this->config.useHLIP || (!this->config.useHLIP && this->memory.ithstep <= 4)) {
        this->get_steppingstone_swx_traj_steppinginplace(yd(SwingStepx), dyd(SwingStepx), d2yd(SwingStepx));
        //        this->get_steppingstone_comz_traj(yd(zCOM),dyd(zCOM),d2yd(zCOM));
        this->cache.udes = this->config.HLIP_udes;
        this->get_z_traj(d2yd);
        this->cache.yd(zCOM) = this->cache.ya(zCOM);
        this->cache.dyd(zCOM) = this->cache.dya(zCOM);
    }
    else {
        this->get_steppingstone_swx_traj(yd(SwingStepx), dyd(SwingStepx), d2yd(SwingStepx));
        //update pre-impact dzcom: udes
        if (this->config.useDCBF) {
            this->update_dzcomf_DCBF(this->phase.pActual, this->cache.udes);
        }
        else {
            this->update_dzcomf(this->phase.pActual, this->cache.udes);
        }

        //        if (this->memory.ithstep <= 2) {
        //            //        this->get_steppingstone_comz_traj(yd(zCOM),dyd(zCOM),d2yd(zCOM));
        //            this->cache.udes = this->config.HLIP_udes;
        //        }


        //        this->cache.udes = 0;
        std::cout << "udes: " << this->cache.udes << std::endl;
        //update MPC ddzcom -> d2yd
        this->get_z_traj(d2yd);

        this->cache.yd(zCOM) = this->cache.ya(zCOM);
        this->cache.dyd(zCOM) = this->cache.dya(zCOM);
    }
    this->get_steppingstone_swy_traj(yd(SwingStepy), dyd(SwingStepy), d2yd(SwingStepy));
    this->get_steppingstone_swz_traj(yd(SwingStepz), dyd(SwingStepz), d2yd(SwingStepz));

    yd.segment(0, 3).setZero();
    dyd.segment(0, 3).setZero();
    d2yd.segment(0, 3).setZero();
    yd.segment(7, 2).setZero();
    dyd.segment(7, 2).setZero();
    d2yd.segment(7, 2).setZero();

    //    if (this->phase.tau>.75 && this->cache.isDSP){
    //        yd.segment(SwingStepz,3) = this->cache.ya.segment(SwingStepz,3);
    //        dyd.segment(SwingStepz,3)= this->cache.dya.segment(SwingStepz,3);
    //        d2yd.segment(SwingStepz,3).setZero();
    //    }

    this->update_turning_yaw(yd, dyd, d2yd);


}

void OUTPUT_HLIP::computeActual_inair(VectorXd& ya, VectorXd& dya, MatrixXd& Dya, MatrixXd& DLfya) {
    MatrixXd ytmp(5, 1);
    MatrixXd Jtmp(5, 22);
    MatrixXd dJtmp(5, 22);
    ytmp.setZero();
    Jtmp.setZero();
    dJtmp.setZero();
    Dya.setZero();
    DLfya.setZero();

    SymFunction::p_leftSole_constraint(ytmp, this->robot->q);
    SymFunction::J_leftSole_constraint(Jtmp, this->robot->q);
    SymFunction::Jdot_leftSole_constraint(dJtmp, this->robot->q, this->robot->dq);

    ya.segment(0, 5) << ytmp;
    Dya.block(0, 0, 5, 22) << Jtmp;
    dya.segment(0, 5) << Jtmp * this->robot->dq;
    DLfya.block(0, 0, 5, 22) << dJtmp;

    SymFunction::p_rightSole_constraint(ytmp, this->robot->q);
    SymFunction::J_rightSole_constraint(Jtmp, this->robot->q);
    SymFunction::Jdot_rightSole_constraint(dJtmp, this->robot->q, this->robot->dq);
    ya.segment(5, 5) << ytmp;
    Dya.block(5, 0, 5, 22) << Jtmp;
    dya.segment(5, 5) << Jtmp * this->robot->dq;
    DLfya.block(5, 0, 5, 22) << dJtmp;

}

void OUTPUT_HLIP::computeDesired_inair(VectorXd& yd, VectorXd& dyd, VectorXd& d2yd) {
    yd.setZero();
    dyd.setZero();
    d2yd.setZero();
    double time = ros::Time::now().toSec();
    //    double time = this->memory.timer.elapsed();
    //    std::cout << "time: " <<time<< std::endl;

    yd(0) = .1 + cos(time) / 10;
    yd(5) = .1 - cos(time) / 10;
    yd(1) = .2 + cos(time) / 10;
    yd(6) = -.2 + cos(time) / 10;
    yd(2) = -.9 + cos(time) / 10;
    yd(7) = -.9 + sin(time) / 10;

    dyd(0) = -sin(time) / 10;
    dyd(5) = sin(time) / 10;
    dyd(1) = -sin(time) / 10;
    dyd(6) = -sin(time) / 10;
    dyd(2) = -sin(time) / 10;
    dyd(7) = cos(time) / 10;

    d2yd(0) = -cos(time) / 10;
    d2yd(5) = cos(time) / 10;
    d2yd(1) = -cos(time) / 10;
    d2yd(6) = -cos(time) / 10;
    d2yd(2) = -cos(time) / 10;
    d2yd(7) = -sin(time) / 10;


}

void OUTPUT_HLIP::computeActual_standing(VectorXd& ya, VectorXd& dya, MatrixXd& Dya, MatrixXd& DLfya) {
    //output:
    //size = 6
    //COM x,y,z position relative to mid-point of two stance pivot & pelvis roll, pitch, yaw

    VectorWrap ya_(ya), dya_(dya);
    SymFunction::yaStandCOM_new(ya_, this->robot->q);
    SymFunction::dyaStandCOM_new(dya_, this->robot->q, this->robot->dq);
    SymFunction::Dya_standCOM_new(Dya, this->robot->q);
    SymFunction::DLfya_standCOM_new(DLfya, this->robot->q, this->robot->dq);

}

void OUTPUT_HLIP::computeDesired_standing(VectorXd& yd, VectorXd& dyd, VectorXd& d2yd, VectorXd& radio) {
    yd.setZero();
    dyd.setZero();
    d2yd.setZero();
    double time = ros::Time::now().toSec();
    //    double time = this->memory.timer.elapsed();
//    std::cout << "time: " << time << std::endl;

//    //left: x y z pitch yaw right: x y z pitch yaw
//    yd(2) = .73;

    double T = 1.0; // use 3 seconds to converge to nominal
    double tmp = this->config.nom_stand_height + this->config.stand_radio_ratio * radio(RadioButtonMap::LS);

    double bht, dbht, d2bht;

    if (this->memory.timer.elapsed() < T) {
        bht = bezier_tools::bezier(this->config.bh, this->memory.timer.elapsed() / T);
        dbht = bezier_tools::dbezier(this->config.bh, this->memory.timer.elapsed() / T);
        d2bht = bezier_tools::d2bezier(this->config.bh, this->memory.timer.elapsed() / T);
        dbht = dbht / T;
        d2bht = d2bht / pow(T, 2);
        yd(2) = (1 - bht) * this->param.alpha0(2) + bht * tmp;
        dyd(2) = (dbht) * (tmp - this->param.alpha0(2));
        d2yd(2) = (d2bht) * (tmp - this->param.alpha0(2));
    }
    else {
        yd(2) = tmp;
        dyd(2) = 0;
        d2yd(2) = 0;
    }



    yd(5) = this->config.yaw_ref;
}

void OUTPUT_HLIP::get_z_traj(VectorXd& d2yd) {
    double time2impact = this->param.Ts - this->phase.pActual;
    double dt_des;
    double zcoeff = 100000000;
    ros::param::get("/cassie/locomotion_control/dt", dt_des);
    //    ros::param::get("/cassie/locomotion_control/zcoeff", zcoeff);
    int N = this->config.MPC_N;

    if (time2impact < N * dt_des) {
        //        N = floor(time2impact / dt_des);
        //        this->cache.G.resize(3 * N + 2, 3 * N + 2);
        //        this->cache.g.resize(3 * N + 2);
        //        this->cache.Aconstr.resize(2 * N, 3 * N + 2);
        //        this->cache.lbA.resize(2 * N);
        //        this->cache.ubA.resize(2 * N);
        //
        //        this->config.lb.resize(3 * N + 2);
        //        this->config.ub.resize(3 * N + 2);
        //        this->config.lb << -INFTY * VectorXd::Ones(3 * N + 2);
        //        this->config.ub << INFTY * VectorXd::Ones(3 * N + 2);
        //        this->config.lb.segment(2 * N + 2, N) << -10 * VectorXd::Ones(N);
        //
        //        //create MPC solver
        //        mpcsolver = new SQProblem(3 * this->config.MPC_N + 2, 2 * this->config.MPC_N,
        //                                  HST_SEMIDEF); // (num vars, num constr)
        //        // Set QP Options
        //        Options options;
        //        options.setToMPC();
        //        options.enableRegularisation = BT_FALSE;//BT_FALSE;
        //        //options.setToDefault();
        //        options.printLevel = PL_LOW;//PL_MEDIUM;
        //        mpcsolver->setOptions(options);

        d2yd(zCOM) = (this->cache.udes - this->cache.dzcLIP) / time2impact;
        //        d2yd(zCOM) = (this->cache.udes - this->cache.dya(zCOM)) / time2impact;
        d2yd(zCOM) = std::max(d2yd(zCOM), -this->config.g);
    }
    else {


        double dt = time2impact / N;

        //zoh for double integrator
        MatrixXd Ad(2, 2);
        VectorXd Bd(2);
        Ad << 1, dt,
            0, 1;
        Bd << pow(dt, 2) / 2,
            dt;
        Vector2d z0, zN;
        z0 << this->cache.zcLIP, this->cache.dzcLIP;
        //    z0 << this->cache.ya(zCOM), this->cache.dya(zCOM);
        zN << this->param.alphaf(zCOM), this->cache.udes;
        if (time2impact > this->param.Ts / 3) {
            zN(1) = 0;
            //        zN(1) = this->cache.dzc_minus;
        }

        //X = [z0; z1; ... zN; u0; u1; ... uN-1]

        double zref, vref;
        double vcoeff;
        /*
    //old: have 15s+ walking
        for (int i = 0; i < N; i++) {
            //dynamics constriants: zN+1 = Ad*zN + Bd*uN
            this->cache.Aconstr.block(2 * i, 2 * i, 2, 2) = -Ad;
            this->cache.Aconstr.block(2 * i, 2 * i + 2, 2, 2) = MatrixXd::Identity(2, 2);
            this->cache.Aconstr.block(2 * i, 2 * N + 2 + i, 2, 1) = -Bd;
            //Cost: sum(k = from 0 to N) k*u(K)'u(k) + zcoeff*(zpos(k)-zref(k))*(zpos(k)-zref(k)) + zvel(k)*zvel(k);
            zcoeff = 10000 * pow(10,i+1);
            this->cache.G(2 * i, 2 * i) = zcoeff;
            this->cache.G(2 * i + 1, 2 * i + 1) = 1;
            this->cache.G(2 * N + 2 + i, 2 * N + 2 + i) = i + 1;
            zref = z0(0) + (zN(0) - z0(0)) * (i + 1) / (N + 1);
            this->cache.g(2 * i) = -zref * zcoeff;
        }
         */

        for (int i = 0; i < N; i++) {
            //dynamics constriants: zN+1 = Ad*zN + Bd*uN
            this->cache.Aconstr.block(2 * i, 2 * i, 2, 2) = -Ad;
            this->cache.Aconstr.block(2 * i, 2 * i + 2, 2, 2) = MatrixXd::Identity(2, 2);
            this->cache.Aconstr.block(2 * i, 2 * N + 2 + i, 2, 1) = -Bd;
            //Cost: sum(k = from 0 to N) k*u(K)'u(k) + zcoeff*(zpos(k)-zref(k))*(zpos(k)-zref(k)) + zvel(k)*zvel(k);
    //        this->cache.G(2 * i + 1, 2 * i + 1) = 1000 ;
            this->cache.G(2 * N + 2 + i, 2 * N + 2 + i) = pow(i + 1, 2) * 1000;
        }

        VectorXd zcoeff_list(6), vcoeff_list(6);
        //    zcoeff_list <<10,10,10,100,100,1000;
        vcoeff_list << 100, 100, 100, 100, 100, 100;
        zcoeff_list << 1000, 1000, 1000, 1000, 10000, 10000000000;
        for (int i = 0; i < N + 1; i++) {
            zcoeff = 1;// pow(50,i+1)/2000;
            zcoeff = zcoeff_list(i);
            this->cache.G(2 * i, 2 * i) = zcoeff;
            zref = z0(0) + (zN(0) - z0(0)) * i / N;
            //        vref = (zN(0) - z0(0))/time2impact; //constant velocity reference
            vref = z0(1) + (zN(1) - z0(1)) * i / N;
            this->cache.g(2 * i) = -zref * zcoeff;

            this->cache.G(2 * i + 1, 2 * i + 1) = vcoeff_list(i);
            this->cache.g(2 * i + 1) = -vref * vcoeff_list(i);
        }

        //z0&dzN constraint
        this->config.lb.segment(0, 2) = z0;
        this->config.ub.segment(0, 2) = z0;


        double zCOMbound = 0.1;
        double dzCOMbound = 0.005;
        //    this->config.lb(2 * N) = zN(0)-zCOMbound;
        //    this->config.ub(2 * N) = zN(0)+zCOMbound;

        this->config.lb(2 * N + 1) = zN(1) - dzCOMbound;
        this->config.ub(2 * N + 1) = zN(1) + dzCOMbound;
        // Flatten matrices in row-major format.
        Map<VectorXd> Gflat(this->cache.G.data(), this->cache.G.size());
        Map<VectorXd> AConstrFlat(this->cache.Aconstr.data(), this->cache.Aconstr.size());


        int_t nWSR = 100;
        qpOASES::returnValue success = RET_QP_NOT_SOLVED;
        if (this->memory.qp_initialized) {
            success = this->mpcsolver->hotstart(static_cast<real_t*>(Gflat.data()),
                static_cast<real_t*>(this->cache.g.data()),
                static_cast<real_t*>(AConstrFlat.data()),
                static_cast<real_t*>(this->config.lb.data()),
                static_cast<real_t*>(this->config.ub.data()),
                static_cast<real_t*>(this->cache.lbA.data()),
                static_cast<real_t*>(this->cache.ubA.data()),
                nWSR);
        }
        else {
            success = this->mpcsolver->init(static_cast<real_t*>(Gflat.data()),
                static_cast<real_t*>(this->cache.g.data()),
                static_cast<real_t*>(AConstrFlat.data()),
                static_cast<real_t*>(this->config.lb.data()),
                static_cast<real_t*>(this->config.ub.data()),
                static_cast<real_t*>(this->cache.lbA.data()),
                static_cast<real_t*>(this->cache.ubA.data()),
                nWSR);
            this->memory.qp_initialized = true;
        }

        // Get solution
        VectorXd sol(3 * N + 2);
        sol.setZero();
        this->mpcsolver->getPrimalSolution(static_cast<real_t*>(sol.data()));
        this->cache.mpcsol = sol;
        //    std::cout << "MPCsolution" << sol << std::endl;
        if (success == SUCCESSFUL_RETURN) {
            d2yd(zCOM) = sol(2 * N + 2);
        }
        else {
            ROS_WARN("THE QP DID NOT CONVERGE!");
            this->mpcsolver->reset();
            this->memory.qp_initialized = false;
            d2yd(zCOM) = (this->cache.udes - z0(1)) / time2impact;
            d2yd(zCOM) = std::max(d2yd(zCOM), -this->config.g);
        }

        std::cout << "MPC solved d2yd is: " << d2yd(zCOM) << std::endl;
    }
}

void OUTPUT_HLIP::get_steppingstone_swx_traj(double& ydswx, double& dydswx, double& d2ydswx) {
    double bht, dbht, d2bht;
    bht = bezier_tools::bezier(this->config.bh, this->phase.tau);
    dbht = bezier_tools::dbezier(this->config.bh, this->phase.tau) * this->phase.dtau;
    d2bht = bezier_tools::d2bezier(this->config.bh, this->phase.tau) * pow(this->phase.dtau, 2);

    ydswx = (1 - bht) * this->param.alpha0(SwingStepx) + bht * this->param.alphaf(SwingStepx);
    dydswx = (dbht) * (this->param.alphaf(SwingStepx) - this->param.alpha0(SwingStepx));
    d2ydswx = (d2bht) * (this->param.alphaf(SwingStepx) - this->param.alpha0(SwingStepx));

}

void OUTPUT_HLIP::get_steppingstone_swy_traj(double& ydswy, double& dydswy, double& d2ydswy) {
    double z0 = this->cache.z0LIP;

    double lambda = sqrt(this->config.g / z0);
    double sigma2 = lambda * tanh(this->param.Ts / 2 * lambda);
    double d = pow(lambda, 2) * pow(1 / cosh(lambda * this->param.Ts / 2), 2) * this->config.HLIP_vyd * (this->param.Ts) / (2 * sigma2);
    Vector2d Ydes;
    if (this->memory.iDomain == 1) { //left stance
        Ydes << -this->param.wdes / 2., -sigma2 * this->param.wdes / 2. + d;
    }
    else {
        Ydes << this->param.wdes / 2., sigma2* this->param.wdes / 2. + d;
    }
    double ycLIPminus, Lxminus;

    this->update_preimpact_yL(this->phase.pActual, this->param.Ts, ycLIPminus, Lxminus);

    Vector2d Y, dY;
    Y << this->cache.ycLIP, this->cache.dycLIP;
    dY << this->cache.dycLIP, this->config.g / this->cache.z0LIP * this->cache.ycLIP;


    //    Y << ycLIPminus, -Lxminus/this->cache.z0LIP;
    //    dY << -Lxminus/this->cache.z0LIP, this->config.g/this->cache.z0LIP*ycLIPminus;

    //    // try velocity prediction
    //    Y << ycLIPminus, -Lxminus ;
    //    dY << -Lxminus, this->config.g/this->cache.z0LIP*ycLIPminus;


    Vector2d K;
    K << 1, (cosh(this->param.Ts * lambda) / sinh(this->param.Ts * lambda)) / lambda;

    double stepW = K.dot(Y - Ydes) + 2 * Ydes(0);
    double dstepW = K.dot(dY);

    if (this->memory.iDomain == 0) {
        stepW = clamp(stepW, 0.06, 0.6);
    }
    else {
        stepW = clamp(stepW, -0.6, -0.06);
    }

    //    stepW = 2*Ydes(0);
    //    dstepW = 0;

    double bht, dbht, d2bht;
    bht = bezier_tools::bezier(this->config.bh, this->phase.tau);
    dbht = bezier_tools::dbezier(this->config.bh, this->phase.tau);
    d2bht = bezier_tools::d2bezier(this->config.bh, this->phase.tau);
    dbht = dbht * this->phase.dtau;
    d2bht = d2bht * pow(this->phase.dtau, 2);

    ydswy = (1. - bht) * this->param.alpha0(SwingStepy) + bht * stepW;
    dydswy = -dbht * this->param.alpha0(SwingStepy) + dbht * stepW + bht * dstepW;
    d2ydswy = -d2bht * this->param.alpha0(SwingStepy) + d2bht * stepW + dbht * dstepW +
        dbht * dstepW;// + bht*this->config.g/this->cache.z0LIP*this->cache.ycLIP;

}

void OUTPUT_HLIP::get_steppingstone_swz_traj(double& ydswz, double& dydswz, double& d2ydswz) {
    //    VectorXd bv(10);
    //    bv << this->param.alpha0(SwingStepz), 0, this->config.zsw_max, this->config.zsw_max, this->config.zsw_max, this->config.zsw_max, this->config.zsw_max, 0, this->param.alphaf(SwingStepz)+this->config.zsw_neg, this->param.alphaf(SwingStepz)+this->config.zsw_neg;
    VectorXd bv(6);
    bv << this->param.alpha0(SwingStepz), this->config.zsw_max, this->config.zsw_max, this->config.zsw_max, this->config.zsw_max,
        this->param.alphaf(SwingStepz) + this->config.zsw_neg;
    //    VectorXd bv(6);
    //    bv << this->param.alpha0(SwingStepz), this->config.zsw_max, this->config.zsw_max, this->config.zsw_max, this->config.zsw_max,this->param.alphaf(SwingStepz) + this->config.zsw_neg;
    ydswz = bezier_tools::bezier(bv, this->phase.tau);
    dydswz = bezier_tools::dbezier(bv, this->phase.tau) * this->phase.dtau;
    d2ydswz = bezier_tools::d2bezier(bv, this->phase.tau) * pow(this->phase.dtau, 2);
}

// for HLIP stepping in place debug
void OUTPUT_HLIP::get_steppingstone_swx_traj_steppinginplace(double& ydswx, double& dydswx, double& d2ydswx) {
    double lambda = sqrt(this->config.g / this->cache.z0LIP);
    double sigma1 = lambda * (cosh(this->param.Ts * lambda / 2) / sinh(this->param.Ts * lambda / 2));

    Vector2d Xdes;
    Xdes << this->config.HLIP_vxd / sigma1, this->config.HLIP_vxd;
    Vector2d X;
    Vector2d dX;
    X << this->cache.xcLIP, this->cache.dxcLIP;
    dX << this->cache.dxcLIP, this->config.g / this->cache.z0LIP * this->cache.xcLIP;

    //    double xcLIPminus,Lyminus;
    //    this->update_preimpact_xL(this->phase.pActual, this->param.Ts,xcLIPminus,Lyminus);
    //    Y << xcLIPminus, -Lyminus/this->cache.z0LIP;
    //    dY << -Lyminus/this->cache.z0LIP, this->config.g/this->cache.z0LIP*xcLIPminus;


    Vector2d K;
    K << 1, (cosh(this->param.Ts * lambda) / sinh(this->param.Ts * lambda)) / lambda;
    double stepL = K.dot(X - Xdes) + 2 * Xdes(0);
    double dstepL = K.dot(dX);

    //    double stepL = K.dot(X);
    //    double dstepL = K.dot(dX);


    double bht, dbht, d2bht;
    bht = bezier_tools::bezier(this->config.bh, this->phase.tau);
    dbht = bezier_tools::dbezier(this->config.bh, this->phase.tau);
    d2bht = bezier_tools::d2bezier(this->config.bh, this->phase.tau);
    dbht = dbht * this->phase.dtau;
    d2bht = d2bht * pow(this->phase.dtau, 2);

    ydswx = (1 - bht) * this->param.alpha0(SwingStepx) + bht * stepL;
    dydswx = -dbht * this->param.alpha0(SwingStepx) + dbht * stepL + bht * dstepL;
    d2ydswx = -d2bht * this->param.alpha0(SwingStepx) + d2bht * stepL + dbht * dstepL + dbht * dstepL;
}

void OUTPUT_HLIP::get_steppingstone_comz_traj(double& ydswz, double& dydswz, double& d2ydswz) {
    double bht, dbht, d2bht;
    bht = bezier_tools::bezier(this->config.bh, this->phase.tau);
    dbht = bezier_tools::dbezier(this->config.bh, this->phase.tau);
    d2bht = bezier_tools::d2bezier(this->config.bh, this->phase.tau);
    dbht = dbht * this->phase.dtau;
    d2bht = d2bht * pow(this->phase.dtau, 2);

    ydswz = (1 - bht) * this->param.alpha0(zCOM) + bht * this->param.alphaf(zCOM);
    dydswz = (dbht) * (this->param.alphaf(zCOM) - this->param.alpha0(zCOM));
    d2ydswz = (d2bht) * (this->param.alphaf(zCOM) - this->param.alpha0(zCOM));

    //    d2ydswz= 0;
    //    ydswz = (1-bht)*this->param.alpha0(zCOM) + bht* this->param.alphaf(zCOM);
    //    dydswz = (dbht)* (this->param.alphaf(zCOM)-this->param.alpha0(zCOM)) - (1-bht)*this->param.dalpha0(zCOM);
    //    d2ydswz = (d2bht)* (this->param.alphaf(zCOM)-this->param.alpha0(zCOM));

    //    //try cubic spline
    //    MatrixXd C(4,4);
    //    C << 1, 0, 0, 0,
    //         0, 1, 0, 0,
    //         -3,-2,3, 1,
    //         2, 1, -2,1;
    //    VectorXd coeff(4);
    //    coeff << this->param.alpha0(zCOM), this->param.dalpha0(zCOM), this->param.alphaf(zCOM), 0;
    //    coeff << C*coeff;
    //    ydswz = coeff(0) + this->phase.tau * coeff(1) + pow(this->phase.tau,2) * coeff(2) + pow(this->phase.tau,3) * coeff(3) ;
    //    dydswz = coeff(1) + pow(this->phase.tau,1) * coeff(2) + pow(this->phase.tau,2) * coeff(3) ;
    //    d2ydswz =  pow(this->phase.tau,1) * coeff(2) + pow(this->phase.tau,2) * coeff(3) ;


}


//turning controller
void OUTPUT_HLIP::update_turning_yaw(VectorXd& yd, VectorXd& dyd, VectorXd& d2yd) {
    double YawDes = 0;
    double K = 0.5;

    double yaw_error = this->robot->q(BaseRotZ) - YawDes;

    //    if (abs(yaw_error) > 0.05) {
    double ToYaw = K * yaw_error;
    yd(StanceHipYaw) += ToYaw * bezier_tools::bezier(this->config.bh, this->phase.tau);
    dyd(StanceHipYaw) += ToYaw * bezier_tools::dbezier(this->config.bh, this->phase.tau) * this->phase.dtau;
    d2yd(StanceHipYaw) += ToYaw * bezier_tools::d2bezier(this->config.bh, this->phase.tau) * pow(this->phase.dtau, 2);

    //    }

    yd(SwingHipYaw) += this->param.alpha0(SwingHipYaw) * bezier_tools::bezier(this->config.bh, 1.0 - this->phase.tau);
    dyd(SwingHipYaw) += this->param.alpha0(SwingHipYaw) * bezier_tools::dbezier(this->config.bh, 1.0 - this->phase.tau) * this->phase.dtau;
    d2yd(SwingHipYaw) += this->param.alpha0(SwingHipYaw) * bezier_tools::d2bezier(this->config.bh, 1.0 - this->phase.tau) * pow(this->phase.dtau, 2);


}

//LIP

void OUTPUT_HLIP::update_LIP_xz0(double& xc, double& yc, double& z0, double& zc, double& dxc, double& dyc, double& dzc,
    double& dz0) {

    MatrixXd p_COM(3, 1); //assumed pelvis yaw angle =0
//    MatrixXd J_COM(3, 22);

    if (this->memory.iDomain == 0) {
        //right stance
        SymFunction::p_com_RightStance(p_COM, this->robot->q);
        //        SymFunction::J_com_RightStance(J_COM, this->robot->q);
    }
    else {
        SymFunction::p_com_LeftStance(p_COM, this->robot->q);
        //        SymFunction::J_com_LeftStance(J_COM, this->robot->q);
    }
    xc = p_COM(0, 0);
    yc = p_COM(1, 0);
    zc = p_COM(2, 0);
    z0 = zc - this->param.hdes / this->param.ldes * xc;

    //    Vector3d dp_COM;
    //    dp_COM.setZero();
    //    dp_COM = J_COM * this->robot->dq;
    //    dxc = dp_COM(0);
    //    dyc = dp_COM(1);
    //    dzc = dp_COM(2);


    //    //absolute
    MatrixXd dp_COM(3, 1);
    SymFunction::dp_com_absolute(dp_COM, this->robot->q, this->robot->dq);

    dxc = dp_COM(0, 0);
    dyc = dp_COM(1, 0);
    dzc = dp_COM(2, 0);
    dz0 = dzc - this->param.hdes / this->param.ldes * dxc;

    this->lpVaX.update(dxc);
    this->lpVaY.update(dyc);
    this->lpVaZ.update(dzc);

    dxc = this->lpVaX.getValue();
    dyc = this->lpVaY.getValue();
    dzc = this->lpVaZ.getValue();
    dz0 = dzc - this->param.hdes / this->param.ldes * dxc;

    this->cache.dxcLIP_f = this->lpVaX.getValue();
    this->cache.dycLIP_f = this->lpVaY.getValue();
    this->cache.dzcLIP_f = this->lpVaZ.getValue();
    this->cache.dz0LIP_f = this->cache.dzcLIP_f - this->param.hdes / this->param.ldes * this->cache.dxcLIP_f;
    //    std::cout << "xc,zc,z0,dxc,dz0 : " << xc << ","<< zc <<","<< z0<<","<< dxc <<","<< dz0 << std::endl;
}


void OUTPUT_HLIP::update_preimpact_xL(double t, double Ts, double& xcminus, double& Lyminus) {
    VectorXd sol(2);
    sol.setZero();
    this->get_LIPsol(Ts - t, this->cache.z0LIP, this->cache.xcLIP, this->cache.Ly, sol);
    xcminus = sol(0);
    Lyminus = sol(1);
}

void OUTPUT_HLIP::update_LxLy(double& Lx, double& Ly) {
    Vector3d p_com, dp_com, L3d;
    p_com << this->cache.xcLIP, this->cache.ycLIP, this->cache.zcLIP;
    dp_com << this->cache.dxcLIP, this->cache.dycLIP, this->cache.dzcLIP;
    MatrixXd Lcom(6, 1);
    VectorXd x(44, 1);
    x << this->robot->q, this->robot->dq;

    MatrixXd p_com_abs(3, 1);
    SymFunction::p_com_absolute(p_com_abs, this->robot->q);
    SymFunction::CentroidalMomentum(Lcom, x, p_com_abs);

    L3d = p_com.cross(dp_com);
    Lx = Lcom(3) / 32.632 + L3d(0);
    Ly = Lcom(4) / 32.632 + L3d(1);
    //    std::cout << "Lcomy_2: " << Lcom(4)/32.632 << "L3d: " <<  L3d(1) << std::endl;
    //    std::cout << "Lcomx_2: " << Lcom(3)/32.632 << "L3d: " <<  L3d(0) << std::endl;

    this->get_orbitalenergy(this->cache.Enow);

}

void OUTPUT_HLIP::update_preimpact_yL(double t, double Ts, double& ycminus, double& Lxminus) {
    VectorXd sol(2);
    sol.setZero();
    this->get_LIPsol_lateral(Ts - t, this->cache.z0LIP, this->cache.ycLIP, this->cache.dycLIP, sol);
    ycminus = sol(0);
    Lxminus = sol(1);
}

void OUTPUT_HLIP::get_orbitalenergy(double& Eenergy) {
    Eenergy =
        pow(this->cache.Ly / this->cache.z0LIP, 2) - this->config.g / this->cache.z0LIP * pow(this->cache.xcLIP, 2);
}

void OUTPUT_HLIP::solve_Ts(double& Ts) {
    double xcdes = this->param.xratio * this->param.ldes;
    double lam = sqrt(this->config.g / this->cache.z0LIP);
    double a = this->cache.xcLIP;
    double b = this->cache.Ly / lam / this->cache.z0LIP;
    double c = xcdes;
    Ts = 1 / lam * log((c + sqrt(-pow(a, 2) + pow(b, 2) + pow(c, 2))) / (a + b));
}

void OUTPUT_HLIP::get_LIPsol(double t, double z0, double x0, double L0, VectorXd& sol) {
    MatrixXd A(2, 2);
    A << 0, 1 / z0,
        this->config.g, 0;
    //    A << 0 , 1,
    //        this->config.g/z0 , 0;
    MatrixXd At = A * t;
    VectorXd IC(2);
    IC << x0,
        L0;
    sol = At.exp() * IC;
}

void OUTPUT_HLIP::get_LIPsol_lateral(double t, double z0, double y0, double L0, VectorXd& sol) {
    MatrixXd A(2, 2);
    A << 0, -1 / z0,
        -this->config.g, 0;

    A << 0, 1,
        this->config.g / z0, 0;
    MatrixXd At = A * t;
    VectorXd IC(2);
    IC << y0,
        L0;
    sol = At.exp() * IC;
}

void OUTPUT_HLIP::update_dzcomf(double t, double& udes) {
    //t is time elapsed in the current step
    double xcLIPminus;
    double Lyminus;
    //    t = this->phase.pActual;
    if (t > this->param.Ts) {
        t = this->param.Ts;
    }

    this->update_preimpact_xL(t, this->param.Ts, xcLIPminus, Lyminus);
    double dxcLIPminus_now = this->cache.dxcLIP;

    VectorXd bezierCoeff(5);
    bezierCoeff << 0, 0, 1, 1, 1;
    double coeff = bezier_tools::bezier(bezierCoeff, this->phase.tau);


    if (this->memory.ithstep == 3) {
        if (t >= this->param.Ts / 2.) {
            std::cout << "test " << std::endl;
            std::cout << "test " << std::endl;
        }
    }
    double xcLIPplus = xcLIPminus - this->param.ldes;
    double z0LIPplus_des =
        this->param.alphaf(zCOM) - this->param.hdes - this->param.hdesnext / this->param.ldesnext * xcLIPplus;
    double z0LIPplus_real =
        this->cache.zcLIP - this->param.hdes - this->param.hdesnext / this->param.ldesnext * xcLIPplus;
    double z0LIPplus = (1 - coeff) * z0LIPplus_des + coeff * z0LIPplus_real;
    double Lyplus = z0LIPplus * sqrt(this->param.Edes + this->config.g / z0LIPplus * pow(xcLIPplus, 2));

    udes = (Lyplus - Lyminus + this->param.hdes * dxcLIPminus_now) / this->param.ldes;

}

void OUTPUT_HLIP::update_dzcomf_DCBF(double t, double& udes) {
    //t is time elapsed in the current step
    double xcLIPminus;
    double Lyminus;
    //    t = this->phase.pActual;
    if (t > this->param.Ts) {
        t = this->param.Ts;
    }

    this->update_preimpact_xL(t, this->param.Ts, xcLIPminus, Lyminus);
    double dxcLIPminus_now = this->cache.dxcLIP;

    VectorXd bezierCoeff(5);
    bezierCoeff << 0, 0, 1, 1, 1;
    double coeff = bezier_tools::bezier(bezierCoeff, this->phase.tau);


    double xcLIPplus = xcLIPminus - this->param.ldes;
    double z0LIPplus_des =
        this->param.alphaf(zCOM) - this->param.hdes - this->param.hdesnext / this->param.ldesnext * xcLIPplus;
    double z0LIPplus_real =
        this->cache.zcLIP - this->param.hdes - this->param.hdesnext / this->param.ldesnext * xcLIPplus;
    double z0LIPplus = (1 - coeff) * z0LIPplus_des + coeff * z0LIPplus_real;
    double Lyplus = z0LIPplus * sqrt(this->param.Edes + this->config.g / z0LIPplus * pow(xcLIPplus, 2));

    double a = pow(this->param.ldes / z0LIPplus, 2);
    double b = 2 * this->param.ldes * (Lyminus - this->param.hdes * dxcLIPminus_now) / pow(z0LIPplus, 2);

    //use different convergence for inside and outside safety set
    double gamma = this->config.Edes_gamma_out;
    if (this->param.E0 < this->config.Edes) {
        gamma = this->config.Edes_gamma_in;
    }

    double c1 = pow(Lyminus - this->param.hdes * dxcLIPminus_now, 2) / pow(z0LIPplus, 2) - this->config.g / z0LIPplus * pow(xcLIPplus, 2) - this->param.E0 + gamma * (this->param.E0 - this->param.Edes);
    double c2 = gamma * this->config.Edes_eps;

    if (-c2 <= c1 && c1 <= c2) {
        udes = 0.;
    }
    else {
        VectorXd udes_list(4);
        udes_list.setConstant(100.);
        if ((pow(b, 2) - 4 * a * (c1 + c2)) >= 0) {
            udes_list(0) = (-b + sqrt(pow(b, 2) - 4 * a * (c1 + c2))) / 2 / a;
            udes_list(1) = (-b - sqrt(pow(b, 2) - 4 * a * (c1 + c2))) / 2 / a;
        }
        if ((pow(b, 2) - 4 * a * (c1 - c2)) >= 0) {
            udes_list(2) = (-b + sqrt(pow(b, 2) - 4 * a * (c1 - c2))) / 2 / a;
            udes_list(3) = (-b - sqrt(pow(b, 2) - 4 * a * (c1 - c2))) / 2 / a;
        }
        double udes_abs = udes_list.array().abs().minCoeff();
        double tmp;
        for (int i = 0; i < 4;i++) {
            if (abs(udes_list(i)) == udes_abs) {
                tmp = i;
            }
        }
        udes = udes_list(tmp);


    }
    //    udes = (Lyplus - Lyminus + this->param.hdes * dxcLIPminus_now) / this->param.ldes;

}

void OUTPUT_HLIP::update_preimpact_estimation(double t, double Ts) {
    this->update_preimpact_xL(t, Ts, this->cache.xcLIP_minus, this->cache.Ly_minus);
    VectorXd bezierCoeff(4);
    bezierCoeff << 0, 0, 1, 1;
    double coeff = bezier_tools::bezier(bezierCoeff, this->phase.tau);
    double z0_smooth = (1 - coeff) * this->config.z0des + coeff * this->cache.z0LIP;
    double dxc_LIPminus = this->cache.Ly_minus / z0_smooth;
    this->cache.dzc_minus = this->param.hdes / this->param.ldes * dxc_LIPminus;
}

void OUTPUT_HLIP::getDebug(VectorXf& dbg) {
    double tsec = static_cast<double>(ros::Time::now().sec);
    double tnsec = 1e-9 * static_cast<double>(ros::Time::now().nsec);
    // Move zero to closer time rather than 1970 so it fits in a float
    // Still bad practice to put time in floats, but this is just for logging
    if (!this->config.isSim)
        tsec -= 1631496319;//1.6074545e9;

    // Use floats for logging size and speed
    dbg << static_cast<float>(tsec), static_cast<float>(tnsec), // 2
        static_cast<float>(this->phase.tau),   // 1
        static_cast<float>(this->phase.dtau),  // 1
        this->cache.ya.cast<float>(),        // 9
        this->cache.dya.cast<float>(),       // 9
        this->cache.yd.cast<float>(),        // 9
        this->cache.dyd.cast<float>(),       // 9
//    static_cast<float>(this->cache.vd[0]), static_cast<float>(this->cache.vd[1]),   // 2
//    static_cast<float>(this->robot->dq[0]), static_cast<float>(this->robot->dq[1]), // 2
//    static_cast<float>(this->lpVaXlastStep.getValue()), static_cast<float>(this->lpVaYlastStep.getValue()), //2
//    this->cache.uff.cast <float> (),            // 10
static_cast<float>(this->memory.iDomain),      //1
this->cache.d2yd.cast<float>(),       //9
static_cast<float>(this->cache.stepW_log), //1
static_cast<float>(this->cache.dstepW_log),//1
//for walking
static_cast<float>(this->cache.xcLIP), static_cast<float>(this->cache.ycLIP), static_cast<float>(this->cache.zcLIP), static_cast<float>(this->cache.z0LIP), //4
static_cast<float>(this->cache.dxcLIP), static_cast<float>(this->cache.dycLIP), static_cast<float>(this->cache.dzcLIP), static_cast<float>(this->cache.dz0LIP), //4
static_cast<float>(this->cache.dxcLIP_f), static_cast<float>(this->cache.dycLIP_f), static_cast<float>(this->cache.dzcLIP_f), static_cast<float>(this->cache.dz0LIP_f), //4
this->cache.mpcsol.cast<float>(), //17
static_cast<float>(this->cache.Enow), //1
static_cast<float>(this->cache.Ly),
static_cast<float>(this->config.HLIP_vxd),
static_cast<float>(this->config.HLIP_vyd); //1
}

