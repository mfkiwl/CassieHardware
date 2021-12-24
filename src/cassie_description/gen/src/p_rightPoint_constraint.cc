/*
 * Automatically Generated from Mathematica.
 * Thu 26 Aug 2021 14:18:56 GMT-07:00
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
  double t41;
  double t69;
  double t83;
  double t100;
  double t196;
  double t284;
  double t358;
  double t436;
  double t498;
  double t54;
  double t523;
  double t524;
  double t528;
  double t563;
  double t567;
  double t582;
  double t599;
  double t603;
  double t604;
  double t605;
  double t743;
  double t744;
  double t746;
  double t750;
  double t751;
  double t760;
  double t767;
  double t791;
  double t792;
  double t797;
  double t821;
  double t825;
  double t826;
  double t828;
  double t829;
  double t831;
  double t833;
  double t838;
  double t839;
  double t840;
  double t847;
  double t850;
  double t851;
  double t862;
  double t873;
  double t877;
  double t883;
  double t895;
  double t899;
  double t901;
  double t921;
  double t922;
  double t927;
  double t140;
  double t250;
  double t258;
  double t946;
  double t443;
  double t494;
  double t950;
  double t506;
  double t510;
  double t519;
  double t954;
  double t956;
  double t957;
  double t598;
  double t600;
  double t602;
  double t948;
  double t951;
  double t952;
  double t959;
  double t960;
  double t964;
  double t733;
  double t735;
  double t736;
  double t762;
  double t778;
  double t782;
  double t979;
  double t980;
  double t981;
  double t1007;
  double t1014;
  double t1015;
  double t804;
  double t808;
  double t816;
  double t832;
  double t835;
  double t837;
  double t1022;
  double t1024;
  double t1025;
  double t1027;
  double t1028;
  double t1029;
  double t843;
  double t845;
  double t846;
  double t880;
  double t884;
  double t887;
  double t1036;
  double t1038;
  double t1045;
  double t1059;
  double t1064;
  double t1065;
  double t906;
  double t913;
  double t917;
  double t1076;
  double t1077;
  double t1078;
  double t1081;
  double t1082;
  double t1083;
  double t1152;
  double t1153;
  double t1154;
  double t1133;
  double t1137;
  double t1145;
  double t1156;
  double t1157;
  double t1159;
  double t1161;
  double t1163;
  double t1164;
  double t1173;
  double t1174;
  double t1176;
  double t1185;
  double t1186;
  double t1187;
  double t1189;
  double t1191;
  double t1192;
  double t1204;
  double t1213;
  double t1217;
  double t1221;
  double t1222;
  double t1225;
  double t1227;
  double t1228;
  double t1229;
  double t1232;
  double t1233;
  double t1235;
  double t1250;
  double t1253;
  double t1254;
  double t1267;
  double t1268;
  double t1270;
  double t1103;
  double t1110;
  double t1121;
  double t1271;
  double t1272;
  double t1274;
  double t1275;
  double t937;
  double t940;
  double t941;
  t41 = Cos(var1[4]);
  t69 = Cos(var1[15]);
  t83 = -1.*t69;
  t100 = 1. + t83;
  t196 = Sin(var1[15]);
  t284 = Sin(var1[14]);
  t358 = Sin(var1[4]);
  t436 = Cos(var1[14]);
  t498 = Sin(var1[5]);
  t54 = Cos(var1[5]);
  t523 = t284*t358;
  t524 = -1.*t436*t41*t498;
  t528 = t523 + t524;
  t563 = Cos(var1[16]);
  t567 = -1.*t563;
  t582 = 1. + t567;
  t599 = Sin(var1[16]);
  t603 = t436*t358;
  t604 = t41*t284*t498;
  t605 = t603 + t604;
  t743 = t69*t41*t54;
  t744 = t196*t528;
  t746 = t743 + t744;
  t750 = Cos(var1[17]);
  t751 = -1.*t750;
  t760 = 1. + t751;
  t767 = Sin(var1[17]);
  t791 = t599*t605;
  t792 = t563*t746;
  t797 = t791 + t792;
  t821 = t563*t605;
  t825 = -1.*t599*t746;
  t826 = t821 + t825;
  t828 = Cos(var1[18]);
  t829 = -1.*t828;
  t831 = 1. + t829;
  t833 = Sin(var1[18]);
  t838 = -1.*t767*t797;
  t839 = t750*t826;
  t840 = t838 + t839;
  t847 = t750*t797;
  t850 = t767*t826;
  t851 = t847 + t850;
  t862 = Cos(var1[19]);
  t873 = -1.*t862;
  t877 = 1. + t873;
  t883 = Sin(var1[19]);
  t895 = t833*t840;
  t899 = t828*t851;
  t901 = t895 + t899;
  t921 = t828*t840;
  t922 = -1.*t833*t851;
  t927 = t921 + t922;
  t140 = -0.049*t100;
  t250 = -0.135*t196;
  t258 = t140 + t250;
  t946 = Sin(var1[3]);
  t443 = -1.*t436;
  t494 = 1. + t443;
  t950 = Cos(var1[3]);
  t506 = -0.135*t100;
  t510 = 0.049*t196;
  t519 = t506 + t510;
  t954 = t950*t54;
  t956 = -1.*t946*t358*t498;
  t957 = t954 + t956;
  t598 = -0.09*t582;
  t600 = 0.049*t599;
  t602 = t598 + t600;
  t948 = t54*t946*t358;
  t951 = t950*t498;
  t952 = t948 + t951;
  t959 = -1.*t41*t284*t946;
  t960 = t436*t957;
  t964 = t959 + t960;
  t733 = -0.049*t582;
  t735 = -0.09*t599;
  t736 = t733 + t735;
  t762 = -0.049*t760;
  t778 = -0.21*t767;
  t782 = t762 + t778;
  t979 = -1.*t436*t41*t946;
  t980 = -1.*t284*t957;
  t981 = t979 + t980;
  t1007 = t69*t952;
  t1014 = t196*t964;
  t1015 = t1007 + t1014;
  t804 = -0.21*t760;
  t808 = 0.049*t767;
  t816 = t804 + t808;
  t832 = -0.27068*t831;
  t835 = 0.00159*t833;
  t837 = t832 + t835;
  t1022 = t599*t981;
  t1024 = t563*t1015;
  t1025 = t1022 + t1024;
  t1027 = t563*t981;
  t1028 = -1.*t599*t1015;
  t1029 = t1027 + t1028;
  t843 = -0.00159*t831;
  t845 = -0.27068*t833;
  t846 = t843 + t845;
  t880 = 0.01841*t877;
  t884 = -0.70544*t883;
  t887 = t880 + t884;
  t1036 = -1.*t767*t1025;
  t1038 = t750*t1029;
  t1045 = t1036 + t1038;
  t1059 = t750*t1025;
  t1064 = t767*t1029;
  t1065 = t1059 + t1064;
  t906 = -0.70544*t877;
  t913 = -0.01841*t883;
  t917 = t906 + t913;
  t1076 = t833*t1045;
  t1077 = t828*t1065;
  t1078 = t1076 + t1077;
  t1081 = t828*t1045;
  t1082 = -1.*t833*t1065;
  t1083 = t1081 + t1082;
  t1152 = t54*t946;
  t1153 = t950*t358*t498;
  t1154 = t1152 + t1153;
  t1133 = -1.*t950*t54*t358;
  t1137 = t946*t498;
  t1145 = t1133 + t1137;
  t1156 = t950*t41*t284;
  t1157 = t436*t1154;
  t1159 = t1156 + t1157;
  t1161 = t436*t950*t41;
  t1163 = -1.*t284*t1154;
  t1164 = t1161 + t1163;
  t1173 = t69*t1145;
  t1174 = t196*t1159;
  t1176 = t1173 + t1174;
  t1185 = t599*t1164;
  t1186 = t563*t1176;
  t1187 = t1185 + t1186;
  t1189 = t563*t1164;
  t1191 = -1.*t599*t1176;
  t1192 = t1189 + t1191;
  t1204 = -1.*t767*t1187;
  t1213 = t750*t1192;
  t1217 = t1204 + t1213;
  t1221 = t750*t1187;
  t1222 = t767*t1192;
  t1225 = t1221 + t1222;
  t1227 = t833*t1217;
  t1228 = t828*t1225;
  t1229 = t1227 + t1228;
  t1232 = t828*t1217;
  t1233 = -1.*t833*t1225;
  t1235 = t1232 + t1233;
  t1250 = t862*t1229;
  t1253 = t883*t1235;
  t1254 = t1250 + t1253;
  t1267 = t196*t1145;
  t1268 = -1.*t69*t1159;
  t1270 = t1267 + t1268;
  t1103 = t862*t1078;
  t1110 = t883*t1083;
  t1121 = t1103 + t1110;
  t1271 = Power(t1270,2);
  t1272 = Power(t1254,2);
  t1274 = t1271 + t1272;
  t1275 = 1/Sqrt(t1274);
  t937 = t862*t901;
  t940 = t883*t927;
  t941 = t937 + t940;
  p_output1[0]=0.135*t284*t358 + 0.135*t41*t494*t498 + t519*t528 + t258*t41*t54 + t602*t605 - 0.1305*(-1.*t196*t41*t54 + t528*t69) + t736*t746 + t782*t797 + t816*t826 + t837*t840 + t846*t851 + t887*t901 + t917*t927 - 1.11344*(-1.*t883*t901 + t862*t927) - 0.02159*t941 + var1[0];
  p_output1[1]=-0.02159*t1121 + t1015*t736 + t1025*t782 + t1029*t816 + t1045*t837 + t1065*t846 - 1.11344*(t1083*t862 - 1.*t1078*t883) + t1078*t887 + t1083*t917 - 0.135*t284*t41*t946 + t258*t952 - 0.135*t494*t957 + t519*t964 - 0.1305*(-1.*t196*t952 + t69*t964) + t602*t981 + var1[1];
  p_output1[2]=-0.02159*t1254 + t1145*t258 - 0.135*t1154*t494 + t1159*t519 + t1164*t602 - 0.1305*(-1.*t1145*t196 + t1159*t69) + t1176*t736 + t1187*t782 + t1192*t816 + t1217*t837 + t1225*t846 - 1.11344*(t1235*t862 - 1.*t1229*t883) + t1229*t887 + t1235*t917 + 0.135*t284*t41*t950 + var1[2];
  p_output1[3]=ArcTan(t1121*t1270*t1275 - 1.*t1254*t1275*(t196*t952 - 1.*t69*t964),t1254*t1275*(t196*t41*t54 - 1.*t528*t69) - 1.*t1270*t1275*t941);
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




