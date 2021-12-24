/*
 * Automatically Generated from Mathematica.
 * Thu 9 Sep 2021 00:04:54 GMT-07:00
 */

#ifndef JDOT_YRIGHTSTANCEACTUAL_HH
#define JDOT_YRIGHTSTANCEACTUAL_HH

#ifdef MATLAB_MEX_FILE
namespace SymFunction
{
  void Jdot_yRightStanceActual_raw(double *p_output1, const double *var1,const double *var2);
}

#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{
  void Jdot_yRightStanceActual_raw(double *p_output1, const double *var1,const double *var2);

  inline void Jdot_yRightStanceActual(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);
    assert_size_matrix(var2, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 9, 22);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Jdot_yRightStanceActual_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JDOT_YRIGHTSTANCEACTUAL_HH
