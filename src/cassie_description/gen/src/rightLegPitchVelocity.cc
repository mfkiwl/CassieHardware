/*
 * Automatically Generated from Mathematica.
 * Thu 26 Aug 2021 14:19:38 GMT-07:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "rightLegPitchVelocity.hh"
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
  double t31;
  double t394;
  double t62;
  double t113;
  double t135;
  double t166;
  double t399;
  double t597;
  double t699;
  double t737;
  double t787;
  double t537;
  double t988;
  double t1000;
  double t1009;
  double t1103;
  double t1202;
  double t1204;
  double t1216;
  double t1601;
  double t1609;
  double t1267;
  double t1285;
  double t1325;
  double t1432;
  double t1454;
  double t1484;
  double t1656;
  double t1725;
  double t1729;
  double t1867;
  double t2215;
  double t2249;
  double t2252;
  double t2336;
  double t2383;
  double t2413;
  double t2478;
  double t2496;
  double t2503;
  double t2597;
  double t2775;
  double t2780;
  double t2781;
  double t2860;
  double t2867;
  double t2873;
  double t746;
  double t854;
  double t858;
  double t3057;
  double t3060;
  double t413;
  double t428;
  double t466;
  double t3080;
  double t3085;
  double t3138;
  double t160;
  double t203;
  double t256;
  double t953;
  double t961;
  double t976;
  double t1213;
  double t1217;
  double t1256;
  double t3058;
  double t3061;
  double t3066;
  double t3173;
  double t3180;
  double t3188;
  double t1367;
  double t1376;
  double t1396;
  double t1743;
  double t2169;
  double t2212;
  double t3246;
  double t3263;
  double t3267;
  double t3320;
  double t3321;
  double t3344;
  double t2308;
  double t2318;
  double t2328;
  double t2566;
  double t2683;
  double t2706;
  double t3356;
  double t3357;
  double t3365;
  double t3373;
  double t3393;
  double t3411;
  double t2812;
  double t2824;
  double t2851;
  double t3435;
  double t3443;
  double t3453;
  double t3458;
  double t3464;
  double t3479;
  double t3571;
  double t3575;
  double t3580;
  double t3627;
  double t3631;
  double t3634;
  double t3688;
  double t3698;
  double t3774;
  double t3810;
  double t3811;
  double t3814;
  double t3831;
  double t3868;
  double t3869;
  double t3878;
  double t3898;
  double t3920;
  double t3982;
  double t3983;
  double t4024;
  double t4052;
  double t4100;
  double t4105;
  double t4122;
  double t4159;
  double t4183;
  double t908;
  double t917;
  double t924;
  double t2899;
  double t2905;
  double t2918;
  double t2984;
  double t2993;
  double t3046;
  double t4559;
  double t4573;
  double t4578;
  double t4601;
  double t4603;
  double t4604;
  double t4623;
  double t4670;
  double t4677;
  double t4683;
  double t4693;
  double t4698;
  double t4713;
  double t4714;
  double t4734;
  double t4739;
  double t4755;
  double t4758;
  double t3597;
  double t3617;
  double t3646;
  double t3660;
  double t3684;
  double t3778;
  double t3788;
  double t3789;
  double t3794;
  double t3798;
  double t3818;
  double t3872;
  double t3944;
  double t4045;
  double t4107;
  double t4212;
  double t4215;
  double t4216;
  double t4218;
  double t4242;
  double t4253;
  double t4269;
  double t4333;
  double t4349;
  double t4355;
  double t4365;
  double t4367;
  double t4380;
  double t4429;
  double t4434;
  double t4439;
  double t4442;
  double t4446;
  double t4457;
  double t4459;
  double t4470;
  double t4478;
  double t4482;
  double t4488;
  double t4491;
  double t4493;
  double t4499;
  double t4501;
  double t4510;
  double t4541;
  double t4876;
  double t4888;
  double t4900;
  double t4997;
  double t4998;
  double t5005;
  double t5031;
  double t5063;
  double t5072;
  double t5091;
  double t5092;
  double t5105;
  double t5120;
  double t5136;
  double t5150;
  double t5199;
  double t5217;
  double t5265;
  double t5282;
  double t5330;
  double t5332;
  double t56;
  double t374;
  double t406;
  double t502;
  double t867;
  double t948;
  double t1082;
  double t1326;
  double t1512;
  double t2288;
  double t2436;
  double t2808;
  double t2896;
  double t2923;
  double t3054;
  double t3056;
  double t5747;
  double t5752;
  double t5801;
  double t5814;
  double t5824;
  double t5832;
  double t5848;
  double t5860;
  double t5898;
  double t5915;
  double t5949;
  double t5962;
  double t5629;
  double t5640;
  double t5592;
  double t5601;
  double t5602;
  double t6082;
  double t6090;
  double t6091;
  double t6104;
  double t6107;
  double t6145;
  double t6153;
  double t6178;
  double t6203;
  double t6216;
  double t6226;
  double t6246;
  double t6547;
  double t6600;
  double t6604;
  double t6619;
  double t6625;
  double t6663;
  double t6667;
  double t6678;
  double t6757;
  double t6776;
  double t6788;
  double t6827;
  double t6926;
  double t7051;
  double t6422;
  double t6428;
  double t6500;
  double t6508;
  double t6513;
  double t7467;
  double t7468;
  double t7479;
  double t7493;
  double t7521;
  double t7532;
  double t7536;
  double t7568;
  double t7598;
  double t7613;
  double t7621;
  double t7641;
  double t7643;
  double t7663;
  double t7824;
  double t7844;
  double t7850;
  double t7854;
  double t7856;
  double t8195;
  double t8200;
  double t8236;
  double t8242;
  double t8244;
  double t8245;
  double t8248;
  double t8080;
  double t8084;
  double t8092;
  double t8131;
  double t8144;
  double t8171;
  double t8177;
  double t8191;
  double t8214;
  double t8215;
  double t8340;
  double t8351;
  double t8372;
  double t8373;
  double t8379;
  double t8383;
  double t8394;
  double t8599;
  double t8601;
  double t8602;
  double t8621;
  double t8645;
  double t8646;
  double t8664;
  double t8665;
  double t8666;
  double t8668;
  double t8669;
  double t8674;
  double t8699;
  double t8702;
  double t8710;
  double t8718;
  double t8727;
  double t8738;
  double t8744;
  double t8746;
  double t8748;
  double t8792;
  double t8793;
  double t8795;
  double t8798;
  double t8799;
  double t8805;
  double t8816;
  double t8825;
  double t8826;
  double t8828;
  double t8829;
  double t8830;
  double t8834;
  double t8837;
  double t8838;
  double t8840;
  double t8841;
  double t8843;
  double t8846;
  double t8847;
  double t8849;
  t31 = Cos(var1[4]);
  t394 = Sin(var1[14]);
  t62 = Cos(var1[15]);
  t113 = -1.*t62;
  t135 = 1. + t113;
  t166 = Sin(var1[15]);
  t399 = Sin(var1[4]);
  t597 = Cos(var1[16]);
  t699 = -1.*t597;
  t737 = 1. + t699;
  t787 = Sin(var1[16]);
  t537 = Cos(var1[14]);
  t988 = t62*t31;
  t1000 = t394*t166*t399;
  t1009 = t988 + t1000;
  t1103 = Cos(var1[17]);
  t1202 = -1.*t1103;
  t1204 = 1. + t1202;
  t1216 = Sin(var1[17]);
  t1601 = -1.*var1[17];
  t1609 = 0.226893 + t1601;
  t1267 = t537*t787*t399;
  t1285 = t597*t1009;
  t1325 = t1267 + t1285;
  t1432 = t537*t597*t399;
  t1454 = -1.*t787*t1009;
  t1484 = t1432 + t1454;
  t1656 = Cos(t1609);
  t1725 = -1.*t1656;
  t1729 = 1. + t1725;
  t1867 = Sin(t1609);
  t2215 = -1.*t1216*t1325;
  t2249 = t1103*t1484;
  t2252 = t2215 + t2249;
  t2336 = t1103*t1325;
  t2383 = t1216*t1484;
  t2413 = t2336 + t2383;
  t2478 = Cos(var1[21]);
  t2496 = -1.*t2478;
  t2503 = 1. + t2496;
  t2597 = Sin(var1[21]);
  t2775 = t1867*t2252;
  t2780 = t1656*t2413;
  t2781 = t2775 + t2780;
  t2860 = t1656*t2252;
  t2867 = -1.*t1867*t2413;
  t2873 = t2860 + t2867;
  t746 = -0.09*t737;
  t854 = 0.049*t787;
  t858 = t746 + t854;
  t3057 = Cos(var1[3]);
  t3060 = Sin(var1[3]);
  t413 = -0.135*t135;
  t428 = 0.049*t166;
  t466 = t413 + t428;
  t3080 = t537*t3057;
  t3085 = -1.*t31*t394*t3060;
  t3138 = t3080 + t3085;
  t160 = -0.049*t135;
  t203 = -0.135*t166;
  t256 = t160 + t203;
  t953 = -0.049*t737;
  t961 = -0.09*t787;
  t976 = t953 + t961;
  t1213 = -0.049*t1204;
  t1217 = -0.21*t1216;
  t1256 = t1213 + t1217;
  t3058 = -1.*t3057*t394;
  t3061 = -1.*t537*t31*t3060;
  t3066 = t3058 + t3061;
  t3173 = t166*t3138;
  t3180 = t62*t3060*t399;
  t3188 = t3173 + t3180;
  t1367 = -0.21*t1204;
  t1376 = 0.049*t1216;
  t1396 = t1367 + t1376;
  t1743 = -0.70544*t1729;
  t2169 = -0.01841*t1867;
  t2212 = t1743 + t2169;
  t3246 = t787*t3066;
  t3263 = t597*t3188;
  t3267 = t3246 + t3263;
  t3320 = t597*t3066;
  t3321 = -1.*t787*t3188;
  t3344 = t3320 + t3321;
  t2308 = 0.01841*t1729;
  t2318 = -0.70544*t1867;
  t2328 = t2308 + t2318;
  t2566 = -0.02159*t2503;
  t2683 = -1.11344*t2597;
  t2706 = t2566 + t2683;
  t3356 = -1.*t1216*t3267;
  t3357 = t1103*t3344;
  t3365 = t3356 + t3357;
  t3373 = t1103*t3267;
  t3393 = t1216*t3344;
  t3411 = t3373 + t3393;
  t2812 = -1.11344*t2503;
  t2824 = 0.02159*t2597;
  t2851 = t2812 + t2824;
  t3435 = t1867*t3365;
  t3443 = t1656*t3411;
  t3453 = t3435 + t3443;
  t3458 = t1656*t3365;
  t3464 = -1.*t1867*t3411;
  t3479 = t3458 + t3464;
  t3571 = t3057*t31*t394;
  t3575 = t537*t3060;
  t3580 = t3571 + t3575;
  t3627 = t537*t3057*t31;
  t3631 = -1.*t394*t3060;
  t3634 = t3627 + t3631;
  t3688 = t166*t3580;
  t3698 = -1.*t62*t3057*t399;
  t3774 = t3688 + t3698;
  t3810 = t787*t3634;
  t3811 = t597*t3774;
  t3814 = t3810 + t3811;
  t3831 = t597*t3634;
  t3868 = -1.*t787*t3774;
  t3869 = t3831 + t3868;
  t3878 = -1.*t1216*t3814;
  t3898 = t1103*t3869;
  t3920 = t3878 + t3898;
  t3982 = t1103*t3814;
  t3983 = t1216*t3869;
  t4024 = t3982 + t3983;
  t4052 = t1867*t3920;
  t4100 = t1656*t4024;
  t4105 = t4052 + t4100;
  t4122 = t1656*t3920;
  t4159 = -1.*t1867*t4024;
  t4183 = t4122 + t4159;
  t908 = -1.*t31*t166;
  t917 = t62*t394*t399;
  t924 = t908 + t917;
  t2899 = -1.*t2597*t2781;
  t2905 = t2478*t2873;
  t2918 = t2899 + t2905;
  t2984 = t2478*t2781;
  t2993 = t2597*t2873;
  t3046 = t2984 + t2993;
  t4559 = t537*t597*t166*t399;
  t4573 = -1.*t394*t787*t399;
  t4578 = t4559 + t4573;
  t4601 = -1.*t597*t394*t399;
  t4603 = -1.*t537*t166*t787*t399;
  t4604 = t4601 + t4603;
  t4623 = -1.*t1216*t4578;
  t4670 = t1103*t4604;
  t4677 = t4623 + t4670;
  t4683 = t1103*t4578;
  t4693 = t1216*t4604;
  t4698 = t4683 + t4693;
  t4713 = t1867*t4677;
  t4714 = t1656*t4698;
  t4734 = t4713 + t4714;
  t4739 = t1656*t4677;
  t4755 = -1.*t1867*t4698;
  t4758 = t4739 + t4755;
  t3597 = -0.135*t3580;
  t3617 = -1.*t466*t3580;
  t3646 = -1.*t858*t3634;
  t3660 = 0.049*t3057*t399;
  t3684 = t3057*t256*t399;
  t3778 = -1.*t976*t3774;
  t3788 = t62*t3580;
  t3789 = t3057*t166*t399;
  t3794 = t3788 + t3789;
  t3798 = 0.1305*t3794;
  t3818 = -1.*t1256*t3814;
  t3872 = -1.*t1396*t3869;
  t3944 = -1.*t2212*t3920;
  t4045 = -1.*t2328*t4024;
  t4107 = -1.*t2706*t4105;
  t4212 = -1.*t2851*t4183;
  t4215 = -1.*t2597*t4105;
  t4216 = t2478*t4183;
  t4218 = t4215 + t4216;
  t4242 = 1.11344*t4218;
  t4253 = t2478*t4105;
  t4269 = t2597*t4183;
  t4333 = t4253 + t4269;
  t4349 = 0.02159*t4333;
  t4355 = t3597 + t3617 + t3646 + t3660 + t3684 + t3778 + t3798 + t3818 + t3872 + t3944 + t4045 + t4107 + t4212 + t4242 + t4349;
  t4365 = Power(t4355,2);
  t4367 = 0.049*t31;
  t4380 = t31*t256;
  t4429 = 0.135*t394*t399;
  t4434 = t394*t466*t399;
  t4439 = t537*t858*t399;
  t4442 = -0.1305*t924;
  t4446 = t976*t1009;
  t4457 = t1256*t1325;
  t4459 = t1396*t1484;
  t4470 = t2212*t2252;
  t4478 = t2328*t2413;
  t4482 = t2706*t2781;
  t4488 = t2851*t2873;
  t4491 = -1.11344*t2918;
  t4493 = -0.02159*t3046;
  t4499 = t4367 + t4380 + t4429 + t4434 + t4439 + t4442 + t4446 + t4457 + t4459 + t4470 + t4478 + t4482 + t4488 + t4491 + t4493;
  t4501 = Power(t4499,2);
  t4510 = t4365 + t4501;
  t4541 = 1/t4510;
  t4876 = -1.*t3057*t31*t394;
  t4888 = -1.*t537*t3060;
  t4900 = t4876 + t4888;
  t4997 = t787*t4900;
  t4998 = t597*t166*t3634;
  t5005 = t4997 + t4998;
  t5031 = t597*t4900;
  t5063 = -1.*t166*t787*t3634;
  t5072 = t5031 + t5063;
  t5091 = -1.*t1216*t5005;
  t5092 = t1103*t5072;
  t5105 = t5091 + t5092;
  t5120 = t1103*t5005;
  t5136 = t1216*t5072;
  t5150 = t5120 + t5136;
  t5199 = t1867*t5105;
  t5217 = t1656*t5150;
  t5265 = t5199 + t5217;
  t5282 = t1656*t5105;
  t5330 = -1.*t1867*t5150;
  t5332 = t5282 + t5330;
  t56 = -0.049*t31;
  t374 = -1.*t31*t256;
  t406 = -0.135*t394*t399;
  t502 = -1.*t394*t466*t399;
  t867 = -1.*t537*t858*t399;
  t948 = 0.1305*t924;
  t1082 = -1.*t976*t1009;
  t1326 = -1.*t1256*t1325;
  t1512 = -1.*t1396*t1484;
  t2288 = -1.*t2212*t2252;
  t2436 = -1.*t2328*t2413;
  t2808 = -1.*t2706*t2781;
  t2896 = -1.*t2851*t2873;
  t2923 = 1.11344*t2918;
  t3054 = 0.02159*t3046;
  t3056 = t56 + t374 + t406 + t502 + t867 + t948 + t1082 + t1326 + t1512 + t2288 + t2436 + t2808 + t2896 + t2923 + t3054;
  t5747 = -1.*t1103*t787*t924;
  t5752 = -1.*t597*t1216*t924;
  t5801 = t5747 + t5752;
  t5814 = t597*t1103*t924;
  t5824 = -1.*t787*t1216*t924;
  t5832 = t5814 + t5824;
  t5848 = t1867*t5801;
  t5860 = t1656*t5832;
  t5898 = t5848 + t5860;
  t5915 = t1656*t5801;
  t5949 = -1.*t1867*t5832;
  t5962 = t5915 + t5949;
  t5629 = 0.049*t62;
  t5640 = t5629 + t203;
  t5592 = -0.135*t62;
  t5601 = -0.049*t166;
  t5602 = t5592 + t5601;
  t6082 = -1.*t1103*t787*t3794;
  t6090 = -1.*t597*t1216*t3794;
  t6091 = t6082 + t6090;
  t6104 = t597*t1103*t3794;
  t6107 = -1.*t787*t1216*t3794;
  t6145 = t6104 + t6107;
  t6153 = t1867*t6091;
  t6178 = t1656*t6145;
  t6203 = t6153 + t6178;
  t6216 = t1656*t6091;
  t6226 = -1.*t1867*t6145;
  t6246 = t6216 + t6226;
  t6547 = -1.*t537*t787*t399;
  t6600 = -1.*t597*t1009;
  t6604 = t6547 + t6600;
  t6619 = t1216*t6604;
  t6625 = t6619 + t2249;
  t6663 = t1103*t6604;
  t6667 = -1.*t1216*t1484;
  t6678 = t6663 + t6667;
  t6757 = -1.*t1867*t6625;
  t6776 = t1656*t6678;
  t6788 = t6757 + t6776;
  t6827 = t1656*t6625;
  t6926 = t1867*t6678;
  t7051 = t6827 + t6926;
  t6422 = 0.049*t597;
  t6428 = t6422 + t961;
  t6500 = -0.09*t597;
  t6508 = -0.049*t787;
  t6513 = t6500 + t6508;
  t7467 = -1.*t787*t3634;
  t7468 = -1.*t597*t3774;
  t7479 = t7467 + t7468;
  t7493 = t1216*t7479;
  t7521 = t7493 + t3898;
  t7532 = t1103*t7479;
  t7536 = -1.*t1216*t3869;
  t7568 = t7532 + t7536;
  t7598 = -1.*t1867*t7521;
  t7613 = t1656*t7568;
  t7621 = t7598 + t7613;
  t7641 = t1656*t7521;
  t7643 = t1867*t7568;
  t7663 = t7641 + t7643;
  t7824 = -1.11344*t2478;
  t7844 = -0.02159*t2597;
  t7850 = t7824 + t7844;
  t7854 = 0.02159*t2478;
  t7856 = t7854 + t2683;
  t8195 = -1.*t1103*t3814;
  t8200 = t8195 + t7536;
  t8236 = t1656*t8200;
  t8242 = t8236 + t4100;
  t8244 = t1867*t8200;
  t8245 = t1867*t4024;
  t8248 = t8244 + t8245;
  t8080 = -0.21*t1103;
  t8084 = -0.049*t1216;
  t8092 = t8080 + t8084;
  t8131 = 0.049*t1103;
  t8144 = t8131 + t1217;
  t8171 = 0.01841*t1656;
  t8177 = 0.70544*t1867;
  t8191 = t8171 + t8177;
  t8214 = 0.70544*t1656;
  t8215 = t8214 + t2169;
  t8340 = -1.*t1103*t1325;
  t8351 = t8340 + t6667;
  t8372 = t1656*t8351;
  t8373 = t8372 + t2780;
  t8379 = t1867*t8351;
  t8383 = t1867*t2413;
  t8394 = t8379 + t8383;
  t8599 = t31*t394*t166;
  t8601 = -1.*t62*t399;
  t8602 = t8599 + t8601;
  t8621 = t537*t31*t787;
  t8645 = t597*t8602;
  t8646 = t8621 + t8645;
  t8664 = t537*t597*t31;
  t8665 = -1.*t787*t8602;
  t8666 = t8664 + t8665;
  t8668 = -1.*t1216*t8646;
  t8669 = t1103*t8666;
  t8674 = t8668 + t8669;
  t8699 = t1103*t8646;
  t8702 = t1216*t8666;
  t8710 = t8699 + t8702;
  t8718 = t1867*t8674;
  t8727 = t1656*t8710;
  t8738 = t8718 + t8727;
  t8744 = t1656*t8674;
  t8746 = -1.*t1867*t8710;
  t8748 = t8744 + t8746;
  t8792 = -1.*t62*t3057*t31;
  t8793 = -1.*t3057*t394*t166*t399;
  t8795 = t8792 + t8793;
  t8798 = -1.*t537*t3057*t787*t399;
  t8799 = t597*t8795;
  t8805 = t8798 + t8799;
  t8816 = -1.*t537*t597*t3057*t399;
  t8825 = -1.*t787*t8795;
  t8826 = t8816 + t8825;
  t8828 = -1.*t1216*t8805;
  t8829 = t1103*t8826;
  t8830 = t8828 + t8829;
  t8834 = t1103*t8805;
  t8837 = t1216*t8826;
  t8838 = t8834 + t8837;
  t8840 = t1867*t8830;
  t8841 = t1656*t8838;
  t8843 = t8840 + t8841;
  t8846 = t1656*t8830;
  t8847 = -1.*t1867*t8838;
  t8849 = t8846 + t8847;
  p_output1[0]=t3056*t4541*(-0.135*t3138 - 1.*t1256*t3267 - 1.*t1396*t3344 - 1.*t2212*t3365 - 1.*t2328*t3411 - 1.*t2706*t3453 - 1.*t2851*t3479 + 1.11344*(-1.*t2597*t3453 + t2478*t3479) + 0.02159*(t2478*t3453 + t2597*t3479) - 0.049*t3060*t399 - 1.*t256*t3060*t399 - 1.*t3138*t466 + 0.1305*(-1.*t166*t3060*t399 + t3138*t62) - 1.*t3066*t858 - 1.*t3188*t976)*var2[3] + (t4355*t4541*(0.135*t31*t394 - 0.049*t399 - 1.*t256*t399 + t31*t394*t466 - 0.1305*(t166*t399 + t31*t394*t62) + t31*t537*t858 + t1256*t8646 + t1396*t8666 + t2212*t8674 + t2328*t8710 + t2706*t8738 + t2851*t8748 - 1.11344*(-1.*t2597*t8738 + t2478*t8748) - 0.02159*(t2478*t8738 + t2597*t8748) + t8602*t976) + t3056*t4541*(0.049*t3057*t31 + t256*t3057*t31 + 0.135*t3057*t394*t399 + t3057*t394*t399*t466 + 0.1305*(t166*t3057*t31 - 1.*t3057*t394*t399*t62) + t3057*t399*t537*t858 - 1.*t1256*t8805 - 1.*t1396*t8826 - 1.*t2212*t8830 - 1.*t2328*t8838 - 1.*t2706*t8843 - 1.*t2851*t8849 + 1.11344*(-1.*t2597*t8843 + t2478*t8849) + 0.02159*(t2478*t8843 + t2597*t8849) - 1.*t8795*t976))*var2[4] + (t3056*t4541*(-0.135*t3634 - 1.*t3634*t466 - 1.*t1256*t5005 - 1.*t1396*t5072 - 1.*t2212*t5105 - 1.*t2328*t5150 - 1.*t2706*t5265 - 1.*t2851*t5332 + 1.11344*(-1.*t2597*t5265 + t2478*t5332) + 0.02159*(t2478*t5265 + t2597*t5332) + 0.1305*t3634*t62 - 1.*t4900*t858 - 1.*t166*t3634*t976) + t4355*t4541*(t1256*t4578 + t1396*t4604 + t2212*t4677 + t2328*t4698 + t2706*t4734 + t2851*t4758 - 1.11344*(-1.*t2597*t4734 + t2478*t4758) - 0.02159*(t2478*t4734 + t2597*t4758) + 0.135*t399*t537 + t399*t466*t537 - 0.1305*t399*t537*t62 - 1.*t394*t399*t858 + t166*t399*t537*t976))*var2[14] + (t3056*t4541*(t3057*t399*t5602 - 1.*t3580*t5640 - 1.*t1256*t3794*t597 - 1.*t2212*t6091 - 1.*t2328*t6145 + 0.1305*(-1.*t166*t3580 + t3057*t399*t62) - 1.*t2706*t6203 - 1.*t2851*t6246 + 1.11344*(-1.*t2597*t6203 + t2478*t6246) + 0.02159*(t2478*t6203 + t2597*t6246) + t1396*t3794*t787 - 1.*t3794*t976) + t4355*t4541*(t31*t5602 + t394*t399*t5640 + t2212*t5801 + t2328*t5832 + t2706*t5898 + t2851*t5962 - 1.11344*(-1.*t2597*t5898 + t2478*t5962) - 0.02159*(t2478*t5898 + t2597*t5962) - 0.1305*(-1.*t166*t394*t399 - 1.*t31*t62) + t1256*t597*t924 - 1.*t1396*t787*t924 + t924*t976))*var2[15] + (t4355*t4541*(t1256*t1484 + t399*t537*t6428 + t1009*t6513 + t1396*t6604 + t2328*t6625 + t2212*t6678 + t2851*t6788 + t2706*t7051 - 0.02159*(t2597*t6788 + t2478*t7051) - 1.11344*(t2478*t6788 - 1.*t2597*t7051)) + t3056*t4541*(-1.*t1256*t3869 - 1.*t3634*t6428 - 1.*t3774*t6513 - 1.*t1396*t7479 - 1.*t2328*t7521 - 1.*t2212*t7568 - 1.*t2851*t7621 - 1.*t2706*t7663 + 0.02159*(t2597*t7621 + t2478*t7663) + 1.11344*(t2478*t7621 - 1.*t2597*t7663)))*var2[16] + (t3056*t4541*(-1.*t2328*t3920 - 1.*t3814*t8092 - 1.*t3869*t8144 - 1.*t3920*t8191 - 1.*t2212*t8200 - 1.*t4024*t8215 - 1.*t2851*t8242 - 1.*t2706*t8248 + 0.02159*(t2597*t8242 + t2478*t8248) + 1.11344*(t2478*t8242 - 1.*t2597*t8248)) + t4355*t4541*(t2252*t2328 + t1325*t8092 + t1484*t8144 + t2252*t8191 + t2413*t8215 + t2212*t8351 + t2851*t8373 + t2706*t8394 - 0.02159*(t2597*t8373 + t2478*t8394) - 1.11344*(t2478*t8373 - 1.*t2597*t8394)))*var2[17] + (t4355*t4541*(-1.11344*(-1.*t2478*t2781 - 1.*t2597*t2873) - 0.02159*t2918 + t2781*t7850 + t2873*t7856) + t3056*t4541*(1.11344*(-1.*t2478*t4105 - 1.*t2597*t4183) + 0.02159*t4218 - 1.*t4105*t7850 - 1.*t4183*t7856))*var2[21];
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

void rightLegPitchVelocity_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}




