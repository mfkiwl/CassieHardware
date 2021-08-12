/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:58 GMT-08:00
 */

#ifndef DLFYA_STANDCOM_HH
#define DLFYA_STANDCOM_HH

#ifdef MATLAB_MEX_FILE
namespace SymFunction
{
  void DLfya_standCOM_raw(double *p_output1, const double *var1,const double *var2);
}

#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{
  void DLfya_standCOM_raw(double *p_output1, const double *var1,const double *var2);

  inline void DLfya_standCOM(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);
    assert_size_matrix(var2, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 6, 44);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    DLfya_standCOM_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DLFYA_STANDCOM_HH
