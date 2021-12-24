/*
 * Automatically Generated from Mathematica.
 * Mon 13 Sep 2021 16:09:00 GMT-07:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "pose_rightFoot.hh"
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
  double t224;
  double t44;
  double t135;
  double t141;
  double t148;
  double t244;
  double t24;
  double t2164;
  double t2168;
  double t2276;
  double t2780;
  double t2053;
  double t3483;
  double t3507;
  double t3562;
  double t3571;
  double t3629;
  double t3644;
  double t3690;
  double t3702;
  double t3706;
  double t3707;
  double t3813;
  double t3835;
  double t3850;
  double t3872;
  double t3901;
  double t3931;
  double t3940;
  double t3955;
  double t3957;
  double t3962;
  double t3987;
  double t3989;
  double t3994;
  double t4000;
  double t4002;
  double t4006;
  double t4020;
  double t4036;
  double t4048;
  double t4050;
  double t4085;
  double t4089;
  double t4093;
  double t4127;
  double t4131;
  double t4132;
  double t4138;
  double t4148;
  double t4150;
  double t4159;
  double t4171;
  double t4175;
  double t4179;
  double t2279;
  double t2938;
  double t3059;
  double t4292;
  double t4295;
  double t1864;
  double t1868;
  double t1961;
  double t143;
  double t151;
  double t156;
  double t3304;
  double t3437;
  double t3454;
  double t4303;
  double t4305;
  double t4306;
  double t3667;
  double t3694;
  double t3698;
  double t4298;
  double t4299;
  double t4301;
  double t4310;
  double t4313;
  double t4314;
  double t3715;
  double t3755;
  double t3784;
  double t3938;
  double t3941;
  double t3944;
  double t4352;
  double t4359;
  double t4374;
  double t4406;
  double t4407;
  double t4422;
  double t3964;
  double t3967;
  double t3983;
  double t4010;
  double t4021;
  double t4025;
  double t4453;
  double t4459;
  double t4465;
  double t4472;
  double t4473;
  double t4475;
  double t4066;
  double t4068;
  double t4074;
  double t4137;
  double t4144;
  double t4145;
  double t4480;
  double t4486;
  double t4488;
  double t4492;
  double t4496;
  double t4499;
  double t4164;
  double t4167;
  double t4170;
  double t4505;
  double t4528;
  double t4555;
  double t4602;
  double t4609;
  double t4632;
  double t4289;
  double t4291;
  double t4722;
  double t4723;
  double t4724;
  double t4732;
  double t4733;
  double t4735;
  double t4763;
  double t4767;
  double t4775;
  double t4816;
  double t4817;
  double t4819;
  double t4821;
  double t4822;
  double t4823;
  double t4825;
  double t4826;
  double t4827;
  double t4835;
  double t4837;
  double t4838;
  double t4860;
  double t4894;
  double t4902;
  double t4931;
  double t4947;
  double t4961;
  double t4984;
  double t4993;
  double t4999;
  double t5011;
  double t5016;
  double t5021;
  double t5029;
  double t5030;
  double t5036;
  double t5064;
  double t5068;
  double t5071;
  double t4798;
  double t4805;
  double t4810;
  double t4189;
  double t4191;
  double t4195;
  double t4229;
  double t4245;
  double t4251;
  double t4680;
  double t4683;
  double t4684;
  double t4695;
  double t4698;
  double t4701;
  double t4323;
  double t4326;
  double t4338;
  double t5089;
  double t5091;
  double t5093;
  double t5166;
  double t5168;
  double t5169;
  double t5170;
  double t3108;
  double t3146;
  double t3209;
  t224 = Sin(var1[14]);
  t44 = Cos(var1[15]);
  t135 = -1.*t44;
  t141 = 1. + t135;
  t148 = Sin(var1[15]);
  t244 = Sin(var1[4]);
  t24 = Cos(var1[4]);
  t2164 = Cos(var1[16]);
  t2168 = -1.*t2164;
  t2276 = 1. + t2168;
  t2780 = Sin(var1[16]);
  t2053 = Cos(var1[14]);
  t3483 = t44*t24;
  t3507 = t224*t148*t244;
  t3562 = t3483 + t3507;
  t3571 = Cos(var1[17]);
  t3629 = -1.*t3571;
  t3644 = 1. + t3629;
  t3690 = Sin(var1[17]);
  t3702 = t2053*t2780*t244;
  t3706 = t2164*t3562;
  t3707 = t3702 + t3706;
  t3813 = t2053*t2164*t244;
  t3835 = -1.*t2780*t3562;
  t3850 = t3813 + t3835;
  t3872 = Cos(var1[18]);
  t3901 = -1.*t3872;
  t3931 = 1. + t3901;
  t3940 = Sin(var1[18]);
  t3955 = -1.*t3690*t3707;
  t3957 = t3571*t3850;
  t3962 = t3955 + t3957;
  t3987 = t3571*t3707;
  t3989 = t3690*t3850;
  t3994 = t3987 + t3989;
  t4000 = Cos(var1[19]);
  t4002 = -1.*t4000;
  t4006 = 1. + t4002;
  t4020 = Sin(var1[19]);
  t4036 = t3940*t3962;
  t4048 = t3872*t3994;
  t4050 = t4036 + t4048;
  t4085 = t3872*t3962;
  t4089 = -1.*t3940*t3994;
  t4093 = t4085 + t4089;
  t4127 = Cos(var1[21]);
  t4131 = -1.*t4127;
  t4132 = 1. + t4131;
  t4138 = Sin(var1[21]);
  t4148 = -1.*t4020*t4050;
  t4150 = t4000*t4093;
  t4159 = t4148 + t4150;
  t4171 = t4000*t4050;
  t4175 = t4020*t4093;
  t4179 = t4171 + t4175;
  t2279 = -0.09*t2276;
  t2938 = 0.049*t2780;
  t3059 = t2279 + t2938;
  t4292 = Cos(var1[3]);
  t4295 = Sin(var1[3]);
  t1864 = -0.135*t141;
  t1868 = 0.049*t148;
  t1961 = t1864 + t1868;
  t143 = -0.049*t141;
  t151 = -0.135*t148;
  t156 = t143 + t151;
  t3304 = -0.049*t2276;
  t3437 = -0.09*t2780;
  t3454 = t3304 + t3437;
  t4303 = t2053*t4292;
  t4305 = -1.*t24*t224*t4295;
  t4306 = t4303 + t4305;
  t3667 = -0.049*t3644;
  t3694 = -0.21*t3690;
  t3698 = t3667 + t3694;
  t4298 = -1.*t4292*t224;
  t4299 = -1.*t2053*t24*t4295;
  t4301 = t4298 + t4299;
  t4310 = t148*t4306;
  t4313 = t44*t4295*t244;
  t4314 = t4310 + t4313;
  t3715 = -0.21*t3644;
  t3755 = 0.049*t3690;
  t3784 = t3715 + t3755;
  t3938 = -0.27068*t3931;
  t3941 = 0.00159*t3940;
  t3944 = t3938 + t3941;
  t4352 = t2780*t4301;
  t4359 = t2164*t4314;
  t4374 = t4352 + t4359;
  t4406 = t2164*t4301;
  t4407 = -1.*t2780*t4314;
  t4422 = t4406 + t4407;
  t3964 = -0.00159*t3931;
  t3967 = -0.27068*t3940;
  t3983 = t3964 + t3967;
  t4010 = 0.01841*t4006;
  t4021 = -0.70544*t4020;
  t4025 = t4010 + t4021;
  t4453 = -1.*t3690*t4374;
  t4459 = t3571*t4422;
  t4465 = t4453 + t4459;
  t4472 = t3571*t4374;
  t4473 = t3690*t4422;
  t4475 = t4472 + t4473;
  t4066 = -0.70544*t4006;
  t4068 = -0.01841*t4020;
  t4074 = t4066 + t4068;
  t4137 = -1.11344*t4132;
  t4144 = 0.02159*t4138;
  t4145 = t4137 + t4144;
  t4480 = t3940*t4465;
  t4486 = t3872*t4475;
  t4488 = t4480 + t4486;
  t4492 = t3872*t4465;
  t4496 = -1.*t3940*t4475;
  t4499 = t4492 + t4496;
  t4164 = -0.02159*t4132;
  t4167 = -1.11344*t4138;
  t4170 = t4164 + t4167;
  t4505 = -1.*t4020*t4488;
  t4528 = t4000*t4499;
  t4555 = t4505 + t4528;
  t4602 = t4000*t4488;
  t4609 = t4020*t4499;
  t4632 = t4602 + t4609;
  t4289 = -1.*t2053;
  t4291 = 1. + t4289;
  t4722 = t4292*t24*t224;
  t4723 = t2053*t4295;
  t4724 = t4722 + t4723;
  t4732 = t2053*t4292*t24;
  t4733 = -1.*t224*t4295;
  t4735 = t4732 + t4733;
  t4763 = t148*t4724;
  t4767 = -1.*t44*t4292*t244;
  t4775 = t4763 + t4767;
  t4816 = t2780*t4735;
  t4817 = t2164*t4775;
  t4819 = t4816 + t4817;
  t4821 = t2164*t4735;
  t4822 = -1.*t2780*t4775;
  t4823 = t4821 + t4822;
  t4825 = -1.*t3690*t4819;
  t4826 = t3571*t4823;
  t4827 = t4825 + t4826;
  t4835 = t3571*t4819;
  t4837 = t3690*t4823;
  t4838 = t4835 + t4837;
  t4860 = t3940*t4827;
  t4894 = t3872*t4838;
  t4902 = t4860 + t4894;
  t4931 = t3872*t4827;
  t4947 = -1.*t3940*t4838;
  t4961 = t4931 + t4947;
  t4984 = -1.*t4020*t4902;
  t4993 = t4000*t4961;
  t4999 = t4984 + t4993;
  t5011 = t4000*t4902;
  t5016 = t4020*t4961;
  t5021 = t5011 + t5016;
  t5029 = t4138*t4999;
  t5030 = t4127*t5021;
  t5036 = t5029 + t5030;
  t5064 = t4127*t4999;
  t5068 = -1.*t4138*t5021;
  t5071 = t5064 + t5068;
  t4798 = t44*t4724;
  t4805 = t4292*t148*t244;
  t4810 = t4798 + t4805;
  t4189 = t4138*t4159;
  t4191 = t4127*t4179;
  t4195 = t4189 + t4191;
  t4229 = t4127*t4159;
  t4245 = -1.*t4138*t4179;
  t4251 = t4229 + t4245;
  t4680 = t4138*t4555;
  t4683 = t4127*t4632;
  t4684 = t4680 + t4683;
  t4695 = t4127*t4555;
  t4698 = -1.*t4138*t4632;
  t4701 = t4695 + t4698;
  t4323 = t44*t4306;
  t4326 = -1.*t148*t4295*t244;
  t4338 = t4323 + t4326;
  t5089 = -0.766044*t5036;
  t5091 = 0.642788*t5071;
  t5093 = t5089 + t5091;
  t5166 = Power(t4810,2);
  t5168 = Power(t5093,2);
  t5169 = t5166 + t5168;
  t5170 = 1/Sqrt(t5169);
  t3108 = -1.*t24*t148;
  t3146 = t44*t224*t244;
  t3209 = t3108 + t3146;
  p_output1[0]=t156*t24 + 0.135*t224*t244 + t1961*t224*t244 + t2053*t244*t3059 - 0.1305*t3209 + t3454*t3562 + t3698*t3707 + t3784*t3850 + t3944*t3962 + t3983*t3994 + t4025*t4050 + t4074*t4093 + t4145*t4159 + t4170*t4179 + 0.0306*t4195 - 1.13106*t4251 + var1[0];
  p_output1[1]=-0.135*t4291*t4292 - 0.135*t224*t24*t4295 + t156*t244*t4295 + t3059*t4301 + t1961*t4306 + t3454*t4314 - 0.1305*t4338 + t3698*t4374 + t3784*t4422 + t3944*t4465 + t3983*t4475 + t4025*t4488 + t4074*t4499 + t4145*t4555 + t4170*t4632 + 0.0306*t4684 - 1.13106*t4701 + var1[1];
  p_output1[2]=0.135*t224*t24*t4292 - 1.*t156*t244*t4292 - 0.135*t4291*t4295 + t1961*t4724 + t3059*t4735 + t3454*t4775 - 0.1305*t4810 + t3698*t4819 + t3784*t4823 + t3944*t4827 + t3983*t4838 + t4025*t4902 + t4074*t4961 + t4145*t4999 + t4170*t5021 + 0.0306*t5036 - 1.13106*t5071 + var1[2];
  p_output1[3]=ArcTan(t5093,t4810);
  p_output1[4]=ArcTan(Sqrt(Power(0.642788*t4195 + 0.766044*t4251,2) + Power(0.642788*t4684 + 0.766044*t4701,2)),-0.642788*t5036 - 0.766044*t5071);
  p_output1[5]=ArcTan(-1.*(-0.766044*t4684 + 0.642788*t4701)*t4810*t5170 + t4338*t5093*t5170,(-0.766044*t4195 + 0.642788*t4251)*t4810*t5170 - 1.*t3209*t5093*t5170);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void pose_rightFoot_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




