/*
 * Automatically Generated from Mathematica.
 * Thu 26 Aug 2021 14:19:15 GMT-07:00
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
  double t15;
  double t82;
  double t115;
  double t118;
  double t150;
  double t208;
  double t221;
  double t243;
  double t261;
  double t24;
  double t280;
  double t288;
  double t292;
  double t350;
  double t357;
  double t359;
  double t398;
  double t412;
  double t414;
  double t415;
  double t439;
  double t440;
  double t441;
  double t445;
  double t449;
  double t453;
  double t461;
  double t473;
  double t477;
  double t479;
  double t522;
  double t536;
  double t544;
  double t557;
  double t561;
  double t562;
  double t565;
  double t569;
  double t572;
  double t573;
  double t584;
  double t585;
  double t586;
  double t588;
  double t589;
  double t591;
  double t593;
  double t639;
  double t651;
  double t655;
  double t715;
  double t719;
  double t725;
  double t728;
  double t730;
  double t731;
  double t928;
  double t1071;
  double t1089;
  double t1095;
  double t1128;
  double t1132;
  double t1135;
  double t128;
  double t172;
  double t195;
  double t1353;
  double t259;
  double t260;
  double t1371;
  double t264;
  double t272;
  double t276;
  double t1405;
  double t1418;
  double t1485;
  double t397;
  double t400;
  double t403;
  double t1365;
  double t1381;
  double t1385;
  double t1517;
  double t1525;
  double t1528;
  double t434;
  double t437;
  double t438;
  double t457;
  double t465;
  double t469;
  double t1542;
  double t1550;
  double t1554;
  double t1622;
  double t1632;
  double t1639;
  double t485;
  double t486;
  double t490;
  double t564;
  double t566;
  double t568;
  double t1648;
  double t1649;
  double t1650;
  double t1674;
  double t1679;
  double t1680;
  double t576;
  double t577;
  double t578;
  double t592;
  double t595;
  double t596;
  double t1686;
  double t1689;
  double t1690;
  double t1693;
  double t1696;
  double t1710;
  double t667;
  double t671;
  double t675;
  double t869;
  double t1020;
  double t1042;
  double t1715;
  double t1719;
  double t1735;
  double t1747;
  double t1750;
  double t1753;
  double t1107;
  double t1123;
  double t1127;
  double t1761;
  double t1765;
  double t1766;
  double t1780;
  double t1782;
  double t1784;
  double t1815;
  double t1816;
  double t1819;
  double t1809;
  double t1810;
  double t1811;
  double t1835;
  double t1836;
  double t1838;
  double t1846;
  double t1849;
  double t1852;
  double t1863;
  double t1864;
  double t1865;
  double t1873;
  double t1875;
  double t1876;
  double t1886;
  double t1889;
  double t1892;
  double t1895;
  double t1898;
  double t1901;
  double t1914;
  double t1915;
  double t1917;
  double t1920;
  double t1931;
  double t1932;
  double t1935;
  double t1936;
  double t1938;
  double t1940;
  double t1942;
  double t1943;
  double t1946;
  double t1947;
  double t1948;
  double t1211;
  double t1241;
  double t1245;
  double t1252;
  double t1264;
  double t1278;
  double t1790;
  double t1791;
  double t1793;
  double t1798;
  double t1802;
  double t1803;
  double t1951;
  double t1952;
  double t1953;
  double t1956;
  double t1958;
  double t1959;
  double t1556;
  double t1561;
  double t1610;
  double t1857;
  double t1858;
  double t1861;
  double t1985;
  double t1986;
  double t1988;
  double t1989;
  double t1990;
  double t1996;
  double t1997;
  double t427;
  double t431;
  double t432;
  t15 = Cos(var1[4]);
  t82 = Cos(var1[15]);
  t115 = -1.*t82;
  t118 = 1. + t115;
  t150 = Sin(var1[15]);
  t208 = Sin(var1[14]);
  t221 = Sin(var1[4]);
  t243 = Cos(var1[14]);
  t261 = Sin(var1[5]);
  t24 = Cos(var1[5]);
  t280 = t208*t221;
  t288 = -1.*t243*t15*t261;
  t292 = t280 + t288;
  t350 = Cos(var1[16]);
  t357 = -1.*t350;
  t359 = 1. + t357;
  t398 = Sin(var1[16]);
  t412 = t243*t221;
  t414 = t15*t208*t261;
  t415 = t412 + t414;
  t439 = t82*t15*t24;
  t440 = t150*t292;
  t441 = t439 + t440;
  t445 = Cos(var1[17]);
  t449 = -1.*t445;
  t453 = 1. + t449;
  t461 = Sin(var1[17]);
  t473 = t398*t415;
  t477 = t350*t441;
  t479 = t473 + t477;
  t522 = t350*t415;
  t536 = -1.*t398*t441;
  t544 = t522 + t536;
  t557 = Cos(var1[18]);
  t561 = -1.*t557;
  t562 = 1. + t561;
  t565 = Sin(var1[18]);
  t569 = -1.*t461*t479;
  t572 = t445*t544;
  t573 = t569 + t572;
  t584 = t445*t479;
  t585 = t461*t544;
  t586 = t584 + t585;
  t588 = Cos(var1[19]);
  t589 = -1.*t588;
  t591 = 1. + t589;
  t593 = Sin(var1[19]);
  t639 = t565*t573;
  t651 = t557*t586;
  t655 = t639 + t651;
  t715 = t557*t573;
  t719 = -1.*t565*t586;
  t725 = t715 + t719;
  t728 = Cos(var1[21]);
  t730 = -1.*t728;
  t731 = 1. + t730;
  t928 = Sin(var1[21]);
  t1071 = -1.*t593*t655;
  t1089 = t588*t725;
  t1095 = t1071 + t1089;
  t1128 = t588*t655;
  t1132 = t593*t725;
  t1135 = t1128 + t1132;
  t128 = -0.049*t118;
  t172 = -0.135*t150;
  t195 = t128 + t172;
  t1353 = Sin(var1[3]);
  t259 = -1.*t243;
  t260 = 1. + t259;
  t1371 = Cos(var1[3]);
  t264 = -0.135*t118;
  t272 = 0.049*t150;
  t276 = t264 + t272;
  t1405 = t1371*t24;
  t1418 = -1.*t1353*t221*t261;
  t1485 = t1405 + t1418;
  t397 = -0.09*t359;
  t400 = 0.049*t398;
  t403 = t397 + t400;
  t1365 = t24*t1353*t221;
  t1381 = t1371*t261;
  t1385 = t1365 + t1381;
  t1517 = -1.*t15*t208*t1353;
  t1525 = t243*t1485;
  t1528 = t1517 + t1525;
  t434 = -0.049*t359;
  t437 = -0.09*t398;
  t438 = t434 + t437;
  t457 = -0.049*t453;
  t465 = -0.21*t461;
  t469 = t457 + t465;
  t1542 = -1.*t243*t15*t1353;
  t1550 = -1.*t208*t1485;
  t1554 = t1542 + t1550;
  t1622 = t82*t1385;
  t1632 = t150*t1528;
  t1639 = t1622 + t1632;
  t485 = -0.21*t453;
  t486 = 0.049*t461;
  t490 = t485 + t486;
  t564 = -0.27068*t562;
  t566 = 0.00159*t565;
  t568 = t564 + t566;
  t1648 = t398*t1554;
  t1649 = t350*t1639;
  t1650 = t1648 + t1649;
  t1674 = t350*t1554;
  t1679 = -1.*t398*t1639;
  t1680 = t1674 + t1679;
  t576 = -0.00159*t562;
  t577 = -0.27068*t565;
  t578 = t576 + t577;
  t592 = 0.01841*t591;
  t595 = -0.70544*t593;
  t596 = t592 + t595;
  t1686 = -1.*t461*t1650;
  t1689 = t445*t1680;
  t1690 = t1686 + t1689;
  t1693 = t445*t1650;
  t1696 = t461*t1680;
  t1710 = t1693 + t1696;
  t667 = -0.70544*t591;
  t671 = -0.01841*t593;
  t675 = t667 + t671;
  t869 = -1.11344*t731;
  t1020 = 0.02159*t928;
  t1042 = t869 + t1020;
  t1715 = t565*t1690;
  t1719 = t557*t1710;
  t1735 = t1715 + t1719;
  t1747 = t557*t1690;
  t1750 = -1.*t565*t1710;
  t1753 = t1747 + t1750;
  t1107 = -0.02159*t731;
  t1123 = -1.11344*t928;
  t1127 = t1107 + t1123;
  t1761 = -1.*t593*t1735;
  t1765 = t588*t1753;
  t1766 = t1761 + t1765;
  t1780 = t588*t1735;
  t1782 = t593*t1753;
  t1784 = t1780 + t1782;
  t1815 = t24*t1353;
  t1816 = t1371*t221*t261;
  t1819 = t1815 + t1816;
  t1809 = -1.*t1371*t24*t221;
  t1810 = t1353*t261;
  t1811 = t1809 + t1810;
  t1835 = t1371*t15*t208;
  t1836 = t243*t1819;
  t1838 = t1835 + t1836;
  t1846 = t243*t1371*t15;
  t1849 = -1.*t208*t1819;
  t1852 = t1846 + t1849;
  t1863 = t82*t1811;
  t1864 = t150*t1838;
  t1865 = t1863 + t1864;
  t1873 = t398*t1852;
  t1875 = t350*t1865;
  t1876 = t1873 + t1875;
  t1886 = t350*t1852;
  t1889 = -1.*t398*t1865;
  t1892 = t1886 + t1889;
  t1895 = -1.*t461*t1876;
  t1898 = t445*t1892;
  t1901 = t1895 + t1898;
  t1914 = t445*t1876;
  t1915 = t461*t1892;
  t1917 = t1914 + t1915;
  t1920 = t565*t1901;
  t1931 = t557*t1917;
  t1932 = t1920 + t1931;
  t1935 = t557*t1901;
  t1936 = -1.*t565*t1917;
  t1938 = t1935 + t1936;
  t1940 = -1.*t593*t1932;
  t1942 = t588*t1938;
  t1943 = t1940 + t1942;
  t1946 = t588*t1932;
  t1947 = t593*t1938;
  t1948 = t1946 + t1947;
  t1211 = t928*t1095;
  t1241 = t728*t1135;
  t1245 = t1211 + t1241;
  t1252 = t728*t1095;
  t1264 = -1.*t928*t1135;
  t1278 = t1252 + t1264;
  t1790 = t928*t1766;
  t1791 = t728*t1784;
  t1793 = t1790 + t1791;
  t1798 = t728*t1766;
  t1802 = -1.*t928*t1784;
  t1803 = t1798 + t1802;
  t1951 = t928*t1943;
  t1952 = t728*t1948;
  t1953 = t1951 + t1952;
  t1956 = t728*t1943;
  t1958 = -1.*t928*t1948;
  t1959 = t1956 + t1958;
  t1556 = -1.*t150*t1385;
  t1561 = t82*t1528;
  t1610 = t1556 + t1561;
  t1857 = -1.*t150*t1811;
  t1858 = t82*t1838;
  t1861 = t1857 + t1858;
  t1985 = -0.766044*t1953;
  t1986 = 0.642788*t1959;
  t1988 = t1985 + t1986;
  t1989 = Power(t1861,2);
  t1990 = Power(t1988,2);
  t1996 = t1989 + t1990;
  t1997 = 1/Sqrt(t1996);
  t427 = -1.*t15*t24*t150;
  t431 = t82*t292;
  t432 = t427 + t431;
  p_output1[0]=t1042*t1095 + t1127*t1135 + 0.0306*t1245 - 1.13106*t1278 + 0.135*t208*t221 + t15*t195*t24 + 0.135*t15*t260*t261 + t276*t292 + t403*t415 - 0.1305*t432 + t438*t441 + t469*t479 + t490*t544 + t568*t573 + t578*t586 + t596*t655 + t675*t725 + var1[0];
  p_output1[1]=-0.1305*t1610 + t1042*t1766 + t1127*t1784 + 0.0306*t1793 - 1.13106*t1803 + t1385*t195 - 0.135*t1353*t15*t208 - 0.135*t1485*t260 + t1528*t276 + t1554*t403 + t1639*t438 + t1650*t469 + t1680*t490 + t1690*t568 + t1710*t578 + t1735*t596 + t1753*t675 + var1[1];
  p_output1[2]=-0.1305*t1861 + t1042*t1943 + t1127*t1948 + t1811*t195 + 0.0306*t1953 - 1.13106*t1959 + 0.135*t1371*t15*t208 - 0.135*t1819*t260 + t1838*t276 + t1852*t403 + t1865*t438 + t1876*t469 + t1892*t490 + t1901*t568 + t1917*t578 + t1932*t596 + t1938*t675 + var1[2];
  p_output1[3]=ArcTan(Sqrt(Power(0.642788*t1245 + 0.766044*t1278,2) + Power(0.642788*t1793 + 0.766044*t1803,2)),-0.642788*t1953 - 0.766044*t1959);
  p_output1[4]=ArcTan(-1.*(-0.766044*t1793 + 0.642788*t1803)*t1861*t1997 + t1610*t1988*t1997,(-0.766044*t1245 + 0.642788*t1278)*t1861*t1997 - 1.*t1988*t1997*t432);
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




