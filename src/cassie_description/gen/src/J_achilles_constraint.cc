/*
 * Automatically Generated from Mathematica.
 * Thu 26 Aug 2021 14:18:48 GMT-07:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "J_achilles_constraint.hh"
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
  double t643;
  double t518;
  double t741;
  double t742;
  double t790;
  double t848;
  double t1013;
  double t1031;
  double t1037;
  double t1039;
  double t1057;
  double t1062;
  double t1069;
  double t989;
  double t993;
  double t999;
  double t1095;
  double t1099;
  double t1100;
  double t1106;
  double t1109;
  double t1112;
  double t1120;
  double t1116;
  double t1117;
  double t1118;
  double t1123;
  double t1203;
  double t1119;
  double t1249;
  double t793;
  double t905;
  double t909;
  double t934;
  double t938;
  double t943;
  double t1038;
  double t1043;
  double t1052;
  double t1070;
  double t1086;
  double t1091;
  double t1104;
  double t1105;
  double t1589;
  double t1612;
  double t1619;
  double t1126;
  double t1727;
  double t1737;
  double t1143;
  double t1144;
  double t1151;
  double t1801;
  double t1824;
  double t1841;
  double t1170;
  double t1172;
  double t1175;
  double t1182;
  double t1202;
  double t1206;
  double t1207;
  double t1214;
  double t1216;
  double t1218;
  double t1220;
  double t1223;
  double t1228;
  double t1240;
  double t1241;
  double t1242;
  double t1246;
  double t1248;
  double t1251;
  double t1255;
  double t1257;
  double t1260;
  double t1263;
  double t1280;
  double t1351;
  double t1387;
  double t2511;
  double t2514;
  double t2518;
  double t2540;
  double t2549;
  double t2552;
  double t2555;
  double t2579;
  double t1432;
  double t1487;
  double t1578;
  double t1653;
  double t1687;
  double t1767;
  double t1887;
  double t1894;
  double t1933;
  double t2155;
  double t2392;
  double t2409;
  double t2441;
  double t2446;
  double t2449;
  double t2465;
  double t2469;
  double t2475;
  double t2478;
  double t2486;
  double t2487;
  double t2491;
  double t2500;
  double t2528;
  double t2536;
  double t2551;
  double t2580;
  double t2584;
  double t2585;
  double t2588;
  double t2589;
  double t2591;
  double t2592;
  double t2593;
  double t2596;
  double t2598;
  double t2601;
  double t2608;
  double t2609;
  double t2620;
  double t2686;
  double t2687;
  double t2708;
  double t2711;
  double t2715;
  double t1056;
  double t1092;
  double t1115;
  double t1127;
  double t1131;
  double t1134;
  double t1152;
  double t1177;
  double t1179;
  double t1181;
  double t1224;
  double t1259;
  double t1264;
  double t1283;
  double t1318;
  double t1343;
  double t1409;
  double t2482;
  double t2748;
  double t2749;
  double t2738;
  double t2739;
  double t2741;
  double t2743;
  double t2745;
  double t2792;
  double t2793;
  double t2888;
  double t2940;
  double t2877;
  double t2952;
  double t2937;
  double t2909;
  double t2947;
  double t2879;
  double t2974;
  double t3012;
  double t2973;
  double t3026;
  double t2961;
  double t2964;
  double t2969;
  double t2970;
  double t2977;
  double t2978;
  double t2982;
  double t2992;
  double t3003;
  double t3008;
  double t3013;
  double t3016;
  double t3018;
  double t3022;
  double t3047;
  double t3033;
  double t3227;
  double t3188;
  double t3233;
  double t3234;
  double t3235;
  double t3241;
  double t3278;
  double t3282;
  double t3288;
  double t3300;
  double t3313;
  double t3317;
  double t3339;
  double t3270;
  double t3275;
  double t3276;
  double t3355;
  double t3356;
  double t3358;
  double t3373;
  double t3375;
  double t3376;
  double t3386;
  double t3389;
  double t3381;
  double t3382;
  double t3384;
  double t3412;
  double t3385;
  double t3533;
  double t3240;
  double t3244;
  double t3245;
  double t3253;
  double t3261;
  double t3262;
  double t3296;
  double t3301;
  double t3304;
  double t3344;
  double t3350;
  double t3351;
  double t3359;
  double t3371;
  double t3964;
  double t3970;
  double t3973;
  double t3390;
  double t3979;
  double t3980;
  double t3397;
  double t3411;
  double t3414;
  double t3419;
  double t3420;
  double t3426;
  double t3428;
  double t3437;
  double t3438;
  double t3998;
  double t4007;
  double t4010;
  double t3448;
  double t3449;
  double t3460;
  double t3476;
  double t3477;
  double t3494;
  double t3514;
  double t3518;
  double t3521;
  double t3523;
  double t3526;
  double t3527;
  double t3543;
  double t3751;
  double t3756;
  double t3804;
  double t3807;
  double t3851;
  double t3898;
  double t3902;
  double t4124;
  double t4128;
  double t4130;
  double t4135;
  double t4138;
  double t4143;
  double t4144;
  double t4162;
  double t3958;
  double t3960;
  double t3962;
  double t3974;
  double t3976;
  double t3993;
  double t4020;
  double t4023;
  double t4028;
  double t4029;
  double t4035;
  double t4039;
  double t4040;
  double t4043;
  double t4044;
  double t4045;
  double t4048;
  double t4051;
  double t4052;
  double t4114;
  double t4118;
  double t4119;
  double t4123;
  double t4132;
  double t4134;
  double t4139;
  double t4163;
  double t4168;
  double t4169;
  double t4171;
  double t4174;
  double t4176;
  double t4177;
  double t4181;
  double t4182;
  double t4190;
  double t4196;
  double t4197;
  double t4198;
  double t4201;
  double t4215;
  double t4225;
  double t4296;
  double t4297;
  double t4306;
  double t3308;
  double t3354;
  double t3379;
  double t3391;
  double t3394;
  double t3395;
  double t3446;
  double t3464;
  double t3495;
  double t3496;
  double t3502;
  double t3764;
  double t3833;
  double t3852;
  double t3863;
  double t3864;
  double t3949;
  double t4056;
  double t4404;
  double t4484;
  double t4356;
  double t4357;
  double t4379;
  double t4386;
  double t4389;
  double t5201;
  double t5208;
  double t9484;
  double t8874;
  double t9198;
  double t9112;
  double t9092;
  double t9208;
  double t9821;
  double t8778;
  double t9496;
  double t9941;
  double t9762;
  double t10073;
  double t9610;
  double t9634;
  double t9873;
  double t9905;
  double t9906;
  double t9909;
  double t9913;
  double t9918;
  double t9943;
  double t9981;
  double t9983;
  double t9988;
  double t9992;
  double t9993;
  double t10187;
  double t10151;
  t643 = Sin(var1[9]);
  t518 = Cos(var1[9]);
  t741 = Cos(var1[10]);
  t742 = -1.*t741;
  t790 = 1. + t742;
  t848 = Sin(var1[10]);
  t1013 = Cos(var1[11]);
  t1031 = -1.*t1013;
  t1037 = 1. + t1031;
  t1039 = Sin(var1[11]);
  t1057 = -1.*t518*t741;
  t1062 = t643*t848;
  t1069 = t1057 + t1062;
  t989 = -1.*t741*t643;
  t993 = -1.*t518*t848;
  t999 = t989 + t993;
  t1095 = Cos(var1[12]);
  t1099 = -1.*t1095;
  t1100 = 1. + t1099;
  t1106 = t1013*t1069;
  t1109 = -1.*t999*t1039;
  t1112 = t1106 + t1109;
  t1120 = Sin(var1[12]);
  t1116 = t1013*t999;
  t1117 = t1069*t1039;
  t1118 = t1116 + t1117;
  t1123 = -0.996943*t1120;
  t1203 = -0.0004284921280000001*t1100;
  t1119 = 0.0004284921280000001*t1100;
  t1249 = 0.996943*t1120;
  t793 = -0.00159*t790;
  t905 = -0.27068*t848;
  t909 = t793 + t905;
  t934 = -0.27068*t790;
  t938 = 0.00159*t848;
  t943 = t934 + t938;
  t1038 = 0.01841*t1037;
  t1043 = -0.70544*t1039;
  t1052 = t1038 + t1043;
  t1070 = -0.70544*t1037;
  t1086 = -0.01841*t1039;
  t1091 = t1070 + t1086;
  t1104 = -0.999969365345*t1100;
  t1105 = 1. + t1104;
  t1589 = t518*t741;
  t1612 = -1.*t643*t848;
  t1619 = t1589 + t1612;
  t1126 = t1119 + t1123;
  t1727 = -1.*t1619*t1039;
  t1737 = t1116 + t1727;
  t1143 = 0.005481192614*t1100;
  t1144 = -0.077936*t1120;
  t1151 = t1143 + t1144;
  t1801 = t1013*t1619;
  t1824 = t999*t1039;
  t1841 = t1801 + t1824;
  t1170 = 0.07769774964800001*t1100;
  t1172 = 0.005498*t1120;
  t1175 = t1170 + t1172;
  t1182 = -1.2096424700126054e-9*var1[12];
  t1202 = -0.6934128581485427*t1100;
  t1206 = t1203 + t1123;
  t1207 = -0.021877537552*t1206;
  t1214 = -0.005481192614*t1100;
  t1216 = 0.077936*t1120;
  t1218 = t1214 + t1216;
  t1220 = 0.005534467322*t1218;
  t1223 = t1182 + t1202 + t1207 + t1220;
  t1228 = -1.7147089040178687e-8*var1[12];
  t1240 = -0.021744644052735636*t1100;
  t1241 = -0.07769774964800001*t1100;
  t1242 = -0.005498*t1120;
  t1246 = t1241 + t1242;
  t1248 = 0.005534467322*t1246;
  t1251 = t1203 + t1249;
  t1255 = -0.6934341012630001*t1251;
  t1257 = t1228 + t1240 + t1248 + t1255;
  t1260 = -0.993925573253*t1100;
  t1263 = 1. + t1260;
  t1280 = t1119 + t1249;
  t1351 = -1.*t518;
  t1387 = 1. + t1351;
  t2511 = t741*t643;
  t2514 = t518*t848;
  t2518 = t2511 + t2514;
  t2540 = -1.*t2518*t1039;
  t2549 = t1801 + t2540;
  t2552 = t1013*t2518;
  t2555 = t1619*t1039;
  t2579 = t2552 + t2555;
  t1432 = 0.21*t643;
  t1487 = -1.*t518*t909;
  t1578 = t643*t943;
  t1653 = -1.*t1619*t1052;
  t1687 = -1.*t999*t1091;
  t1767 = t1105*t1737;
  t1887 = t1841*t1126;
  t1894 = t1767 + t1887;
  t1933 = 0.588518*t1894;
  t2155 = t1737*t1151;
  t2392 = t1841*t1175;
  t2409 = t2155 + t2392;
  t2441 = -0.124503*t2409;
  t2446 = -1.*t1737*t1223;
  t2449 = -1.*t1841*t1257;
  t2465 = t1263*t1841;
  t2469 = t1737*t1280;
  t2475 = t2465 + t2469;
  t2478 = -0.045407*t2475;
  t2486 = 0.21*t1387;
  t2487 = -0.049*t643;
  t2491 = -1.*t643*t909;
  t2500 = -1.*t518*t943;
  t2528 = -1.*t2518*t1052;
  t2536 = -1.*t1619*t1091;
  t2551 = t1105*t2549;
  t2580 = t2579*t1126;
  t2584 = t2551 + t2580;
  t2585 = 0.588518*t2584;
  t2588 = t2549*t1151;
  t2589 = t2579*t1175;
  t2591 = t2588 + t2589;
  t2592 = -0.124503*t2591;
  t2593 = -1.*t2549*t1223;
  t2596 = -1.*t2579*t1257;
  t2598 = t1263*t2579;
  t2601 = t2549*t1280;
  t2608 = t2598 + t2601;
  t2609 = -0.045407*t2608;
  t2620 = -0.09 + t2486 + t2487 + t2491 + t2500 + t2528 + t2536 + t2585 + t2592 + t2593 + t2596 + t2609;
  t2686 = 0.00159*t741;
  t2687 = t2686 + t905;
  t2708 = -0.27068*t741;
  t2711 = -0.00159*t848;
  t2715 = t2708 + t2711;
  t1056 = -1.*t999*t1052;
  t1092 = -1.*t1069*t1091;
  t1115 = t1105*t1112;
  t1127 = t1118*t1126;
  t1131 = t1115 + t1127;
  t1134 = 0.588518*t1131;
  t1152 = t1112*t1151;
  t1177 = t1118*t1175;
  t1179 = t1152 + t1177;
  t1181 = -0.124503*t1179;
  t1224 = -1.*t1112*t1223;
  t1259 = -1.*t1118*t1257;
  t1264 = t1263*t1118;
  t1283 = t1112*t1280;
  t1318 = t1264 + t1283;
  t1343 = -0.045407*t1318;
  t1409 = 0.049*t1387;
  t2482 = -0.049 + t1409 + t1432 + t1487 + t1578 + t1653 + t1687 + t1933 + t2441 + t2446 + t2449 + t2478;
  t2748 = -1.*t1013*t1619;
  t2749 = t2748 + t1109;
  t2738 = -0.01841*t1013;
  t2739 = t2738 + t1043;
  t2741 = -0.70544*t1013;
  t2743 = 0.01841*t1039;
  t2745 = t2741 + t2743;
  t2792 = -1.*t1013*t2518;
  t2793 = t2792 + t1727;
  t2888 = -0.077936*t1095;
  t2940 = 0.005481192614*t1120;
  t2877 = 0.005498*t1095;
  t2952 = 0.07769774964800001*t1120;
  t2937 = 0.077936*t1095;
  t2909 = -0.005481192614*t1120;
  t2947 = -0.005498*t1095;
  t2879 = -0.07769774964800001*t1120;
  t2974 = -0.0004284921280000001*t1120;
  t3012 = 0.996943*t1095;
  t2973 = -0.996943*t1095;
  t3026 = 0.0004284921280000001*t1120;
  t2961 = t2888 + t2940;
  t2964 = t2877 + t2952;
  t2969 = t2937 + t2909;
  t2970 = 0.005534467322*t2969;
  t2977 = t2973 + t2974;
  t2978 = -0.021877537552*t2977;
  t2982 = -0.6934128581485427*t1120;
  t2992 = -1.2096424700126054e-9 + t2970 + t2978 + t2982;
  t3003 = t2947 + t2879;
  t3008 = 0.005534467322*t3003;
  t3013 = t3012 + t2974;
  t3016 = -0.6934341012630001*t3013;
  t3018 = -0.021744644052735636*t1120;
  t3022 = -1.7147089040178687e-8 + t3008 + t3016 + t3018;
  t3047 = t2973 + t3026;
  t3033 = t3012 + t3026;
  t3227 = Sin(var1[17]);
  t3188 = Cos(var1[17]);
  t3233 = Cos(var1[18]);
  t3234 = -1.*t3233;
  t3235 = 1. + t3234;
  t3241 = Sin(var1[18]);
  t3278 = Cos(var1[19]);
  t3282 = -1.*t3278;
  t3288 = 1. + t3282;
  t3300 = Sin(var1[19]);
  t3313 = -1.*t3188*t3233;
  t3317 = t3227*t3241;
  t3339 = t3313 + t3317;
  t3270 = -1.*t3233*t3227;
  t3275 = -1.*t3188*t3241;
  t3276 = t3270 + t3275;
  t3355 = Cos(var1[20]);
  t3356 = -1.*t3355;
  t3358 = 1. + t3356;
  t3373 = t3278*t3339;
  t3375 = -1.*t3276*t3300;
  t3376 = t3373 + t3375;
  t3386 = Sin(var1[20]);
  t3389 = -0.996943*t3386;
  t3381 = t3278*t3276;
  t3382 = t3339*t3300;
  t3384 = t3381 + t3382;
  t3412 = -0.0004284921280000001*t3358;
  t3385 = 0.0004284921280000001*t3358;
  t3533 = 0.996943*t3386;
  t3240 = -0.00159*t3235;
  t3244 = -0.27068*t3241;
  t3245 = t3240 + t3244;
  t3253 = -0.27068*t3235;
  t3261 = 0.00159*t3241;
  t3262 = t3253 + t3261;
  t3296 = 0.01841*t3288;
  t3301 = -0.70544*t3300;
  t3304 = t3296 + t3301;
  t3344 = -0.70544*t3288;
  t3350 = -0.01841*t3300;
  t3351 = t3344 + t3350;
  t3359 = -0.999969365345*t3358;
  t3371 = 1. + t3359;
  t3964 = t3188*t3233;
  t3970 = -1.*t3227*t3241;
  t3973 = t3964 + t3970;
  t3390 = t3385 + t3389;
  t3979 = -1.*t3973*t3300;
  t3980 = t3381 + t3979;
  t3397 = -1.2096424700126054e-9*var1[20];
  t3411 = -0.6934128581485427*t3358;
  t3414 = t3412 + t3389;
  t3419 = -0.021877537552*t3414;
  t3420 = 0.005481192614*t3358;
  t3426 = -0.077936*t3386;
  t3428 = t3420 + t3426;
  t3437 = -0.005534467322*t3428;
  t3438 = t3397 + t3411 + t3419 + t3437;
  t3998 = t3278*t3973;
  t4007 = t3276*t3300;
  t4010 = t3998 + t4007;
  t3448 = -0.07769774964800001*t3358;
  t3449 = -0.005498*t3386;
  t3460 = t3448 + t3449;
  t3476 = -0.005481192614*t3358;
  t3477 = 0.077936*t3386;
  t3494 = t3476 + t3477;
  t3514 = -1.7147089040178687e-8*var1[20];
  t3518 = -0.021744644052735636*t3358;
  t3521 = 0.07769774964800001*t3358;
  t3523 = 0.005498*t3386;
  t3526 = t3521 + t3523;
  t3527 = -0.005534467322*t3526;
  t3543 = t3412 + t3533;
  t3751 = -0.6934341012630001*t3543;
  t3756 = t3514 + t3518 + t3527 + t3751;
  t3804 = -0.993925573253*t3358;
  t3807 = 1. + t3804;
  t3851 = t3385 + t3533;
  t3898 = -1.*t3188;
  t3902 = 1. + t3898;
  t4124 = t3233*t3227;
  t4128 = t3188*t3241;
  t4130 = t4124 + t4128;
  t4135 = -1.*t4130*t3300;
  t4138 = t3998 + t4135;
  t4143 = t3278*t4130;
  t4144 = t3973*t3300;
  t4162 = t4143 + t4144;
  t3958 = 0.21*t3227;
  t3960 = -1.*t3188*t3245;
  t3962 = t3227*t3262;
  t3974 = -1.*t3973*t3304;
  t3976 = -1.*t3276*t3351;
  t3993 = t3371*t3980;
  t4020 = t4010*t3390;
  t4023 = t3993 + t4020;
  t4028 = 0.588518*t4023;
  t4029 = -1.*t3980*t3438;
  t4035 = t4010*t3460;
  t4039 = t3980*t3494;
  t4040 = t4035 + t4039;
  t4043 = 0.124503*t4040;
  t4044 = -1.*t4010*t3756;
  t4045 = t3807*t4010;
  t4048 = t3980*t3851;
  t4051 = t4045 + t4048;
  t4052 = -0.045407*t4051;
  t4114 = 0.21*t3902;
  t4118 = -0.049*t3227;
  t4119 = -1.*t3227*t3245;
  t4123 = -1.*t3188*t3262;
  t4132 = -1.*t4130*t3304;
  t4134 = -1.*t3973*t3351;
  t4139 = t3371*t4138;
  t4163 = t4162*t3390;
  t4168 = t4139 + t4163;
  t4169 = 0.588518*t4168;
  t4171 = -1.*t4138*t3438;
  t4174 = t4162*t3460;
  t4176 = t4138*t3494;
  t4177 = t4174 + t4176;
  t4181 = 0.124503*t4177;
  t4182 = -1.*t4162*t3756;
  t4190 = t3807*t4162;
  t4196 = t4138*t3851;
  t4197 = t4190 + t4196;
  t4198 = -0.045407*t4197;
  t4201 = -0.09 + t4114 + t4118 + t4119 + t4123 + t4132 + t4134 + t4169 + t4171 + t4181 + t4182 + t4198;
  t4215 = 0.00159*t3233;
  t4225 = t4215 + t3244;
  t4296 = -0.27068*t3233;
  t4297 = -0.00159*t3241;
  t4306 = t4296 + t4297;
  t3308 = -1.*t3276*t3304;
  t3354 = -1.*t3339*t3351;
  t3379 = t3371*t3376;
  t3391 = t3384*t3390;
  t3394 = t3379 + t3391;
  t3395 = 0.588518*t3394;
  t3446 = -1.*t3376*t3438;
  t3464 = t3384*t3460;
  t3495 = t3376*t3494;
  t3496 = t3464 + t3495;
  t3502 = 0.124503*t3496;
  t3764 = -1.*t3384*t3756;
  t3833 = t3807*t3384;
  t3852 = t3376*t3851;
  t3863 = t3833 + t3852;
  t3864 = -0.045407*t3863;
  t3949 = 0.049*t3902;
  t4056 = -0.049 + t3949 + t3958 + t3960 + t3962 + t3974 + t3976 + t4028 + t4029 + t4043 + t4044 + t4052;
  t4404 = -1.*t3278*t3973;
  t4484 = t4404 + t3375;
  t4356 = -0.01841*t3278;
  t4357 = t4356 + t3301;
  t4379 = -0.70544*t3278;
  t4386 = 0.01841*t3300;
  t4389 = t4379 + t4386;
  t5201 = -1.*t3278*t4130;
  t5208 = t5201 + t3979;
  t9484 = -0.005498*t3355;
  t8874 = -0.07769774964800001*t3386;
  t9198 = 0.077936*t3355;
  t9112 = -0.005481192614*t3386;
  t9092 = -0.077936*t3355;
  t9208 = 0.005481192614*t3386;
  t9821 = -0.0004284921280000001*t3386;
  t8778 = 0.005498*t3355;
  t9496 = 0.07769774964800001*t3386;
  t9941 = 0.996943*t3355;
  t9762 = -0.996943*t3355;
  t10073 = 0.0004284921280000001*t3386;
  t9610 = t9484 + t8874;
  t9634 = t9198 + t9112;
  t9873 = t9762 + t9821;
  t9905 = -0.021877537552*t9873;
  t9906 = t9092 + t9208;
  t9909 = -0.005534467322*t9906;
  t9913 = -0.6934128581485427*t3386;
  t9918 = -1.2096424700126054e-9 + t9905 + t9909 + t9913;
  t9943 = t9941 + t9821;
  t9981 = -0.6934341012630001*t9943;
  t9983 = t8778 + t9496;
  t9988 = -0.005534467322*t9983;
  t9992 = -0.021744644052735636*t3386;
  t9993 = -1.7147089040178687e-8 + t9981 + t9988 + t9992;
  t10187 = t9762 + t10073;
  t10151 = t9941 + t10073;
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
  p_output1[18]=2.*t2620*(t1432 + t1487 + t1578 + t1653 + t1687 + t1933 + t2441 + t2446 + t2449 + t2478 - 0.049*t518) + 2.*t2482*(t1056 + t1092 + t1134 + t1181 + t1224 + t1259 + t1343 + 0.21*t518 + 0.049*t643 + t643*t909 + t518*t943);
  p_output1[19]=0;
  p_output1[20]=2.*t2482*(t1056 + t1092 + t1134 + t1181 + t1224 + t1259 + t1343 - 1.*t2715*t518 + t2687*t643) + 2.*t2620*(t1653 + t1687 + t1933 + t2441 + t2446 + t2449 + t2478 - 1.*t2687*t518 - 1.*t2715*t643);
  p_output1[21]=0;
  p_output1[22]=2.*t2620*(-1.*t1257*t2549 - 1.*t1619*t2739 - 1.*t2518*t2745 - 1.*t1223*t2793 + 0.588518*(t1126*t2549 + t1105*t2793) - 0.124503*(t1175*t2549 + t1151*t2793) - 0.045407*(t1263*t2549 + t1280*t2793)) + 2.*t2482*(-1.*t1257*t1737 - 1.*t1619*t2745 - 1.*t1223*t2749 + 0.588518*(t1126*t1737 + t1105*t2749) - 0.124503*(t1175*t1737 + t1151*t2749) - 0.045407*(t1263*t1737 + t1280*t2749) - 1.*t2739*t999);
  p_output1[23]=0;
  p_output1[24]=2.*t2482*(-0.124503*(t1737*t2961 + t1841*t2964) - 1.*t1737*t2992 - 1.*t1841*t3022 - 0.045407*(-0.993925573253*t1120*t1841 + t1737*t3033) + 0.588518*(-0.999969365345*t1120*t1737 + t1841*t3047)) + 2.*t2620*(-0.124503*(t2549*t2961 + t2579*t2964) - 1.*t2549*t2992 - 1.*t2579*t3022 - 0.045407*(-0.993925573253*t1120*t2579 + t2549*t3033) + 0.588518*(-0.999969365345*t1120*t2549 + t2579*t3047)) + 2.*(2.1934241414728571e-7 + 0.0007262134395594695*t1120 + 0.021877537552*(t2877 + t2879) + 0.6934341012630001*(t2888 + t2909) + 0.588518*(t2937 + t2940) - 0.045407*(t2947 + t2952))*(0.09 - 0.124503*(1. - 0.006104248100000001*t1100) - 0.000033783761634830594*t1100 + 0.6934341012630001*(t1144 + t1214) + 0.588518*(t1143 + t1216) + 0.021877537552*(t1172 + t1241) - 0.045407*(t1170 + t1242) + 2.1934241414728571e-7*var1[12]);
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=2.*(0.21*t3188 + 0.049*t3227 + t3227*t3245 + t3188*t3262 + t3308 + t3354 + t3395 + t3446 + t3502 + t3764 + t3864)*t4056 + 2.*(-0.049*t3188 + t3958 + t3960 + t3962 + t3974 + t3976 + t4028 + t4029 + t4043 + t4044 + t4052)*t4201;
  p_output1[36]=0;
  p_output1[37]=2.*t4056*(t3308 + t3354 + t3395 + t3446 + t3502 + t3764 + t3864 + t3227*t4225 - 1.*t3188*t4306) + 2.*t4201*(t3974 + t3976 + t4028 + t4029 + t4043 + t4044 + t4052 - 1.*t3188*t4225 - 1.*t3227*t4306);
  p_output1[38]=0;
  p_output1[39]=2.*t4056*(-1.*t3756*t3980 - 1.*t3276*t4357 - 1.*t3973*t4389 - 1.*t3438*t4484 + 0.588518*(t3390*t3980 + t3371*t4484) + 0.124503*(t3460*t3980 + t3494*t4484) - 0.045407*(t3807*t3980 + t3851*t4484)) + 2.*t4201*(-1.*t3756*t4138 - 1.*t3973*t4357 - 1.*t4130*t4389 - 1.*t3438*t5208 + 0.588518*(t3390*t4138 + t3371*t5208) + 0.124503*(t3460*t4138 + t3494*t5208) - 0.045407*(t3807*t4138 + t3851*t5208));
  p_output1[40]=0;
  p_output1[41]=2.*t4056*(0.588518*(-0.999969365345*t3386*t3980 + t10187*t4010) - 0.045407*(t10151*t3980 - 0.993925573253*t3386*t4010) + 0.124503*(t4010*t9610 + t3980*t9634) - 1.*t3980*t9918 - 1.*t4010*t9993) + 2.*t4201*(0.588518*(-0.999969365345*t3386*t4138 + t10187*t4162) - 0.045407*(t10151*t4138 - 0.993925573253*t3386*t4162) + 0.124503*(t4162*t9610 + t4138*t9634) - 1.*t4138*t9918 - 1.*t4162*t9993) + 2.*(-2.1934241414728571e-7 - 0.0007262134395594695*t3386 - 0.045407*(t8778 + t8874) + 0.588518*(t9092 + t9112) + 0.6934341012630001*(t9198 + t9208) + 0.021877537552*(t9484 + t9496))*(-0.09 + 0.124503*(1. - 0.006104248100000001*t3358) + 0.000033783761634830594*t3358 + 0.588518*(t3426 + t3476) + 0.6934341012630001*(t3420 + t3477) + 0.021877537552*(t3449 + t3521) - 0.045407*(t3448 + t3523) - 2.1934241414728571e-7*var1[20]);
  p_output1[42]=0;
  p_output1[43]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 2, (mwSize) 22, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void J_achilles_constraint_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




