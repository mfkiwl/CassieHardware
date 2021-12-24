/*
 * Automatically Generated from Mathematica.
 * Thu 26 Aug 2021 14:19:32 GMT-07:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "yaRightStance.hh"
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
  double t89;
  double t180;
  double t193;
  double t241;
  double t266;
  double t424;
  double t637;
  double t641;
  double t645;
  double t649;
  double t658;
  double t668;
  double t691;
  double t693;
  double t703;
  double t751;
  double t755;
  double t758;
  double t776;
  double t777;
  double t779;
  double t783;
  double t797;
  double t799;
  double t804;
  double t764;
  double t767;
  double t769;
  double t348;
  double t458;
  double t535;
  double t543;
  double t559;
  double t620;
  double t717;
  double t735;
  double t736;
  double t661;
  double t670;
  double t680;
  double t1078;
  double t1083;
  double t1087;
  double t781;
  double t787;
  double t795;
  double t829;
  double t841;
  double t893;
  double t1119;
  double t1120;
  double t1124;
  double t1137;
  double t1154;
  double t1235;
  double t1253;
  double t1270;
  double t1279;
  double t1300;
  double t1318;
  double t1348;
  double t1349;
  double t1355;
  double t1388;
  double t1394;
  double t1415;
  double t1495;
  double t1499;
  double t1516;
  double t1607;
  double t1616;
  double t1660;
  double t1677;
  double t1685;
  double t1694;
  double t1700;
  double t1722;
  double t1726;
  double t1730;
  double t1860;
  double t1881;
  double t1890;
  double t1326;
  double t1327;
  double t1335;
  double t1292;
  double t1301;
  double t1308;
  double t1560;
  double t1565;
  double t1591;
  double t1411;
  double t1416;
  double t1493;
  double t1754;
  double t1770;
  double t1848;
  double t2183;
  double t2189;
  double t2198;
  double t1695;
  double t1703;
  double t1714;
  double t2217;
  double t2234;
  double t2250;
  double t2251;
  double t2260;
  double t2262;
  double t2268;
  double t2291;
  double t2304;
  double t2329;
  double t2331;
  double t1902;
  double t1911;
  double t1995;
  double t2085;
  double t2088;
  double t2128;
  double t2679;
  double t2663;
  double t2670;
  double t2678;
  double t2683;
  double t2687;
  double t2706;
  double t2707;
  double t2708;
  double t2701;
  double t2723;
  double t2731;
  double t2738;
  double t2739;
  double t2760;
  double t2732;
  double t2766;
  double t2768;
  double t2782;
  double t2794;
  double t2805;
  double t2873;
  double t2861;
  double t2867;
  double t2868;
  double t2886;
  double t2887;
  double t2893;
  double t2900;
  double t2906;
  double t2913;
  double t2937;
  double t2940;
  double t2911;
  double t2944;
  double t2958;
  double t2962;
  double t2968;
  double t2971;
  double t2961;
  double t2972;
  double t2987;
  double t2998;
  double t3006;
  double t3018;
  double t3110;
  double t3113;
  double t3115;
  double t3116;
  double t3119;
  double t3120;
  double t3122;
  double t3123;
  double t3128;
  double t3121;
  double t3130;
  double t3135;
  double t3154;
  double t3156;
  double t3157;
  double t3152;
  double t3158;
  double t3168;
  double t3179;
  double t3193;
  double t3199;
  t89 = Cos(var1[16]);
  t180 = Sin(var1[16]);
  t193 = Cos(var1[17]);
  t241 = -1.*t193;
  t266 = 1. + t241;
  t424 = Sin(var1[17]);
  t637 = -1.*var1[17];
  t641 = 0.226893 + t637;
  t645 = Cos(t641);
  t649 = -1.*t645;
  t658 = 1. + t649;
  t668 = Sin(t641);
  t691 = -1.*t193*t180;
  t693 = -1.*t89*t424;
  t703 = t691 + t693;
  t751 = t89*t193;
  t755 = -1.*t180*t424;
  t758 = t751 + t755;
  t776 = Cos(var1[21]);
  t777 = -1.*t776;
  t779 = 1. + t777;
  t783 = Sin(var1[21]);
  t797 = t645*t703;
  t799 = -1.*t668*t758;
  t804 = t797 + t799;
  t764 = t668*t703;
  t767 = t645*t758;
  t769 = t764 + t767;
  t348 = -0.049*t266;
  t458 = -0.21*t424;
  t535 = t348 + t458;
  t543 = -0.21*t266;
  t559 = 0.049*t424;
  t620 = t543 + t559;
  t717 = 0.01841*t658;
  t735 = -0.70544*t668;
  t736 = t717 + t735;
  t661 = -0.70544*t658;
  t670 = -0.01841*t668;
  t680 = t661 + t670;
  t1078 = t193*t180;
  t1083 = t89*t424;
  t1087 = t1078 + t1083;
  t781 = -0.02159*t779;
  t787 = -1.11344*t783;
  t795 = t781 + t787;
  t829 = -1.11344*t779;
  t841 = 0.02159*t783;
  t893 = t829 + t841;
  t1119 = t645*t1087;
  t1120 = t668*t758;
  t1124 = t1119 + t1120;
  t1137 = -1.*t668*t1087;
  t1154 = t1137 + t767;
  t1235 = Cos(var1[8]);
  t1253 = Cos(var1[9]);
  t1270 = -1.*t1253;
  t1279 = 1. + t1270;
  t1300 = Sin(var1[9]);
  t1318 = Sin(var1[8]);
  t1348 = -1.*var1[9];
  t1349 = 0.226893 + t1348;
  t1355 = Cos(t1349);
  t1388 = -1.*t1355;
  t1394 = 1. + t1388;
  t1415 = Sin(t1349);
  t1495 = -1.*t1235*t1300;
  t1499 = -1.*t1253*t1318;
  t1516 = t1495 + t1499;
  t1607 = t1253*t1235;
  t1616 = -1.*t1300*t1318;
  t1660 = t1607 + t1616;
  t1677 = Cos(var1[13]);
  t1685 = -1.*t1677;
  t1694 = 1. + t1685;
  t1700 = Sin(var1[13]);
  t1722 = t1415*t1516;
  t1726 = t1355*t1660;
  t1730 = t1722 + t1726;
  t1860 = t1355*t1516;
  t1881 = -1.*t1415*t1660;
  t1890 = t1860 + t1881;
  t1326 = -0.21*t1279;
  t1327 = 0.049*t1300;
  t1335 = t1326 + t1327;
  t1292 = -0.049*t1279;
  t1301 = -0.21*t1300;
  t1308 = t1292 + t1301;
  t1560 = 0.01841*t1394;
  t1565 = -0.70544*t1415;
  t1591 = t1560 + t1565;
  t1411 = -0.70544*t1394;
  t1416 = -0.01841*t1415;
  t1493 = t1411 + t1416;
  t1754 = -1.11344*t1694;
  t1770 = 0.02159*t1700;
  t1848 = t1754 + t1770;
  t2183 = t1235*t1300;
  t2189 = t1253*t1318;
  t2198 = t2183 + t2189;
  t1695 = -0.02159*t1694;
  t1703 = -1.11344*t1700;
  t1714 = t1695 + t1703;
  t2217 = -1.*t1415*t2198;
  t2234 = t2217 + t1726;
  t2250 = t1355*t2198;
  t2251 = t1415*t1660;
  t2260 = t2250 + t2251;
  t2262 = t1700*t2234;
  t2268 = t1677*t2260;
  t2291 = t2262 + t2268;
  t2304 = t1677*t2234;
  t2329 = -1.*t1700*t2260;
  t2331 = t2304 + t2329;
  t1902 = -1.*t1700*t1730;
  t1911 = t1677*t1890;
  t1995 = t1902 + t1911;
  t2085 = t1677*t1730;
  t2088 = t1700*t1890;
  t2128 = t2085 + t2088;
  t2679 = Sin(var1[6]);
  t2663 = Cos(var1[6]);
  t2670 = Sin(var1[7]);
  t2678 = t2663*t1235*t2670;
  t2683 = -1.*t2679*t1318;
  t2687 = t2678 + t2683;
  t2706 = -1.*t1235*t2679;
  t2707 = -1.*t2663*t2670*t1318;
  t2708 = t2706 + t2707;
  t2701 = -1.*t1300*t2687;
  t2723 = t1253*t2708;
  t2731 = t2701 + t2723;
  t2738 = t1253*t2687;
  t2739 = t1300*t2708;
  t2760 = t2738 + t2739;
  t2732 = t1415*t2731;
  t2766 = t1355*t2760;
  t2768 = t2732 + t2766;
  t2782 = t1355*t2731;
  t2794 = -1.*t1415*t2760;
  t2805 = t2782 + t2794;
  t2873 = Sin(var1[4]);
  t2861 = Cos(var1[4]);
  t2867 = Cos(var1[7]);
  t2868 = t2861*t2867;
  t2886 = t2873*t2679*t2670;
  t2887 = t2868 + t2886;
  t2893 = t1235*t2887;
  t2900 = t2663*t2873*t1318;
  t2906 = t2893 + t2900;
  t2913 = t2663*t1235*t2873;
  t2937 = -1.*t2887*t1318;
  t2940 = t2913 + t2937;
  t2911 = -1.*t1300*t2906;
  t2944 = t1253*t2940;
  t2958 = t2911 + t2944;
  t2962 = t1253*t2906;
  t2968 = t1300*t2940;
  t2971 = t2962 + t2968;
  t2961 = t1415*t2958;
  t2972 = t1355*t2971;
  t2987 = t2961 + t2972;
  t2998 = t1355*t2958;
  t3006 = -1.*t1415*t2971;
  t3018 = t2998 + t3006;
  t3110 = -1.*t2867*t2873;
  t3113 = t2861*t2679*t2670;
  t3115 = t3110 + t3113;
  t3116 = t1235*t3115;
  t3119 = t2861*t2663*t1318;
  t3120 = t3116 + t3119;
  t3122 = t2861*t2663*t1235;
  t3123 = -1.*t3115*t1318;
  t3128 = t3122 + t3123;
  t3121 = -1.*t1300*t3120;
  t3130 = t1253*t3128;
  t3135 = t3121 + t3130;
  t3154 = t1253*t3120;
  t3156 = t1300*t3128;
  t3157 = t3154 + t3156;
  t3152 = t1415*t3135;
  t3158 = t1355*t3157;
  t3168 = t3152 + t3158;
  t3179 = t1355*t3135;
  t3193 = -1.*t1415*t3157;
  t3199 = t3179 + t3193;
  p_output1[0]=var1[3];
  p_output1[1]=var1[4];
  p_output1[2]=var1[15];
  p_output1[3]=Sqrt(0.00002025 + Power(0.049*t180 + t180*t535 + t1087*t736 + t680*t758 - 1.11344*(t1154*t776 - 1.*t1124*t783) - 0.02159*(t1124*t776 + t1154*t783) + t1124*t795 + 0.09*t89 + t620*t89 + t1154*t893,2) + Power(-0.09*t180 - 1.*t180*t620 + t680*t703 + t736*t758 + t769*t795 - 1.11344*(-1.*t769*t783 + t776*t804) - 0.02159*(t769*t776 + t783*t804) + 0.049*t89 + t535*t89 + t804*t893,2));
  p_output1[4]=Sqrt(0.00002025 + Power(0.049*t1235 + t1235*t1308 - 0.09*t1318 - 1.*t1318*t1335 + t1493*t1516 + t1591*t1660 + t1714*t1730 + t1848*t1890 - 1.11344*t1995 - 0.02159*t2128,2) + Power(0.09*t1235 + 0.049*t1318 + t1308*t1318 + t1235*t1335 + t1493*t1660 + t1591*t2198 + t1848*t2234 + t1714*t2260 - 0.02159*t2291 - 1.11344*t2331,2));
  p_output1[5]=ArcTan(-0.09*t1235 - 0.049*t1318 - 1.*t1308*t1318 - 1.*t1235*t1335 - 1.*t1493*t1660 - 1.*t1591*t2198 - 1.*t1848*t2234 - 1.*t1714*t2260 + 0.02159*t2291 + 1.11344*t2331,-0.049*t1235 - 1.*t1235*t1308 + 0.09*t1318 + t1318*t1335 - 1.*t1493*t1516 - 1.*t1591*t1660 - 1.*t1714*t1730 - 1.*t1848*t1890 + 1.11344*t1995 + 0.02159*t2128);
  p_output1[6]=var1[6];
  p_output1[7]=var1[7];
  p_output1[8]=ArcTan(Sqrt(Power(0.766044*(-1.*t1700*t2768 + t1677*t2805) + 0.642788*(t1677*t2768 + t1700*t2805),2) + Power(0.766044*(-1.*t1700*t2987 + t1677*t3018) + 0.642788*(t1677*t2987 + t1700*t3018),2)),-0.766044*(-1.*t1700*t3168 + t1677*t3199) - 0.642788*(t1677*t3168 + t1700*t3199));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void yaRightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




