/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:53 GMT-08:00
 */

#ifndef JDOT_YALEFTSTANCE_HH
#define JDOT_YALEFTSTANCE_HH

#ifdef MATLAB_MEX_FILE
namespace SymFunction
{
  void Jdot_yaLeftStance_raw(double *p_output1, const double *var1,const double *var2);
}

#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{
  void Jdot_yaLeftStance_raw(double *p_output1, const double *var1,const double *var2);

  inline void Jdot_yaLeftStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);
    assert_size_matrix(var2, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 9, 10);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Jdot_yaLeftStance_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JDOT_YALEFTSTANCE_HH
