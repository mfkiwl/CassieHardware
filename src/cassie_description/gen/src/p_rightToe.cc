/*
 * Automatically Generated from Mathematica.
 * Mon 13 Sep 2021 16:09:02 GMT-07:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "p_rightToe.hh"
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
  double t948;
  double t1264;
  double t1700;
  double t1784;
  double t1844;
  double t1890;
  double t1909;
  double t1938;
  double t1967;
  double t1057;
  double t2047;
  double t2058;
  double t2081;
  double t2139;
  double t2145;
  double t2146;
  double t2148;
  double t2160;
  double t2180;
  double t2181;
  double t2282;
  double t2291;
  double t2295;
  double t2300;
  double t2303;
  double t2305;
  double t2316;
  double t2337;
  double t2343;
  double t2344;
  double t2378;
  double t2389;
  double t2390;
  double t2409;
  double t2411;
  double t2412;
  double t2427;
  double t2441;
  double t2442;
  double t2449;
  double t2477;
  double t2479;
  double t2483;
  double t2488;
  double t2493;
  double t2499;
  double t2503;
  double t2515;
  double t2517;
  double t2524;
  double t2543;
  double t2544;
  double t2557;
  double t2580;
  double t2612;
  double t2613;
  double t2632;
  double t2652;
  double t2654;
  double t2655;
  double t2675;
  double t2682;
  double t2685;
  double t1833;
  double t1862;
  double t1863;
  double t2798;
  double t1945;
  double t1946;
  double t2891;
  double t1991;
  double t1994;
  double t2029;
  double t3246;
  double t3250;
  double t3252;
  double t2147;
  double t2153;
  double t2154;
  double t2888;
  double t2895;
  double t3036;
  double t3435;
  double t3447;
  double t3485;
  double t2266;
  double t2267;
  double t2268;
  double t2313;
  double t2323;
  double t2335;
  double t3573;
  double t3575;
  double t3579;
  double t3855;
  double t3871;
  double t3875;
  double t2353;
  double t2357;
  double t2370;
  double t2418;
  double t2431;
  double t2435;
  double t3896;
  double t3900;
  double t3904;
  double t3925;
  double t3930;
  double t3936;
  double t2472;
  double t2473;
  double t2475;
  double t2501;
  double t2507;
  double t2511;
  double t4075;
  double t4114;
  double t4156;
  double t4246;
  double t4257;
  double t4395;
  double t2531;
  double t2537;
  double t2540;
  double t2631;
  double t2640;
  double t2641;
  double t4639;
  double t4708;
  double t4859;
  double t5073;
  double t5221;
  double t5453;
  double t2663;
  double t2667;
  double t2669;
  double t5587;
  double t5634;
  double t5683;
  double t5783;
  double t5819;
  double t5888;
  double t7013;
  double t7024;
  double t7052;
  double t6978;
  double t7001;
  double t7011;
  double t7069;
  double t7074;
  double t7118;
  double t7165;
  double t7186;
  double t7208;
  double t7357;
  double t7400;
  double t7444;
  double t7574;
  double t7594;
  double t7600;
  double t7614;
  double t7618;
  double t7646;
  double t7686;
  double t7687;
  double t7698;
  double t7725;
  double t7729;
  double t7731;
  double t7766;
  double t7776;
  double t7810;
  double t7827;
  double t7874;
  double t7888;
  double t7949;
  double t7976;
  double t7982;
  double t8005;
  double t8014;
  double t8017;
  t948 = Cos(var1[4]);
  t1264 = Cos(var1[15]);
  t1700 = -1.*t1264;
  t1784 = 1. + t1700;
  t1844 = Sin(var1[15]);
  t1890 = Sin(var1[14]);
  t1909 = Sin(var1[4]);
  t1938 = Cos(var1[14]);
  t1967 = Sin(var1[5]);
  t1057 = Cos(var1[5]);
  t2047 = t1890*t1909;
  t2058 = -1.*t1938*t948*t1967;
  t2081 = t2047 + t2058;
  t2139 = Cos(var1[16]);
  t2145 = -1.*t2139;
  t2146 = 1. + t2145;
  t2148 = Sin(var1[16]);
  t2160 = t1938*t1909;
  t2180 = t948*t1890*t1967;
  t2181 = t2160 + t2180;
  t2282 = t1264*t948*t1057;
  t2291 = t1844*t2081;
  t2295 = t2282 + t2291;
  t2300 = Cos(var1[17]);
  t2303 = -1.*t2300;
  t2305 = 1. + t2303;
  t2316 = Sin(var1[17]);
  t2337 = t2148*t2181;
  t2343 = t2139*t2295;
  t2344 = t2337 + t2343;
  t2378 = t2139*t2181;
  t2389 = -1.*t2148*t2295;
  t2390 = t2378 + t2389;
  t2409 = Cos(var1[18]);
  t2411 = -1.*t2409;
  t2412 = 1. + t2411;
  t2427 = Sin(var1[18]);
  t2441 = -1.*t2316*t2344;
  t2442 = t2300*t2390;
  t2449 = t2441 + t2442;
  t2477 = t2300*t2344;
  t2479 = t2316*t2390;
  t2483 = t2477 + t2479;
  t2488 = Cos(var1[19]);
  t2493 = -1.*t2488;
  t2499 = 1. + t2493;
  t2503 = Sin(var1[19]);
  t2515 = t2427*t2449;
  t2517 = t2409*t2483;
  t2524 = t2515 + t2517;
  t2543 = t2409*t2449;
  t2544 = -1.*t2427*t2483;
  t2557 = t2543 + t2544;
  t2580 = Cos(var1[21]);
  t2612 = -1.*t2580;
  t2613 = 1. + t2612;
  t2632 = Sin(var1[21]);
  t2652 = -1.*t2503*t2524;
  t2654 = t2488*t2557;
  t2655 = t2652 + t2654;
  t2675 = t2488*t2524;
  t2682 = t2503*t2557;
  t2685 = t2675 + t2682;
  t1833 = -0.049*t1784;
  t1862 = -0.135*t1844;
  t1863 = t1833 + t1862;
  t2798 = Sin(var1[3]);
  t1945 = -1.*t1938;
  t1946 = 1. + t1945;
  t2891 = Cos(var1[3]);
  t1991 = -0.135*t1784;
  t1994 = 0.049*t1844;
  t2029 = t1991 + t1994;
  t3246 = t2891*t1057;
  t3250 = -1.*t2798*t1909*t1967;
  t3252 = t3246 + t3250;
  t2147 = -0.09*t2146;
  t2153 = 0.049*t2148;
  t2154 = t2147 + t2153;
  t2888 = t1057*t2798*t1909;
  t2895 = t2891*t1967;
  t3036 = t2888 + t2895;
  t3435 = -1.*t948*t1890*t2798;
  t3447 = t1938*t3252;
  t3485 = t3435 + t3447;
  t2266 = -0.049*t2146;
  t2267 = -0.09*t2148;
  t2268 = t2266 + t2267;
  t2313 = -0.049*t2305;
  t2323 = -0.21*t2316;
  t2335 = t2313 + t2323;
  t3573 = -1.*t1938*t948*t2798;
  t3575 = -1.*t1890*t3252;
  t3579 = t3573 + t3575;
  t3855 = t1264*t3036;
  t3871 = t1844*t3485;
  t3875 = t3855 + t3871;
  t2353 = -0.21*t2305;
  t2357 = 0.049*t2316;
  t2370 = t2353 + t2357;
  t2418 = -0.27068*t2412;
  t2431 = 0.00159*t2427;
  t2435 = t2418 + t2431;
  t3896 = t2148*t3579;
  t3900 = t2139*t3875;
  t3904 = t3896 + t3900;
  t3925 = t2139*t3579;
  t3930 = -1.*t2148*t3875;
  t3936 = t3925 + t3930;
  t2472 = -0.00159*t2412;
  t2473 = -0.27068*t2427;
  t2475 = t2472 + t2473;
  t2501 = 0.01841*t2499;
  t2507 = -0.70544*t2503;
  t2511 = t2501 + t2507;
  t4075 = -1.*t2316*t3904;
  t4114 = t2300*t3936;
  t4156 = t4075 + t4114;
  t4246 = t2300*t3904;
  t4257 = t2316*t3936;
  t4395 = t4246 + t4257;
  t2531 = -0.70544*t2499;
  t2537 = -0.01841*t2503;
  t2540 = t2531 + t2537;
  t2631 = -1.11344*t2613;
  t2640 = 0.02159*t2632;
  t2641 = t2631 + t2640;
  t4639 = t2427*t4156;
  t4708 = t2409*t4395;
  t4859 = t4639 + t4708;
  t5073 = t2409*t4156;
  t5221 = -1.*t2427*t4395;
  t5453 = t5073 + t5221;
  t2663 = -0.02159*t2613;
  t2667 = -1.11344*t2632;
  t2669 = t2663 + t2667;
  t5587 = -1.*t2503*t4859;
  t5634 = t2488*t5453;
  t5683 = t5587 + t5634;
  t5783 = t2488*t4859;
  t5819 = t2503*t5453;
  t5888 = t5783 + t5819;
  t7013 = t1057*t2798;
  t7024 = t2891*t1909*t1967;
  t7052 = t7013 + t7024;
  t6978 = -1.*t2891*t1057*t1909;
  t7001 = t2798*t1967;
  t7011 = t6978 + t7001;
  t7069 = t2891*t948*t1890;
  t7074 = t1938*t7052;
  t7118 = t7069 + t7074;
  t7165 = t1938*t2891*t948;
  t7186 = -1.*t1890*t7052;
  t7208 = t7165 + t7186;
  t7357 = t1264*t7011;
  t7400 = t1844*t7118;
  t7444 = t7357 + t7400;
  t7574 = t2148*t7208;
  t7594 = t2139*t7444;
  t7600 = t7574 + t7594;
  t7614 = t2139*t7208;
  t7618 = -1.*t2148*t7444;
  t7646 = t7614 + t7618;
  t7686 = -1.*t2316*t7600;
  t7687 = t2300*t7646;
  t7698 = t7686 + t7687;
  t7725 = t2300*t7600;
  t7729 = t2316*t7646;
  t7731 = t7725 + t7729;
  t7766 = t2427*t7698;
  t7776 = t2409*t7731;
  t7810 = t7766 + t7776;
  t7827 = t2409*t7698;
  t7874 = -1.*t2427*t7731;
  t7888 = t7827 + t7874;
  t7949 = -1.*t2503*t7810;
  t7976 = t2488*t7888;
  t7982 = t7949 + t7976;
  t8005 = t2488*t7810;
  t8014 = t2503*t7888;
  t8017 = t8005 + t8014;
  p_output1[0]=0.135*t1890*t1909 + t2029*t2081 + t2154*t2181 + t2268*t2295 + t2335*t2344 + t2370*t2390 + t2435*t2449 + t2475*t2483 + t2511*t2524 + t2540*t2557 + t2641*t2655 + t2669*t2685 - 0.02159*(t2632*t2655 + t2580*t2685) - 1.11344*(t2580*t2655 - 1.*t2632*t2685) + t1057*t1863*t948 + 0.135*t1946*t1967*t948 - 0.1305*(t1264*t2081 - 1.*t1057*t1844*t948) + var1[0];
  p_output1[1]=t1863*t3036 - 0.135*t1946*t3252 + t2029*t3485 - 0.1305*(-1.*t1844*t3036 + t1264*t3485) + t2154*t3579 + t2268*t3875 + t2335*t3904 + t2370*t3936 + t2435*t4156 + t2475*t4395 + t2511*t4859 + t2540*t5453 + t2641*t5683 + t2669*t5888 - 0.02159*(t2632*t5683 + t2580*t5888) - 1.11344*(t2580*t5683 - 1.*t2632*t5888) - 0.135*t1890*t2798*t948 + var1[1];
  p_output1[2]=t1863*t7011 - 0.135*t1946*t7052 + t2029*t7118 - 0.1305*(-1.*t1844*t7011 + t1264*t7118) + t2154*t7208 + t2268*t7444 + t2335*t7600 + t2370*t7646 + t2435*t7698 + t2475*t7731 + t2511*t7810 + t2540*t7888 + t2641*t7982 + t2669*t8017 - 0.02159*(t2632*t7982 + t2580*t8017) - 1.11344*(t2580*t7982 - 1.*t2632*t8017) + 0.135*t1890*t2891*t948 + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void p_rightToe_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




