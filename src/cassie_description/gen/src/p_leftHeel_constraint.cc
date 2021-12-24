/*
 * Automatically Generated from Mathematica.
 * Thu 26 Aug 2021 14:19:14 GMT-07:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "p_leftHeel_constraint.hh"
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
  double t502;
  double t742;
  double t1199;
  double t1242;
  double t1256;
  double t1376;
  double t1407;
  double t1502;
  double t1601;
  double t1337;
  double t1366;
  double t1367;
  double t1743;
  double t1909;
  double t1910;
  double t1918;
  double t1929;
  double t1898;
  double t1901;
  double t1908;
  double t1949;
  double t1953;
  double t1954;
  double t1999;
  double t2006;
  double t2008;
  double t2046;
  double t2051;
  double t2052;
  double t2061;
  double t2080;
  double t2081;
  double t2082;
  double t2084;
  double t2086;
  double t2087;
  double t2089;
  double t2093;
  double t2094;
  double t2098;
  double t2114;
  double t2118;
  double t2122;
  double t2131;
  double t2132;
  double t2133;
  double t2135;
  double t2177;
  double t2185;
  double t2189;
  double t2207;
  double t2210;
  double t2211;
  double t2214;
  double t2215;
  double t2217;
  double t2219;
  double t2223;
  double t2225;
  double t2226;
  double t2236;
  double t2237;
  double t2238;
  double t834;
  double t1033;
  double t1070;
  double t1194;
  double t2308;
  double t1305;
  double t1325;
  double t2304;
  double t2305;
  double t2316;
  double t2320;
  double t1524;
  double t1635;
  double t1704;
  double t1795;
  double t1807;
  double t1837;
  double t2330;
  double t2331;
  double t2333;
  double t2339;
  double t2347;
  double t2348;
  double t1922;
  double t1937;
  double t1941;
  double t1973;
  double t1987;
  double t1997;
  double t2021;
  double t2047;
  double t2049;
  double t2374;
  double t2375;
  double t2376;
  double t2379;
  double t2380;
  double t2389;
  double t2064;
  double t2065;
  double t2076;
  double t2088;
  double t2090;
  double t2091;
  double t2419;
  double t2423;
  double t2469;
  double t2486;
  double t2490;
  double t2500;
  double t2106;
  double t2107;
  double t2110;
  double t2134;
  double t2139;
  double t2171;
  double t2522;
  double t2538;
  double t2555;
  double t2598;
  double t2601;
  double t2606;
  double t2199;
  double t2205;
  double t2206;
  double t2218;
  double t2221;
  double t2222;
  double t2615;
  double t2641;
  double t2646;
  double t2656;
  double t2659;
  double t2662;
  double t2232;
  double t2233;
  double t2234;
  double t2670;
  double t2672;
  double t2683;
  double t2694;
  double t2700;
  double t2704;
  double t2758;
  double t2772;
  double t2775;
  double t2783;
  double t2790;
  double t2801;
  double t2821;
  double t2823;
  double t2824;
  double t2882;
  double t2888;
  double t2889;
  double t2898;
  double t2899;
  double t2900;
  double t2914;
  double t2915;
  double t2922;
  double t2926;
  double t2927;
  double t2929;
  double t2933;
  double t2934;
  double t2976;
  double t2988;
  double t2989;
  double t2998;
  double t3025;
  double t3032;
  double t3037;
  double t3045;
  double t3054;
  double t3055;
  double t3113;
  double t3126;
  double t3135;
  double t3151;
  double t3155;
  double t3156;
  t502 = Cos(var1[4]);
  t742 = Cos(var1[6]);
  t1199 = Sin(var1[5]);
  t1242 = Sin(var1[4]);
  t1256 = Sin(var1[6]);
  t1376 = Cos(var1[7]);
  t1407 = -1.*t1376;
  t1502 = 1. + t1407;
  t1601 = Sin(var1[7]);
  t1337 = -1.*t502*t742*t1199;
  t1366 = t1242*t1256;
  t1367 = t1337 + t1366;
  t1743 = Cos(var1[5]);
  t1909 = Cos(var1[8]);
  t1910 = -1.*t1909;
  t1918 = 1. + t1910;
  t1929 = Sin(var1[8]);
  t1898 = t502*t1743*t1376;
  t1901 = t1367*t1601;
  t1908 = t1898 + t1901;
  t1949 = t742*t1242;
  t1953 = t502*t1199*t1256;
  t1954 = t1949 + t1953;
  t1999 = Cos(var1[9]);
  t2006 = -1.*t1999;
  t2008 = 1. + t2006;
  t2046 = Sin(var1[9]);
  t2051 = t1909*t1908;
  t2052 = t1954*t1929;
  t2061 = t2051 + t2052;
  t2080 = t1909*t1954;
  t2081 = -1.*t1908*t1929;
  t2082 = t2080 + t2081;
  t2084 = Cos(var1[10]);
  t2086 = -1.*t2084;
  t2087 = 1. + t2086;
  t2089 = Sin(var1[10]);
  t2093 = -1.*t2046*t2061;
  t2094 = t1999*t2082;
  t2098 = t2093 + t2094;
  t2114 = t1999*t2061;
  t2118 = t2046*t2082;
  t2122 = t2114 + t2118;
  t2131 = Cos(var1[11]);
  t2132 = -1.*t2131;
  t2133 = 1. + t2132;
  t2135 = Sin(var1[11]);
  t2177 = t2089*t2098;
  t2185 = t2084*t2122;
  t2189 = t2177 + t2185;
  t2207 = t2084*t2098;
  t2210 = -1.*t2089*t2122;
  t2211 = t2207 + t2210;
  t2214 = Cos(var1[13]);
  t2215 = -1.*t2214;
  t2217 = 1. + t2215;
  t2219 = Sin(var1[13]);
  t2223 = -1.*t2135*t2189;
  t2225 = t2131*t2211;
  t2226 = t2223 + t2225;
  t2236 = t2131*t2189;
  t2237 = t2135*t2211;
  t2238 = t2236 + t2237;
  t834 = -1.*t742;
  t1033 = 1. + t834;
  t1070 = 0.135*t1033;
  t1194 = 0. + t1070;
  t2308 = Sin(var1[3]);
  t1305 = -0.135*t1256;
  t1325 = 0. + t1305;
  t2304 = Cos(var1[3]);
  t2305 = t2304*t1743;
  t2316 = -1.*t2308*t1242*t1199;
  t2320 = t2305 + t2316;
  t1524 = 0.135*t1502;
  t1635 = 0.049*t1601;
  t1704 = 0. + t1524 + t1635;
  t1795 = -0.049*t1502;
  t1807 = 0.135*t1601;
  t1837 = 0. + t1795 + t1807;
  t2330 = t742*t2320;
  t2331 = -1.*t502*t2308*t1256;
  t2333 = t2330 + t2331;
  t2339 = t1743*t2308*t1242;
  t2347 = t2304*t1199;
  t2348 = t2339 + t2347;
  t1922 = -0.049*t1918;
  t1937 = -0.09*t1929;
  t1941 = 0. + t1922 + t1937;
  t1973 = -0.09*t1918;
  t1987 = 0.049*t1929;
  t1997 = 0. + t1973 + t1987;
  t2021 = -0.049*t2008;
  t2047 = -0.21*t2046;
  t2049 = 0. + t2021 + t2047;
  t2374 = t1376*t2348;
  t2375 = t2333*t1601;
  t2376 = t2374 + t2375;
  t2379 = -1.*t502*t742*t2308;
  t2380 = -1.*t2320*t1256;
  t2389 = t2379 + t2380;
  t2064 = -0.21*t2008;
  t2065 = 0.049*t2046;
  t2076 = 0. + t2064 + t2065;
  t2088 = -0.27068*t2087;
  t2090 = 0.00159*t2089;
  t2091 = 0. + t2088 + t2090;
  t2419 = t1909*t2376;
  t2423 = t2389*t1929;
  t2469 = t2419 + t2423;
  t2486 = t1909*t2389;
  t2490 = -1.*t2376*t1929;
  t2500 = t2486 + t2490;
  t2106 = -0.00159*t2087;
  t2107 = -0.27068*t2089;
  t2110 = 0. + t2106 + t2107;
  t2134 = 0.01841*t2133;
  t2139 = -0.70544*t2135;
  t2171 = 0. + t2134 + t2139;
  t2522 = -1.*t2046*t2469;
  t2538 = t1999*t2500;
  t2555 = t2522 + t2538;
  t2598 = t1999*t2469;
  t2601 = t2046*t2500;
  t2606 = t2598 + t2601;
  t2199 = -0.70544*t2133;
  t2205 = -0.01841*t2135;
  t2206 = 0. + t2199 + t2205;
  t2218 = -1.11344*t2217;
  t2221 = 0.02159*t2219;
  t2222 = 0. + t2218 + t2221;
  t2615 = t2089*t2555;
  t2641 = t2084*t2606;
  t2646 = t2615 + t2641;
  t2656 = t2084*t2555;
  t2659 = -1.*t2089*t2606;
  t2662 = t2656 + t2659;
  t2232 = -0.02159*t2217;
  t2233 = -1.11344*t2219;
  t2234 = 0. + t2232 + t2233;
  t2670 = -1.*t2135*t2646;
  t2672 = t2131*t2662;
  t2683 = t2670 + t2672;
  t2694 = t2131*t2646;
  t2700 = t2135*t2662;
  t2704 = t2694 + t2700;
  t2758 = t1743*t2308;
  t2772 = t2304*t1242*t1199;
  t2775 = t2758 + t2772;
  t2783 = t742*t2775;
  t2790 = t2304*t502*t1256;
  t2801 = t2783 + t2790;
  t2821 = -1.*t2304*t1743*t1242;
  t2823 = t2308*t1199;
  t2824 = t2821 + t2823;
  t2882 = t1376*t2824;
  t2888 = t2801*t1601;
  t2889 = t2882 + t2888;
  t2898 = t2304*t502*t742;
  t2899 = -1.*t2775*t1256;
  t2900 = t2898 + t2899;
  t2914 = t1909*t2889;
  t2915 = t2900*t1929;
  t2922 = t2914 + t2915;
  t2926 = t1909*t2900;
  t2927 = -1.*t2889*t1929;
  t2929 = t2926 + t2927;
  t2933 = -1.*t2046*t2922;
  t2934 = t1999*t2929;
  t2976 = t2933 + t2934;
  t2988 = t1999*t2922;
  t2989 = t2046*t2929;
  t2998 = t2988 + t2989;
  t3025 = t2089*t2976;
  t3032 = t2084*t2998;
  t3037 = t3025 + t3032;
  t3045 = t2084*t2976;
  t3054 = -1.*t2089*t2998;
  t3055 = t3045 + t3054;
  t3113 = -1.*t2135*t3037;
  t3126 = t2131*t3055;
  t3135 = t3113 + t3126;
  t3151 = t2131*t3037;
  t3155 = t2135*t3055;
  t3156 = t3151 + t3155;
  p_output1[0]=0. + t1242*t1325 + t1367*t1704 + t1908*t1941 + t1954*t1997 + t2049*t2061 + t2076*t2082 + t2091*t2098 + t2110*t2122 + t2171*t2189 + t2206*t2211 + t2222*t2226 + t2234*t2238 - 0.014395*(t2219*t2226 + t2214*t2238) - 1.184683*(t2214*t2226 - 1.*t2219*t2238) - 1.*t1194*t1199*t502 + t1743*t1837*t502 + 0.1305*(t1367*t1376 - 1.*t1601*t1743*t502) + var1[0];
  p_output1[1]=0. + t1194*t2320 + t1704*t2333 + t1837*t2348 + 0.1305*(t1376*t2333 - 1.*t1601*t2348) + t1941*t2376 + t1997*t2389 + t2049*t2469 + t2076*t2500 + t2091*t2555 + t2110*t2606 + t2171*t2646 + t2206*t2662 + t2222*t2683 + t2234*t2704 - 0.014395*(t2219*t2683 + t2214*t2704) - 1.184683*(t2214*t2683 - 1.*t2219*t2704) - 1.*t1325*t2308*t502 + var1[1];
  p_output1[2]=0. + t1194*t2775 + t1704*t2801 + t1837*t2824 + 0.1305*(t1376*t2801 - 1.*t1601*t2824) + t1941*t2889 + t1997*t2900 + t2049*t2922 + t2076*t2929 + t2091*t2976 + t2110*t2998 + t2171*t3037 + t2206*t3055 + t2222*t3135 + t2234*t3156 - 0.014395*(t2219*t3135 + t2214*t3156) - 1.184683*(t2214*t3135 - 1.*t2219*t3156) + t1325*t2304*t502 + var1[2];
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

void p_leftHeel_constraint_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




