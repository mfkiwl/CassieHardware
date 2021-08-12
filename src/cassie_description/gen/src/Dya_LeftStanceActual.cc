/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:55 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "Dya_LeftStanceActual.hh"
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
  double t5;
  double t31;
  double t59;
  double t65;
  double t94;
  double t154;
  double t202;
  double t206;
  double t217;
  double t223;
  double t226;
  double t230;
  double t250;
  double t252;
  double t270;
  double t280;
  double t281;
  double t291;
  double t301;
  double t306;
  double t307;
  double t315;
  double t353;
  double t368;
  double t370;
  double t401;
  double t404;
  double t407;
  double t177;
  double t187;
  double t193;
  double t75;
  double t135;
  double t142;
  double t273;
  double t274;
  double t276;
  double t227;
  double t238;
  double t239;
  double t376;
  double t398;
  double t400;
  double t580;
  double t581;
  double t583;
  double t309;
  double t324;
  double t346;
  double t609;
  double t623;
  double t645;
  double t649;
  double t651;
  double t16;
  double t145;
  double t164;
  double t198;
  double t272;
  double t292;
  double t372;
  double t437;
  double t461;
  double t473;
  double t475;
  double t477;
  double t489;
  double t492;
  double t501;
  double t508;
  double t525;
  double t537;
  double t544;
  double t546;
  double t547;
  double t594;
  double t603;
  double t639;
  double t659;
  double t661;
  double t669;
  double t678;
  double t679;
  double t680;
  double t684;
  double t688;
  double t689;
  double t691;
  double t789;
  double t803;
  double t815;
  double t821;
  double t831;
  double t833;
  double t837;
  double t844;
  double t534;
  double t693;
  double t694;
  double t708;
  double t1218;
  double t1251;
  double t1273;
  double t1075;
  double t1078;
  double t1082;
  double t1039;
  double t1055;
  double t785;
  double t1137;
  double t1155;
  double t1211;
  double t1088;
  double t1118;
  double t816;
  double t1466;
  double t1491;
  double t1794;
  double t1805;
  double t1756;
  double t1763;
  double t1769;
  double t2143;
  double t2164;
  double t2174;
  double t2181;
  double t2186;
  double t2195;
  double t2292;
  double t2302;
  double t2307;
  double t2317;
  double t2324;
  double t2364;
  double t2390;
  double t2406;
  double t2437;
  double t2518;
  double t2542;
  double t2546;
  double t2632;
  double t2662;
  double t2689;
  double t2700;
  double t2847;
  double t2861;
  double t2867;
  double t2591;
  double t2620;
  double t2626;
  double t2192;
  double t2207;
  double t2215;
  double t2252;
  double t2256;
  double t2264;
  double t2447;
  double t2452;
  double t2512;
  double t2330;
  double t2374;
  double t2378;
  double t3047;
  double t3076;
  double t3078;
  double t2695;
  double t2769;
  double t2780;
  double t2889;
  double t2916;
  double t2925;
  double t3115;
  double t3124;
  double t3126;
  double t3132;
  double t3133;
  double t2151;
  double t2165;
  double t2227;
  double t2280;
  double t2442;
  double t2551;
  double t2803;
  double t2927;
  double t2933;
  double t2939;
  double t2973;
  double t2975;
  double t2987;
  double t2989;
  double t2992;
  double t2994;
  double t3011;
  double t3021;
  double t3022;
  double t3032;
  double t3035;
  double t3080;
  double t3111;
  double t3127;
  double t3143;
  double t3145;
  double t3157;
  double t3176;
  double t3185;
  double t3196;
  double t3200;
  double t3204;
  double t3211;
  double t3261;
  double t3484;
  double t3490;
  double t3558;
  double t3606;
  double t3634;
  double t3676;
  double t3679;
  double t3688;
  double t3861;
  double t3871;
  double t3883;
  double t3896;
  double t3936;
  double t3972;
  double t3981;
  double t3993;
  double t4017;
  double t4029;
  double t4033;
  double t3356;
  double t3370;
  double t3460;
  double t3475;
  double t4061;
  double t4083;
  double t4091;
  double t4112;
  double t4113;
  double t4115;
  double t4141;
  double t3716;
  double t3729;
  double t3730;
  double t3751;
  double t3752;
  double t3756;
  double t4045;
  double t4155;
  double t4156;
  double t4178;
  double t3020;
  double t3283;
  double t3312;
  double t3315;
  double t4567;
  double t4577;
  double t4603;
  double t4337;
  double t4373;
  double t4386;
  double t4395;
  double t4404;
  double t3478;
  double t4518;
  double t4526;
  double t4552;
  double t4438;
  double t4469;
  double t3600;
  double t4880;
  double t4907;
  double t4626;
  double t4691;
  double t4693;
  double t4705;
  double t4706;
  double t4731;
  double t4203;
  double t4214;
  double t4926;
  double t4929;
  double t4932;
  double t4939;
  double t4966;
  double t4990;
  double t5391;
  double t5399;
  double t5413;
  double t5414;
  double t5415;
  double t5456;
  double t5468;
  double t5474;
  double t5426;
  double t5428;
  double t5433;
  t5 = Cos(var1[8]);
  t31 = Cos(var1[9]);
  t59 = -1.*t31;
  t65 = 1. + t59;
  t94 = Sin(var1[9]);
  t154 = Sin(var1[8]);
  t202 = -1.*var1[9];
  t206 = 0.226893 + t202;
  t217 = Cos(t206);
  t223 = -1.*t217;
  t226 = 1. + t223;
  t230 = Sin(t206);
  t250 = -1.*t5*t94;
  t252 = -1.*t31*t154;
  t270 = t250 + t252;
  t280 = t31*t5;
  t281 = -1.*t94*t154;
  t291 = t280 + t281;
  t301 = Cos(var1[13]);
  t306 = -1.*t301;
  t307 = 1. + t306;
  t315 = Sin(var1[13]);
  t353 = t230*t270;
  t368 = t217*t291;
  t370 = t353 + t368;
  t401 = t217*t270;
  t404 = -1.*t230*t291;
  t407 = t401 + t404;
  t177 = -0.21*t65;
  t187 = 0.049*t94;
  t193 = t177 + t187;
  t75 = -0.049*t65;
  t135 = -0.21*t94;
  t142 = t75 + t135;
  t273 = 0.01841*t226;
  t274 = -0.70544*t230;
  t276 = t273 + t274;
  t227 = -0.70544*t226;
  t238 = -0.01841*t230;
  t239 = t227 + t238;
  t376 = -1.11344*t307;
  t398 = 0.02159*t315;
  t400 = t376 + t398;
  t580 = t5*t94;
  t581 = t31*t154;
  t583 = t580 + t581;
  t309 = -0.02159*t307;
  t324 = -1.11344*t315;
  t346 = t309 + t324;
  t609 = -1.*t230*t583;
  t623 = t609 + t368;
  t645 = t217*t583;
  t649 = t230*t291;
  t651 = t645 + t649;
  t16 = 0.049*t5;
  t145 = t5*t142;
  t164 = -0.09*t154;
  t198 = -1.*t193*t154;
  t272 = t239*t270;
  t292 = t276*t291;
  t372 = t346*t370;
  t437 = t400*t407;
  t461 = -1.*t315*t370;
  t473 = t301*t407;
  t475 = t461 + t473;
  t477 = -1.11344*t475;
  t489 = t301*t370;
  t492 = t315*t407;
  t501 = t489 + t492;
  t508 = -0.02159*t501;
  t525 = t16 + t145 + t164 + t198 + t272 + t292 + t372 + t437 + t477 + t508;
  t537 = 0.09*t5;
  t544 = t5*t193;
  t546 = 0.049*t154;
  t547 = t142*t154;
  t594 = t276*t583;
  t603 = t239*t291;
  t639 = t400*t623;
  t659 = t346*t651;
  t661 = t315*t623;
  t669 = t301*t651;
  t678 = t661 + t669;
  t679 = -0.02159*t678;
  t680 = t301*t623;
  t684 = -1.*t315*t651;
  t688 = t680 + t684;
  t689 = -1.11344*t688;
  t691 = t537 + t544 + t546 + t547 + t594 + t603 + t639 + t659 + t679 + t689;
  t789 = -1.*t31*t5;
  t803 = t94*t154;
  t815 = t789 + t803;
  t821 = -1.*t230*t270;
  t831 = t217*t815;
  t833 = t821 + t831;
  t837 = t230*t815;
  t844 = t401 + t837;
  t534 = Power(t525,2);
  t693 = Power(t691,2);
  t694 = 0.00002025 + t534 + t693;
  t708 = 1/Sqrt(t694);
  t1218 = t401 + t645;
  t1251 = t230*t583;
  t1273 = t353 + t1251;
  t1075 = -0.21*t31;
  t1078 = -0.049*t94;
  t1082 = t1075 + t1078;
  t1039 = 0.049*t31;
  t1055 = t1039 + t135;
  t785 = t276*t270;
  t1137 = 0.01841*t217;
  t1155 = 0.70544*t230;
  t1211 = t1137 + t1155;
  t1088 = 0.70544*t217;
  t1118 = t1088 + t238;
  t816 = t239*t815;
  t1466 = t368 + t831;
  t1491 = t649 + t837;
  t1794 = 0.02159*t301;
  t1805 = t1794 + t324;
  t1756 = -1.11344*t301;
  t1763 = -0.02159*t315;
  t1769 = t1756 + t1763;
  t2143 = Cos(var1[16]);
  t2164 = Sin(var1[16]);
  t2174 = Cos(var1[17]);
  t2181 = -1.*t2174;
  t2186 = 1. + t2181;
  t2195 = Sin(var1[17]);
  t2292 = -1.*var1[17];
  t2302 = 0.226893 + t2292;
  t2307 = Cos(t2302);
  t2317 = -1.*t2307;
  t2324 = 1. + t2317;
  t2364 = Sin(t2302);
  t2390 = -1.*t2174*t2164;
  t2406 = -1.*t2143*t2195;
  t2437 = t2390 + t2406;
  t2518 = t2143*t2174;
  t2542 = -1.*t2164*t2195;
  t2546 = t2518 + t2542;
  t2632 = Cos(var1[21]);
  t2662 = -1.*t2632;
  t2689 = 1. + t2662;
  t2700 = Sin(var1[21]);
  t2847 = t2307*t2437;
  t2861 = -1.*t2364*t2546;
  t2867 = t2847 + t2861;
  t2591 = t2364*t2437;
  t2620 = t2307*t2546;
  t2626 = t2591 + t2620;
  t2192 = -0.049*t2186;
  t2207 = -0.21*t2195;
  t2215 = t2192 + t2207;
  t2252 = -0.21*t2186;
  t2256 = 0.049*t2195;
  t2264 = t2252 + t2256;
  t2447 = 0.01841*t2324;
  t2452 = -0.70544*t2364;
  t2512 = t2447 + t2452;
  t2330 = -0.70544*t2324;
  t2374 = -0.01841*t2364;
  t2378 = t2330 + t2374;
  t3047 = t2174*t2164;
  t3076 = t2143*t2195;
  t3078 = t3047 + t3076;
  t2695 = -0.02159*t2689;
  t2769 = -1.11344*t2700;
  t2780 = t2695 + t2769;
  t2889 = -1.11344*t2689;
  t2916 = 0.02159*t2700;
  t2925 = t2889 + t2916;
  t3115 = t2307*t3078;
  t3124 = t2364*t2546;
  t3126 = t3115 + t3124;
  t3132 = -1.*t2364*t3078;
  t3133 = t3132 + t2620;
  t2151 = 0.049*t2143;
  t2165 = -0.09*t2164;
  t2227 = t2143*t2215;
  t2280 = -1.*t2164*t2264;
  t2442 = t2378*t2437;
  t2551 = t2512*t2546;
  t2803 = t2626*t2780;
  t2927 = t2867*t2925;
  t2933 = t2632*t2867;
  t2939 = -1.*t2626*t2700;
  t2973 = t2933 + t2939;
  t2975 = -1.11344*t2973;
  t2987 = t2632*t2626;
  t2989 = t2867*t2700;
  t2992 = t2987 + t2989;
  t2994 = -0.02159*t2992;
  t3011 = t2151 + t2165 + t2227 + t2280 + t2442 + t2551 + t2803 + t2927 + t2975 + t2994;
  t3021 = 0.09*t2143;
  t3022 = 0.049*t2164;
  t3032 = t2164*t2215;
  t3035 = t2143*t2264;
  t3080 = t2512*t3078;
  t3111 = t2378*t2546;
  t3127 = t3126*t2780;
  t3143 = t3133*t2925;
  t3145 = t2632*t3126;
  t3157 = t3133*t2700;
  t3176 = t3145 + t3157;
  t3185 = -0.02159*t3176;
  t3196 = t2632*t3133;
  t3200 = -1.*t3126*t2700;
  t3204 = t3196 + t3200;
  t3211 = -1.11344*t3204;
  t3261 = t3021 + t3022 + t3032 + t3035 + t3080 + t3111 + t3127 + t3143 + t3185 + t3211;
  t3484 = -1.*t2143*t2174;
  t3490 = t2164*t2195;
  t3558 = t3484 + t3490;
  t3606 = t2364*t3558;
  t3634 = t2847 + t3606;
  t3676 = -1.*t2364*t2437;
  t3679 = t2307*t3558;
  t3688 = t3676 + t3679;
  t3861 = -0.049*t2143;
  t3871 = 0.09*t2164;
  t3883 = -1.*t2143*t2215;
  t3896 = t2164*t2264;
  t3936 = -1.*t2378*t2437;
  t3972 = -1.*t2512*t2546;
  t3981 = -1.*t2626*t2780;
  t3993 = -1.*t2867*t2925;
  t4017 = 1.11344*t2973;
  t4029 = 0.02159*t2992;
  t4033 = t3861 + t3871 + t3883 + t3896 + t3936 + t3972 + t3981 + t3993 + t4017 + t4029;
  t3356 = -0.09*t2143;
  t3370 = -0.049*t2164;
  t3460 = -1.*t2164*t2215;
  t3475 = -1.*t2143*t2264;
  t4061 = -1.*t2512*t3078;
  t4083 = -1.*t2378*t2546;
  t4091 = -1.*t3126*t2780;
  t4112 = -1.*t3133*t2925;
  t4113 = 0.02159*t3176;
  t4115 = 1.11344*t3204;
  t4141 = t3356 + t3370 + t3460 + t3475 + t4061 + t4083 + t4091 + t4112 + t4113 + t4115;
  t3716 = t2632*t3634;
  t3729 = t3688*t2700;
  t3730 = t3716 + t3729;
  t3751 = t2632*t3688;
  t3752 = -1.*t3634*t2700;
  t3756 = t3751 + t3752;
  t4045 = Power(t4033,2);
  t4155 = Power(t4141,2);
  t4156 = t4045 + t4155;
  t4178 = 1/t4156;
  t3020 = Power(t3011,2);
  t3283 = Power(t3261,2);
  t3312 = 0.00002025 + t3020 + t3283;
  t3315 = 1/Sqrt(t3312);
  t4567 = t2364*t3078;
  t4577 = t2591 + t4567;
  t4603 = t2847 + t3115;
  t4337 = 0.049*t2174;
  t4373 = t4337 + t2207;
  t4386 = -0.21*t2174;
  t4395 = -0.049*t2195;
  t4404 = t4386 + t4395;
  t3478 = t2512*t2437;
  t4518 = 0.01841*t2307;
  t4526 = 0.70544*t2364;
  t4552 = t4518 + t4526;
  t4438 = 0.70544*t2307;
  t4469 = t4438 + t2374;
  t3600 = t2378*t3558;
  t4880 = t3124 + t3606;
  t4907 = t2620 + t3679;
  t4626 = t2632*t4577;
  t4691 = t4603*t2700;
  t4693 = t4626 + t4691;
  t4705 = t2632*t4603;
  t4706 = -1.*t4577*t2700;
  t4731 = t4705 + t4706;
  t4203 = -1.*t2512*t2437;
  t4214 = -1.*t2378*t3558;
  t4926 = t2632*t4880;
  t4929 = t4907*t2700;
  t4932 = t4926 + t4929;
  t4939 = t2632*t4907;
  t4966 = -1.*t4880*t2700;
  t4990 = t4939 + t4966;
  t5391 = 0.02159*t2632;
  t5399 = t5391 + t2769;
  t5413 = -1.11344*t2632;
  t5414 = -0.02159*t2700;
  t5415 = t5413 + t5414;
  t5456 = -1.*t2632*t3126;
  t5468 = -1.*t3133*t2700;
  t5474 = t5456 + t5468;
  t5426 = -1.*t2632*t2626;
  t5428 = -1.*t2867*t2700;
  t5433 = t5426 + t5428;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=1.;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=1.;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
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
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=1.;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0.5*t708*(2.*t525*t691 + 2.*t525*(-0.049*t154 - 1.*t142*t154 - 0.09*t5 - 1.*t193*t5 + t785 + t816 + t400*t833 + t346*t844 - 0.02159*(t315*t833 + t301*t844) - 1.11344*(t301*t833 - 1.*t315*t844)));
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0.5*t708*(2.*(t1082*t154 + t272 + t1211*t291 + t292 - 0.02159*(t1273*t301 + t1218*t315) - 1.11344*(t1218*t301 - 1.*t1273*t315) + t1273*t346 + t1218*t400 + t1055*t5 + t1118*t583)*t691 + 2.*t525*(-1.*t1055*t154 + t1211*t270 + t1118*t291 - 0.02159*(t1491*t301 + t1466*t315) - 1.11344*(t1466*t301 - 1.*t1491*t315) + t1491*t346 + t1466*t400 + t1082*t5 + t785 + t816));
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
  p_output1[120]=0.5*(2.*(t1769*t370 + t1805*t407 - 1.11344*(-1.*t301*t370 - 1.*t315*t407) - 0.02159*t475)*t525 + 2.*(t1805*t623 + t1769*t651 - 1.11344*(-1.*t315*t623 - 1.*t301*t651) - 0.02159*t688)*t691)*t708;
  p_output1[121]=0;
  p_output1[122]=0;
  p_output1[123]=0;
  p_output1[124]=0;
  p_output1[125]=0;
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
  p_output1[132]=1.;
  p_output1[133]=0;
  p_output1[134]=0;
  p_output1[135]=0;
  p_output1[136]=0;
  p_output1[137]=0;
  p_output1[138]=0;
  p_output1[139]=0;
  p_output1[140]=0;
  p_output1[141]=0;
  p_output1[142]=1.;
  p_output1[143]=0;
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=0;
  p_output1[148]=0.5*t3315*(2.*t3011*t3261 + 2.*t3011*(t3356 + t3370 + t3460 + t3475 + t3478 + t3600 + t2780*t3634 + t2925*t3688 - 0.02159*t3730 - 1.11344*t3756));
  p_output1[149]=t3011*t4033*t4178 + t4141*t4178*(t3021 + t3022 + t3032 + t3035 - 1.*t2780*t3634 - 1.*t2925*t3688 + 0.02159*t3730 + 1.11344*t3756 + t4203 + t4214);
  p_output1[150]=0;
  p_output1[151]=0;
  p_output1[152]=0;
  p_output1[153]=0;
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=0;
  p_output1[157]=0.5*t3315*(2.*t3261*(t2442 + t2551 + t2143*t4373 + t2164*t4404 + t3078*t4469 + t2546*t4552 + t2780*t4577 + t2925*t4603 - 0.02159*t4693 - 1.11344*t4731) + 2.*t3011*(t3478 + t3600 - 1.*t2164*t4373 + t2143*t4404 + t2546*t4469 + t2437*t4552 + t2780*t4880 + t2925*t4907 - 0.02159*t4932 - 1.11344*t4990));
  p_output1[158]=t3011*t4178*(t3936 + t3972 - 1.*t2143*t4373 - 1.*t2164*t4404 - 1.*t3078*t4469 - 1.*t2546*t4552 - 1.*t2780*t4577 - 1.*t2925*t4603 + 0.02159*t4693 + 1.11344*t4731) + t4141*t4178*(t4203 + t4214 + t2164*t4373 - 1.*t2143*t4404 - 1.*t2546*t4469 - 1.*t2437*t4552 - 1.*t2780*t4880 - 1.*t2925*t4907 + 0.02159*t4932 + 1.11344*t4990);
  p_output1[159]=0;
  p_output1[160]=0;
  p_output1[161]=0;
  p_output1[162]=0;
  p_output1[163]=0;
  p_output1[164]=0;
  p_output1[165]=0;
  p_output1[166]=0;
  p_output1[167]=0;
  p_output1[168]=0;
  p_output1[169]=0;
  p_output1[170]=0;
  p_output1[171]=0;
  p_output1[172]=0;
  p_output1[173]=0;
  p_output1[174]=0;
  p_output1[175]=0;
  p_output1[176]=0;
  p_output1[177]=0;
  p_output1[178]=0;
  p_output1[179]=0;
  p_output1[180]=0;
  p_output1[181]=0;
  p_output1[182]=0;
  p_output1[183]=0;
  p_output1[184]=0;
  p_output1[185]=0;
  p_output1[186]=0;
  p_output1[187]=0;
  p_output1[188]=0;
  p_output1[189]=0;
  p_output1[190]=0;
  p_output1[191]=0;
  p_output1[192]=0;
  p_output1[193]=0.5*t3315*(2.*t3011*(-0.02159*t2973 + t2867*t5399 + t2626*t5415 - 1.11344*t5433) + 2.*t3261*(-0.02159*t3204 + t3133*t5399 + t3126*t5415 - 1.11344*t5474));
  p_output1[194]=t4141*t4178*(0.02159*t2973 - 1.*t2867*t5399 - 1.*t2626*t5415 + 1.11344*t5433) + t3011*t4178*(0.02159*t3204 - 1.*t3133*t5399 - 1.*t3126*t5415 + 1.11344*t5474);
  p_output1[195]=0;
  p_output1[196]=0;
  p_output1[197]=-1.;
  p_output1[198]=0;
  p_output1[199]=0;
  p_output1[200]=0;
  p_output1[201]=0;
  p_output1[202]=0;
  p_output1[203]=0;
  p_output1[204]=0;
  p_output1[205]=0;
  p_output1[206]=0;
  p_output1[207]=0;
  p_output1[208]=0;
  p_output1[209]=0;
  p_output1[210]=0;
  p_output1[211]=0;
  p_output1[212]=0;
  p_output1[213]=0;
  p_output1[214]=0;
  p_output1[215]=0;
  p_output1[216]=0;
  p_output1[217]=0;
  p_output1[218]=0;
  p_output1[219]=0;
  p_output1[220]=0;
  p_output1[221]=0;
  p_output1[222]=0;
  p_output1[223]=0;
  p_output1[224]=0;
  p_output1[225]=0;
  p_output1[226]=0;
  p_output1[227]=0;
  p_output1[228]=0;
  p_output1[229]=0;
  p_output1[230]=0;
  p_output1[231]=0;
  p_output1[232]=0;
  p_output1[233]=0;
  p_output1[234]=0;
  p_output1[235]=0;
  p_output1[236]=0;
  p_output1[237]=0;
  p_output1[238]=0;
  p_output1[239]=0;
  p_output1[240]=0;
  p_output1[241]=0;
  p_output1[242]=0;
  p_output1[243]=0;
  p_output1[244]=0;
  p_output1[245]=0;
  p_output1[246]=0;
  p_output1[247]=0;
  p_output1[248]=0;
  p_output1[249]=0;
  p_output1[250]=0;
  p_output1[251]=0;
  p_output1[252]=0;
  p_output1[253]=0;
  p_output1[254]=0;
  p_output1[255]=0;
  p_output1[256]=0;
  p_output1[257]=0;
  p_output1[258]=0;
  p_output1[259]=0;
  p_output1[260]=0;
  p_output1[261]=0;
  p_output1[262]=0;
  p_output1[263]=0;
  p_output1[264]=0;
  p_output1[265]=0;
  p_output1[266]=0;
  p_output1[267]=0;
  p_output1[268]=0;
  p_output1[269]=0;
  p_output1[270]=0;
  p_output1[271]=0;
  p_output1[272]=0;
  p_output1[273]=0;
  p_output1[274]=0;
  p_output1[275]=0;
  p_output1[276]=0;
  p_output1[277]=0;
  p_output1[278]=0;
  p_output1[279]=0;
  p_output1[280]=0;
  p_output1[281]=0;
  p_output1[282]=0;
  p_output1[283]=0;
  p_output1[284]=0;
  p_output1[285]=0;
  p_output1[286]=0;
  p_output1[287]=0;
  p_output1[288]=0;
  p_output1[289]=0;
  p_output1[290]=0;
  p_output1[291]=0;
  p_output1[292]=0;
  p_output1[293]=0;
  p_output1[294]=0;
  p_output1[295]=0;
  p_output1[296]=0;
  p_output1[297]=0;
  p_output1[298]=0;
  p_output1[299]=0;
  p_output1[300]=0;
  p_output1[301]=0;
  p_output1[302]=0;
  p_output1[303]=0;
  p_output1[304]=0;
  p_output1[305]=0;
  p_output1[306]=0;
  p_output1[307]=0;
  p_output1[308]=0;
  p_output1[309]=0;
  p_output1[310]=0;
  p_output1[311]=0;
  p_output1[312]=0;
  p_output1[313]=0;
  p_output1[314]=0;
  p_output1[315]=0;
  p_output1[316]=0;
  p_output1[317]=0;
  p_output1[318]=0;
  p_output1[319]=0;
  p_output1[320]=0;
  p_output1[321]=0;
  p_output1[322]=0;
  p_output1[323]=0;
  p_output1[324]=0;
  p_output1[325]=0;
  p_output1[326]=0;
  p_output1[327]=0;
  p_output1[328]=0;
  p_output1[329]=0;
  p_output1[330]=0;
  p_output1[331]=0;
  p_output1[332]=0;
  p_output1[333]=0;
  p_output1[334]=0;
  p_output1[335]=0;
  p_output1[336]=0;
  p_output1[337]=0;
  p_output1[338]=0;
  p_output1[339]=0;
  p_output1[340]=0;
  p_output1[341]=0;
  p_output1[342]=0;
  p_output1[343]=0;
  p_output1[344]=0;
  p_output1[345]=0;
  p_output1[346]=0;
  p_output1[347]=0;
  p_output1[348]=0;
  p_output1[349]=0;
  p_output1[350]=0;
  p_output1[351]=0;
  p_output1[352]=0;
  p_output1[353]=0;
  p_output1[354]=0;
  p_output1[355]=0;
  p_output1[356]=0;
  p_output1[357]=0;
  p_output1[358]=0;
  p_output1[359]=0;
  p_output1[360]=0;
  p_output1[361]=0;
  p_output1[362]=0;
  p_output1[363]=0;
  p_output1[364]=0;
  p_output1[365]=0;
  p_output1[366]=0;
  p_output1[367]=0;
  p_output1[368]=0;
  p_output1[369]=0;
  p_output1[370]=0;
  p_output1[371]=0;
  p_output1[372]=0;
  p_output1[373]=0;
  p_output1[374]=0;
  p_output1[375]=0;
  p_output1[376]=0;
  p_output1[377]=0;
  p_output1[378]=0;
  p_output1[379]=0;
  p_output1[380]=0;
  p_output1[381]=0;
  p_output1[382]=0;
  p_output1[383]=0;
  p_output1[384]=0;
  p_output1[385]=0;
  p_output1[386]=0;
  p_output1[387]=0;
  p_output1[388]=0;
  p_output1[389]=0;
  p_output1[390]=0;
  p_output1[391]=0;
  p_output1[392]=0;
  p_output1[393]=0;
  p_output1[394]=0;
  p_output1[395]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 44, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void Dya_LeftStanceActual_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




