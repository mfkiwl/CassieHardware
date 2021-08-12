/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:50 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "p_rightHeel_constraint.hh"
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
  double t6;
  double t79;
  double t106;
  double t135;
  double t158;
  double t245;
  double t305;
  double t314;
  double t358;
  double t63;
  double t430;
  double t439;
  double t464;
  double t471;
  double t476;
  double t478;
  double t485;
  double t503;
  double t533;
  double t536;
  double t607;
  double t612;
  double t615;
  double t648;
  double t656;
  double t665;
  double t674;
  double t682;
  double t687;
  double t690;
  double t734;
  double t743;
  double t747;
  double t776;
  double t780;
  double t784;
  double t801;
  double t844;
  double t847;
  double t848;
  double t862;
  double t865;
  double t868;
  double t871;
  double t875;
  double t885;
  double t892;
  double t896;
  double t901;
  double t906;
  double t919;
  double t933;
  double t934;
  double t951;
  double t955;
  double t967;
  double t978;
  double t995;
  double t1008;
  double t1010;
  double t1030;
  double t1031;
  double t1033;
  double t260;
  double t294;
  double t151;
  double t185;
  double t195;
  double t1066;
  double t326;
  double t329;
  double t345;
  double t354;
  double t1074;
  double t395;
  double t423;
  double t425;
  double t1089;
  double t1091;
  double t1095;
  double t480;
  double t487;
  double t490;
  double t1071;
  double t1075;
  double t1078;
  double t1109;
  double t1112;
  double t1118;
  double t573;
  double t586;
  double t590;
  double t673;
  double t676;
  double t680;
  double t1122;
  double t1126;
  double t1134;
  double t1170;
  double t1175;
  double t1176;
  double t714;
  double t722;
  double t730;
  double t788;
  double t807;
  double t834;
  double t1180;
  double t1182;
  double t1183;
  double t1191;
  double t1192;
  double t1195;
  double t857;
  double t860;
  double t861;
  double t891;
  double t894;
  double t895;
  double t1211;
  double t1216;
  double t1219;
  double t1225;
  double t1226;
  double t1231;
  double t908;
  double t910;
  double t914;
  double t974;
  double t991;
  double t994;
  double t1235;
  double t1237;
  double t1238;
  double t1242;
  double t1247;
  double t1249;
  double t1017;
  double t1018;
  double t1024;
  double t1256;
  double t1261;
  double t1262;
  double t1269;
  double t1270;
  double t1280;
  double t1321;
  double t1323;
  double t1327;
  double t1311;
  double t1313;
  double t1314;
  double t1334;
  double t1343;
  double t1344;
  double t1351;
  double t1355;
  double t1360;
  double t1379;
  double t1381;
  double t1384;
  double t1394;
  double t1397;
  double t1399;
  double t1406;
  double t1408;
  double t1410;
  double t1415;
  double t1419;
  double t1426;
  double t1432;
  double t1434;
  double t1442;
  double t1445;
  double t1448;
  double t1451;
  double t1462;
  double t1463;
  double t1469;
  double t1472;
  double t1475;
  double t1483;
  double t1492;
  double t1493;
  double t1497;
  t6 = Cos(var1[4]);
  t79 = Cos(var1[15]);
  t106 = -1.*t79;
  t135 = 1. + t106;
  t158 = Sin(var1[15]);
  t245 = Sin(var1[14]);
  t305 = Sin(var1[4]);
  t314 = Cos(var1[14]);
  t358 = Sin(var1[5]);
  t63 = Cos(var1[5]);
  t430 = t245*t305;
  t439 = -1.*t314*t6*t358;
  t464 = t430 + t439;
  t471 = Cos(var1[16]);
  t476 = -1.*t471;
  t478 = 1. + t476;
  t485 = Sin(var1[16]);
  t503 = t314*t305;
  t533 = t6*t245*t358;
  t536 = t503 + t533;
  t607 = t79*t6*t63;
  t612 = t158*t464;
  t615 = t607 + t612;
  t648 = Cos(var1[17]);
  t656 = -1.*t648;
  t665 = 1. + t656;
  t674 = Sin(var1[17]);
  t682 = t485*t536;
  t687 = t471*t615;
  t690 = t682 + t687;
  t734 = t471*t536;
  t743 = -1.*t485*t615;
  t747 = t734 + t743;
  t776 = Cos(var1[18]);
  t780 = -1.*t776;
  t784 = 1. + t780;
  t801 = Sin(var1[18]);
  t844 = -1.*t674*t690;
  t847 = t648*t747;
  t848 = t844 + t847;
  t862 = t648*t690;
  t865 = t674*t747;
  t868 = t862 + t865;
  t871 = Cos(var1[19]);
  t875 = -1.*t871;
  t885 = 1. + t875;
  t892 = Sin(var1[19]);
  t896 = t801*t848;
  t901 = t776*t868;
  t906 = t896 + t901;
  t919 = t776*t848;
  t933 = -1.*t801*t868;
  t934 = t919 + t933;
  t951 = Cos(var1[21]);
  t955 = -1.*t951;
  t967 = 1. + t955;
  t978 = Sin(var1[21]);
  t995 = -1.*t892*t906;
  t1008 = t871*t934;
  t1010 = t995 + t1008;
  t1030 = t871*t906;
  t1031 = t892*t934;
  t1033 = t1030 + t1031;
  t260 = 0.135*t245;
  t294 = 0. + t260;
  t151 = -0.049*t135;
  t185 = -0.135*t158;
  t195 = 0. + t151 + t185;
  t1066 = Sin(var1[3]);
  t326 = -1.*t314;
  t329 = 1. + t326;
  t345 = -0.135*t329;
  t354 = 0. + t345;
  t1074 = Cos(var1[3]);
  t395 = -0.135*t135;
  t423 = 0.049*t158;
  t425 = 0. + t395 + t423;
  t1089 = t1074*t63;
  t1091 = -1.*t1066*t305*t358;
  t1095 = t1089 + t1091;
  t480 = -0.09*t478;
  t487 = 0.049*t485;
  t490 = 0. + t480 + t487;
  t1071 = t63*t1066*t305;
  t1075 = t1074*t358;
  t1078 = t1071 + t1075;
  t1109 = -1.*t6*t245*t1066;
  t1112 = t314*t1095;
  t1118 = t1109 + t1112;
  t573 = -0.049*t478;
  t586 = -0.09*t485;
  t590 = 0. + t573 + t586;
  t673 = -0.049*t665;
  t676 = -0.21*t674;
  t680 = 0. + t673 + t676;
  t1122 = -1.*t314*t6*t1066;
  t1126 = -1.*t245*t1095;
  t1134 = t1122 + t1126;
  t1170 = t79*t1078;
  t1175 = t158*t1118;
  t1176 = t1170 + t1175;
  t714 = -0.21*t665;
  t722 = 0.049*t674;
  t730 = 0. + t714 + t722;
  t788 = -0.27068*t784;
  t807 = 0.00159*t801;
  t834 = 0. + t788 + t807;
  t1180 = t485*t1134;
  t1182 = t471*t1176;
  t1183 = t1180 + t1182;
  t1191 = t471*t1134;
  t1192 = -1.*t485*t1176;
  t1195 = t1191 + t1192;
  t857 = -0.00159*t784;
  t860 = -0.27068*t801;
  t861 = 0. + t857 + t860;
  t891 = 0.01841*t885;
  t894 = -0.70544*t892;
  t895 = 0. + t891 + t894;
  t1211 = -1.*t674*t1183;
  t1216 = t648*t1195;
  t1219 = t1211 + t1216;
  t1225 = t648*t1183;
  t1226 = t674*t1195;
  t1231 = t1225 + t1226;
  t908 = -0.70544*t885;
  t910 = -0.01841*t892;
  t914 = 0. + t908 + t910;
  t974 = -1.11344*t967;
  t991 = 0.02159*t978;
  t994 = 0. + t974 + t991;
  t1235 = t801*t1219;
  t1237 = t776*t1231;
  t1238 = t1235 + t1237;
  t1242 = t776*t1219;
  t1247 = -1.*t801*t1231;
  t1249 = t1242 + t1247;
  t1017 = -0.02159*t967;
  t1018 = -1.11344*t978;
  t1024 = 0. + t1017 + t1018;
  t1256 = -1.*t892*t1238;
  t1261 = t871*t1249;
  t1262 = t1256 + t1261;
  t1269 = t871*t1238;
  t1270 = t892*t1249;
  t1280 = t1269 + t1270;
  t1321 = t63*t1066;
  t1323 = t1074*t305*t358;
  t1327 = t1321 + t1323;
  t1311 = -1.*t1074*t63*t305;
  t1313 = t1066*t358;
  t1314 = t1311 + t1313;
  t1334 = t1074*t6*t245;
  t1343 = t314*t1327;
  t1344 = t1334 + t1343;
  t1351 = t314*t1074*t6;
  t1355 = -1.*t245*t1327;
  t1360 = t1351 + t1355;
  t1379 = t79*t1314;
  t1381 = t158*t1344;
  t1384 = t1379 + t1381;
  t1394 = t485*t1360;
  t1397 = t471*t1384;
  t1399 = t1394 + t1397;
  t1406 = t471*t1360;
  t1408 = -1.*t485*t1384;
  t1410 = t1406 + t1408;
  t1415 = -1.*t674*t1399;
  t1419 = t648*t1410;
  t1426 = t1415 + t1419;
  t1432 = t648*t1399;
  t1434 = t674*t1410;
  t1442 = t1432 + t1434;
  t1445 = t801*t1426;
  t1448 = t776*t1442;
  t1451 = t1445 + t1448;
  t1462 = t776*t1426;
  t1463 = -1.*t801*t1442;
  t1469 = t1462 + t1463;
  t1472 = -1.*t892*t1451;
  t1475 = t871*t1469;
  t1483 = t1472 + t1475;
  t1492 = t871*t1451;
  t1493 = t892*t1469;
  t1497 = t1492 + t1493;
  p_output1[0]=0. + t1024*t1033 + t294*t305 + t425*t464 + t490*t536 - 1.*t354*t358*t6 + t590*t615 + t195*t6*t63 + t680*t690 + t730*t747 - 0.1305*(-1.*t158*t6*t63 + t464*t79) + t834*t848 + t861*t868 + t895*t906 + t914*t934 - 0.014395*(t1033*t951 + t1010*t978) - 1.184683*(t1010*t951 - 1.*t1033*t978) + t1010*t994 + var1[0];
  p_output1[1]=0. + t1024*t1280 + t1078*t195 + t1095*t354 + t1118*t425 + t1134*t490 + t1176*t590 - 1.*t1066*t294*t6 + t1183*t680 + t1195*t730 - 0.1305*(-1.*t1078*t158 + t1118*t79) + t1219*t834 + t1231*t861 + t1238*t895 + t1249*t914 - 0.014395*(t1280*t951 + t1262*t978) - 1.184683*(t1262*t951 - 1.*t1280*t978) + t1262*t994 + var1[1];
  p_output1[2]=0. + t1024*t1497 + t1314*t195 + t1327*t354 + t1344*t425 + t1360*t490 + t1384*t590 + t1074*t294*t6 + t1399*t680 + t1410*t730 - 0.1305*(-1.*t1314*t158 + t1344*t79) + t1426*t834 + t1442*t861 + t1451*t895 + t1469*t914 - 0.014395*(t1497*t951 + t1483*t978) - 1.184683*(t1483*t951 - 1.*t1497*t978) + t1483*t994 + var1[2];
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

void p_rightHeel_constraint_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




