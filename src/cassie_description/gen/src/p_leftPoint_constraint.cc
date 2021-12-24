/*
 * Automatically Generated from Mathematica.
 * Thu 26 Aug 2021 14:18:53 GMT-07:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "p_leftPoint_constraint.hh"
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
  double t195;
  double t221;
  double t728;
  double t1020;
  double t1042;
  double t1132;
  double t1140;
  double t1241;
  double t1249;
  double t1071;
  double t1123;
  double t1127;
  double t1355;
  double t1538;
  double t1542;
  double t1550;
  double t1555;
  double t1485;
  double t1517;
  double t1528;
  double t1610;
  double t1622;
  double t1639;
  double t1679;
  double t1686;
  double t1689;
  double t1691;
  double t1711;
  double t1715;
  double t1719;
  double t1766;
  double t1780;
  double t1784;
  double t1789;
  double t1790;
  double t1791;
  double t1798;
  double t1804;
  double t1805;
  double t1806;
  double t1812;
  double t1816;
  double t1819;
  double t1834;
  double t1835;
  double t1836;
  double t1839;
  double t1852;
  double t1855;
  double t1858;
  double t1864;
  double t1865;
  double t1866;
  double t586;
  double t639;
  double t1892;
  double t1886;
  double t1889;
  double t1893;
  double t1895;
  double t1245;
  double t1252;
  double t1264;
  double t1381;
  double t1398;
  double t1418;
  double t1913;
  double t1914;
  double t1915;
  double t1917;
  double t1919;
  double t1920;
  double t1554;
  double t1556;
  double t1561;
  double t1643;
  double t1650;
  double t1665;
  double t1690;
  double t1693;
  double t1696;
  double t1931;
  double t1932;
  double t1934;
  double t1936;
  double t1938;
  double t1939;
  double t1750;
  double t1754;
  double t1765;
  double t1794;
  double t1802;
  double t1803;
  double t1942;
  double t1943;
  double t1944;
  double t1947;
  double t1948;
  double t1950;
  double t1809;
  double t1810;
  double t1811;
  double t1838;
  double t1846;
  double t1849;
  double t1952;
  double t1955;
  double t1956;
  double t1958;
  double t1959;
  double t1960;
  double t1861;
  double t1862;
  double t1863;
  double t1962;
  double t1963;
  double t1964;
  double t1966;
  double t1967;
  double t1968;
  double t1979;
  double t1980;
  double t1981;
  double t1984;
  double t1985;
  double t1986;
  double t1988;
  double t1989;
  double t1990;
  double t1996;
  double t2000;
  double t2001;
  double t2003;
  double t2004;
  double t2005;
  double t2010;
  double t2011;
  double t2012;
  double t2014;
  double t2015;
  double t2016;
  double t2018;
  double t2019;
  double t2020;
  double t2022;
  double t2023;
  double t2024;
  double t2026;
  double t2027;
  double t2028;
  double t2030;
  double t2031;
  double t2032;
  double t2038;
  double t2039;
  double t2040;
  double t2048;
  double t2050;
  double t2053;
  double t1974;
  double t1975;
  double t1976;
  double t2054;
  double t2055;
  double t2056;
  double t2057;
  double t1875;
  double t1876;
  double t1877;
  t195 = Cos(var1[4]);
  t221 = Cos(var1[6]);
  t728 = Sin(var1[5]);
  t1020 = Sin(var1[4]);
  t1042 = Sin(var1[6]);
  t1132 = Cos(var1[7]);
  t1140 = -1.*t1132;
  t1241 = 1. + t1140;
  t1249 = Sin(var1[7]);
  t1071 = -1.*t195*t221*t728;
  t1123 = t1020*t1042;
  t1127 = t1071 + t1123;
  t1355 = Cos(var1[5]);
  t1538 = Cos(var1[8]);
  t1542 = -1.*t1538;
  t1550 = 1. + t1542;
  t1555 = Sin(var1[8]);
  t1485 = t195*t1355*t1132;
  t1517 = t1127*t1249;
  t1528 = t1485 + t1517;
  t1610 = t221*t1020;
  t1622 = t195*t728*t1042;
  t1639 = t1610 + t1622;
  t1679 = Cos(var1[9]);
  t1686 = -1.*t1679;
  t1689 = 1. + t1686;
  t1691 = Sin(var1[9]);
  t1711 = t1538*t1528;
  t1715 = t1639*t1555;
  t1719 = t1711 + t1715;
  t1766 = t1538*t1639;
  t1780 = -1.*t1528*t1555;
  t1784 = t1766 + t1780;
  t1789 = Cos(var1[10]);
  t1790 = -1.*t1789;
  t1791 = 1. + t1790;
  t1798 = Sin(var1[10]);
  t1804 = -1.*t1691*t1719;
  t1805 = t1679*t1784;
  t1806 = t1804 + t1805;
  t1812 = t1679*t1719;
  t1816 = t1691*t1784;
  t1819 = t1812 + t1816;
  t1834 = Cos(var1[11]);
  t1835 = -1.*t1834;
  t1836 = 1. + t1835;
  t1839 = Sin(var1[11]);
  t1852 = t1798*t1806;
  t1855 = t1789*t1819;
  t1858 = t1852 + t1855;
  t1864 = t1789*t1806;
  t1865 = -1.*t1798*t1819;
  t1866 = t1864 + t1865;
  t586 = -1.*t221;
  t639 = 1. + t586;
  t1892 = Sin(var1[3]);
  t1886 = Cos(var1[3]);
  t1889 = t1886*t1355;
  t1893 = -1.*t1892*t1020*t728;
  t1895 = t1889 + t1893;
  t1245 = 0.135*t1241;
  t1252 = 0.049*t1249;
  t1264 = t1245 + t1252;
  t1381 = -0.049*t1241;
  t1398 = 0.135*t1249;
  t1418 = t1381 + t1398;
  t1913 = t221*t1895;
  t1914 = -1.*t195*t1892*t1042;
  t1915 = t1913 + t1914;
  t1917 = t1355*t1892*t1020;
  t1919 = t1886*t728;
  t1920 = t1917 + t1919;
  t1554 = -0.049*t1550;
  t1556 = -0.09*t1555;
  t1561 = t1554 + t1556;
  t1643 = -0.09*t1550;
  t1650 = 0.049*t1555;
  t1665 = t1643 + t1650;
  t1690 = -0.049*t1689;
  t1693 = -0.21*t1691;
  t1696 = t1690 + t1693;
  t1931 = t1132*t1920;
  t1932 = t1915*t1249;
  t1934 = t1931 + t1932;
  t1936 = -1.*t195*t221*t1892;
  t1938 = -1.*t1895*t1042;
  t1939 = t1936 + t1938;
  t1750 = -0.21*t1689;
  t1754 = 0.049*t1691;
  t1765 = t1750 + t1754;
  t1794 = -0.27068*t1791;
  t1802 = 0.00159*t1798;
  t1803 = t1794 + t1802;
  t1942 = t1538*t1934;
  t1943 = t1939*t1555;
  t1944 = t1942 + t1943;
  t1947 = t1538*t1939;
  t1948 = -1.*t1934*t1555;
  t1950 = t1947 + t1948;
  t1809 = -0.00159*t1791;
  t1810 = -0.27068*t1798;
  t1811 = t1809 + t1810;
  t1838 = 0.01841*t1836;
  t1846 = -0.70544*t1839;
  t1849 = t1838 + t1846;
  t1952 = -1.*t1691*t1944;
  t1955 = t1679*t1950;
  t1956 = t1952 + t1955;
  t1958 = t1679*t1944;
  t1959 = t1691*t1950;
  t1960 = t1958 + t1959;
  t1861 = -0.70544*t1836;
  t1862 = -0.01841*t1839;
  t1863 = t1861 + t1862;
  t1962 = t1798*t1956;
  t1963 = t1789*t1960;
  t1964 = t1962 + t1963;
  t1966 = t1789*t1956;
  t1967 = -1.*t1798*t1960;
  t1968 = t1966 + t1967;
  t1979 = t1355*t1892;
  t1980 = t1886*t1020*t728;
  t1981 = t1979 + t1980;
  t1984 = t221*t1981;
  t1985 = t1886*t195*t1042;
  t1986 = t1984 + t1985;
  t1988 = -1.*t1886*t1355*t1020;
  t1989 = t1892*t728;
  t1990 = t1988 + t1989;
  t1996 = t1132*t1990;
  t2000 = t1986*t1249;
  t2001 = t1996 + t2000;
  t2003 = t1886*t195*t221;
  t2004 = -1.*t1981*t1042;
  t2005 = t2003 + t2004;
  t2010 = t1538*t2001;
  t2011 = t2005*t1555;
  t2012 = t2010 + t2011;
  t2014 = t1538*t2005;
  t2015 = -1.*t2001*t1555;
  t2016 = t2014 + t2015;
  t2018 = -1.*t1691*t2012;
  t2019 = t1679*t2016;
  t2020 = t2018 + t2019;
  t2022 = t1679*t2012;
  t2023 = t1691*t2016;
  t2024 = t2022 + t2023;
  t2026 = t1798*t2020;
  t2027 = t1789*t2024;
  t2028 = t2026 + t2027;
  t2030 = t1789*t2020;
  t2031 = -1.*t1798*t2024;
  t2032 = t2030 + t2031;
  t2038 = t1834*t2028;
  t2039 = t1839*t2032;
  t2040 = t2038 + t2039;
  t2048 = -1.*t1132*t1986;
  t2050 = t1990*t1249;
  t2053 = t2048 + t2050;
  t1974 = t1834*t1964;
  t1975 = t1839*t1968;
  t1976 = t1974 + t1975;
  t2054 = Power(t2053,2);
  t2055 = Power(t2040,2);
  t2056 = t2054 + t2055;
  t2057 = 1/Sqrt(t2056);
  t1875 = t1834*t1858;
  t1876 = t1839*t1866;
  t1877 = t1875 + t1876;
  p_output1[0]=-0.135*t1020*t1042 + t1127*t1264 + t1528*t1561 + t1639*t1665 + t1696*t1719 + t1765*t1784 + t1803*t1806 + t1811*t1819 + t1849*t1858 + t1863*t1866 - 1.11344*(-1.*t1839*t1858 + t1834*t1866) - 0.02159*t1877 + t1355*t1418*t195 + 0.1305*(t1127*t1132 - 1.*t1249*t1355*t195) - 0.135*t195*t639*t728 + var1[0];
  p_output1[1]=t1264*t1915 + t1418*t1920 + 0.1305*(t1132*t1915 - 1.*t1249*t1920) + t1561*t1934 + t1665*t1939 + t1696*t1944 + 0.135*t1042*t1892*t195 + t1765*t1950 + t1803*t1956 + t1811*t1960 + t1849*t1964 + t1863*t1968 - 1.11344*(-1.*t1839*t1964 + t1834*t1968) - 0.02159*t1976 + 0.135*t1895*t639 + var1[1];
  p_output1[2]=-0.135*t1042*t1886*t195 + t1264*t1986 + t1418*t1990 + 0.1305*(t1132*t1986 - 1.*t1249*t1990) + t1561*t2001 + t1665*t2005 + t1696*t2012 + t1765*t2016 + t1803*t2020 + t1811*t2024 + t1849*t2028 + t1863*t2032 - 1.11344*(-1.*t1839*t2028 + t1834*t2032) - 0.02159*t2040 + 0.135*t1981*t639 + var1[2];
  p_output1[3]=ArcTan(-1.*(-1.*t1132*t1915 + t1249*t1920)*t2040*t2057 + t1976*t2053*t2057,(-1.*t1127*t1132 + t1249*t1355*t195)*t2040*t2057 - 1.*t1877*t2053*t2057);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void p_leftPoint_constraint_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




