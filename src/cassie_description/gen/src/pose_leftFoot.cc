/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:01 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "pose_leftFoot.hh"
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
  double t10;
  double t30;
  double t35;
  double t37;
  double t40;
  double t60;
  double t108;
  double t144;
  double t145;
  double t150;
  double t153;
  double t177;
  double t182;
  double t183;
  double t193;
  double t206;
  double t212;
  double t217;
  double t221;
  double t222;
  double t228;
  double t232;
  double t238;
  double t240;
  double t257;
  double t259;
  double t261;
  double t269;
  double t270;
  double t272;
  double t276;
  double t281;
  double t288;
  double t290;
  double t309;
  double t315;
  double t318;
  double t338;
  double t17;
  double t25;
  double t92;
  double t99;
  double t101;
  double t105;
  double t111;
  double t113;
  double t56;
  double t69;
  double t72;
  double t365;
  double t131;
  double t137;
  double t139;
  double t152;
  double t154;
  double t165;
  double t379;
  double t382;
  double t386;
  double t394;
  double t396;
  double t398;
  double t188;
  double t189;
  double t191;
  double t227;
  double t229;
  double t230;
  double t408;
  double t409;
  double t413;
  double t417;
  double t418;
  double t421;
  double t250;
  double t252;
  double t255;
  double t274;
  double t278;
  double t280;
  double t426;
  double t442;
  double t443;
  double t449;
  double t450;
  double t452;
  double t301;
  double t303;
  double t306;
  double t455;
  double t456;
  double t458;
  double t461;
  double t462;
  double t475;
  double t349;
  double t352;
  double t353;
  double t374;
  double t375;
  double t376;
  double t554;
  double t556;
  double t565;
  double t569;
  double t570;
  double t577;
  double t581;
  double t583;
  double t596;
  double t609;
  double t611;
  double t613;
  double t622;
  double t623;
  double t624;
  double t639;
  double t643;
  double t645;
  double t649;
  double t651;
  double t657;
  double t659;
  double t661;
  double t672;
  double t679;
  double t684;
  double t688;
  double t691;
  double t693;
  double t697;
  double t323;
  double t324;
  double t325;
  double t328;
  double t331;
  double t332;
  double t488;
  double t489;
  double t492;
  double t508;
  double t513;
  double t523;
  double t701;
  double t708;
  double t712;
  double t759;
  double t760;
  double t761;
  double t768;
  double t769;
  double t771;
  t10 = Cos(var1[7]);
  t30 = Cos(var1[8]);
  t35 = Cos(var1[9]);
  t37 = -1.*t35;
  t40 = 1. + t37;
  t60 = Sin(var1[9]);
  t108 = Sin(var1[8]);
  t144 = Cos(var1[10]);
  t145 = -1.*t144;
  t150 = 1. + t145;
  t153 = Sin(var1[10]);
  t177 = -1.*t10*t30*t60;
  t182 = -1.*t35*t10*t108;
  t183 = t177 + t182;
  t193 = t35*t10*t30;
  t206 = -1.*t10*t60*t108;
  t212 = t193 + t206;
  t217 = Cos(var1[11]);
  t221 = -1.*t217;
  t222 = 1. + t221;
  t228 = Sin(var1[11]);
  t232 = t153*t183;
  t238 = t144*t212;
  t240 = t232 + t238;
  t257 = t144*t183;
  t259 = -1.*t153*t212;
  t261 = t257 + t259;
  t269 = Cos(var1[13]);
  t270 = -1.*t269;
  t272 = 1. + t270;
  t276 = Sin(var1[13]);
  t281 = -1.*t228*t240;
  t288 = t217*t261;
  t290 = t281 + t288;
  t309 = t217*t240;
  t315 = t228*t261;
  t318 = t309 + t315;
  t338 = Cos(var1[6]);
  t17 = -1.*t10;
  t25 = 1. + t17;
  t92 = Sin(var1[7]);
  t99 = -1.*t30;
  t101 = 1. + t99;
  t105 = -0.049*t101;
  t111 = -0.09*t108;
  t113 = t105 + t111;
  t56 = -0.049*t40;
  t69 = -0.21*t60;
  t72 = t56 + t69;
  t365 = Sin(var1[6]);
  t131 = -0.21*t40;
  t137 = 0.049*t60;
  t139 = t131 + t137;
  t152 = -0.27068*t150;
  t154 = 0.00159*t153;
  t165 = t152 + t154;
  t379 = t338*t30*t92;
  t382 = -1.*t365*t108;
  t386 = t379 + t382;
  t394 = -1.*t30*t365;
  t396 = -1.*t338*t92*t108;
  t398 = t394 + t396;
  t188 = -0.00159*t150;
  t189 = -0.27068*t153;
  t191 = t188 + t189;
  t227 = 0.01841*t222;
  t229 = -0.70544*t228;
  t230 = t227 + t229;
  t408 = -1.*t60*t386;
  t409 = t35*t398;
  t413 = t408 + t409;
  t417 = t35*t386;
  t418 = t60*t398;
  t421 = t417 + t418;
  t250 = -0.70544*t222;
  t252 = -0.01841*t228;
  t255 = t250 + t252;
  t274 = -1.11344*t272;
  t278 = 0.02159*t276;
  t280 = t274 + t278;
  t426 = t153*t413;
  t442 = t144*t421;
  t443 = t426 + t442;
  t449 = t144*t413;
  t450 = -1.*t153*t421;
  t452 = t449 + t450;
  t301 = -0.02159*t272;
  t303 = -1.11344*t276;
  t306 = t301 + t303;
  t455 = -1.*t228*t443;
  t456 = t217*t452;
  t458 = t455 + t456;
  t461 = t217*t443;
  t462 = t228*t452;
  t475 = t461 + t462;
  t349 = 0.135*t25;
  t352 = 0.049*t92;
  t353 = t349 + t352;
  t374 = -0.09*t101;
  t375 = 0.049*t108;
  t376 = t374 + t375;
  t554 = t30*t365*t92;
  t556 = t338*t108;
  t565 = t554 + t556;
  t569 = t338*t30;
  t570 = -1.*t365*t92*t108;
  t577 = t569 + t570;
  t581 = -1.*t60*t565;
  t583 = t35*t577;
  t596 = t581 + t583;
  t609 = t35*t565;
  t611 = t60*t577;
  t613 = t609 + t611;
  t622 = t153*t596;
  t623 = t144*t613;
  t624 = t622 + t623;
  t639 = t144*t596;
  t643 = -1.*t153*t613;
  t645 = t639 + t643;
  t649 = -1.*t228*t624;
  t651 = t217*t645;
  t657 = t649 + t651;
  t659 = t217*t624;
  t661 = t228*t645;
  t672 = t659 + t661;
  t679 = t276*t657;
  t684 = t269*t672;
  t688 = t679 + t684;
  t691 = t269*t657;
  t693 = -1.*t276*t672;
  t697 = t691 + t693;
  t323 = t276*t290;
  t324 = t269*t318;
  t325 = t323 + t324;
  t328 = t269*t290;
  t331 = -1.*t276*t318;
  t332 = t328 + t331;
  t488 = t276*t458;
  t489 = t269*t475;
  t492 = t488 + t489;
  t508 = t269*t458;
  t513 = -1.*t276*t475;
  t523 = t508 + t513;
  t701 = -0.766044*t688;
  t708 = 0.642788*t697;
  t712 = t701 + t708;
  t759 = Power(t10,2);
  t760 = Power(t365,2);
  t761 = t759*t760;
  t768 = Power(t712,2);
  t769 = t761 + t768;
  t771 = 1/Sqrt(t769);
  p_output1[0]=t10*t113 - 1.*t10*t108*t139 + t165*t183 + t191*t212 + t230*t240 - 0.049*t25 + t255*t261 + t280*t290 + t306*t318 + 0.0306*t325 - 1.13106*t332 + t10*t30*t72 + 0.0045*t92;
  p_output1[1]=0.135*(1. - 1.*t338) + 0.1305*t10*t338 + t338*t353 - 1.*t365*t376 + t139*t398 + t165*t413 + t191*t421 + t230*t443 + t255*t452 + t280*t458 + t306*t475 + 0.0306*t492 - 1.13106*t523 + t386*t72 + t113*t338*t92;
  p_output1[2]=-0.135*t365 + 0.1305*t10*t365 + t353*t365 + t338*t376 + t139*t577 + t165*t596 + t191*t613 + t230*t624 + t255*t645 + t280*t657 + t306*t672 + 0.0306*t688 - 1.13106*t697 + t565*t72 + t113*t365*t92;
  p_output1[3]=ArcTan(t712,t10*t365);
  p_output1[4]=ArcTan(Sqrt(Power(0.642788*t325 + 0.766044*t332,2) + Power(0.642788*t492 + 0.766044*t523,2)),-0.642788*t688 - 0.766044*t697);
  p_output1[5]=ArcTan(-1.*t10*t365*(-0.766044*t492 + 0.642788*t523)*t771 + t10*t338*t712*t771,t10*(-0.766044*t325 + 0.642788*t332)*t365*t771 + t712*t771*t92);
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

void pose_leftFoot_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




