/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:53 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "J_yaLeftStance.hh"
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
  double t52;
  double t95;
  double t97;
  double t161;
  double t236;
  double t322;
  double t589;
  double t670;
  double t686;
  double t692;
  double t735;
  double t756;
  double t800;
  double t808;
  double t827;
  double t968;
  double t998;
  double t999;
  double t1021;
  double t1041;
  double t1051;
  double t1107;
  double t1147;
  double t1168;
  double t1200;
  double t1288;
  double t1299;
  double t1308;
  double t367;
  double t414;
  double t478;
  double t168;
  double t279;
  double t300;
  double t936;
  double t961;
  double t964;
  double t753;
  double t762;
  double t797;
  double t1258;
  double t1259;
  double t1281;
  double t1518;
  double t1554;
  double t1613;
  double t1081;
  double t1110;
  double t1135;
  double t1680;
  double t1681;
  double t1701;
  double t1709;
  double t1728;
  double t89;
  double t313;
  double t363;
  double t529;
  double t904;
  double t1014;
  double t1201;
  double t1318;
  double t1422;
  double t1425;
  double t1428;
  double t1435;
  double t1439;
  double t1452;
  double t1453;
  double t1458;
  double t1468;
  double t1481;
  double t1488;
  double t1496;
  double t1499;
  double t1618;
  double t1671;
  double t1697;
  double t1745;
  double t1751;
  double t1759;
  double t1812;
  double t1816;
  double t1818;
  double t1819;
  double t1821;
  double t1822;
  double t1824;
  double t1904;
  double t1942;
  double t1945;
  double t1952;
  double t1964;
  double t1966;
  double t1970;
  double t1971;
  double t1480;
  double t1826;
  double t1827;
  double t1833;
  double t2123;
  double t2128;
  double t2132;
  double t2055;
  double t2058;
  double t2063;
  double t2050;
  double t2053;
  double t1851;
  double t2095;
  double t2096;
  double t2109;
  double t2071;
  double t2074;
  double t1949;
  double t2308;
  double t2312;
  double t2440;
  double t2441;
  double t2412;
  double t2416;
  double t2432;
  double t2604;
  double t2646;
  double t2648;
  double t2656;
  double t2673;
  double t2729;
  double t2779;
  double t2782;
  double t2786;
  double t2789;
  double t2790;
  double t2802;
  double t2832;
  double t2856;
  double t2863;
  double t2894;
  double t2909;
  double t2913;
  double t2947;
  double t2950;
  double t2952;
  double t2961;
  double t3040;
  double t3043;
  double t3045;
  double t2923;
  double t2939;
  double t2941;
  double t2717;
  double t2731;
  double t2734;
  double t2739;
  double t2773;
  double t2774;
  double t2870;
  double t2881;
  double t2893;
  double t2798;
  double t2804;
  double t2809;
  double t3181;
  double t3183;
  double t3186;
  double t2953;
  double t2998;
  double t3018;
  double t3048;
  double t3050;
  double t3057;
  double t3202;
  double t3233;
  double t3244;
  double t3247;
  double t3250;
  double t2613;
  double t2647;
  double t2737;
  double t2777;
  double t2865;
  double t2914;
  double t3029;
  double t3058;
  double t3071;
  double t3077;
  double t3081;
  double t3083;
  double t3086;
  double t3088;
  double t3095;
  double t3098;
  double t3108;
  double t3129;
  double t3141;
  double t3148;
  double t3155;
  double t3196;
  double t3197;
  double t3245;
  double t3251;
  double t3257;
  double t3265;
  double t3278;
  double t3280;
  double t3284;
  double t3294;
  double t3305;
  double t3319;
  double t3322;
  double t3363;
  double t3368;
  double t3371;
  double t3375;
  double t3376;
  double t3446;
  double t3447;
  double t3470;
  double t3545;
  double t3555;
  double t3556;
  double t3559;
  double t3560;
  double t3563;
  double t3564;
  double t3565;
  double t3566;
  double t3568;
  double t3575;
  double t3345;
  double t3347;
  double t3350;
  double t3354;
  double t3577;
  double t3586;
  double t3595;
  double t3597;
  double t3606;
  double t3607;
  double t3609;
  double t3483;
  double t3491;
  double t3501;
  double t3510;
  double t3512;
  double t3523;
  double t3576;
  double t3610;
  double t3612;
  double t3616;
  double t3114;
  double t3325;
  double t3326;
  double t3332;
  double t3746;
  double t3767;
  double t3785;
  double t3652;
  double t3653;
  double t3678;
  double t3680;
  double t3685;
  double t3360;
  double t3726;
  double t3732;
  double t3734;
  double t3703;
  double t3714;
  double t3373;
  double t3887;
  double t3902;
  double t3825;
  double t3827;
  double t3829;
  double t3845;
  double t3847;
  double t3850;
  double t3621;
  double t3632;
  double t3912;
  double t3913;
  double t3916;
  double t3918;
  double t3925;
  double t3938;
  double t4122;
  double t4123;
  double t4131;
  double t4132;
  double t4133;
  double t4181;
  double t4186;
  double t4187;
  double t4148;
  double t4159;
  double t4162;
  t52 = Cos(var1[8]);
  t95 = Cos(var1[9]);
  t97 = -1.*t95;
  t161 = 1. + t97;
  t236 = Sin(var1[9]);
  t322 = Sin(var1[8]);
  t589 = -1.*var1[9];
  t670 = 0.226893 + t589;
  t686 = Cos(t670);
  t692 = -1.*t686;
  t735 = 1. + t692;
  t756 = Sin(t670);
  t800 = -1.*t52*t236;
  t808 = -1.*t95*t322;
  t827 = t800 + t808;
  t968 = t95*t52;
  t998 = -1.*t236*t322;
  t999 = t968 + t998;
  t1021 = Cos(var1[13]);
  t1041 = -1.*t1021;
  t1051 = 1. + t1041;
  t1107 = Sin(var1[13]);
  t1147 = t756*t827;
  t1168 = t686*t999;
  t1200 = t1147 + t1168;
  t1288 = t686*t827;
  t1299 = -1.*t756*t999;
  t1308 = t1288 + t1299;
  t367 = -0.21*t161;
  t414 = 0.049*t236;
  t478 = t367 + t414;
  t168 = -0.049*t161;
  t279 = -0.21*t236;
  t300 = t168 + t279;
  t936 = 0.01841*t735;
  t961 = -0.70544*t756;
  t964 = t936 + t961;
  t753 = -0.70544*t735;
  t762 = -0.01841*t756;
  t797 = t753 + t762;
  t1258 = -1.11344*t1051;
  t1259 = 0.02159*t1107;
  t1281 = t1258 + t1259;
  t1518 = t52*t236;
  t1554 = t95*t322;
  t1613 = t1518 + t1554;
  t1081 = -0.02159*t1051;
  t1110 = -1.11344*t1107;
  t1135 = t1081 + t1110;
  t1680 = -1.*t756*t1613;
  t1681 = t1680 + t1168;
  t1701 = t686*t1613;
  t1709 = t756*t999;
  t1728 = t1701 + t1709;
  t89 = 0.049*t52;
  t313 = t52*t300;
  t363 = -0.09*t322;
  t529 = -1.*t478*t322;
  t904 = t797*t827;
  t1014 = t964*t999;
  t1201 = t1135*t1200;
  t1318 = t1281*t1308;
  t1422 = -1.*t1107*t1200;
  t1425 = t1021*t1308;
  t1428 = t1422 + t1425;
  t1435 = -1.11344*t1428;
  t1439 = t1021*t1200;
  t1452 = t1107*t1308;
  t1453 = t1439 + t1452;
  t1458 = -0.02159*t1453;
  t1468 = t89 + t313 + t363 + t529 + t904 + t1014 + t1201 + t1318 + t1435 + t1458;
  t1481 = 0.09*t52;
  t1488 = t52*t478;
  t1496 = 0.049*t322;
  t1499 = t300*t322;
  t1618 = t964*t1613;
  t1671 = t797*t999;
  t1697 = t1281*t1681;
  t1745 = t1135*t1728;
  t1751 = t1107*t1681;
  t1759 = t1021*t1728;
  t1812 = t1751 + t1759;
  t1816 = -0.02159*t1812;
  t1818 = t1021*t1681;
  t1819 = -1.*t1107*t1728;
  t1821 = t1818 + t1819;
  t1822 = -1.11344*t1821;
  t1824 = t1481 + t1488 + t1496 + t1499 + t1618 + t1671 + t1697 + t1745 + t1816 + t1822;
  t1904 = -1.*t95*t52;
  t1942 = t236*t322;
  t1945 = t1904 + t1942;
  t1952 = -1.*t756*t827;
  t1964 = t686*t1945;
  t1966 = t1952 + t1964;
  t1970 = t756*t1945;
  t1971 = t1288 + t1970;
  t1480 = Power(t1468,2);
  t1826 = Power(t1824,2);
  t1827 = 0.00002025 + t1480 + t1826;
  t1833 = 1/Sqrt(t1827);
  t2123 = t1288 + t1701;
  t2128 = t756*t1613;
  t2132 = t1147 + t2128;
  t2055 = -0.21*t95;
  t2058 = -0.049*t236;
  t2063 = t2055 + t2058;
  t2050 = 0.049*t95;
  t2053 = t2050 + t279;
  t1851 = t964*t827;
  t2095 = 0.01841*t686;
  t2096 = 0.70544*t756;
  t2109 = t2095 + t2096;
  t2071 = 0.70544*t686;
  t2074 = t2071 + t762;
  t1949 = t797*t1945;
  t2308 = t1168 + t1964;
  t2312 = t1709 + t1970;
  t2440 = 0.02159*t1021;
  t2441 = t2440 + t1110;
  t2412 = -1.11344*t1021;
  t2416 = -0.02159*t1107;
  t2432 = t2412 + t2416;
  t2604 = Cos(var1[16]);
  t2646 = Sin(var1[16]);
  t2648 = Cos(var1[17]);
  t2656 = -1.*t2648;
  t2673 = 1. + t2656;
  t2729 = Sin(var1[17]);
  t2779 = -1.*var1[17];
  t2782 = 0.226893 + t2779;
  t2786 = Cos(t2782);
  t2789 = -1.*t2786;
  t2790 = 1. + t2789;
  t2802 = Sin(t2782);
  t2832 = -1.*t2648*t2646;
  t2856 = -1.*t2604*t2729;
  t2863 = t2832 + t2856;
  t2894 = t2604*t2648;
  t2909 = -1.*t2646*t2729;
  t2913 = t2894 + t2909;
  t2947 = Cos(var1[21]);
  t2950 = -1.*t2947;
  t2952 = 1. + t2950;
  t2961 = Sin(var1[21]);
  t3040 = t2786*t2863;
  t3043 = -1.*t2802*t2913;
  t3045 = t3040 + t3043;
  t2923 = t2802*t2863;
  t2939 = t2786*t2913;
  t2941 = t2923 + t2939;
  t2717 = -0.049*t2673;
  t2731 = -0.21*t2729;
  t2734 = t2717 + t2731;
  t2739 = -0.21*t2673;
  t2773 = 0.049*t2729;
  t2774 = t2739 + t2773;
  t2870 = 0.01841*t2790;
  t2881 = -0.70544*t2802;
  t2893 = t2870 + t2881;
  t2798 = -0.70544*t2790;
  t2804 = -0.01841*t2802;
  t2809 = t2798 + t2804;
  t3181 = t2648*t2646;
  t3183 = t2604*t2729;
  t3186 = t3181 + t3183;
  t2953 = -0.02159*t2952;
  t2998 = -1.11344*t2961;
  t3018 = t2953 + t2998;
  t3048 = -1.11344*t2952;
  t3050 = 0.02159*t2961;
  t3057 = t3048 + t3050;
  t3202 = t2786*t3186;
  t3233 = t2802*t2913;
  t3244 = t3202 + t3233;
  t3247 = -1.*t2802*t3186;
  t3250 = t3247 + t2939;
  t2613 = 0.049*t2604;
  t2647 = -0.09*t2646;
  t2737 = t2604*t2734;
  t2777 = -1.*t2646*t2774;
  t2865 = t2809*t2863;
  t2914 = t2893*t2913;
  t3029 = t2941*t3018;
  t3058 = t3045*t3057;
  t3071 = t2947*t3045;
  t3077 = -1.*t2941*t2961;
  t3081 = t3071 + t3077;
  t3083 = -1.11344*t3081;
  t3086 = t2947*t2941;
  t3088 = t3045*t2961;
  t3095 = t3086 + t3088;
  t3098 = -0.02159*t3095;
  t3108 = t2613 + t2647 + t2737 + t2777 + t2865 + t2914 + t3029 + t3058 + t3083 + t3098;
  t3129 = 0.09*t2604;
  t3141 = 0.049*t2646;
  t3148 = t2646*t2734;
  t3155 = t2604*t2774;
  t3196 = t2893*t3186;
  t3197 = t2809*t2913;
  t3245 = t3244*t3018;
  t3251 = t3250*t3057;
  t3257 = t2947*t3244;
  t3265 = t3250*t2961;
  t3278 = t3257 + t3265;
  t3280 = -0.02159*t3278;
  t3284 = t2947*t3250;
  t3294 = -1.*t3244*t2961;
  t3305 = t3284 + t3294;
  t3319 = -1.11344*t3305;
  t3322 = t3129 + t3141 + t3148 + t3155 + t3196 + t3197 + t3245 + t3251 + t3280 + t3319;
  t3363 = -1.*t2604*t2648;
  t3368 = t2646*t2729;
  t3371 = t3363 + t3368;
  t3375 = t2802*t3371;
  t3376 = t3040 + t3375;
  t3446 = -1.*t2802*t2863;
  t3447 = t2786*t3371;
  t3470 = t3446 + t3447;
  t3545 = -0.049*t2604;
  t3555 = 0.09*t2646;
  t3556 = -1.*t2604*t2734;
  t3559 = t2646*t2774;
  t3560 = -1.*t2809*t2863;
  t3563 = -1.*t2893*t2913;
  t3564 = -1.*t2941*t3018;
  t3565 = -1.*t3045*t3057;
  t3566 = 1.11344*t3081;
  t3568 = 0.02159*t3095;
  t3575 = t3545 + t3555 + t3556 + t3559 + t3560 + t3563 + t3564 + t3565 + t3566 + t3568;
  t3345 = -0.09*t2604;
  t3347 = -0.049*t2646;
  t3350 = -1.*t2646*t2734;
  t3354 = -1.*t2604*t2774;
  t3577 = -1.*t2893*t3186;
  t3586 = -1.*t2809*t2913;
  t3595 = -1.*t3244*t3018;
  t3597 = -1.*t3250*t3057;
  t3606 = 0.02159*t3278;
  t3607 = 1.11344*t3305;
  t3609 = t3345 + t3347 + t3350 + t3354 + t3577 + t3586 + t3595 + t3597 + t3606 + t3607;
  t3483 = t2947*t3376;
  t3491 = t3470*t2961;
  t3501 = t3483 + t3491;
  t3510 = t2947*t3470;
  t3512 = -1.*t3376*t2961;
  t3523 = t3510 + t3512;
  t3576 = Power(t3575,2);
  t3610 = Power(t3609,2);
  t3612 = t3576 + t3610;
  t3616 = 1/t3612;
  t3114 = Power(t3108,2);
  t3325 = Power(t3322,2);
  t3326 = 0.00002025 + t3114 + t3325;
  t3332 = 1/Sqrt(t3326);
  t3746 = t2802*t3186;
  t3767 = t2923 + t3746;
  t3785 = t3040 + t3202;
  t3652 = 0.049*t2648;
  t3653 = t3652 + t2731;
  t3678 = -0.21*t2648;
  t3680 = -0.049*t2729;
  t3685 = t3678 + t3680;
  t3360 = t2893*t2863;
  t3726 = 0.01841*t2786;
  t3732 = 0.70544*t2802;
  t3734 = t3726 + t3732;
  t3703 = 0.70544*t2786;
  t3714 = t3703 + t2804;
  t3373 = t2809*t3371;
  t3887 = t3233 + t3375;
  t3902 = t2939 + t3447;
  t3825 = t2947*t3767;
  t3827 = t3785*t2961;
  t3829 = t3825 + t3827;
  t3845 = t2947*t3785;
  t3847 = -1.*t3767*t2961;
  t3850 = t3845 + t3847;
  t3621 = -1.*t2893*t2863;
  t3632 = -1.*t2809*t3371;
  t3912 = t2947*t3887;
  t3913 = t3902*t2961;
  t3916 = t3912 + t3913;
  t3918 = t2947*t3902;
  t3925 = -1.*t3887*t2961;
  t3938 = t3918 + t3925;
  t4122 = 0.02159*t2947;
  t4123 = t4122 + t2998;
  t4131 = -1.11344*t2947;
  t4132 = -0.02159*t2961;
  t4133 = t4131 + t4132;
  t4181 = -1.*t2947*t3244;
  t4186 = -1.*t3250*t2961;
  t4187 = t4181 + t4186;
  t4148 = -1.*t2947*t2941;
  t4159 = -1.*t3045*t2961;
  t4162 = t4148 + t4159;
  p_output1[0]=-1.;
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
  p_output1[11]=1.;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=1.;
  p_output1[20]=0;
  p_output1[21]=0.5*t1833*(2.*t1468*t1824 + 2.*t1468*(t1851 + t1949 + t1281*t1966 + t1135*t1971 - 0.02159*(t1107*t1966 + t1021*t1971) - 1.11344*(t1021*t1966 - 1.*t1107*t1971) - 0.049*t322 - 1.*t300*t322 - 0.09*t52 - 1.*t478*t52));
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0.5*t1833*(2.*t1468*(t1851 + t1949 + t1281*t2308 + t1135*t2312 - 0.02159*(t1107*t2308 + t1021*t2312) - 1.11344*(t1021*t2308 - 1.*t1107*t2312) - 1.*t2053*t322 + t2063*t52 + t2109*t827 + t2074*t999) + 2.*t1824*(t1014 + t1613*t2074 + t1281*t2123 + t1135*t2132 - 0.02159*(t1107*t2123 + t1021*t2132) - 1.11344*(t1021*t2123 - 1.*t1107*t2132) + t2063*t322 + t2053*t52 + t904 + t2109*t999));
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0.5*t1833*(2.*t1468*(-1.11344*(-1.*t1021*t1200 - 1.*t1107*t1308) - 0.02159*t1428 + t1200*t2432 + t1308*t2441) + 2.*t1824*(-1.11344*(-1.*t1107*t1681 - 1.*t1021*t1728) - 0.02159*t1821 + t1728*t2432 + t1681*t2441));
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
  p_output1[51]=1.;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=1.;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0.5*t3332*(2.*t3108*t3322 + 2.*t3108*(t3345 + t3347 + t3350 + t3354 + t3360 + t3373 + t3018*t3376 + t3057*t3470 - 0.02159*t3501 - 1.11344*t3523));
  p_output1[68]=t3108*t3575*t3616 + t3609*t3616*(t3129 + t3141 + t3148 + t3155 - 1.*t3018*t3376 - 1.*t3057*t3470 + 0.02159*t3501 + 1.11344*t3523 + t3621 + t3632);
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0.5*t3332*(2.*t3322*(t2865 + t2914 + t2604*t3653 + t2646*t3685 + t3186*t3714 + t2913*t3734 + t3018*t3767 + t3057*t3785 - 0.02159*t3829 - 1.11344*t3850) + 2.*t3108*(t3360 + t3373 - 1.*t2646*t3653 + t2604*t3685 + t2913*t3714 + t2863*t3734 + t3018*t3887 + t3057*t3902 - 0.02159*t3916 - 1.11344*t3938));
  p_output1[77]=t3108*t3616*(t3560 + t3563 - 1.*t2604*t3653 - 1.*t2646*t3685 - 1.*t3186*t3714 - 1.*t2913*t3734 - 1.*t3018*t3767 - 1.*t3057*t3785 + 0.02159*t3829 + 1.11344*t3850) + t3609*t3616*(t3621 + t3632 + t2646*t3653 - 1.*t2604*t3685 - 1.*t2913*t3714 - 1.*t2863*t3734 - 1.*t3018*t3887 - 1.*t3057*t3902 + 0.02159*t3916 + 1.11344*t3938);
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0;
  p_output1[85]=0.5*t3332*(2.*t3108*(-0.02159*t3081 + t3045*t4123 + t2941*t4133 - 1.11344*t4162) + 2.*t3322*(-0.02159*t3305 + t3250*t4123 + t3244*t4133 - 1.11344*t4187));
  p_output1[86]=t3609*t3616*(0.02159*t3081 - 1.*t3045*t4123 - 1.*t2941*t4133 + 1.11344*t4162) + t3108*t3616*(0.02159*t3305 - 1.*t3250*t4123 - 1.*t3244*t4133 + 1.11344*t4187);
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=-1.;
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

void J_yaLeftStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




