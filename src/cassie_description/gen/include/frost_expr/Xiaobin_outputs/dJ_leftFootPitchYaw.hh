/*
 * Automatically Generated from Mathematica.
 * Thu 8 Mar 2018 14:44:39 GMT-08:00
 */

#ifndef DJ_LEFTFOOTPITCHYAW_HH
#define DJ_LEFTFOOTPITCHYAW_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
namespace SymFunction
{
    void dJ_leftFootPitchYaw_raw(double *p_output1, const double *var1,const double *var2);
}

#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void dJ_leftFootPitchYaw_raw(double *p_output1, const double *var1,const double *var2);

  inline void dJ_leftFootPitchYaw(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);
    assert_size_matrix(var2, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 2, 22);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    dJ_leftFootPitchYaw_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DJ_LEFTFOOTPITCHYAW_HH
