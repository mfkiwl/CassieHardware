/*
 * Automatically Generated from Mathematica.
 * Mon 13 Sep 2021 16:08:58 GMT-07:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "pose_leftFoot.hh"
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
  double t1271;
  double t1516;
  double t1616;
  double t1658;
  double t1662;
  double t1727;
  double t1852;
  double t1990;
  double t1992;
  double t2005;
  double t2036;
  double t1967;
  double t1978;
  double t1982;
  double t2077;
  double t2103;
  double t2114;
  double t2136;
  double t2142;
  double t2154;
  double t2160;
  double t2162;
  double t2198;
  double t2200;
  double t2203;
  double t2216;
  double t2218;
  double t2219;
  double t2233;
  double t2250;
  double t2253;
  double t2254;
  double t2267;
  double t2268;
  double t2272;
  double t2277;
  double t2281;
  double t2284;
  double t2287;
  double t2295;
  double t2297;
  double t2298;
  double t2305;
  double t2306;
  double t2309;
  double t2311;
  double t2314;
  double t2315;
  double t2317;
  double t2321;
  double t2323;
  double t2324;
  double t2335;
  double t2337;
  double t2340;
  double t2358;
  double t2376;
  double t1693;
  double t1758;
  double t1812;
  double t1860;
  double t1862;
  double t1869;
  double t2378;
  double t2381;
  double t2382;
  double t2029;
  double t2055;
  double t2057;
  double t2081;
  double t2093;
  double t2096;
  double t2139;
  double t2144;
  double t2151;
  double t2409;
  double t2412;
  double t2413;
  double t2417;
  double t2419;
  double t2420;
  double t2166;
  double t2180;
  double t2194;
  double t2221;
  double t2241;
  double t2246;
  double t2431;
  double t2435;
  double t2437;
  double t2441;
  double t2442;
  double t2445;
  double t2257;
  double t2260;
  double t2261;
  double t2285;
  double t2291;
  double t2292;
  double t2448;
  double t2449;
  double t2458;
  double t2466;
  double t2477;
  double t2481;
  double t2300;
  double t2301;
  double t2302;
  double t2316;
  double t2318;
  double t2320;
  double t2487;
  double t2493;
  double t2495;
  double t2501;
  double t2502;
  double t2505;
  double t2331;
  double t2333;
  double t2334;
  double t2524;
  double t2531;
  double t2535;
  double t2537;
  double t2540;
  double t2541;
  double t2367;
  double t2369;
  double t2612;
  double t2613;
  double t2620;
  double t2640;
  double t2641;
  double t2648;
  double t2654;
  double t2655;
  double t2656;
  double t2661;
  double t2663;
  double t2665;
  double t2667;
  double t2669;
  double t2670;
  double t2674;
  double t2675;
  double t2680;
  double t2682;
  double t2685;
  double t2686;
  double t2706;
  double t2712;
  double t2714;
  double t2720;
  double t2722;
  double t2724;
  double t2730;
  double t2732;
  double t2733;
  double t2737;
  double t2741;
  double t2742;
  double t2746;
  double t2751;
  double t2758;
  double t2766;
  double t2770;
  double t2771;
  double t2631;
  double t2632;
  double t2638;
  double t2343;
  double t2344;
  double t2348;
  double t2352;
  double t2353;
  double t2354;
  double t2543;
  double t2563;
  double t2568;
  double t2580;
  double t2583;
  double t2589;
  double t2389;
  double t2391;
  double t2393;
  double t2778;
  double t2779;
  double t2794;
  double t2888;
  double t2891;
  double t2895;
  double t2896;
  double t1925;
  double t1948;
  double t1953;
  t1271 = Sin(var1[4]);
  t1516 = Sin(var1[6]);
  t1616 = Cos(var1[7]);
  t1658 = -1.*t1616;
  t1662 = 1. + t1658;
  t1727 = Sin(var1[7]);
  t1852 = Cos(var1[4]);
  t1990 = Cos(var1[8]);
  t1992 = -1.*t1990;
  t2005 = 1. + t1992;
  t2036 = Sin(var1[8]);
  t1967 = t1852*t1616;
  t1978 = t1271*t1516*t1727;
  t1982 = t1967 + t1978;
  t2077 = Cos(var1[6]);
  t2103 = Cos(var1[9]);
  t2114 = -1.*t2103;
  t2136 = 1. + t2114;
  t2142 = Sin(var1[9]);
  t2154 = t1990*t1982;
  t2160 = t2077*t1271*t2036;
  t2162 = t2154 + t2160;
  t2198 = t2077*t1990*t1271;
  t2200 = -1.*t1982*t2036;
  t2203 = t2198 + t2200;
  t2216 = Cos(var1[10]);
  t2218 = -1.*t2216;
  t2219 = 1. + t2218;
  t2233 = Sin(var1[10]);
  t2250 = -1.*t2142*t2162;
  t2253 = t2103*t2203;
  t2254 = t2250 + t2253;
  t2267 = t2103*t2162;
  t2268 = t2142*t2203;
  t2272 = t2267 + t2268;
  t2277 = Cos(var1[11]);
  t2281 = -1.*t2277;
  t2284 = 1. + t2281;
  t2287 = Sin(var1[11]);
  t2295 = t2233*t2254;
  t2297 = t2216*t2272;
  t2298 = t2295 + t2297;
  t2305 = t2216*t2254;
  t2306 = -1.*t2233*t2272;
  t2309 = t2305 + t2306;
  t2311 = Cos(var1[13]);
  t2314 = -1.*t2311;
  t2315 = 1. + t2314;
  t2317 = Sin(var1[13]);
  t2321 = -1.*t2287*t2298;
  t2323 = t2277*t2309;
  t2324 = t2321 + t2323;
  t2335 = t2277*t2298;
  t2337 = t2287*t2309;
  t2340 = t2335 + t2337;
  t2358 = Cos(var1[3]);
  t2376 = Sin(var1[3]);
  t1693 = 0.135*t1662;
  t1758 = 0.049*t1727;
  t1812 = t1693 + t1758;
  t1860 = -0.049*t1662;
  t1862 = 0.135*t1727;
  t1869 = t1860 + t1862;
  t2378 = t2358*t2077;
  t2381 = -1.*t1852*t2376*t1516;
  t2382 = t2378 + t2381;
  t2029 = -0.049*t2005;
  t2055 = -0.09*t2036;
  t2057 = t2029 + t2055;
  t2081 = -0.09*t2005;
  t2093 = 0.049*t2036;
  t2096 = t2081 + t2093;
  t2139 = -0.049*t2136;
  t2144 = -0.21*t2142;
  t2151 = t2139 + t2144;
  t2409 = t1616*t2376*t1271;
  t2412 = t2382*t1727;
  t2413 = t2409 + t2412;
  t2417 = -1.*t1852*t2077*t2376;
  t2419 = -1.*t2358*t1516;
  t2420 = t2417 + t2419;
  t2166 = -0.21*t2136;
  t2180 = 0.049*t2142;
  t2194 = t2166 + t2180;
  t2221 = -0.27068*t2219;
  t2241 = 0.00159*t2233;
  t2246 = t2221 + t2241;
  t2431 = t1990*t2413;
  t2435 = t2420*t2036;
  t2437 = t2431 + t2435;
  t2441 = t1990*t2420;
  t2442 = -1.*t2413*t2036;
  t2445 = t2441 + t2442;
  t2257 = -0.00159*t2219;
  t2260 = -0.27068*t2233;
  t2261 = t2257 + t2260;
  t2285 = 0.01841*t2284;
  t2291 = -0.70544*t2287;
  t2292 = t2285 + t2291;
  t2448 = -1.*t2142*t2437;
  t2449 = t2103*t2445;
  t2458 = t2448 + t2449;
  t2466 = t2103*t2437;
  t2477 = t2142*t2445;
  t2481 = t2466 + t2477;
  t2300 = -0.70544*t2284;
  t2301 = -0.01841*t2287;
  t2302 = t2300 + t2301;
  t2316 = -1.11344*t2315;
  t2318 = 0.02159*t2317;
  t2320 = t2316 + t2318;
  t2487 = t2233*t2458;
  t2493 = t2216*t2481;
  t2495 = t2487 + t2493;
  t2501 = t2216*t2458;
  t2502 = -1.*t2233*t2481;
  t2505 = t2501 + t2502;
  t2331 = -0.02159*t2315;
  t2333 = -1.11344*t2317;
  t2334 = t2331 + t2333;
  t2524 = -1.*t2287*t2495;
  t2531 = t2277*t2505;
  t2535 = t2524 + t2531;
  t2537 = t2277*t2495;
  t2540 = t2287*t2505;
  t2541 = t2537 + t2540;
  t2367 = -1.*t2077;
  t2369 = 1. + t2367;
  t2612 = t2077*t2376;
  t2613 = t2358*t1852*t1516;
  t2620 = t2612 + t2613;
  t2640 = -1.*t2358*t1616*t1271;
  t2641 = t2620*t1727;
  t2648 = t2640 + t2641;
  t2654 = t2358*t1852*t2077;
  t2655 = -1.*t2376*t1516;
  t2656 = t2654 + t2655;
  t2661 = t1990*t2648;
  t2663 = t2656*t2036;
  t2665 = t2661 + t2663;
  t2667 = t1990*t2656;
  t2669 = -1.*t2648*t2036;
  t2670 = t2667 + t2669;
  t2674 = -1.*t2142*t2665;
  t2675 = t2103*t2670;
  t2680 = t2674 + t2675;
  t2682 = t2103*t2665;
  t2685 = t2142*t2670;
  t2686 = t2682 + t2685;
  t2706 = t2233*t2680;
  t2712 = t2216*t2686;
  t2714 = t2706 + t2712;
  t2720 = t2216*t2680;
  t2722 = -1.*t2233*t2686;
  t2724 = t2720 + t2722;
  t2730 = -1.*t2287*t2714;
  t2732 = t2277*t2724;
  t2733 = t2730 + t2732;
  t2737 = t2277*t2714;
  t2741 = t2287*t2724;
  t2742 = t2737 + t2741;
  t2746 = t2317*t2733;
  t2751 = t2311*t2742;
  t2758 = t2746 + t2751;
  t2766 = t2311*t2733;
  t2770 = -1.*t2317*t2742;
  t2771 = t2766 + t2770;
  t2631 = t1616*t2620;
  t2632 = t2358*t1271*t1727;
  t2638 = t2631 + t2632;
  t2343 = t2317*t2324;
  t2344 = t2311*t2340;
  t2348 = t2343 + t2344;
  t2352 = t2311*t2324;
  t2353 = -1.*t2317*t2340;
  t2354 = t2352 + t2353;
  t2543 = t2317*t2535;
  t2563 = t2311*t2541;
  t2568 = t2543 + t2563;
  t2580 = t2311*t2535;
  t2583 = -1.*t2317*t2541;
  t2589 = t2580 + t2583;
  t2389 = t1616*t2382;
  t2391 = -1.*t2376*t1271*t1727;
  t2393 = t2389 + t2391;
  t2778 = -0.766044*t2758;
  t2779 = 0.642788*t2771;
  t2794 = t2778 + t2779;
  t2888 = Power(t2638,2);
  t2891 = Power(t2794,2);
  t2895 = t2888 + t2891;
  t2896 = 1/Sqrt(t2895);
  t1925 = t1616*t1271*t1516;
  t1948 = -1.*t1852*t1727;
  t1953 = t1925 + t1948;
  p_output1[0]=-0.135*t1271*t1516 + t1271*t1516*t1812 + t1852*t1869 + 0.1305*t1953 + t1982*t2057 + t1271*t2077*t2096 + t2151*t2162 + t2194*t2203 + t2246*t2254 + t2261*t2272 + t2292*t2298 + t2302*t2309 + t2320*t2324 + t2334*t2340 + 0.0306*t2348 - 1.13106*t2354 + var1[0];
  p_output1[1]=0.135*t2358*t2369 + 0.135*t1516*t1852*t2376 + t1271*t1869*t2376 + t1812*t2382 + 0.1305*t2393 + t2057*t2413 + t2096*t2420 + t2151*t2437 + t2194*t2445 + t2246*t2458 + t2261*t2481 + t2292*t2495 + t2302*t2505 + t2320*t2535 + t2334*t2541 + 0.0306*t2568 - 1.13106*t2589 + var1[1];
  p_output1[2]=-0.135*t1516*t1852*t2358 - 1.*t1271*t1869*t2358 + 0.135*t2369*t2376 + t1812*t2620 + 0.1305*t2638 + t2057*t2648 + t2096*t2656 + t2151*t2665 + t2194*t2670 + t2246*t2680 + t2261*t2686 + t2292*t2714 + t2302*t2724 + t2320*t2733 + t2334*t2742 + 0.0306*t2758 - 1.13106*t2771 + var1[2];
  p_output1[3]=ArcTan(t2794,t2638);
  p_output1[4]=ArcTan(Sqrt(Power(0.642788*t2348 + 0.766044*t2354,2) + Power(0.642788*t2568 + 0.766044*t2589,2)),-0.642788*t2758 - 0.766044*t2771);
  p_output1[5]=ArcTan(-1.*(-0.766044*t2568 + 0.642788*t2589)*t2638*t2896 + t2393*t2794*t2896,(-0.766044*t2348 + 0.642788*t2354)*t2638*t2896 - 1.*t1953*t2794*t2896);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void pose_leftFoot_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




