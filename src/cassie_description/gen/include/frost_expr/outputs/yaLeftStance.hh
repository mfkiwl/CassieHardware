/*
 * Automatically Generated from Mathematica.
 * Thu 26 Aug 2021 14:19:32 GMT-07:00
 */

#ifndef YALEFTSTANCE_HH
#define YALEFTSTANCE_HH

#ifdef MATLAB_MEX_FILE
namespace SymFunction
{
  void yaLeftStance_raw(double *p_output1, const double *var1);
}

#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{
  void yaLeftStance_raw(double *p_output1, const double *var1);

  inline void yaLeftStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 9, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    yaLeftStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // YALEFTSTANCE_HH
