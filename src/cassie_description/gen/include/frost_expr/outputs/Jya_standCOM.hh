/*
 * Automatically Generated from Mathematica.
 * Sat 4 Sep 2021 22:21:36 GMT-07:00
 */

#ifndef JYA_STANDCOM_HH
#define JYA_STANDCOM_HH

#ifdef MATLAB_MEX_FILE
namespace SymFunction
{
  void Jya_standCOM_raw(double *p_output1, const double *var1);
}

#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{
  void Jya_standCOM_raw(double *p_output1, const double *var1);

  inline void Jya_standCOM(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 6, 10);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Jya_standCOM_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JYA_STANDCOM_HH
