/*
 * Automatically Generated from Mathematica.
 * Thu 26 Aug 2021 14:19:37 GMT-07:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "rightLegPitch.hh"
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
  double t50;
  double t179;
  double t246;
  double t267;
  double t281;
  double t343;
  double t369;
  double t402;
  double t685;
  double t759;
  double t799;
  double t845;
  double t1358;
  double t909;
  double t995;
  double t1003;
  double t1049;
  double t1129;
  double t1248;
  double t1301;
  double t1484;
  double t1489;
  double t1504;
  double t1522;
  double t1523;
  double t1526;
  double t1537;
  double t1605;
  double t1611;
  double t1551;
  double t1552;
  double t1557;
  double t1568;
  double t1586;
  double t1589;
  double t1613;
  double t1657;
  double t1664;
  double t1733;
  double t1759;
  double t1773;
  double t1822;
  double t1880;
  double t1909;
  double t1937;
  double t1993;
  double t2020;
  double t2041;
  double t2078;
  double t2099;
  double t2114;
  double t2133;
  double t2252;
  double t2253;
  double t2274;
  double t1386;
  double t1428;
  double t1446;
  double t830;
  double t884;
  double t889;
  double t1006;
  double t1062;
  double t1077;
  double t1467;
  double t1474;
  double t1483;
  double t1532;
  double t1546;
  double t1547;
  double t2452;
  double t2460;
  double t2464;
  double t1559;
  double t1562;
  double t1564;
  double t1678;
  double t1751;
  double t1758;
  double t2477;
  double t2478;
  double t2482;
  double t2514;
  double t2517;
  double t2518;
  double t1853;
  double t1862;
  double t1879;
  double t2045;
  double t2079;
  double t2089;
  double t2564;
  double t2572;
  double t2581;
  double t2619;
  double t2626;
  double t2645;
  double t2142;
  double t2203;
  double t2241;
  double t2665;
  double t2683;
  double t2689;
  double t2740;
  double t2741;
  double t2764;
  t50 = Cos(var1[3]);
  t179 = Cos(var1[4]);
  t246 = Sin(var1[14]);
  t267 = t50*t179*t246;
  t281 = Cos(var1[14]);
  t343 = Sin(var1[3]);
  t369 = t281*t343;
  t402 = t267 + t369;
  t685 = Cos(var1[15]);
  t759 = -1.*t685;
  t799 = 1. + t759;
  t845 = Sin(var1[15]);
  t1358 = Sin(var1[4]);
  t909 = Cos(var1[16]);
  t995 = -1.*t909;
  t1003 = 1. + t995;
  t1049 = Sin(var1[16]);
  t1129 = t281*t50*t179;
  t1248 = -1.*t246*t343;
  t1301 = t1129 + t1248;
  t1484 = t845*t402;
  t1489 = -1.*t685*t50*t1358;
  t1504 = t1484 + t1489;
  t1522 = Cos(var1[17]);
  t1523 = -1.*t1522;
  t1526 = 1. + t1523;
  t1537 = Sin(var1[17]);
  t1605 = -1.*var1[17];
  t1611 = 0.226893 + t1605;
  t1551 = t1049*t1301;
  t1552 = t909*t1504;
  t1557 = t1551 + t1552;
  t1568 = t909*t1301;
  t1586 = -1.*t1049*t1504;
  t1589 = t1568 + t1586;
  t1613 = Cos(t1611);
  t1657 = -1.*t1613;
  t1664 = 1. + t1657;
  t1733 = Sin(t1611);
  t1759 = -1.*t1537*t1557;
  t1773 = t1522*t1589;
  t1822 = t1759 + t1773;
  t1880 = t1522*t1557;
  t1909 = t1537*t1589;
  t1937 = t1880 + t1909;
  t1993 = Cos(var1[21]);
  t2020 = -1.*t1993;
  t2041 = 1. + t2020;
  t2078 = Sin(var1[21]);
  t2099 = t1733*t1822;
  t2114 = t1613*t1937;
  t2133 = t2099 + t2114;
  t2252 = t1613*t1822;
  t2253 = -1.*t1733*t1937;
  t2274 = t2252 + t2253;
  t1386 = -0.049*t799;
  t1428 = -0.135*t845;
  t1446 = t1386 + t1428;
  t830 = -0.135*t799;
  t884 = 0.049*t845;
  t889 = t830 + t884;
  t1006 = -0.09*t1003;
  t1062 = 0.049*t1049;
  t1077 = t1006 + t1062;
  t1467 = -0.049*t1003;
  t1474 = -0.09*t1049;
  t1483 = t1467 + t1474;
  t1532 = -0.049*t1526;
  t1546 = -0.21*t1537;
  t1547 = t1532 + t1546;
  t2452 = t685*t179;
  t2460 = t246*t845*t1358;
  t2464 = t2452 + t2460;
  t1559 = -0.21*t1526;
  t1562 = 0.049*t1537;
  t1564 = t1559 + t1562;
  t1678 = -0.70544*t1664;
  t1751 = -0.01841*t1733;
  t1758 = t1678 + t1751;
  t2477 = t281*t1049*t1358;
  t2478 = t909*t2464;
  t2482 = t2477 + t2478;
  t2514 = t281*t909*t1358;
  t2517 = -1.*t1049*t2464;
  t2518 = t2514 + t2517;
  t1853 = 0.01841*t1664;
  t1862 = -0.70544*t1733;
  t1879 = t1853 + t1862;
  t2045 = -0.02159*t2041;
  t2079 = -1.11344*t2078;
  t2089 = t2045 + t2079;
  t2564 = -1.*t1537*t2482;
  t2572 = t1522*t2518;
  t2581 = t2564 + t2572;
  t2619 = t1522*t2482;
  t2626 = t1537*t2518;
  t2645 = t2619 + t2626;
  t2142 = -1.11344*t2041;
  t2203 = 0.02159*t2078;
  t2241 = t2142 + t2203;
  t2665 = t1733*t2581;
  t2683 = t1613*t2645;
  t2689 = t2665 + t2683;
  t2740 = t1613*t2581;
  t2741 = -1.*t1733*t2645;
  t2764 = t2740 + t2741;
  p_output1[0]=ArcTan(-1.*t1077*t1301 - 1.*t1483*t1504 - 1.*t1547*t1557 - 1.*t1564*t1589 - 1.*t1758*t1822 - 1.*t1879*t1937 - 1.*t2089*t2133 - 1.*t2241*t2274 + 1.11344*(-1.*t2078*t2133 + t1993*t2274) + 0.02159*(t1993*t2133 + t2078*t2274) - 0.135*t402 + 0.049*t1358*t50 + t1358*t1446*t50 + 0.1305*(t402*t685 + t1358*t50*t845) - 1.*t402*t889,0.049*t179 + t1446*t179 + 0.135*t1358*t246 + t1483*t2464 + t1547*t2482 + t1564*t2518 + t1758*t2581 + t1879*t2645 + t2089*t2689 + t2241*t2764 - 1.11344*(-1.*t2078*t2689 + t1993*t2764) - 0.02159*(t1993*t2689 + t2078*t2764) + t1077*t1358*t281 - 0.1305*(t1358*t246*t685 - 1.*t179*t845) + t1358*t246*t889);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void rightLegPitch_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




