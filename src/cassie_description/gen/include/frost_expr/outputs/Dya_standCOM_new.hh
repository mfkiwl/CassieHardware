/*
 * Automatically Generated from Mathematica.
 * Mon 4 Oct 2021 16:12:12 GMT-07:00
 */

#ifndef DYA_STANDCOM_NEW_HH
#define DYA_STANDCOM_NEW_HH

#ifdef MATLAB_MEX_FILE
namespace SymFunction
{
  void Dya_standCOM_new_raw(double *p_output1, const double *var1);
}

#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{
  void Dya_standCOM_new_raw(double *p_output1, const double *var1);

  inline void Dya_standCOM_new(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 6, 44);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Dya_standCOM_new_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DYA_STANDCOM_NEW_HH
