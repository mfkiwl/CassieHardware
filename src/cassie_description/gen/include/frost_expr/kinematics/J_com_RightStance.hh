/*
 * Automatically Generated from Mathematica.
 * Mon 13 Sep 2021 16:09:05 GMT-07:00
 */

#ifndef J_COM_RIGHTSTANCE_HH
#define J_COM_RIGHTSTANCE_HH

#ifdef MATLAB_MEX_FILE
namespace SymFunction
{
  void J_com_RightStance_raw(double *p_output1, const double *var1);
}

#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{
  void J_com_RightStance_raw(double *p_output1, const double *var1);

  inline void J_com_RightStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 22);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_com_RightStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_COM_RIGHTSTANCE_HH
