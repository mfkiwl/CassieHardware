/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:06 GMT-08:00
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
  double t339;
  double t125;
  double t431;
  double t437;
  double t466;
  double t630;
  double t1735;
  double t1769;
  double t2076;
  double t2131;
  double t2239;
  double t2275;
  double t2363;
  double t1435;
  double t1591;
  double t1689;
  double t2907;
  double t2909;
  double t2953;
  double t3143;
  double t3181;
  double t3750;
  double t4049;
  double t3847;
  double t3962;
  double t3979;
  double t4052;
  double t4722;
  double t4042;
  double t5119;
  double t134;
  double t157;
  double t527;
  double t1075;
  double t1085;
  double t1188;
  double t1192;
  double t1199;
  double t2088;
  double t2143;
  double t2221;
  double t2695;
  double t2697;
  double t2738;
  double t2963;
  double t3123;
  double t5288;
  double t5293;
  double t5295;
  double t4070;
  double t5306;
  double t5309;
  double t5310;
  double t4137;
  double t4159;
  double t4202;
  double t5323;
  double t5330;
  double t4253;
  double t4264;
  double t4357;
  double t4653;
  double t4710;
  double t4725;
  double t4768;
  double t4791;
  double t4806;
  double t4818;
  double t4859;
  double t4869;
  double t4937;
  double t4938;
  double t4944;
  double t5069;
  double t5101;
  double t5118;
  double t5149;
  double t5158;
  double t5160;
  double t5196;
  double t5199;
  double t5220;
  double t5517;
  double t5499;
  double t5528;
  double t5537;
  double t5548;
  double t5555;
  double t5618;
  double t5623;
  double t5625;
  double t5628;
  double t5636;
  double t5641;
  double t5642;
  double t5576;
  double t5580;
  double t5591;
  double t5695;
  double t5700;
  double t5715;
  double t5764;
  double t5766;
  double t5784;
  double t5843;
  double t5848;
  double t5792;
  double t5794;
  double t5834;
  double t5913;
  double t5840;
  double t6034;
  double t5510;
  double t5513;
  double t5554;
  double t5556;
  double t5566;
  double t5571;
  double t5573;
  double t5574;
  double t5626;
  double t5629;
  double t5633;
  double t5662;
  double t5690;
  double t5693;
  double t5757;
  double t5763;
  double t6089;
  double t6090;
  double t6092;
  double t5850;
  double t6103;
  double t6110;
  double t6112;
  double t5867;
  double t5892;
  double t5927;
  double t5929;
  double t5944;
  double t5945;
  double t5948;
  double t5949;
  double t5950;
  double t6115;
  double t6117;
  double t5972;
  double t5991;
  double t5994;
  double t5997;
  double t5998;
  double t6002;
  double t6019;
  double t6026;
  double t6027;
  double t6030;
  double t6031;
  double t6032;
  double t6035;
  double t6041;
  double t6045;
  double t6047;
  double t6048;
  double t6050;
  t339 = Sin(var1[9]);
  t125 = Cos(var1[9]);
  t431 = Cos(var1[10]);
  t437 = -1.*t431;
  t466 = 1. + t437;
  t630 = Sin(var1[10]);
  t1735 = Cos(var1[11]);
  t1769 = -1.*t1735;
  t2076 = 1. + t1769;
  t2131 = Sin(var1[11]);
  t2239 = t125*t431;
  t2275 = -1.*t339*t630;
  t2363 = t2239 + t2275;
  t1435 = t431*t339;
  t1591 = t125*t630;
  t1689 = t1435 + t1591;
  t2907 = Cos(var1[12]);
  t2909 = -1.*t2907;
  t2953 = 1. + t2909;
  t3143 = t1735*t2363;
  t3181 = -1.*t1689*t2131;
  t3750 = t3143 + t3181;
  t4049 = Sin(var1[12]);
  t3847 = t1735*t1689;
  t3962 = t2363*t2131;
  t3979 = t3847 + t3962;
  t4052 = -0.996943*t4049;
  t4722 = -0.0004284921280000001*t2953;
  t4042 = 0.0004284921280000001*t2953;
  t5119 = 0.996943*t4049;
  t134 = -1.*t125;
  t157 = 1. + t134;
  t527 = -0.00159*t466;
  t1075 = -0.27068*t630;
  t1085 = t527 + t1075;
  t1188 = -0.27068*t466;
  t1192 = 0.00159*t630;
  t1199 = t1188 + t1192;
  t2088 = 0.01841*t2076;
  t2143 = -0.70544*t2131;
  t2221 = t2088 + t2143;
  t2695 = -0.70544*t2076;
  t2697 = -0.01841*t2131;
  t2738 = t2695 + t2697;
  t2963 = -0.999969365345*t2953;
  t3123 = 1. + t2963;
  t5288 = -1.*t431*t339;
  t5293 = -1.*t125*t630;
  t5295 = t5288 + t5293;
  t4070 = t4042 + t4052;
  t5306 = t1735*t5295;
  t5309 = -1.*t2363*t2131;
  t5310 = t5306 + t5309;
  t4137 = 0.005481192614*t2953;
  t4159 = -0.077936*t4049;
  t4202 = t4137 + t4159;
  t5323 = t5295*t2131;
  t5330 = t3143 + t5323;
  t4253 = 0.07769774964800001*t2953;
  t4264 = 0.005498*t4049;
  t4357 = t4253 + t4264;
  t4653 = -1.2096424700126054e-9*var1[12];
  t4710 = -0.6934128581485427*t2953;
  t4725 = t4722 + t4052;
  t4768 = -0.021877537552*t4725;
  t4791 = -0.005481192614*t2953;
  t4806 = 0.077936*t4049;
  t4818 = t4791 + t4806;
  t4859 = 0.005534467322*t4818;
  t4869 = t4653 + t4710 + t4768 + t4859;
  t4937 = -1.7147089040178687e-8*var1[12];
  t4938 = -0.021744644052735636*t2953;
  t4944 = -0.07769774964800001*t2953;
  t5069 = -0.005498*t4049;
  t5101 = t4944 + t5069;
  t5118 = 0.005534467322*t5101;
  t5149 = t4722 + t5119;
  t5158 = -0.6934341012630001*t5149;
  t5160 = t4937 + t4938 + t5118 + t5158;
  t5196 = -0.993925573253*t2953;
  t5199 = 1. + t5196;
  t5220 = t4042 + t5119;
  t5517 = Sin(var1[17]);
  t5499 = Cos(var1[17]);
  t5528 = Cos(var1[18]);
  t5537 = -1.*t5528;
  t5548 = 1. + t5537;
  t5555 = Sin(var1[18]);
  t5618 = Cos(var1[19]);
  t5623 = -1.*t5618;
  t5625 = 1. + t5623;
  t5628 = Sin(var1[19]);
  t5636 = t5499*t5528;
  t5641 = -1.*t5517*t5555;
  t5642 = t5636 + t5641;
  t5576 = t5528*t5517;
  t5580 = t5499*t5555;
  t5591 = t5576 + t5580;
  t5695 = Cos(var1[20]);
  t5700 = -1.*t5695;
  t5715 = 1. + t5700;
  t5764 = t5618*t5642;
  t5766 = -1.*t5591*t5628;
  t5784 = t5764 + t5766;
  t5843 = Sin(var1[20]);
  t5848 = -0.996943*t5843;
  t5792 = t5618*t5591;
  t5794 = t5642*t5628;
  t5834 = t5792 + t5794;
  t5913 = -0.0004284921280000001*t5715;
  t5840 = 0.0004284921280000001*t5715;
  t6034 = 0.996943*t5843;
  t5510 = -1.*t5499;
  t5513 = 1. + t5510;
  t5554 = -0.00159*t5548;
  t5556 = -0.27068*t5555;
  t5566 = t5554 + t5556;
  t5571 = -0.27068*t5548;
  t5573 = 0.00159*t5555;
  t5574 = t5571 + t5573;
  t5626 = 0.01841*t5625;
  t5629 = -0.70544*t5628;
  t5633 = t5626 + t5629;
  t5662 = -0.70544*t5625;
  t5690 = -0.01841*t5628;
  t5693 = t5662 + t5690;
  t5757 = -0.999969365345*t5715;
  t5763 = 1. + t5757;
  t6089 = -1.*t5528*t5517;
  t6090 = -1.*t5499*t5555;
  t6092 = t6089 + t6090;
  t5850 = t5840 + t5848;
  t6103 = t5618*t6092;
  t6110 = -1.*t5642*t5628;
  t6112 = t6103 + t6110;
  t5867 = -1.2096424700126054e-9*var1[20];
  t5892 = -0.6934128581485427*t5715;
  t5927 = t5913 + t5848;
  t5929 = -0.021877537552*t5927;
  t5944 = 0.005481192614*t5715;
  t5945 = -0.077936*t5843;
  t5948 = t5944 + t5945;
  t5949 = -0.005534467322*t5948;
  t5950 = t5867 + t5892 + t5929 + t5949;
  t6115 = t6092*t5628;
  t6117 = t5764 + t6115;
  t5972 = -0.07769774964800001*t5715;
  t5991 = -0.005498*t5843;
  t5994 = t5972 + t5991;
  t5997 = -0.005481192614*t5715;
  t5998 = 0.077936*t5843;
  t6002 = t5997 + t5998;
  t6019 = -1.7147089040178687e-8*var1[20];
  t6026 = -0.021744644052735636*t5715;
  t6027 = 0.07769774964800001*t5715;
  t6030 = 0.005498*t5843;
  t6031 = t6027 + t6030;
  t6032 = -0.005534467322*t6031;
  t6035 = t5913 + t6034;
  t6041 = -0.6934341012630001*t6035;
  t6045 = t6019 + t6026 + t6032 + t6041;
  t6047 = -0.993925573253*t5715;
  t6048 = 1. + t6047;
  t6050 = t5840 + t6034;
  p_output1[0]=-0.251201 + Power(-0.09 - 1.*t1199*t125 + 0.21*t157 - 1.*t1689*t2221 - 1.*t2363*t2738 - 0.049*t339 - 1.*t1085*t339 + 0.588518*(t3123*t3750 + t3979*t4070) - 0.124503*(t3750*t4202 + t3979*t4357) - 1.*t3750*t4869 - 1.*t3979*t5160 - 0.045407*(t3979*t5199 + t3750*t5220),2) + Power(-0.049 - 1.*t1085*t125 + 0.049*t157 - 1.*t2221*t2363 + 0.21*t339 + t1199*t339 - 1.*t2738*t5295 - 1.*t4869*t5310 - 1.*t5160*t5330 + 0.588518*(t3123*t5310 + t4070*t5330) - 0.124503*(t4202*t5310 + t4357*t5330) - 0.045407*(t5220*t5310 + t5199*t5330),2) + Power(0.09 - 0.124503*(1. - 0.006104248100000001*t2953) - 0.000033783761634830594*t2953 + 0.6934341012630001*(t4159 + t4791) + 0.588518*(t4137 + t4806) + 0.021877537552*(t4264 + t4944) - 0.045407*(t4253 + t5069) + 2.1934241414728571e-7*var1[12],2);
  p_output1[1]=-0.251201 + Power(-0.09 + 0.21*t5513 - 0.049*t5517 - 1.*t5517*t5566 - 1.*t5499*t5574 - 1.*t5591*t5633 - 1.*t5642*t5693 + 0.588518*(t5763*t5784 + t5834*t5850) - 1.*t5784*t5950 + 0.124503*(t5834*t5994 + t5784*t6002) - 1.*t5834*t6045 - 0.045407*(t5834*t6048 + t5784*t6050),2) + Power(-0.049 + 0.049*t5513 + 0.21*t5517 - 1.*t5499*t5566 + t5517*t5574 - 1.*t5633*t5642 - 1.*t5693*t6092 - 1.*t5950*t6112 - 1.*t6045*t6117 + 0.588518*(t5763*t6112 + t5850*t6117) + 0.124503*(t6002*t6112 + t5994*t6117) - 0.045407*(t6050*t6112 + t6048*t6117),2) + Power(-0.09 + 0.124503*(1. - 0.006104248100000001*t5715) + 0.000033783761634830594*t5715 + 0.588518*(t5945 + t5997) + 0.6934341012630001*(t5944 + t5998) + 0.021877537552*(t5991 + t6027) - 0.045407*(t5972 + t6030) - 2.1934241414728571e-7*var1[20],2);
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




