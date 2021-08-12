/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:55 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "leftLegPitch.hh"
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
  double t8;
  double t205;
  double t206;
  double t239;
  double t276;
  double t280;
  double t293;
  double t313;
  double t42;
  double t353;
  double t368;
  double t372;
  double t401;
  double t603;
  double t615;
  double t639;
  double t645;
  double t591;
  double t594;
  double t601;
  double t663;
  double t669;
  double t680;
  double t741;
  double t743;
  double t754;
  double t778;
  double t940;
  double t954;
  double t815;
  double t831;
  double t836;
  double t871;
  double t876;
  double t926;
  double t956;
  double t968;
  double t972;
  double t1001;
  double t1076;
  double t1087;
  double t1121;
  double t1316;
  double t1319;
  double t1341;
  double t1378;
  double t1385;
  double t1400;
  double t1409;
  double t1430;
  double t1445;
  double t1446;
  double t1497;
  double t1508;
  double t1546;
  double t388;
  double t437;
  double t473;
  double t492;
  double t538;
  double t544;
  double t640;
  double t649;
  double t659;
  double t709;
  double t712;
  double t721;
  double t766;
  double t792;
  double t803;
  double t1828;
  double t1831;
  double t1840;
  double t845;
  double t852;
  double t863;
  double t985;
  double t1065;
  double t1067;
  double t1921;
  double t1953;
  double t1998;
  double t2004;
  double t2009;
  double t2012;
  double t1245;
  double t1251;
  double t1274;
  double t1401;
  double t1421;
  double t1427;
  double t2024;
  double t2027;
  double t2032;
  double t2034;
  double t2039;
  double t2055;
  double t1476;
  double t1494;
  double t1495;
  double t2099;
  double t2115;
  double t2116;
  double t2227;
  double t2248;
  double t2249;
  t8 = Cos(var1[3]);
  t205 = Cos(var1[6]);
  t206 = Sin(var1[3]);
  t239 = t205*t206;
  t276 = Cos(var1[4]);
  t280 = Sin(var1[6]);
  t293 = t8*t276*t280;
  t313 = t239 + t293;
  t42 = Sin(var1[4]);
  t353 = Cos(var1[7]);
  t368 = -1.*t353;
  t372 = 1. + t368;
  t401 = Sin(var1[7]);
  t603 = Cos(var1[8]);
  t615 = -1.*t603;
  t639 = 1. + t615;
  t645 = Sin(var1[8]);
  t591 = -1.*t8*t353*t42;
  t594 = t313*t401;
  t601 = t591 + t594;
  t663 = t8*t276*t205;
  t669 = -1.*t206*t280;
  t680 = t663 + t669;
  t741 = Cos(var1[9]);
  t743 = -1.*t741;
  t754 = 1. + t743;
  t778 = Sin(var1[9]);
  t940 = -1.*var1[9];
  t954 = 0.226893 + t940;
  t815 = t603*t601;
  t831 = t680*t645;
  t836 = t815 + t831;
  t871 = t603*t680;
  t876 = -1.*t601*t645;
  t926 = t871 + t876;
  t956 = Cos(t954);
  t968 = -1.*t956;
  t972 = 1. + t968;
  t1001 = Sin(t954);
  t1076 = -1.*t778*t836;
  t1087 = t741*t926;
  t1121 = t1076 + t1087;
  t1316 = t741*t836;
  t1319 = t778*t926;
  t1341 = t1316 + t1319;
  t1378 = Cos(var1[13]);
  t1385 = -1.*t1378;
  t1400 = 1. + t1385;
  t1409 = Sin(var1[13]);
  t1430 = t1001*t1121;
  t1445 = t956*t1341;
  t1446 = t1430 + t1445;
  t1497 = t956*t1121;
  t1508 = -1.*t1001*t1341;
  t1546 = t1497 + t1508;
  t388 = 0.135*t372;
  t437 = 0.049*t401;
  t473 = t388 + t437;
  t492 = -0.049*t372;
  t538 = 0.135*t401;
  t544 = t492 + t538;
  t640 = -0.049*t639;
  t649 = -0.09*t645;
  t659 = t640 + t649;
  t709 = -0.09*t639;
  t712 = 0.049*t645;
  t721 = t709 + t712;
  t766 = -0.049*t754;
  t792 = -0.21*t778;
  t803 = t766 + t792;
  t1828 = t276*t353;
  t1831 = t42*t280*t401;
  t1840 = t1828 + t1831;
  t845 = -0.21*t754;
  t852 = 0.049*t778;
  t863 = t845 + t852;
  t985 = -0.70544*t972;
  t1065 = -0.01841*t1001;
  t1067 = t985 + t1065;
  t1921 = t603*t1840;
  t1953 = t205*t42*t645;
  t1998 = t1921 + t1953;
  t2004 = t205*t603*t42;
  t2009 = -1.*t1840*t645;
  t2012 = t2004 + t2009;
  t1245 = 0.01841*t972;
  t1251 = -0.70544*t1001;
  t1274 = t1245 + t1251;
  t1401 = -0.02159*t1400;
  t1421 = -1.11344*t1409;
  t1427 = t1401 + t1421;
  t2024 = -1.*t778*t1998;
  t2027 = t741*t2012;
  t2032 = t2024 + t2027;
  t2034 = t741*t1998;
  t2039 = t778*t2012;
  t2055 = t2034 + t2039;
  t1476 = -1.11344*t1400;
  t1494 = 0.02159*t1409;
  t1495 = t1476 + t1494;
  t2099 = t1001*t2032;
  t2115 = t956*t2055;
  t2116 = t2099 + t2115;
  t2227 = t956*t2032;
  t2248 = -1.*t1001*t2055;
  t2249 = t2227 + t2248;
  p_output1[0]=ArcTan(-1.*t1067*t1121 - 1.*t1274*t1341 - 1.*t1427*t1446 - 1.*t1495*t1546 + 1.11344*(-1.*t1409*t1446 + t1378*t1546) + 0.02159*(t1378*t1446 + t1409*t1546) + 0.135*t313 - 1.*t313*t473 - 1.*t601*t659 - 1.*t680*t721 + 0.049*t42*t8 + t42*t544*t8 - 0.1305*(t313*t353 + t401*t42*t8) - 1.*t803*t836 - 1.*t863*t926,t1067*t2032 + t1274*t2055 + t1427*t2116 + t1495*t2249 - 1.11344*(-1.*t1409*t2116 + t1378*t2249) - 0.02159*(t1378*t2116 + t1409*t2249) + 0.049*t276 - 0.135*t280*t42 + 0.1305*(-1.*t276*t401 + t280*t353*t42) + t280*t42*t473 + t276*t544 + t1840*t659 + t205*t42*t721 + t1998*t803 + t2012*t863);
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

void leftLegPitch_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




