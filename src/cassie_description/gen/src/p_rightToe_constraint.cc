/*
 * Automatically Generated from Mathematica.
 * Thu 26 Aug 2021 14:19:28 GMT-07:00
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
  double t6;
  double t9;
  double t10;
  double t17;
  double t28;
  double t41;
  double t48;
  double t54;
  double t75;
  double t8;
  double t88;
  double t89;
  double t90;
  double t93;
  double t94;
  double t95;
  double t97;
  double t103;
  double t104;
  double t106;
  double t140;
  double t141;
  double t142;
  double t146;
  double t147;
  double t148;
  double t151;
  double t160;
  double t164;
  double t168;
  double t192;
  double t193;
  double t196;
  double t198;
  double t199;
  double t200;
  double t203;
  double t206;
  double t207;
  double t209;
  double t214;
  double t215;
  double t222;
  double t224;
  double t225;
  double t226;
  double t228;
  double t231;
  double t233;
  double t234;
  double t239;
  double t240;
  double t241;
  double t244;
  double t245;
  double t246;
  double t248;
  double t251;
  double t252;
  double t253;
  double t258;
  double t262;
  double t265;
  double t45;
  double t46;
  double t19;
  double t29;
  double t32;
  double t279;
  double t57;
  double t64;
  double t69;
  double t70;
  double t283;
  double t81;
  double t83;
  double t86;
  double t287;
  double t289;
  double t290;
  double t96;
  double t100;
  double t101;
  double t282;
  double t284;
  double t285;
  double t293;
  double t294;
  double t295;
  double t134;
  double t137;
  double t138;
  double t149;
  double t152;
  double t156;
  double t298;
  double t299;
  double t301;
  double t307;
  double t308;
  double t309;
  double t180;
  double t184;
  double t188;
  double t202;
  double t204;
  double t205;
  double t311;
  double t312;
  double t313;
  double t315;
  double t316;
  double t317;
  double t211;
  double t212;
  double t213;
  double t227;
  double t229;
  double t230;
  double t319;
  double t320;
  double t321;
  double t323;
  double t324;
  double t325;
  double t236;
  double t237;
  double t238;
  double t247;
  double t249;
  double t250;
  double t327;
  double t328;
  double t329;
  double t331;
  double t332;
  double t333;
  double t255;
  double t256;
  double t257;
  double t335;
  double t336;
  double t337;
  double t339;
  double t340;
  double t341;
  double t360;
  double t361;
  double t362;
  double t354;
  double t355;
  double t356;
  double t364;
  double t365;
  double t366;
  double t368;
  double t369;
  double t370;
  double t376;
  double t377;
  double t378;
  double t380;
  double t381;
  double t382;
  double t384;
  double t385;
  double t386;
  double t388;
  double t389;
  double t390;
  double t392;
  double t393;
  double t394;
  double t396;
  double t399;
  double t401;
  double t405;
  double t406;
  double t407;
  double t409;
  double t410;
  double t411;
  double t417;
  double t418;
  double t419;
  t6 = Cos(var1[4]);
  t9 = Cos(var1[15]);
  t10 = -1.*t9;
  t17 = 1. + t10;
  t28 = Sin(var1[15]);
  t41 = Sin(var1[14]);
  t48 = Sin(var1[4]);
  t54 = Cos(var1[14]);
  t75 = Sin(var1[5]);
  t8 = Cos(var1[5]);
  t88 = t41*t48;
  t89 = -1.*t54*t6*t75;
  t90 = t88 + t89;
  t93 = Cos(var1[16]);
  t94 = -1.*t93;
  t95 = 1. + t94;
  t97 = Sin(var1[16]);
  t103 = t54*t48;
  t104 = t6*t41*t75;
  t106 = t103 + t104;
  t140 = t9*t6*t8;
  t141 = t28*t90;
  t142 = t140 + t141;
  t146 = Cos(var1[17]);
  t147 = -1.*t146;
  t148 = 1. + t147;
  t151 = Sin(var1[17]);
  t160 = t97*t106;
  t164 = t93*t142;
  t168 = t160 + t164;
  t192 = t93*t106;
  t193 = -1.*t97*t142;
  t196 = t192 + t193;
  t198 = Cos(var1[18]);
  t199 = -1.*t198;
  t200 = 1. + t199;
  t203 = Sin(var1[18]);
  t206 = -1.*t151*t168;
  t207 = t146*t196;
  t209 = t206 + t207;
  t214 = t146*t168;
  t215 = t151*t196;
  t222 = t214 + t215;
  t224 = Cos(var1[19]);
  t225 = -1.*t224;
  t226 = 1. + t225;
  t228 = Sin(var1[19]);
  t231 = t203*t209;
  t233 = t198*t222;
  t234 = t231 + t233;
  t239 = t198*t209;
  t240 = -1.*t203*t222;
  t241 = t239 + t240;
  t244 = Cos(var1[21]);
  t245 = -1.*t244;
  t246 = 1. + t245;
  t248 = Sin(var1[21]);
  t251 = -1.*t228*t234;
  t252 = t224*t241;
  t253 = t251 + t252;
  t258 = t224*t234;
  t262 = t228*t241;
  t265 = t258 + t262;
  t45 = 0.135*t41;
  t46 = 0. + t45;
  t19 = -0.049*t17;
  t29 = -0.135*t28;
  t32 = 0. + t19 + t29;
  t279 = Sin(var1[3]);
  t57 = -1.*t54;
  t64 = 1. + t57;
  t69 = -0.135*t64;
  t70 = 0. + t69;
  t283 = Cos(var1[3]);
  t81 = -0.135*t17;
  t83 = 0.049*t28;
  t86 = 0. + t81 + t83;
  t287 = t283*t8;
  t289 = -1.*t279*t48*t75;
  t290 = t287 + t289;
  t96 = -0.09*t95;
  t100 = 0.049*t97;
  t101 = 0. + t96 + t100;
  t282 = t8*t279*t48;
  t284 = t283*t75;
  t285 = t282 + t284;
  t293 = -1.*t6*t41*t279;
  t294 = t54*t290;
  t295 = t293 + t294;
  t134 = -0.049*t95;
  t137 = -0.09*t97;
  t138 = 0. + t134 + t137;
  t149 = -0.049*t148;
  t152 = -0.21*t151;
  t156 = 0. + t149 + t152;
  t298 = -1.*t54*t6*t279;
  t299 = -1.*t41*t290;
  t301 = t298 + t299;
  t307 = t9*t285;
  t308 = t28*t295;
  t309 = t307 + t308;
  t180 = -0.21*t148;
  t184 = 0.049*t151;
  t188 = 0. + t180 + t184;
  t202 = -0.27068*t200;
  t204 = 0.00159*t203;
  t205 = 0. + t202 + t204;
  t311 = t97*t301;
  t312 = t93*t309;
  t313 = t311 + t312;
  t315 = t93*t301;
  t316 = -1.*t97*t309;
  t317 = t315 + t316;
  t211 = -0.00159*t200;
  t212 = -0.27068*t203;
  t213 = 0. + t211 + t212;
  t227 = 0.01841*t226;
  t229 = -0.70544*t228;
  t230 = 0. + t227 + t229;
  t319 = -1.*t151*t313;
  t320 = t146*t317;
  t321 = t319 + t320;
  t323 = t146*t313;
  t324 = t151*t317;
  t325 = t323 + t324;
  t236 = -0.70544*t226;
  t237 = -0.01841*t228;
  t238 = 0. + t236 + t237;
  t247 = -1.11344*t246;
  t249 = 0.02159*t248;
  t250 = 0. + t247 + t249;
  t327 = t203*t321;
  t328 = t198*t325;
  t329 = t327 + t328;
  t331 = t198*t321;
  t332 = -1.*t203*t325;
  t333 = t331 + t332;
  t255 = -0.02159*t246;
  t256 = -1.11344*t248;
  t257 = 0. + t255 + t256;
  t335 = -1.*t228*t329;
  t336 = t224*t333;
  t337 = t335 + t336;
  t339 = t224*t329;
  t340 = t228*t333;
  t341 = t339 + t340;
  t360 = t8*t279;
  t361 = t283*t48*t75;
  t362 = t360 + t361;
  t354 = -1.*t283*t8*t48;
  t355 = t279*t75;
  t356 = t354 + t355;
  t364 = t283*t6*t41;
  t365 = t54*t362;
  t366 = t364 + t365;
  t368 = t54*t283*t6;
  t369 = -1.*t41*t362;
  t370 = t368 + t369;
  t376 = t9*t356;
  t377 = t28*t366;
  t378 = t376 + t377;
  t380 = t97*t370;
  t381 = t93*t378;
  t382 = t380 + t381;
  t384 = t93*t370;
  t385 = -1.*t97*t378;
  t386 = t384 + t385;
  t388 = -1.*t151*t382;
  t389 = t146*t386;
  t390 = t388 + t389;
  t392 = t146*t382;
  t393 = t151*t386;
  t394 = t392 + t393;
  t396 = t203*t390;
  t399 = t198*t394;
  t401 = t396 + t399;
  t405 = t198*t390;
  t406 = -1.*t203*t394;
  t407 = t405 + t406;
  t409 = -1.*t228*t401;
  t410 = t224*t407;
  t411 = t409 + t410;
  t417 = t224*t401;
  t418 = t228*t407;
  t419 = t417 + t418;
  p_output1[0]=0. + t101*t106 + t138*t142 + t156*t168 + t188*t196 + t205*t209 + t213*t222 + t230*t234 + t238*t241 + t250*t253 + t257*t265 + 0.075595*(t248*t253 + t244*t265) - 1.077437*(t244*t253 - 1.*t248*t265) + t46*t48 - 1.*t6*t70*t75 + t32*t6*t8 + t86*t90 - 0.1305*(-1.*t28*t6*t8 + t9*t90) + var1[0];
  p_output1[1]=0. + t101*t301 + t138*t309 + t156*t313 + t188*t317 + t285*t32 + t205*t321 + t213*t325 + t230*t329 + t238*t333 + t250*t337 + t257*t341 + 0.075595*(t248*t337 + t244*t341) - 1.077437*(t244*t337 - 1.*t248*t341) - 1.*t279*t46*t6 + t290*t70 + t295*t86 - 0.1305*(-1.*t28*t285 + t295*t9) + var1[1];
  p_output1[2]=0. + t32*t356 + t101*t370 + t138*t378 + t156*t382 + t188*t386 + t205*t390 + t213*t394 + t230*t401 + t238*t407 + t250*t411 + t257*t419 + 0.075595*(t248*t411 + t244*t419) - 1.077437*(t244*t411 - 1.*t248*t419) + t283*t46*t6 + t362*t70 + t366*t86 - 0.1305*(-1.*t28*t356 + t366*t9) + var1[2];
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




