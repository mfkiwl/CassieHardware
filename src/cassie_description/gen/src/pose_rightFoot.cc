/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:03 GMT-08:00
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
  double t414;
  double t972;
  double t1168;
  double t1317;
  double t1336;
  double t1371;
  double t1548;
  double t1986;
  double t2153;
  double t2169;
  double t2213;
  double t1818;
  double t1854;
  double t1949;
  double t2338;
  double t2345;
  double t2358;
  double t2713;
  double t2719;
  double t2742;
  double t2873;
  double t2537;
  double t2650;
  double t2686;
  double t2966;
  double t2967;
  double t2968;
  double t3000;
  double t3006;
  double t3011;
  double t3014;
  double t2991;
  double t2994;
  double t2996;
  double t3031;
  double t3044;
  double t3054;
  double t3156;
  double t559;
  double t703;
  double t743;
  double t1014;
  double t1025;
  double t1128;
  double t1206;
  double t1209;
  double t3234;
  double t1415;
  double t1549;
  double t1628;
  double t1702;
  double t1703;
  double t1712;
  double t3251;
  double t3256;
  double t3257;
  double t3264;
  double t3265;
  double t3266;
  double t2172;
  double t2228;
  double t2277;
  double t2428;
  double t2429;
  double t2435;
  double t3274;
  double t3282;
  double t3286;
  double t3303;
  double t3317;
  double t3318;
  double t2820;
  double t2888;
  double t2939;
  double t2970;
  double t2976;
  double t2981;
  double t3325;
  double t3327;
  double t3328;
  double t3333;
  double t3334;
  double t3335;
  double t3013;
  double t3015;
  double t3019;
  double t3061;
  double t3081;
  double t3108;
  double t3339;
  double t3343;
  double t3344;
  double t3349;
  double t3354;
  double t3358;
  double t3207;
  double t3211;
  double t3215;
  double t3235;
  double t3237;
  double t3242;
  double t3443;
  double t3457;
  double t3461;
  double t3468;
  double t3469;
  double t3472;
  double t3487;
  double t3495;
  double t3499;
  double t3508;
  double t3509;
  double t3510;
  double t3513;
  double t3516;
  double t3517;
  double t3519;
  double t3520;
  double t3521;
  double t3529;
  double t3536;
  double t3539;
  double t3550;
  double t3554;
  double t3562;
  double t3564;
  double t3565;
  double t3566;
  double t3569;
  double t3570;
  double t3571;
  double t3110;
  double t3114;
  double t3116;
  double t3138;
  double t3141;
  double t3149;
  double t3368;
  double t3373;
  double t3374;
  double t3376;
  double t3377;
  double t3378;
  double t3582;
  double t3585;
  double t3586;
  double t3643;
  double t3648;
  double t3649;
  double t3654;
  double t3660;
  double t3664;
  t414 = Cos(var1[15]);
  t972 = Cos(var1[16]);
  t1168 = Sin(var1[16]);
  t1317 = Cos(var1[17]);
  t1336 = -1.*t1317;
  t1371 = 1. + t1336;
  t1548 = Sin(var1[17]);
  t1986 = Cos(var1[18]);
  t2153 = -1.*t1986;
  t2169 = 1. + t2153;
  t2213 = Sin(var1[18]);
  t1818 = t414*t972*t1317;
  t1854 = -1.*t414*t1168*t1548;
  t1949 = t1818 + t1854;
  t2338 = -1.*t414*t1317*t1168;
  t2345 = -1.*t414*t972*t1548;
  t2358 = t2338 + t2345;
  t2713 = Cos(var1[19]);
  t2719 = -1.*t2713;
  t2742 = 1. + t2719;
  t2873 = Sin(var1[19]);
  t2537 = t1986*t1949;
  t2650 = t2358*t2213;
  t2686 = t2537 + t2650;
  t2966 = t1986*t2358;
  t2967 = -1.*t1949*t2213;
  t2968 = t2966 + t2967;
  t3000 = Cos(var1[21]);
  t3006 = -1.*t3000;
  t3011 = 1. + t3006;
  t3014 = Sin(var1[21]);
  t2991 = t2713*t2686;
  t2994 = t2968*t2873;
  t2996 = t2991 + t2994;
  t3031 = t2713*t2968;
  t3044 = -1.*t2686*t2873;
  t3054 = t3031 + t3044;
  t3156 = Cos(var1[14]);
  t559 = -1.*t414;
  t703 = 1. + t559;
  t743 = Sin(var1[15]);
  t1014 = -1.*t972;
  t1025 = 1. + t1014;
  t1128 = -0.049*t1025;
  t1206 = -0.09*t1168;
  t1209 = t1128 + t1206;
  t3234 = Sin(var1[14]);
  t1415 = -0.049*t1371;
  t1549 = -0.21*t1548;
  t1628 = t1415 + t1549;
  t1702 = -0.21*t1371;
  t1703 = 0.049*t1548;
  t1712 = t1702 + t1703;
  t3251 = t3156*t972*t743;
  t3256 = -1.*t3234*t1168;
  t3257 = t3251 + t3256;
  t3264 = -1.*t972*t3234;
  t3265 = -1.*t3156*t743*t1168;
  t3266 = t3264 + t3265;
  t2172 = -0.00159*t2169;
  t2228 = -0.27068*t2213;
  t2277 = t2172 + t2228;
  t2428 = -0.27068*t2169;
  t2429 = 0.00159*t2213;
  t2435 = t2428 + t2429;
  t3274 = t1317*t3257;
  t3282 = t3266*t1548;
  t3286 = t3274 + t3282;
  t3303 = t1317*t3266;
  t3317 = -1.*t3257*t1548;
  t3318 = t3303 + t3317;
  t2820 = 0.01841*t2742;
  t2888 = -0.70544*t2873;
  t2939 = t2820 + t2888;
  t2970 = -0.70544*t2742;
  t2976 = -0.01841*t2873;
  t2981 = t2970 + t2976;
  t3325 = t1986*t3286;
  t3327 = t3318*t2213;
  t3328 = t3325 + t3327;
  t3333 = t1986*t3318;
  t3334 = -1.*t3286*t2213;
  t3335 = t3333 + t3334;
  t3013 = -0.02159*t3011;
  t3015 = -1.11344*t3014;
  t3019 = t3013 + t3015;
  t3061 = -1.11344*t3011;
  t3081 = 0.02159*t3014;
  t3108 = t3061 + t3081;
  t3339 = t2713*t3328;
  t3343 = t3335*t2873;
  t3344 = t3339 + t3343;
  t3349 = t2713*t3335;
  t3354 = -1.*t3328*t2873;
  t3358 = t3349 + t3354;
  t3207 = -0.135*t703;
  t3211 = 0.049*t743;
  t3215 = t3207 + t3211;
  t3235 = -0.09*t1025;
  t3237 = 0.049*t1168;
  t3242 = t3235 + t3237;
  t3443 = t972*t3234*t743;
  t3457 = t3156*t1168;
  t3461 = t3443 + t3457;
  t3468 = t3156*t972;
  t3469 = -1.*t3234*t743*t1168;
  t3472 = t3468 + t3469;
  t3487 = t1317*t3461;
  t3495 = t3472*t1548;
  t3499 = t3487 + t3495;
  t3508 = t1317*t3472;
  t3509 = -1.*t3461*t1548;
  t3510 = t3508 + t3509;
  t3513 = t1986*t3499;
  t3516 = t3510*t2213;
  t3517 = t3513 + t3516;
  t3519 = t1986*t3510;
  t3520 = -1.*t3499*t2213;
  t3521 = t3519 + t3520;
  t3529 = t2713*t3517;
  t3536 = t3521*t2873;
  t3539 = t3529 + t3536;
  t3550 = t2713*t3521;
  t3554 = -1.*t3517*t2873;
  t3562 = t3550 + t3554;
  t3564 = t3000*t3539;
  t3565 = t3562*t3014;
  t3566 = t3564 + t3565;
  t3569 = t3000*t3562;
  t3570 = -1.*t3539*t3014;
  t3571 = t3569 + t3570;
  t3110 = t3000*t2996;
  t3114 = t3054*t3014;
  t3116 = t3110 + t3114;
  t3138 = t3000*t3054;
  t3141 = -1.*t2996*t3014;
  t3149 = t3138 + t3141;
  t3368 = t3000*t3344;
  t3373 = t3358*t3014;
  t3374 = t3368 + t3373;
  t3376 = t3000*t3358;
  t3377 = -1.*t3344*t3014;
  t3378 = t3376 + t3377;
  t3582 = -0.766044*t3566;
  t3585 = 0.642788*t3571;
  t3586 = t3582 + t3585;
  t3643 = Power(t414,2);
  t3648 = Power(t3234,2);
  t3649 = t3643*t3648;
  t3654 = Power(t3586,2);
  t3660 = t3649 + t3654;
  t3664 = 1/Sqrt(t3660);
  p_output1[0]=t1949*t2277 + t2358*t2435 + t2686*t2939 + t2968*t2981 + t2996*t3019 + t3054*t3108 + 0.0306*t3116 - 1.13106*t3149 + t1209*t414 - 1.*t1168*t1712*t414 - 0.049*t703 - 0.0045*t743 + t1628*t414*t972;
  p_output1[1]=-0.135*(1. - 1.*t3156) + t3156*t3215 - 1.*t3234*t3242 + t1628*t3257 + t1712*t3266 + t2277*t3286 + t2435*t3318 + t2939*t3328 + t2981*t3335 + t3019*t3344 + t3108*t3358 + 0.0306*t3374 - 1.13106*t3378 - 0.1305*t3156*t414 + t1209*t3156*t743;
  p_output1[2]=0.135*t3234 + t3215*t3234 + t3156*t3242 + t1628*t3461 + t1712*t3472 + t2277*t3499 + t2435*t3510 + t2939*t3517 + t2981*t3521 + t3019*t3539 + t3108*t3562 + 0.0306*t3566 - 1.13106*t3571 - 0.1305*t3234*t414 + t1209*t3234*t743;
  p_output1[3]=ArcTan(t3586,t3234*t414);
  p_output1[4]=ArcTan(Sqrt(Power(0.642788*t3116 + 0.766044*t3149,2) + Power(0.642788*t3374 + 0.766044*t3378,2)),-0.642788*t3566 - 0.766044*t3571);
  p_output1[5]=ArcTan(-1.*t3234*(-0.766044*t3374 + 0.642788*t3378)*t3664*t414 + t3156*t3586*t3664*t414,(-0.766044*t3116 + 0.642788*t3149)*t3234*t3664*t414 + t3586*t3664*t743);
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




