/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:33 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "p_leftHeel_constraint.hh"
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
  double t53;
  double t62;
  double t368;
  double t419;
  double t464;
  double t660;
  double t704;
  double t781;
  double t810;
  double t534;
  double t574;
  double t625;
  double t913;
  double t1307;
  double t1352;
  double t1373;
  double t1407;
  double t1255;
  double t1289;
  double t1306;
  double t1468;
  double t1484;
  double t1595;
  double t1760;
  double t1823;
  double t1860;
  double t1887;
  double t2055;
  double t2110;
  double t2245;
  double t2311;
  double t2313;
  double t2319;
  double t2367;
  double t2371;
  double t2382;
  double t2392;
  double t2440;
  double t2476;
  double t2508;
  double t2732;
  double t2763;
  double t2838;
  double t2885;
  double t2892;
  double t2942;
  double t2979;
  double t3024;
  double t3038;
  double t3075;
  double t3154;
  double t3163;
  double t3167;
  double t3185;
  double t3186;
  double t3206;
  double t3221;
  double t3258;
  double t3268;
  double t3293;
  double t3341;
  double t3364;
  double t3375;
  double t213;
  double t241;
  double t341;
  double t348;
  double t3518;
  double t465;
  double t512;
  double t3507;
  double t3512;
  double t3525;
  double t3543;
  double t783;
  double t830;
  double t835;
  double t962;
  double t1037;
  double t1043;
  double t3573;
  double t3587;
  double t3590;
  double t3594;
  double t3599;
  double t3602;
  double t1394;
  double t1441;
  double t1443;
  double t1650;
  double t1699;
  double t1721;
  double t1876;
  double t1919;
  double t2026;
  double t3625;
  double t3626;
  double t3629;
  double t3631;
  double t3632;
  double t3633;
  double t2275;
  double t2281;
  double t2310;
  double t2386;
  double t2396;
  double t2418;
  double t3671;
  double t3672;
  double t3673;
  double t3689;
  double t3692;
  double t3701;
  double t2559;
  double t2590;
  double t2652;
  double t2960;
  double t2983;
  double t3003;
  double t3717;
  double t3721;
  double t3723;
  double t3725;
  double t3728;
  double t3730;
  double t3109;
  double t3132;
  double t3152;
  double t3216;
  double t3228;
  double t3229;
  double t3732;
  double t3734;
  double t3735;
  double t3738;
  double t3744;
  double t3751;
  double t3324;
  double t3331;
  double t3338;
  double t3756;
  double t3758;
  double t3759;
  double t3762;
  double t3764;
  double t3765;
  double t3801;
  double t3802;
  double t3804;
  double t3819;
  double t3821;
  double t3827;
  double t3830;
  double t3835;
  double t3840;
  double t3852;
  double t3853;
  double t3857;
  double t3860;
  double t3861;
  double t3862;
  double t3864;
  double t3865;
  double t3868;
  double t3874;
  double t3875;
  double t3877;
  double t3879;
  double t3882;
  double t3885;
  double t3891;
  double t3892;
  double t3894;
  double t3897;
  double t3914;
  double t3915;
  double t3919;
  double t3920;
  double t3921;
  double t3927;
  double t3928;
  double t3929;
  double t3931;
  double t3940;
  double t3941;
  t53 = Cos(var1[4]);
  t62 = Cos(var1[6]);
  t368 = Sin(var1[5]);
  t419 = Sin(var1[4]);
  t464 = Sin(var1[6]);
  t660 = Cos(var1[7]);
  t704 = -1.*t660;
  t781 = 1. + t704;
  t810 = Sin(var1[7]);
  t534 = -1.*t53*t62*t368;
  t574 = t419*t464;
  t625 = t534 + t574;
  t913 = Cos(var1[5]);
  t1307 = Cos(var1[8]);
  t1352 = -1.*t1307;
  t1373 = 1. + t1352;
  t1407 = Sin(var1[8]);
  t1255 = t53*t913*t660;
  t1289 = t625*t810;
  t1306 = t1255 + t1289;
  t1468 = t62*t419;
  t1484 = t53*t368*t464;
  t1595 = t1468 + t1484;
  t1760 = Cos(var1[9]);
  t1823 = -1.*t1760;
  t1860 = 1. + t1823;
  t1887 = Sin(var1[9]);
  t2055 = t1307*t1306;
  t2110 = t1595*t1407;
  t2245 = t2055 + t2110;
  t2311 = t1307*t1595;
  t2313 = -1.*t1306*t1407;
  t2319 = t2311 + t2313;
  t2367 = Cos(var1[10]);
  t2371 = -1.*t2367;
  t2382 = 1. + t2371;
  t2392 = Sin(var1[10]);
  t2440 = -1.*t1887*t2245;
  t2476 = t1760*t2319;
  t2508 = t2440 + t2476;
  t2732 = t1760*t2245;
  t2763 = t1887*t2319;
  t2838 = t2732 + t2763;
  t2885 = Cos(var1[11]);
  t2892 = -1.*t2885;
  t2942 = 1. + t2892;
  t2979 = Sin(var1[11]);
  t3024 = t2392*t2508;
  t3038 = t2367*t2838;
  t3075 = t3024 + t3038;
  t3154 = t2367*t2508;
  t3163 = -1.*t2392*t2838;
  t3167 = t3154 + t3163;
  t3185 = Cos(var1[13]);
  t3186 = -1.*t3185;
  t3206 = 1. + t3186;
  t3221 = Sin(var1[13]);
  t3258 = -1.*t2979*t3075;
  t3268 = t2885*t3167;
  t3293 = t3258 + t3268;
  t3341 = t2885*t3075;
  t3364 = t2979*t3167;
  t3375 = t3341 + t3364;
  t213 = -1.*t62;
  t241 = 1. + t213;
  t341 = 0.135*t241;
  t348 = 0. + t341;
  t3518 = Sin(var1[3]);
  t465 = -0.135*t464;
  t512 = 0. + t465;
  t3507 = Cos(var1[3]);
  t3512 = t3507*t913;
  t3525 = -1.*t3518*t419*t368;
  t3543 = t3512 + t3525;
  t783 = 0.135*t781;
  t830 = 0.049*t810;
  t835 = 0. + t783 + t830;
  t962 = -0.049*t781;
  t1037 = 0.135*t810;
  t1043 = 0. + t962 + t1037;
  t3573 = t62*t3543;
  t3587 = -1.*t53*t3518*t464;
  t3590 = t3573 + t3587;
  t3594 = t913*t3518*t419;
  t3599 = t3507*t368;
  t3602 = t3594 + t3599;
  t1394 = -0.049*t1373;
  t1441 = -0.09*t1407;
  t1443 = 0. + t1394 + t1441;
  t1650 = -0.09*t1373;
  t1699 = 0.049*t1407;
  t1721 = 0. + t1650 + t1699;
  t1876 = -0.049*t1860;
  t1919 = -0.21*t1887;
  t2026 = 0. + t1876 + t1919;
  t3625 = t660*t3602;
  t3626 = t3590*t810;
  t3629 = t3625 + t3626;
  t3631 = -1.*t53*t62*t3518;
  t3632 = -1.*t3543*t464;
  t3633 = t3631 + t3632;
  t2275 = -0.21*t1860;
  t2281 = 0.049*t1887;
  t2310 = 0. + t2275 + t2281;
  t2386 = -0.27068*t2382;
  t2396 = 0.00159*t2392;
  t2418 = 0. + t2386 + t2396;
  t3671 = t1307*t3629;
  t3672 = t3633*t1407;
  t3673 = t3671 + t3672;
  t3689 = t1307*t3633;
  t3692 = -1.*t3629*t1407;
  t3701 = t3689 + t3692;
  t2559 = -0.00159*t2382;
  t2590 = -0.27068*t2392;
  t2652 = 0. + t2559 + t2590;
  t2960 = 0.01841*t2942;
  t2983 = -0.70544*t2979;
  t3003 = 0. + t2960 + t2983;
  t3717 = -1.*t1887*t3673;
  t3721 = t1760*t3701;
  t3723 = t3717 + t3721;
  t3725 = t1760*t3673;
  t3728 = t1887*t3701;
  t3730 = t3725 + t3728;
  t3109 = -0.70544*t2942;
  t3132 = -0.01841*t2979;
  t3152 = 0. + t3109 + t3132;
  t3216 = -1.11344*t3206;
  t3228 = 0.02159*t3221;
  t3229 = 0. + t3216 + t3228;
  t3732 = t2392*t3723;
  t3734 = t2367*t3730;
  t3735 = t3732 + t3734;
  t3738 = t2367*t3723;
  t3744 = -1.*t2392*t3730;
  t3751 = t3738 + t3744;
  t3324 = -0.02159*t3206;
  t3331 = -1.11344*t3221;
  t3338 = 0. + t3324 + t3331;
  t3756 = -1.*t2979*t3735;
  t3758 = t2885*t3751;
  t3759 = t3756 + t3758;
  t3762 = t2885*t3735;
  t3764 = t2979*t3751;
  t3765 = t3762 + t3764;
  t3801 = t913*t3518;
  t3802 = t3507*t419*t368;
  t3804 = t3801 + t3802;
  t3819 = t62*t3804;
  t3821 = t3507*t53*t464;
  t3827 = t3819 + t3821;
  t3830 = -1.*t3507*t913*t419;
  t3835 = t3518*t368;
  t3840 = t3830 + t3835;
  t3852 = t660*t3840;
  t3853 = t3827*t810;
  t3857 = t3852 + t3853;
  t3860 = t3507*t53*t62;
  t3861 = -1.*t3804*t464;
  t3862 = t3860 + t3861;
  t3864 = t1307*t3857;
  t3865 = t3862*t1407;
  t3868 = t3864 + t3865;
  t3874 = t1307*t3862;
  t3875 = -1.*t3857*t1407;
  t3877 = t3874 + t3875;
  t3879 = -1.*t1887*t3868;
  t3882 = t1760*t3877;
  t3885 = t3879 + t3882;
  t3891 = t1760*t3868;
  t3892 = t1887*t3877;
  t3894 = t3891 + t3892;
  t3897 = t2392*t3885;
  t3914 = t2367*t3894;
  t3915 = t3897 + t3914;
  t3919 = t2367*t3885;
  t3920 = -1.*t2392*t3894;
  t3921 = t3919 + t3920;
  t3927 = -1.*t2979*t3915;
  t3928 = t2885*t3921;
  t3929 = t3927 + t3928;
  t3931 = t2885*t3915;
  t3940 = t2979*t3921;
  t3941 = t3931 + t3940;
  p_output1[0]=0. + t1306*t1443 + t1595*t1721 + t2026*t2245 + t2310*t2319 + t2418*t2508 + t2652*t2838 + t3003*t3075 + t3152*t3167 + t3229*t3293 + t3338*t3375 - 0.014395*(t3221*t3293 + t3185*t3375) - 1.184683*(t3185*t3293 - 1.*t3221*t3375) + t419*t512 - 1.*t348*t368*t53 + t625*t835 + t1043*t53*t913 + 0.1305*(t625*t660 - 1.*t53*t810*t913) + var1[0];
  p_output1[1]=0. + t348*t3543 + t1043*t3602 + t1443*t3629 + t1721*t3633 + t2026*t3673 + t2310*t3701 + t2418*t3723 + t2652*t3730 + t3003*t3735 + t3152*t3751 + t3229*t3759 + t3338*t3765 - 0.014395*(t3221*t3759 + t3185*t3765) - 1.184683*(t3185*t3759 - 1.*t3221*t3765) - 1.*t3518*t512*t53 + 0.1305*(t3590*t660 - 1.*t3602*t810) + t3590*t835 + var1[1];
  p_output1[2]=0. + t348*t3804 + t1043*t3840 + t1443*t3857 + t1721*t3862 + t2026*t3868 + t2310*t3877 + t2418*t3885 + t2652*t3894 + t3003*t3915 + t3152*t3921 + t3229*t3929 + t3338*t3941 - 0.014395*(t3221*t3929 + t3185*t3941) - 1.184683*(t3185*t3929 - 1.*t3221*t3941) + t3507*t512*t53 + 0.1305*(t3827*t660 - 1.*t3840*t810) + t3827*t835 + var1[2];
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

void p_leftHeel_constraint_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




