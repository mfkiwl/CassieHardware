/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:04 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "p_rightToe.hh"
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
  double t82;
  double t445;
  double t1297;
  double t1721;
  double t1860;
  double t1919;
  double t2055;
  double t2999;
  double t3103;
  double t3206;
  double t3301;
  double t2763;
  double t2809;
  double t2979;
  double t3451;
  double t3462;
  double t3479;
  double t3762;
  double t3878;
  double t3974;
  double t4002;
  double t3675;
  double t3734;
  double t3735;
  double t4167;
  double t4221;
  double t4254;
  double t4301;
  double t4302;
  double t4303;
  double t4306;
  double t4295;
  double t4297;
  double t4298;
  double t4311;
  double t4313;
  double t4318;
  double t4459;
  double t104;
  double t302;
  double t419;
  double t481;
  double t485;
  double t524;
  double t1326;
  double t1555;
  double t4526;
  double t2051;
  double t2119;
  double t2167;
  double t2292;
  double t2382;
  double t2476;
  double t4554;
  double t4555;
  double t4556;
  double t4562;
  double t4563;
  double t4566;
  double t3216;
  double t3321;
  double t3342;
  double t3574;
  double t3619;
  double t3631;
  double t4574;
  double t4583;
  double t4586;
  double t4594;
  double t4598;
  double t4612;
  double t3984;
  double t4041;
  double t4080;
  double t4273;
  double t4290;
  double t4291;
  double t4626;
  double t4645;
  double t4664;
  double t4671;
  double t4693;
  double t4694;
  double t4304;
  double t4307;
  double t4309;
  double t4323;
  double t4331;
  double t4345;
  double t4702;
  double t4703;
  double t4704;
  double t4706;
  double t4707;
  double t4708;
  double t4491;
  double t4494;
  double t4496;
  double t4533;
  double t4543;
  double t4547;
  double t4802;
  double t4807;
  double t4811;
  double t4821;
  double t4827;
  double t4828;
  double t4834;
  double t4841;
  double t4852;
  double t4865;
  double t4883;
  double t4889;
  double t4902;
  double t4936;
  double t4947;
  double t4954;
  double t4958;
  double t4973;
  double t4989;
  double t5003;
  double t5010;
  double t5034;
  double t5046;
  double t5047;
  t82 = Cos(var1[15]);
  t445 = Cos(var1[16]);
  t1297 = Sin(var1[16]);
  t1721 = Cos(var1[17]);
  t1860 = -1.*t1721;
  t1919 = 1. + t1860;
  t2055 = Sin(var1[17]);
  t2999 = Cos(var1[18]);
  t3103 = -1.*t2999;
  t3206 = 1. + t3103;
  t3301 = Sin(var1[18]);
  t2763 = t82*t445*t1721;
  t2809 = -1.*t82*t1297*t2055;
  t2979 = t2763 + t2809;
  t3451 = -1.*t82*t1721*t1297;
  t3462 = -1.*t82*t445*t2055;
  t3479 = t3451 + t3462;
  t3762 = Cos(var1[19]);
  t3878 = -1.*t3762;
  t3974 = 1. + t3878;
  t4002 = Sin(var1[19]);
  t3675 = t2999*t2979;
  t3734 = t3479*t3301;
  t3735 = t3675 + t3734;
  t4167 = t2999*t3479;
  t4221 = -1.*t2979*t3301;
  t4254 = t4167 + t4221;
  t4301 = Cos(var1[21]);
  t4302 = -1.*t4301;
  t4303 = 1. + t4302;
  t4306 = Sin(var1[21]);
  t4295 = t3762*t3735;
  t4297 = t4254*t4002;
  t4298 = t4295 + t4297;
  t4311 = t3762*t4254;
  t4313 = -1.*t3735*t4002;
  t4318 = t4311 + t4313;
  t4459 = Cos(var1[14]);
  t104 = -1.*t82;
  t302 = 1. + t104;
  t419 = Sin(var1[15]);
  t481 = -1.*t445;
  t485 = 1. + t481;
  t524 = -0.049*t485;
  t1326 = -0.09*t1297;
  t1555 = t524 + t1326;
  t4526 = Sin(var1[14]);
  t2051 = -0.049*t1919;
  t2119 = -0.21*t2055;
  t2167 = t2051 + t2119;
  t2292 = -0.21*t1919;
  t2382 = 0.049*t2055;
  t2476 = t2292 + t2382;
  t4554 = t4459*t445*t419;
  t4555 = -1.*t4526*t1297;
  t4556 = t4554 + t4555;
  t4562 = -1.*t445*t4526;
  t4563 = -1.*t4459*t419*t1297;
  t4566 = t4562 + t4563;
  t3216 = -0.00159*t3206;
  t3321 = -0.27068*t3301;
  t3342 = t3216 + t3321;
  t3574 = -0.27068*t3206;
  t3619 = 0.00159*t3301;
  t3631 = t3574 + t3619;
  t4574 = t1721*t4556;
  t4583 = t4566*t2055;
  t4586 = t4574 + t4583;
  t4594 = t1721*t4566;
  t4598 = -1.*t4556*t2055;
  t4612 = t4594 + t4598;
  t3984 = 0.01841*t3974;
  t4041 = -0.70544*t4002;
  t4080 = t3984 + t4041;
  t4273 = -0.70544*t3974;
  t4290 = -0.01841*t4002;
  t4291 = t4273 + t4290;
  t4626 = t2999*t4586;
  t4645 = t4612*t3301;
  t4664 = t4626 + t4645;
  t4671 = t2999*t4612;
  t4693 = -1.*t4586*t3301;
  t4694 = t4671 + t4693;
  t4304 = -0.02159*t4303;
  t4307 = -1.11344*t4306;
  t4309 = t4304 + t4307;
  t4323 = -1.11344*t4303;
  t4331 = 0.02159*t4306;
  t4345 = t4323 + t4331;
  t4702 = t3762*t4664;
  t4703 = t4694*t4002;
  t4704 = t4702 + t4703;
  t4706 = t3762*t4694;
  t4707 = -1.*t4664*t4002;
  t4708 = t4706 + t4707;
  t4491 = -0.135*t302;
  t4494 = 0.049*t419;
  t4496 = t4491 + t4494;
  t4533 = -0.09*t485;
  t4543 = 0.049*t1297;
  t4547 = t4533 + t4543;
  t4802 = t445*t4526*t419;
  t4807 = t4459*t1297;
  t4811 = t4802 + t4807;
  t4821 = t4459*t445;
  t4827 = -1.*t4526*t419*t1297;
  t4828 = t4821 + t4827;
  t4834 = t1721*t4811;
  t4841 = t4828*t2055;
  t4852 = t4834 + t4841;
  t4865 = t1721*t4828;
  t4883 = -1.*t4811*t2055;
  t4889 = t4865 + t4883;
  t4902 = t2999*t4852;
  t4936 = t4889*t3301;
  t4947 = t4902 + t4936;
  t4954 = t2999*t4889;
  t4958 = -1.*t4852*t3301;
  t4973 = t4954 + t4958;
  t4989 = t3762*t4947;
  t5003 = t4973*t4002;
  t5010 = t4989 + t5003;
  t5034 = t3762*t4973;
  t5046 = -1.*t4947*t4002;
  t5047 = t5034 + t5046;
  p_output1[0]=-0.049*t302 + t2979*t3342 + t3479*t3631 + t3735*t4080 - 0.0045*t419 + t4254*t4291 + t4298*t4309 - 1.11344*(-1.*t4298*t4306 + t4301*t4318) - 0.02159*(t4298*t4301 + t4306*t4318) + t4318*t4345 + t1555*t82 - 1.*t1297*t2476*t82 + t2167*t445*t82;
  p_output1[1]=-0.135*(1. - 1.*t4459) + t1555*t419*t4459 + t4459*t4496 - 1.*t4526*t4547 + t2167*t4556 + t2476*t4566 + t3342*t4586 + t3631*t4612 + t4080*t4664 + t4291*t4694 + t4309*t4704 + t4345*t4708 - 1.11344*(-1.*t4306*t4704 + t4301*t4708) - 0.02159*(t4301*t4704 + t4306*t4708) - 0.1305*t4459*t82;
  p_output1[2]=0.135*t4526 + t1555*t419*t4526 + t4496*t4526 + t4459*t4547 + t2167*t4811 + t2476*t4828 + t3342*t4852 + t3631*t4889 + t4080*t4947 + t4291*t4973 + t4309*t5010 + t4345*t5047 - 1.11344*(-1.*t4306*t5010 + t4301*t5047) - 0.02159*(t4301*t5010 + t4306*t5047) - 0.1305*t4526*t82;
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

void p_rightToe_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




