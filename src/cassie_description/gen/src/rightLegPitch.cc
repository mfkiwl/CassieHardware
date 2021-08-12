/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:56 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "rightLegPitch.hh"
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
  double t145;
  double t239;
  double t293;
  double t327;
  double t367;
  double t392;
  double t489;
  double t547;
  double t572;
  double t580;
  double t581;
  double t661;
  double t1114;
  double t831;
  double t837;
  double t871;
  double t954;
  double t1047;
  double t1087;
  double t1100;
  double t1396;
  double t1430;
  double t1445;
  double t1668;
  double t1676;
  double t1684;
  double t1698;
  double t1900;
  double t1921;
  double t1726;
  double t1758;
  double t1771;
  double t1825;
  double t1828;
  double t1831;
  double t1953;
  double t1999;
  double t2004;
  double t2027;
  double t2039;
  double t2046;
  double t2056;
  double t2214;
  double t2224;
  double t2227;
  double t2306;
  double t2332;
  double t2440;
  double t2511;
  double t2556;
  double t2591;
  double t2606;
  double t2686;
  double t2688;
  double t2693;
  double t1129;
  double t1133;
  double t1140;
  double t594;
  double t663;
  double t740;
  double t936;
  double t981;
  double t995;
  double t1316;
  double t1319;
  double t1362;
  double t1696;
  double t1708;
  double t1722;
  double t3076;
  double t3080;
  double t3083;
  double t1806;
  double t1810;
  double t1815;
  double t2016;
  double t2033;
  double t2034;
  double t3115;
  double t3124;
  double t3127;
  double t3145;
  double t3157;
  double t3196;
  double t2099;
  double t2115;
  double t2142;
  double t2509;
  double t2517;
  double t2518;
  double t3274;
  double t3280;
  double t3297;
  double t3311;
  double t3317;
  double t3327;
  double t2640;
  double t2676;
  double t2679;
  double t3367;
  double t3437;
  double t3449;
  double t3561;
  double t3606;
  double t3611;
  t145 = Cos(var1[3]);
  t239 = Cos(var1[4]);
  t293 = Sin(var1[14]);
  t327 = t145*t239*t293;
  t367 = Cos(var1[14]);
  t392 = Sin(var1[3]);
  t489 = t367*t392;
  t547 = t327 + t489;
  t572 = Cos(var1[15]);
  t580 = -1.*t572;
  t581 = 1. + t580;
  t661 = Sin(var1[15]);
  t1114 = Sin(var1[4]);
  t831 = Cos(var1[16]);
  t837 = -1.*t831;
  t871 = 1. + t837;
  t954 = Sin(var1[16]);
  t1047 = t367*t145*t239;
  t1087 = -1.*t293*t392;
  t1100 = t1047 + t1087;
  t1396 = t661*t547;
  t1430 = -1.*t572*t145*t1114;
  t1445 = t1396 + t1430;
  t1668 = Cos(var1[17]);
  t1676 = -1.*t1668;
  t1684 = 1. + t1676;
  t1698 = Sin(var1[17]);
  t1900 = -1.*var1[17];
  t1921 = 0.226893 + t1900;
  t1726 = t954*t1100;
  t1758 = t831*t1445;
  t1771 = t1726 + t1758;
  t1825 = t831*t1100;
  t1828 = -1.*t954*t1445;
  t1831 = t1825 + t1828;
  t1953 = Cos(t1921);
  t1999 = -1.*t1953;
  t2004 = 1. + t1999;
  t2027 = Sin(t1921);
  t2039 = -1.*t1698*t1771;
  t2046 = t1668*t1831;
  t2056 = t2039 + t2046;
  t2214 = t1668*t1771;
  t2224 = t1698*t1831;
  t2227 = t2214 + t2224;
  t2306 = Cos(var1[21]);
  t2332 = -1.*t2306;
  t2440 = 1. + t2332;
  t2511 = Sin(var1[21]);
  t2556 = t2027*t2056;
  t2591 = t1953*t2227;
  t2606 = t2556 + t2591;
  t2686 = t1953*t2056;
  t2688 = -1.*t2027*t2227;
  t2693 = t2686 + t2688;
  t1129 = -0.049*t581;
  t1133 = -0.135*t661;
  t1140 = t1129 + t1133;
  t594 = -0.135*t581;
  t663 = 0.049*t661;
  t740 = t594 + t663;
  t936 = -0.09*t871;
  t981 = 0.049*t954;
  t995 = t936 + t981;
  t1316 = -0.049*t871;
  t1319 = -0.09*t954;
  t1362 = t1316 + t1319;
  t1696 = -0.049*t1684;
  t1708 = -0.21*t1698;
  t1722 = t1696 + t1708;
  t3076 = t572*t239;
  t3080 = t293*t661*t1114;
  t3083 = t3076 + t3080;
  t1806 = -0.21*t1684;
  t1810 = 0.049*t1698;
  t1815 = t1806 + t1810;
  t2016 = -0.70544*t2004;
  t2033 = -0.01841*t2027;
  t2034 = t2016 + t2033;
  t3115 = t367*t954*t1114;
  t3124 = t831*t3083;
  t3127 = t3115 + t3124;
  t3145 = t367*t831*t1114;
  t3157 = -1.*t954*t3083;
  t3196 = t3145 + t3157;
  t2099 = 0.01841*t2004;
  t2115 = -0.70544*t2027;
  t2142 = t2099 + t2115;
  t2509 = -0.02159*t2440;
  t2517 = -1.11344*t2511;
  t2518 = t2509 + t2517;
  t3274 = -1.*t1698*t3127;
  t3280 = t1668*t3196;
  t3297 = t3274 + t3280;
  t3311 = t1668*t3127;
  t3317 = t1698*t3196;
  t3327 = t3311 + t3317;
  t2640 = -1.11344*t2440;
  t2676 = 0.02159*t2511;
  t2679 = t2640 + t2676;
  t3367 = t2027*t3297;
  t3437 = t1953*t3327;
  t3449 = t3367 + t3437;
  t3561 = t1953*t3297;
  t3606 = -1.*t2027*t3327;
  t3611 = t3561 + t3606;
  p_output1[0]=ArcTan(-1.*t1362*t1445 + 0.049*t1114*t145 + t1114*t1140*t145 - 1.*t1722*t1771 - 1.*t1815*t1831 - 1.*t2034*t2056 - 1.*t2142*t2227 - 1.*t2518*t2606 - 1.*t2679*t2693 + 1.11344*(-1.*t2511*t2606 + t2306*t2693) + 0.02159*(t2306*t2606 + t2511*t2693) - 0.135*t547 + 0.1305*(t547*t572 + t1114*t145*t661) - 1.*t547*t740 - 1.*t1100*t995,0.049*t239 + t1140*t239 + 0.135*t1114*t293 + t1362*t3083 + t1722*t3127 + t1815*t3196 + t2034*t3297 + t2142*t3327 + t2518*t3449 + t2679*t3611 - 1.11344*(-1.*t2511*t3449 + t2306*t3611) - 0.02159*(t2306*t3449 + t2511*t3611) - 0.1305*(t1114*t293*t572 - 1.*t239*t661) + t1114*t293*t740 + t1114*t367*t995);
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

void rightLegPitch_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




