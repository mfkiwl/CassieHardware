/*
 * Automatically Generated from Mathematica.
 * Sat 4 Sep 2021 22:21:36 GMT-07:00
 */

#ifndef DYASTANDCOM_HH
#define DYASTANDCOM_HH

#ifdef MATLAB_MEX_FILE
namespace SymFunction
{
  void dyaStandCOM_raw(double *p_output1, const double *var1,const double *var2);
}

#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{
  void dyaStandCOM_raw(double *p_output1, const double *var1,const double *var2);

  inline void dyaStandCOM(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);
    assert_size_matrix(var2, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 6, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    dyaStandCOM_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DYASTANDCOM_HH
