/*
 * Automatically Generated from Mathematica.
 * Thu 26 Aug 2021 14:19:39 GMT-07:00
 */

#ifndef LEFTLEGROLLVELOCITY_HH
#define LEFTLEGROLLVELOCITY_HH

#ifdef MATLAB_MEX_FILE
namespace SymFunction
{
  void leftLegRollVelocity_raw(double *p_output1, const double *var1,const double *var2);
}

#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{
  void leftLegRollVelocity_raw(double *p_output1, const double *var1,const double *var2);

  inline void leftLegRollVelocity(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);
    assert_size_matrix(var2, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    leftLegRollVelocity_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // LEFTLEGROLLVELOCITY_HH
