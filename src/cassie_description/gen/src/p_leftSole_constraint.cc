/*
 * Automatically Generated from Mathematica.
 * Thu 26 Aug 2021 14:19:00 GMT-07:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "p_leftSole_constraint.hh"
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
  double t648;
  double t663;
  double t763;
  double t878;
  double t879;
  double t993;
  double t1044;
  double t1069;
  double t1112;
  double t930;
  double t938;
  double t939;
  double t1151;
  double t1419;
  double t1421;
  double t1423;
  double t1445;
  double t1307;
  double t1370;
  double t1409;
  double t1801;
  double t1808;
  double t1824;
  double t1878;
  double t1883;
  double t1912;
  double t1921;
  double t1928;
  double t1957;
  double t1961;
  double t1977;
  double t1978;
  double t1983;
  double t1991;
  double t1992;
  double t1993;
  double t2002;
  double t2017;
  double t2025;
  double t2029;
  double t2041;
  double t2042;
  double t2043;
  double t2045;
  double t2059;
  double t2062;
  double t2067;
  double t2071;
  double t2072;
  double t2073;
  double t2095;
  double t2096;
  double t2100;
  double t2103;
  double t2105;
  double t2108;
  double t2111;
  double t2117;
  double t2119;
  double t2120;
  double t2141;
  double t2146;
  double t2148;
  double t732;
  double t745;
  double t2178;
  double t2168;
  double t2175;
  double t2179;
  double t2180;
  double t1093;
  double t1115;
  double t1126;
  double t1175;
  double t1190;
  double t1220;
  double t2186;
  double t2188;
  double t2190;
  double t2194;
  double t2195;
  double t2196;
  double t1426;
  double t1478;
  double t1569;
  double t1859;
  double t1870;
  double t1871;
  double t1916;
  double t1923;
  double t1927;
  double t2208;
  double t2228;
  double t2229;
  double t2255;
  double t2256;
  double t2263;
  double t1970;
  double t1971;
  double t1972;
  double t1994;
  double t2009;
  double t2013;
  double t2265;
  double t2266;
  double t2267;
  double t2270;
  double t2271;
  double t2272;
  double t2034;
  double t2035;
  double t2037;
  double t2066;
  double t2069;
  double t2070;
  double t2274;
  double t2275;
  double t2276;
  double t2279;
  double t2280;
  double t2281;
  double t2077;
  double t2078;
  double t2079;
  double t2109;
  double t2113;
  double t2115;
  double t2283;
  double t2284;
  double t2285;
  double t2289;
  double t2290;
  double t2294;
  double t2130;
  double t2136;
  double t2140;
  double t2296;
  double t2298;
  double t2299;
  double t2302;
  double t2303;
  double t2306;
  double t2326;
  double t2327;
  double t2332;
  double t2337;
  double t2338;
  double t2340;
  double t2342;
  double t2344;
  double t2345;
  double t2356;
  double t2357;
  double t2358;
  double t2362;
  double t2366;
  double t2367;
  double t2388;
  double t2403;
  double t2404;
  double t2414;
  double t2415;
  double t2417;
  double t2420;
  double t2421;
  double t2422;
  double t2425;
  double t2426;
  double t2445;
  double t2458;
  double t2459;
  double t2460;
  double t2464;
  double t2465;
  double t2467;
  double t2472;
  double t2473;
  double t2479;
  double t2504;
  double t2506;
  double t2508;
  double t2309;
  double t2310;
  double t2311;
  double t2315;
  double t2318;
  double t2321;
  double t2152;
  double t2153;
  double t2154;
  double t2158;
  double t2160;
  double t2162;
  double t2512;
  double t2513;
  double t2514;
  double t2517;
  double t2519;
  double t2529;
  double t2200;
  double t2202;
  double t2204;
  double t2349;
  double t2350;
  double t2352;
  double t2573;
  double t2574;
  double t2576;
  double t2580;
  double t2581;
  double t2583;
  double t2591;
  double t1255;
  double t1260;
  double t1263;
  t648 = Cos(var1[4]);
  t663 = Cos(var1[6]);
  t763 = Sin(var1[5]);
  t878 = Sin(var1[4]);
  t879 = Sin(var1[6]);
  t993 = Cos(var1[7]);
  t1044 = -1.*t993;
  t1069 = 1. + t1044;
  t1112 = Sin(var1[7]);
  t930 = -1.*t648*t663*t763;
  t938 = t878*t879;
  t939 = t930 + t938;
  t1151 = Cos(var1[5]);
  t1419 = Cos(var1[8]);
  t1421 = -1.*t1419;
  t1423 = 1. + t1421;
  t1445 = Sin(var1[8]);
  t1307 = t648*t1151*t993;
  t1370 = t939*t1112;
  t1409 = t1307 + t1370;
  t1801 = t663*t878;
  t1808 = t648*t763*t879;
  t1824 = t1801 + t1808;
  t1878 = Cos(var1[9]);
  t1883 = -1.*t1878;
  t1912 = 1. + t1883;
  t1921 = Sin(var1[9]);
  t1928 = t1419*t1409;
  t1957 = t1824*t1445;
  t1961 = t1928 + t1957;
  t1977 = t1419*t1824;
  t1978 = -1.*t1409*t1445;
  t1983 = t1977 + t1978;
  t1991 = Cos(var1[10]);
  t1992 = -1.*t1991;
  t1993 = 1. + t1992;
  t2002 = Sin(var1[10]);
  t2017 = -1.*t1921*t1961;
  t2025 = t1878*t1983;
  t2029 = t2017 + t2025;
  t2041 = t1878*t1961;
  t2042 = t1921*t1983;
  t2043 = t2041 + t2042;
  t2045 = Cos(var1[11]);
  t2059 = -1.*t2045;
  t2062 = 1. + t2059;
  t2067 = Sin(var1[11]);
  t2071 = t2002*t2029;
  t2072 = t1991*t2043;
  t2073 = t2071 + t2072;
  t2095 = t1991*t2029;
  t2096 = -1.*t2002*t2043;
  t2100 = t2095 + t2096;
  t2103 = Cos(var1[13]);
  t2105 = -1.*t2103;
  t2108 = 1. + t2105;
  t2111 = Sin(var1[13]);
  t2117 = -1.*t2067*t2073;
  t2119 = t2045*t2100;
  t2120 = t2117 + t2119;
  t2141 = t2045*t2073;
  t2146 = t2067*t2100;
  t2148 = t2141 + t2146;
  t732 = -1.*t663;
  t745 = 1. + t732;
  t2178 = Sin(var1[3]);
  t2168 = Cos(var1[3]);
  t2175 = t2168*t1151;
  t2179 = -1.*t2178*t878*t763;
  t2180 = t2175 + t2179;
  t1093 = 0.135*t1069;
  t1115 = 0.049*t1112;
  t1126 = t1093 + t1115;
  t1175 = -0.049*t1069;
  t1190 = 0.135*t1112;
  t1220 = t1175 + t1190;
  t2186 = t663*t2180;
  t2188 = -1.*t648*t2178*t879;
  t2190 = t2186 + t2188;
  t2194 = t1151*t2178*t878;
  t2195 = t2168*t763;
  t2196 = t2194 + t2195;
  t1426 = -0.049*t1423;
  t1478 = -0.09*t1445;
  t1569 = t1426 + t1478;
  t1859 = -0.09*t1423;
  t1870 = 0.049*t1445;
  t1871 = t1859 + t1870;
  t1916 = -0.049*t1912;
  t1923 = -0.21*t1921;
  t1927 = t1916 + t1923;
  t2208 = t993*t2196;
  t2228 = t2190*t1112;
  t2229 = t2208 + t2228;
  t2255 = -1.*t648*t663*t2178;
  t2256 = -1.*t2180*t879;
  t2263 = t2255 + t2256;
  t1970 = -0.21*t1912;
  t1971 = 0.049*t1921;
  t1972 = t1970 + t1971;
  t1994 = -0.27068*t1993;
  t2009 = 0.00159*t2002;
  t2013 = t1994 + t2009;
  t2265 = t1419*t2229;
  t2266 = t2263*t1445;
  t2267 = t2265 + t2266;
  t2270 = t1419*t2263;
  t2271 = -1.*t2229*t1445;
  t2272 = t2270 + t2271;
  t2034 = -0.00159*t1993;
  t2035 = -0.27068*t2002;
  t2037 = t2034 + t2035;
  t2066 = 0.01841*t2062;
  t2069 = -0.70544*t2067;
  t2070 = t2066 + t2069;
  t2274 = -1.*t1921*t2267;
  t2275 = t1878*t2272;
  t2276 = t2274 + t2275;
  t2279 = t1878*t2267;
  t2280 = t1921*t2272;
  t2281 = t2279 + t2280;
  t2077 = -0.70544*t2062;
  t2078 = -0.01841*t2067;
  t2079 = t2077 + t2078;
  t2109 = -1.11344*t2108;
  t2113 = 0.02159*t2111;
  t2115 = t2109 + t2113;
  t2283 = t2002*t2276;
  t2284 = t1991*t2281;
  t2285 = t2283 + t2284;
  t2289 = t1991*t2276;
  t2290 = -1.*t2002*t2281;
  t2294 = t2289 + t2290;
  t2130 = -0.02159*t2108;
  t2136 = -1.11344*t2111;
  t2140 = t2130 + t2136;
  t2296 = -1.*t2067*t2285;
  t2298 = t2045*t2294;
  t2299 = t2296 + t2298;
  t2302 = t2045*t2285;
  t2303 = t2067*t2294;
  t2306 = t2302 + t2303;
  t2326 = t1151*t2178;
  t2327 = t2168*t878*t763;
  t2332 = t2326 + t2327;
  t2337 = t663*t2332;
  t2338 = t2168*t648*t879;
  t2340 = t2337 + t2338;
  t2342 = -1.*t2168*t1151*t878;
  t2344 = t2178*t763;
  t2345 = t2342 + t2344;
  t2356 = t993*t2345;
  t2357 = t2340*t1112;
  t2358 = t2356 + t2357;
  t2362 = t2168*t648*t663;
  t2366 = -1.*t2332*t879;
  t2367 = t2362 + t2366;
  t2388 = t1419*t2358;
  t2403 = t2367*t1445;
  t2404 = t2388 + t2403;
  t2414 = t1419*t2367;
  t2415 = -1.*t2358*t1445;
  t2417 = t2414 + t2415;
  t2420 = -1.*t1921*t2404;
  t2421 = t1878*t2417;
  t2422 = t2420 + t2421;
  t2425 = t1878*t2404;
  t2426 = t1921*t2417;
  t2445 = t2425 + t2426;
  t2458 = t2002*t2422;
  t2459 = t1991*t2445;
  t2460 = t2458 + t2459;
  t2464 = t1991*t2422;
  t2465 = -1.*t2002*t2445;
  t2467 = t2464 + t2465;
  t2472 = -1.*t2067*t2460;
  t2473 = t2045*t2467;
  t2479 = t2472 + t2473;
  t2504 = t2045*t2460;
  t2506 = t2067*t2467;
  t2508 = t2504 + t2506;
  t2309 = t2111*t2299;
  t2310 = t2103*t2306;
  t2311 = t2309 + t2310;
  t2315 = t2103*t2299;
  t2318 = -1.*t2111*t2306;
  t2321 = t2315 + t2318;
  t2152 = t2111*t2120;
  t2153 = t2103*t2148;
  t2154 = t2152 + t2153;
  t2158 = t2103*t2120;
  t2160 = -1.*t2111*t2148;
  t2162 = t2158 + t2160;
  t2512 = t2111*t2479;
  t2513 = t2103*t2508;
  t2514 = t2512 + t2513;
  t2517 = t2103*t2479;
  t2519 = -1.*t2111*t2508;
  t2529 = t2517 + t2519;
  t2200 = t993*t2190;
  t2202 = -1.*t2196*t1112;
  t2204 = t2200 + t2202;
  t2349 = t993*t2340;
  t2350 = -1.*t2345*t1112;
  t2352 = t2349 + t2350;
  t2573 = -0.766044*t2514;
  t2574 = 0.642788*t2529;
  t2576 = t2573 + t2574;
  t2580 = Power(t2352,2);
  t2581 = Power(t2576,2);
  t2583 = t2580 + t2581;
  t2591 = 1/Sqrt(t2583);
  t1255 = t993*t939;
  t1260 = -1.*t648*t1151*t1112;
  t1263 = t1255 + t1260;
  p_output1[0]=0.1305*t1263 + t1409*t1569 + t1824*t1871 + t1927*t1961 + t1972*t1983 + t2013*t2029 + t2037*t2043 + t2070*t2073 + t2079*t2100 + t2115*t2120 + t2140*t2148 + 0.0306*t2154 - 1.13106*t2162 + t1151*t1220*t648 - 0.135*t648*t745*t763 - 0.135*t878*t879 + t1126*t939 + var1[0];
  p_output1[1]=t1126*t2190 + t1220*t2196 + 0.1305*t2204 + t1569*t2229 + t1871*t2263 + t1927*t2267 + t1972*t2272 + t2013*t2276 + t2037*t2281 + t2070*t2285 + t2079*t2294 + t2115*t2299 + t2140*t2306 + 0.0306*t2311 - 1.13106*t2321 + 0.135*t2180*t745 + 0.135*t2178*t648*t879 + var1[1];
  p_output1[2]=t1126*t2340 + t1220*t2345 + 0.1305*t2352 + t1569*t2358 + t1871*t2367 + t1927*t2404 + t1972*t2417 + t2013*t2422 + t2037*t2445 + t2070*t2460 + t2079*t2467 + t2115*t2479 + t2140*t2508 + 0.0306*t2514 - 1.13106*t2529 + 0.135*t2332*t745 - 0.135*t2168*t648*t879 + var1[2];
  p_output1[3]=ArcTan(Sqrt(Power(0.642788*t2154 + 0.766044*t2162,2) + Power(0.642788*t2311 + 0.766044*t2321,2)),-0.642788*t2514 - 0.766044*t2529);
  p_output1[4]=ArcTan(-1.*(-0.766044*t2311 + 0.642788*t2321)*t2352*t2591 + t2204*t2576*t2591,(-0.766044*t2154 + 0.642788*t2162)*t2352*t2591 - 1.*t1263*t2576*t2591);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 5, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void p_leftSole_constraint_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




