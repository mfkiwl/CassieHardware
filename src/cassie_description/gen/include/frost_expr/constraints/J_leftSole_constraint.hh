/*
 * Automatically Generated from Mathematica.
 * Thu 26 Aug 2021 14:19:00 GMT-07:00
 */

#ifndef J_LEFTSOLE_CONSTRAINT_HH
#define J_LEFTSOLE_CONSTRAINT_HH

#ifdef MATLAB_MEX_FILE
namespace SymFunction
{
  void J_leftSole_constraint_raw(double *p_output1, const double *var1);
}

#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{
  void J_leftSole_constraint_raw(double *p_output1, const double *var1);

  inline void J_leftSole_constraint(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 5, 22);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_leftSole_constraint_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_LEFTSOLE_CONSTRAINT_HH
