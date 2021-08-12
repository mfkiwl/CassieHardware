/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:52 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "yaRightStance.hh"
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
  double t38;
  double t109;
  double t256;
  double t342;
  double t370;
  double t552;
  double t733;
  double t736;
  double t763;
  double t779;
  double t781;
  double t795;
  double t802;
  double t804;
  double t805;
  double t846;
  double t848;
  double t853;
  double t898;
  double t901;
  double t921;
  double t930;
  double t945;
  double t947;
  double t948;
  double t862;
  double t893;
  double t894;
  double t544;
  double t564;
  double t575;
  double t669;
  double t673;
  double t683;
  double t822;
  double t824;
  double t828;
  double t786;
  double t796;
  double t798;
  double t1217;
  double t1221;
  double t1234;
  double t926;
  double t934;
  double t939;
  double t958;
  double t959;
  double t970;
  double t1257;
  double t1259;
  double t1261;
  double t1267;
  double t1269;
  double t1343;
  double t1366;
  double t1371;
  double t1375;
  double t1387;
  double t1420;
  double t1448;
  double t1455;
  double t1469;
  double t1473;
  double t1475;
  double t1492;
  double t1510;
  double t1511;
  double t1512;
  double t1540;
  double t1551;
  double t1553;
  double t1563;
  double t1583;
  double t1584;
  double t1607;
  double t1617;
  double t1619;
  double t1621;
  double t1645;
  double t1646;
  double t1647;
  double t1431;
  double t1433;
  double t1434;
  double t1381;
  double t1398;
  double t1405;
  double t1516;
  double t1533;
  double t1537;
  double t1478;
  double t1493;
  double t1498;
  double t1624;
  double t1625;
  double t1636;
  double t1714;
  double t1715;
  double t1721;
  double t1585;
  double t1611;
  double t1612;
  double t1730;
  double t1731;
  double t1739;
  double t1749;
  double t1766;
  double t1777;
  double t1786;
  double t1788;
  double t1790;
  double t1795;
  double t1799;
  double t1666;
  double t1671;
  double t1675;
  double t1683;
  double t1688;
  double t1690;
  double t1882;
  double t1869;
  double t1873;
  double t1874;
  double t1888;
  double t1890;
  double t1894;
  double t1895;
  double t1896;
  double t1892;
  double t1902;
  double t1904;
  double t1919;
  double t1920;
  double t1921;
  double t1917;
  double t1935;
  double t1941;
  double t1949;
  double t1953;
  double t1960;
  double t1994;
  double t1986;
  double t1991;
  double t1993;
  double t1996;
  double t1997;
  double t1999;
  double t2000;
  double t2004;
  double t2008;
  double t2010;
  double t2012;
  double t2007;
  double t2015;
  double t2017;
  double t2023;
  double t2030;
  double t2035;
  double t2022;
  double t2037;
  double t2040;
  double t2044;
  double t2045;
  double t2048;
  double t2085;
  double t2087;
  double t2093;
  double t2095;
  double t2097;
  double t2100;
  double t2109;
  double t2111;
  double t2116;
  double t2105;
  double t2123;
  double t2124;
  double t2127;
  double t2128;
  double t2133;
  double t2126;
  double t2134;
  double t2139;
  double t2147;
  double t2148;
  double t2150;
  t38 = Cos(var1[16]);
  t109 = Sin(var1[16]);
  t256 = Cos(var1[17]);
  t342 = -1.*t256;
  t370 = 1. + t342;
  t552 = Sin(var1[17]);
  t733 = -1.*var1[17];
  t736 = 0.226893 + t733;
  t763 = Cos(t736);
  t779 = -1.*t763;
  t781 = 1. + t779;
  t795 = Sin(t736);
  t802 = -1.*t256*t109;
  t804 = -1.*t38*t552;
  t805 = t802 + t804;
  t846 = t38*t256;
  t848 = -1.*t109*t552;
  t853 = t846 + t848;
  t898 = Cos(var1[21]);
  t901 = -1.*t898;
  t921 = 1. + t901;
  t930 = Sin(var1[21]);
  t945 = t763*t805;
  t947 = -1.*t795*t853;
  t948 = t945 + t947;
  t862 = t795*t805;
  t893 = t763*t853;
  t894 = t862 + t893;
  t544 = -0.049*t370;
  t564 = -0.21*t552;
  t575 = t544 + t564;
  t669 = -0.21*t370;
  t673 = 0.049*t552;
  t683 = t669 + t673;
  t822 = 0.01841*t781;
  t824 = -0.70544*t795;
  t828 = t822 + t824;
  t786 = -0.70544*t781;
  t796 = -0.01841*t795;
  t798 = t786 + t796;
  t1217 = t256*t109;
  t1221 = t38*t552;
  t1234 = t1217 + t1221;
  t926 = -0.02159*t921;
  t934 = -1.11344*t930;
  t939 = t926 + t934;
  t958 = -1.11344*t921;
  t959 = 0.02159*t930;
  t970 = t958 + t959;
  t1257 = t763*t1234;
  t1259 = t795*t853;
  t1261 = t1257 + t1259;
  t1267 = -1.*t795*t1234;
  t1269 = t1267 + t893;
  t1343 = Cos(var1[8]);
  t1366 = Cos(var1[9]);
  t1371 = -1.*t1366;
  t1375 = 1. + t1371;
  t1387 = Sin(var1[9]);
  t1420 = Sin(var1[8]);
  t1448 = -1.*var1[9];
  t1455 = 0.226893 + t1448;
  t1469 = Cos(t1455);
  t1473 = -1.*t1469;
  t1475 = 1. + t1473;
  t1492 = Sin(t1455);
  t1510 = -1.*t1343*t1387;
  t1511 = -1.*t1366*t1420;
  t1512 = t1510 + t1511;
  t1540 = t1366*t1343;
  t1551 = -1.*t1387*t1420;
  t1553 = t1540 + t1551;
  t1563 = Cos(var1[13]);
  t1583 = -1.*t1563;
  t1584 = 1. + t1583;
  t1607 = Sin(var1[13]);
  t1617 = t1492*t1512;
  t1619 = t1469*t1553;
  t1621 = t1617 + t1619;
  t1645 = t1469*t1512;
  t1646 = -1.*t1492*t1553;
  t1647 = t1645 + t1646;
  t1431 = -0.21*t1375;
  t1433 = 0.049*t1387;
  t1434 = t1431 + t1433;
  t1381 = -0.049*t1375;
  t1398 = -0.21*t1387;
  t1405 = t1381 + t1398;
  t1516 = 0.01841*t1475;
  t1533 = -0.70544*t1492;
  t1537 = t1516 + t1533;
  t1478 = -0.70544*t1475;
  t1493 = -0.01841*t1492;
  t1498 = t1478 + t1493;
  t1624 = -1.11344*t1584;
  t1625 = 0.02159*t1607;
  t1636 = t1624 + t1625;
  t1714 = t1343*t1387;
  t1715 = t1366*t1420;
  t1721 = t1714 + t1715;
  t1585 = -0.02159*t1584;
  t1611 = -1.11344*t1607;
  t1612 = t1585 + t1611;
  t1730 = -1.*t1492*t1721;
  t1731 = t1730 + t1619;
  t1739 = t1469*t1721;
  t1749 = t1492*t1553;
  t1766 = t1739 + t1749;
  t1777 = t1607*t1731;
  t1786 = t1563*t1766;
  t1788 = t1777 + t1786;
  t1790 = t1563*t1731;
  t1795 = -1.*t1607*t1766;
  t1799 = t1790 + t1795;
  t1666 = -1.*t1607*t1621;
  t1671 = t1563*t1647;
  t1675 = t1666 + t1671;
  t1683 = t1563*t1621;
  t1688 = t1607*t1647;
  t1690 = t1683 + t1688;
  t1882 = Sin(var1[6]);
  t1869 = Cos(var1[6]);
  t1873 = Sin(var1[7]);
  t1874 = t1869*t1343*t1873;
  t1888 = -1.*t1882*t1420;
  t1890 = t1874 + t1888;
  t1894 = -1.*t1343*t1882;
  t1895 = -1.*t1869*t1873*t1420;
  t1896 = t1894 + t1895;
  t1892 = -1.*t1387*t1890;
  t1902 = t1366*t1896;
  t1904 = t1892 + t1902;
  t1919 = t1366*t1890;
  t1920 = t1387*t1896;
  t1921 = t1919 + t1920;
  t1917 = t1492*t1904;
  t1935 = t1469*t1921;
  t1941 = t1917 + t1935;
  t1949 = t1469*t1904;
  t1953 = -1.*t1492*t1921;
  t1960 = t1949 + t1953;
  t1994 = Sin(var1[4]);
  t1986 = Cos(var1[4]);
  t1991 = Cos(var1[7]);
  t1993 = t1986*t1991;
  t1996 = t1994*t1882*t1873;
  t1997 = t1993 + t1996;
  t1999 = t1343*t1997;
  t2000 = t1869*t1994*t1420;
  t2004 = t1999 + t2000;
  t2008 = t1869*t1343*t1994;
  t2010 = -1.*t1997*t1420;
  t2012 = t2008 + t2010;
  t2007 = -1.*t1387*t2004;
  t2015 = t1366*t2012;
  t2017 = t2007 + t2015;
  t2023 = t1366*t2004;
  t2030 = t1387*t2012;
  t2035 = t2023 + t2030;
  t2022 = t1492*t2017;
  t2037 = t1469*t2035;
  t2040 = t2022 + t2037;
  t2044 = t1469*t2017;
  t2045 = -1.*t1492*t2035;
  t2048 = t2044 + t2045;
  t2085 = -1.*t1991*t1994;
  t2087 = t1986*t1882*t1873;
  t2093 = t2085 + t2087;
  t2095 = t1343*t2093;
  t2097 = t1986*t1869*t1420;
  t2100 = t2095 + t2097;
  t2109 = t1986*t1869*t1343;
  t2111 = -1.*t2093*t1420;
  t2116 = t2109 + t2111;
  t2105 = -1.*t1387*t2100;
  t2123 = t1366*t2116;
  t2124 = t2105 + t2123;
  t2127 = t1366*t2100;
  t2128 = t1387*t2116;
  t2133 = t2127 + t2128;
  t2126 = t1492*t2124;
  t2134 = t1469*t2133;
  t2139 = t2126 + t2134;
  t2147 = t1469*t2124;
  t2148 = -1.*t1492*t2133;
  t2150 = t2147 + t2148;
  p_output1[0]=var1[3];
  p_output1[1]=var1[4];
  p_output1[2]=var1[15];
  p_output1[3]=Sqrt(0.00002025 + Power(0.049*t109 + 0.09*t38 + t109*t575 + t38*t683 + t1234*t828 + t798*t853 - 1.11344*(t1269*t898 - 1.*t1261*t930) - 0.02159*(t1261*t898 + t1269*t930) + t1261*t939 + t1269*t970,2) + Power(-0.09*t109 + 0.049*t38 + t38*t575 - 1.*t109*t683 + t798*t805 + t828*t853 + t894*t939 - 1.11344*(-1.*t894*t930 + t898*t948) - 0.02159*(t894*t898 + t930*t948) + t948*t970,2));
  p_output1[4]=Sqrt(0.00002025 + Power(0.049*t1343 + t1343*t1405 - 0.09*t1420 - 1.*t1420*t1434 + t1498*t1512 + t1537*t1553 + t1612*t1621 + t1636*t1647 - 1.11344*t1675 - 0.02159*t1690,2) + Power(0.09*t1343 + 0.049*t1420 + t1405*t1420 + t1343*t1434 + t1498*t1553 + t1537*t1721 + t1636*t1731 + t1612*t1766 - 0.02159*t1788 - 1.11344*t1799,2));
  p_output1[5]=ArcTan(-0.09*t1343 - 0.049*t1420 - 1.*t1405*t1420 - 1.*t1343*t1434 - 1.*t1498*t1553 - 1.*t1537*t1721 - 1.*t1636*t1731 - 1.*t1612*t1766 + 0.02159*t1788 + 1.11344*t1799,-0.049*t1343 - 1.*t1343*t1405 + 0.09*t1420 + t1420*t1434 - 1.*t1498*t1512 - 1.*t1537*t1553 - 1.*t1612*t1621 - 1.*t1636*t1647 + 1.11344*t1675 + 0.02159*t1690);
  p_output1[6]=var1[6];
  p_output1[7]=var1[7];
  p_output1[8]=ArcTan(Sqrt(Power(0.766044*(-1.*t1607*t1941 + t1563*t1960) + 0.642788*(t1563*t1941 + t1607*t1960),2) + Power(0.766044*(-1.*t1607*t2040 + t1563*t2048) + 0.642788*(t1563*t2040 + t1607*t2048),2)),-0.766044*(-1.*t1607*t2139 + t1563*t2150) - 0.642788*(t1563*t2139 + t1607*t2150));
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

void yaRightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




