/*
 * Automatically Generated from Mathematica.
 * Sat 12 Dec 2020 14:27:47 GMT-08:00
 */

#ifndef LEFTLEGANGLEVELOCITY_HH
#define LEFTLEGANGLEVELOCITY_HH

#ifdef MATLAB_MEX_FILE
namespace SymFunction
{
  void leftLegAngleVelocity_raw(double *p_output1, const double *var1,const double *var2);
}

#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{
  void leftLegAngleVelocity_raw(double *p_output1, const double *var1,const double *var2);

  inline void leftLegAngleVelocity(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
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
    leftLegAngleVelocity_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // LEFTLEGANGLEVELOCITY_HH
