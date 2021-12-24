/*
 * Automatically Generated from Mathematica.
 * Thu 8 Mar 2018 14:44:35 GMT-08:00
 */

#ifndef J_LEFTFOOTPITCHYAW_HH
#define J_LEFTFOOTPITCHYAW_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
namespace SymFunction
{
    void J_leftFootPitchYaw_raw(double *p_output1, const double *var1);
}
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void J_leftFootPitchYaw_raw(double *p_output1, const double *var1);

  inline void J_leftFootPitchYaw(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 2, 22);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_leftFootPitchYaw_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_LEFTFOOTPITCHYAW_HH
