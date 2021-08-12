/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:03 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "p_leftToe.hh"
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
  double t256;
  double t710;
  double t744;
  double t796;
  double t798;
  double t824;
  double t1324;
  double t1656;
  double t1695;
  double t1827;
  double t1890;
  double t1960;
  double t1969;
  double t1970;
  double t1997;
  double t1999;
  double t2000;
  double t2004;
  double t2007;
  double t2008;
  double t2030;
  double t2044;
  double t2062;
  double t2075;
  double t2128;
  double t2134;
  double t2147;
  double t2162;
  double t2170;
  double t2173;
  double t2194;
  double t2211;
  double t2217;
  double t2225;
  double t2247;
  double t2253;
  double t2255;
  double t2320;
  double t366;
  double t370;
  double t1015;
  double t1116;
  double t1196;
  double t1245;
  double t1333;
  double t1387;
  double t818;
  double t898;
  double t947;
  double t2436;
  double t1527;
  double t1547;
  double t1563;
  double t1888;
  double t1896;
  double t1921;
  double t2447;
  double t2450;
  double t2451;
  double t2455;
  double t2457;
  double t2458;
  double t1982;
  double t1994;
  double t1996;
  double t2015;
  double t2035;
  double t2040;
  double t2467;
  double t2472;
  double t2477;
  double t2487;
  double t2496;
  double t2504;
  double t2123;
  double t2124;
  double t2127;
  double t2184;
  double t2201;
  double t2202;
  double t2522;
  double t2523;
  double t2530;
  double t2542;
  double t2543;
  double t2545;
  double t2231;
  double t2235;
  double t2244;
  double t2547;
  double t2553;
  double t2558;
  double t2571;
  double t2572;
  double t2618;
  double t2387;
  double t2422;
  double t2433;
  double t2441;
  double t2442;
  double t2444;
  double t2734;
  double t2737;
  double t2741;
  double t2743;
  double t2745;
  double t2751;
  double t2757;
  double t2765;
  double t2773;
  double t2786;
  double t2798;
  double t2807;
  double t2819;
  double t2821;
  double t2822;
  double t2827;
  double t2828;
  double t2829;
  double t2835;
  double t2836;
  double t2841;
  double t2848;
  double t2849;
  double t2850;
  t256 = Cos(var1[7]);
  t710 = Cos(var1[8]);
  t744 = Cos(var1[9]);
  t796 = -1.*t744;
  t798 = 1. + t796;
  t824 = Sin(var1[9]);
  t1324 = Sin(var1[8]);
  t1656 = Cos(var1[10]);
  t1695 = -1.*t1656;
  t1827 = 1. + t1695;
  t1890 = Sin(var1[10]);
  t1960 = -1.*t256*t710*t824;
  t1969 = -1.*t744*t256*t1324;
  t1970 = t1960 + t1969;
  t1997 = t744*t256*t710;
  t1999 = -1.*t256*t824*t1324;
  t2000 = t1997 + t1999;
  t2004 = Cos(var1[11]);
  t2007 = -1.*t2004;
  t2008 = 1. + t2007;
  t2030 = Sin(var1[11]);
  t2044 = t1890*t1970;
  t2062 = t1656*t2000;
  t2075 = t2044 + t2062;
  t2128 = t1656*t1970;
  t2134 = -1.*t1890*t2000;
  t2147 = t2128 + t2134;
  t2162 = Cos(var1[13]);
  t2170 = -1.*t2162;
  t2173 = 1. + t2170;
  t2194 = Sin(var1[13]);
  t2211 = -1.*t2030*t2075;
  t2217 = t2004*t2147;
  t2225 = t2211 + t2217;
  t2247 = t2004*t2075;
  t2253 = t2030*t2147;
  t2255 = t2247 + t2253;
  t2320 = Cos(var1[6]);
  t366 = -1.*t256;
  t370 = 1. + t366;
  t1015 = Sin(var1[7]);
  t1116 = -1.*t710;
  t1196 = 1. + t1116;
  t1245 = -0.049*t1196;
  t1333 = -0.09*t1324;
  t1387 = t1245 + t1333;
  t818 = -0.049*t798;
  t898 = -0.21*t824;
  t947 = t818 + t898;
  t2436 = Sin(var1[6]);
  t1527 = -0.21*t798;
  t1547 = 0.049*t824;
  t1563 = t1527 + t1547;
  t1888 = -0.27068*t1827;
  t1896 = 0.00159*t1890;
  t1921 = t1888 + t1896;
  t2447 = t2320*t710*t1015;
  t2450 = -1.*t2436*t1324;
  t2451 = t2447 + t2450;
  t2455 = -1.*t710*t2436;
  t2457 = -1.*t2320*t1015*t1324;
  t2458 = t2455 + t2457;
  t1982 = -0.00159*t1827;
  t1994 = -0.27068*t1890;
  t1996 = t1982 + t1994;
  t2015 = 0.01841*t2008;
  t2035 = -0.70544*t2030;
  t2040 = t2015 + t2035;
  t2467 = -1.*t824*t2451;
  t2472 = t744*t2458;
  t2477 = t2467 + t2472;
  t2487 = t744*t2451;
  t2496 = t824*t2458;
  t2504 = t2487 + t2496;
  t2123 = -0.70544*t2008;
  t2124 = -0.01841*t2030;
  t2127 = t2123 + t2124;
  t2184 = -1.11344*t2173;
  t2201 = 0.02159*t2194;
  t2202 = t2184 + t2201;
  t2522 = t1890*t2477;
  t2523 = t1656*t2504;
  t2530 = t2522 + t2523;
  t2542 = t1656*t2477;
  t2543 = -1.*t1890*t2504;
  t2545 = t2542 + t2543;
  t2231 = -0.02159*t2173;
  t2235 = -1.11344*t2194;
  t2244 = t2231 + t2235;
  t2547 = -1.*t2030*t2530;
  t2553 = t2004*t2545;
  t2558 = t2547 + t2553;
  t2571 = t2004*t2530;
  t2572 = t2030*t2545;
  t2618 = t2571 + t2572;
  t2387 = 0.135*t370;
  t2422 = 0.049*t1015;
  t2433 = t2387 + t2422;
  t2441 = -0.09*t1196;
  t2442 = 0.049*t1324;
  t2444 = t2441 + t2442;
  t2734 = t710*t2436*t1015;
  t2737 = t2320*t1324;
  t2741 = t2734 + t2737;
  t2743 = t2320*t710;
  t2745 = -1.*t2436*t1015*t1324;
  t2751 = t2743 + t2745;
  t2757 = -1.*t824*t2741;
  t2765 = t744*t2751;
  t2773 = t2757 + t2765;
  t2786 = t744*t2741;
  t2798 = t824*t2751;
  t2807 = t2786 + t2798;
  t2819 = t1890*t2773;
  t2821 = t1656*t2807;
  t2822 = t2819 + t2821;
  t2827 = t1656*t2773;
  t2828 = -1.*t1890*t2807;
  t2829 = t2827 + t2828;
  t2835 = -1.*t2030*t2822;
  t2836 = t2004*t2829;
  t2841 = t2835 + t2836;
  t2848 = t2004*t2822;
  t2849 = t2030*t2829;
  t2850 = t2848 + t2849;
  p_output1[0]=0.0045*t1015 + t1921*t1970 + t1996*t2000 + t2040*t2075 + t2127*t2147 + t2202*t2225 + t2244*t2255 - 0.02159*(t2194*t2225 + t2162*t2255) - 1.11344*(t2162*t2225 - 1.*t2194*t2255) + t1387*t256 - 1.*t1324*t1563*t256 - 0.049*t370 + t256*t710*t947;
  p_output1[1]=0.135*(1. - 1.*t2320) + t1015*t1387*t2320 + t2320*t2433 - 1.*t2436*t2444 + t1563*t2458 + t1921*t2477 + t1996*t2504 + t2040*t2530 + t2127*t2545 + t2202*t2558 + 0.1305*t2320*t256 + t2244*t2618 - 0.02159*(t2194*t2558 + t2162*t2618) - 1.11344*(t2162*t2558 - 1.*t2194*t2618) + t2451*t947;
  p_output1[2]=-0.135*t2436 + t1015*t1387*t2436 + t2433*t2436 + t2320*t2444 + 0.1305*t2436*t256 + t1563*t2751 + t1921*t2773 + t1996*t2807 + t2040*t2822 + t2127*t2829 + t2202*t2841 + t2244*t2850 - 0.02159*(t2194*t2841 + t2162*t2850) - 1.11344*(t2162*t2841 - 1.*t2194*t2850) + t2741*t947;
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

void p_leftToe_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




