/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:34 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "p_rightSole_constraint.hh"
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
  double t63;
  double t67;
  double t68;
  double t80;
  double t112;
  double t195;
  double t211;
  double t284;
  double t297;
  double t66;
  double t367;
  double t389;
  double t401;
  double t424;
  double t425;
  double t476;
  double t487;
  double t524;
  double t541;
  double t543;
  double t779;
  double t842;
  double t847;
  double t906;
  double t914;
  double t920;
  double t1005;
  double t1038;
  double t1048;
  double t1073;
  double t1138;
  double t1145;
  double t1146;
  double t1164;
  double t1175;
  double t1178;
  double t1226;
  double t1235;
  double t1240;
  double t1263;
  double t1294;
  double t1343;
  double t1345;
  double t1402;
  double t1406;
  double t1419;
  double t1460;
  double t1491;
  double t1497;
  double t1512;
  double t1551;
  double t1564;
  double t1575;
  double t1600;
  double t1602;
  double t1615;
  double t1636;
  double t1666;
  double t1701;
  double t1705;
  double t1765;
  double t1771;
  double t1774;
  double t102;
  double t126;
  double t163;
  double t1851;
  double t286;
  double t287;
  double t1864;
  double t345;
  double t358;
  double t363;
  double t1883;
  double t1893;
  double t1901;
  double t477;
  double t503;
  double t510;
  double t1862;
  double t1867;
  double t1868;
  double t1912;
  double t1914;
  double t1919;
  double t738;
  double t740;
  double t750;
  double t986;
  double t1011;
  double t1016;
  double t1944;
  double t1952;
  double t1957;
  double t2055;
  double t2057;
  double t2068;
  double t1105;
  double t1109;
  double t1132;
  double t1189;
  double t1231;
  double t1233;
  double t2074;
  double t2085;
  double t2086;
  double t2089;
  double t2092;
  double t2096;
  double t1265;
  double t1287;
  double t1293;
  double t1429;
  double t1471;
  double t1472;
  double t2111;
  double t2115;
  double t2148;
  double t2156;
  double t2165;
  double t2176;
  double t1534;
  double t1536;
  double t1537;
  double t1624;
  double t1640;
  double t1643;
  double t2182;
  double t2183;
  double t2185;
  double t2190;
  double t2195;
  double t2196;
  double t1726;
  double t1727;
  double t1753;
  double t2203;
  double t2209;
  double t2219;
  double t2246;
  double t2250;
  double t2256;
  double t2339;
  double t2343;
  double t2347;
  double t2310;
  double t2314;
  double t2322;
  double t2365;
  double t2366;
  double t2372;
  double t2374;
  double t2380;
  double t2385;
  double t2407;
  double t2408;
  double t2420;
  double t2438;
  double t2445;
  double t2448;
  double t2492;
  double t2495;
  double t2498;
  double t2501;
  double t2502;
  double t2503;
  double t2508;
  double t2510;
  double t2516;
  double t2528;
  double t2531;
  double t2534;
  double t2546;
  double t2548;
  double t2549;
  double t2557;
  double t2562;
  double t2563;
  double t2565;
  double t2574;
  double t2578;
  double t1790;
  double t1791;
  double t1793;
  double t1817;
  double t1828;
  double t1833;
  double t2263;
  double t2270;
  double t2273;
  double t2283;
  double t2288;
  double t2296;
  double t2586;
  double t2590;
  double t2592;
  double t2596;
  double t2597;
  double t2608;
  double t1968;
  double t1977;
  double t2003;
  double t2396;
  double t2404;
  double t2405;
  double t2740;
  double t2744;
  double t2750;
  double t2752;
  double t2755;
  double t2782;
  double t2800;
  double t592;
  double t699;
  double t735;
  t63 = Cos(var1[4]);
  t67 = Cos(var1[15]);
  t68 = -1.*t67;
  t80 = 1. + t68;
  t112 = Sin(var1[15]);
  t195 = Sin(var1[14]);
  t211 = Sin(var1[4]);
  t284 = Cos(var1[14]);
  t297 = Sin(var1[5]);
  t66 = Cos(var1[5]);
  t367 = t195*t211;
  t389 = -1.*t284*t63*t297;
  t401 = t367 + t389;
  t424 = Cos(var1[16]);
  t425 = -1.*t424;
  t476 = 1. + t425;
  t487 = Sin(var1[16]);
  t524 = t284*t211;
  t541 = t63*t195*t297;
  t543 = t524 + t541;
  t779 = t67*t63*t66;
  t842 = t112*t401;
  t847 = t779 + t842;
  t906 = Cos(var1[17]);
  t914 = -1.*t906;
  t920 = 1. + t914;
  t1005 = Sin(var1[17]);
  t1038 = t487*t543;
  t1048 = t424*t847;
  t1073 = t1038 + t1048;
  t1138 = t424*t543;
  t1145 = -1.*t487*t847;
  t1146 = t1138 + t1145;
  t1164 = Cos(var1[18]);
  t1175 = -1.*t1164;
  t1178 = 1. + t1175;
  t1226 = Sin(var1[18]);
  t1235 = -1.*t1005*t1073;
  t1240 = t906*t1146;
  t1263 = t1235 + t1240;
  t1294 = t906*t1073;
  t1343 = t1005*t1146;
  t1345 = t1294 + t1343;
  t1402 = Cos(var1[19]);
  t1406 = -1.*t1402;
  t1419 = 1. + t1406;
  t1460 = Sin(var1[19]);
  t1491 = t1226*t1263;
  t1497 = t1164*t1345;
  t1512 = t1491 + t1497;
  t1551 = t1164*t1263;
  t1564 = -1.*t1226*t1345;
  t1575 = t1551 + t1564;
  t1600 = Cos(var1[21]);
  t1602 = -1.*t1600;
  t1615 = 1. + t1602;
  t1636 = Sin(var1[21]);
  t1666 = -1.*t1460*t1512;
  t1701 = t1402*t1575;
  t1705 = t1666 + t1701;
  t1765 = t1402*t1512;
  t1771 = t1460*t1575;
  t1774 = t1765 + t1771;
  t102 = -0.049*t80;
  t126 = -0.135*t112;
  t163 = t102 + t126;
  t1851 = Sin(var1[3]);
  t286 = -1.*t284;
  t287 = 1. + t286;
  t1864 = Cos(var1[3]);
  t345 = -0.135*t80;
  t358 = 0.049*t112;
  t363 = t345 + t358;
  t1883 = t1864*t66;
  t1893 = -1.*t1851*t211*t297;
  t1901 = t1883 + t1893;
  t477 = -0.09*t476;
  t503 = 0.049*t487;
  t510 = t477 + t503;
  t1862 = t66*t1851*t211;
  t1867 = t1864*t297;
  t1868 = t1862 + t1867;
  t1912 = -1.*t63*t195*t1851;
  t1914 = t284*t1901;
  t1919 = t1912 + t1914;
  t738 = -0.049*t476;
  t740 = -0.09*t487;
  t750 = t738 + t740;
  t986 = -0.049*t920;
  t1011 = -0.21*t1005;
  t1016 = t986 + t1011;
  t1944 = -1.*t284*t63*t1851;
  t1952 = -1.*t195*t1901;
  t1957 = t1944 + t1952;
  t2055 = t67*t1868;
  t2057 = t112*t1919;
  t2068 = t2055 + t2057;
  t1105 = -0.21*t920;
  t1109 = 0.049*t1005;
  t1132 = t1105 + t1109;
  t1189 = -0.27068*t1178;
  t1231 = 0.00159*t1226;
  t1233 = t1189 + t1231;
  t2074 = t487*t1957;
  t2085 = t424*t2068;
  t2086 = t2074 + t2085;
  t2089 = t424*t1957;
  t2092 = -1.*t487*t2068;
  t2096 = t2089 + t2092;
  t1265 = -0.00159*t1178;
  t1287 = -0.27068*t1226;
  t1293 = t1265 + t1287;
  t1429 = 0.01841*t1419;
  t1471 = -0.70544*t1460;
  t1472 = t1429 + t1471;
  t2111 = -1.*t1005*t2086;
  t2115 = t906*t2096;
  t2148 = t2111 + t2115;
  t2156 = t906*t2086;
  t2165 = t1005*t2096;
  t2176 = t2156 + t2165;
  t1534 = -0.70544*t1419;
  t1536 = -0.01841*t1460;
  t1537 = t1534 + t1536;
  t1624 = -1.11344*t1615;
  t1640 = 0.02159*t1636;
  t1643 = t1624 + t1640;
  t2182 = t1226*t2148;
  t2183 = t1164*t2176;
  t2185 = t2182 + t2183;
  t2190 = t1164*t2148;
  t2195 = -1.*t1226*t2176;
  t2196 = t2190 + t2195;
  t1726 = -0.02159*t1615;
  t1727 = -1.11344*t1636;
  t1753 = t1726 + t1727;
  t2203 = -1.*t1460*t2185;
  t2209 = t1402*t2196;
  t2219 = t2203 + t2209;
  t2246 = t1402*t2185;
  t2250 = t1460*t2196;
  t2256 = t2246 + t2250;
  t2339 = t66*t1851;
  t2343 = t1864*t211*t297;
  t2347 = t2339 + t2343;
  t2310 = -1.*t1864*t66*t211;
  t2314 = t1851*t297;
  t2322 = t2310 + t2314;
  t2365 = t1864*t63*t195;
  t2366 = t284*t2347;
  t2372 = t2365 + t2366;
  t2374 = t284*t1864*t63;
  t2380 = -1.*t195*t2347;
  t2385 = t2374 + t2380;
  t2407 = t67*t2322;
  t2408 = t112*t2372;
  t2420 = t2407 + t2408;
  t2438 = t487*t2385;
  t2445 = t424*t2420;
  t2448 = t2438 + t2445;
  t2492 = t424*t2385;
  t2495 = -1.*t487*t2420;
  t2498 = t2492 + t2495;
  t2501 = -1.*t1005*t2448;
  t2502 = t906*t2498;
  t2503 = t2501 + t2502;
  t2508 = t906*t2448;
  t2510 = t1005*t2498;
  t2516 = t2508 + t2510;
  t2528 = t1226*t2503;
  t2531 = t1164*t2516;
  t2534 = t2528 + t2531;
  t2546 = t1164*t2503;
  t2548 = -1.*t1226*t2516;
  t2549 = t2546 + t2548;
  t2557 = -1.*t1460*t2534;
  t2562 = t1402*t2549;
  t2563 = t2557 + t2562;
  t2565 = t1402*t2534;
  t2574 = t1460*t2549;
  t2578 = t2565 + t2574;
  t1790 = t1636*t1705;
  t1791 = t1600*t1774;
  t1793 = t1790 + t1791;
  t1817 = t1600*t1705;
  t1828 = -1.*t1636*t1774;
  t1833 = t1817 + t1828;
  t2263 = t1636*t2219;
  t2270 = t1600*t2256;
  t2273 = t2263 + t2270;
  t2283 = t1600*t2219;
  t2288 = -1.*t1636*t2256;
  t2296 = t2283 + t2288;
  t2586 = t1636*t2563;
  t2590 = t1600*t2578;
  t2592 = t2586 + t2590;
  t2596 = t1600*t2563;
  t2597 = -1.*t1636*t2578;
  t2608 = t2596 + t2597;
  t1968 = -1.*t112*t1868;
  t1977 = t67*t1919;
  t2003 = t1968 + t1977;
  t2396 = -1.*t112*t2322;
  t2404 = t67*t2372;
  t2405 = t2396 + t2404;
  t2740 = -0.766044*t2592;
  t2744 = 0.642788*t2608;
  t2750 = t2740 + t2744;
  t2752 = Power(t2405,2);
  t2755 = Power(t2750,2);
  t2782 = t2752 + t2755;
  t2800 = 1/Sqrt(t2782);
  t592 = -1.*t63*t66*t112;
  t699 = t67*t401;
  t735 = t592 + t699;
  p_output1[0]=t1016*t1073 + t1132*t1146 + t1233*t1263 + t1293*t1345 + t1472*t1512 + t1537*t1575 + t1643*t1705 + t1753*t1774 + 0.0306*t1793 - 1.13106*t1833 + 0.135*t195*t211 + t363*t401 + t510*t543 + 0.135*t287*t297*t63 + t163*t63*t66 - 0.1305*t735 + t750*t847 + var1[0];
  p_output1[1]=t163*t1868 - 0.1305*t2003 + t1016*t2086 + t1132*t2096 + t1233*t2148 + t1293*t2176 + t1472*t2185 + t1537*t2196 + t1643*t2219 + t1753*t2256 + 0.0306*t2273 - 1.13106*t2296 - 0.135*t1901*t287 + t1919*t363 + t1957*t510 - 0.135*t1851*t195*t63 + t2068*t750 + var1[1];
  p_output1[2]=t163*t2322 - 0.1305*t2405 + t1016*t2448 + t1132*t2498 + t1233*t2503 + t1293*t2516 + t1472*t2534 + t1537*t2549 + t1643*t2563 + t1753*t2578 + 0.0306*t2592 - 1.13106*t2608 - 0.135*t2347*t287 + t2372*t363 + t2385*t510 + 0.135*t1864*t195*t63 + t2420*t750 + var1[2];
  p_output1[3]=ArcTan(Sqrt(Power(0.642788*t1793 + 0.766044*t1833,2) + Power(0.642788*t2273 + 0.766044*t2296,2)),-0.642788*t2592 - 0.766044*t2608);
  p_output1[4]=ArcTan(-1.*(-0.766044*t2273 + 0.642788*t2296)*t2405*t2800 + t2003*t2750*t2800,(-0.766044*t1793 + 0.642788*t1833)*t2405*t2800 - 1.*t2750*t2800*t735);
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

void p_rightSole_constraint_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




