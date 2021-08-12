/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:57 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "rightLegRollVelocity.hh"
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
  double t124;
  double t148;
  double t173;
  double t204;
  double t235;
  double t316;
  double t356;
  double t530;
  double t595;
  double t782;
  double t1181;
  double t1194;
  double t1215;
  double t1339;
  double t1456;
  double t1482;
  double t1542;
  double t1662;
  double t1673;
  double t1677;
  double t1689;
  double t2483;
  double t2502;
  double t1803;
  double t1813;
  double t1829;
  double t2239;
  double t2242;
  double t2345;
  double t2532;
  double t2536;
  double t2539;
  double t2664;
  double t2708;
  double t2748;
  double t2752;
  double t2834;
  double t2840;
  double t2845;
  double t2874;
  double t2907;
  double t2932;
  double t3006;
  double t3089;
  double t3090;
  double t3099;
  double t3240;
  double t3249;
  double t3383;
  double t665;
  double t685;
  double t699;
  double t1127;
  double t1128;
  double t3779;
  double t3792;
  double t3794;
  double t1390;
  double t1437;
  double t1448;
  double t4032;
  double t1266;
  double t1365;
  double t1381;
  double t2035;
  double t2060;
  double t2107;
  double t3849;
  double t3907;
  double t4018;
  double t4122;
  double t4158;
  double t4194;
  double t1685;
  double t1692;
  double t1697;
  double t2778;
  double t2825;
  double t2831;
  double t4324;
  double t4491;
  double t4524;
  double t4547;
  double t4566;
  double t4610;
  double t2649;
  double t2680;
  double t2694;
  double t3118;
  double t3119;
  double t3130;
  double t4754;
  double t4796;
  double t4830;
  double t4850;
  double t4864;
  double t4874;
  double t2942;
  double t3007;
  double t3077;
  double t5007;
  double t5020;
  double t5046;
  double t5133;
  double t5136;
  double t5142;
  double t3815;
  double t3848;
  double t4030;
  double t4051;
  double t4060;
  double t4067;
  double t4105;
  double t4107;
  double t4197;
  double t4232;
  double t4267;
  double t4284;
  double t4299;
  double t4546;
  double t4743;
  double t4847;
  double t5002;
  double t5125;
  double t5144;
  double t5146;
  double t5153;
  double t5157;
  double t5168;
  double t5180;
  double t5196;
  double t5225;
  double t5230;
  double t5270;
  double t5287;
  double t5297;
  double t5311;
  double t5388;
  double t5426;
  double t5464;
  double t5584;
  double t5673;
  double t5682;
  double t5742;
  double t5773;
  double t5781;
  double t5797;
  double t5812;
  double t5834;
  double t5846;
  double t5864;
  double t5868;
  double t5880;
  double t5891;
  double t5904;
  double t5919;
  double t5929;
  double t5950;
  double t6247;
  double t6277;
  double t6315;
  double t6366;
  double t6367;
  double t6383;
  double t6434;
  double t6457;
  double t6458;
  double t6464;
  double t6466;
  double t6472;
  double t6481;
  double t6490;
  double t6498;
  double t6525;
  double t6526;
  double t6530;
  double t6570;
  double t6575;
  double t6588;
  double t5506;
  double t5565;
  double t5567;
  double t5973;
  double t6072;
  double t6078;
  double t6150;
  double t6178;
  double t6180;
  double t5282;
  double t5286;
  double t5320;
  double t5333;
  double t5363;
  double t5381;
  double t5469;
  double t5572;
  double t5710;
  double t5783;
  double t5839;
  double t5872;
  double t5909;
  double t5972;
  double t6136;
  double t6200;
  double t6216;
  double t6224;
  double t6228;
  double t6231;
  double t6895;
  double t6896;
  double t6903;
  double t6905;
  double t6906;
  double t6909;
  double t6915;
  double t6922;
  double t6923;
  double t6937;
  double t6938;
  double t6941;
  double t6841;
  double t6847;
  double t6855;
  double t6856;
  double t6859;
  double t7022;
  double t7023;
  double t7025;
  double t7028;
  double t7030;
  double t7031;
  double t7033;
  double t7034;
  double t7036;
  double t7041;
  double t7045;
  double t7050;
  double t6641;
  double t6642;
  double t6643;
  double t6653;
  double t6654;
  double t6730;
  double t6734;
  double t6737;
  double t6746;
  double t6748;
  double t6756;
  double t6765;
  double t6775;
  double t6789;
  double t6800;
  double t6803;
  double t7098;
  double t7099;
  double t7101;
  double t7107;
  double t7109;
  double t7111;
  double t7112;
  double t7113;
  double t7116;
  double t7117;
  double t7119;
  double t7121;
  double t7122;
  double t7123;
  double t7085;
  double t7086;
  double t7089;
  double t7090;
  double t7095;
  double t7174;
  double t7178;
  double t7179;
  double t7182;
  double t7184;
  double t7187;
  double t7188;
  double t7190;
  double t7192;
  double t7195;
  double t7199;
  double t7214;
  double t7215;
  double t7220;
  double t7247;
  double t7248;
  double t7249;
  double t7253;
  double t7254;
  double t7005;
  double t7290;
  double t7292;
  double t7293;
  double t7295;
  double t7301;
  double t7310;
  double t7312;
  double t7313;
  double t7315;
  double t7316;
  double t7317;
  double t7319;
  double t7320;
  double t7322;
  double t7324;
  double t7325;
  double t7326;
  double t7328;
  double t7329;
  double t7330;
  double t7332;
  double t7333;
  double t7336;
  double t7385;
  double t7386;
  double t7400;
  double t7407;
  double t7413;
  double t7416;
  double t7419;
  double t7363;
  double t7367;
  double t7369;
  double t7372;
  double t7374;
  double t7379;
  double t7381;
  double t7382;
  double t7388;
  double t7395;
  double t7441;
  double t7442;
  double t7450;
  double t7453;
  double t7459;
  double t7461;
  double t7462;
  double t7491;
  double t7492;
  double t7493;
  double t7496;
  double t7498;
  double t7499;
  double t7501;
  double t7502;
  double t7503;
  double t7505;
  double t7506;
  double t7507;
  double t7509;
  double t7510;
  double t7511;
  double t7513;
  double t7514;
  double t7515;
  double t7519;
  double t7520;
  double t7521;
  double t7547;
  double t7549;
  double t7550;
  double t7552;
  double t7554;
  double t7555;
  double t7557;
  double t7558;
  double t7559;
  double t7561;
  double t7562;
  double t7563;
  double t7566;
  double t7568;
  double t7569;
  double t7571;
  double t7572;
  double t7573;
  double t7575;
  double t7576;
  double t7577;
  t124 = Cos(var1[3]);
  t148 = Sin(var1[14]);
  t173 = -1.*t124*t148;
  t204 = Cos(var1[14]);
  t235 = Cos(var1[4]);
  t316 = Sin(var1[3]);
  t356 = -1.*t204*t235*t316;
  t530 = t173 + t356;
  t595 = Cos(var1[15]);
  t782 = Sin(var1[15]);
  t1181 = Cos(var1[16]);
  t1194 = -1.*t1181;
  t1215 = 1. + t1194;
  t1339 = Sin(var1[16]);
  t1456 = -1.*t204*t124;
  t1482 = t235*t148*t316;
  t1542 = t1456 + t1482;
  t1662 = Cos(var1[17]);
  t1673 = -1.*t1662;
  t1677 = 1. + t1673;
  t1689 = Sin(var1[17]);
  t2483 = -1.*var1[17];
  t2502 = 0.226893 + t2483;
  t1803 = -1.*t782*t1339*t530;
  t1813 = t1181*t1542;
  t1829 = t1803 + t1813;
  t2239 = t1181*t782*t530;
  t2242 = t1339*t1542;
  t2345 = t2239 + t2242;
  t2532 = Cos(t2502);
  t2536 = -1.*t2532;
  t2539 = 1. + t2536;
  t2664 = Sin(t2502);
  t2708 = t1689*t1829;
  t2748 = t1662*t2345;
  t2752 = t2708 + t2748;
  t2834 = t1662*t1829;
  t2840 = -1.*t1689*t2345;
  t2845 = t2834 + t2840;
  t2874 = Cos(var1[21]);
  t2907 = -1.*t2874;
  t2932 = 1. + t2907;
  t3006 = Sin(var1[21]);
  t3089 = -1.*t2664*t2752;
  t3090 = t2532*t2845;
  t3099 = t3089 + t3090;
  t3240 = t2532*t2752;
  t3249 = t2664*t2845;
  t3383 = t3240 + t3249;
  t665 = -1.*t595;
  t685 = 1. + t665;
  t699 = -0.135*t685;
  t1127 = 0.049*t782;
  t1128 = t699 + t1127;
  t3779 = t124*t235*t148;
  t3792 = t204*t316;
  t3794 = t3779 + t3792;
  t1390 = -0.09*t1215;
  t1437 = 0.049*t1339;
  t1448 = t1390 + t1437;
  t4032 = Sin(var1[4]);
  t1266 = -0.049*t1215;
  t1365 = -0.09*t1339;
  t1381 = t1266 + t1365;
  t2035 = -0.049*t1677;
  t2060 = -0.21*t1689;
  t2107 = t2035 + t2060;
  t3849 = t204*t124*t235;
  t3907 = -1.*t148*t316;
  t4018 = t3849 + t3907;
  t4122 = t782*t3794;
  t4158 = -1.*t595*t124*t4032;
  t4194 = t4122 + t4158;
  t1685 = -0.21*t1677;
  t1692 = 0.049*t1689;
  t1697 = t1685 + t1692;
  t2778 = -0.70544*t2539;
  t2825 = -0.01841*t2664;
  t2831 = t2778 + t2825;
  t4324 = t1339*t4018;
  t4491 = t1181*t4194;
  t4524 = t4324 + t4491;
  t4547 = t1181*t4018;
  t4566 = -1.*t1339*t4194;
  t4610 = t4547 + t4566;
  t2649 = 0.01841*t2539;
  t2680 = -0.70544*t2664;
  t2694 = t2649 + t2680;
  t3118 = -0.02159*t2932;
  t3119 = -1.11344*t3006;
  t3130 = t3118 + t3119;
  t4754 = -1.*t1689*t4524;
  t4796 = t1662*t4610;
  t4830 = t4754 + t4796;
  t4850 = t1662*t4524;
  t4864 = t1689*t4610;
  t4874 = t4850 + t4864;
  t2942 = -1.11344*t2932;
  t3007 = 0.02159*t3006;
  t3077 = t2942 + t3007;
  t5007 = t2664*t4830;
  t5020 = t2532*t4874;
  t5046 = t5007 + t5020;
  t5133 = t2532*t4830;
  t5136 = -1.*t2664*t4874;
  t5142 = t5133 + t5136;
  t3815 = -0.135*t3794;
  t3848 = -1.*t1128*t3794;
  t4030 = -1.*t1448*t4018;
  t4051 = 0.049*t124*t4032;
  t4060 = -0.049*t685;
  t4067 = -0.135*t782;
  t4105 = t4060 + t4067;
  t4107 = t124*t4105*t4032;
  t4197 = -1.*t1381*t4194;
  t4232 = t595*t3794;
  t4267 = t124*t782*t4032;
  t4284 = t4232 + t4267;
  t4299 = 0.1305*t4284;
  t4546 = -1.*t2107*t4524;
  t4743 = -1.*t1697*t4610;
  t4847 = -1.*t2831*t4830;
  t5002 = -1.*t2694*t4874;
  t5125 = -1.*t3130*t5046;
  t5144 = -1.*t3077*t5142;
  t5146 = -1.*t3006*t5046;
  t5153 = t2874*t5142;
  t5157 = t5146 + t5153;
  t5168 = 1.11344*t5157;
  t5180 = t2874*t5046;
  t5196 = t3006*t5142;
  t5225 = t5180 + t5196;
  t5230 = 0.02159*t5225;
  t5270 = t3815 + t3848 + t4030 + t4051 + t4107 + t4197 + t4299 + t4546 + t4743 + t4847 + t5002 + t5125 + t5144 + t5168 + t5230;
  t5287 = t204*t124;
  t5297 = -1.*t235*t148*t316;
  t5311 = t5287 + t5297;
  t5388 = t782*t5311;
  t5426 = t595*t316*t4032;
  t5464 = t5388 + t5426;
  t5584 = t1339*t530;
  t5673 = t1181*t5464;
  t5682 = t5584 + t5673;
  t5742 = t1181*t530;
  t5773 = -1.*t1339*t5464;
  t5781 = t5742 + t5773;
  t5797 = -1.*t1689*t5682;
  t5812 = t1662*t5781;
  t5834 = t5797 + t5812;
  t5846 = t1662*t5682;
  t5864 = t1689*t5781;
  t5868 = t5846 + t5864;
  t5880 = t2664*t5834;
  t5891 = t2532*t5868;
  t5904 = t5880 + t5891;
  t5919 = t2532*t5834;
  t5929 = -1.*t2664*t5868;
  t5950 = t5919 + t5929;
  t6247 = -1.*t124*t235*t148;
  t6277 = -1.*t204*t316;
  t6315 = t6247 + t6277;
  t6366 = t1339*t6315;
  t6367 = t1181*t782*t4018;
  t6383 = t6366 + t6367;
  t6434 = t1181*t6315;
  t6457 = -1.*t782*t1339*t4018;
  t6458 = t6434 + t6457;
  t6464 = -1.*t1689*t6383;
  t6466 = t1662*t6458;
  t6472 = t6464 + t6466;
  t6481 = t1662*t6383;
  t6490 = t1689*t6458;
  t6498 = t6481 + t6490;
  t6525 = t2664*t6472;
  t6526 = t2532*t6498;
  t6530 = t6525 + t6526;
  t6570 = t2532*t6472;
  t6575 = -1.*t2664*t6498;
  t6588 = t6570 + t6575;
  t5506 = t595*t5311;
  t5565 = -1.*t782*t316*t4032;
  t5567 = t5506 + t5565;
  t5973 = -1.*t3006*t5904;
  t6072 = t2874*t5950;
  t6078 = t5973 + t6072;
  t6150 = t2874*t5904;
  t6178 = t3006*t5950;
  t6180 = t6150 + t6178;
  t5282 = Power(t5270,2);
  t5286 = t1448*t530;
  t5320 = 0.135*t5311;
  t5333 = t1128*t5311;
  t5363 = 0.049*t316*t4032;
  t5381 = t4105*t316*t4032;
  t5469 = t1381*t5464;
  t5572 = -0.1305*t5567;
  t5710 = t2107*t5682;
  t5783 = t1697*t5781;
  t5839 = t2831*t5834;
  t5872 = t2694*t5868;
  t5909 = t3130*t5904;
  t5972 = t3077*t5950;
  t6136 = -1.11344*t6078;
  t6200 = -0.02159*t6180;
  t6216 = t5286 + t5320 + t5333 + t5363 + t5381 + t5469 + t5572 + t5710 + t5783 + t5839 + t5872 + t5909 + t5972 + t6136 + t6200;
  t6224 = Power(t6216,2);
  t6228 = t5282 + t6224;
  t6231 = 1/t6228;
  t6895 = -1.*t1662*t1339*t5567;
  t6896 = -1.*t1181*t1689*t5567;
  t6903 = t6895 + t6896;
  t6905 = t1181*t1662*t5567;
  t6906 = -1.*t1339*t1689*t5567;
  t6909 = t6905 + t6906;
  t6915 = t2664*t6903;
  t6922 = t2532*t6909;
  t6923 = t6915 + t6922;
  t6937 = t2532*t6903;
  t6938 = -1.*t2664*t6909;
  t6941 = t6937 + t6938;
  t6841 = 0.049*t595;
  t6847 = t6841 + t4067;
  t6855 = -0.135*t595;
  t6856 = -0.049*t782;
  t6859 = t6855 + t6856;
  t7022 = -1.*t1662*t1339*t4284;
  t7023 = -1.*t1181*t1689*t4284;
  t7025 = t7022 + t7023;
  t7028 = t1181*t1662*t4284;
  t7030 = -1.*t1339*t1689*t4284;
  t7031 = t7028 + t7030;
  t7033 = t2664*t7025;
  t7034 = t2532*t7031;
  t7036 = t7033 + t7034;
  t7041 = t2532*t7025;
  t7045 = -1.*t2664*t7031;
  t7050 = t7041 + t7045;
  t6641 = -1.*t1448*t530;
  t6642 = -0.135*t5311;
  t6643 = -1.*t1128*t5311;
  t6653 = -0.049*t316*t4032;
  t6654 = -1.*t4105*t316*t4032;
  t6730 = -1.*t1381*t5464;
  t6734 = 0.1305*t5567;
  t6737 = -1.*t2107*t5682;
  t6746 = -1.*t1697*t5781;
  t6748 = -1.*t2831*t5834;
  t6756 = -1.*t2694*t5868;
  t6765 = -1.*t3130*t5904;
  t6775 = -1.*t3077*t5950;
  t6789 = 1.11344*t6078;
  t6800 = 0.02159*t6180;
  t6803 = t6641 + t6642 + t6643 + t6653 + t6654 + t6730 + t6734 + t6737 + t6746 + t6748 + t6756 + t6765 + t6775 + t6789 + t6800;
  t7098 = -1.*t1339*t530;
  t7099 = -1.*t1181*t5464;
  t7101 = t7098 + t7099;
  t7107 = t1689*t7101;
  t7109 = t7107 + t5812;
  t7111 = t1662*t7101;
  t7112 = -1.*t1689*t5781;
  t7113 = t7111 + t7112;
  t7116 = -1.*t2664*t7109;
  t7117 = t2532*t7113;
  t7119 = t7116 + t7117;
  t7121 = t2532*t7109;
  t7122 = t2664*t7113;
  t7123 = t7121 + t7122;
  t7085 = 0.049*t1181;
  t7086 = t7085 + t1365;
  t7089 = -0.09*t1181;
  t7090 = -0.049*t1339;
  t7095 = t7089 + t7090;
  t7174 = -1.*t1339*t4018;
  t7178 = -1.*t1181*t4194;
  t7179 = t7174 + t7178;
  t7182 = t1689*t7179;
  t7184 = t7182 + t4796;
  t7187 = t1662*t7179;
  t7188 = -1.*t1689*t4610;
  t7190 = t7187 + t7188;
  t7192 = -1.*t2664*t7184;
  t7195 = t2532*t7190;
  t7199 = t7192 + t7195;
  t7214 = t2532*t7184;
  t7215 = t2664*t7190;
  t7220 = t7214 + t7215;
  t7247 = -1.11344*t2874;
  t7248 = -0.02159*t3006;
  t7249 = t7247 + t7248;
  t7253 = 0.02159*t2874;
  t7254 = t7253 + t3119;
  t7005 = t595*t124*t4032;
  t7290 = -1.*t204*t124*t235;
  t7292 = t148*t316;
  t7293 = t7290 + t7292;
  t7295 = t782*t6315;
  t7301 = t7295 + t7005;
  t7310 = t1339*t7293;
  t7312 = t1181*t7301;
  t7313 = t7310 + t7312;
  t7315 = t1181*t7293;
  t7316 = -1.*t1339*t7301;
  t7317 = t7315 + t7316;
  t7319 = -1.*t1689*t7313;
  t7320 = t1662*t7317;
  t7322 = t7319 + t7320;
  t7324 = t1662*t7313;
  t7325 = t1689*t7317;
  t7326 = t7324 + t7325;
  t7328 = t2664*t7322;
  t7329 = t2532*t7326;
  t7330 = t7328 + t7329;
  t7332 = t2532*t7322;
  t7333 = -1.*t2664*t7326;
  t7336 = t7332 + t7333;
  t7385 = -1.*t1662*t4524;
  t7386 = t7385 + t7188;
  t7400 = t2532*t7386;
  t7407 = t7400 + t5020;
  t7413 = t2664*t7386;
  t7416 = t2664*t4874;
  t7419 = t7413 + t7416;
  t7363 = -0.21*t1662;
  t7367 = -0.049*t1689;
  t7369 = t7363 + t7367;
  t7372 = 0.049*t1662;
  t7374 = t7372 + t2060;
  t7379 = 0.01841*t2532;
  t7381 = 0.70544*t2664;
  t7382 = t7379 + t7381;
  t7388 = 0.70544*t2532;
  t7395 = t7388 + t2825;
  t7441 = -1.*t1662*t5682;
  t7442 = t7441 + t7112;
  t7450 = t2532*t7442;
  t7453 = t7450 + t5891;
  t7459 = t2664*t7442;
  t7461 = t2664*t5868;
  t7462 = t7459 + t7461;
  t7491 = -1.*t595*t124*t235;
  t7492 = -1.*t124*t148*t782*t4032;
  t7493 = t7491 + t7492;
  t7496 = -1.*t204*t124*t1339*t4032;
  t7498 = t1181*t7493;
  t7499 = t7496 + t7498;
  t7501 = -1.*t204*t1181*t124*t4032;
  t7502 = -1.*t1339*t7493;
  t7503 = t7501 + t7502;
  t7505 = -1.*t1689*t7499;
  t7506 = t1662*t7503;
  t7507 = t7505 + t7506;
  t7509 = t1662*t7499;
  t7510 = t1689*t7503;
  t7511 = t7509 + t7510;
  t7513 = t2664*t7507;
  t7514 = t2532*t7511;
  t7515 = t7513 + t7514;
  t7519 = t2532*t7507;
  t7520 = -1.*t2664*t7511;
  t7521 = t7519 + t7520;
  t7547 = t595*t235*t316;
  t7549 = t148*t782*t316*t4032;
  t7550 = t7547 + t7549;
  t7552 = t204*t1339*t316*t4032;
  t7554 = t1181*t7550;
  t7555 = t7552 + t7554;
  t7557 = t204*t1181*t316*t4032;
  t7558 = -1.*t1339*t7550;
  t7559 = t7557 + t7558;
  t7561 = -1.*t1689*t7555;
  t7562 = t1662*t7559;
  t7563 = t7561 + t7562;
  t7566 = t1662*t7555;
  t7568 = t1689*t7559;
  t7569 = t7566 + t7568;
  t7571 = t2664*t7563;
  t7572 = t2532*t7569;
  t7573 = t7571 + t7572;
  t7575 = t2532*t7563;
  t7576 = -1.*t2664*t7569;
  t7577 = t7575 + t7576;
  p_output1[0]=(t6231*Power(t6803,2) + t5270*t6231*(t4051 + t4107 + 0.135*t6315 + t1128*t6315 + t1448*t7293 + t1381*t7301 + t2107*t7313 + t1697*t7317 + t2831*t7322 + t2694*t7326 + t3130*t7330 + t3077*t7336 - 1.11344*(-1.*t3006*t7330 + t2874*t7336) - 0.02159*(t2874*t7330 + t3006*t7336) - 0.1305*(t595*t6315 - 1.*t124*t4032*t782)))*var2[3] + (t6231*t6803*(0.049*t124*t235 + 0.135*t124*t148*t4032 + t1128*t124*t148*t4032 + t124*t1448*t204*t4032 + t124*t235*t4105 - 1.*t1381*t7493 - 1.*t2107*t7499 - 1.*t1697*t7503 - 1.*t2831*t7507 - 1.*t2694*t7511 - 1.*t3130*t7515 - 1.*t3077*t7521 + 1.11344*(-1.*t3006*t7515 + t2874*t7521) + 0.02159*(t2874*t7515 + t3006*t7521) + 0.1305*(-1.*t124*t148*t4032*t595 + t124*t235*t782)) + t5270*t6231*(0.049*t235*t316 + 0.135*t148*t316*t4032 + t1128*t148*t316*t4032 + t1448*t204*t316*t4032 + t235*t316*t4105 + t1381*t7550 + t2107*t7555 + t1697*t7559 + t2831*t7563 + t2694*t7569 + t3130*t7573 + t3077*t7577 - 1.11344*(-1.*t3006*t7573 + t2874*t7577) - 0.02159*(t2874*t7573 + t3006*t7577) - 0.1305*(t148*t316*t4032*t595 - 1.*t235*t316*t782)))*var2[4] + (t6231*t6803*(-0.135*t4018 - 1.*t1128*t4018 + 0.1305*t4018*t595 - 1.*t1448*t6315 - 1.*t2107*t6383 - 1.*t1697*t6458 - 1.*t2831*t6472 - 1.*t2694*t6498 - 1.*t3130*t6530 - 1.*t3077*t6588 + 1.11344*(-1.*t3006*t6530 + t2874*t6588) + 0.02159*(t2874*t6530 + t3006*t6588) - 1.*t1381*t4018*t782) + t5270*t6231*(t1448*t1542 + t1697*t1829 + t2107*t2345 + t2694*t2752 + t2831*t2845 + t3077*t3099 + t3130*t3383 - 0.02159*(t3006*t3099 + t2874*t3383) - 1.11344*(t2874*t3099 - 1.*t3006*t3383) + 0.135*t530 + t1128*t530 - 0.1305*t530*t595 + t1381*t530*t782))*var2[14] + (t6231*t6803*(-1.*t1381*t4284 + t1339*t1697*t4284 - 1.*t1181*t2107*t4284 - 1.*t3794*t6847 + t124*t4032*t6859 - 1.*t2831*t7025 - 1.*t2694*t7031 - 1.*t3130*t7036 - 1.*t3077*t7050 + 1.11344*(-1.*t3006*t7036 + t2874*t7050) + 0.02159*(t2874*t7036 + t3006*t7050) + 0.1305*(t7005 - 1.*t3794*t782)) + t5270*t6231*(t1381*t5567 - 1.*t1339*t1697*t5567 + t1181*t2107*t5567 + t5311*t6847 + t316*t4032*t6859 + t2831*t6903 + t2694*t6909 + t3130*t6923 + t3077*t6941 - 1.11344*(-1.*t3006*t6923 + t2874*t6941) - 0.02159*(t2874*t6923 + t3006*t6941) - 0.1305*(-1.*t316*t4032*t595 - 1.*t5311*t782)))*var2[15] + (t5270*t6231*(t2107*t5781 + t530*t7086 + t5464*t7095 + t1697*t7101 + t2694*t7109 + t2831*t7113 + t3077*t7119 + t3130*t7123 - 0.02159*(t3006*t7119 + t2874*t7123) - 1.11344*(t2874*t7119 - 1.*t3006*t7123)) + t6231*t6803*(-1.*t2107*t4610 - 1.*t4018*t7086 - 1.*t4194*t7095 - 1.*t1697*t7179 - 1.*t2694*t7184 - 1.*t2831*t7190 - 1.*t3077*t7199 - 1.*t3130*t7220 + 0.02159*(t3006*t7199 + t2874*t7220) + 1.11344*(t2874*t7199 - 1.*t3006*t7220)))*var2[16] + (t6231*t6803*(-1.*t2694*t4830 - 1.*t4524*t7369 - 1.*t4610*t7374 - 1.*t4830*t7382 - 1.*t2831*t7386 - 1.*t4874*t7395 - 1.*t3077*t7407 - 1.*t3130*t7419 + 0.02159*(t3006*t7407 + t2874*t7419) + 1.11344*(t2874*t7407 - 1.*t3006*t7419)) + t5270*t6231*(t2694*t5834 + t5682*t7369 + t5781*t7374 + t5834*t7382 + t5868*t7395 + t2831*t7442 + t3077*t7453 + t3130*t7462 - 0.02159*(t3006*t7453 + t2874*t7462) - 1.11344*(t2874*t7453 - 1.*t3006*t7462)))*var2[17] + (t6231*t6803*(1.11344*(-1.*t2874*t5046 - 1.*t3006*t5142) + 0.02159*t5157 - 1.*t5046*t7249 - 1.*t5142*t7254) + t5270*t6231*(-1.11344*(-1.*t2874*t5904 - 1.*t3006*t5950) - 0.02159*t6078 + t5904*t7249 + t5950*t7254))*var2[21];
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

void rightLegRollVelocity_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}




