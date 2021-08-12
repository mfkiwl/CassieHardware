/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:15 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "p_rightPoint_constraint.hh"
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
  double t19;
  double t39;
  double t47;
  double t55;
  double t121;
  double t141;
  double t148;
  double t178;
  double t200;
  double t32;
  double t254;
  double t260;
  double t267;
  double t305;
  double t310;
  double t317;
  double t326;
  double t336;
  double t337;
  double t344;
  double t423;
  double t441;
  double t448;
  double t469;
  double t482;
  double t493;
  double t506;
  double t530;
  double t532;
  double t535;
  double t571;
  double t572;
  double t576;
  double t598;
  double t602;
  double t607;
  double t618;
  double t644;
  double t647;
  double t656;
  double t680;
  double t690;
  double t696;
  double t730;
  double t734;
  double t746;
  double t753;
  double t776;
  double t778;
  double t780;
  double t825;
  double t827;
  double t838;
  double t94;
  double t124;
  double t132;
  double t896;
  double t179;
  double t185;
  double t910;
  double t215;
  double t216;
  double t225;
  double t934;
  double t938;
  double t942;
  double t320;
  double t330;
  double t333;
  double t907;
  double t915;
  double t927;
  double t950;
  double t953;
  double t954;
  double t378;
  double t383;
  double t400;
  double t500;
  double t517;
  double t520;
  double t967;
  double t994;
  double t996;
  double t1033;
  double t1036;
  double t1044;
  double t539;
  double t540;
  double t562;
  double t615;
  double t636;
  double t641;
  double t1050;
  double t1053;
  double t1054;
  double t1060;
  double t1066;
  double t1070;
  double t673;
  double t674;
  double t676;
  double t747;
  double t757;
  double t764;
  double t1080;
  double t1092;
  double t1095;
  double t1104;
  double t1112;
  double t1115;
  double t792;
  double t801;
  double t815;
  double t1126;
  double t1144;
  double t1173;
  double t1182;
  double t1211;
  double t1213;
  double t1369;
  double t1375;
  double t1378;
  double t1305;
  double t1318;
  double t1347;
  double t1382;
  double t1383;
  double t1385;
  double t1404;
  double t1416;
  double t1420;
  double t1457;
  double t1464;
  double t1487;
  double t1493;
  double t1499;
  double t1501;
  double t1511;
  double t1514;
  double t1519;
  double t1535;
  double t1569;
  double t1573;
  double t1585;
  double t1601;
  double t1623;
  double t1637;
  double t1639;
  double t1660;
  double t1674;
  double t1677;
  double t1706;
  double t1766;
  double t1781;
  double t1782;
  double t1806;
  double t1807;
  double t1812;
  double t1262;
  double t1270;
  double t1282;
  double t1813;
  double t1815;
  double t1825;
  double t1829;
  double t865;
  double t880;
  double t891;
  t19 = Cos(var1[4]);
  t39 = Cos(var1[15]);
  t47 = -1.*t39;
  t55 = 1. + t47;
  t121 = Sin(var1[15]);
  t141 = Sin(var1[14]);
  t148 = Sin(var1[4]);
  t178 = Cos(var1[14]);
  t200 = Sin(var1[5]);
  t32 = Cos(var1[5]);
  t254 = t141*t148;
  t260 = -1.*t178*t19*t200;
  t267 = t254 + t260;
  t305 = Cos(var1[16]);
  t310 = -1.*t305;
  t317 = 1. + t310;
  t326 = Sin(var1[16]);
  t336 = t178*t148;
  t337 = t19*t141*t200;
  t344 = t336 + t337;
  t423 = t39*t19*t32;
  t441 = t121*t267;
  t448 = t423 + t441;
  t469 = Cos(var1[17]);
  t482 = -1.*t469;
  t493 = 1. + t482;
  t506 = Sin(var1[17]);
  t530 = t326*t344;
  t532 = t305*t448;
  t535 = t530 + t532;
  t571 = t305*t344;
  t572 = -1.*t326*t448;
  t576 = t571 + t572;
  t598 = Cos(var1[18]);
  t602 = -1.*t598;
  t607 = 1. + t602;
  t618 = Sin(var1[18]);
  t644 = -1.*t506*t535;
  t647 = t469*t576;
  t656 = t644 + t647;
  t680 = t469*t535;
  t690 = t506*t576;
  t696 = t680 + t690;
  t730 = Cos(var1[19]);
  t734 = -1.*t730;
  t746 = 1. + t734;
  t753 = Sin(var1[19]);
  t776 = t618*t656;
  t778 = t598*t696;
  t780 = t776 + t778;
  t825 = t598*t656;
  t827 = -1.*t618*t696;
  t838 = t825 + t827;
  t94 = -0.049*t55;
  t124 = -0.135*t121;
  t132 = t94 + t124;
  t896 = Sin(var1[3]);
  t179 = -1.*t178;
  t185 = 1. + t179;
  t910 = Cos(var1[3]);
  t215 = -0.135*t55;
  t216 = 0.049*t121;
  t225 = t215 + t216;
  t934 = t910*t32;
  t938 = -1.*t896*t148*t200;
  t942 = t934 + t938;
  t320 = -0.09*t317;
  t330 = 0.049*t326;
  t333 = t320 + t330;
  t907 = t32*t896*t148;
  t915 = t910*t200;
  t927 = t907 + t915;
  t950 = -1.*t19*t141*t896;
  t953 = t178*t942;
  t954 = t950 + t953;
  t378 = -0.049*t317;
  t383 = -0.09*t326;
  t400 = t378 + t383;
  t500 = -0.049*t493;
  t517 = -0.21*t506;
  t520 = t500 + t517;
  t967 = -1.*t178*t19*t896;
  t994 = -1.*t141*t942;
  t996 = t967 + t994;
  t1033 = t39*t927;
  t1036 = t121*t954;
  t1044 = t1033 + t1036;
  t539 = -0.21*t493;
  t540 = 0.049*t506;
  t562 = t539 + t540;
  t615 = -0.27068*t607;
  t636 = 0.00159*t618;
  t641 = t615 + t636;
  t1050 = t326*t996;
  t1053 = t305*t1044;
  t1054 = t1050 + t1053;
  t1060 = t305*t996;
  t1066 = -1.*t326*t1044;
  t1070 = t1060 + t1066;
  t673 = -0.00159*t607;
  t674 = -0.27068*t618;
  t676 = t673 + t674;
  t747 = 0.01841*t746;
  t757 = -0.70544*t753;
  t764 = t747 + t757;
  t1080 = -1.*t506*t1054;
  t1092 = t469*t1070;
  t1095 = t1080 + t1092;
  t1104 = t469*t1054;
  t1112 = t506*t1070;
  t1115 = t1104 + t1112;
  t792 = -0.70544*t746;
  t801 = -0.01841*t753;
  t815 = t792 + t801;
  t1126 = t618*t1095;
  t1144 = t598*t1115;
  t1173 = t1126 + t1144;
  t1182 = t598*t1095;
  t1211 = -1.*t618*t1115;
  t1213 = t1182 + t1211;
  t1369 = t32*t896;
  t1375 = t910*t148*t200;
  t1378 = t1369 + t1375;
  t1305 = -1.*t910*t32*t148;
  t1318 = t896*t200;
  t1347 = t1305 + t1318;
  t1382 = t910*t19*t141;
  t1383 = t178*t1378;
  t1385 = t1382 + t1383;
  t1404 = t178*t910*t19;
  t1416 = -1.*t141*t1378;
  t1420 = t1404 + t1416;
  t1457 = t39*t1347;
  t1464 = t121*t1385;
  t1487 = t1457 + t1464;
  t1493 = t326*t1420;
  t1499 = t305*t1487;
  t1501 = t1493 + t1499;
  t1511 = t305*t1420;
  t1514 = -1.*t326*t1487;
  t1519 = t1511 + t1514;
  t1535 = -1.*t506*t1501;
  t1569 = t469*t1519;
  t1573 = t1535 + t1569;
  t1585 = t469*t1501;
  t1601 = t506*t1519;
  t1623 = t1585 + t1601;
  t1637 = t618*t1573;
  t1639 = t598*t1623;
  t1660 = t1637 + t1639;
  t1674 = t598*t1573;
  t1677 = -1.*t618*t1623;
  t1706 = t1674 + t1677;
  t1766 = t730*t1660;
  t1781 = t753*t1706;
  t1782 = t1766 + t1781;
  t1806 = t121*t1347;
  t1807 = -1.*t39*t1385;
  t1812 = t1806 + t1807;
  t1262 = t730*t1173;
  t1270 = t753*t1213;
  t1282 = t1262 + t1270;
  t1813 = Power(t1812,2);
  t1815 = Power(t1782,2);
  t1825 = t1813 + t1815;
  t1829 = 1/Sqrt(t1825);
  t865 = t730*t780;
  t880 = t753*t838;
  t891 = t865 + t880;
  p_output1[0]=0.135*t141*t148 + 0.135*t185*t19*t200 + t225*t267 + t132*t19*t32 + t333*t344 - 0.1305*(-1.*t121*t19*t32 + t267*t39) + t400*t448 + t520*t535 + t562*t576 + t641*t656 + t676*t696 + t764*t780 + t815*t838 - 1.11344*(-1.*t753*t780 + t730*t838) - 0.02159*t891 + var1[0];
  p_output1[1]=-0.02159*t1282 + t1044*t400 + t1054*t520 + t1070*t562 + t1095*t641 + t1115*t676 - 1.11344*(t1213*t730 - 1.*t1173*t753) + t1173*t764 + t1213*t815 - 0.135*t141*t19*t896 + t132*t927 - 0.135*t185*t942 + t225*t954 - 0.1305*(-1.*t121*t927 + t39*t954) + t333*t996 + var1[1];
  p_output1[2]=t132*t1347 - 0.02159*t1782 - 0.135*t1378*t185 + t1385*t225 + t1420*t333 - 0.1305*(-1.*t121*t1347 + t1385*t39) + t1487*t400 + t1501*t520 + t1519*t562 + t1573*t641 + t1623*t676 - 1.11344*(t1706*t730 - 1.*t1660*t753) + t1660*t764 + t1706*t815 + 0.135*t141*t19*t910 + var1[2];
  p_output1[3]=ArcTan(t1282*t1812*t1829 - 1.*t1782*t1829*(t121*t927 - 1.*t39*t954),t1782*t1829*(t121*t19*t32 - 1.*t267*t39) - 1.*t1812*t1829*t891);
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

void p_rightPoint_constraint_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




