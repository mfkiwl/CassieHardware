/*
 * Automatically Generated from Mathematica.
 * Thu 26 Aug 2021 14:19:38 GMT-07:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "leftLegPitchVelocity.hh"
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
  double t378;
  double t385;
  double t267;
  double t570;
  double t603;
  double t755;
  double t855;
  double t1519;
  double t1520;
  double t1521;
  double t1552;
  double t1484;
  double t1512;
  double t1518;
  double t1611;
  double t1904;
  double t1909;
  double t1987;
  double t2099;
  double t2327;
  double t2328;
  double t2212;
  double t2252;
  double t2282;
  double t2318;
  double t2319;
  double t2322;
  double t2332;
  double t2337;
  double t2338;
  double t2358;
  double t2428;
  double t2436;
  double t2441;
  double t2478;
  double t2503;
  double t2514;
  double t2572;
  double t2599;
  double t2619;
  double t2656;
  double t2683;
  double t2706;
  double t2725;
  double t2812;
  double t2822;
  double t2883;
  double t2973;
  double t2992;
  double t2993;
  double t3003;
  double t3033;
  double t767;
  double t897;
  double t898;
  double t933;
  double t1129;
  double t1302;
  double t1551;
  double t1558;
  double t1568;
  double t1771;
  double t1773;
  double t1840;
  double t2060;
  double t2114;
  double t2135;
  double t3066;
  double t3080;
  double t3081;
  double t3110;
  double t3114;
  double t3118;
  double t2310;
  double t2312;
  double t2317;
  double t2348;
  double t2418;
  double t2419;
  double t3141;
  double t3143;
  double t3149;
  double t3162;
  double t3164;
  double t3172;
  double t2460;
  double t2467;
  double t2477;
  double t2626;
  double t2665;
  double t2679;
  double t3175;
  double t3180;
  double t3182;
  double t3212;
  double t3213;
  double t3224;
  double t2767;
  double t2796;
  double t2804;
  double t3243;
  double t3246;
  double t3248;
  double t3267;
  double t3277;
  double t3296;
  double t1326;
  double t1380;
  double t1458;
  double t2903;
  double t2905;
  double t2907;
  double t2918;
  double t2923;
  double t2950;
  double t3512;
  double t3531;
  double t3544;
  double t3592;
  double t3597;
  double t3607;
  double t3646;
  double t3647;
  double t3648;
  double t3660;
  double t3684;
  double t3692;
  double t3698;
  double t3723;
  double t3737;
  double t3802;
  double t3831;
  double t3837;
  double t3868;
  double t3944;
  double t3966;
  double t3982;
  double t4045;
  double t4074;
  double t4105;
  double t4108;
  double t4124;
  double t3571;
  double t3575;
  double t3576;
  double t4443;
  double t4465;
  double t4468;
  double t4510;
  double t4533;
  double t4537;
  double t4546;
  double t4555;
  double t4556;
  double t4578;
  double t4594;
  double t4595;
  double t369;
  double t489;
  double t904;
  double t1303;
  double t1466;
  double t1602;
  double t1880;
  double t2306;
  double t2324;
  double t2452;
  double t2558;
  double t2740;
  double t2890;
  double t2908;
  double t2956;
  double t2960;
  double t3379;
  double t3380;
  double t3393;
  double t3411;
  double t3424;
  double t3426;
  double t3435;
  double t3443;
  double t3453;
  double t3458;
  double t3464;
  double t3479;
  double t3482;
  double t3487;
  double t3490;
  double t3493;
  double t3501;
  double t3503;
  double t3547;
  double t3553;
  double t3561;
  double t3590;
  double t3635;
  double t3650;
  double t3696;
  double t3742;
  double t3864;
  double t3971;
  double t4089;
  double t4142;
  double t4158;
  double t4159;
  double t4162;
  double t4165;
  double t4212;
  double t4215;
  double t4221;
  double t4223;
  double t4228;
  double t4242;
  double t4253;
  double t4264;
  double t4283;
  double t4290;
  double t4330;
  double t4338;
  double t4344;
  double t4784;
  double t4790;
  double t4791;
  double t4805;
  double t4852;
  double t4866;
  double t4875;
  double t4876;
  double t4897;
  double t4906;
  double t4908;
  double t4918;
  double t5161;
  double t5164;
  double t5174;
  double t5199;
  double t5217;
  double t5258;
  double t5282;
  double t5317;
  double t5320;
  double t5331;
  double t5332;
  double t5347;
  double t5350;
  double t5352;
  double t5354;
  double t5402;
  double t5403;
  double t5415;
  double t5514;
  double t5517;
  double t5518;
  double t5752;
  double t5777;
  double t5793;
  double t5808;
  double t5811;
  double t5813;
  double t5823;
  double t5824;
  double t5829;
  double t5848;
  double t5860;
  double t5863;
  double t5914;
  double t5915;
  double t5926;
  double t5962;
  double t5988;
  double t5992;
  double t6117;
  double t6129;
  double t6141;
  double t6153;
  double t6158;
  double t6163;
  double t6183;
  double t6189;
  double t6204;
  double t6213;
  double t6216;
  double t6222;
  double t6258;
  double t6272;
  double t6276;
  double t6293;
  double t6296;
  double t6298;
  double t6314;
  double t6324;
  double t6356;
  double t6674;
  double t6776;
  double t6897;
  double t7104;
  double t7120;
  double t7173;
  double t7377;
  double t7416;
  double t7464;
  double t7472;
  double t7493;
  double t7503;
  double t7525;
  double t7532;
  double t7553;
  double t7579;
  double t7598;
  double t7611;
  double t7621;
  double t7636;
  double t7642;
  double t7826;
  double t7836;
  double t7837;
  double t7852;
  double t7853;
  double t7856;
  double t7857;
  double t7860;
  double t7862;
  double t7863;
  double t7864;
  double t7881;
  double t7899;
  double t7936;
  double t7783;
  double t7784;
  double t7797;
  double t7799;
  double t7810;
  double t8072;
  double t8075;
  double t8077;
  double t8084;
  double t8109;
  double t8144;
  double t8157;
  double t8161;
  double t8165;
  double t8171;
  double t8176;
  double t8191;
  double t8192;
  double t8194;
  double t8255;
  double t8261;
  double t8262;
  double t8274;
  double t8278;
  double t8499;
  double t8504;
  double t8560;
  double t8567;
  double t8595;
  double t8599;
  double t8600;
  double t8419;
  double t8437;
  double t8451;
  double t8463;
  double t8465;
  double t8481;
  double t8485;
  double t8489;
  double t8519;
  double t8543;
  double t8670;
  double t8690;
  double t8702;
  double t8709;
  double t8711;
  double t8718;
  double t8723;
  t378 = Sin(var1[4]);
  t385 = Sin(var1[6]);
  t267 = Cos(var1[4]);
  t570 = Cos(var1[7]);
  t603 = -1.*t570;
  t755 = 1. + t603;
  t855 = Sin(var1[7]);
  t1519 = Cos(var1[8]);
  t1520 = -1.*t1519;
  t1521 = 1. + t1520;
  t1552 = Sin(var1[8]);
  t1484 = t267*t570;
  t1512 = t378*t385*t855;
  t1518 = t1484 + t1512;
  t1611 = Cos(var1[6]);
  t1904 = Cos(var1[9]);
  t1909 = -1.*t1904;
  t1987 = 1. + t1909;
  t2099 = Sin(var1[9]);
  t2327 = -1.*var1[9];
  t2328 = 0.226893 + t2327;
  t2212 = t1519*t1518;
  t2252 = t1611*t378*t1552;
  t2282 = t2212 + t2252;
  t2318 = t1611*t1519*t378;
  t2319 = -1.*t1518*t1552;
  t2322 = t2318 + t2319;
  t2332 = Cos(t2328);
  t2337 = -1.*t2332;
  t2338 = 1. + t2337;
  t2358 = Sin(t2328);
  t2428 = -1.*t2099*t2282;
  t2436 = t1904*t2322;
  t2441 = t2428 + t2436;
  t2478 = t1904*t2282;
  t2503 = t2099*t2322;
  t2514 = t2478 + t2503;
  t2572 = Cos(var1[13]);
  t2599 = -1.*t2572;
  t2619 = 1. + t2599;
  t2656 = Sin(var1[13]);
  t2683 = t2358*t2441;
  t2706 = t2332*t2514;
  t2725 = t2683 + t2706;
  t2812 = t2332*t2441;
  t2822 = -1.*t2358*t2514;
  t2883 = t2812 + t2822;
  t2973 = Sin(var1[3]);
  t2992 = Cos(var1[3]);
  t2993 = t2992*t1611;
  t3003 = -1.*t267*t2973*t385;
  t3033 = t2993 + t3003;
  t767 = 0.135*t755;
  t897 = 0.049*t855;
  t898 = t767 + t897;
  t933 = -0.049*t755;
  t1129 = 0.135*t855;
  t1302 = t933 + t1129;
  t1551 = -0.049*t1521;
  t1558 = -0.09*t1552;
  t1568 = t1551 + t1558;
  t1771 = -0.09*t1521;
  t1773 = 0.049*t1552;
  t1840 = t1771 + t1773;
  t2060 = -0.049*t1987;
  t2114 = -0.21*t2099;
  t2135 = t2060 + t2114;
  t3066 = t570*t2973*t378;
  t3080 = t3033*t855;
  t3081 = t3066 + t3080;
  t3110 = -1.*t267*t1611*t2973;
  t3114 = -1.*t2992*t385;
  t3118 = t3110 + t3114;
  t2310 = -0.21*t1987;
  t2312 = 0.049*t2099;
  t2317 = t2310 + t2312;
  t2348 = -0.70544*t2338;
  t2418 = -0.01841*t2358;
  t2419 = t2348 + t2418;
  t3141 = t1519*t3081;
  t3143 = t3118*t1552;
  t3149 = t3141 + t3143;
  t3162 = t1519*t3118;
  t3164 = -1.*t3081*t1552;
  t3172 = t3162 + t3164;
  t2460 = 0.01841*t2338;
  t2467 = -0.70544*t2358;
  t2477 = t2460 + t2467;
  t2626 = -0.02159*t2619;
  t2665 = -1.11344*t2656;
  t2679 = t2626 + t2665;
  t3175 = -1.*t2099*t3149;
  t3180 = t1904*t3172;
  t3182 = t3175 + t3180;
  t3212 = t1904*t3149;
  t3213 = t2099*t3172;
  t3224 = t3212 + t3213;
  t2767 = -1.11344*t2619;
  t2796 = 0.02159*t2656;
  t2804 = t2767 + t2796;
  t3243 = t2358*t3182;
  t3246 = t2332*t3224;
  t3248 = t3243 + t3246;
  t3267 = t2332*t3182;
  t3277 = -1.*t2358*t3224;
  t3296 = t3267 + t3277;
  t1326 = t570*t378*t385;
  t1380 = -1.*t267*t855;
  t1458 = t1326 + t1380;
  t2903 = -1.*t2656*t2725;
  t2905 = t2572*t2883;
  t2907 = t2903 + t2905;
  t2918 = t2572*t2725;
  t2923 = t2656*t2883;
  t2950 = t2918 + t2923;
  t3512 = t1611*t2973;
  t3531 = t2992*t267*t385;
  t3544 = t3512 + t3531;
  t3592 = -1.*t2992*t570*t378;
  t3597 = t3544*t855;
  t3607 = t3592 + t3597;
  t3646 = t2992*t267*t1611;
  t3647 = -1.*t2973*t385;
  t3648 = t3646 + t3647;
  t3660 = t1519*t3607;
  t3684 = t3648*t1552;
  t3692 = t3660 + t3684;
  t3698 = t1519*t3648;
  t3723 = -1.*t3607*t1552;
  t3737 = t3698 + t3723;
  t3802 = -1.*t2099*t3692;
  t3831 = t1904*t3737;
  t3837 = t3802 + t3831;
  t3868 = t1904*t3692;
  t3944 = t2099*t3737;
  t3966 = t3868 + t3944;
  t3982 = t2358*t3837;
  t4045 = t2332*t3966;
  t4074 = t3982 + t4045;
  t4105 = t2332*t3837;
  t4108 = -1.*t2358*t3966;
  t4124 = t4105 + t4108;
  t3571 = t570*t3544;
  t3575 = t2992*t378*t855;
  t3576 = t3571 + t3575;
  t4443 = -1.*t1519*t2099*t3576;
  t4465 = -1.*t1904*t3576*t1552;
  t4468 = t4443 + t4465;
  t4510 = t1904*t1519*t3576;
  t4533 = -1.*t2099*t3576*t1552;
  t4537 = t4510 + t4533;
  t4546 = t2358*t4468;
  t4555 = t2332*t4537;
  t4556 = t4546 + t4555;
  t4578 = t2332*t4468;
  t4594 = -1.*t2358*t4537;
  t4595 = t4578 + t4594;
  t369 = -0.049*t267;
  t489 = 0.135*t378*t385;
  t904 = -1.*t378*t385*t898;
  t1303 = -1.*t267*t1302;
  t1466 = -0.1305*t1458;
  t1602 = -1.*t1518*t1568;
  t1880 = -1.*t1611*t378*t1840;
  t2306 = -1.*t2135*t2282;
  t2324 = -1.*t2317*t2322;
  t2452 = -1.*t2419*t2441;
  t2558 = -1.*t2477*t2514;
  t2740 = -1.*t2679*t2725;
  t2890 = -1.*t2804*t2883;
  t2908 = 1.11344*t2907;
  t2956 = 0.02159*t2950;
  t2960 = t369 + t489 + t904 + t1303 + t1466 + t1602 + t1880 + t2306 + t2324 + t2452 + t2558 + t2740 + t2890 + t2908 + t2956;
  t3379 = 0.049*t267;
  t3380 = -0.135*t378*t385;
  t3393 = t378*t385*t898;
  t3411 = t267*t1302;
  t3424 = 0.1305*t1458;
  t3426 = t1518*t1568;
  t3435 = t1611*t378*t1840;
  t3443 = t2135*t2282;
  t3453 = t2317*t2322;
  t3458 = t2419*t2441;
  t3464 = t2477*t2514;
  t3479 = t2679*t2725;
  t3482 = t2804*t2883;
  t3487 = -1.11344*t2907;
  t3490 = -0.02159*t2950;
  t3493 = t3379 + t3380 + t3393 + t3411 + t3424 + t3426 + t3435 + t3443 + t3453 + t3458 + t3464 + t3479 + t3482 + t3487 + t3490;
  t3501 = Power(t3493,2);
  t3503 = 0.049*t2992*t378;
  t3547 = 0.135*t3544;
  t3553 = -1.*t3544*t898;
  t3561 = t2992*t378*t1302;
  t3590 = -0.1305*t3576;
  t3635 = -1.*t3607*t1568;
  t3650 = -1.*t3648*t1840;
  t3696 = -1.*t2135*t3692;
  t3742 = -1.*t2317*t3737;
  t3864 = -1.*t2419*t3837;
  t3971 = -1.*t2477*t3966;
  t4089 = -1.*t2679*t4074;
  t4142 = -1.*t2804*t4124;
  t4158 = -1.*t2656*t4074;
  t4159 = t2572*t4124;
  t4162 = t4158 + t4159;
  t4165 = 1.11344*t4162;
  t4212 = t2572*t4074;
  t4215 = t2656*t4124;
  t4221 = t4212 + t4215;
  t4223 = 0.02159*t4221;
  t4228 = t3503 + t3547 + t3553 + t3561 + t3590 + t3635 + t3650 + t3696 + t3742 + t3864 + t3971 + t4089 + t4142 + t4165 + t4223;
  t4242 = Power(t4228,2);
  t4253 = t3501 + t4242;
  t4264 = 1/t4253;
  t4283 = 0.135*t570;
  t4290 = -0.049*t855;
  t4330 = t4283 + t4290;
  t4338 = 0.049*t570;
  t4344 = t4338 + t1129;
  t4784 = -1.*t1519*t2099*t1458;
  t4790 = -1.*t1904*t1458*t1552;
  t4791 = t4784 + t4790;
  t4805 = t1904*t1519*t1458;
  t4852 = -1.*t2099*t1458*t1552;
  t4866 = t4805 + t4852;
  t4875 = t2358*t4791;
  t4876 = t2332*t4866;
  t4897 = t4875 + t4876;
  t4906 = t2332*t4791;
  t4908 = -1.*t2358*t4866;
  t4918 = t4906 + t4908;
  t5161 = -1.*t1611*t2973;
  t5164 = -1.*t2992*t267*t385;
  t5174 = t5161 + t5164;
  t5199 = t1519*t3648*t855;
  t5217 = t5174*t1552;
  t5258 = t5199 + t5217;
  t5282 = t1519*t5174;
  t5317 = -1.*t3648*t855*t1552;
  t5320 = t5282 + t5317;
  t5331 = -1.*t2099*t5258;
  t5332 = t1904*t5320;
  t5347 = t5331 + t5332;
  t5350 = t1904*t5258;
  t5352 = t2099*t5320;
  t5354 = t5350 + t5352;
  t5402 = t2358*t5347;
  t5403 = t2332*t5354;
  t5415 = t5402 + t5403;
  t5514 = t2332*t5347;
  t5517 = -1.*t2358*t5354;
  t5518 = t5514 + t5517;
  t5752 = t1611*t1519*t378*t855;
  t5777 = -1.*t378*t385*t1552;
  t5793 = t5752 + t5777;
  t5808 = -1.*t1519*t378*t385;
  t5811 = -1.*t1611*t378*t855*t1552;
  t5813 = t5808 + t5811;
  t5823 = -1.*t2099*t5793;
  t5824 = t1904*t5813;
  t5829 = t5823 + t5824;
  t5848 = t1904*t5793;
  t5860 = t2099*t5813;
  t5863 = t5848 + t5860;
  t5914 = t2358*t5829;
  t5915 = t2332*t5863;
  t5926 = t5914 + t5915;
  t5962 = t2332*t5829;
  t5988 = -1.*t2358*t5863;
  t5992 = t5962 + t5988;
  t6117 = -1.*t2992*t267*t570;
  t6129 = -1.*t2992*t378*t385*t855;
  t6141 = t6117 + t6129;
  t6153 = t1519*t6141;
  t6158 = -1.*t2992*t1611*t378*t1552;
  t6163 = t6153 + t6158;
  t6183 = -1.*t2992*t1611*t1519*t378;
  t6189 = -1.*t6141*t1552;
  t6204 = t6183 + t6189;
  t6213 = -1.*t2099*t6163;
  t6216 = t1904*t6204;
  t6222 = t6213 + t6216;
  t6258 = t1904*t6163;
  t6272 = t2099*t6204;
  t6276 = t6258 + t6272;
  t6293 = t2358*t6222;
  t6296 = t2332*t6276;
  t6298 = t6293 + t6296;
  t6314 = t2332*t6222;
  t6324 = -1.*t2358*t6276;
  t6356 = t6314 + t6324;
  t6674 = -1.*t570*t378;
  t6776 = t267*t385*t855;
  t6897 = t6674 + t6776;
  t7104 = t1519*t6897;
  t7120 = t267*t1611*t1552;
  t7173 = t7104 + t7120;
  t7377 = t267*t1611*t1519;
  t7416 = -1.*t6897*t1552;
  t7464 = t7377 + t7416;
  t7472 = -1.*t2099*t7173;
  t7493 = t1904*t7464;
  t7503 = t7472 + t7493;
  t7525 = t1904*t7173;
  t7532 = t2099*t7464;
  t7553 = t7525 + t7532;
  t7579 = t2358*t7503;
  t7598 = t2332*t7553;
  t7611 = t7579 + t7598;
  t7621 = t2332*t7503;
  t7636 = -1.*t2358*t7553;
  t7642 = t7621 + t7636;
  t7826 = -1.*t1519*t3607;
  t7836 = -1.*t3648*t1552;
  t7837 = t7826 + t7836;
  t7852 = t2099*t7837;
  t7853 = t7852 + t3831;
  t7856 = t1904*t7837;
  t7857 = -1.*t2099*t3737;
  t7860 = t7856 + t7857;
  t7862 = -1.*t2358*t7853;
  t7863 = t2332*t7860;
  t7864 = t7862 + t7863;
  t7881 = t2332*t7853;
  t7899 = t2358*t7860;
  t7936 = t7881 + t7899;
  t7783 = 0.049*t1519;
  t7784 = t7783 + t1558;
  t7797 = -0.09*t1519;
  t7799 = -0.049*t1552;
  t7810 = t7797 + t7799;
  t8072 = -1.*t1519*t1518;
  t8075 = -1.*t1611*t378*t1552;
  t8077 = t8072 + t8075;
  t8084 = t2099*t8077;
  t8109 = t8084 + t2436;
  t8144 = t1904*t8077;
  t8157 = -1.*t2099*t2322;
  t8161 = t8144 + t8157;
  t8165 = -1.*t2358*t8109;
  t8171 = t2332*t8161;
  t8176 = t8165 + t8171;
  t8191 = t2332*t8109;
  t8192 = t2358*t8161;
  t8194 = t8191 + t8192;
  t8255 = -1.11344*t2572;
  t8261 = -0.02159*t2656;
  t8262 = t8255 + t8261;
  t8274 = 0.02159*t2572;
  t8278 = t8274 + t2665;
  t8499 = -1.*t1904*t2282;
  t8504 = t8499 + t8157;
  t8560 = t2332*t8504;
  t8567 = t8560 + t2706;
  t8595 = t2358*t8504;
  t8599 = t2358*t2514;
  t8600 = t8595 + t8599;
  t8419 = -0.21*t1904;
  t8437 = -0.049*t2099;
  t8451 = t8419 + t8437;
  t8463 = 0.049*t1904;
  t8465 = t8463 + t2114;
  t8481 = 0.01841*t2332;
  t8485 = 0.70544*t2358;
  t8489 = t8481 + t8485;
  t8519 = 0.70544*t2332;
  t8543 = t8519 + t2418;
  t8670 = -1.*t1904*t3692;
  t8690 = t8670 + t7857;
  t8702 = t2332*t8690;
  t8709 = t8702 + t4045;
  t8711 = t2358*t8690;
  t8718 = t2358*t3966;
  t8723 = t8711 + t8718;
  p_output1[0]=t2960*t4264*(0.135*t3033 - 1.*t1568*t3081 - 1.*t1840*t3118 - 1.*t2135*t3149 - 1.*t2317*t3172 - 1.*t2419*t3182 - 1.*t2477*t3224 - 1.*t2679*t3248 - 1.*t2804*t3296 + 1.11344*(-1.*t2656*t3248 + t2572*t3296) + 0.02159*(t2572*t3248 + t2656*t3296) - 0.049*t2973*t378 - 1.*t1302*t2973*t378 - 0.1305*(t3033*t570 - 1.*t2973*t378*t855) - 1.*t3033*t898)*var2[3] + (t4228*t4264*(t1611*t1840*t267 - 0.049*t378 - 1.*t1302*t378 - 0.135*t267*t385 + t1568*t6897 + t2135*t7173 + t2317*t7464 + t2419*t7503 + t2477*t7553 + t2679*t7611 + t2804*t7642 - 1.11344*(-1.*t2656*t7611 + t2572*t7642) - 0.02159*(t2572*t7611 + t2656*t7642) + 0.1305*(t267*t385*t570 + t378*t855) + t267*t385*t898) + t2960*t4264*(0.049*t267*t2992 + t1302*t267*t2992 + t1611*t1840*t2992*t378 - 0.135*t2992*t378*t385 - 1.*t1568*t6141 - 1.*t2135*t6163 - 1.*t2317*t6204 - 1.*t2419*t6222 - 1.*t2477*t6276 - 1.*t2679*t6298 - 1.*t2804*t6356 + 1.11344*(-1.*t2656*t6298 + t2572*t6356) + 0.02159*(t2572*t6298 + t2656*t6356) - 0.1305*(-1.*t2992*t378*t385*t570 + t267*t2992*t855) + t2992*t378*t385*t898))*var2[4] + (t2960*t4264*(0.135*t3648 - 1.*t1840*t5174 - 1.*t2135*t5258 - 1.*t2317*t5320 - 1.*t2419*t5347 - 1.*t2477*t5354 - 1.*t2679*t5415 - 1.*t2804*t5518 + 1.11344*(-1.*t2656*t5415 + t2572*t5518) + 0.02159*(t2572*t5415 + t2656*t5518) - 0.1305*t3648*t570 - 1.*t1568*t3648*t855 - 1.*t3648*t898) + t4228*t4264*(-0.135*t1611*t378 - 1.*t1840*t378*t385 + 0.1305*t1611*t378*t570 + t2135*t5793 + t2317*t5813 + t2419*t5829 + t2477*t5863 + t2679*t5926 + t2804*t5992 - 1.11344*(-1.*t2656*t5926 + t2572*t5992) - 0.02159*(t2572*t5926 + t2656*t5992) + t1568*t1611*t378*t855 + t1611*t378*t898))*var2[6] + (t2960*t4264*(-1.*t1568*t3576 - 1.*t1519*t2135*t3576 + t1552*t2317*t3576 + t2992*t378*t4330 - 1.*t3544*t4344 - 1.*t2419*t4468 - 1.*t2477*t4537 - 1.*t2679*t4556 - 1.*t2804*t4595 + 1.11344*(-1.*t2656*t4556 + t2572*t4595) + 0.02159*(t2572*t4556 + t2656*t4595) - 0.1305*(t2992*t378*t570 - 1.*t3544*t855)) + t4228*t4264*(t1458*t1568 + t1458*t1519*t2135 - 1.*t1458*t1552*t2317 + t267*t4330 + t378*t385*t4344 + t2419*t4791 + t2477*t4866 + t2679*t4897 + t2804*t4918 - 1.11344*(-1.*t2656*t4897 + t2572*t4918) - 0.02159*(t2572*t4897 + t2656*t4918) + 0.1305*(-1.*t267*t570 - 1.*t378*t385*t855)))*var2[7] + (t2960*t4264*(-1.*t2135*t3737 - 1.*t3648*t7784 - 1.*t3607*t7810 - 1.*t2317*t7837 - 1.*t2477*t7853 - 1.*t2419*t7860 - 1.*t2804*t7864 - 1.*t2679*t7936 + 0.02159*(t2656*t7864 + t2572*t7936) + 1.11344*(t2572*t7864 - 1.*t2656*t7936)) + t4228*t4264*(t2135*t2322 + t1611*t378*t7784 + t1518*t7810 + t2317*t8077 + t2477*t8109 + t2419*t8161 + t2804*t8176 + t2679*t8194 - 0.02159*(t2656*t8176 + t2572*t8194) - 1.11344*(t2572*t8176 - 1.*t2656*t8194)))*var2[8] + (t4228*t4264*(t2441*t2477 + t2282*t8451 + t2322*t8465 + t2441*t8489 + t2419*t8504 + t2514*t8543 + t2804*t8567 + t2679*t8600 - 0.02159*(t2656*t8567 + t2572*t8600) - 1.11344*(t2572*t8567 - 1.*t2656*t8600)) + t2960*t4264*(-1.*t2477*t3837 - 1.*t3692*t8451 - 1.*t3737*t8465 - 1.*t3837*t8489 - 1.*t3966*t8543 - 1.*t2419*t8690 - 1.*t2804*t8709 - 1.*t2679*t8723 + 0.02159*(t2656*t8709 + t2572*t8723) + 1.11344*(t2572*t8709 - 1.*t2656*t8723)))*var2[9] + (t4228*t4264*(-1.11344*(-1.*t2572*t2725 - 1.*t2656*t2883) - 0.02159*t2907 + t2725*t8262 + t2883*t8278) + t2960*t4264*(1.11344*(-1.*t2572*t4074 - 1.*t2656*t4124) + 0.02159*t4162 - 1.*t4074*t8262 - 1.*t4124*t8278))*var2[13];
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

void leftLegPitchVelocity_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}




