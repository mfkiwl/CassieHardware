/*
 * Automatically Generated from Mathematica.
 * Thu 26 Aug 2021 14:19:32 GMT-07:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "yaLeftStance.hh"
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
  double t78;
  double t90;
  double t112;
  double t125;
  double t155;
  double t182;
  double t253;
  double t266;
  double t271;
  double t282;
  double t307;
  double t314;
  double t331;
  double t333;
  double t342;
  double t424;
  double t448;
  double t451;
  double t459;
  double t468;
  double t482;
  double t509;
  double t535;
  double t540;
  double t541;
  double t559;
  double t560;
  double t599;
  double t213;
  double t217;
  double t229;
  double t135;
  double t169;
  double t178;
  double t363;
  double t383;
  double t395;
  double t311;
  double t320;
  double t328;
  double t547;
  double t551;
  double t555;
  double t735;
  double t736;
  double t743;
  double t507;
  double t528;
  double t534;
  double t756;
  double t757;
  double t760;
  double t764;
  double t765;
  double t807;
  double t833;
  double t855;
  double t859;
  double t862;
  double t868;
  double t905;
  double t907;
  double t912;
  double t913;
  double t916;
  double t921;
  double t931;
  double t937;
  double t940;
  double t952;
  double t954;
  double t960;
  double t987;
  double t991;
  double t994;
  double t998;
  double t1008;
  double t1014;
  double t1024;
  double t966;
  double t972;
  double t979;
  double t867;
  double t876;
  double t880;
  double t895;
  double t897;
  double t900;
  double t948;
  double t950;
  double t951;
  double t918;
  double t925;
  double t927;
  double t1133;
  double t1137;
  double t1148;
  double t997;
  double t1001;
  double t1002;
  double t1028;
  double t1034;
  double t1035;
  double t1170;
  double t1171;
  double t1174;
  double t1184;
  double t1186;
  double t1192;
  double t1196;
  double t1197;
  double t1207;
  double t1212;
  double t1214;
  double t1053;
  double t1054;
  double t1061;
  double t1067;
  double t1068;
  double t1073;
  double t1460;
  double t1468;
  double t1441;
  double t1499;
  double t1501;
  double t1503;
  double t1458;
  double t1470;
  double t1493;
  double t1495;
  double t1515;
  double t1516;
  double t1560;
  double t1565;
  double t1575;
  double t1607;
  double t1616;
  double t1659;
  double t1539;
  double t1577;
  double t1589;
  double t1725;
  double t1729;
  double t1730;
  double t1738;
  double t1754;
  double t1763;
  double t1726;
  double t1770;
  double t1792;
  double t1848;
  double t1854;
  double t1860;
  double t1831;
  double t1881;
  double t1890;
  double t1902;
  double t1911;
  double t1976;
  double t1900;
  double t1995;
  double t2068;
  double t2085;
  double t2092;
  double t2106;
  double t2203;
  double t2212;
  double t2215;
  double t2199;
  double t2217;
  double t2222;
  double t2235;
  double t2249;
  double t2250;
  double t2233;
  double t2251;
  double t2260;
  double t2262;
  double t2268;
  double t2282;
  double t2261;
  double t2291;
  double t2292;
  double t2304;
  double t2312;
  double t2320;
  t78 = Cos(var1[8]);
  t90 = Cos(var1[9]);
  t112 = -1.*t90;
  t125 = 1. + t112;
  t155 = Sin(var1[9]);
  t182 = Sin(var1[8]);
  t253 = -1.*var1[9];
  t266 = 0.226893 + t253;
  t271 = Cos(t266);
  t282 = -1.*t271;
  t307 = 1. + t282;
  t314 = Sin(t266);
  t331 = -1.*t78*t155;
  t333 = -1.*t90*t182;
  t342 = t331 + t333;
  t424 = t90*t78;
  t448 = -1.*t155*t182;
  t451 = t424 + t448;
  t459 = Cos(var1[13]);
  t468 = -1.*t459;
  t482 = 1. + t468;
  t509 = Sin(var1[13]);
  t535 = t314*t342;
  t540 = t271*t451;
  t541 = t535 + t540;
  t559 = t271*t342;
  t560 = -1.*t314*t451;
  t599 = t559 + t560;
  t213 = -0.21*t125;
  t217 = 0.049*t155;
  t229 = t213 + t217;
  t135 = -0.049*t125;
  t169 = -0.21*t155;
  t178 = t135 + t169;
  t363 = 0.01841*t307;
  t383 = -0.70544*t314;
  t395 = t363 + t383;
  t311 = -0.70544*t307;
  t320 = -0.01841*t314;
  t328 = t311 + t320;
  t547 = -1.11344*t482;
  t551 = 0.02159*t509;
  t555 = t547 + t551;
  t735 = t78*t155;
  t736 = t90*t182;
  t743 = t735 + t736;
  t507 = -0.02159*t482;
  t528 = -1.11344*t509;
  t534 = t507 + t528;
  t756 = -1.*t314*t743;
  t757 = t756 + t540;
  t760 = t271*t743;
  t764 = t314*t451;
  t765 = t760 + t764;
  t807 = Cos(var1[16]);
  t833 = Sin(var1[16]);
  t855 = Cos(var1[17]);
  t859 = -1.*t855;
  t862 = 1. + t859;
  t868 = Sin(var1[17]);
  t905 = -1.*var1[17];
  t907 = 0.226893 + t905;
  t912 = Cos(t907);
  t913 = -1.*t912;
  t916 = 1. + t913;
  t921 = Sin(t907);
  t931 = -1.*t855*t833;
  t937 = -1.*t807*t868;
  t940 = t931 + t937;
  t952 = t807*t855;
  t954 = -1.*t833*t868;
  t960 = t952 + t954;
  t987 = Cos(var1[21]);
  t991 = -1.*t987;
  t994 = 1. + t991;
  t998 = Sin(var1[21]);
  t1008 = t912*t940;
  t1014 = -1.*t921*t960;
  t1024 = t1008 + t1014;
  t966 = t921*t940;
  t972 = t912*t960;
  t979 = t966 + t972;
  t867 = -0.049*t862;
  t876 = -0.21*t868;
  t880 = t867 + t876;
  t895 = -0.21*t862;
  t897 = 0.049*t868;
  t900 = t895 + t897;
  t948 = 0.01841*t916;
  t950 = -0.70544*t921;
  t951 = t948 + t950;
  t918 = -0.70544*t916;
  t925 = -0.01841*t921;
  t927 = t918 + t925;
  t1133 = t855*t833;
  t1137 = t807*t868;
  t1148 = t1133 + t1137;
  t997 = -0.02159*t994;
  t1001 = -1.11344*t998;
  t1002 = t997 + t1001;
  t1028 = -1.11344*t994;
  t1034 = 0.02159*t998;
  t1035 = t1028 + t1034;
  t1170 = t912*t1148;
  t1171 = t921*t960;
  t1174 = t1170 + t1171;
  t1184 = -1.*t921*t1148;
  t1186 = t1184 + t972;
  t1192 = t987*t1174;
  t1196 = t1186*t998;
  t1197 = t1192 + t1196;
  t1207 = t987*t1186;
  t1212 = -1.*t1174*t998;
  t1214 = t1207 + t1212;
  t1053 = t987*t1024;
  t1054 = -1.*t979*t998;
  t1061 = t1053 + t1054;
  t1067 = t987*t979;
  t1068 = t1024*t998;
  t1073 = t1067 + t1068;
  t1460 = Cos(var1[14]);
  t1468 = Sin(var1[15]);
  t1441 = Sin(var1[14]);
  t1499 = t1460*t807*t1468;
  t1501 = -1.*t1441*t833;
  t1503 = t1499 + t1501;
  t1458 = -1.*t807*t1441;
  t1470 = -1.*t1460*t1468*t833;
  t1493 = t1458 + t1470;
  t1495 = t855*t1493;
  t1515 = -1.*t1503*t868;
  t1516 = t1495 + t1515;
  t1560 = t855*t1503;
  t1565 = t1493*t868;
  t1575 = t1560 + t1565;
  t1607 = t921*t1516;
  t1616 = t912*t1575;
  t1659 = t1607 + t1616;
  t1539 = t912*t1516;
  t1577 = -1.*t921*t1575;
  t1589 = t1539 + t1577;
  t1725 = Sin(var1[4]);
  t1729 = Cos(var1[15]);
  t1730 = Cos(var1[4]);
  t1738 = t1729*t1730;
  t1754 = t1441*t1468*t1725;
  t1763 = t1738 + t1754;
  t1726 = t1460*t833*t1725;
  t1770 = t807*t1763;
  t1792 = t1726 + t1770;
  t1848 = t1460*t807*t1725;
  t1854 = -1.*t833*t1763;
  t1860 = t1848 + t1854;
  t1831 = -1.*t868*t1792;
  t1881 = t855*t1860;
  t1890 = t1831 + t1881;
  t1902 = t855*t1792;
  t1911 = t868*t1860;
  t1976 = t1902 + t1911;
  t1900 = t921*t1890;
  t1995 = t912*t1976;
  t2068 = t1900 + t1995;
  t2085 = t912*t1890;
  t2092 = -1.*t921*t1976;
  t2106 = t2085 + t2092;
  t2203 = t1730*t1441*t1468;
  t2212 = -1.*t1729*t1725;
  t2215 = t2203 + t2212;
  t2199 = t1460*t1730*t833;
  t2217 = t807*t2215;
  t2222 = t2199 + t2217;
  t2235 = t1460*t807*t1730;
  t2249 = -1.*t833*t2215;
  t2250 = t2235 + t2249;
  t2233 = -1.*t868*t2222;
  t2251 = t855*t2250;
  t2260 = t2233 + t2251;
  t2262 = t855*t2222;
  t2268 = t868*t2250;
  t2282 = t2262 + t2268;
  t2261 = t921*t2260;
  t2291 = t912*t2282;
  t2292 = t2261 + t2291;
  t2304 = t912*t2260;
  t2312 = -1.*t921*t2282;
  t2320 = t2304 + t2312;
  p_output1[0]=var1[3];
  p_output1[1]=var1[4];
  p_output1[2]=var1[7];
  p_output1[3]=Sqrt(0.00002025 + Power(-0.09*t182 - 1.*t182*t229 + t328*t342 + t395*t451 + t534*t541 + t555*t599 - 1.11344*(-1.*t509*t541 + t459*t599) - 0.02159*(t459*t541 + t509*t599) + 0.049*t78 + t178*t78,2) + Power(0.049*t182 + t178*t182 + t328*t451 + t395*t743 + t555*t757 + t534*t765 - 0.02159*(t509*t757 + t459*t765) - 1.11344*(t459*t757 - 1.*t509*t765) + 0.09*t78 + t229*t78,2));
  p_output1[4]=Sqrt(0.00002025 + Power(t1002*t1174 + t1035*t1186 - 0.02159*t1197 - 1.11344*t1214 + 0.09*t807 + 0.049*t833 + t833*t880 + t807*t900 + t1148*t951 + t927*t960,2) + Power(t1024*t1035 - 1.11344*t1061 - 0.02159*t1073 + 0.049*t807 - 0.09*t833 + t807*t880 - 1.*t833*t900 + t927*t940 + t951*t960 + t1002*t979,2));
  p_output1[5]=ArcTan(-1.*t1002*t1174 - 1.*t1035*t1186 + 0.02159*t1197 + 1.11344*t1214 - 0.09*t807 - 0.049*t833 - 1.*t833*t880 - 1.*t807*t900 - 1.*t1148*t951 - 1.*t927*t960,-1.*t1024*t1035 + 1.11344*t1061 + 0.02159*t1073 - 0.049*t807 + 0.09*t833 - 1.*t807*t880 + t833*t900 - 1.*t927*t940 - 1.*t951*t960 - 1.*t1002*t979);
  p_output1[6]=var1[14];
  p_output1[7]=var1[15];
  p_output1[8]=ArcTan(Sqrt(Power(0.642788*(t1659*t987 + t1589*t998) + 0.766044*(t1589*t987 - 1.*t1659*t998),2) + Power(0.766044*(t2106*t987 - 1.*t2068*t998) + 0.642788*(t2068*t987 + t2106*t998),2)),-0.766044*(t2320*t987 - 1.*t2292*t998) - 0.642788*(t2292*t987 + t2320*t998));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void yaLeftStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




