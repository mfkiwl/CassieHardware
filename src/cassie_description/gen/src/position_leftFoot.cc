/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:02 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "position_leftFoot.hh"
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
  double t21;
  double t184;
  double t218;
  double t239;
  double t242;
  double t293;
  double t533;
  double t814;
  double t833;
  double t854;
  double t862;
  double t866;
  double t868;
  double t870;
  double t919;
  double t928;
  double t939;
  double t955;
  double t969;
  double t978;
  double t995;
  double t1088;
  double t1089;
  double t1090;
  double t1165;
  double t1229;
  double t1237;
  double t1249;
  double t1253;
  double t1254;
  double t1273;
  double t1279;
  double t1280;
  double t1281;
  double t1313;
  double t1314;
  double t1315;
  double t1344;
  double t41;
  double t73;
  double t355;
  double t392;
  double t410;
  double t490;
  double t593;
  double t705;
  double t268;
  double t299;
  double t319;
  double t1432;
  double t732;
  double t749;
  double t756;
  double t860;
  double t863;
  double t864;
  double t1448;
  double t1449;
  double t1465;
  double t1483;
  double t1489;
  double t1495;
  double t899;
  double t900;
  double t908;
  double t992;
  double t1021;
  double t1056;
  double t1504;
  double t1509;
  double t1516;
  double t1525;
  double t1528;
  double t1529;
  double t1118;
  double t1119;
  double t1135;
  double t1269;
  double t1274;
  double t1277;
  double t1532;
  double t1533;
  double t1540;
  double t1556;
  double t1562;
  double t1571;
  double t1303;
  double t1310;
  double t1311;
  double t1581;
  double t1588;
  double t1596;
  double t1613;
  double t1614;
  double t1618;
  double t1384;
  double t1393;
  double t1403;
  double t1436;
  double t1437;
  double t1445;
  double t1661;
  double t1663;
  double t1667;
  double t1671;
  double t1678;
  double t1679;
  double t1682;
  double t1683;
  double t1684;
  double t1687;
  double t1688;
  double t1690;
  double t1692;
  double t1693;
  double t1694;
  double t1696;
  double t1698;
  double t1700;
  double t1707;
  double t1709;
  double t1710;
  double t1714;
  double t1720;
  double t1722;
  t21 = Cos(var1[7]);
  t184 = Cos(var1[8]);
  t218 = Cos(var1[9]);
  t239 = -1.*t218;
  t242 = 1. + t239;
  t293 = Sin(var1[9]);
  t533 = Sin(var1[8]);
  t814 = Cos(var1[10]);
  t833 = -1.*t814;
  t854 = 1. + t833;
  t862 = Sin(var1[10]);
  t866 = -1.*t21*t184*t293;
  t868 = -1.*t218*t21*t533;
  t870 = t866 + t868;
  t919 = t218*t21*t184;
  t928 = -1.*t21*t293*t533;
  t939 = t919 + t928;
  t955 = Cos(var1[11]);
  t969 = -1.*t955;
  t978 = 1. + t969;
  t995 = Sin(var1[11]);
  t1088 = t862*t870;
  t1089 = t814*t939;
  t1090 = t1088 + t1089;
  t1165 = t814*t870;
  t1229 = -1.*t862*t939;
  t1237 = t1165 + t1229;
  t1249 = Cos(var1[13]);
  t1253 = -1.*t1249;
  t1254 = 1. + t1253;
  t1273 = Sin(var1[13]);
  t1279 = -1.*t995*t1090;
  t1280 = t955*t1237;
  t1281 = t1279 + t1280;
  t1313 = t955*t1090;
  t1314 = t995*t1237;
  t1315 = t1313 + t1314;
  t1344 = Cos(var1[6]);
  t41 = -1.*t21;
  t73 = 1. + t41;
  t355 = Sin(var1[7]);
  t392 = -1.*t184;
  t410 = 1. + t392;
  t490 = -0.049*t410;
  t593 = -0.09*t533;
  t705 = t490 + t593;
  t268 = -0.049*t242;
  t299 = -0.21*t293;
  t319 = t268 + t299;
  t1432 = Sin(var1[6]);
  t732 = -0.21*t242;
  t749 = 0.049*t293;
  t756 = t732 + t749;
  t860 = -0.27068*t854;
  t863 = 0.00159*t862;
  t864 = t860 + t863;
  t1448 = t1344*t184*t355;
  t1449 = -1.*t1432*t533;
  t1465 = t1448 + t1449;
  t1483 = -1.*t184*t1432;
  t1489 = -1.*t1344*t355*t533;
  t1495 = t1483 + t1489;
  t899 = -0.00159*t854;
  t900 = -0.27068*t862;
  t908 = t899 + t900;
  t992 = 0.01841*t978;
  t1021 = -0.70544*t995;
  t1056 = t992 + t1021;
  t1504 = -1.*t293*t1465;
  t1509 = t218*t1495;
  t1516 = t1504 + t1509;
  t1525 = t218*t1465;
  t1528 = t293*t1495;
  t1529 = t1525 + t1528;
  t1118 = -0.70544*t978;
  t1119 = -0.01841*t995;
  t1135 = t1118 + t1119;
  t1269 = -1.11344*t1254;
  t1274 = 0.02159*t1273;
  t1277 = t1269 + t1274;
  t1532 = t862*t1516;
  t1533 = t814*t1529;
  t1540 = t1532 + t1533;
  t1556 = t814*t1516;
  t1562 = -1.*t862*t1529;
  t1571 = t1556 + t1562;
  t1303 = -0.02159*t1254;
  t1310 = -1.11344*t1273;
  t1311 = t1303 + t1310;
  t1581 = -1.*t995*t1540;
  t1588 = t955*t1571;
  t1596 = t1581 + t1588;
  t1613 = t955*t1540;
  t1614 = t995*t1571;
  t1618 = t1613 + t1614;
  t1384 = 0.135*t73;
  t1393 = 0.049*t355;
  t1403 = t1384 + t1393;
  t1436 = -0.09*t410;
  t1437 = 0.049*t533;
  t1445 = t1436 + t1437;
  t1661 = t184*t1432*t355;
  t1663 = t1344*t533;
  t1667 = t1661 + t1663;
  t1671 = t1344*t184;
  t1678 = -1.*t1432*t355*t533;
  t1679 = t1671 + t1678;
  t1682 = -1.*t293*t1667;
  t1683 = t218*t1679;
  t1684 = t1682 + t1683;
  t1687 = t218*t1667;
  t1688 = t293*t1679;
  t1690 = t1687 + t1688;
  t1692 = t862*t1684;
  t1693 = t814*t1690;
  t1694 = t1692 + t1693;
  t1696 = t814*t1684;
  t1698 = -1.*t862*t1690;
  t1700 = t1696 + t1698;
  t1707 = -1.*t995*t1694;
  t1709 = t955*t1700;
  t1710 = t1707 + t1709;
  t1714 = t955*t1694;
  t1720 = t995*t1700;
  t1722 = t1714 + t1720;
  p_output1[0]=t1056*t1090 + t1135*t1237 + t1277*t1281 + t1311*t1315 + 0.0306*(t1273*t1281 + t1249*t1315) - 1.13106*(t1249*t1281 - 1.*t1273*t1315) + t184*t21*t319 + 0.0045*t355 + t21*t705 - 0.049*t73 - 1.*t21*t533*t756 + t864*t870 + t908*t939;
  p_output1[1]=0.135*(1. - 1.*t1344) + t1344*t1403 - 1.*t1432*t1445 + t1056*t1540 + t1135*t1571 + t1277*t1596 + t1311*t1618 + 0.0306*(t1273*t1596 + t1249*t1618) - 1.13106*(t1249*t1596 - 1.*t1273*t1618) + 0.1305*t1344*t21 + t1465*t319 + t1344*t355*t705 + t1495*t756 + t1516*t864 + t1529*t908;
  p_output1[2]=-0.135*t1432 + t1403*t1432 + t1344*t1445 + t1056*t1694 + t1135*t1700 + t1277*t1710 + t1311*t1722 + 0.0306*(t1273*t1710 + t1249*t1722) - 1.13106*(t1249*t1710 - 1.*t1273*t1722) + 0.1305*t1432*t21 + t1667*t319 + t1432*t355*t705 + t1679*t756 + t1684*t864 + t1690*t908;
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

void position_leftFoot_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




