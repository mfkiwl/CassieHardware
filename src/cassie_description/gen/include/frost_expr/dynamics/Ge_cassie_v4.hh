/*
 * Automatically Generated from Mathematica.
 * Sat 28 Aug 2021 15:41:29 GMT-07:00
 */

#ifndef GE_CASSIE_V4_HH
#define GE_CASSIE_V4_HH

#ifdef MATLAB_MEX_FILE
namespace SymFunction
{
  void Ge_cassie_v4_raw(double *p_output1, const double *var1);
}

#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{
  void Ge_cassie_v4_raw(double *p_output1, const double *var1);

  inline void Ge_cassie_v4(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 22, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Ge_cassie_v4_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // GE_CASSIE_V4_HH
