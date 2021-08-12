/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:00 GMT-08:00
 */

#ifndef BE_CASSIE_V4_HH
#define BE_CASSIE_V4_HH

#ifdef MATLAB_MEX_FILE
namespace SymFunction
{
  void Be_cassie_v4_raw(double *p_output1, const double *var1);
}

#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{
  void Be_cassie_v4_raw(double *p_output1, const double *var1);

  inline void Be_cassie_v4(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 22, 10);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Be_cassie_v4_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // BE_CASSIE_V4_HH
