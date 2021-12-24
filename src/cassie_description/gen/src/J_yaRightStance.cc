/*
 * Automatically Generated from Mathematica.
 * Thu 26 Aug 2021 14:19:34 GMT-07:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "J_yaRightStance.hh"
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
  double t7;
  double t40;
  double t66;
  double t67;
  double t142;
  double t371;
  double t734;
  double t749;
  double t870;
  double t1015;
  double t1072;
  double t1223;
  double t1286;
  double t1314;
  double t1344;
  double t2076;
  double t2085;
  double t2116;
  double t2174;
  double t2201;
  double t2219;
  double t2261;
  double t2409;
  double t2430;
  double t2438;
  double t2533;
  double t2538;
  double t2588;
  double t478;
  double t530;
  double t613;
  double t111;
  double t183;
  double t212;
  double t1566;
  double t1814;
  double t1913;
  double t1171;
  double t1237;
  double t1281;
  double t2474;
  double t2501;
  double t2521;
  double t2826;
  double t2827;
  double t2845;
  double t2238;
  double t2360;
  double t2361;
  double t2886;
  double t2893;
  double t2934;
  double t2940;
  double t2944;
  double t31;
  double t252;
  double t472;
  double t647;
  double t1349;
  double t2134;
  double t2442;
  double t2624;
  double t2630;
  double t2667;
  double t2678;
  double t2690;
  double t2723;
  double t2770;
  double t2773;
  double t2787;
  double t2807;
  double t2811;
  double t2820;
  double t2821;
  double t2825;
  double t2846;
  double t2884;
  double t2909;
  double t2961;
  double t2965;
  double t2968;
  double t2969;
  double t2988;
  double t3005;
  double t3020;
  double t3037;
  double t3052;
  double t3053;
  double t3228;
  double t3237;
  double t3278;
  double t3294;
  double t3297;
  double t3315;
  double t3384;
  double t3412;
  double t3521;
  double t3526;
  double t3527;
  double t3528;
  double t3530;
  double t3532;
  double t3534;
  double t3540;
  double t3558;
  double t3560;
  double t3573;
  double t3106;
  double t3122;
  double t3153;
  double t3207;
  double t3583;
  double t3584;
  double t3588;
  double t3596;
  double t3599;
  double t3600;
  double t3605;
  double t3415;
  double t3419;
  double t3427;
  double t3461;
  double t3486;
  double t3489;
  double t3577;
  double t3608;
  double t3613;
  double t3621;
  double t2809;
  double t3064;
  double t3065;
  double t3082;
  double t3993;
  double t4007;
  double t4008;
  double t3720;
  double t3746;
  double t3779;
  double t3696;
  double t3699;
  double t3222;
  double t3848;
  double t3852;
  double t3855;
  double t3827;
  double t3832;
  double t3284;
  double t4477;
  double t4522;
  double t4011;
  double t4035;
  double t4084;
  double t4088;
  double t4092;
  double t4103;
  double t3632;
  double t3666;
  double t4558;
  double t4626;
  double t4635;
  double t4664;
  double t4673;
  double t4682;
  double t5117;
  double t5127;
  double t5099;
  double t5113;
  double t5114;
  double t5229;
  double t5235;
  double t5241;
  double t5182;
  double t5196;
  double t5197;
  double t5399;
  double t5406;
  double t5417;
  double t5429;
  double t5443;
  double t5455;
  double t5487;
  double t5488;
  double t5495;
  double t5499;
  double t5501;
  double t5516;
  double t5532;
  double t5544;
  double t5557;
  double t5573;
  double t5581;
  double t5589;
  double t5636;
  double t5639;
  double t5659;
  double t5666;
  double t5698;
  double t5702;
  double t5704;
  double t5604;
  double t5606;
  double t5616;
  double t5454;
  double t5459;
  double t5461;
  double t5479;
  double t5481;
  double t5483;
  double t5563;
  double t5564;
  double t5565;
  double t5511;
  double t5519;
  double t5527;
  double t5806;
  double t5807;
  double t5815;
  double t5665;
  double t5668;
  double t5673;
  double t5708;
  double t5709;
  double t5714;
  double t5822;
  double t5825;
  double t5826;
  double t5847;
  double t5849;
  double t5401;
  double t5409;
  double t5475;
  double t5484;
  double t5560;
  double t5598;
  double t5692;
  double t5721;
  double t5722;
  double t5724;
  double t5765;
  double t5767;
  double t5772;
  double t5775;
  double t5776;
  double t5779;
  double t5780;
  double t5787;
  double t5795;
  double t5796;
  double t5803;
  double t5817;
  double t5818;
  double t5837;
  double t5851;
  double t5853;
  double t5854;
  double t5855;
  double t5863;
  double t5866;
  double t5867;
  double t5872;
  double t5874;
  double t5875;
  double t5903;
  double t5916;
  double t5918;
  double t5922;
  double t5923;
  double t5930;
  double t5934;
  double t5942;
  double t5782;
  double t5881;
  double t5886;
  double t5887;
  double t6063;
  double t6065;
  double t6069;
  double t6011;
  double t6012;
  double t6021;
  double t6026;
  double t6028;
  double t5896;
  double t6052;
  double t6055;
  double t6056;
  double t6038;
  double t6041;
  double t5919;
  double t6113;
  double t6128;
  double t6162;
  double t6164;
  double t6168;
  double t6172;
  double t6174;
  t7 = Cos(var1[8]);
  t40 = Cos(var1[9]);
  t66 = -1.*t40;
  t67 = 1. + t66;
  t142 = Sin(var1[9]);
  t371 = Sin(var1[8]);
  t734 = -1.*var1[9];
  t749 = 0.226893 + t734;
  t870 = Cos(t749);
  t1015 = -1.*t870;
  t1072 = 1. + t1015;
  t1223 = Sin(t749);
  t1286 = -1.*t7*t142;
  t1314 = -1.*t40*t371;
  t1344 = t1286 + t1314;
  t2076 = t40*t7;
  t2085 = -1.*t142*t371;
  t2116 = t2076 + t2085;
  t2174 = Cos(var1[13]);
  t2201 = -1.*t2174;
  t2219 = 1. + t2201;
  t2261 = Sin(var1[13]);
  t2409 = t1223*t1344;
  t2430 = t870*t2116;
  t2438 = t2409 + t2430;
  t2533 = t870*t1344;
  t2538 = -1.*t1223*t2116;
  t2588 = t2533 + t2538;
  t478 = -0.21*t67;
  t530 = 0.049*t142;
  t613 = t478 + t530;
  t111 = -0.049*t67;
  t183 = -0.21*t142;
  t212 = t111 + t183;
  t1566 = 0.01841*t1072;
  t1814 = -0.70544*t1223;
  t1913 = t1566 + t1814;
  t1171 = -0.70544*t1072;
  t1237 = -0.01841*t1223;
  t1281 = t1171 + t1237;
  t2474 = -1.11344*t2219;
  t2501 = 0.02159*t2261;
  t2521 = t2474 + t2501;
  t2826 = t7*t142;
  t2827 = t40*t371;
  t2845 = t2826 + t2827;
  t2238 = -0.02159*t2219;
  t2360 = -1.11344*t2261;
  t2361 = t2238 + t2360;
  t2886 = -1.*t1223*t2845;
  t2893 = t2886 + t2430;
  t2934 = t870*t2845;
  t2940 = t1223*t2116;
  t2944 = t2934 + t2940;
  t31 = 0.049*t7;
  t252 = t7*t212;
  t472 = -0.09*t371;
  t647 = -1.*t613*t371;
  t1349 = t1281*t1344;
  t2134 = t1913*t2116;
  t2442 = t2361*t2438;
  t2624 = t2521*t2588;
  t2630 = -1.*t2261*t2438;
  t2667 = t2174*t2588;
  t2678 = t2630 + t2667;
  t2690 = -1.11344*t2678;
  t2723 = t2174*t2438;
  t2770 = t2261*t2588;
  t2773 = t2723 + t2770;
  t2787 = -0.02159*t2773;
  t2807 = t31 + t252 + t472 + t647 + t1349 + t2134 + t2442 + t2624 + t2690 + t2787;
  t2811 = 0.09*t7;
  t2820 = t7*t613;
  t2821 = 0.049*t371;
  t2825 = t212*t371;
  t2846 = t1913*t2845;
  t2884 = t1281*t2116;
  t2909 = t2521*t2893;
  t2961 = t2361*t2944;
  t2965 = t2261*t2893;
  t2968 = t2174*t2944;
  t2969 = t2965 + t2968;
  t2988 = -0.02159*t2969;
  t3005 = t2174*t2893;
  t3020 = -1.*t2261*t2944;
  t3037 = t3005 + t3020;
  t3052 = -1.11344*t3037;
  t3053 = t2811 + t2820 + t2821 + t2825 + t2846 + t2884 + t2909 + t2961 + t2988 + t3052;
  t3228 = -1.*t40*t7;
  t3237 = t142*t371;
  t3278 = t3228 + t3237;
  t3294 = -1.*t1223*t1344;
  t3297 = t870*t3278;
  t3315 = t3294 + t3297;
  t3384 = t1223*t3278;
  t3412 = t2533 + t3384;
  t3521 = -0.049*t7;
  t3526 = -1.*t7*t212;
  t3527 = 0.09*t371;
  t3528 = t613*t371;
  t3530 = -1.*t1281*t1344;
  t3532 = -1.*t1913*t2116;
  t3534 = -1.*t2361*t2438;
  t3540 = -1.*t2521*t2588;
  t3558 = 1.11344*t2678;
  t3560 = 0.02159*t2773;
  t3573 = t3521 + t3526 + t3527 + t3528 + t3530 + t3532 + t3534 + t3540 + t3558 + t3560;
  t3106 = -0.09*t7;
  t3122 = -1.*t7*t613;
  t3153 = -0.049*t371;
  t3207 = -1.*t212*t371;
  t3583 = -1.*t1913*t2845;
  t3584 = -1.*t1281*t2116;
  t3588 = -1.*t2521*t2893;
  t3596 = -1.*t2361*t2944;
  t3599 = 0.02159*t2969;
  t3600 = 1.11344*t3037;
  t3605 = t3106 + t3122 + t3153 + t3207 + t3583 + t3584 + t3588 + t3596 + t3599 + t3600;
  t3415 = t2261*t3315;
  t3419 = t2174*t3412;
  t3427 = t3415 + t3419;
  t3461 = t2174*t3315;
  t3486 = -1.*t2261*t3412;
  t3489 = t3461 + t3486;
  t3577 = Power(t3573,2);
  t3608 = Power(t3605,2);
  t3613 = t3577 + t3608;
  t3621 = 1/t3613;
  t2809 = Power(t2807,2);
  t3064 = Power(t3053,2);
  t3065 = 0.00002025 + t2809 + t3064;
  t3082 = 1/Sqrt(t3065);
  t3993 = t2533 + t2934;
  t4007 = t1223*t2845;
  t4008 = t2409 + t4007;
  t3720 = -0.21*t40;
  t3746 = -0.049*t142;
  t3779 = t3720 + t3746;
  t3696 = 0.049*t40;
  t3699 = t3696 + t183;
  t3222 = t1913*t1344;
  t3848 = 0.01841*t870;
  t3852 = 0.70544*t1223;
  t3855 = t3848 + t3852;
  t3827 = 0.70544*t870;
  t3832 = t3827 + t1237;
  t3284 = t1281*t3278;
  t4477 = t2430 + t3297;
  t4522 = t2940 + t3384;
  t4011 = t2261*t3993;
  t4035 = t2174*t4008;
  t4084 = t4011 + t4035;
  t4088 = t2174*t3993;
  t4092 = -1.*t2261*t4008;
  t4103 = t4088 + t4092;
  t3632 = -1.*t1913*t1344;
  t3666 = -1.*t1281*t3278;
  t4558 = t2261*t4477;
  t4626 = t2174*t4522;
  t4635 = t4558 + t4626;
  t4664 = t2174*t4477;
  t4673 = -1.*t2261*t4522;
  t4682 = t4664 + t4673;
  t5117 = 0.02159*t2174;
  t5127 = t5117 + t2360;
  t5099 = -1.11344*t2174;
  t5113 = -0.02159*t2261;
  t5114 = t5099 + t5113;
  t5229 = -1.*t2261*t2893;
  t5235 = -1.*t2174*t2944;
  t5241 = t5229 + t5235;
  t5182 = -1.*t2174*t2438;
  t5196 = -1.*t2261*t2588;
  t5197 = t5182 + t5196;
  t5399 = Cos(var1[16]);
  t5406 = Sin(var1[16]);
  t5417 = Cos(var1[17]);
  t5429 = -1.*t5417;
  t5443 = 1. + t5429;
  t5455 = Sin(var1[17]);
  t5487 = -1.*var1[17];
  t5488 = 0.226893 + t5487;
  t5495 = Cos(t5488);
  t5499 = -1.*t5495;
  t5501 = 1. + t5499;
  t5516 = Sin(t5488);
  t5532 = -1.*t5417*t5406;
  t5544 = -1.*t5399*t5455;
  t5557 = t5532 + t5544;
  t5573 = t5399*t5417;
  t5581 = -1.*t5406*t5455;
  t5589 = t5573 + t5581;
  t5636 = Cos(var1[21]);
  t5639 = -1.*t5636;
  t5659 = 1. + t5639;
  t5666 = Sin(var1[21]);
  t5698 = t5495*t5557;
  t5702 = -1.*t5516*t5589;
  t5704 = t5698 + t5702;
  t5604 = t5516*t5557;
  t5606 = t5495*t5589;
  t5616 = t5604 + t5606;
  t5454 = -0.049*t5443;
  t5459 = -0.21*t5455;
  t5461 = t5454 + t5459;
  t5479 = -0.21*t5443;
  t5481 = 0.049*t5455;
  t5483 = t5479 + t5481;
  t5563 = 0.01841*t5501;
  t5564 = -0.70544*t5516;
  t5565 = t5563 + t5564;
  t5511 = -0.70544*t5501;
  t5519 = -0.01841*t5516;
  t5527 = t5511 + t5519;
  t5806 = t5417*t5406;
  t5807 = t5399*t5455;
  t5815 = t5806 + t5807;
  t5665 = -0.02159*t5659;
  t5668 = -1.11344*t5666;
  t5673 = t5665 + t5668;
  t5708 = -1.11344*t5659;
  t5709 = 0.02159*t5666;
  t5714 = t5708 + t5709;
  t5822 = t5495*t5815;
  t5825 = t5516*t5589;
  t5826 = t5822 + t5825;
  t5847 = -1.*t5516*t5815;
  t5849 = t5847 + t5606;
  t5401 = 0.049*t5399;
  t5409 = -0.09*t5406;
  t5475 = t5399*t5461;
  t5484 = -1.*t5406*t5483;
  t5560 = t5527*t5557;
  t5598 = t5565*t5589;
  t5692 = t5616*t5673;
  t5721 = t5704*t5714;
  t5722 = t5636*t5704;
  t5724 = -1.*t5616*t5666;
  t5765 = t5722 + t5724;
  t5767 = -1.11344*t5765;
  t5772 = t5636*t5616;
  t5775 = t5704*t5666;
  t5776 = t5772 + t5775;
  t5779 = -0.02159*t5776;
  t5780 = t5401 + t5409 + t5475 + t5484 + t5560 + t5598 + t5692 + t5721 + t5767 + t5779;
  t5787 = 0.09*t5399;
  t5795 = 0.049*t5406;
  t5796 = t5406*t5461;
  t5803 = t5399*t5483;
  t5817 = t5565*t5815;
  t5818 = t5527*t5589;
  t5837 = t5826*t5673;
  t5851 = t5849*t5714;
  t5853 = t5636*t5826;
  t5854 = t5849*t5666;
  t5855 = t5853 + t5854;
  t5863 = -0.02159*t5855;
  t5866 = t5636*t5849;
  t5867 = -1.*t5826*t5666;
  t5872 = t5866 + t5867;
  t5874 = -1.11344*t5872;
  t5875 = t5787 + t5795 + t5796 + t5803 + t5817 + t5818 + t5837 + t5851 + t5863 + t5874;
  t5903 = -1.*t5399*t5417;
  t5916 = t5406*t5455;
  t5918 = t5903 + t5916;
  t5922 = t5516*t5918;
  t5923 = t5698 + t5922;
  t5930 = -1.*t5516*t5557;
  t5934 = t5495*t5918;
  t5942 = t5930 + t5934;
  t5782 = Power(t5780,2);
  t5881 = Power(t5875,2);
  t5886 = 0.00002025 + t5782 + t5881;
  t5887 = 1/Sqrt(t5886);
  t6063 = t5516*t5815;
  t6065 = t5604 + t6063;
  t6069 = t5698 + t5822;
  t6011 = 0.049*t5417;
  t6012 = t6011 + t5459;
  t6021 = -0.21*t5417;
  t6026 = -0.049*t5455;
  t6028 = t6021 + t6026;
  t5896 = t5565*t5557;
  t6052 = 0.01841*t5495;
  t6055 = 0.70544*t5516;
  t6056 = t6052 + t6055;
  t6038 = 0.70544*t5495;
  t6041 = t6038 + t5519;
  t5919 = t5527*t5918;
  t6113 = t5825 + t5922;
  t6128 = t5606 + t5934;
  t6162 = 0.02159*t5636;
  t6164 = t6162 + t5668;
  t6168 = -1.11344*t5636;
  t6172 = -0.02159*t5666;
  t6174 = t6168 + t6172;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=1.;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=1.;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0.5*t3082*(2.*t2807*t3053 + 2.*t2807*(t3106 + t3122 + t3153 + t3207 + t3222 + t3284 + t2521*t3315 + t2361*t3412 - 0.02159*t3427 - 1.11344*t3489));
  p_output1[23]=t2807*t3573*t3621 + t3605*t3621*(t2811 + t2820 + t2821 + t2825 - 1.*t2521*t3315 - 1.*t2361*t3412 + 0.02159*t3427 + 1.11344*t3489 + t3632 + t3666);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0.5*t3082*(2.*t3053*(t1349 + t2134 + t371*t3779 + t2845*t3832 + t2116*t3855 + t2521*t3993 + t2361*t4008 - 0.02159*t4084 - 1.11344*t4103 + t3699*t7) + 2.*t2807*(t3222 + t3284 - 1.*t3699*t371 + t2116*t3832 + t1344*t3855 + t2521*t4477 + t2361*t4522 - 0.02159*t4635 - 1.11344*t4682 + t3779*t7));
  p_output1[32]=t2807*t3621*(t3530 + t3532 - 1.*t371*t3779 - 1.*t2845*t3832 - 1.*t2116*t3855 - 1.*t2521*t3993 - 1.*t2361*t4008 + 0.02159*t4084 + 1.11344*t4103 - 1.*t3699*t7) + t3605*t3621*(t3632 + t3666 + t3699*t371 - 1.*t2116*t3832 - 1.*t1344*t3855 - 1.*t2521*t4477 - 1.*t2361*t4522 + 0.02159*t4635 + 1.11344*t4682 - 1.*t3779*t7);
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0.5*t3082*(2.*t2807*(-0.02159*t2678 + t2438*t5114 + t2588*t5127 - 1.11344*t5197) + 2.*t3053*(-0.02159*t3037 + t2944*t5114 + t2893*t5127 - 1.11344*t5241));
  p_output1[41]=t3605*t3621*(0.02159*t2678 - 1.*t2438*t5114 - 1.*t2588*t5127 + 1.11344*t5197) + t2807*t3621*(0.02159*t3037 - 1.*t2944*t5114 - 1.*t2893*t5127 + 1.11344*t5241);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=-1.;
  p_output1[45]=-1.;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=1.;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=1.;
  p_output1[65]=0;
  p_output1[66]=0.5*t5887*(2.*t5780*t5875 + 2.*t5780*(-0.09*t5399 - 0.049*t5406 - 1.*t5406*t5461 - 1.*t5399*t5483 + t5896 + t5919 + t5673*t5923 + t5714*t5942 - 1.11344*(-1.*t5666*t5923 + t5636*t5942) - 0.02159*(t5636*t5923 + t5666*t5942)));
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0.5*t5887*(2.*t5875*(t5560 + t5598 + t5399*t6012 + t5406*t6028 + t5815*t6041 + t5589*t6056 + t5673*t6065 + t5714*t6069 - 1.11344*(-1.*t5666*t6065 + t5636*t6069) - 0.02159*(t5636*t6065 + t5666*t6069)) + 2.*t5780*(t5896 + t5919 - 1.*t5406*t6012 + t5399*t6028 + t5589*t6041 + t5557*t6056 + t5673*t6113 + t5714*t6128 - 1.11344*(-1.*t5666*t6113 + t5636*t6128) - 0.02159*(t5636*t6113 + t5666*t6128)));
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0.5*t5887*(2.*t5780*(-1.11344*(-1.*t5616*t5636 - 1.*t5666*t5704) - 0.02159*t5765 + t5704*t6164 + t5616*t6174) + 2.*t5875*(-1.11344*(-1.*t5636*t5826 - 1.*t5666*t5849) - 0.02159*t5872 + t5849*t6164 + t5826*t6174));
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 10, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void J_yaRightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




