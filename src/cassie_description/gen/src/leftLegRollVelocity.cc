/*
 * Automatically Generated from Mathematica.
 * Thu 26 Aug 2021 14:19:39 GMT-07:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "leftLegRollVelocity.hh"
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
  double t84;
  double t188;
  double t542;
  double t684;
  double t897;
  double t918;
  double t1038;
  double t1051;
  double t1054;
  double t1097;
  double t120;
  double t2905;
  double t2979;
  double t2986;
  double t2067;
  double t2178;
  double t2383;
  double t2415;
  double t2714;
  double t3443;
  double t3719;
  double t3761;
  double t3788;
  double t3810;
  double t3839;
  double t3954;
  double t4207;
  double t4212;
  double t4216;
  double t4316;
  double t4365;
  double t4370;
  double t4439;
  double t4459;
  double t4470;
  double t4482;
  double t4501;
  double t4505;
  double t4510;
  double t4553;
  double t4555;
  double t4596;
  double t4763;
  double t4764;
  double t4768;
  double t4795;
  double t4796;
  double t1298;
  double t3255;
  double t3263;
  double t3357;
  double t3458;
  double t3487;
  double t2540;
  double t2736;
  double t2780;
  double t4923;
  double t4937;
  double t4940;
  double t4986;
  double t4987;
  double t4988;
  double t3569;
  double t3575;
  double t3688;
  double t3852;
  double t4052;
  double t4204;
  double t5031;
  double t5037;
  double t5038;
  double t5059;
  double t5073;
  double t5087;
  double t4269;
  double t4282;
  double t4307;
  double t4478;
  double t4485;
  double t4488;
  double t5092;
  double t5108;
  double t5120;
  double t5136;
  double t5139;
  double t5173;
  double t4542;
  double t4544;
  double t4546;
  double t5179;
  double t5185;
  double t5199;
  double t5229;
  double t5230;
  double t5233;
  double t4754;
  double t4773;
  double t4804;
  double t4805;
  double t4816;
  double t4822;
  double t4825;
  double t4834;
  double t4859;
  double t4871;
  double t4872;
  double t4875;
  double t4906;
  double t4966;
  double t4997;
  double t4998;
  double t5014;
  double t5017;
  double t5056;
  double t5090;
  double t5130;
  double t5175;
  double t5217;
  double t5245;
  double t5253;
  double t5260;
  double t5267;
  double t5270;
  double t5282;
  double t5286;
  double t5328;
  double t5338;
  double t5348;
  double t5403;
  double t5410;
  double t5427;
  double t5440;
  double t5469;
  double t5489;
  double t5506;
  double t5514;
  double t5541;
  double t5552;
  double t5572;
  double t5607;
  double t5610;
  double t5641;
  double t5656;
  double t5668;
  double t5678;
  double t5685;
  double t5705;
  double t5709;
  double t5717;
  double t5735;
  double t5751;
  double t5784;
  double t472;
  double t553;
  double t664;
  double t1102;
  double t1441;
  double t6026;
  double t6031;
  double t6038;
  double t6054;
  double t6061;
  double t6074;
  double t6079;
  double t6081;
  double t6099;
  double t6104;
  double t6150;
  double t6153;
  double t5808;
  double t5814;
  double t5845;
  double t5856;
  double t5860;
  double t5867;
  double t5350;
  double t5352;
  double t5371;
  double t5379;
  double t5387;
  double t5402;
  double t5434;
  double t5503;
  double t5550;
  double t5609;
  double t5667;
  double t5687;
  double t5724;
  double t5804;
  double t5848;
  double t5873;
  double t5914;
  double t5915;
  double t5984;
  double t5986;
  double t6619;
  double t6620;
  double t6629;
  double t6636;
  double t6658;
  double t6660;
  double t6696;
  double t6711;
  double t6723;
  double t6776;
  double t6786;
  double t6807;
  double t6893;
  double t6926;
  double t7067;
  double t7103;
  double t7104;
  double t7120;
  double t7164;
  double t7196;
  double t7221;
  double t7487;
  double t7490;
  double t7493;
  double t7532;
  double t7579;
  double t7613;
  double t7627;
  double t7641;
  double t7643;
  double t7698;
  double t7701;
  double t7715;
  double t7719;
  double t7737;
  double t7749;
  double t7763;
  double t7769;
  double t7770;
  double t7776;
  double t7782;
  double t7788;
  double t6258;
  double t6262;
  double t6272;
  double t6284;
  double t6293;
  double t6296;
  double t6301;
  double t6314;
  double t6360;
  double t6363;
  double t6376;
  double t6383;
  double t6387;
  double t6405;
  double t6421;
  double t6427;
  double t8007;
  double t8017;
  double t8022;
  double t8066;
  double t8078;
  double t8108;
  double t8158;
  double t8162;
  double t8164;
  double t8192;
  double t8204;
  double t8231;
  double t8236;
  double t8243;
  double t8244;
  double t8246;
  double t8251;
  double t8254;
  double t8260;
  double t8267;
  double t8286;
  double t8413;
  double t8414;
  double t8459;
  double t8488;
  double t8490;
  double t8491;
  double t8507;
  double t8508;
  double t8526;
  double t8544;
  double t8552;
  double t8560;
  double t8595;
  double t8599;
  double t8603;
  double t8605;
  double t8606;
  double t8611;
  double t8621;
  double t8624;
  double t8628;
  double t8756;
  double t8758;
  double t8762;
  double t8765;
  double t8766;
  double t8768;
  double t8772;
  double t8773;
  double t8782;
  double t8784;
  double t8785;
  double t8789;
  double t8791;
  double t8797;
  double t8725;
  double t8727;
  double t8744;
  double t8749;
  double t8751;
  double t8852;
  double t8853;
  double t8854;
  double t8857;
  double t8858;
  double t8861;
  double t8862;
  double t8863;
  double t8865;
  double t8866;
  double t8867;
  double t8869;
  double t8870;
  double t8872;
  double t8897;
  double t8903;
  double t8906;
  double t8909;
  double t8910;
  double t6006;
  double t8950;
  double t8952;
  double t8954;
  double t8957;
  double t8958;
  double t8961;
  double t8962;
  double t8963;
  double t8967;
  double t8971;
  double t8973;
  double t8975;
  double t8976;
  double t8977;
  double t8980;
  double t8981;
  double t8982;
  double t8985;
  double t8986;
  double t8987;
  double t8990;
  double t8991;
  double t8992;
  double t9029;
  double t9030;
  double t9035;
  double t9036;
  double t9042;
  double t9045;
  double t9046;
  double t9014;
  double t9015;
  double t9016;
  double t9021;
  double t9022;
  double t9025;
  double t9026;
  double t9027;
  double t9032;
  double t9033;
  double t9067;
  double t9069;
  double t9073;
  double t9074;
  double t9081;
  double t9082;
  double t9083;
  t84 = Sin(var1[3]);
  t188 = Cos(var1[7]);
  t542 = Sin(var1[7]);
  t684 = Cos(var1[3]);
  t897 = Cos(var1[6]);
  t918 = t684*t897;
  t1038 = Cos(var1[4]);
  t1051 = Sin(var1[6]);
  t1054 = -1.*t1038*t84*t1051;
  t1097 = t918 + t1054;
  t120 = Sin(var1[4]);
  t2905 = t188*t1097;
  t2979 = -1.*t84*t120*t542;
  t2986 = t2905 + t2979;
  t2067 = Cos(var1[8]);
  t2178 = Cos(var1[9]);
  t2383 = -1.*t2178;
  t2415 = 1. + t2383;
  t2714 = Sin(var1[9]);
  t3443 = Sin(var1[8]);
  t3719 = -1.*var1[9];
  t3761 = 0.226893 + t3719;
  t3788 = Cos(t3761);
  t3810 = -1.*t3788;
  t3839 = 1. + t3810;
  t3954 = Sin(t3761);
  t4207 = -1.*t2067*t2714*t2986;
  t4212 = -1.*t2178*t2986*t3443;
  t4216 = t4207 + t4212;
  t4316 = t2178*t2067*t2986;
  t4365 = -1.*t2714*t2986*t3443;
  t4370 = t4316 + t4365;
  t4439 = Cos(var1[13]);
  t4459 = -1.*t4439;
  t4470 = 1. + t4459;
  t4482 = Sin(var1[13]);
  t4501 = t3954*t4216;
  t4505 = t3788*t4370;
  t4510 = t4501 + t4505;
  t4553 = t3788*t4216;
  t4555 = -1.*t3954*t4370;
  t4596 = t4553 + t4555;
  t4763 = t897*t84;
  t4764 = t684*t1038*t1051;
  t4768 = t4763 + t4764;
  t4795 = -1.*t188;
  t4796 = 1. + t4795;
  t1298 = 0.135*t542;
  t3255 = -1.*t2067;
  t3263 = 1. + t3255;
  t3357 = -0.049*t3263;
  t3458 = -0.09*t3443;
  t3487 = t3357 + t3458;
  t2540 = -0.049*t2415;
  t2736 = -0.21*t2714;
  t2780 = t2540 + t2736;
  t4923 = -1.*t684*t188*t120;
  t4937 = t4768*t542;
  t4940 = t4923 + t4937;
  t4986 = t684*t1038*t897;
  t4987 = -1.*t84*t1051;
  t4988 = t4986 + t4987;
  t3569 = -0.21*t2415;
  t3575 = 0.049*t2714;
  t3688 = t3569 + t3575;
  t3852 = -0.70544*t3839;
  t4052 = -0.01841*t3954;
  t4204 = t3852 + t4052;
  t5031 = t2067*t4940;
  t5037 = t4988*t3443;
  t5038 = t5031 + t5037;
  t5059 = t2067*t4988;
  t5073 = -1.*t4940*t3443;
  t5087 = t5059 + t5073;
  t4269 = 0.01841*t3839;
  t4282 = -0.70544*t3954;
  t4307 = t4269 + t4282;
  t4478 = -0.02159*t4470;
  t4485 = -1.11344*t4482;
  t4488 = t4478 + t4485;
  t5092 = -1.*t2714*t5038;
  t5108 = t2178*t5087;
  t5120 = t5092 + t5108;
  t5136 = t2178*t5038;
  t5139 = t2714*t5087;
  t5173 = t5136 + t5139;
  t4542 = -1.11344*t4470;
  t4544 = 0.02159*t4482;
  t4546 = t4542 + t4544;
  t5179 = t3954*t5120;
  t5185 = t3788*t5173;
  t5199 = t5179 + t5185;
  t5229 = t3788*t5120;
  t5230 = -1.*t3954*t5173;
  t5233 = t5229 + t5230;
  t4754 = 0.049*t684*t120;
  t4773 = 0.135*t4768;
  t4804 = 0.135*t4796;
  t4805 = 0.049*t542;
  t4816 = t4804 + t4805;
  t4822 = -1.*t4768*t4816;
  t4825 = -0.049*t4796;
  t4834 = t4825 + t1298;
  t4859 = t684*t120*t4834;
  t4871 = t188*t4768;
  t4872 = t684*t120*t542;
  t4875 = t4871 + t4872;
  t4906 = -0.1305*t4875;
  t4966 = -1.*t4940*t3487;
  t4997 = -0.09*t3263;
  t4998 = 0.049*t3443;
  t5014 = t4997 + t4998;
  t5017 = -1.*t4988*t5014;
  t5056 = -1.*t2780*t5038;
  t5090 = -1.*t3688*t5087;
  t5130 = -1.*t4204*t5120;
  t5175 = -1.*t4307*t5173;
  t5217 = -1.*t4488*t5199;
  t5245 = -1.*t4546*t5233;
  t5253 = -1.*t4482*t5199;
  t5260 = t4439*t5233;
  t5267 = t5253 + t5260;
  t5270 = 1.11344*t5267;
  t5282 = t4439*t5199;
  t5286 = t4482*t5233;
  t5328 = t5282 + t5286;
  t5338 = 0.02159*t5328;
  t5348 = t4754 + t4773 + t4822 + t4859 + t4906 + t4966 + t5017 + t5056 + t5090 + t5130 + t5175 + t5217 + t5245 + t5270 + t5338;
  t5403 = t188*t84*t120;
  t5410 = t1097*t542;
  t5427 = t5403 + t5410;
  t5440 = -1.*t1038*t897*t84;
  t5469 = -1.*t684*t1051;
  t5489 = t5440 + t5469;
  t5506 = t2067*t5427;
  t5514 = t5489*t3443;
  t5541 = t5506 + t5514;
  t5552 = t2067*t5489;
  t5572 = -1.*t5427*t3443;
  t5607 = t5552 + t5572;
  t5610 = -1.*t2714*t5541;
  t5641 = t2178*t5607;
  t5656 = t5610 + t5641;
  t5668 = t2178*t5541;
  t5678 = t2714*t5607;
  t5685 = t5668 + t5678;
  t5705 = t3954*t5656;
  t5709 = t3788*t5685;
  t5717 = t5705 + t5709;
  t5735 = t3788*t5656;
  t5751 = -1.*t3954*t5685;
  t5784 = t5735 + t5751;
  t472 = 0.135*t188;
  t553 = -0.049*t542;
  t664 = t472 + t553;
  t1102 = 0.049*t188;
  t1441 = t1102 + t1298;
  t6026 = -1.*t2067*t2714*t4875;
  t6031 = -1.*t2178*t4875*t3443;
  t6038 = t6026 + t6031;
  t6054 = t2178*t2067*t4875;
  t6061 = -1.*t2714*t4875*t3443;
  t6074 = t6054 + t6061;
  t6079 = t3954*t6038;
  t6081 = t3788*t6074;
  t6099 = t6079 + t6081;
  t6104 = t3788*t6038;
  t6150 = -1.*t3954*t6074;
  t6153 = t6104 + t6150;
  t5808 = -1.*t4482*t5717;
  t5814 = t4439*t5784;
  t5845 = t5808 + t5814;
  t5856 = t4439*t5717;
  t5860 = t4482*t5784;
  t5867 = t5856 + t5860;
  t5350 = Power(t5348,2);
  t5352 = 0.049*t84*t120;
  t5371 = -0.135*t1097;
  t5379 = t1097*t4816;
  t5387 = t84*t120*t4834;
  t5402 = 0.1305*t2986;
  t5434 = t5427*t3487;
  t5503 = t5489*t5014;
  t5550 = t2780*t5541;
  t5609 = t3688*t5607;
  t5667 = t4204*t5656;
  t5687 = t4307*t5685;
  t5724 = t4488*t5717;
  t5804 = t4546*t5784;
  t5848 = -1.11344*t5845;
  t5873 = -0.02159*t5867;
  t5914 = t5352 + t5371 + t5379 + t5387 + t5402 + t5434 + t5503 + t5550 + t5609 + t5667 + t5687 + t5724 + t5804 + t5848 + t5873;
  t5915 = Power(t5914,2);
  t5984 = t5350 + t5915;
  t5986 = 1/t5984;
  t6619 = -1.*t684*t897;
  t6620 = t1038*t84*t1051;
  t6629 = t6619 + t6620;
  t6636 = t2067*t5489*t542;
  t6658 = t6629*t3443;
  t6660 = t6636 + t6658;
  t6696 = t2067*t6629;
  t6711 = -1.*t5489*t542*t3443;
  t6723 = t6696 + t6711;
  t6776 = -1.*t2714*t6660;
  t6786 = t2178*t6723;
  t6807 = t6776 + t6786;
  t6893 = t2178*t6660;
  t6926 = t2714*t6723;
  t7067 = t6893 + t6926;
  t7103 = t3954*t6807;
  t7104 = t3788*t7067;
  t7120 = t7103 + t7104;
  t7164 = t3788*t6807;
  t7196 = -1.*t3954*t7067;
  t7221 = t7164 + t7196;
  t7487 = -1.*t897*t84;
  t7490 = -1.*t684*t1038*t1051;
  t7493 = t7487 + t7490;
  t7532 = t2067*t4988*t542;
  t7579 = t7493*t3443;
  t7613 = t7532 + t7579;
  t7627 = t2067*t7493;
  t7641 = -1.*t4988*t542*t3443;
  t7643 = t7627 + t7641;
  t7698 = -1.*t2714*t7613;
  t7701 = t2178*t7643;
  t7715 = t7698 + t7701;
  t7719 = t2178*t7613;
  t7737 = t2714*t7643;
  t7749 = t7719 + t7737;
  t7763 = t3954*t7715;
  t7769 = t3788*t7749;
  t7770 = t7763 + t7769;
  t7776 = t3788*t7715;
  t7782 = -1.*t3954*t7749;
  t7788 = t7776 + t7782;
  t6258 = -0.049*t84*t120;
  t6262 = 0.135*t1097;
  t6272 = -1.*t1097*t4816;
  t6284 = -1.*t84*t120*t4834;
  t6293 = -0.1305*t2986;
  t6296 = -1.*t5427*t3487;
  t6301 = -1.*t5489*t5014;
  t6314 = -1.*t2780*t5541;
  t6360 = -1.*t3688*t5607;
  t6363 = -1.*t4204*t5656;
  t6376 = -1.*t4307*t5685;
  t6383 = -1.*t4488*t5717;
  t6387 = -1.*t4546*t5784;
  t6405 = 1.11344*t5845;
  t6421 = 0.02159*t5867;
  t6427 = t6258 + t6262 + t6272 + t6284 + t6293 + t6296 + t6301 + t6314 + t6360 + t6363 + t6376 + t6383 + t6387 + t6405 + t6421;
  t8007 = t1038*t188*t84;
  t8017 = t84*t120*t1051*t542;
  t8022 = t8007 + t8017;
  t8066 = t2067*t8022;
  t8078 = t897*t84*t120*t3443;
  t8108 = t8066 + t8078;
  t8158 = t897*t2067*t84*t120;
  t8162 = -1.*t8022*t3443;
  t8164 = t8158 + t8162;
  t8192 = -1.*t2714*t8108;
  t8204 = t2178*t8164;
  t8231 = t8192 + t8204;
  t8236 = t2178*t8108;
  t8243 = t2714*t8164;
  t8244 = t8236 + t8243;
  t8246 = t3954*t8231;
  t8251 = t3788*t8244;
  t8254 = t8246 + t8251;
  t8260 = t3788*t8231;
  t8267 = -1.*t3954*t8244;
  t8286 = t8260 + t8267;
  t8413 = -1.*t684*t1038*t188;
  t8414 = -1.*t684*t120*t1051*t542;
  t8459 = t8413 + t8414;
  t8488 = t2067*t8459;
  t8490 = -1.*t684*t897*t120*t3443;
  t8491 = t8488 + t8490;
  t8507 = -1.*t684*t897*t2067*t120;
  t8508 = -1.*t8459*t3443;
  t8526 = t8507 + t8508;
  t8544 = -1.*t2714*t8491;
  t8552 = t2178*t8526;
  t8560 = t8544 + t8552;
  t8595 = t2178*t8491;
  t8599 = t2714*t8526;
  t8603 = t8595 + t8599;
  t8605 = t3954*t8560;
  t8606 = t3788*t8603;
  t8611 = t8605 + t8606;
  t8621 = t3788*t8560;
  t8624 = -1.*t3954*t8603;
  t8628 = t8621 + t8624;
  t8756 = -1.*t2067*t5427;
  t8758 = -1.*t5489*t3443;
  t8762 = t8756 + t8758;
  t8765 = t2714*t8762;
  t8766 = t8765 + t5641;
  t8768 = t2178*t8762;
  t8772 = -1.*t2714*t5607;
  t8773 = t8768 + t8772;
  t8782 = -1.*t3954*t8766;
  t8784 = t3788*t8773;
  t8785 = t8782 + t8784;
  t8789 = t3788*t8766;
  t8791 = t3954*t8773;
  t8797 = t8789 + t8791;
  t8725 = 0.049*t2067;
  t8727 = t8725 + t3458;
  t8744 = -0.09*t2067;
  t8749 = -0.049*t3443;
  t8751 = t8744 + t8749;
  t8852 = -1.*t2067*t4940;
  t8853 = -1.*t4988*t3443;
  t8854 = t8852 + t8853;
  t8857 = t2714*t8854;
  t8858 = t8857 + t5108;
  t8861 = t2178*t8854;
  t8862 = -1.*t2714*t5087;
  t8863 = t8861 + t8862;
  t8865 = -1.*t3954*t8858;
  t8866 = t3788*t8863;
  t8867 = t8865 + t8866;
  t8869 = t3788*t8858;
  t8870 = t3954*t8863;
  t8872 = t8869 + t8870;
  t8897 = -1.11344*t4439;
  t8903 = -0.02159*t4482;
  t8906 = t8897 + t8903;
  t8909 = 0.02159*t4439;
  t8910 = t8909 + t4485;
  t6006 = t684*t188*t120;
  t8950 = t7493*t542;
  t8952 = t6006 + t8950;
  t8954 = -1.*t684*t1038*t897;
  t8957 = t84*t1051;
  t8958 = t8954 + t8957;
  t8961 = t2067*t8952;
  t8962 = t8958*t3443;
  t8963 = t8961 + t8962;
  t8967 = t2067*t8958;
  t8971 = -1.*t8952*t3443;
  t8973 = t8967 + t8971;
  t8975 = -1.*t2714*t8963;
  t8976 = t2178*t8973;
  t8977 = t8975 + t8976;
  t8980 = t2178*t8963;
  t8981 = t2714*t8973;
  t8982 = t8980 + t8981;
  t8985 = t3954*t8977;
  t8986 = t3788*t8982;
  t8987 = t8985 + t8986;
  t8990 = t3788*t8977;
  t8991 = -1.*t3954*t8982;
  t8992 = t8990 + t8991;
  t9029 = -1.*t2178*t5038;
  t9030 = t9029 + t8862;
  t9035 = t3788*t9030;
  t9036 = t9035 + t5185;
  t9042 = t3954*t9030;
  t9045 = t3954*t5173;
  t9046 = t9042 + t9045;
  t9014 = -0.21*t2178;
  t9015 = -0.049*t2714;
  t9016 = t9014 + t9015;
  t9021 = 0.049*t2178;
  t9022 = t9021 + t2736;
  t9025 = 0.01841*t3788;
  t9026 = 0.70544*t3954;
  t9027 = t9025 + t9026;
  t9032 = 0.70544*t3788;
  t9033 = t9032 + t4052;
  t9067 = -1.*t2178*t5541;
  t9069 = t9067 + t8772;
  t9073 = t3788*t9069;
  t9074 = t9073 + t5709;
  t9081 = t3954*t9069;
  t9082 = t3954*t5685;
  t9083 = t9081 + t9082;
  p_output1[0]=(t5986*Power(t6427,2) + t5348*t5986*(t4754 + t4859 - 0.135*t7493 + t4816*t7493 + 0.1305*(-1.*t120*t542*t684 + t188*t7493) + t3487*t8952 + t5014*t8958 + t2780*t8963 + t3688*t8973 + t4204*t8977 + t4307*t8982 + t4488*t8987 + t4546*t8992 - 1.11344*(-1.*t4482*t8987 + t4439*t8992) - 0.02159*(t4439*t8987 + t4482*t8992)))*var2[3] + (t5986*t6427*(0.049*t1038*t684 - 0.135*t1051*t120*t684 + t1051*t120*t4816*t684 + t1038*t4834*t684 - 0.1305*(-1.*t1051*t120*t188*t684 + t1038*t542*t684) - 1.*t3487*t8459 - 1.*t2780*t8491 - 1.*t3688*t8526 - 1.*t4204*t8560 - 1.*t4307*t8603 - 1.*t4488*t8611 - 1.*t4546*t8628 + 1.11344*(-1.*t4482*t8611 + t4439*t8628) + 0.02159*(t4439*t8611 + t4482*t8628) + t120*t5014*t684*t897) + t5348*t5986*(t3487*t8022 + t2780*t8108 + t3688*t8164 + t4204*t8231 + t4307*t8244 + t4488*t8254 + t4546*t8286 - 1.11344*(-1.*t4482*t8254 + t4439*t8286) - 0.02159*(t4439*t8254 + t4482*t8286) + 0.049*t1038*t84 - 0.135*t1051*t120*t84 + t1051*t120*t4816*t84 + t1038*t4834*t84 + 0.1305*(t1051*t120*t188*t84 - 1.*t1038*t542*t84) + t120*t5014*t84*t897))*var2[4] + (t5348*t5986*(-0.135*t5489 + 0.1305*t188*t5489 + t4816*t5489 + t3487*t542*t5489 + t5014*t6629 + t2780*t6660 + t3688*t6723 + t4204*t6807 + t4307*t7067 + t4488*t7120 + t4546*t7221 - 1.11344*(-1.*t4482*t7120 + t4439*t7221) - 0.02159*(t4439*t7120 + t4482*t7221)) + t5986*t6427*(0.135*t4988 - 0.1305*t188*t4988 - 1.*t4816*t4988 - 1.*t3487*t4988*t542 - 1.*t5014*t7493 - 1.*t2780*t7613 - 1.*t3688*t7643 - 1.*t4204*t7715 - 1.*t4307*t7749 - 1.*t4488*t7770 - 1.*t4546*t7788 + 1.11344*(-1.*t4482*t7770 + t4439*t7788) + 0.02159*(t4439*t7770 + t4482*t7788)))*var2[6] + (t5986*t6427*(-1.*t1441*t4768 - 1.*t2067*t2780*t4875 - 1.*t3487*t4875 + t3443*t3688*t4875 - 0.1305*(-1.*t4768*t542 + t6006) - 1.*t4204*t6038 - 1.*t4307*t6074 - 1.*t4488*t6099 - 1.*t4546*t6153 + 1.11344*(-1.*t4482*t6099 + t4439*t6153) + 0.02159*(t4439*t6099 + t4482*t6153) + t120*t664*t684) + t5348*t5986*(t1097*t1441 + t2067*t2780*t2986 + t2986*t3487 - 1.*t2986*t3443*t3688 + t4204*t4216 + t4307*t4370 + t4488*t4510 + t4546*t4596 - 1.11344*(-1.*t4482*t4510 + t4439*t4596) - 0.02159*(t4439*t4510 + t4482*t4596) + t120*t664*t84 + 0.1305*(-1.*t1097*t542 - 1.*t120*t188*t84)))*var2[7] + (t5348*t5986*(t2780*t5607 + t5489*t8727 + t5427*t8751 + t3688*t8762 + t4307*t8766 + t4204*t8773 + t4546*t8785 + t4488*t8797 - 0.02159*(t4482*t8785 + t4439*t8797) - 1.11344*(t4439*t8785 - 1.*t4482*t8797)) + t5986*t6427*(-1.*t2780*t5087 - 1.*t4988*t8727 - 1.*t4940*t8751 - 1.*t3688*t8854 - 1.*t4307*t8858 - 1.*t4204*t8863 - 1.*t4546*t8867 - 1.*t4488*t8872 + 0.02159*(t4482*t8867 + t4439*t8872) + 1.11344*(t4439*t8867 - 1.*t4482*t8872)))*var2[8] + (t5986*t6427*(-1.*t4307*t5120 - 1.*t5038*t9016 - 1.*t5087*t9022 - 1.*t5120*t9027 - 1.*t4204*t9030 - 1.*t5173*t9033 - 1.*t4546*t9036 - 1.*t4488*t9046 + 0.02159*(t4482*t9036 + t4439*t9046) + 1.11344*(t4439*t9036 - 1.*t4482*t9046)) + t5348*t5986*(t4307*t5656 + t5541*t9016 + t5607*t9022 + t5656*t9027 + t5685*t9033 + t4204*t9069 + t4546*t9074 + t4488*t9083 - 0.02159*(t4482*t9074 + t4439*t9083) - 1.11344*(t4439*t9074 - 1.*t4482*t9083)))*var2[9] + (t5986*t6427*(1.11344*(-1.*t4439*t5199 - 1.*t4482*t5233) + 0.02159*t5267 - 1.*t5199*t8906 - 1.*t5233*t8910) + t5348*t5986*(-1.11344*(-1.*t4439*t5717 - 1.*t4482*t5784) - 0.02159*t5845 + t5717*t8906 + t5784*t8910))*var2[13];
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

void leftLegRollVelocity_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}




