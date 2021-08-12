/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:32 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "p_leftToe_constraint.hh"
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
  double t78;
  double t96;
  double t388;
  double t498;
  double t499;
  double t840;
  double t889;
  double t944;
  double t990;
  double t803;
  double t811;
  double t816;
  double t1083;
  double t1605;
  double t1713;
  double t1748;
  double t1830;
  double t1396;
  double t1412;
  double t1584;
  double t2191;
  double t2299;
  double t2319;
  double t2416;
  double t2509;
  double t2556;
  double t2682;
  double t2723;
  double t2870;
  double t2898;
  double t3133;
  double t3384;
  double t3502;
  double t3667;
  double t3678;
  double t3680;
  double t3688;
  double t3923;
  double t4032;
  double t4259;
  double t4335;
  double t4398;
  double t4405;
  double t4453;
  double t4466;
  double t4504;
  double t4546;
  double t4752;
  double t4833;
  double t4877;
  double t5212;
  double t5247;
  double t5266;
  double t5461;
  double t5489;
  double t5497;
  double t5509;
  double t5585;
  double t5588;
  double t5664;
  double t5786;
  double t5804;
  double t5815;
  double t98;
  double t171;
  double t271;
  double t348;
  double t5918;
  double t700;
  double t772;
  double t5893;
  double t5895;
  double t5926;
  double t5935;
  double t946;
  double t1003;
  double t1072;
  double t1096;
  double t1139;
  double t1244;
  double t5942;
  double t5950;
  double t5970;
  double t5978;
  double t5982;
  double t5986;
  double t1751;
  double t2078;
  double t2143;
  double t2353;
  double t2356;
  double t2359;
  double t2673;
  double t2702;
  double t2708;
  double t6246;
  double t6266;
  double t6285;
  double t6343;
  double t6354;
  double t6391;
  double t3073;
  double t3128;
  double t3132;
  double t3683;
  double t3727;
  double t3849;
  double t6406;
  double t6423;
  double t6448;
  double t6507;
  double t6516;
  double t6524;
  double t4268;
  double t4270;
  double t4285;
  double t4519;
  double t4552;
  double t4692;
  double t6548;
  double t6549;
  double t6551;
  double t6560;
  double t6576;
  double t6591;
  double t4930;
  double t4935;
  double t5143;
  double t5506;
  double t5527;
  double t5530;
  double t6599;
  double t6612;
  double t6618;
  double t6692;
  double t6701;
  double t6718;
  double t5736;
  double t5746;
  double t5784;
  double t6721;
  double t6738;
  double t6755;
  double t6779;
  double t6780;
  double t6783;
  double t6869;
  double t6887;
  double t6908;
  double t6971;
  double t6976;
  double t6985;
  double t7006;
  double t7017;
  double t7023;
  double t7061;
  double t7066;
  double t7075;
  double t7077;
  double t7102;
  double t7105;
  double t7108;
  double t7114;
  double t7115;
  double t7120;
  double t7121;
  double t7122;
  double t7125;
  double t7126;
  double t7128;
  double t7130;
  double t7135;
  double t7137;
  double t7144;
  double t7150;
  double t7164;
  double t7172;
  double t7173;
  double t7215;
  double t7217;
  double t7243;
  double t7250;
  double t7261;
  double t7263;
  double t7264;
  t78 = Cos(var1[4]);
  t96 = Cos(var1[6]);
  t388 = Sin(var1[5]);
  t498 = Sin(var1[4]);
  t499 = Sin(var1[6]);
  t840 = Cos(var1[7]);
  t889 = -1.*t840;
  t944 = 1. + t889;
  t990 = Sin(var1[7]);
  t803 = -1.*t78*t96*t388;
  t811 = t498*t499;
  t816 = t803 + t811;
  t1083 = Cos(var1[5]);
  t1605 = Cos(var1[8]);
  t1713 = -1.*t1605;
  t1748 = 1. + t1713;
  t1830 = Sin(var1[8]);
  t1396 = t78*t1083*t840;
  t1412 = t816*t990;
  t1584 = t1396 + t1412;
  t2191 = t96*t498;
  t2299 = t78*t388*t499;
  t2319 = t2191 + t2299;
  t2416 = Cos(var1[9]);
  t2509 = -1.*t2416;
  t2556 = 1. + t2509;
  t2682 = Sin(var1[9]);
  t2723 = t1605*t1584;
  t2870 = t2319*t1830;
  t2898 = t2723 + t2870;
  t3133 = t1605*t2319;
  t3384 = -1.*t1584*t1830;
  t3502 = t3133 + t3384;
  t3667 = Cos(var1[10]);
  t3678 = -1.*t3667;
  t3680 = 1. + t3678;
  t3688 = Sin(var1[10]);
  t3923 = -1.*t2682*t2898;
  t4032 = t2416*t3502;
  t4259 = t3923 + t4032;
  t4335 = t2416*t2898;
  t4398 = t2682*t3502;
  t4405 = t4335 + t4398;
  t4453 = Cos(var1[11]);
  t4466 = -1.*t4453;
  t4504 = 1. + t4466;
  t4546 = Sin(var1[11]);
  t4752 = t3688*t4259;
  t4833 = t3667*t4405;
  t4877 = t4752 + t4833;
  t5212 = t3667*t4259;
  t5247 = -1.*t3688*t4405;
  t5266 = t5212 + t5247;
  t5461 = Cos(var1[13]);
  t5489 = -1.*t5461;
  t5497 = 1. + t5489;
  t5509 = Sin(var1[13]);
  t5585 = -1.*t4546*t4877;
  t5588 = t4453*t5266;
  t5664 = t5585 + t5588;
  t5786 = t4453*t4877;
  t5804 = t4546*t5266;
  t5815 = t5786 + t5804;
  t98 = -1.*t96;
  t171 = 1. + t98;
  t271 = 0.135*t171;
  t348 = 0. + t271;
  t5918 = Sin(var1[3]);
  t700 = -0.135*t499;
  t772 = 0. + t700;
  t5893 = Cos(var1[3]);
  t5895 = t5893*t1083;
  t5926 = -1.*t5918*t498*t388;
  t5935 = t5895 + t5926;
  t946 = 0.135*t944;
  t1003 = 0.049*t990;
  t1072 = 0. + t946 + t1003;
  t1096 = -0.049*t944;
  t1139 = 0.135*t990;
  t1244 = 0. + t1096 + t1139;
  t5942 = t96*t5935;
  t5950 = -1.*t78*t5918*t499;
  t5970 = t5942 + t5950;
  t5978 = t1083*t5918*t498;
  t5982 = t5893*t388;
  t5986 = t5978 + t5982;
  t1751 = -0.049*t1748;
  t2078 = -0.09*t1830;
  t2143 = 0. + t1751 + t2078;
  t2353 = -0.09*t1748;
  t2356 = 0.049*t1830;
  t2359 = 0. + t2353 + t2356;
  t2673 = -0.049*t2556;
  t2702 = -0.21*t2682;
  t2708 = 0. + t2673 + t2702;
  t6246 = t840*t5986;
  t6266 = t5970*t990;
  t6285 = t6246 + t6266;
  t6343 = -1.*t78*t96*t5918;
  t6354 = -1.*t5935*t499;
  t6391 = t6343 + t6354;
  t3073 = -0.21*t2556;
  t3128 = 0.049*t2682;
  t3132 = 0. + t3073 + t3128;
  t3683 = -0.27068*t3680;
  t3727 = 0.00159*t3688;
  t3849 = 0. + t3683 + t3727;
  t6406 = t1605*t6285;
  t6423 = t6391*t1830;
  t6448 = t6406 + t6423;
  t6507 = t1605*t6391;
  t6516 = -1.*t6285*t1830;
  t6524 = t6507 + t6516;
  t4268 = -0.00159*t3680;
  t4270 = -0.27068*t3688;
  t4285 = 0. + t4268 + t4270;
  t4519 = 0.01841*t4504;
  t4552 = -0.70544*t4546;
  t4692 = 0. + t4519 + t4552;
  t6548 = -1.*t2682*t6448;
  t6549 = t2416*t6524;
  t6551 = t6548 + t6549;
  t6560 = t2416*t6448;
  t6576 = t2682*t6524;
  t6591 = t6560 + t6576;
  t4930 = -0.70544*t4504;
  t4935 = -0.01841*t4546;
  t5143 = 0. + t4930 + t4935;
  t5506 = -1.11344*t5497;
  t5527 = 0.02159*t5509;
  t5530 = 0. + t5506 + t5527;
  t6599 = t3688*t6551;
  t6612 = t3667*t6591;
  t6618 = t6599 + t6612;
  t6692 = t3667*t6551;
  t6701 = -1.*t3688*t6591;
  t6718 = t6692 + t6701;
  t5736 = -0.02159*t5497;
  t5746 = -1.11344*t5509;
  t5784 = 0. + t5736 + t5746;
  t6721 = -1.*t4546*t6618;
  t6738 = t4453*t6718;
  t6755 = t6721 + t6738;
  t6779 = t4453*t6618;
  t6780 = t4546*t6718;
  t6783 = t6779 + t6780;
  t6869 = t1083*t5918;
  t6887 = t5893*t498*t388;
  t6908 = t6869 + t6887;
  t6971 = t96*t6908;
  t6976 = t5893*t78*t499;
  t6985 = t6971 + t6976;
  t7006 = -1.*t5893*t1083*t498;
  t7017 = t5918*t388;
  t7023 = t7006 + t7017;
  t7061 = t840*t7023;
  t7066 = t6985*t990;
  t7075 = t7061 + t7066;
  t7077 = t5893*t78*t96;
  t7102 = -1.*t6908*t499;
  t7105 = t7077 + t7102;
  t7108 = t1605*t7075;
  t7114 = t7105*t1830;
  t7115 = t7108 + t7114;
  t7120 = t1605*t7105;
  t7121 = -1.*t7075*t1830;
  t7122 = t7120 + t7121;
  t7125 = -1.*t2682*t7115;
  t7126 = t2416*t7122;
  t7128 = t7125 + t7126;
  t7130 = t2416*t7115;
  t7135 = t2682*t7122;
  t7137 = t7130 + t7135;
  t7144 = t3688*t7128;
  t7150 = t3667*t7137;
  t7164 = t7144 + t7150;
  t7172 = t3667*t7128;
  t7173 = -1.*t3688*t7137;
  t7215 = t7172 + t7173;
  t7217 = -1.*t4546*t7164;
  t7243 = t4453*t7215;
  t7250 = t7217 + t7243;
  t7261 = t4453*t7164;
  t7263 = t4546*t7215;
  t7264 = t7261 + t7263;
  p_output1[0]=0. + t1584*t2143 + t2319*t2359 + t2708*t2898 + t3132*t3502 + t3849*t4259 + t4285*t4405 + t4692*t4877 + t5143*t5266 + t5530*t5664 + t5784*t5815 + 0.075595*(t5509*t5664 + t5461*t5815) - 1.077437*(t5461*t5664 - 1.*t5509*t5815) + t498*t772 + t1083*t1244*t78 - 1.*t348*t388*t78 + t1072*t816 + 0.1305*(t816*t840 - 1.*t1083*t78*t990) + var1[0];
  p_output1[1]=0. + t348*t5935 + t1072*t5970 + t1244*t5986 + t2143*t6285 + t2359*t6391 + t2708*t6448 + t3132*t6524 + t3849*t6551 + t4285*t6591 + t4692*t6618 + t5143*t6718 + t5530*t6755 + t5784*t6783 + 0.075595*(t5509*t6755 + t5461*t6783) - 1.077437*(t5461*t6755 - 1.*t5509*t6783) - 1.*t5918*t772*t78 + 0.1305*(t5970*t840 - 1.*t5986*t990) + var1[1];
  p_output1[2]=0. + t348*t6908 + t1072*t6985 + t1244*t7023 + t2143*t7075 + t2359*t7105 + t2708*t7115 + t3132*t7122 + t3849*t7128 + t4285*t7137 + t4692*t7164 + t5143*t7215 + t5530*t7250 + t5784*t7264 + 0.075595*(t5509*t7250 + t5461*t7264) - 1.077437*(t5461*t7250 - 1.*t5509*t7264) + t5893*t772*t78 + 0.1305*(t6985*t840 - 1.*t7023*t990) + var1[2];
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

void p_leftToe_constraint_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




