/*
 * Automatically Generated from Mathematica.
 * Sat 12 Dec 2020 14:27:46 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "rightLegAngle.hh"
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
  double t522;
  double t170;
  double t552;
  double t561;
  double t667;
  double t882;
  double t1464;
  double t1465;
  double t1468;
  double t1473;
  double t1480;
  double t1562;
  double t1617;
  double t1625;
  double t1633;
  double t1713;
  double t1755;
  double t1760;
  double t1949;
  double t1959;
  double t1967;
  double t2003;
  double t1860;
  double t1862;
  double t1927;
  double t2053;
  double t2059;
  double t2061;
  double t697;
  double t885;
  double t989;
  double t1075;
  double t1112;
  double t1323;
  double t1646;
  double t1649;
  double t1685;
  double t1534;
  double t1579;
  double t1588;
  double t2206;
  double t2216;
  double t2217;
  double t1979;
  double t2011;
  double t2020;
  double t2063;
  double t2072;
  double t2074;
  double t2312;
  double t2326;
  double t2343;
  double t2255;
  double t2285;
  t522 = Sin(var1[16]);
  t170 = Cos(var1[16]);
  t552 = Cos(var1[17]);
  t561 = -1.*t552;
  t667 = 1. + t561;
  t882 = Sin(var1[17]);
  t1464 = -1.*var1[17];
  t1465 = 0.226893 + t1464;
  t1468 = Cos(t1465);
  t1473 = -1.*t1468;
  t1480 = 1. + t1473;
  t1562 = Sin(t1465);
  t1617 = t552*t522;
  t1625 = t170*t882;
  t1633 = t1617 + t1625;
  t1713 = t170*t552;
  t1755 = -1.*t522*t882;
  t1760 = t1713 + t1755;
  t1949 = Cos(var1[21]);
  t1959 = -1.*t1949;
  t1967 = 1. + t1959;
  t2003 = Sin(var1[21]);
  t1860 = t1468*t1633;
  t1862 = t1562*t1760;
  t1927 = t1860 + t1862;
  t2053 = -1.*t1562*t1633;
  t2059 = t1468*t1760;
  t2061 = t2053 + t2059;
  t697 = -0.049*t667;
  t885 = -0.21*t882;
  t989 = t697 + t885;
  t1075 = -0.21*t667;
  t1112 = 0.049*t882;
  t1323 = t1075 + t1112;
  t1646 = -0.70544*t1480;
  t1649 = -0.01841*t1562;
  t1685 = t1646 + t1649;
  t1534 = 0.01841*t1480;
  t1579 = -0.70544*t1562;
  t1588 = t1534 + t1579;
  t2206 = -1.*t552*t522;
  t2216 = -1.*t170*t882;
  t2217 = t2206 + t2216;
  t1979 = -0.02159*t1967;
  t2011 = -1.11344*t2003;
  t2020 = t1979 + t2011;
  t2063 = -1.11344*t1967;
  t2072 = 0.02159*t2003;
  t2074 = t2063 + t2072;
  t2312 = t1468*t2217;
  t2326 = -1.*t1562*t1760;
  t2343 = t2312 + t2326;
  t2255 = t1562*t2217;
  t2285 = t2255 + t2059;
  p_output1[0]=ArcTan(-1.*t1588*t1633 - 0.09*t170 - 1.*t1323*t170 - 1.*t1685*t1760 - 1.*t1927*t2020 + 1.11344*(-1.*t1927*t2003 + t1949*t2061) + 0.02159*(t1927*t1949 + t2003*t2061) - 1.*t2061*t2074 - 0.049*t522 - 1.*t522*t989,-0.049*t170 - 1.*t1588*t1760 - 1.*t1685*t2217 - 1.*t2020*t2285 - 1.*t2074*t2343 + 1.11344*(-1.*t2003*t2285 + t1949*t2343) + 0.02159*(t1949*t2285 + t2003*t2343) + 0.09*t522 + t1323*t522 - 1.*t170*t989);
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

void rightLegAngle_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




