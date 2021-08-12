/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:04 GMT-08:00
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
  double t81;
  double t526;
  double t772;
  double t962;
  double t979;
  double t1068;
  double t1155;
  double t1475;
  double t1511;
  double t1573;
  double t1600;
  double t1369;
  double t1451;
  double t1455;
  double t1635;
  double t1706;
  double t1809;
  double t1983;
  double t2126;
  double t2254;
  double t2384;
  double t1858;
  double t1871;
  double t1941;
  double t2533;
  double t2536;
  double t2593;
  double t2806;
  double t2853;
  double t2865;
  double t3009;
  double t2726;
  double t2776;
  double t2790;
  double t3245;
  double t3247;
  double t3345;
  double t3681;
  double t121;
  double t253;
  double t307;
  double t553;
  double t585;
  double t764;
  double t815;
  double t921;
  double t3739;
  double t1115;
  double t1202;
  double t1217;
  double t1236;
  double t1256;
  double t1309;
  double t3763;
  double t3767;
  double t3782;
  double t3797;
  double t3838;
  double t3898;
  double t1583;
  double t1601;
  double t1607;
  double t1812;
  double t1830;
  double t1836;
  double t3904;
  double t3913;
  double t3922;
  double t3924;
  double t3932;
  double t3933;
  double t2369;
  double t2410;
  double t2417;
  double t2605;
  double t2616;
  double t2662;
  double t3985;
  double t3986;
  double t3988;
  double t3991;
  double t4000;
  double t4001;
  double t2965;
  double t3059;
  double t3126;
  double t3392;
  double t3393;
  double t3423;
  double t4007;
  double t4008;
  double t4009;
  double t4026;
  double t4028;
  double t4029;
  double t3704;
  double t3714;
  double t3722;
  double t3745;
  double t3746;
  double t3757;
  double t4065;
  double t4066;
  double t4072;
  double t4091;
  double t4098;
  double t4105;
  double t4114;
  double t4115;
  double t4116;
  double t4118;
  double t4121;
  double t4123;
  double t4129;
  double t4135;
  double t4140;
  double t4155;
  double t4163;
  double t4172;
  double t4174;
  double t4175;
  double t4178;
  double t4184;
  double t4185;
  double t4190;
  t81 = Cos(var1[15]);
  t526 = Cos(var1[16]);
  t772 = Sin(var1[16]);
  t962 = Cos(var1[17]);
  t979 = -1.*t962;
  t1068 = 1. + t979;
  t1155 = Sin(var1[17]);
  t1475 = Cos(var1[18]);
  t1511 = -1.*t1475;
  t1573 = 1. + t1511;
  t1600 = Sin(var1[18]);
  t1369 = t81*t526*t962;
  t1451 = -1.*t81*t772*t1155;
  t1455 = t1369 + t1451;
  t1635 = -1.*t81*t962*t772;
  t1706 = -1.*t81*t526*t1155;
  t1809 = t1635 + t1706;
  t1983 = Cos(var1[19]);
  t2126 = -1.*t1983;
  t2254 = 1. + t2126;
  t2384 = Sin(var1[19]);
  t1858 = t1475*t1455;
  t1871 = t1809*t1600;
  t1941 = t1858 + t1871;
  t2533 = t1475*t1809;
  t2536 = -1.*t1455*t1600;
  t2593 = t2533 + t2536;
  t2806 = Cos(var1[21]);
  t2853 = -1.*t2806;
  t2865 = 1. + t2853;
  t3009 = Sin(var1[21]);
  t2726 = t1983*t1941;
  t2776 = t2593*t2384;
  t2790 = t2726 + t2776;
  t3245 = t1983*t2593;
  t3247 = -1.*t1941*t2384;
  t3345 = t3245 + t3247;
  t3681 = Cos(var1[14]);
  t121 = -1.*t81;
  t253 = 1. + t121;
  t307 = Sin(var1[15]);
  t553 = -1.*t526;
  t585 = 1. + t553;
  t764 = -0.049*t585;
  t815 = -0.09*t772;
  t921 = t764 + t815;
  t3739 = Sin(var1[14]);
  t1115 = -0.049*t1068;
  t1202 = -0.21*t1155;
  t1217 = t1115 + t1202;
  t1236 = -0.21*t1068;
  t1256 = 0.049*t1155;
  t1309 = t1236 + t1256;
  t3763 = t3681*t526*t307;
  t3767 = -1.*t3739*t772;
  t3782 = t3763 + t3767;
  t3797 = -1.*t526*t3739;
  t3838 = -1.*t3681*t307*t772;
  t3898 = t3797 + t3838;
  t1583 = -0.00159*t1573;
  t1601 = -0.27068*t1600;
  t1607 = t1583 + t1601;
  t1812 = -0.27068*t1573;
  t1830 = 0.00159*t1600;
  t1836 = t1812 + t1830;
  t3904 = t962*t3782;
  t3913 = t3898*t1155;
  t3922 = t3904 + t3913;
  t3924 = t962*t3898;
  t3932 = -1.*t3782*t1155;
  t3933 = t3924 + t3932;
  t2369 = 0.01841*t2254;
  t2410 = -0.70544*t2384;
  t2417 = t2369 + t2410;
  t2605 = -0.70544*t2254;
  t2616 = -0.01841*t2384;
  t2662 = t2605 + t2616;
  t3985 = t1475*t3922;
  t3986 = t3933*t1600;
  t3988 = t3985 + t3986;
  t3991 = t1475*t3933;
  t4000 = -1.*t3922*t1600;
  t4001 = t3991 + t4000;
  t2965 = -0.02159*t2865;
  t3059 = -1.11344*t3009;
  t3126 = t2965 + t3059;
  t3392 = -1.11344*t2865;
  t3393 = 0.02159*t3009;
  t3423 = t3392 + t3393;
  t4007 = t1983*t3988;
  t4008 = t4001*t2384;
  t4009 = t4007 + t4008;
  t4026 = t1983*t4001;
  t4028 = -1.*t3988*t2384;
  t4029 = t4026 + t4028;
  t3704 = -0.135*t253;
  t3714 = 0.049*t307;
  t3722 = t3704 + t3714;
  t3745 = -0.09*t585;
  t3746 = 0.049*t772;
  t3757 = t3745 + t3746;
  t4065 = t526*t3739*t307;
  t4066 = t3681*t772;
  t4072 = t4065 + t4066;
  t4091 = t3681*t526;
  t4098 = -1.*t3739*t307*t772;
  t4105 = t4091 + t4098;
  t4114 = t962*t4072;
  t4115 = t4105*t1155;
  t4116 = t4114 + t4115;
  t4118 = t962*t4105;
  t4121 = -1.*t4072*t1155;
  t4123 = t4118 + t4121;
  t4129 = t1475*t4116;
  t4135 = t4123*t1600;
  t4140 = t4129 + t4135;
  t4155 = t1475*t4123;
  t4163 = -1.*t4116*t1600;
  t4172 = t4155 + t4163;
  t4174 = t1983*t4140;
  t4175 = t4172*t2384;
  t4178 = t4174 + t4175;
  t4184 = t1983*t4172;
  t4185 = -1.*t4140*t2384;
  t4190 = t4184 + t4185;
  p_output1[0]=t1455*t1607 + t1809*t1836 + t1941*t2417 - 0.049*t253 + t2593*t2662 - 0.0045*t307 + t2790*t3126 - 1.13106*(-1.*t2790*t3009 + t2806*t3345) + 0.0306*(t2790*t2806 + t3009*t3345) + t3345*t3423 + t1217*t526*t81 - 1.*t1309*t772*t81 + t81*t921;
  p_output1[1]=-0.135*(1. - 1.*t3681) + t3681*t3722 - 1.*t3739*t3757 + t1217*t3782 + t1309*t3898 + t1607*t3922 + t1836*t3933 + t2417*t3988 + t2662*t4001 + t3126*t4009 + t3423*t4029 - 1.13106*(-1.*t3009*t4009 + t2806*t4029) + 0.0306*(t2806*t4009 + t3009*t4029) - 0.1305*t3681*t81 + t307*t3681*t921;
  p_output1[2]=0.135*t3739 + t3722*t3739 + t3681*t3757 + t1217*t4072 + t1309*t4105 + t1607*t4116 + t1836*t4123 + t2417*t4140 + t2662*t4172 + t3126*t4178 + t3423*t4190 - 1.13106*(-1.*t3009*t4178 + t2806*t4190) + 0.0306*(t2806*t4178 + t3009*t4190) - 0.1305*t3739*t81 + t307*t3739*t921;
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




