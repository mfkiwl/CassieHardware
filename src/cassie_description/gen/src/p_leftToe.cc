/*
 * Automatically Generated from Mathematica.
 * Mon 13 Sep 2021 16:09:02 GMT-07:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "p_leftToe.hh"
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
  double t723;
  double t798;
  double t1163;
  double t1311;
  double t1312;
  double t1496;
  double t1511;
  double t1526;
  double t1588;
  double t1315;
  double t1378;
  double t1420;
  double t1640;
  double t1663;
  double t1668;
  double t1682;
  double t1699;
  double t1652;
  double t1656;
  double t1661;
  double t1735;
  double t1739;
  double t1744;
  double t1755;
  double t1760;
  double t1761;
  double t1774;
  double t1787;
  double t1788;
  double t1790;
  double t1808;
  double t1823;
  double t1827;
  double t1838;
  double t1843;
  double t1845;
  double t1847;
  double t1851;
  double t1853;
  double t1854;
  double t1872;
  double t1873;
  double t1874;
  double t1878;
  double t1884;
  double t1889;
  double t1910;
  double t1926;
  double t1931;
  double t1936;
  double t1943;
  double t1944;
  double t1955;
  double t1957;
  double t1958;
  double t1959;
  double t1962;
  double t1966;
  double t1968;
  double t1973;
  double t2007;
  double t2013;
  double t2027;
  double t1087;
  double t1120;
  double t2063;
  double t2051;
  double t2062;
  double t2065;
  double t2066;
  double t1578;
  double t1602;
  double t1634;
  double t1641;
  double t1643;
  double t1644;
  double t2078;
  double t2083;
  double t2101;
  double t2122;
  double t2128;
  double t2133;
  double t1688;
  double t1705;
  double t1710;
  double t1749;
  double t1751;
  double t1752;
  double t1773;
  double t1775;
  double t1777;
  double t2149;
  double t2150;
  double t2152;
  double t2155;
  double t2156;
  double t2158;
  double t1792;
  double t1798;
  double t1803;
  double t1846;
  double t1849;
  double t1850;
  double t2161;
  double t2176;
  double t2189;
  double t2207;
  double t2211;
  double t2231;
  double t1857;
  double t1858;
  double t1859;
  double t1896;
  double t1915;
  double t1920;
  double t2926;
  double t2959;
  double t3172;
  double t3388;
  double t3433;
  double t3613;
  double t1939;
  double t1940;
  double t1942;
  double t1960;
  double t1963;
  double t1965;
  double t3725;
  double t3731;
  double t3814;
  double t3963;
  double t3976;
  double t3985;
  double t1984;
  double t1993;
  double t2002;
  double t4029;
  double t4063;
  double t4076;
  double t4139;
  double t4146;
  double t4149;
  double t4427;
  double t4487;
  double t4491;
  double t4705;
  double t4792;
  double t4840;
  double t4921;
  double t4970;
  double t4989;
  double t5196;
  double t5202;
  double t5204;
  double t5232;
  double t5236;
  double t5268;
  double t5299;
  double t5360;
  double t5394;
  double t5448;
  double t5500;
  double t5507;
  double t5522;
  double t5531;
  double t5540;
  double t5622;
  double t5651;
  double t5659;
  double t5706;
  double t5761;
  double t5794;
  double t5821;
  double t5823;
  double t5847;
  double t5849;
  double t5857;
  double t6003;
  double t6056;
  double t6066;
  double t6088;
  t723 = Cos(var1[4]);
  t798 = Cos(var1[6]);
  t1163 = Sin(var1[5]);
  t1311 = Sin(var1[4]);
  t1312 = Sin(var1[6]);
  t1496 = Cos(var1[7]);
  t1511 = -1.*t1496;
  t1526 = 1. + t1511;
  t1588 = Sin(var1[7]);
  t1315 = -1.*t723*t798*t1163;
  t1378 = t1311*t1312;
  t1420 = t1315 + t1378;
  t1640 = Cos(var1[5]);
  t1663 = Cos(var1[8]);
  t1668 = -1.*t1663;
  t1682 = 1. + t1668;
  t1699 = Sin(var1[8]);
  t1652 = t723*t1640*t1496;
  t1656 = t1420*t1588;
  t1661 = t1652 + t1656;
  t1735 = t798*t1311;
  t1739 = t723*t1163*t1312;
  t1744 = t1735 + t1739;
  t1755 = Cos(var1[9]);
  t1760 = -1.*t1755;
  t1761 = 1. + t1760;
  t1774 = Sin(var1[9]);
  t1787 = t1663*t1661;
  t1788 = t1744*t1699;
  t1790 = t1787 + t1788;
  t1808 = t1663*t1744;
  t1823 = -1.*t1661*t1699;
  t1827 = t1808 + t1823;
  t1838 = Cos(var1[10]);
  t1843 = -1.*t1838;
  t1845 = 1. + t1843;
  t1847 = Sin(var1[10]);
  t1851 = -1.*t1774*t1790;
  t1853 = t1755*t1827;
  t1854 = t1851 + t1853;
  t1872 = t1755*t1790;
  t1873 = t1774*t1827;
  t1874 = t1872 + t1873;
  t1878 = Cos(var1[11]);
  t1884 = -1.*t1878;
  t1889 = 1. + t1884;
  t1910 = Sin(var1[11]);
  t1926 = t1847*t1854;
  t1931 = t1838*t1874;
  t1936 = t1926 + t1931;
  t1943 = t1838*t1854;
  t1944 = -1.*t1847*t1874;
  t1955 = t1943 + t1944;
  t1957 = Cos(var1[13]);
  t1958 = -1.*t1957;
  t1959 = 1. + t1958;
  t1962 = Sin(var1[13]);
  t1966 = -1.*t1910*t1936;
  t1968 = t1878*t1955;
  t1973 = t1966 + t1968;
  t2007 = t1878*t1936;
  t2013 = t1910*t1955;
  t2027 = t2007 + t2013;
  t1087 = -1.*t798;
  t1120 = 1. + t1087;
  t2063 = Sin(var1[3]);
  t2051 = Cos(var1[3]);
  t2062 = t2051*t1640;
  t2065 = -1.*t2063*t1311*t1163;
  t2066 = t2062 + t2065;
  t1578 = 0.135*t1526;
  t1602 = 0.049*t1588;
  t1634 = t1578 + t1602;
  t1641 = -0.049*t1526;
  t1643 = 0.135*t1588;
  t1644 = t1641 + t1643;
  t2078 = t798*t2066;
  t2083 = -1.*t723*t2063*t1312;
  t2101 = t2078 + t2083;
  t2122 = t1640*t2063*t1311;
  t2128 = t2051*t1163;
  t2133 = t2122 + t2128;
  t1688 = -0.049*t1682;
  t1705 = -0.09*t1699;
  t1710 = t1688 + t1705;
  t1749 = -0.09*t1682;
  t1751 = 0.049*t1699;
  t1752 = t1749 + t1751;
  t1773 = -0.049*t1761;
  t1775 = -0.21*t1774;
  t1777 = t1773 + t1775;
  t2149 = t1496*t2133;
  t2150 = t2101*t1588;
  t2152 = t2149 + t2150;
  t2155 = -1.*t723*t798*t2063;
  t2156 = -1.*t2066*t1312;
  t2158 = t2155 + t2156;
  t1792 = -0.21*t1761;
  t1798 = 0.049*t1774;
  t1803 = t1792 + t1798;
  t1846 = -0.27068*t1845;
  t1849 = 0.00159*t1847;
  t1850 = t1846 + t1849;
  t2161 = t1663*t2152;
  t2176 = t2158*t1699;
  t2189 = t2161 + t2176;
  t2207 = t1663*t2158;
  t2211 = -1.*t2152*t1699;
  t2231 = t2207 + t2211;
  t1857 = -0.00159*t1845;
  t1858 = -0.27068*t1847;
  t1859 = t1857 + t1858;
  t1896 = 0.01841*t1889;
  t1915 = -0.70544*t1910;
  t1920 = t1896 + t1915;
  t2926 = -1.*t1774*t2189;
  t2959 = t1755*t2231;
  t3172 = t2926 + t2959;
  t3388 = t1755*t2189;
  t3433 = t1774*t2231;
  t3613 = t3388 + t3433;
  t1939 = -0.70544*t1889;
  t1940 = -0.01841*t1910;
  t1942 = t1939 + t1940;
  t1960 = -1.11344*t1959;
  t1963 = 0.02159*t1962;
  t1965 = t1960 + t1963;
  t3725 = t1847*t3172;
  t3731 = t1838*t3613;
  t3814 = t3725 + t3731;
  t3963 = t1838*t3172;
  t3976 = -1.*t1847*t3613;
  t3985 = t3963 + t3976;
  t1984 = -0.02159*t1959;
  t1993 = -1.11344*t1962;
  t2002 = t1984 + t1993;
  t4029 = -1.*t1910*t3814;
  t4063 = t1878*t3985;
  t4076 = t4029 + t4063;
  t4139 = t1878*t3814;
  t4146 = t1910*t3985;
  t4149 = t4139 + t4146;
  t4427 = t1640*t2063;
  t4487 = t2051*t1311*t1163;
  t4491 = t4427 + t4487;
  t4705 = t798*t4491;
  t4792 = t2051*t723*t1312;
  t4840 = t4705 + t4792;
  t4921 = -1.*t2051*t1640*t1311;
  t4970 = t2063*t1163;
  t4989 = t4921 + t4970;
  t5196 = t1496*t4989;
  t5202 = t4840*t1588;
  t5204 = t5196 + t5202;
  t5232 = t2051*t723*t798;
  t5236 = -1.*t4491*t1312;
  t5268 = t5232 + t5236;
  t5299 = t1663*t5204;
  t5360 = t5268*t1699;
  t5394 = t5299 + t5360;
  t5448 = t1663*t5268;
  t5500 = -1.*t5204*t1699;
  t5507 = t5448 + t5500;
  t5522 = -1.*t1774*t5394;
  t5531 = t1755*t5507;
  t5540 = t5522 + t5531;
  t5622 = t1755*t5394;
  t5651 = t1774*t5507;
  t5659 = t5622 + t5651;
  t5706 = t1847*t5540;
  t5761 = t1838*t5659;
  t5794 = t5706 + t5761;
  t5821 = t1838*t5540;
  t5823 = -1.*t1847*t5659;
  t5847 = t5821 + t5823;
  t5849 = -1.*t1910*t5794;
  t5857 = t1878*t5847;
  t6003 = t5849 + t5857;
  t6056 = t1878*t5794;
  t6066 = t1910*t5847;
  t6088 = t6056 + t6066;
  p_output1[0]=-0.135*t1311*t1312 + t1420*t1634 + t1661*t1710 + t1744*t1752 + t1777*t1790 + t1803*t1827 + t1850*t1854 + t1859*t1874 + t1920*t1936 + t1942*t1955 + t1965*t1973 + t2002*t2027 - 0.02159*(t1962*t1973 + t1957*t2027) - 1.11344*(t1957*t1973 - 1.*t1962*t2027) - 0.135*t1120*t1163*t723 + t1640*t1644*t723 + 0.1305*(t1420*t1496 - 1.*t1588*t1640*t723) + var1[0];
  p_output1[1]=0.135*t1120*t2066 + t1634*t2101 + t1644*t2133 + 0.1305*(t1496*t2101 - 1.*t1588*t2133) + t1710*t2152 + t1752*t2158 + t1777*t2189 + t1803*t2231 + t1850*t3172 + t1859*t3613 + t1920*t3814 + t1942*t3985 + t1965*t4076 + t2002*t4149 - 0.02159*(t1962*t4076 + t1957*t4149) - 1.11344*(t1957*t4076 - 1.*t1962*t4149) + 0.135*t1312*t2063*t723 + var1[1];
  p_output1[2]=0.135*t1120*t4491 + t1634*t4840 + t1644*t4989 + 0.1305*(t1496*t4840 - 1.*t1588*t4989) + t1710*t5204 + t1752*t5268 + t1777*t5394 + t1803*t5507 + t1850*t5540 + t1859*t5659 + t1920*t5794 + t1942*t5847 + t1965*t6003 + t2002*t6088 - 0.02159*(t1962*t6003 + t1957*t6088) - 1.11344*(t1957*t6003 - 1.*t1962*t6088) - 0.135*t1312*t2051*t723 + var1[2];
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

void p_leftToe_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




