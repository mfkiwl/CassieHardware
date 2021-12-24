/*
 * Automatically Generated from Mathematica.
 * Mon 13 Sep 2021 16:09:01 GMT-07:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "position_rightFoot.hh"
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
  double t546;
  double t280;
  double t320;
  double t324;
  double t327;
  double t568;
  double t129;
  double t698;
  double t702;
  double t703;
  double t720;
  double t690;
  double t771;
  double t787;
  double t797;
  double t799;
  double t801;
  double t805;
  double t813;
  double t825;
  double t829;
  double t845;
  double t860;
  double t876;
  double t892;
  double t907;
  double t911;
  double t918;
  double t926;
  double t929;
  double t930;
  double t932;
  double t937;
  double t939;
  double t940;
  double t947;
  double t952;
  double t953;
  double t958;
  double t974;
  double t978;
  double t982;
  double t990;
  double t994;
  double t995;
  double t1000;
  double t1004;
  double t1008;
  double t1016;
  double t1029;
  double t1030;
  double t1031;
  double t1079;
  double t1080;
  double t1081;
  double t707;
  double t721;
  double t722;
  double t1102;
  double t1104;
  double t625;
  double t657;
  double t682;
  double t326;
  double t368;
  double t504;
  double t743;
  double t747;
  double t755;
  double t1112;
  double t1114;
  double t1115;
  double t809;
  double t817;
  double t821;
  double t1107;
  double t1108;
  double t1110;
  double t1124;
  double t1128;
  double t1132;
  double t848;
  double t849;
  double t850;
  double t922;
  double t927;
  double t928;
  double t1199;
  double t1200;
  double t1201;
  double t1210;
  double t1214;
  double t1222;
  double t934;
  double t935;
  double t936;
  double t954;
  double t962;
  double t970;
  double t1230;
  double t1238;
  double t1239;
  double t1245;
  double t1246;
  double t1247;
  double t987;
  double t988;
  double t989;
  double t1012;
  double t1024;
  double t1028;
  double t1250;
  double t1251;
  double t1253;
  double t1255;
  double t1257;
  double t1258;
  double t1074;
  double t1075;
  double t1076;
  double t1261;
  double t1262;
  double t1263;
  double t1292;
  double t1295;
  double t1307;
  double t1099;
  double t1100;
  double t1348;
  double t1352;
  double t1359;
  double t1367;
  double t1372;
  double t1376;
  double t1379;
  double t1380;
  double t1381;
  double t1404;
  double t1405;
  double t1406;
  double t1409;
  double t1410;
  double t1417;
  double t1421;
  double t1428;
  double t1432;
  double t1438;
  double t1439;
  double t1442;
  double t1450;
  double t1454;
  double t1459;
  double t1461;
  double t1465;
  double t1468;
  double t1492;
  double t1497;
  double t1498;
  double t1501;
  double t1502;
  double t1503;
  t546 = Sin(var1[14]);
  t280 = Cos(var1[15]);
  t320 = -1.*t280;
  t324 = 1. + t320;
  t327 = Sin(var1[15]);
  t568 = Sin(var1[4]);
  t129 = Cos(var1[4]);
  t698 = Cos(var1[16]);
  t702 = -1.*t698;
  t703 = 1. + t702;
  t720 = Sin(var1[16]);
  t690 = Cos(var1[14]);
  t771 = t280*t129;
  t787 = t546*t327*t568;
  t797 = t771 + t787;
  t799 = Cos(var1[17]);
  t801 = -1.*t799;
  t805 = 1. + t801;
  t813 = Sin(var1[17]);
  t825 = t690*t720*t568;
  t829 = t698*t797;
  t845 = t825 + t829;
  t860 = t690*t698*t568;
  t876 = -1.*t720*t797;
  t892 = t860 + t876;
  t907 = Cos(var1[18]);
  t911 = -1.*t907;
  t918 = 1. + t911;
  t926 = Sin(var1[18]);
  t929 = -1.*t813*t845;
  t930 = t799*t892;
  t932 = t929 + t930;
  t937 = t799*t845;
  t939 = t813*t892;
  t940 = t937 + t939;
  t947 = Cos(var1[19]);
  t952 = -1.*t947;
  t953 = 1. + t952;
  t958 = Sin(var1[19]);
  t974 = t926*t932;
  t978 = t907*t940;
  t982 = t974 + t978;
  t990 = t907*t932;
  t994 = -1.*t926*t940;
  t995 = t990 + t994;
  t1000 = Cos(var1[21]);
  t1004 = -1.*t1000;
  t1008 = 1. + t1004;
  t1016 = Sin(var1[21]);
  t1029 = -1.*t958*t982;
  t1030 = t947*t995;
  t1031 = t1029 + t1030;
  t1079 = t947*t982;
  t1080 = t958*t995;
  t1081 = t1079 + t1080;
  t707 = -0.09*t703;
  t721 = 0.049*t720;
  t722 = t707 + t721;
  t1102 = Cos(var1[3]);
  t1104 = Sin(var1[3]);
  t625 = -0.135*t324;
  t657 = 0.049*t327;
  t682 = t625 + t657;
  t326 = -0.049*t324;
  t368 = -0.135*t327;
  t504 = t326 + t368;
  t743 = -0.049*t703;
  t747 = -0.09*t720;
  t755 = t743 + t747;
  t1112 = t690*t1102;
  t1114 = -1.*t129*t546*t1104;
  t1115 = t1112 + t1114;
  t809 = -0.049*t805;
  t817 = -0.21*t813;
  t821 = t809 + t817;
  t1107 = -1.*t1102*t546;
  t1108 = -1.*t690*t129*t1104;
  t1110 = t1107 + t1108;
  t1124 = t327*t1115;
  t1128 = t280*t1104*t568;
  t1132 = t1124 + t1128;
  t848 = -0.21*t805;
  t849 = 0.049*t813;
  t850 = t848 + t849;
  t922 = -0.27068*t918;
  t927 = 0.00159*t926;
  t928 = t922 + t927;
  t1199 = t720*t1110;
  t1200 = t698*t1132;
  t1201 = t1199 + t1200;
  t1210 = t698*t1110;
  t1214 = -1.*t720*t1132;
  t1222 = t1210 + t1214;
  t934 = -0.00159*t918;
  t935 = -0.27068*t926;
  t936 = t934 + t935;
  t954 = 0.01841*t953;
  t962 = -0.70544*t958;
  t970 = t954 + t962;
  t1230 = -1.*t813*t1201;
  t1238 = t799*t1222;
  t1239 = t1230 + t1238;
  t1245 = t799*t1201;
  t1246 = t813*t1222;
  t1247 = t1245 + t1246;
  t987 = -0.70544*t953;
  t988 = -0.01841*t958;
  t989 = t987 + t988;
  t1012 = -1.11344*t1008;
  t1024 = 0.02159*t1016;
  t1028 = t1012 + t1024;
  t1250 = t926*t1239;
  t1251 = t907*t1247;
  t1253 = t1250 + t1251;
  t1255 = t907*t1239;
  t1257 = -1.*t926*t1247;
  t1258 = t1255 + t1257;
  t1074 = -0.02159*t1008;
  t1075 = -1.11344*t1016;
  t1076 = t1074 + t1075;
  t1261 = -1.*t958*t1253;
  t1262 = t947*t1258;
  t1263 = t1261 + t1262;
  t1292 = t947*t1253;
  t1295 = t958*t1258;
  t1307 = t1292 + t1295;
  t1099 = -1.*t690;
  t1100 = 1. + t1099;
  t1348 = t1102*t129*t546;
  t1352 = t690*t1104;
  t1359 = t1348 + t1352;
  t1367 = t690*t1102*t129;
  t1372 = -1.*t546*t1104;
  t1376 = t1367 + t1372;
  t1379 = t327*t1359;
  t1380 = -1.*t280*t1102*t568;
  t1381 = t1379 + t1380;
  t1404 = t720*t1376;
  t1405 = t698*t1381;
  t1406 = t1404 + t1405;
  t1409 = t698*t1376;
  t1410 = -1.*t720*t1381;
  t1417 = t1409 + t1410;
  t1421 = -1.*t813*t1406;
  t1428 = t799*t1417;
  t1432 = t1421 + t1428;
  t1438 = t799*t1406;
  t1439 = t813*t1417;
  t1442 = t1438 + t1439;
  t1450 = t926*t1432;
  t1454 = t907*t1442;
  t1459 = t1450 + t1454;
  t1461 = t907*t1432;
  t1465 = -1.*t926*t1442;
  t1468 = t1461 + t1465;
  t1492 = -1.*t958*t1459;
  t1497 = t947*t1468;
  t1498 = t1492 + t1497;
  t1501 = t947*t1459;
  t1502 = t958*t1468;
  t1503 = t1501 + t1502;
  p_output1[0]=t1028*t1031 + t1076*t1081 + 0.0306*(t1016*t1031 + t1000*t1081) - 1.13106*(t1000*t1031 - 1.*t1016*t1081) + t129*t504 + 0.135*t546*t568 - 0.1305*(-1.*t129*t327 + t280*t546*t568) + t546*t568*t682 + t568*t690*t722 + t755*t797 + t821*t845 + t850*t892 + t928*t932 + t936*t940 + t970*t982 + t989*t995 + var1[0];
  p_output1[1]=-0.135*t1100*t1102 + t1028*t1263 + t1076*t1307 + 0.0306*(t1016*t1263 + t1000*t1307) - 1.13106*(t1000*t1263 - 1.*t1016*t1307) - 0.135*t1104*t129*t546 + t1104*t504*t568 - 0.1305*(t1115*t280 - 1.*t1104*t327*t568) + t1115*t682 + t1110*t722 + t1132*t755 + t1201*t821 + t1222*t850 + t1239*t928 + t1247*t936 + t1253*t970 + t1258*t989 + var1[1];
  p_output1[2]=-0.135*t1100*t1104 + t1028*t1498 + t1076*t1503 + 0.0306*(t1016*t1498 + t1000*t1503) - 1.13106*(t1000*t1498 - 1.*t1016*t1503) + 0.135*t1102*t129*t546 - 1.*t1102*t504*t568 - 0.1305*(t1359*t280 + t1102*t327*t568) + t1359*t682 + t1376*t722 + t1381*t755 + t1406*t821 + t1417*t850 + t1432*t928 + t1442*t936 + t1459*t970 + t1468*t989 + var1[2];
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

void position_rightFoot_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




