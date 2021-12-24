/*
 * Automatically Generated from Mathematica.
 * Thu 8 Mar 2018 14:56:23 GMT-08:00
 */

#ifndef CENTROIDALMOMENTUM_HH
#define CENTROIDALMOMENTUM_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void CentroidalMomentum_raw(double *p_output1, const double *var1,const double *var2);

  inline void CentroidalMomentum(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 44, 1);
    assert_size_matrix(var2, 3, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 6, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    CentroidalMomentum_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // CENTROIDALMOMENTUM_HH
