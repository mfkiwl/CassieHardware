/*
 * Automatically Generated from Mathematica.
 * Mon 13 Sep 2021 16:09:00 GMT-07:00
 */

#ifndef POSE_RIGHTFOOT_HH
#define POSE_RIGHTFOOT_HH

#ifdef MATLAB_MEX_FILE
namespace SymFunction
{
  void pose_rightFoot_raw(double *p_output1, const double *var1);
}

#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{
  void pose_rightFoot_raw(double *p_output1, const double *var1);

  inline void pose_rightFoot(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 6, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    pose_rightFoot_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // POSE_RIGHTFOOT_HH
