/*
 * Automatically Generated from Mathematica.
 * Sat 12 Dec 2020 14:27:46 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "leftLegAngle.hh"
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
  double t109;
  double t309;
  double t366;
  double t376;
  double t452;
  double t541;
  double t692;
  double t697;
  double t729;
  double t827;
  double t830;
  double t847;
  double t882;
  double t885;
  double t988;
  double t1075;
  double t1090;
  double t1101;
  double t1135;
  double t1143;
  double t1201;
  double t1277;
  double t1320;
  double t1323;
  double t1424;
  double t1464;
  double t1468;
  double t1469;
  double t563;
  double t607;
  double t612;
  double t398;
  double t465;
  double t481;
  double t999;
  double t1021;
  double t1043;
  double t835;
  double t848;
  double t875;
  double t1450;
  double t1453;
  double t1458;
  double t1727;
  double t1728;
  double t1754;
  double t1234;
  double t1281;
  double t1311;
  double t1763;
  double t1851;
  double t1862;
  double t1884;
  double t1913;
  t109 = Cos(var1[8]);
  t309 = Cos(var1[9]);
  t366 = -1.*t309;
  t376 = 1. + t366;
  t452 = Sin(var1[9]);
  t541 = Sin(var1[8]);
  t692 = -1.*var1[9];
  t697 = 0.226893 + t692;
  t729 = Cos(t697);
  t827 = -1.*t729;
  t830 = 1. + t827;
  t847 = Sin(t697);
  t882 = t109*t452;
  t885 = t309*t541;
  t988 = t882 + t885;
  t1075 = t309*t109;
  t1090 = -1.*t452*t541;
  t1101 = t1075 + t1090;
  t1135 = Cos(var1[13]);
  t1143 = -1.*t1135;
  t1201 = 1. + t1143;
  t1277 = Sin(var1[13]);
  t1320 = -1.*t847*t988;
  t1323 = t729*t1101;
  t1424 = t1320 + t1323;
  t1464 = t729*t988;
  t1468 = t847*t1101;
  t1469 = t1464 + t1468;
  t563 = -0.049*t376;
  t607 = -0.21*t452;
  t612 = t563 + t607;
  t398 = -0.21*t376;
  t465 = 0.049*t452;
  t481 = t398 + t465;
  t999 = -0.70544*t830;
  t1021 = -0.01841*t847;
  t1043 = t999 + t1021;
  t835 = 0.01841*t830;
  t848 = -0.70544*t847;
  t875 = t835 + t848;
  t1450 = -0.02159*t1201;
  t1453 = -1.11344*t1277;
  t1458 = t1450 + t1453;
  t1727 = -1.*t109*t452;
  t1728 = -1.*t309*t541;
  t1754 = t1727 + t1728;
  t1234 = -1.11344*t1201;
  t1281 = 0.02159*t1277;
  t1311 = t1234 + t1281;
  t1763 = t847*t1754;
  t1851 = t1763 + t1323;
  t1862 = t729*t1754;
  t1884 = -1.*t847*t1101;
  t1913 = t1862 + t1884;
  p_output1[0]=ArcTan(-0.09*t109 - 1.*t1043*t1101 - 1.*t1311*t1424 - 1.*t1458*t1469 + 0.02159*(t1277*t1424 + t1135*t1469) + 1.11344*(t1135*t1424 - 1.*t1277*t1469) - 1.*t109*t481 - 0.049*t541 - 1.*t541*t612 - 1.*t875*t988,-0.049*t109 - 1.*t1043*t1754 - 1.*t1458*t1851 - 1.*t1311*t1913 + 1.11344*(-1.*t1277*t1851 + t1135*t1913) + 0.02159*(t1135*t1851 + t1277*t1913) + 0.09*t541 + t481*t541 - 1.*t109*t612 - 1.*t1101*t875);
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

void leftLegAngle_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




