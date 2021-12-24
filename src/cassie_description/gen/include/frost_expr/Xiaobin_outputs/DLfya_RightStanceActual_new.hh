/*
 * Automatically Generated from Mathematica.
 * Fri 15 Oct 2021 13:09:13 GMT-07:00
 */

#ifndef DLFYA_RIGHTSTANCEACTUAL_NEW_HH
#define DLFYA_RIGHTSTANCEACTUAL_NEW_HH

#ifdef MATLAB_MEX_FILE
namespace SymFunction
{
  void DLfya_RightStanceActual_new_raw(double *p_output1, const double *var1,const double *var2);
}

#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{
  void DLfya_RightStanceActual_new_raw(double *p_output1, const double *var1,const double *var2);

  inline void DLfya_RightStanceActual_new(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);
    assert_size_matrix(var2, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 9, 44);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    DLfya_RightStanceActual_new_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DLFYA_RIGHTSTANCEACTUAL_NEW_HH
