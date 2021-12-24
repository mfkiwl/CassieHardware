/*
 * Automatically Generated from Mathematica.
 * Mon 13 Sep 2021 16:08:59 GMT-07:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "position_leftFoot.hh"
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
  double t3;
  double t4;
  double t7;
  double t8;
  double t9;
  double t11;
  double t16;
  double t30;
  double t31;
  double t32;
  double t35;
  double t27;
  double t28;
  double t29;
  double t40;
  double t45;
  double t46;
  double t47;
  double t50;
  double t53;
  double t54;
  double t55;
  double t61;
  double t62;
  double t63;
  double t65;
  double t66;
  double t68;
  double t70;
  double t73;
  double t75;
  double t76;
  double t81;
  double t82;
  double t83;
  double t86;
  double t87;
  double t88;
  double t90;
  double t94;
  double t95;
  double t96;
  double t101;
  double t102;
  double t104;
  double t106;
  double t107;
  double t108;
  double t111;
  double t115;
  double t116;
  double t117;
  double t126;
  double t127;
  double t128;
  double t144;
  double t149;
  double t10;
  double t12;
  double t14;
  double t17;
  double t19;
  double t20;
  double t152;
  double t153;
  double t155;
  double t34;
  double t36;
  double t37;
  double t41;
  double t42;
  double t43;
  double t48;
  double t51;
  double t52;
  double t164;
  double t165;
  double t167;
  double t169;
  double t171;
  double t172;
  double t58;
  double t59;
  double t60;
  double t69;
  double t71;
  double t72;
  double t175;
  double t176;
  double t177;
  double t180;
  double t181;
  double t186;
  double t78;
  double t79;
  double t80;
  double t89;
  double t91;
  double t93;
  double t188;
  double t191;
  double t192;
  double t195;
  double t196;
  double t197;
  double t98;
  double t99;
  double t100;
  double t109;
  double t112;
  double t113;
  double t200;
  double t201;
  double t203;
  double t205;
  double t207;
  double t208;
  double t121;
  double t122;
  double t124;
  double t211;
  double t212;
  double t213;
  double t216;
  double t217;
  double t219;
  double t145;
  double t147;
  double t236;
  double t237;
  double t239;
  double t263;
  double t264;
  double t265;
  double t1191;
  double t1552;
  double t1676;
  double t1793;
  double t1828;
  double t1856;
  double t1891;
  double t1908;
  double t1933;
  double t1988;
  double t2008;
  double t2170;
  double t2196;
  double t2201;
  double t2248;
  double t2258;
  double t2356;
  double t2394;
  double t2446;
  double t2551;
  double t2555;
  double t2601;
  double t2605;
  double t2671;
  double t2707;
  double t2753;
  double t2760;
  t3 = Sin(var1[4]);
  t4 = Sin(var1[6]);
  t7 = Cos(var1[7]);
  t8 = -1.*t7;
  t9 = 1. + t8;
  t11 = Sin(var1[7]);
  t16 = Cos(var1[4]);
  t30 = Cos(var1[8]);
  t31 = -1.*t30;
  t32 = 1. + t31;
  t35 = Sin(var1[8]);
  t27 = t16*t7;
  t28 = t3*t4*t11;
  t29 = t27 + t28;
  t40 = Cos(var1[6]);
  t45 = Cos(var1[9]);
  t46 = -1.*t45;
  t47 = 1. + t46;
  t50 = Sin(var1[9]);
  t53 = t30*t29;
  t54 = t40*t3*t35;
  t55 = t53 + t54;
  t61 = t40*t30*t3;
  t62 = -1.*t29*t35;
  t63 = t61 + t62;
  t65 = Cos(var1[10]);
  t66 = -1.*t65;
  t68 = 1. + t66;
  t70 = Sin(var1[10]);
  t73 = -1.*t50*t55;
  t75 = t45*t63;
  t76 = t73 + t75;
  t81 = t45*t55;
  t82 = t50*t63;
  t83 = t81 + t82;
  t86 = Cos(var1[11]);
  t87 = -1.*t86;
  t88 = 1. + t87;
  t90 = Sin(var1[11]);
  t94 = t70*t76;
  t95 = t65*t83;
  t96 = t94 + t95;
  t101 = t65*t76;
  t102 = -1.*t70*t83;
  t104 = t101 + t102;
  t106 = Cos(var1[13]);
  t107 = -1.*t106;
  t108 = 1. + t107;
  t111 = Sin(var1[13]);
  t115 = -1.*t90*t96;
  t116 = t86*t104;
  t117 = t115 + t116;
  t126 = t86*t96;
  t127 = t90*t104;
  t128 = t126 + t127;
  t144 = Cos(var1[3]);
  t149 = Sin(var1[3]);
  t10 = 0.135*t9;
  t12 = 0.049*t11;
  t14 = t10 + t12;
  t17 = -0.049*t9;
  t19 = 0.135*t11;
  t20 = t17 + t19;
  t152 = t144*t40;
  t153 = -1.*t16*t149*t4;
  t155 = t152 + t153;
  t34 = -0.049*t32;
  t36 = -0.09*t35;
  t37 = t34 + t36;
  t41 = -0.09*t32;
  t42 = 0.049*t35;
  t43 = t41 + t42;
  t48 = -0.049*t47;
  t51 = -0.21*t50;
  t52 = t48 + t51;
  t164 = t7*t149*t3;
  t165 = t155*t11;
  t167 = t164 + t165;
  t169 = -1.*t16*t40*t149;
  t171 = -1.*t144*t4;
  t172 = t169 + t171;
  t58 = -0.21*t47;
  t59 = 0.049*t50;
  t60 = t58 + t59;
  t69 = -0.27068*t68;
  t71 = 0.00159*t70;
  t72 = t69 + t71;
  t175 = t30*t167;
  t176 = t172*t35;
  t177 = t175 + t176;
  t180 = t30*t172;
  t181 = -1.*t167*t35;
  t186 = t180 + t181;
  t78 = -0.00159*t68;
  t79 = -0.27068*t70;
  t80 = t78 + t79;
  t89 = 0.01841*t88;
  t91 = -0.70544*t90;
  t93 = t89 + t91;
  t188 = -1.*t50*t177;
  t191 = t45*t186;
  t192 = t188 + t191;
  t195 = t45*t177;
  t196 = t50*t186;
  t197 = t195 + t196;
  t98 = -0.70544*t88;
  t99 = -0.01841*t90;
  t100 = t98 + t99;
  t109 = -1.11344*t108;
  t112 = 0.02159*t111;
  t113 = t109 + t112;
  t200 = t70*t192;
  t201 = t65*t197;
  t203 = t200 + t201;
  t205 = t65*t192;
  t207 = -1.*t70*t197;
  t208 = t205 + t207;
  t121 = -0.02159*t108;
  t122 = -1.11344*t111;
  t124 = t121 + t122;
  t211 = -1.*t90*t203;
  t212 = t86*t208;
  t213 = t211 + t212;
  t216 = t86*t203;
  t217 = t90*t208;
  t219 = t216 + t217;
  t145 = -1.*t40;
  t147 = 1. + t145;
  t236 = t40*t149;
  t237 = t144*t16*t4;
  t239 = t236 + t237;
  t263 = -1.*t144*t7*t3;
  t264 = t239*t11;
  t265 = t263 + t264;
  t1191 = t144*t16*t40;
  t1552 = -1.*t149*t4;
  t1676 = t1191 + t1552;
  t1793 = t30*t265;
  t1828 = t1676*t35;
  t1856 = t1793 + t1828;
  t1891 = t30*t1676;
  t1908 = -1.*t265*t35;
  t1933 = t1891 + t1908;
  t1988 = -1.*t50*t1856;
  t2008 = t45*t1933;
  t2170 = t1988 + t2008;
  t2196 = t45*t1856;
  t2201 = t50*t1933;
  t2248 = t2196 + t2201;
  t2258 = t70*t2170;
  t2356 = t65*t2248;
  t2394 = t2258 + t2356;
  t2446 = t65*t2170;
  t2551 = -1.*t70*t2248;
  t2555 = t2446 + t2551;
  t2601 = -1.*t90*t2394;
  t2605 = t86*t2555;
  t2671 = t2601 + t2605;
  t2707 = t86*t2394;
  t2753 = t90*t2555;
  t2760 = t2707 + t2753;
  p_output1[0]=t100*t104 + t113*t117 + t124*t128 + 0.0306*(t111*t117 + t106*t128) - 1.13106*(t106*t117 - 1.*t111*t128) + t16*t20 + t29*t37 - 0.135*t3*t4 + t14*t3*t4 + t3*t40*t43 + t52*t55 + t60*t63 + 0.1305*(-1.*t11*t16 + t3*t4*t7) + t72*t76 + t80*t83 + t93*t96 + var1[0];
  p_output1[1]=0.135*t144*t147 + t14*t155 + t100*t208 + t113*t213 + t124*t219 + 0.0306*(t111*t213 + t106*t219) - 1.13106*(t106*t213 - 1.*t111*t219) + t149*t20*t3 + t167*t37 + 0.135*t149*t16*t4 + t172*t43 + t177*t52 + t186*t60 + 0.1305*(-1.*t11*t149*t3 + t155*t7) + t192*t72 + t197*t80 + t203*t93 + var1[1];
  p_output1[2]=0.135*t147*t149 + t14*t239 + t100*t2555 + t113*t2671 + t124*t2760 + 0.0306*(t111*t2671 + t106*t2760) - 1.13106*(t106*t2671 - 1.*t111*t2760) - 1.*t144*t20*t3 + t265*t37 - 0.135*t144*t16*t4 + t1676*t43 + t1856*t52 + t1933*t60 + 0.1305*(t11*t144*t3 + t239*t7) + t2170*t72 + t2248*t80 + t2394*t93 + var1[2];
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

void position_leftFoot_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




