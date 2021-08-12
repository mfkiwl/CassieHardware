/*
 * Automatically Generated from Mathematica.
 * Sat 12 Dec 2020 14:27:47 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "leftLegAngleVelocity.hh"
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t484;
  double t850;
  double t993;
  double t1306;
  double t1465;
  double t1645;
  double t2050;
  double t2059;
  double t2075;
  double t2097;
  double t2109;
  double t2144;
  double t2156;
  double t2170;
  double t2172;
  double t2213;
  double t2218;
  double t2238;
  double t2308;
  double t2312;
  double t2330;
  double t2384;
  double t2432;
  double t2441;
  double t2448;
  double t2489;
  double t2526;
  double t2531;
  double t2398;
  double t2754;
  double t2781;
  double t2832;
  double t2837;
  double t2850;
  double t2870;
  double t2871;
  double t2886;
  double t1434;
  double t1616;
  double t1617;
  double t1763;
  double t1783;
  double t1860;
  double t2123;
  double t2147;
  double t2151;
  double t2188;
  double t2197;
  double t2205;
  double t2365;
  double t2406;
  double t2477;
  double t2479;
  double t2487;
  double t2550;
  double t2552;
  double t2557;
  double t2579;
  double t2610;
  double t2617;
  double t2998;
  double t3003;
  double t3016;
  double t2854;
  double t2855;
  double t2860;
  double t2722;
  double t2731;
  double t3148;
  double t3191;
  double t3250;
  double t3268;
  double t3275;
  double t3383;
  double t3395;
  double t3402;
  double t3457;
  double t3458;
  double t3506;
  double t3537;
  double t3573;
  double t3621;
  double t3037;
  double t3042;
  double t3048;
  double t3049;
  double t3057;
  double t3059;
  double t3061;
  double t3082;
  double t3084;
  double t3103;
  double t3141;
  double t3147;
  double t3633;
  double t3672;
  double t3676;
  double t548;
  double t1625;
  double t1713;
  double t1862;
  double t2187;
  double t2255;
  double t2452;
  double t2548;
  double t2576;
  double t2643;
  double t2704;
  double t3935;
  double t3947;
  double t3959;
  double t3978;
  double t3983;
  double t3985;
  double t4048;
  double t4056;
  double t4358;
  double t4371;
  double t4399;
  double t4300;
  double t4302;
  double t4305;
  double t4172;
  double t4173;
  double t3928;
  double t4330;
  double t4335;
  double t4336;
  double t4316;
  double t4320;
  double t3973;
  double t4726;
  double t4744;
  t484 = Cos(var1[8]);
  t850 = Cos(var1[9]);
  t993 = -1.*t850;
  t1306 = 1. + t993;
  t1465 = Sin(var1[9]);
  t1645 = Sin(var1[8]);
  t2050 = -1.*var1[9];
  t2059 = 0.226893 + t2050;
  t2075 = Cos(t2059);
  t2097 = -1.*t2075;
  t2109 = 1. + t2097;
  t2144 = Sin(t2059);
  t2156 = -1.*t484*t1465;
  t2170 = -1.*t850*t1645;
  t2172 = t2156 + t2170;
  t2213 = t850*t484;
  t2218 = -1.*t1465*t1645;
  t2238 = t2213 + t2218;
  t2308 = Cos(var1[13]);
  t2312 = -1.*t2308;
  t2330 = 1. + t2312;
  t2384 = Sin(var1[13]);
  t2432 = t2144*t2172;
  t2441 = t2075*t2238;
  t2448 = t2432 + t2441;
  t2489 = t2075*t2172;
  t2526 = -1.*t2144*t2238;
  t2531 = t2489 + t2526;
  t2398 = -1.11344*t2384;
  t2754 = t484*t1465;
  t2781 = t850*t1645;
  t2832 = t2754 + t2781;
  t2837 = -1.*t2144*t2832;
  t2850 = t2837 + t2441;
  t2870 = t2075*t2832;
  t2871 = t2144*t2238;
  t2886 = t2870 + t2871;
  t1434 = -0.049*t1306;
  t1616 = -0.21*t1465;
  t1617 = t1434 + t1616;
  t1763 = -0.21*t1306;
  t1783 = 0.049*t1465;
  t1860 = t1763 + t1783;
  t2123 = -0.70544*t2109;
  t2147 = -0.01841*t2144;
  t2151 = t2123 + t2147;
  t2188 = 0.01841*t2109;
  t2197 = -0.70544*t2144;
  t2205 = t2188 + t2197;
  t2365 = -0.02159*t2330;
  t2406 = t2365 + t2398;
  t2477 = -1.11344*t2330;
  t2479 = 0.02159*t2384;
  t2487 = t2477 + t2479;
  t2550 = -1.*t2384*t2448;
  t2552 = t2308*t2531;
  t2557 = t2550 + t2552;
  t2579 = t2308*t2448;
  t2610 = t2384*t2531;
  t2617 = t2579 + t2610;
  t2998 = t2308*t2850;
  t3003 = -1.*t2384*t2886;
  t3016 = t2998 + t3003;
  t2854 = -1.11344*t2308;
  t2855 = -0.02159*t2384;
  t2860 = t2854 + t2855;
  t2722 = 0.02159*t2308;
  t2731 = t2722 + t2398;
  t3148 = -0.09*t484;
  t3191 = -1.*t484*t1860;
  t3250 = -0.049*t1645;
  t3268 = -1.*t1617*t1645;
  t3275 = -1.*t2205*t2832;
  t3383 = -1.*t2151*t2238;
  t3395 = -1.*t2487*t2850;
  t3402 = -1.*t2406*t2886;
  t3457 = t2384*t2850;
  t3458 = t2308*t2886;
  t3506 = t3457 + t3458;
  t3537 = 0.02159*t3506;
  t3573 = 1.11344*t3016;
  t3621 = t3148 + t3191 + t3250 + t3268 + t3275 + t3383 + t3395 + t3402 + t3537 + t3573;
  t3037 = -0.049*t484;
  t3042 = -1.*t484*t1617;
  t3048 = 0.09*t1645;
  t3049 = t1860*t1645;
  t3057 = -1.*t2151*t2172;
  t3059 = -1.*t2205*t2238;
  t3061 = -1.*t2406*t2448;
  t3082 = -1.*t2487*t2531;
  t3084 = 1.11344*t2557;
  t3103 = 0.02159*t2617;
  t3141 = t3037 + t3042 + t3048 + t3049 + t3057 + t3059 + t3061 + t3082 + t3084 + t3103;
  t3147 = Power(t3141,2);
  t3633 = Power(t3621,2);
  t3672 = t3147 + t3633;
  t3676 = 1/t3672;
  t548 = 0.049*t484;
  t1625 = t484*t1617;
  t1713 = -0.09*t1645;
  t1862 = -1.*t1860*t1645;
  t2187 = t2151*t2172;
  t2255 = t2205*t2238;
  t2452 = t2406*t2448;
  t2548 = t2487*t2531;
  t2576 = -1.11344*t2557;
  t2643 = -0.02159*t2617;
  t2704 = t548 + t1625 + t1713 + t1862 + t2187 + t2255 + t2452 + t2548 + t2576 + t2643;
  t3935 = -1.*t850*t484;
  t3947 = t1465*t1645;
  t3959 = t3935 + t3947;
  t3978 = -1.*t2144*t2172;
  t3983 = t2075*t3959;
  t3985 = t3978 + t3983;
  t4048 = t2144*t3959;
  t4056 = t2489 + t4048;
  t4358 = t2489 + t2870;
  t4371 = t2144*t2832;
  t4399 = t2432 + t4371;
  t4300 = -0.21*t850;
  t4302 = -0.049*t1465;
  t4305 = t4300 + t4302;
  t4172 = 0.049*t850;
  t4173 = t4172 + t1616;
  t3928 = -1.*t2205*t2172;
  t4330 = 0.01841*t2075;
  t4335 = 0.70544*t2144;
  t4336 = t4330 + t4335;
  t4316 = 0.70544*t2075;
  t4320 = t4316 + t2147;
  t3973 = -1.*t2151*t3959;
  t4726 = t2441 + t3983;
  t4744 = t2871 + t4048;
  p_output1[0]=(t2704*t3141*t3676 + t3621*t3676*(0.049*t1645 + t1617*t1645 + t3928 + t3973 - 1.*t2487*t3985 - 1.*t2406*t4056 + 0.02159*(t2384*t3985 + t2308*t4056) + 1.11344*(t2308*t3985 - 1.*t2384*t4056) + 0.09*t484 + t1860*t484))*var2[8] + (t2704*t3676*(t3057 + t3059 - 1.*t1645*t4305 - 1.*t2832*t4320 - 1.*t2238*t4336 - 1.*t2487*t4358 - 1.*t2406*t4399 + 0.02159*(t2384*t4358 + t2308*t4399) + 1.11344*(t2308*t4358 - 1.*t2384*t4399) - 1.*t4173*t484) + t3621*t3676*(t3928 + t3973 + t1645*t4173 - 1.*t2238*t4320 - 1.*t2172*t4336 - 1.*t2487*t4726 - 1.*t2406*t4744 + 0.02159*(t2384*t4726 + t2308*t4744) + 1.11344*(t2308*t4726 - 1.*t2384*t4744) - 1.*t4305*t484))*var2[9] + (t2704*(-1.*t2731*t2850 - 1.*t2860*t2886 + 1.11344*(-1.*t2384*t2850 - 1.*t2308*t2886) + 0.02159*t3016)*t3676 + (1.11344*(-1.*t2308*t2448 - 1.*t2384*t2531) + 0.02159*t2557 - 1.*t2531*t2731 - 1.*t2448*t2860)*t3621*t3676)*var2[13];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void leftLegAngleVelocity_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}




