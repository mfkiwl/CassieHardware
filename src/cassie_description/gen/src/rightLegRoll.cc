/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:57 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "rightLegRoll.hh"
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
  double t207;
  double t337;
  double t403;
  double t529;
  double t559;
  double t574;
  double t650;
  double t834;
  double t1097;
  double t1322;
  double t1356;
  double t1418;
  double t2690;
  double t1641;
  double t1940;
  double t1977;
  double t2208;
  double t2537;
  double t2583;
  double t2614;
  double t3320;
  double t3330;
  double t3384;
  double t3514;
  double t3631;
  double t3638;
  double t3791;
  double t4014;
  double t4036;
  double t3815;
  double t3823;
  double t3851;
  double t3941;
  double t3948;
  double t3953;
  double t4043;
  double t4045;
  double t4056;
  double t4062;
  double t4087;
  double t4095;
  double t4142;
  double t4277;
  double t4324;
  double t4362;
  double t4385;
  double t4435;
  double t4444;
  double t4502;
  double t4538;
  double t4547;
  double t4548;
  double t4586;
  double t4597;
  double t4600;
  double t2204;
  double t2433;
  double t2459;
  double t1386;
  double t1489;
  double t1530;
  double t4959;
  double t4989;
  double t5001;
  double t2843;
  double t2882;
  double t3055;
  double t3152;
  double t3159;
  double t3308;
  double t3706;
  double t3802;
  double t3812;
  double t4809;
  double t4812;
  double t4877;
  double t5142;
  double t5153;
  double t5165;
  double t3896;
  double t3908;
  double t3932;
  double t4058;
  double t4071;
  double t4081;
  double t5311;
  double t5320;
  double t5334;
  double t5388;
  double t5403;
  double t5407;
  double t4179;
  double t4237;
  double t4251;
  double t4478;
  double t4509;
  double t4536;
  double t5459;
  double t5460;
  double t5470;
  double t5484;
  double t5509;
  double t5516;
  double t4555;
  double t4565;
  double t4575;
  double t5530;
  double t5533;
  double t5537;
  double t5546;
  double t5555;
  double t5559;
  t207 = Cos(var1[3]);
  t337 = Cos(var1[4]);
  t403 = Sin(var1[14]);
  t529 = t207*t337*t403;
  t559 = Cos(var1[14]);
  t574 = Sin(var1[3]);
  t650 = t559*t574;
  t834 = t529 + t650;
  t1097 = Cos(var1[15]);
  t1322 = -1.*t1097;
  t1356 = 1. + t1322;
  t1418 = Sin(var1[15]);
  t2690 = Sin(var1[4]);
  t1641 = Cos(var1[16]);
  t1940 = -1.*t1641;
  t1977 = 1. + t1940;
  t2208 = Sin(var1[16]);
  t2537 = t559*t207*t337;
  t2583 = -1.*t403*t574;
  t2614 = t2537 + t2583;
  t3320 = t1418*t834;
  t3330 = -1.*t1097*t207*t2690;
  t3384 = t3320 + t3330;
  t3514 = Cos(var1[17]);
  t3631 = -1.*t3514;
  t3638 = 1. + t3631;
  t3791 = Sin(var1[17]);
  t4014 = -1.*var1[17];
  t4036 = 0.226893 + t4014;
  t3815 = t2208*t2614;
  t3823 = t1641*t3384;
  t3851 = t3815 + t3823;
  t3941 = t1641*t2614;
  t3948 = -1.*t2208*t3384;
  t3953 = t3941 + t3948;
  t4043 = Cos(t4036);
  t4045 = -1.*t4043;
  t4056 = 1. + t4045;
  t4062 = Sin(t4036);
  t4087 = -1.*t3791*t3851;
  t4095 = t3514*t3953;
  t4142 = t4087 + t4095;
  t4277 = t3514*t3851;
  t4324 = t3791*t3953;
  t4362 = t4277 + t4324;
  t4385 = Cos(var1[21]);
  t4435 = -1.*t4385;
  t4444 = 1. + t4435;
  t4502 = Sin(var1[21]);
  t4538 = t4062*t4142;
  t4547 = t4043*t4362;
  t4548 = t4538 + t4547;
  t4586 = t4043*t4142;
  t4597 = -1.*t4062*t4362;
  t4600 = t4586 + t4597;
  t2204 = -0.09*t1977;
  t2433 = 0.049*t2208;
  t2459 = t2204 + t2433;
  t1386 = -0.135*t1356;
  t1489 = 0.049*t1418;
  t1530 = t1386 + t1489;
  t4959 = t559*t207;
  t4989 = -1.*t337*t403*t574;
  t5001 = t4959 + t4989;
  t2843 = -0.049*t1356;
  t2882 = -0.135*t1418;
  t3055 = t2843 + t2882;
  t3152 = -0.049*t1977;
  t3159 = -0.09*t2208;
  t3308 = t3152 + t3159;
  t3706 = -0.049*t3638;
  t3802 = -0.21*t3791;
  t3812 = t3706 + t3802;
  t4809 = -1.*t207*t403;
  t4812 = -1.*t559*t337*t574;
  t4877 = t4809 + t4812;
  t5142 = t1418*t5001;
  t5153 = t1097*t574*t2690;
  t5165 = t5142 + t5153;
  t3896 = -0.21*t3638;
  t3908 = 0.049*t3791;
  t3932 = t3896 + t3908;
  t4058 = -0.70544*t4056;
  t4071 = -0.01841*t4062;
  t4081 = t4058 + t4071;
  t5311 = t2208*t4877;
  t5320 = t1641*t5165;
  t5334 = t5311 + t5320;
  t5388 = t1641*t4877;
  t5403 = -1.*t2208*t5165;
  t5407 = t5388 + t5403;
  t4179 = 0.01841*t4056;
  t4237 = -0.70544*t4062;
  t4251 = t4179 + t4237;
  t4478 = -0.02159*t4444;
  t4509 = -1.11344*t4502;
  t4536 = t4478 + t4509;
  t5459 = -1.*t3791*t5334;
  t5460 = t3514*t5407;
  t5470 = t5459 + t5460;
  t5484 = t3514*t5334;
  t5509 = t3791*t5407;
  t5516 = t5484 + t5509;
  t4555 = -1.11344*t4444;
  t4565 = 0.02159*t4502;
  t4575 = t4555 + t4565;
  t5530 = t4062*t5470;
  t5533 = t4043*t5516;
  t5537 = t5530 + t5533;
  t5546 = t4043*t5470;
  t5555 = -1.*t4062*t5516;
  t5559 = t5546 + t5555;
  p_output1[0]=ArcTan(-1.*t2459*t2614 + 0.049*t207*t2690 + t207*t2690*t3055 - 1.*t3308*t3384 - 1.*t3812*t3851 - 1.*t3932*t3953 - 1.*t4081*t4142 - 1.*t4251*t4362 - 1.*t4536*t4548 - 1.*t4575*t4600 + 1.11344*(-1.*t4502*t4548 + t4385*t4600) + 0.02159*(t4385*t4548 + t4502*t4600) - 0.135*t834 - 1.*t1530*t834 + 0.1305*(t1418*t207*t2690 + t1097*t834),t2459*t4877 + 0.135*t5001 + t1530*t5001 + t3308*t5165 + t3812*t5334 + t3932*t5407 + t4081*t5470 + t4251*t5516 + t4536*t5537 + t4575*t5559 - 1.11344*(-1.*t4502*t5537 + t4385*t5559) - 0.02159*(t4385*t5537 + t4502*t5559) + 0.049*t2690*t574 + t2690*t3055*t574 - 0.1305*(t1097*t5001 - 1.*t1418*t2690*t574));
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

void rightLegRoll_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




