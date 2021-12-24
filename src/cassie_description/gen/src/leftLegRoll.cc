/*
 * Automatically Generated from Mathematica.
 * Thu 26 Aug 2021 14:19:39 GMT-07:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "leftLegRoll.hh"
#endif

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t16;
  double t70;
  double t75;
  double t76;
  double t106;
  double t159;
  double t188;
  double t224;
  double t17;
  double t249;
  double t458;
  double t520;
  double t865;
  double t1267;
  double t1276;
  double t1285;
  double t1384;
  double t1196;
  double t1234;
  double t1265;
  double t1441;
  double t1501;
  double t1609;
  double t1692;
  double t1792;
  double t1831;
  double t2249;
  double t2984;
  double t2993;
  double t2383;
  double t2469;
  double t2522;
  double t2780;
  double t2860;
  double t2881;
  double t3004;
  double t3017;
  double t3027;
  double t3047;
  double t3080;
  double t3086;
  double t3126;
  double t3159;
  double t3162;
  double t3173;
  double t3212;
  double t3213;
  double t3225;
  double t3237;
  double t3255;
  double t3263;
  double t3308;
  double t3357;
  double t3368;
  double t3373;
  double t3512;
  double t3522;
  double t3523;
  double t713;
  double t878;
  double t886;
  double t917;
  double t942;
  double t975;
  double t1352;
  double t1389;
  double t1431;
  double t1619;
  double t1662;
  double t1668;
  double t2218;
  double t2333;
  double t2336;
  double t3575;
  double t3627;
  double t3657;
  double t3663;
  double t3667;
  double t3673;
  double t2724;
  double t2748;
  double t2775;
  double t3044;
  double t3063;
  double t3075;
  double t3688;
  double t3703;
  double t3710;
  double t3719;
  double t3734;
  double t3739;
  double t3141;
  double t3143;
  double t3145;
  double t3226;
  double t3243;
  double t3246;
  double t3751;
  double t3752;
  double t3753;
  double t3766;
  double t3768;
  double t3769;
  double t3340;
  double t3345;
  double t3349;
  double t3783;
  double t3788;
  double t3789;
  double t3811;
  double t3831;
  double t3834;
  t16 = Cos(var1[3]);
  t70 = Cos(var1[6]);
  t75 = Sin(var1[3]);
  t76 = t70*t75;
  t106 = Cos(var1[4]);
  t159 = Sin(var1[6]);
  t188 = t16*t106*t159;
  t224 = t76 + t188;
  t17 = Sin(var1[4]);
  t249 = Cos(var1[7]);
  t458 = -1.*t249;
  t520 = 1. + t458;
  t865 = Sin(var1[7]);
  t1267 = Cos(var1[8]);
  t1276 = -1.*t1267;
  t1285 = 1. + t1276;
  t1384 = Sin(var1[8]);
  t1196 = -1.*t16*t249*t17;
  t1234 = t224*t865;
  t1265 = t1196 + t1234;
  t1441 = t16*t106*t70;
  t1501 = -1.*t75*t159;
  t1609 = t1441 + t1501;
  t1692 = Cos(var1[9]);
  t1792 = -1.*t1692;
  t1831 = 1. + t1792;
  t2249 = Sin(var1[9]);
  t2984 = -1.*var1[9];
  t2993 = 0.226893 + t2984;
  t2383 = t1267*t1265;
  t2469 = t1609*t1384;
  t2522 = t2383 + t2469;
  t2780 = t1267*t1609;
  t2860 = -1.*t1265*t1384;
  t2881 = t2780 + t2860;
  t3004 = Cos(t2993);
  t3017 = -1.*t3004;
  t3027 = 1. + t3017;
  t3047 = Sin(t2993);
  t3080 = -1.*t2249*t2522;
  t3086 = t1692*t2881;
  t3126 = t3080 + t3086;
  t3159 = t1692*t2522;
  t3162 = t2249*t2881;
  t3173 = t3159 + t3162;
  t3212 = Cos(var1[13]);
  t3213 = -1.*t3212;
  t3225 = 1. + t3213;
  t3237 = Sin(var1[13]);
  t3255 = t3047*t3126;
  t3263 = t3004*t3173;
  t3308 = t3255 + t3263;
  t3357 = t3004*t3126;
  t3368 = -1.*t3047*t3173;
  t3373 = t3357 + t3368;
  t3512 = t16*t70;
  t3522 = -1.*t106*t75*t159;
  t3523 = t3512 + t3522;
  t713 = 0.135*t520;
  t878 = 0.049*t865;
  t886 = t713 + t878;
  t917 = -0.049*t520;
  t942 = 0.135*t865;
  t975 = t917 + t942;
  t1352 = -0.049*t1285;
  t1389 = -0.09*t1384;
  t1431 = t1352 + t1389;
  t1619 = -0.09*t1285;
  t1662 = 0.049*t1384;
  t1668 = t1619 + t1662;
  t2218 = -0.049*t1831;
  t2333 = -0.21*t2249;
  t2336 = t2218 + t2333;
  t3575 = t249*t75*t17;
  t3627 = t3523*t865;
  t3657 = t3575 + t3627;
  t3663 = -1.*t106*t70*t75;
  t3667 = -1.*t16*t159;
  t3673 = t3663 + t3667;
  t2724 = -0.21*t1831;
  t2748 = 0.049*t2249;
  t2775 = t2724 + t2748;
  t3044 = -0.70544*t3027;
  t3063 = -0.01841*t3047;
  t3075 = t3044 + t3063;
  t3688 = t1267*t3657;
  t3703 = t3673*t1384;
  t3710 = t3688 + t3703;
  t3719 = t1267*t3673;
  t3734 = -1.*t3657*t1384;
  t3739 = t3719 + t3734;
  t3141 = 0.01841*t3027;
  t3143 = -0.70544*t3047;
  t3145 = t3141 + t3143;
  t3226 = -0.02159*t3225;
  t3243 = -1.11344*t3237;
  t3246 = t3226 + t3243;
  t3751 = -1.*t2249*t3710;
  t3752 = t1692*t3739;
  t3753 = t3751 + t3752;
  t3766 = t1692*t3710;
  t3768 = t2249*t3739;
  t3769 = t3766 + t3768;
  t3340 = -1.11344*t3225;
  t3345 = 0.02159*t3237;
  t3349 = t3340 + t3345;
  t3783 = t3047*t3753;
  t3788 = t3004*t3769;
  t3789 = t3783 + t3788;
  t3811 = t3004*t3753;
  t3831 = -1.*t3047*t3769;
  t3834 = t3811 + t3831;
  p_output1[0]=ArcTan(-1.*t1265*t1431 - 1.*t1609*t1668 + 0.049*t16*t17 + 0.135*t224 - 1.*t2336*t2522 - 1.*t2775*t2881 - 1.*t3075*t3126 - 1.*t3145*t3173 - 1.*t3246*t3308 - 1.*t3349*t3373 + 1.11344*(-1.*t3237*t3308 + t3212*t3373) + 0.02159*(t3212*t3308 + t3237*t3373) - 0.1305*(t224*t249 + t16*t17*t865) - 1.*t224*t886 + t16*t17*t975,-0.135*t3523 + t1431*t3657 + t1668*t3673 + t2336*t3710 + t2775*t3739 + t3075*t3753 + t3145*t3769 + t3246*t3789 + t3349*t3834 - 1.11344*(-1.*t3237*t3789 + t3212*t3834) - 0.02159*(t3212*t3789 + t3237*t3834) + 0.049*t17*t75 + 0.1305*(t249*t3523 - 1.*t17*t75*t865) + t3523*t886 + t17*t75*t975);
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void leftLegRoll_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




