/*
 * Automatically Generated from Mathematica.
 * Sat 12 Dec 2020 14:27:47 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "rightLegAngleVelocity.hh"
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t689;
  double t1181;
  double t1404;
  double t1573;
  double t1589;
  double t1660;
  double t2028;
  double t2037;
  double t2059;
  double t2161;
  double t2168;
  double t2198;
  double t2255;
  double t2259;
  double t2432;
  double t2539;
  double t2548;
  double t2552;
  double t2781;
  double t2852;
  double t2870;
  double t2897;
  double t2965;
  double t2970;
  double t2982;
  double t2587;
  double t2610;
  double t2754;
  double t2920;
  double t3458;
  double t3513;
  double t3533;
  double t3672;
  double t3704;
  double t3720;
  double t3549;
  double t3566;
  double t1625;
  double t1785;
  double t1797;
  double t1925;
  double t1946;
  double t1963;
  double t2187;
  double t2213;
  double t2235;
  double t2441;
  double t2452;
  double t2489;
  double t2871;
  double t2941;
  double t2998;
  double t3029;
  double t3033;
  double t3081;
  double t3147;
  double t3218;
  double t3318;
  double t3357;
  double t3372;
  double t3772;
  double t3782;
  double t3790;
  double t3572;
  double t3623;
  double t3724;
  double t3732;
  double t3742;
  double t4048;
  double t4058;
  double t4059;
  double t4060;
  double t4073;
  double t4078;
  double t4098;
  double t4101;
  double t4112;
  double t4122;
  double t4124;
  double t4125;
  double t4130;
  double t4137;
  double t3809;
  double t3813;
  double t3863;
  double t3870;
  double t3876;
  double t3892;
  double t3927;
  double t3947;
  double t3983;
  double t4010;
  double t4023;
  double t4044;
  double t4138;
  double t4139;
  double t4181;
  double t966;
  double t1347;
  double t1838;
  double t1972;
  double t2433;
  double t2579;
  double t2951;
  double t3049;
  double t3303;
  double t3444;
  double t3457;
  double t4581;
  double t4632;
  double t4649;
  double t4674;
  double t4682;
  double t4699;
  double t4701;
  double t4714;
  double t5047;
  double t5052;
  double t5054;
  double t4911;
  double t4923;
  double t4946;
  double t4948;
  double t4965;
  double t4578;
  double t5012;
  double t5033;
  double t5036;
  double t4993;
  double t4994;
  double t4653;
  double t5168;
  double t5184;
  t689 = Cos(var1[16]);
  t1181 = Sin(var1[16]);
  t1404 = Cos(var1[17]);
  t1573 = -1.*t1404;
  t1589 = 1. + t1573;
  t1660 = Sin(var1[17]);
  t2028 = -1.*var1[17];
  t2037 = 0.226893 + t2028;
  t2059 = Cos(t2037);
  t2161 = -1.*t2059;
  t2168 = 1. + t2161;
  t2198 = Sin(t2037);
  t2255 = -1.*t1404*t1181;
  t2259 = -1.*t689*t1660;
  t2432 = t2255 + t2259;
  t2539 = t689*t1404;
  t2548 = -1.*t1181*t1660;
  t2552 = t2539 + t2548;
  t2781 = Cos(var1[21]);
  t2852 = -1.*t2781;
  t2870 = 1. + t2852;
  t2897 = Sin(var1[21]);
  t2965 = t2059*t2432;
  t2970 = -1.*t2198*t2552;
  t2982 = t2965 + t2970;
  t2587 = t2198*t2432;
  t2610 = t2059*t2552;
  t2754 = t2587 + t2610;
  t2920 = -1.11344*t2897;
  t3458 = t1404*t1181;
  t3513 = t689*t1660;
  t3533 = t3458 + t3513;
  t3672 = t2059*t3533;
  t3704 = t2198*t2552;
  t3720 = t3672 + t3704;
  t3549 = -1.*t2198*t3533;
  t3566 = t3549 + t2610;
  t1625 = -0.049*t1589;
  t1785 = -0.21*t1660;
  t1797 = t1625 + t1785;
  t1925 = -0.21*t1589;
  t1946 = 0.049*t1660;
  t1963 = t1925 + t1946;
  t2187 = -0.70544*t2168;
  t2213 = -0.01841*t2198;
  t2235 = t2187 + t2213;
  t2441 = 0.01841*t2168;
  t2452 = -0.70544*t2198;
  t2489 = t2441 + t2452;
  t2871 = -0.02159*t2870;
  t2941 = t2871 + t2920;
  t2998 = -1.11344*t2870;
  t3029 = 0.02159*t2897;
  t3033 = t2998 + t3029;
  t3081 = t2781*t2982;
  t3147 = -1.*t2754*t2897;
  t3218 = t3081 + t3147;
  t3318 = t2781*t2754;
  t3357 = t2982*t2897;
  t3372 = t3318 + t3357;
  t3772 = t2781*t3566;
  t3782 = -1.*t3720*t2897;
  t3790 = t3772 + t3782;
  t3572 = 0.02159*t2781;
  t3623 = t3572 + t2920;
  t3724 = -1.11344*t2781;
  t3732 = -0.02159*t2897;
  t3742 = t3724 + t3732;
  t4048 = -0.09*t689;
  t4058 = -0.049*t1181;
  t4059 = -1.*t1181*t1797;
  t4060 = -1.*t689*t1963;
  t4073 = -1.*t2489*t3533;
  t4078 = -1.*t2235*t2552;
  t4098 = -1.*t3720*t2941;
  t4101 = -1.*t3566*t3033;
  t4112 = t2781*t3720;
  t4122 = t3566*t2897;
  t4124 = t4112 + t4122;
  t4125 = 0.02159*t4124;
  t4130 = 1.11344*t3790;
  t4137 = t4048 + t4058 + t4059 + t4060 + t4073 + t4078 + t4098 + t4101 + t4125 + t4130;
  t3809 = -0.049*t689;
  t3813 = 0.09*t1181;
  t3863 = -1.*t689*t1797;
  t3870 = t1181*t1963;
  t3876 = -1.*t2235*t2432;
  t3892 = -1.*t2489*t2552;
  t3927 = -1.*t2754*t2941;
  t3947 = -1.*t2982*t3033;
  t3983 = 1.11344*t3218;
  t4010 = 0.02159*t3372;
  t4023 = t3809 + t3813 + t3863 + t3870 + t3876 + t3892 + t3927 + t3947 + t3983 + t4010;
  t4044 = Power(t4023,2);
  t4138 = Power(t4137,2);
  t4139 = t4044 + t4138;
  t4181 = 1/t4139;
  t966 = 0.049*t689;
  t1347 = -0.09*t1181;
  t1838 = t689*t1797;
  t1972 = -1.*t1181*t1963;
  t2433 = t2235*t2432;
  t2579 = t2489*t2552;
  t2951 = t2754*t2941;
  t3049 = t2982*t3033;
  t3303 = -1.11344*t3218;
  t3444 = -0.02159*t3372;
  t3457 = t966 + t1347 + t1838 + t1972 + t2433 + t2579 + t2951 + t3049 + t3303 + t3444;
  t4581 = -1.*t689*t1404;
  t4632 = t1181*t1660;
  t4649 = t4581 + t4632;
  t4674 = t2198*t4649;
  t4682 = t2965 + t4674;
  t4699 = -1.*t2198*t2432;
  t4701 = t2059*t4649;
  t4714 = t4699 + t4701;
  t5047 = t2198*t3533;
  t5052 = t2587 + t5047;
  t5054 = t2965 + t3672;
  t4911 = 0.049*t1404;
  t4923 = t4911 + t1785;
  t4946 = -0.21*t1404;
  t4948 = -0.049*t1660;
  t4965 = t4946 + t4948;
  t4578 = -1.*t2489*t2432;
  t5012 = 0.01841*t2059;
  t5033 = 0.70544*t2198;
  t5036 = t5012 + t5033;
  t4993 = 0.70544*t2059;
  t4994 = t4993 + t2213;
  t4653 = -1.*t2235*t4649;
  t5168 = t3704 + t4674;
  t5184 = t2610 + t4701;
  p_output1[0]=(t3457*t4023*t4181 + t4137*t4181*(0.049*t1181 + t1181*t1797 + t4578 + t4653 - 1.*t2941*t4682 - 1.*t3033*t4714 + 1.11344*(-1.*t2897*t4682 + t2781*t4714) + 0.02159*(t2781*t4682 + t2897*t4714) + 0.09*t689 + t1963*t689))*var2[16] + (t3457*t4181*(t3876 + t3892 - 1.*t1181*t4965 - 1.*t3533*t4994 - 1.*t2552*t5036 - 1.*t2941*t5052 - 1.*t3033*t5054 + 1.11344*(-1.*t2897*t5052 + t2781*t5054) + 0.02159*(t2781*t5052 + t2897*t5054) - 1.*t4923*t689) + t4137*t4181*(t4578 + t4653 + t1181*t4923 - 1.*t2552*t4994 - 1.*t2432*t5036 - 1.*t2941*t5168 - 1.*t3033*t5184 + 1.11344*(-1.*t2897*t5168 + t2781*t5184) + 0.02159*(t2781*t5168 + t2897*t5184) - 1.*t4965*t689))*var2[17] + (t3457*(-1.*t3566*t3623 + 1.11344*(-1.*t2897*t3566 - 1.*t2781*t3720) - 1.*t3720*t3742 + 0.02159*t3790)*t4181 + (1.11344*(-1.*t2754*t2781 - 1.*t2897*t2982) + 0.02159*t3218 - 1.*t2982*t3623 - 1.*t2754*t3742)*t4137*t4181)*var2[21];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void rightLegAngleVelocity_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}




