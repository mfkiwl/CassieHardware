/*
 * Automatically Generated from Mathematica.
 * Thu 26 Aug 2021 14:19:37 GMT-07:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "leftLegPitch.hh"
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
  double t3;
  double t140;
  double t234;
  double t246;
  double t251;
  double t271;
  double t369;
  double t480;
  double t44;
  double t517;
  double t525;
  double t602;
  double t662;
  double t944;
  double t981;
  double t990;
  double t1028;
  double t899;
  double t909;
  double t939;
  double t1062;
  double t1065;
  double t1066;
  double t1080;
  double t1084;
  double t1121;
  double t1243;
  double t1382;
  double t1386;
  double t1248;
  double t1301;
  double t1309;
  double t1358;
  double t1377;
  double t1378;
  double t1391;
  double t1393;
  double t1397;
  double t1408;
  double t1416;
  double t1428;
  double t1435;
  double t1466;
  double t1467;
  double t1471;
  double t1476;
  double t1477;
  double t1478;
  double t1480;
  double t1483;
  double t1484;
  double t1487;
  double t1504;
  double t1507;
  double t1508;
  double t657;
  double t672;
  double t747;
  double t768;
  double t770;
  double t780;
  double t997;
  double t1030;
  double t1036;
  double t1069;
  double t1074;
  double t1076;
  double t1242;
  double t1244;
  double t1247;
  double t1564;
  double t1568;
  double t1578;
  double t1343;
  double t1354;
  double t1357;
  double t1399;
  double t1409;
  double t1414;
  double t1602;
  double t1605;
  double t1606;
  double t1613;
  double t1618;
  double t1642;
  double t1451;
  double t1457;
  double t1459;
  double t1479;
  double t1481;
  double t1482;
  double t1672;
  double t1733;
  double t1741;
  double t1758;
  double t1759;
  double t1813;
  double t1491;
  double t1496;
  double t1500;
  double t1840;
  double t1853;
  double t1878;
  double t1909;
  double t1910;
  double t1933;
  t3 = Cos(var1[3]);
  t140 = Cos(var1[6]);
  t234 = Sin(var1[3]);
  t246 = t140*t234;
  t251 = Cos(var1[4]);
  t271 = Sin(var1[6]);
  t369 = t3*t251*t271;
  t480 = t246 + t369;
  t44 = Sin(var1[4]);
  t517 = Cos(var1[7]);
  t525 = -1.*t517;
  t602 = 1. + t525;
  t662 = Sin(var1[7]);
  t944 = Cos(var1[8]);
  t981 = -1.*t944;
  t990 = 1. + t981;
  t1028 = Sin(var1[8]);
  t899 = -1.*t3*t517*t44;
  t909 = t480*t662;
  t939 = t899 + t909;
  t1062 = t3*t251*t140;
  t1065 = -1.*t234*t271;
  t1066 = t1062 + t1065;
  t1080 = Cos(var1[9]);
  t1084 = -1.*t1080;
  t1121 = 1. + t1084;
  t1243 = Sin(var1[9]);
  t1382 = -1.*var1[9];
  t1386 = 0.226893 + t1382;
  t1248 = t944*t939;
  t1301 = t1066*t1028;
  t1309 = t1248 + t1301;
  t1358 = t944*t1066;
  t1377 = -1.*t939*t1028;
  t1378 = t1358 + t1377;
  t1391 = Cos(t1386);
  t1393 = -1.*t1391;
  t1397 = 1. + t1393;
  t1408 = Sin(t1386);
  t1416 = -1.*t1243*t1309;
  t1428 = t1080*t1378;
  t1435 = t1416 + t1428;
  t1466 = t1080*t1309;
  t1467 = t1243*t1378;
  t1471 = t1466 + t1467;
  t1476 = Cos(var1[13]);
  t1477 = -1.*t1476;
  t1478 = 1. + t1477;
  t1480 = Sin(var1[13]);
  t1483 = t1408*t1435;
  t1484 = t1391*t1471;
  t1487 = t1483 + t1484;
  t1504 = t1391*t1435;
  t1507 = -1.*t1408*t1471;
  t1508 = t1504 + t1507;
  t657 = 0.135*t602;
  t672 = 0.049*t662;
  t747 = t657 + t672;
  t768 = -0.049*t602;
  t770 = 0.135*t662;
  t780 = t768 + t770;
  t997 = -0.049*t990;
  t1030 = -0.09*t1028;
  t1036 = t997 + t1030;
  t1069 = -0.09*t990;
  t1074 = 0.049*t1028;
  t1076 = t1069 + t1074;
  t1242 = -0.049*t1121;
  t1244 = -0.21*t1243;
  t1247 = t1242 + t1244;
  t1564 = t251*t517;
  t1568 = t44*t271*t662;
  t1578 = t1564 + t1568;
  t1343 = -0.21*t1121;
  t1354 = 0.049*t1243;
  t1357 = t1343 + t1354;
  t1399 = -0.70544*t1397;
  t1409 = -0.01841*t1408;
  t1414 = t1399 + t1409;
  t1602 = t944*t1578;
  t1605 = t140*t44*t1028;
  t1606 = t1602 + t1605;
  t1613 = t140*t944*t44;
  t1618 = -1.*t1578*t1028;
  t1642 = t1613 + t1618;
  t1451 = 0.01841*t1397;
  t1457 = -0.70544*t1408;
  t1459 = t1451 + t1457;
  t1479 = -0.02159*t1478;
  t1481 = -1.11344*t1480;
  t1482 = t1479 + t1481;
  t1672 = -1.*t1243*t1606;
  t1733 = t1080*t1642;
  t1741 = t1672 + t1733;
  t1758 = t1080*t1606;
  t1759 = t1243*t1642;
  t1813 = t1758 + t1759;
  t1491 = -1.11344*t1478;
  t1496 = 0.02159*t1480;
  t1500 = t1491 + t1496;
  t1840 = t1408*t1741;
  t1853 = t1391*t1813;
  t1878 = t1840 + t1853;
  t1909 = t1391*t1741;
  t1910 = -1.*t1408*t1813;
  t1933 = t1909 + t1910;
  p_output1[0]=ArcTan(-1.*t1066*t1076 - 1.*t1247*t1309 - 1.*t1357*t1378 - 1.*t1414*t1435 - 1.*t1459*t1471 - 1.*t1482*t1487 - 1.*t1500*t1508 + 1.11344*(-1.*t1480*t1487 + t1476*t1508) + 0.02159*(t1476*t1487 + t1480*t1508) + 0.049*t3*t44 + 0.135*t480 - 0.1305*(t480*t517 + t3*t44*t662) - 1.*t480*t747 + t3*t44*t780 - 1.*t1036*t939,t1036*t1578 + t1247*t1606 + t1357*t1642 + t1414*t1741 + t1459*t1813 + t1482*t1878 + t1500*t1933 - 1.11344*(-1.*t1480*t1878 + t1476*t1933) - 0.02159*(t1476*t1878 + t1480*t1933) + 0.049*t251 + t1076*t140*t44 - 0.135*t271*t44 + 0.1305*(t271*t44*t517 - 1.*t251*t662) + t271*t44*t747 + t251*t780);
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

void leftLegPitch_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




