/*
 * Automatically Generated from Mathematica.
 * Thu 26 Aug 2021 14:19:12 GMT-07:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "p_leftToe_constraint.hh"
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
  double t268;
  double t478;
  double t801;
  double t861;
  double t929;
  double t958;
  double t992;
  double t994;
  double t996;
  double t944;
  double t947;
  double t953;
  double t1048;
  double t1170;
  double t1171;
  double t1180;
  double t1219;
  double t1165;
  double t1166;
  double t1167;
  double t1239;
  double t1243;
  double t1244;
  double t1279;
  double t1281;
  double t1286;
  double t1293;
  double t1311;
  double t1312;
  double t1316;
  double t1333;
  double t1334;
  double t1337;
  double t1346;
  double t1347;
  double t1359;
  double t1373;
  double t1390;
  double t1399;
  double t1400;
  double t1436;
  double t1449;
  double t1472;
  double t1631;
  double t1647;
  double t1675;
  double t1727;
  double t1734;
  double t1757;
  double t1763;
  double t1874;
  double t1906;
  double t1973;
  double t2033;
  double t2068;
  double t2092;
  double t2104;
  double t2164;
  double t2177;
  double t2183;
  double t2252;
  double t2264;
  double t2268;
  double t647;
  double t679;
  double t694;
  double t747;
  double t2365;
  double t931;
  double t932;
  double t2325;
  double t2354;
  double t2377;
  double t2384;
  double t995;
  double t1003;
  double t1006;
  double t1066;
  double t1080;
  double t1090;
  double t2392;
  double t2402;
  double t2405;
  double t2423;
  double t2424;
  double t2442;
  double t1193;
  double t1226;
  double t1231;
  double t1261;
  double t1262;
  double t1266;
  double t1289;
  double t1294;
  double t1305;
  double t2480;
  double t2481;
  double t2485;
  double t2493;
  double t2497;
  double t2500;
  double t1322;
  double t1325;
  double t1332;
  double t1369;
  double t1375;
  double t1388;
  double t2507;
  double t2522;
  double t2531;
  double t2539;
  double t2541;
  double t2553;
  double t1406;
  double t1407;
  double t1424;
  double t1704;
  double t1728;
  double t1729;
  double t2558;
  double t2559;
  double t2560;
  double t2565;
  double t2569;
  double t2570;
  double t1854;
  double t1867;
  double t1869;
  double t2099;
  double t2142;
  double t2157;
  double t2587;
  double t2590;
  double t2594;
  double t2601;
  double t2611;
  double t2612;
  double t2191;
  double t2207;
  double t2231;
  double t2619;
  double t2627;
  double t2635;
  double t2646;
  double t2648;
  double t2649;
  double t2675;
  double t2680;
  double t2681;
  double t2685;
  double t2686;
  double t2688;
  double t2692;
  double t2694;
  double t2698;
  double t2713;
  double t2714;
  double t2716;
  double t2719;
  double t2729;
  double t2730;
  double t2737;
  double t2742;
  double t2743;
  double t2746;
  double t2749;
  double t2757;
  double t2761;
  double t2762;
  double t2766;
  double t2772;
  double t2778;
  double t2782;
  double t2788;
  double t2790;
  double t2791;
  double t2796;
  double t2798;
  double t2800;
  double t2802;
  double t2805;
  double t2812;
  double t2815;
  double t2821;
  double t2822;
  t268 = Cos(var1[4]);
  t478 = Cos(var1[6]);
  t801 = Sin(var1[5]);
  t861 = Sin(var1[4]);
  t929 = Sin(var1[6]);
  t958 = Cos(var1[7]);
  t992 = -1.*t958;
  t994 = 1. + t992;
  t996 = Sin(var1[7]);
  t944 = -1.*t268*t478*t801;
  t947 = t861*t929;
  t953 = t944 + t947;
  t1048 = Cos(var1[5]);
  t1170 = Cos(var1[8]);
  t1171 = -1.*t1170;
  t1180 = 1. + t1171;
  t1219 = Sin(var1[8]);
  t1165 = t268*t1048*t958;
  t1166 = t953*t996;
  t1167 = t1165 + t1166;
  t1239 = t478*t861;
  t1243 = t268*t801*t929;
  t1244 = t1239 + t1243;
  t1279 = Cos(var1[9]);
  t1281 = -1.*t1279;
  t1286 = 1. + t1281;
  t1293 = Sin(var1[9]);
  t1311 = t1170*t1167;
  t1312 = t1244*t1219;
  t1316 = t1311 + t1312;
  t1333 = t1170*t1244;
  t1334 = -1.*t1167*t1219;
  t1337 = t1333 + t1334;
  t1346 = Cos(var1[10]);
  t1347 = -1.*t1346;
  t1359 = 1. + t1347;
  t1373 = Sin(var1[10]);
  t1390 = -1.*t1293*t1316;
  t1399 = t1279*t1337;
  t1400 = t1390 + t1399;
  t1436 = t1279*t1316;
  t1449 = t1293*t1337;
  t1472 = t1436 + t1449;
  t1631 = Cos(var1[11]);
  t1647 = -1.*t1631;
  t1675 = 1. + t1647;
  t1727 = Sin(var1[11]);
  t1734 = t1373*t1400;
  t1757 = t1346*t1472;
  t1763 = t1734 + t1757;
  t1874 = t1346*t1400;
  t1906 = -1.*t1373*t1472;
  t1973 = t1874 + t1906;
  t2033 = Cos(var1[13]);
  t2068 = -1.*t2033;
  t2092 = 1. + t2068;
  t2104 = Sin(var1[13]);
  t2164 = -1.*t1727*t1763;
  t2177 = t1631*t1973;
  t2183 = t2164 + t2177;
  t2252 = t1631*t1763;
  t2264 = t1727*t1973;
  t2268 = t2252 + t2264;
  t647 = -1.*t478;
  t679 = 1. + t647;
  t694 = 0.135*t679;
  t747 = 0. + t694;
  t2365 = Sin(var1[3]);
  t931 = -0.135*t929;
  t932 = 0. + t931;
  t2325 = Cos(var1[3]);
  t2354 = t2325*t1048;
  t2377 = -1.*t2365*t861*t801;
  t2384 = t2354 + t2377;
  t995 = 0.135*t994;
  t1003 = 0.049*t996;
  t1006 = 0. + t995 + t1003;
  t1066 = -0.049*t994;
  t1080 = 0.135*t996;
  t1090 = 0. + t1066 + t1080;
  t2392 = t478*t2384;
  t2402 = -1.*t268*t2365*t929;
  t2405 = t2392 + t2402;
  t2423 = t1048*t2365*t861;
  t2424 = t2325*t801;
  t2442 = t2423 + t2424;
  t1193 = -0.049*t1180;
  t1226 = -0.09*t1219;
  t1231 = 0. + t1193 + t1226;
  t1261 = -0.09*t1180;
  t1262 = 0.049*t1219;
  t1266 = 0. + t1261 + t1262;
  t1289 = -0.049*t1286;
  t1294 = -0.21*t1293;
  t1305 = 0. + t1289 + t1294;
  t2480 = t958*t2442;
  t2481 = t2405*t996;
  t2485 = t2480 + t2481;
  t2493 = -1.*t268*t478*t2365;
  t2497 = -1.*t2384*t929;
  t2500 = t2493 + t2497;
  t1322 = -0.21*t1286;
  t1325 = 0.049*t1293;
  t1332 = 0. + t1322 + t1325;
  t1369 = -0.27068*t1359;
  t1375 = 0.00159*t1373;
  t1388 = 0. + t1369 + t1375;
  t2507 = t1170*t2485;
  t2522 = t2500*t1219;
  t2531 = t2507 + t2522;
  t2539 = t1170*t2500;
  t2541 = -1.*t2485*t1219;
  t2553 = t2539 + t2541;
  t1406 = -0.00159*t1359;
  t1407 = -0.27068*t1373;
  t1424 = 0. + t1406 + t1407;
  t1704 = 0.01841*t1675;
  t1728 = -0.70544*t1727;
  t1729 = 0. + t1704 + t1728;
  t2558 = -1.*t1293*t2531;
  t2559 = t1279*t2553;
  t2560 = t2558 + t2559;
  t2565 = t1279*t2531;
  t2569 = t1293*t2553;
  t2570 = t2565 + t2569;
  t1854 = -0.70544*t1675;
  t1867 = -0.01841*t1727;
  t1869 = 0. + t1854 + t1867;
  t2099 = -1.11344*t2092;
  t2142 = 0.02159*t2104;
  t2157 = 0. + t2099 + t2142;
  t2587 = t1373*t2560;
  t2590 = t1346*t2570;
  t2594 = t2587 + t2590;
  t2601 = t1346*t2560;
  t2611 = -1.*t1373*t2570;
  t2612 = t2601 + t2611;
  t2191 = -0.02159*t2092;
  t2207 = -1.11344*t2104;
  t2231 = 0. + t2191 + t2207;
  t2619 = -1.*t1727*t2594;
  t2627 = t1631*t2612;
  t2635 = t2619 + t2627;
  t2646 = t1631*t2594;
  t2648 = t1727*t2612;
  t2649 = t2646 + t2648;
  t2675 = t1048*t2365;
  t2680 = t2325*t861*t801;
  t2681 = t2675 + t2680;
  t2685 = t478*t2681;
  t2686 = t2325*t268*t929;
  t2688 = t2685 + t2686;
  t2692 = -1.*t2325*t1048*t861;
  t2694 = t2365*t801;
  t2698 = t2692 + t2694;
  t2713 = t958*t2698;
  t2714 = t2688*t996;
  t2716 = t2713 + t2714;
  t2719 = t2325*t268*t478;
  t2729 = -1.*t2681*t929;
  t2730 = t2719 + t2729;
  t2737 = t1170*t2716;
  t2742 = t2730*t1219;
  t2743 = t2737 + t2742;
  t2746 = t1170*t2730;
  t2749 = -1.*t2716*t1219;
  t2757 = t2746 + t2749;
  t2761 = -1.*t1293*t2743;
  t2762 = t1279*t2757;
  t2766 = t2761 + t2762;
  t2772 = t1279*t2743;
  t2778 = t1293*t2757;
  t2782 = t2772 + t2778;
  t2788 = t1373*t2766;
  t2790 = t1346*t2782;
  t2791 = t2788 + t2790;
  t2796 = t1346*t2766;
  t2798 = -1.*t1373*t2782;
  t2800 = t2796 + t2798;
  t2802 = -1.*t1727*t2791;
  t2805 = t1631*t2800;
  t2812 = t2802 + t2805;
  t2815 = t1631*t2791;
  t2821 = t1727*t2800;
  t2822 = t2815 + t2821;
  p_output1[0]=0. + t1167*t1231 + t1244*t1266 + t1305*t1316 + t1332*t1337 + t1388*t1400 + t1424*t1472 + t1729*t1763 + t1869*t1973 + t2157*t2183 + t2231*t2268 + 0.075595*(t2104*t2183 + t2033*t2268) - 1.077437*(t2033*t2183 - 1.*t2104*t2268) + t1048*t1090*t268 - 1.*t268*t747*t801 + t861*t932 + t1006*t953 + 0.1305*(t953*t958 - 1.*t1048*t268*t996) + var1[0];
  p_output1[1]=0. + t1006*t2405 + t1090*t2442 + t1231*t2485 + t1266*t2500 + t1305*t2531 + t1332*t2553 + t1388*t2560 + t1424*t2570 + t1729*t2594 + t1869*t2612 + t2157*t2635 + t2231*t2649 + 0.075595*(t2104*t2635 + t2033*t2649) - 1.077437*(t2033*t2635 - 1.*t2104*t2649) + t2384*t747 - 1.*t2365*t268*t932 + 0.1305*(t2405*t958 - 1.*t2442*t996) + var1[1];
  p_output1[2]=0. + t1006*t2688 + t1090*t2698 + t1231*t2716 + t1266*t2730 + t1305*t2743 + t1332*t2757 + t1388*t2766 + t1424*t2782 + t1729*t2791 + t1869*t2800 + t2157*t2812 + t2231*t2822 + 0.075595*(t2104*t2812 + t2033*t2822) - 1.077437*(t2033*t2812 - 1.*t2104*t2822) + t2681*t747 + t2325*t268*t932 + 0.1305*(t2688*t958 - 1.*t2698*t996) + var1[2];
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

void p_leftToe_constraint_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




