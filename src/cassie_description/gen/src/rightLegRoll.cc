/*
 * Automatically Generated from Mathematica.
 * Thu 26 Aug 2021 14:19:39 GMT-07:00
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
  double t14;
  double t23;
  double t76;
  double t84;
  double t107;
  double t108;
  double t120;
  double t145;
  double t189;
  double t225;
  double t545;
  double t741;
  double t1432;
  double t988;
  double t989;
  double t1000;
  double t1027;
  double t1097;
  double t1165;
  double t1234;
  double t2383;
  double t2469;
  double t2569;
  double t3026;
  double t3086;
  double t3089;
  double t3159;
  double t3482;
  double t3487;
  double t3255;
  double t3263;
  double t3320;
  double t3443;
  double t3448;
  double t3455;
  double t3493;
  double t3501;
  double t3512;
  double t3534;
  double t3561;
  double t3569;
  double t3571;
  double t3688;
  double t3703;
  double t3716;
  double t3740;
  double t3752;
  double t3765;
  double t3768;
  double t3788;
  double t3810;
  double t3811;
  double t4052;
  double t4100;
  double t4122;
  double t1013;
  double t1039;
  double t1043;
  double t643;
  double t896;
  double t916;
  double t4439;
  double t4446;
  double t4457;
  double t1688;
  double t1922;
  double t2061;
  double t2093;
  double t2166;
  double t2347;
  double t3140;
  double t3162;
  double t3180;
  double t4376;
  double t4380;
  double t4434;
  double t4485;
  double t4488;
  double t4499;
  double t3393;
  double t3426;
  double t3435;
  double t3531;
  double t3550;
  double t3559;
  double t4544;
  double t4546;
  double t4548;
  double t4555;
  double t4559;
  double t4565;
  double t3627;
  double t3661;
  double t3684;
  double t3766;
  double t3773;
  double t3783;
  double t4605;
  double t4611;
  double t4616;
  double t4632;
  double t4670;
  double t4679;
  double t3898;
  double t3982;
  double t3983;
  double t4693;
  double t4710;
  double t4713;
  double t4732;
  double t4736;
  double t4739;
  t14 = Cos(var1[3]);
  t23 = Cos(var1[4]);
  t76 = Sin(var1[14]);
  t84 = t14*t23*t76;
  t107 = Cos(var1[14]);
  t108 = Sin(var1[3]);
  t120 = t107*t108;
  t145 = t84 + t120;
  t189 = Cos(var1[15]);
  t225 = -1.*t189;
  t545 = 1. + t225;
  t741 = Sin(var1[15]);
  t1432 = Sin(var1[4]);
  t988 = Cos(var1[16]);
  t989 = -1.*t988;
  t1000 = 1. + t989;
  t1027 = Sin(var1[16]);
  t1097 = t107*t14*t23;
  t1165 = -1.*t76*t108;
  t1234 = t1097 + t1165;
  t2383 = t741*t145;
  t2469 = -1.*t189*t14*t1432;
  t2569 = t2383 + t2469;
  t3026 = Cos(var1[17]);
  t3086 = -1.*t3026;
  t3089 = 1. + t3086;
  t3159 = Sin(var1[17]);
  t3482 = -1.*var1[17];
  t3487 = 0.226893 + t3482;
  t3255 = t1027*t1234;
  t3263 = t988*t2569;
  t3320 = t3255 + t3263;
  t3443 = t988*t1234;
  t3448 = -1.*t1027*t2569;
  t3455 = t3443 + t3448;
  t3493 = Cos(t3487);
  t3501 = -1.*t3493;
  t3512 = 1. + t3501;
  t3534 = Sin(t3487);
  t3561 = -1.*t3159*t3320;
  t3569 = t3026*t3455;
  t3571 = t3561 + t3569;
  t3688 = t3026*t3320;
  t3703 = t3159*t3455;
  t3716 = t3688 + t3703;
  t3740 = Cos(var1[21]);
  t3752 = -1.*t3740;
  t3765 = 1. + t3752;
  t3768 = Sin(var1[21]);
  t3788 = t3534*t3571;
  t3810 = t3493*t3716;
  t3811 = t3788 + t3810;
  t4052 = t3493*t3571;
  t4100 = -1.*t3534*t3716;
  t4122 = t4052 + t4100;
  t1013 = -0.09*t1000;
  t1039 = 0.049*t1027;
  t1043 = t1013 + t1039;
  t643 = -0.135*t545;
  t896 = 0.049*t741;
  t916 = t643 + t896;
  t4439 = t107*t14;
  t4446 = -1.*t23*t76*t108;
  t4457 = t4439 + t4446;
  t1688 = -0.049*t545;
  t1922 = -0.135*t741;
  t2061 = t1688 + t1922;
  t2093 = -0.049*t1000;
  t2166 = -0.09*t1027;
  t2347 = t2093 + t2166;
  t3140 = -0.049*t3089;
  t3162 = -0.21*t3159;
  t3180 = t3140 + t3162;
  t4376 = -1.*t14*t76;
  t4380 = -1.*t107*t23*t108;
  t4434 = t4376 + t4380;
  t4485 = t741*t4457;
  t4488 = t189*t108*t1432;
  t4499 = t4485 + t4488;
  t3393 = -0.21*t3089;
  t3426 = 0.049*t3159;
  t3435 = t3393 + t3426;
  t3531 = -0.70544*t3512;
  t3550 = -0.01841*t3534;
  t3559 = t3531 + t3550;
  t4544 = t1027*t4434;
  t4546 = t988*t4499;
  t4548 = t4544 + t4546;
  t4555 = t988*t4434;
  t4559 = -1.*t1027*t4499;
  t4565 = t4555 + t4559;
  t3627 = 0.01841*t3512;
  t3661 = -0.70544*t3534;
  t3684 = t3627 + t3661;
  t3766 = -0.02159*t3765;
  t3773 = -1.11344*t3768;
  t3783 = t3766 + t3773;
  t4605 = -1.*t3159*t4548;
  t4611 = t3026*t4565;
  t4616 = t4605 + t4611;
  t4632 = t3026*t4548;
  t4670 = t3159*t4565;
  t4679 = t4632 + t4670;
  t3898 = -1.11344*t3765;
  t3982 = 0.02159*t3768;
  t3983 = t3898 + t3982;
  t4693 = t3534*t4616;
  t4710 = t3493*t4679;
  t4713 = t4693 + t4710;
  t4732 = t3493*t4616;
  t4736 = -1.*t3534*t4679;
  t4739 = t4732 + t4736;
  p_output1[0]=ArcTan(-1.*t1043*t1234 + 0.049*t14*t1432 - 0.135*t145 + t14*t1432*t2061 - 1.*t2347*t2569 - 1.*t3180*t3320 - 1.*t3435*t3455 - 1.*t3559*t3571 - 1.*t3684*t3716 - 1.*t3783*t3811 - 1.*t3983*t4122 + 1.11344*(-1.*t3768*t3811 + t3740*t4122) + 0.02159*(t3740*t3811 + t3768*t4122) + 0.1305*(t145*t189 + t14*t1432*t741) - 1.*t145*t916,0.049*t108*t1432 + t108*t1432*t2061 + t1043*t4434 + 0.135*t4457 + t2347*t4499 + t3180*t4548 + t3435*t4565 + t3559*t4616 + t3684*t4679 + t3783*t4713 + t3983*t4739 - 1.11344*(-1.*t3768*t4713 + t3740*t4739) - 0.02159*(t3740*t4713 + t3768*t4739) - 0.1305*(t189*t4457 - 1.*t108*t1432*t741) + t4457*t916);
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




