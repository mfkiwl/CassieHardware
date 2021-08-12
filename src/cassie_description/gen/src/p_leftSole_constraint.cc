/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:18 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "p_leftSole_constraint.hh"
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
  double t58;
  double t119;
  double t253;
  double t321;
  double t342;
  double t564;
  double t585;
  double t599;
  double t608;
  double t454;
  double t526;
  double t555;
  double t786;
  double t1061;
  double t1065;
  double t1068;
  double t1094;
  double t976;
  double t977;
  double t979;
  double t1160;
  double t1198;
  double t1202;
  double t1257;
  double t1309;
  double t1364;
  double t1433;
  double t1515;
  double t1553;
  double t1565;
  double t1621;
  double t1646;
  double t1655;
  double t1789;
  double t1805;
  double t1809;
  double t1819;
  double t1941;
  double t1976;
  double t1983;
  double t2206;
  double t2254;
  double t2316;
  double t2350;
  double t2355;
  double t2383;
  double t2414;
  double t2426;
  double t2427;
  double t2513;
  double t2593;
  double t2598;
  double t2625;
  double t2696;
  double t2789;
  double t2790;
  double t2831;
  double t3057;
  double t3068;
  double t3070;
  double t3345;
  double t3423;
  double t3523;
  double t143;
  double t175;
  double t4046;
  double t4038;
  double t4040;
  double t4072;
  double t4082;
  double t604;
  double t616;
  double t646;
  double t795;
  double t802;
  double t822;
  double t4116;
  double t4133;
  double t4145;
  double t4173;
  double t4181;
  double t4204;
  double t1079;
  double t1143;
  double t1154;
  double t1217;
  double t1221;
  double t1234;
  double t1427;
  double t1455;
  double t1473;
  double t4343;
  double t4401;
  double t4429;
  double t4609;
  double t4618;
  double t4620;
  double t1607;
  double t1612;
  double t1619;
  double t1811;
  double t1824;
  double t1836;
  double t4642;
  double t4661;
  double t4670;
  double t4700;
  double t4771;
  double t4789;
  double t2097;
  double t2116;
  double t2168;
  double t2384;
  double t2417;
  double t2421;
  double t4845;
  double t4917;
  double t4928;
  double t4938;
  double t5060;
  double t5072;
  double t2529;
  double t2535;
  double t2541;
  double t2806;
  double t2853;
  double t3009;
  double t5112;
  double t5118;
  double t5126;
  double t5145;
  double t5154;
  double t5172;
  double t3135;
  double t3230;
  double t3247;
  double t5182;
  double t5198;
  double t5208;
  double t5232;
  double t5251;
  double t5262;
  double t5502;
  double t5503;
  double t5508;
  double t5515;
  double t5518;
  double t5558;
  double t5565;
  double t5566;
  double t5571;
  double t5654;
  double t5693;
  double t5695;
  double t5803;
  double t5834;
  double t5850;
  double t5901;
  double t5925;
  double t5990;
  double t6002;
  double t6045;
  double t6048;
  double t6051;
  double t6089;
  double t6092;
  double t6103;
  double t6106;
  double t6112;
  double t6124;
  double t6128;
  double t6195;
  double t6288;
  double t6305;
  double t6316;
  double t6352;
  double t6369;
  double t6373;
  double t6384;
  double t6402;
  double t6419;
  double t5290;
  double t5336;
  double t5344;
  double t5358;
  double t5371;
  double t5386;
  double t3681;
  double t3682;
  double t3733;
  double t3907;
  double t3990;
  double t4009;
  double t6457;
  double t6461;
  double t6521;
  double t6547;
  double t6557;
  double t6579;
  double t4252;
  double t4258;
  double t4261;
  double t5574;
  double t5629;
  double t5633;
  double t6805;
  double t6828;
  double t6851;
  double t6890;
  double t6910;
  double t6941;
  double t6949;
  double t846;
  double t893;
  double t921;
  t58 = Cos(var1[4]);
  t119 = Cos(var1[6]);
  t253 = Sin(var1[5]);
  t321 = Sin(var1[4]);
  t342 = Sin(var1[6]);
  t564 = Cos(var1[7]);
  t585 = -1.*t564;
  t599 = 1. + t585;
  t608 = Sin(var1[7]);
  t454 = -1.*t58*t119*t253;
  t526 = t321*t342;
  t555 = t454 + t526;
  t786 = Cos(var1[5]);
  t1061 = Cos(var1[8]);
  t1065 = -1.*t1061;
  t1068 = 1. + t1065;
  t1094 = Sin(var1[8]);
  t976 = t58*t786*t564;
  t977 = t555*t608;
  t979 = t976 + t977;
  t1160 = t119*t321;
  t1198 = t58*t253*t342;
  t1202 = t1160 + t1198;
  t1257 = Cos(var1[9]);
  t1309 = -1.*t1257;
  t1364 = 1. + t1309;
  t1433 = Sin(var1[9]);
  t1515 = t1061*t979;
  t1553 = t1202*t1094;
  t1565 = t1515 + t1553;
  t1621 = t1061*t1202;
  t1646 = -1.*t979*t1094;
  t1655 = t1621 + t1646;
  t1789 = Cos(var1[10]);
  t1805 = -1.*t1789;
  t1809 = 1. + t1805;
  t1819 = Sin(var1[10]);
  t1941 = -1.*t1433*t1565;
  t1976 = t1257*t1655;
  t1983 = t1941 + t1976;
  t2206 = t1257*t1565;
  t2254 = t1433*t1655;
  t2316 = t2206 + t2254;
  t2350 = Cos(var1[11]);
  t2355 = -1.*t2350;
  t2383 = 1. + t2355;
  t2414 = Sin(var1[11]);
  t2426 = t1819*t1983;
  t2427 = t1789*t2316;
  t2513 = t2426 + t2427;
  t2593 = t1789*t1983;
  t2598 = -1.*t1819*t2316;
  t2625 = t2593 + t2598;
  t2696 = Cos(var1[13]);
  t2789 = -1.*t2696;
  t2790 = 1. + t2789;
  t2831 = Sin(var1[13]);
  t3057 = -1.*t2414*t2513;
  t3068 = t2350*t2625;
  t3070 = t3057 + t3068;
  t3345 = t2350*t2513;
  t3423 = t2414*t2625;
  t3523 = t3345 + t3423;
  t143 = -1.*t119;
  t175 = 1. + t143;
  t4046 = Sin(var1[3]);
  t4038 = Cos(var1[3]);
  t4040 = t4038*t786;
  t4072 = -1.*t4046*t321*t253;
  t4082 = t4040 + t4072;
  t604 = 0.135*t599;
  t616 = 0.049*t608;
  t646 = t604 + t616;
  t795 = -0.049*t599;
  t802 = 0.135*t608;
  t822 = t795 + t802;
  t4116 = t119*t4082;
  t4133 = -1.*t58*t4046*t342;
  t4145 = t4116 + t4133;
  t4173 = t786*t4046*t321;
  t4181 = t4038*t253;
  t4204 = t4173 + t4181;
  t1079 = -0.049*t1068;
  t1143 = -0.09*t1094;
  t1154 = t1079 + t1143;
  t1217 = -0.09*t1068;
  t1221 = 0.049*t1094;
  t1234 = t1217 + t1221;
  t1427 = -0.049*t1364;
  t1455 = -0.21*t1433;
  t1473 = t1427 + t1455;
  t4343 = t564*t4204;
  t4401 = t4145*t608;
  t4429 = t4343 + t4401;
  t4609 = -1.*t58*t119*t4046;
  t4618 = -1.*t4082*t342;
  t4620 = t4609 + t4618;
  t1607 = -0.21*t1364;
  t1612 = 0.049*t1433;
  t1619 = t1607 + t1612;
  t1811 = -0.27068*t1809;
  t1824 = 0.00159*t1819;
  t1836 = t1811 + t1824;
  t4642 = t1061*t4429;
  t4661 = t4620*t1094;
  t4670 = t4642 + t4661;
  t4700 = t1061*t4620;
  t4771 = -1.*t4429*t1094;
  t4789 = t4700 + t4771;
  t2097 = -0.00159*t1809;
  t2116 = -0.27068*t1819;
  t2168 = t2097 + t2116;
  t2384 = 0.01841*t2383;
  t2417 = -0.70544*t2414;
  t2421 = t2384 + t2417;
  t4845 = -1.*t1433*t4670;
  t4917 = t1257*t4789;
  t4928 = t4845 + t4917;
  t4938 = t1257*t4670;
  t5060 = t1433*t4789;
  t5072 = t4938 + t5060;
  t2529 = -0.70544*t2383;
  t2535 = -0.01841*t2414;
  t2541 = t2529 + t2535;
  t2806 = -1.11344*t2790;
  t2853 = 0.02159*t2831;
  t3009 = t2806 + t2853;
  t5112 = t1819*t4928;
  t5118 = t1789*t5072;
  t5126 = t5112 + t5118;
  t5145 = t1789*t4928;
  t5154 = -1.*t1819*t5072;
  t5172 = t5145 + t5154;
  t3135 = -0.02159*t2790;
  t3230 = -1.11344*t2831;
  t3247 = t3135 + t3230;
  t5182 = -1.*t2414*t5126;
  t5198 = t2350*t5172;
  t5208 = t5182 + t5198;
  t5232 = t2350*t5126;
  t5251 = t2414*t5172;
  t5262 = t5232 + t5251;
  t5502 = t786*t4046;
  t5503 = t4038*t321*t253;
  t5508 = t5502 + t5503;
  t5515 = t119*t5508;
  t5518 = t4038*t58*t342;
  t5558 = t5515 + t5518;
  t5565 = -1.*t4038*t786*t321;
  t5566 = t4046*t253;
  t5571 = t5565 + t5566;
  t5654 = t564*t5571;
  t5693 = t5558*t608;
  t5695 = t5654 + t5693;
  t5803 = t4038*t58*t119;
  t5834 = -1.*t5508*t342;
  t5850 = t5803 + t5834;
  t5901 = t1061*t5695;
  t5925 = t5850*t1094;
  t5990 = t5901 + t5925;
  t6002 = t1061*t5850;
  t6045 = -1.*t5695*t1094;
  t6048 = t6002 + t6045;
  t6051 = -1.*t1433*t5990;
  t6089 = t1257*t6048;
  t6092 = t6051 + t6089;
  t6103 = t1257*t5990;
  t6106 = t1433*t6048;
  t6112 = t6103 + t6106;
  t6124 = t1819*t6092;
  t6128 = t1789*t6112;
  t6195 = t6124 + t6128;
  t6288 = t1789*t6092;
  t6305 = -1.*t1819*t6112;
  t6316 = t6288 + t6305;
  t6352 = -1.*t2414*t6195;
  t6369 = t2350*t6316;
  t6373 = t6352 + t6369;
  t6384 = t2350*t6195;
  t6402 = t2414*t6316;
  t6419 = t6384 + t6402;
  t5290 = t2831*t5208;
  t5336 = t2696*t5262;
  t5344 = t5290 + t5336;
  t5358 = t2696*t5208;
  t5371 = -1.*t2831*t5262;
  t5386 = t5358 + t5371;
  t3681 = t2831*t3070;
  t3682 = t2696*t3523;
  t3733 = t3681 + t3682;
  t3907 = t2696*t3070;
  t3990 = -1.*t2831*t3523;
  t4009 = t3907 + t3990;
  t6457 = t2831*t6373;
  t6461 = t2696*t6419;
  t6521 = t6457 + t6461;
  t6547 = t2696*t6373;
  t6557 = -1.*t2831*t6419;
  t6579 = t6547 + t6557;
  t4252 = t564*t4145;
  t4258 = -1.*t4204*t608;
  t4261 = t4252 + t4258;
  t5574 = t564*t5558;
  t5629 = -1.*t5571*t608;
  t5633 = t5574 + t5629;
  t6805 = -0.766044*t6521;
  t6828 = 0.642788*t6579;
  t6851 = t6805 + t6828;
  t6890 = Power(t5633,2);
  t6910 = Power(t6851,2);
  t6941 = t6890 + t6910;
  t6949 = 1/Sqrt(t6941);
  t846 = t564*t555;
  t893 = -1.*t58*t786*t608;
  t921 = t846 + t893;
  p_output1[0]=t1202*t1234 + t1473*t1565 + t1619*t1655 + t1836*t1983 + t2168*t2316 + t2421*t2513 + t2541*t2625 + t3009*t3070 - 0.135*t321*t342 + t3247*t3523 + 0.0306*t3733 - 1.13106*t4009 - 0.135*t175*t253*t58 + t555*t646 + t58*t786*t822 + 0.1305*t921 + t1154*t979 + var1[0];
  p_output1[1]=0.135*t175*t4082 + 0.1305*t4261 + t1154*t4429 + t1234*t4620 + t1473*t4670 + t1619*t4789 + t1836*t4928 + t2168*t5072 + t2421*t5126 + t2541*t5172 + t3009*t5208 + t3247*t5262 + 0.0306*t5344 - 1.13106*t5386 + 0.135*t342*t4046*t58 + t4145*t646 + t4204*t822 + var1[1];
  p_output1[2]=0.135*t175*t5508 + 0.1305*t5633 + t1154*t5695 - 0.135*t342*t4038*t58 + t1234*t5850 + t1473*t5990 + t1619*t6048 + t1836*t6092 + t2168*t6112 + t2421*t6195 + t2541*t6316 + t3009*t6373 + t3247*t6419 + t5558*t646 + 0.0306*t6521 - 1.13106*t6579 + t5571*t822 + var1[2];
  p_output1[3]=ArcTan(Sqrt(Power(0.642788*t3733 + 0.766044*t4009,2) + Power(0.642788*t5344 + 0.766044*t5386,2)),-0.642788*t6521 - 0.766044*t6579);
  p_output1[4]=ArcTan(-1.*(-0.766044*t5344 + 0.642788*t5386)*t5633*t6949 + t4261*t6851*t6949,(-0.766044*t3733 + 0.642788*t4009)*t5633*t6949 - 1.*t6851*t6949*t921);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 5, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void p_leftSole_constraint_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




