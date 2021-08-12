/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:15 GMT-08:00
 */

#ifndef JDOT_LEFTPOINT_CONSTRAINT_HH
#define JDOT_LEFTPOINT_CONSTRAINT_HH

#ifdef MATLAB_MEX_FILE
namespace SymFunction
{
  void Jdot_leftPoint_constraint_raw(double *p_output1, const double *var1,const double *var2);
}

#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{
  void Jdot_leftPoint_constraint_raw(double *p_output1, const double *var1,const double *var2);

  inline void Jdot_leftPoint_constraint(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);
    assert_size_matrix(var2, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 4, 22);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Jdot_leftPoint_constraint_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JDOT_LEFTPOINT_CONSTRAINT_HH
