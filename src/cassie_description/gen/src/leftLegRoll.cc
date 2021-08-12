/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:56 GMT-08:00
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
  double t91;
  double t294;
  double t336;
  double t337;
  double t342;
  double t347;
  double t403;
  double t499;
  double t194;
  double t664;
  double t677;
  double t710;
  double t755;
  double t1650;
  double t1663;
  double t1674;
  double t1808;
  double t1521;
  double t1540;
  double t1635;
  double t1977;
  double t2014;
  double t2045;
  double t2211;
  double t2304;
  double t2309;
  double t2338;
  double t2868;
  double t2882;
  double t2433;
  double t2537;
  double t2605;
  double t2690;
  double t2736;
  double t2837;
  double t2896;
  double t2964;
  double t2966;
  double t2986;
  double t3034;
  double t3055;
  double t3151;
  double t3308;
  double t3320;
  double t3353;
  double t3407;
  double t3414;
  double t3418;
  double t3453;
  double t3492;
  double t3631;
  double t3635;
  double t3706;
  double t3717;
  double t3744;
  double t3953;
  double t3995;
  double t3997;
  double t734;
  double t796;
  double t923;
  double t1000;
  double t1047;
  double t1212;
  double t1807;
  double t1834;
  double t1904;
  double t2068;
  double t2140;
  double t2185;
  double t2331;
  double t2349;
  double t2362;
  double t4071;
  double t4081;
  double t4092;
  double t4097;
  double t4102;
  double t4119;
  double t2661;
  double t2663;
  double t2666;
  double t2984;
  double t3002;
  double t3033;
  double t4156;
  double t4179;
  double t4196;
  double t4251;
  double t4256;
  double t4273;
  double t3164;
  double t3286;
  double t3304;
  double t3441;
  double t3455;
  double t3490;
  double t4308;
  double t4324;
  double t4341;
  double t4374;
  double t4385;
  double t4400;
  double t3642;
  double t3657;
  double t3703;
  double t4444;
  double t4478;
  double t4492;
  double t4509;
  double t4515;
  double t4532;
  t91 = Cos(var1[3]);
  t294 = Cos(var1[6]);
  t336 = Sin(var1[3]);
  t337 = t294*t336;
  t342 = Cos(var1[4]);
  t347 = Sin(var1[6]);
  t403 = t91*t342*t347;
  t499 = t337 + t403;
  t194 = Sin(var1[4]);
  t664 = Cos(var1[7]);
  t677 = -1.*t664;
  t710 = 1. + t677;
  t755 = Sin(var1[7]);
  t1650 = Cos(var1[8]);
  t1663 = -1.*t1650;
  t1674 = 1. + t1663;
  t1808 = Sin(var1[8]);
  t1521 = -1.*t91*t664*t194;
  t1540 = t499*t755;
  t1635 = t1521 + t1540;
  t1977 = t91*t342*t294;
  t2014 = -1.*t336*t347;
  t2045 = t1977 + t2014;
  t2211 = Cos(var1[9]);
  t2304 = -1.*t2211;
  t2309 = 1. + t2304;
  t2338 = Sin(var1[9]);
  t2868 = -1.*var1[9];
  t2882 = 0.226893 + t2868;
  t2433 = t1650*t1635;
  t2537 = t2045*t1808;
  t2605 = t2433 + t2537;
  t2690 = t1650*t2045;
  t2736 = -1.*t1635*t1808;
  t2837 = t2690 + t2736;
  t2896 = Cos(t2882);
  t2964 = -1.*t2896;
  t2966 = 1. + t2964;
  t2986 = Sin(t2882);
  t3034 = -1.*t2338*t2605;
  t3055 = t2211*t2837;
  t3151 = t3034 + t3055;
  t3308 = t2211*t2605;
  t3320 = t2338*t2837;
  t3353 = t3308 + t3320;
  t3407 = Cos(var1[13]);
  t3414 = -1.*t3407;
  t3418 = 1. + t3414;
  t3453 = Sin(var1[13]);
  t3492 = t2986*t3151;
  t3631 = t2896*t3353;
  t3635 = t3492 + t3631;
  t3706 = t2896*t3151;
  t3717 = -1.*t2986*t3353;
  t3744 = t3706 + t3717;
  t3953 = t91*t294;
  t3995 = -1.*t342*t336*t347;
  t3997 = t3953 + t3995;
  t734 = 0.135*t710;
  t796 = 0.049*t755;
  t923 = t734 + t796;
  t1000 = -0.049*t710;
  t1047 = 0.135*t755;
  t1212 = t1000 + t1047;
  t1807 = -0.049*t1674;
  t1834 = -0.09*t1808;
  t1904 = t1807 + t1834;
  t2068 = -0.09*t1674;
  t2140 = 0.049*t1808;
  t2185 = t2068 + t2140;
  t2331 = -0.049*t2309;
  t2349 = -0.21*t2338;
  t2362 = t2331 + t2349;
  t4071 = t664*t336*t194;
  t4081 = t3997*t755;
  t4092 = t4071 + t4081;
  t4097 = -1.*t342*t294*t336;
  t4102 = -1.*t91*t347;
  t4119 = t4097 + t4102;
  t2661 = -0.21*t2309;
  t2663 = 0.049*t2338;
  t2666 = t2661 + t2663;
  t2984 = -0.70544*t2966;
  t3002 = -0.01841*t2986;
  t3033 = t2984 + t3002;
  t4156 = t1650*t4092;
  t4179 = t4119*t1808;
  t4196 = t4156 + t4179;
  t4251 = t1650*t4119;
  t4256 = -1.*t4092*t1808;
  t4273 = t4251 + t4256;
  t3164 = 0.01841*t2966;
  t3286 = -0.70544*t2986;
  t3304 = t3164 + t3286;
  t3441 = -0.02159*t3418;
  t3455 = -1.11344*t3453;
  t3490 = t3441 + t3455;
  t4308 = -1.*t2338*t4196;
  t4324 = t2211*t4273;
  t4341 = t4308 + t4324;
  t4374 = t2211*t4196;
  t4385 = t2338*t4273;
  t4400 = t4374 + t4385;
  t3642 = -1.11344*t3418;
  t3657 = 0.02159*t3453;
  t3703 = t3642 + t3657;
  t4444 = t2986*t4341;
  t4478 = t2896*t4400;
  t4492 = t4444 + t4478;
  t4509 = t2896*t4341;
  t4515 = -1.*t2986*t4400;
  t4532 = t4509 + t4515;
  p_output1[0]=ArcTan(-1.*t1635*t1904 - 1.*t2045*t2185 - 1.*t2362*t2605 - 1.*t2666*t2837 - 1.*t3033*t3151 - 1.*t3304*t3353 - 1.*t3490*t3635 - 1.*t3703*t3744 + 1.11344*(-1.*t3453*t3635 + t3407*t3744) + 0.02159*(t3407*t3635 + t3453*t3744) + 0.135*t499 + 0.049*t194*t91 + t1212*t194*t91 - 0.1305*(t499*t664 + t194*t755*t91) - 1.*t499*t923,0.049*t194*t336 + t1212*t194*t336 - 0.135*t3997 + t1904*t4092 + t2185*t4119 + t2362*t4196 + t2666*t4273 + t3033*t4341 + t3304*t4400 + t3490*t4492 + t3703*t4532 - 1.11344*(-1.*t3453*t4492 + t3407*t4532) - 0.02159*(t3407*t4492 + t3453*t4532) + 0.1305*(t3997*t664 - 1.*t194*t336*t755) + t3997*t923);
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




