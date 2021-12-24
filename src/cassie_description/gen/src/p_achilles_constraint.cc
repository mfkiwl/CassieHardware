/*
 * Automatically Generated from Mathematica.
 * Thu 26 Aug 2021 14:18:48 GMT-07:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "p_achilles_constraint.hh"
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
  double t548;
  double t191;
  double t571;
  double t575;
  double t590;
  double t601;
  double t748;
  double t749;
  double t757;
  double t771;
  double t793;
  double t794;
  double t820;
  double t741;
  double t742;
  double t745;
  double t849;
  double t854;
  double t858;
  double t905;
  double t929;
  double t930;
  double t945;
  double t934;
  double t938;
  double t939;
  double t968;
  double t1052;
  double t943;
  double t1104;
  double t498;
  double t514;
  double t594;
  double t609;
  double t642;
  double t648;
  double t663;
  double t724;
  double t764;
  double t774;
  double t786;
  double t837;
  double t842;
  double t844;
  double t873;
  double t891;
  double t1135;
  double t1139;
  double t1142;
  double t971;
  double t1144;
  double t1147;
  double t1150;
  double t1003;
  double t1011;
  double t1012;
  double t1152;
  double t1168;
  double t1016;
  double t1017;
  double t1019;
  double t1039;
  double t1043;
  double t1056;
  double t1057;
  double t1062;
  double t1063;
  double t1069;
  double t1070;
  double t1085;
  double t1091;
  double t1092;
  double t1095;
  double t1096;
  double t1099;
  double t1100;
  double t1105;
  double t1106;
  double t1108;
  double t1110;
  double t1111;
  double t1114;
  double t1282;
  double t1265;
  double t1284;
  double t1287;
  double t1288;
  double t1291;
  double t1361;
  double t1362;
  double t1363;
  double t1366;
  double t1409;
  double t1413;
  double t1422;
  double t1344;
  double t1351;
  double t1360;
  double t1433;
  double t1440;
  double t1443;
  double t1487;
  double t1502;
  double t1547;
  double t1629;
  double t1653;
  double t1589;
  double t1612;
  double t1613;
  double t1824;
  double t1619;
  double t2483;
  double t1276;
  double t1277;
  double t1290;
  double t1292;
  double t1313;
  double t1319;
  double t1324;
  double t1336;
  double t1364;
  double t1370;
  double t1372;
  double t1423;
  double t1426;
  double t1427;
  double t1445;
  double t1474;
  double t2562;
  double t2570;
  double t2576;
  double t1655;
  double t2580;
  double t2581;
  double t2583;
  double t1767;
  double t1801;
  double t1841;
  double t1887;
  double t1894;
  double t1926;
  double t1933;
  double t2155;
  double t2293;
  double t2585;
  double t2587;
  double t2393;
  double t2400;
  double t2401;
  double t2413;
  double t2416;
  double t2440;
  double t2465;
  double t2469;
  double t2475;
  double t2476;
  double t2478;
  double t2482;
  double t2486;
  double t2487;
  double t2488;
  double t2492;
  double t2494;
  double t2503;
  t548 = Sin(var1[9]);
  t191 = Cos(var1[9]);
  t571 = Cos(var1[10]);
  t575 = -1.*t571;
  t590 = 1. + t575;
  t601 = Sin(var1[10]);
  t748 = Cos(var1[11]);
  t749 = -1.*t748;
  t757 = 1. + t749;
  t771 = Sin(var1[11]);
  t793 = t191*t571;
  t794 = -1.*t548*t601;
  t820 = t793 + t794;
  t741 = t571*t548;
  t742 = t191*t601;
  t745 = t741 + t742;
  t849 = Cos(var1[12]);
  t854 = -1.*t849;
  t858 = 1. + t854;
  t905 = t748*t820;
  t929 = -1.*t745*t771;
  t930 = t905 + t929;
  t945 = Sin(var1[12]);
  t934 = t748*t745;
  t938 = t820*t771;
  t939 = t934 + t938;
  t968 = -0.996943*t945;
  t1052 = -0.0004284921280000001*t858;
  t943 = 0.0004284921280000001*t858;
  t1104 = 0.996943*t945;
  t498 = -1.*t191;
  t514 = 1. + t498;
  t594 = -0.00159*t590;
  t609 = -0.27068*t601;
  t642 = t594 + t609;
  t648 = -0.27068*t590;
  t663 = 0.00159*t601;
  t724 = t648 + t663;
  t764 = 0.01841*t757;
  t774 = -0.70544*t771;
  t786 = t764 + t774;
  t837 = -0.70544*t757;
  t842 = -0.01841*t771;
  t844 = t837 + t842;
  t873 = -0.999969365345*t858;
  t891 = 1. + t873;
  t1135 = -1.*t571*t548;
  t1139 = -1.*t191*t601;
  t1142 = t1135 + t1139;
  t971 = t943 + t968;
  t1144 = t748*t1142;
  t1147 = -1.*t820*t771;
  t1150 = t1144 + t1147;
  t1003 = 0.005481192614*t858;
  t1011 = -0.077936*t945;
  t1012 = t1003 + t1011;
  t1152 = t1142*t771;
  t1168 = t905 + t1152;
  t1016 = 0.07769774964800001*t858;
  t1017 = 0.005498*t945;
  t1019 = t1016 + t1017;
  t1039 = -1.2096424700126054e-9*var1[12];
  t1043 = -0.6934128581485427*t858;
  t1056 = t1052 + t968;
  t1057 = -0.021877537552*t1056;
  t1062 = -0.005481192614*t858;
  t1063 = 0.077936*t945;
  t1069 = t1062 + t1063;
  t1070 = 0.005534467322*t1069;
  t1085 = t1039 + t1043 + t1057 + t1070;
  t1091 = -1.7147089040178687e-8*var1[12];
  t1092 = -0.021744644052735636*t858;
  t1095 = -0.07769774964800001*t858;
  t1096 = -0.005498*t945;
  t1099 = t1095 + t1096;
  t1100 = 0.005534467322*t1099;
  t1105 = t1052 + t1104;
  t1106 = -0.6934341012630001*t1105;
  t1108 = t1091 + t1092 + t1100 + t1106;
  t1110 = -0.993925573253*t858;
  t1111 = 1. + t1110;
  t1114 = t943 + t1104;
  t1282 = Sin(var1[17]);
  t1265 = Cos(var1[17]);
  t1284 = Cos(var1[18]);
  t1287 = -1.*t1284;
  t1288 = 1. + t1287;
  t1291 = Sin(var1[18]);
  t1361 = Cos(var1[19]);
  t1362 = -1.*t1361;
  t1363 = 1. + t1362;
  t1366 = Sin(var1[19]);
  t1409 = t1265*t1284;
  t1413 = -1.*t1282*t1291;
  t1422 = t1409 + t1413;
  t1344 = t1284*t1282;
  t1351 = t1265*t1291;
  t1360 = t1344 + t1351;
  t1433 = Cos(var1[20]);
  t1440 = -1.*t1433;
  t1443 = 1. + t1440;
  t1487 = t1361*t1422;
  t1502 = -1.*t1360*t1366;
  t1547 = t1487 + t1502;
  t1629 = Sin(var1[20]);
  t1653 = -0.996943*t1629;
  t1589 = t1361*t1360;
  t1612 = t1422*t1366;
  t1613 = t1589 + t1612;
  t1824 = -0.0004284921280000001*t1443;
  t1619 = 0.0004284921280000001*t1443;
  t2483 = 0.996943*t1629;
  t1276 = -1.*t1265;
  t1277 = 1. + t1276;
  t1290 = -0.00159*t1288;
  t1292 = -0.27068*t1291;
  t1313 = t1290 + t1292;
  t1319 = -0.27068*t1288;
  t1324 = 0.00159*t1291;
  t1336 = t1319 + t1324;
  t1364 = 0.01841*t1363;
  t1370 = -0.70544*t1366;
  t1372 = t1364 + t1370;
  t1423 = -0.70544*t1363;
  t1426 = -0.01841*t1366;
  t1427 = t1423 + t1426;
  t1445 = -0.999969365345*t1443;
  t1474 = 1. + t1445;
  t2562 = -1.*t1284*t1282;
  t2570 = -1.*t1265*t1291;
  t2576 = t2562 + t2570;
  t1655 = t1619 + t1653;
  t2580 = t1361*t2576;
  t2581 = -1.*t1422*t1366;
  t2583 = t2580 + t2581;
  t1767 = -1.2096424700126054e-9*var1[20];
  t1801 = -0.6934128581485427*t1443;
  t1841 = t1824 + t1653;
  t1887 = -0.021877537552*t1841;
  t1894 = 0.005481192614*t1443;
  t1926 = -0.077936*t1629;
  t1933 = t1894 + t1926;
  t2155 = -0.005534467322*t1933;
  t2293 = t1767 + t1801 + t1887 + t2155;
  t2585 = t2576*t1366;
  t2587 = t1487 + t2585;
  t2393 = -0.07769774964800001*t1443;
  t2400 = -0.005498*t1629;
  t2401 = t2393 + t2400;
  t2413 = -0.005481192614*t1443;
  t2416 = 0.077936*t1629;
  t2440 = t2413 + t2416;
  t2465 = -1.7147089040178687e-8*var1[20];
  t2469 = -0.021744644052735636*t1443;
  t2475 = 0.07769774964800001*t1443;
  t2476 = 0.005498*t1629;
  t2478 = t2475 + t2476;
  t2482 = -0.005534467322*t2478;
  t2486 = t1824 + t2483;
  t2487 = -0.6934341012630001*t2486;
  t2488 = t2465 + t2469 + t2482 + t2487;
  t2492 = -0.993925573253*t1443;
  t2494 = 1. + t2492;
  t2503 = t1619 + t2483;
  p_output1[0]=-0.251201 + Power(-0.049 - 1.*t1085*t1150 - 1.*t1108*t1168 - 0.124503*(t1012*t1150 + t1019*t1168) - 0.045407*(t1114*t1150 + t1111*t1168) + 0.049*t514 + 0.21*t548 - 1.*t191*t642 + t548*t724 - 1.*t786*t820 - 1.*t1142*t844 + 0.588518*(t1150*t891 + t1168*t971),2) + Power(-0.09 + 0.21*t514 - 0.049*t548 - 1.*t548*t642 - 1.*t191*t724 - 1.*t745*t786 - 1.*t820*t844 - 1.*t1085*t930 - 1.*t1108*t939 - 0.124503*(t1012*t930 + t1019*t939) - 0.045407*(t1114*t930 + t1111*t939) + 0.588518*(t891*t930 + t939*t971),2) + Power(0.09 + 0.6934341012630001*(t1011 + t1062) + 0.588518*(t1003 + t1063) + 0.021877537552*(t1017 + t1095) - 0.045407*(t1016 + t1096) - 0.124503*(1. - 0.006104248100000001*t858) - 0.000033783761634830594*t858 + 2.1934241414728571e-7*var1[12],2);
  p_output1[1]=-0.251201 + Power(-0.09 + 0.21*t1277 - 0.049*t1282 - 1.*t1282*t1313 - 1.*t1265*t1336 - 1.*t1360*t1372 - 1.*t1422*t1427 + 0.588518*(t1474*t1547 + t1613*t1655) - 1.*t1547*t2293 + 0.124503*(t1613*t2401 + t1547*t2440) - 1.*t1613*t2488 - 0.045407*(t1613*t2494 + t1547*t2503),2) + Power(-0.049 + 0.049*t1277 + 0.21*t1282 - 1.*t1265*t1313 + t1282*t1336 - 1.*t1372*t1422 - 1.*t1427*t2576 - 1.*t2293*t2583 - 1.*t2488*t2587 + 0.588518*(t1474*t2583 + t1655*t2587) + 0.124503*(t2440*t2583 + t2401*t2587) - 0.045407*(t2503*t2583 + t2494*t2587),2) + Power(-0.09 + 0.124503*(1. - 0.006104248100000001*t1443) + 0.000033783761634830594*t1443 + 0.588518*(t1926 + t2413) + 0.6934341012630001*(t1894 + t2416) + 0.021877537552*(t2400 + t2475) - 0.045407*(t2393 + t2476) - 2.1934241414728571e-7*var1[20],2);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 2, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void p_achilles_constraint_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




