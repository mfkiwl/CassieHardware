/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:48 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "p_rightToe_constraint.hh"
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
  double t18;
  double t21;
  double t24;
  double t29;
  double t39;
  double t49;
  double t66;
  double t71;
  double t88;
  double t19;
  double t115;
  double t121;
  double t124;
  double t132;
  double t133;
  double t136;
  double t146;
  double t160;
  double t163;
  double t168;
  double t200;
  double t201;
  double t209;
  double t215;
  double t216;
  double t218;
  double t231;
  double t239;
  double t241;
  double t242;
  double t267;
  double t268;
  double t282;
  double t284;
  double t285;
  double t286;
  double t291;
  double t299;
  double t304;
  double t305;
  double t326;
  double t329;
  double t330;
  double t336;
  double t337;
  double t344;
  double t346;
  double t359;
  double t360;
  double t363;
  double t378;
  double t380;
  double t383;
  double t388;
  double t389;
  double t392;
  double t400;
  double t414;
  double t423;
  double t424;
  double t439;
  double t441;
  double t448;
  double t50;
  double t55;
  double t32;
  double t41;
  double t45;
  double t482;
  double t73;
  double t80;
  double t83;
  double t84;
  double t486;
  double t95;
  double t102;
  double t114;
  double t503;
  double t506;
  double t510;
  double t141;
  double t148;
  double t151;
  double t485;
  double t490;
  double t493;
  double t515;
  double t517;
  double t518;
  double t185;
  double t186;
  double t190;
  double t225;
  double t235;
  double t236;
  double t520;
  double t524;
  double t528;
  double t539;
  double t540;
  double t541;
  double t260;
  double t263;
  double t265;
  double t287;
  double t293;
  double t297;
  double t549;
  double t553;
  double t559;
  double t562;
  double t566;
  double t571;
  double t317;
  double t319;
  double t320;
  double t345;
  double t354;
  double t355;
  double t574;
  double t576;
  double t586;
  double t592;
  double t593;
  double t594;
  double t367;
  double t373;
  double t377;
  double t395;
  double t401;
  double t410;
  double t597;
  double t598;
  double t602;
  double t615;
  double t618;
  double t628;
  double t429;
  double t430;
  double t433;
  double t636;
  double t641;
  double t644;
  double t648;
  double t656;
  double t658;
  double t721;
  double t722;
  double t724;
  double t703;
  double t705;
  double t709;
  double t729;
  double t730;
  double t732;
  double t735;
  double t738;
  double t740;
  double t753;
  double t754;
  double t756;
  double t764;
  double t766;
  double t767;
  double t778;
  double t779;
  double t780;
  double t787;
  double t788;
  double t791;
  double t801;
  double t807;
  double t808;
  double t814;
  double t815;
  double t816;
  double t825;
  double t827;
  double t831;
  double t833;
  double t834;
  double t836;
  double t842;
  double t844;
  double t845;
  t18 = Cos(var1[4]);
  t21 = Cos(var1[15]);
  t24 = -1.*t21;
  t29 = 1. + t24;
  t39 = Sin(var1[15]);
  t49 = Sin(var1[14]);
  t66 = Sin(var1[4]);
  t71 = Cos(var1[14]);
  t88 = Sin(var1[5]);
  t19 = Cos(var1[5]);
  t115 = t49*t66;
  t121 = -1.*t71*t18*t88;
  t124 = t115 + t121;
  t132 = Cos(var1[16]);
  t133 = -1.*t132;
  t136 = 1. + t133;
  t146 = Sin(var1[16]);
  t160 = t71*t66;
  t163 = t18*t49*t88;
  t168 = t160 + t163;
  t200 = t21*t18*t19;
  t201 = t39*t124;
  t209 = t200 + t201;
  t215 = Cos(var1[17]);
  t216 = -1.*t215;
  t218 = 1. + t216;
  t231 = Sin(var1[17]);
  t239 = t146*t168;
  t241 = t132*t209;
  t242 = t239 + t241;
  t267 = t132*t168;
  t268 = -1.*t146*t209;
  t282 = t267 + t268;
  t284 = Cos(var1[18]);
  t285 = -1.*t284;
  t286 = 1. + t285;
  t291 = Sin(var1[18]);
  t299 = -1.*t231*t242;
  t304 = t215*t282;
  t305 = t299 + t304;
  t326 = t215*t242;
  t329 = t231*t282;
  t330 = t326 + t329;
  t336 = Cos(var1[19]);
  t337 = -1.*t336;
  t344 = 1. + t337;
  t346 = Sin(var1[19]);
  t359 = t291*t305;
  t360 = t284*t330;
  t363 = t359 + t360;
  t378 = t284*t305;
  t380 = -1.*t291*t330;
  t383 = t378 + t380;
  t388 = Cos(var1[21]);
  t389 = -1.*t388;
  t392 = 1. + t389;
  t400 = Sin(var1[21]);
  t414 = -1.*t346*t363;
  t423 = t336*t383;
  t424 = t414 + t423;
  t439 = t336*t363;
  t441 = t346*t383;
  t448 = t439 + t441;
  t50 = 0.135*t49;
  t55 = 0. + t50;
  t32 = -0.049*t29;
  t41 = -0.135*t39;
  t45 = 0. + t32 + t41;
  t482 = Sin(var1[3]);
  t73 = -1.*t71;
  t80 = 1. + t73;
  t83 = -0.135*t80;
  t84 = 0. + t83;
  t486 = Cos(var1[3]);
  t95 = -0.135*t29;
  t102 = 0.049*t39;
  t114 = 0. + t95 + t102;
  t503 = t486*t19;
  t506 = -1.*t482*t66*t88;
  t510 = t503 + t506;
  t141 = -0.09*t136;
  t148 = 0.049*t146;
  t151 = 0. + t141 + t148;
  t485 = t19*t482*t66;
  t490 = t486*t88;
  t493 = t485 + t490;
  t515 = -1.*t18*t49*t482;
  t517 = t71*t510;
  t518 = t515 + t517;
  t185 = -0.049*t136;
  t186 = -0.09*t146;
  t190 = 0. + t185 + t186;
  t225 = -0.049*t218;
  t235 = -0.21*t231;
  t236 = 0. + t225 + t235;
  t520 = -1.*t71*t18*t482;
  t524 = -1.*t49*t510;
  t528 = t520 + t524;
  t539 = t21*t493;
  t540 = t39*t518;
  t541 = t539 + t540;
  t260 = -0.21*t218;
  t263 = 0.049*t231;
  t265 = 0. + t260 + t263;
  t287 = -0.27068*t286;
  t293 = 0.00159*t291;
  t297 = 0. + t287 + t293;
  t549 = t146*t528;
  t553 = t132*t541;
  t559 = t549 + t553;
  t562 = t132*t528;
  t566 = -1.*t146*t541;
  t571 = t562 + t566;
  t317 = -0.00159*t286;
  t319 = -0.27068*t291;
  t320 = 0. + t317 + t319;
  t345 = 0.01841*t344;
  t354 = -0.70544*t346;
  t355 = 0. + t345 + t354;
  t574 = -1.*t231*t559;
  t576 = t215*t571;
  t586 = t574 + t576;
  t592 = t215*t559;
  t593 = t231*t571;
  t594 = t592 + t593;
  t367 = -0.70544*t344;
  t373 = -0.01841*t346;
  t377 = 0. + t367 + t373;
  t395 = -1.11344*t392;
  t401 = 0.02159*t400;
  t410 = 0. + t395 + t401;
  t597 = t291*t586;
  t598 = t284*t594;
  t602 = t597 + t598;
  t615 = t284*t586;
  t618 = -1.*t291*t594;
  t628 = t615 + t618;
  t429 = -0.02159*t392;
  t430 = -1.11344*t400;
  t433 = 0. + t429 + t430;
  t636 = -1.*t346*t602;
  t641 = t336*t628;
  t644 = t636 + t641;
  t648 = t336*t602;
  t656 = t346*t628;
  t658 = t648 + t656;
  t721 = t19*t482;
  t722 = t486*t66*t88;
  t724 = t721 + t722;
  t703 = -1.*t486*t19*t66;
  t705 = t482*t88;
  t709 = t703 + t705;
  t729 = t486*t18*t49;
  t730 = t71*t724;
  t732 = t729 + t730;
  t735 = t71*t486*t18;
  t738 = -1.*t49*t724;
  t740 = t735 + t738;
  t753 = t21*t709;
  t754 = t39*t732;
  t756 = t753 + t754;
  t764 = t146*t740;
  t766 = t132*t756;
  t767 = t764 + t766;
  t778 = t132*t740;
  t779 = -1.*t146*t756;
  t780 = t778 + t779;
  t787 = -1.*t231*t767;
  t788 = t215*t780;
  t791 = t787 + t788;
  t801 = t215*t767;
  t807 = t231*t780;
  t808 = t801 + t807;
  t814 = t291*t791;
  t815 = t284*t808;
  t816 = t814 + t815;
  t825 = t284*t791;
  t827 = -1.*t291*t808;
  t831 = t825 + t827;
  t833 = -1.*t346*t816;
  t834 = t336*t831;
  t836 = t833 + t834;
  t842 = t336*t816;
  t844 = t346*t831;
  t845 = t842 + t844;
  p_output1[0]=0. + t114*t124 + t151*t168 + t190*t209 + t236*t242 + t265*t282 + t297*t305 + t320*t330 + t355*t363 + t377*t383 - 0.1305*(t124*t21 - 1.*t18*t19*t39) + t410*t424 + t433*t448 + 0.075595*(t400*t424 + t388*t448) - 1.077437*(t388*t424 - 1.*t400*t448) + t18*t19*t45 + t55*t66 - 1.*t18*t84*t88 + var1[0];
  p_output1[1]=0. + t45*t493 + t114*t518 - 0.1305*(-1.*t39*t493 + t21*t518) + t151*t528 + t190*t541 - 1.*t18*t482*t55 + t236*t559 + t265*t571 + t297*t586 + t320*t594 + t355*t602 + t377*t628 + t410*t644 + t433*t658 + 0.075595*(t400*t644 + t388*t658) - 1.077437*(t388*t644 - 1.*t400*t658) + t510*t84 + var1[1];
  p_output1[2]=0. + t18*t486*t55 + t45*t709 + t114*t732 - 0.1305*(-1.*t39*t709 + t21*t732) + t151*t740 + t190*t756 + t236*t767 + t265*t780 + t297*t791 + t320*t808 + t355*t816 + t377*t831 + t410*t836 + t724*t84 + t433*t845 + 0.075595*(t400*t836 + t388*t845) - 1.077437*(t388*t836 - 1.*t400*t845) + var1[2];
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

void p_rightToe_constraint_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




