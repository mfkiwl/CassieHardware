/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:56 GMT-08:00
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
  double t76;
  double t550;
  double t132;
  double t143;
  double t199;
  double t391;
  double t551;
  double t1122;
  double t1132;
  double t1146;
  double t1190;
  double t1035;
  double t1635;
  double t1650;
  double t1652;
  double t1730;
  double t1762;
  double t1773;
  double t1979;
  double t2520;
  double t2605;
  double t2045;
  double t2068;
  double t2086;
  double t2362;
  double t2367;
  double t2445;
  double t2650;
  double t2687;
  double t2707;
  double t2720;
  double t2876;
  double t2882;
  double t2928;
  double t3002;
  double t3034;
  double t3047;
  double t3153;
  double t3166;
  double t3174;
  double t3280;
  double t3353;
  double t3490;
  double t3494;
  double t3706;
  double t3716;
  double t3741;
  double t1167;
  double t1220;
  double t1275;
  double t3821;
  double t3852;
  double t906;
  double t938;
  double t987;
  double t3896;
  double t3940;
  double t3942;
  double t279;
  double t395;
  double t438;
  double t1501;
  double t1582;
  double t1608;
  double t1889;
  double t1987;
  double t2003;
  double t3823;
  double t3857;
  double t3885;
  double t4043;
  double t4045;
  double t4054;
  double t2168;
  double t2282;
  double t2302;
  double t2714;
  double t2799;
  double t2803;
  double t4102;
  double t4119;
  double t4121;
  double t4156;
  double t4171;
  double t4188;
  double t2948;
  double t2949;
  double t2960;
  double t3184;
  double t3310;
  double t3348;
  double t4230;
  double t4237;
  double t4248;
  double t4273;
  double t4277;
  double t4302;
  double t3651;
  double t3663;
  double t3665;
  double t4341;
  double t4374;
  double t4380;
  double t4400;
  double t4406;
  double t4441;
  double t4555;
  double t4565;
  double t4594;
  double t4626;
  double t4676;
  double t4691;
  double t4754;
  double t4762;
  double t4769;
  double t4877;
  double t4926;
  double t4939;
  double t4959;
  double t4988;
  double t5012;
  double t5038;
  double t5079;
  double t5085;
  double t5140;
  double t5142;
  double t5148;
  double t5165;
  double t5168;
  double t5184;
  double t5286;
  double t5328;
  double t5345;
  double t1305;
  double t1386;
  double t1407;
  double t3763;
  double t3791;
  double t3795;
  double t3812;
  double t3815;
  double t3817;
  double t5622;
  double t5658;
  double t5680;
  double t5714;
  double t5716;
  double t5736;
  double t5745;
  double t5747;
  double t5758;
  double t5771;
  double t5773;
  double t5774;
  double t5781;
  double t5783;
  double t5789;
  double t5803;
  double t5810;
  double t5825;
  double t4595;
  double t4624;
  double t4698;
  double t4722;
  double t4743;
  double t4775;
  double t4791;
  double t4809;
  double t4832;
  double t4870;
  double t4946;
  double t5031;
  double t5111;
  double t5152;
  double t5274;
  double t5346;
  double t5352;
  double t5363;
  double t5364;
  double t5387;
  double t5388;
  double t5407;
  double t5436;
  double t5441;
  double t5455;
  double t5460;
  double t5476;
  double t5484;
  double t5508;
  double t5509;
  double t5526;
  double t5528;
  double t5530;
  double t5533;
  double t5537;
  double t5540;
  double t5546;
  double t5555;
  double t5561;
  double t5562;
  double t5564;
  double t5565;
  double t5567;
  double t5569;
  double t5573;
  double t5873;
  double t5877;
  double t5878;
  double t5892;
  double t5896;
  double t5903;
  double t5909;
  double t5910;
  double t5915;
  double t5918;
  double t5919;
  double t5925;
  double t5931;
  double t5973;
  double t5974;
  double t5994;
  double t6050;
  double t6117;
  double t6150;
  double t6155;
  double t6162;
  double t77;
  double t515;
  double t896;
  double t1030;
  double t1294;
  double t1457;
  double t1666;
  double t2159;
  double t2462;
  double t2940;
  double t3149;
  double t3589;
  double t3753;
  double t3805;
  double t3818;
  double t3819;
  double t6355;
  double t6382;
  double t6385;
  double t6414;
  double t6432;
  double t6446;
  double t6481;
  double t6498;
  double t6514;
  double t6530;
  double t6535;
  double t6545;
  double t6318;
  double t6319;
  double t6279;
  double t6285;
  double t6288;
  double t6645;
  double t6646;
  double t6650;
  double t6654;
  double t6657;
  double t6658;
  double t6668;
  double t6675;
  double t6677;
  double t6681;
  double t6683;
  double t6684;
  double t6780;
  double t6792;
  double t6793;
  double t6814;
  double t6831;
  double t6844;
  double t6845;
  double t6846;
  double t6854;
  double t6855;
  double t6857;
  double t6859;
  double t6863;
  double t6865;
  double t6741;
  double t6742;
  double t6749;
  double t6759;
  double t6761;
  double t6930;
  double t6931;
  double t6933;
  double t6938;
  double t6939;
  double t6941;
  double t6942;
  double t6947;
  double t6950;
  double t6951;
  double t6952;
  double t6957;
  double t6960;
  double t6961;
  double t6983;
  double t6990;
  double t6991;
  double t6999;
  double t7004;
  double t7061;
  double t7062;
  double t7068;
  double t7069;
  double t7071;
  double t7073;
  double t7074;
  double t7042;
  double t7043;
  double t7044;
  double t7048;
  double t7049;
  double t7055;
  double t7056;
  double t7059;
  double t7064;
  double t7065;
  double t7091;
  double t7092;
  double t7095;
  double t7096;
  double t7098;
  double t7099;
  double t7100;
  double t7128;
  double t7129;
  double t7130;
  double t7137;
  double t7138;
  double t7140;
  double t7143;
  double t7146;
  double t7148;
  double t7152;
  double t7153;
  double t7154;
  double t7156;
  double t7157;
  double t7159;
  double t7161;
  double t7162;
  double t7163;
  double t7166;
  double t7167;
  double t7168;
  double t7200;
  double t7201;
  double t7202;
  double t7205;
  double t7206;
  double t7207;
  double t7209;
  double t7210;
  double t7211;
  double t7215;
  double t7216;
  double t7217;
  double t7219;
  double t7220;
  double t7221;
  double t7224;
  double t7225;
  double t7226;
  double t7228;
  double t7230;
  double t7231;
  t76 = Cos(var1[4]);
  t550 = Sin(var1[14]);
  t132 = Cos(var1[15]);
  t143 = -1.*t132;
  t199 = 1. + t143;
  t391 = Sin(var1[15]);
  t551 = Sin(var1[4]);
  t1122 = Cos(var1[16]);
  t1132 = -1.*t1122;
  t1146 = 1. + t1132;
  t1190 = Sin(var1[16]);
  t1035 = Cos(var1[14]);
  t1635 = t132*t76;
  t1650 = t550*t391*t551;
  t1652 = t1635 + t1650;
  t1730 = Cos(var1[17]);
  t1762 = -1.*t1730;
  t1773 = 1. + t1762;
  t1979 = Sin(var1[17]);
  t2520 = -1.*var1[17];
  t2605 = 0.226893 + t2520;
  t2045 = t1035*t1190*t551;
  t2068 = t1122*t1652;
  t2086 = t2045 + t2068;
  t2362 = t1035*t1122*t551;
  t2367 = -1.*t1190*t1652;
  t2445 = t2362 + t2367;
  t2650 = Cos(t2605);
  t2687 = -1.*t2650;
  t2707 = 1. + t2687;
  t2720 = Sin(t2605);
  t2876 = -1.*t1979*t2086;
  t2882 = t1730*t2445;
  t2928 = t2876 + t2882;
  t3002 = t1730*t2086;
  t3034 = t1979*t2445;
  t3047 = t3002 + t3034;
  t3153 = Cos(var1[21]);
  t3166 = -1.*t3153;
  t3174 = 1. + t3166;
  t3280 = Sin(var1[21]);
  t3353 = t2720*t2928;
  t3490 = t2650*t3047;
  t3494 = t3353 + t3490;
  t3706 = t2650*t2928;
  t3716 = -1.*t2720*t3047;
  t3741 = t3706 + t3716;
  t1167 = -0.09*t1146;
  t1220 = 0.049*t1190;
  t1275 = t1167 + t1220;
  t3821 = Cos(var1[3]);
  t3852 = Sin(var1[3]);
  t906 = -0.135*t199;
  t938 = 0.049*t391;
  t987 = t906 + t938;
  t3896 = t1035*t3821;
  t3940 = -1.*t76*t550*t3852;
  t3942 = t3896 + t3940;
  t279 = -0.049*t199;
  t395 = -0.135*t391;
  t438 = t279 + t395;
  t1501 = -0.049*t1146;
  t1582 = -0.09*t1190;
  t1608 = t1501 + t1582;
  t1889 = -0.049*t1773;
  t1987 = -0.21*t1979;
  t2003 = t1889 + t1987;
  t3823 = -1.*t3821*t550;
  t3857 = -1.*t1035*t76*t3852;
  t3885 = t3823 + t3857;
  t4043 = t391*t3942;
  t4045 = t132*t3852*t551;
  t4054 = t4043 + t4045;
  t2168 = -0.21*t1773;
  t2282 = 0.049*t1979;
  t2302 = t2168 + t2282;
  t2714 = -0.70544*t2707;
  t2799 = -0.01841*t2720;
  t2803 = t2714 + t2799;
  t4102 = t1190*t3885;
  t4119 = t1122*t4054;
  t4121 = t4102 + t4119;
  t4156 = t1122*t3885;
  t4171 = -1.*t1190*t4054;
  t4188 = t4156 + t4171;
  t2948 = 0.01841*t2707;
  t2949 = -0.70544*t2720;
  t2960 = t2948 + t2949;
  t3184 = -0.02159*t3174;
  t3310 = -1.11344*t3280;
  t3348 = t3184 + t3310;
  t4230 = -1.*t1979*t4121;
  t4237 = t1730*t4188;
  t4248 = t4230 + t4237;
  t4273 = t1730*t4121;
  t4277 = t1979*t4188;
  t4302 = t4273 + t4277;
  t3651 = -1.11344*t3174;
  t3663 = 0.02159*t3280;
  t3665 = t3651 + t3663;
  t4341 = t2720*t4248;
  t4374 = t2650*t4302;
  t4380 = t4341 + t4374;
  t4400 = t2650*t4248;
  t4406 = -1.*t2720*t4302;
  t4441 = t4400 + t4406;
  t4555 = t3821*t76*t550;
  t4565 = t1035*t3852;
  t4594 = t4555 + t4565;
  t4626 = t1035*t3821*t76;
  t4676 = -1.*t550*t3852;
  t4691 = t4626 + t4676;
  t4754 = t391*t4594;
  t4762 = -1.*t132*t3821*t551;
  t4769 = t4754 + t4762;
  t4877 = t1190*t4691;
  t4926 = t1122*t4769;
  t4939 = t4877 + t4926;
  t4959 = t1122*t4691;
  t4988 = -1.*t1190*t4769;
  t5012 = t4959 + t4988;
  t5038 = -1.*t1979*t4939;
  t5079 = t1730*t5012;
  t5085 = t5038 + t5079;
  t5140 = t1730*t4939;
  t5142 = t1979*t5012;
  t5148 = t5140 + t5142;
  t5165 = t2720*t5085;
  t5168 = t2650*t5148;
  t5184 = t5165 + t5168;
  t5286 = t2650*t5085;
  t5328 = -1.*t2720*t5148;
  t5345 = t5286 + t5328;
  t1305 = -1.*t76*t391;
  t1386 = t132*t550*t551;
  t1407 = t1305 + t1386;
  t3763 = -1.*t3280*t3494;
  t3791 = t3153*t3741;
  t3795 = t3763 + t3791;
  t3812 = t3153*t3494;
  t3815 = t3280*t3741;
  t3817 = t3812 + t3815;
  t5622 = t1035*t1122*t391*t551;
  t5658 = -1.*t550*t1190*t551;
  t5680 = t5622 + t5658;
  t5714 = -1.*t1122*t550*t551;
  t5716 = -1.*t1035*t391*t1190*t551;
  t5736 = t5714 + t5716;
  t5745 = -1.*t1979*t5680;
  t5747 = t1730*t5736;
  t5758 = t5745 + t5747;
  t5771 = t1730*t5680;
  t5773 = t1979*t5736;
  t5774 = t5771 + t5773;
  t5781 = t2720*t5758;
  t5783 = t2650*t5774;
  t5789 = t5781 + t5783;
  t5803 = t2650*t5758;
  t5810 = -1.*t2720*t5774;
  t5825 = t5803 + t5810;
  t4595 = -0.135*t4594;
  t4624 = -1.*t987*t4594;
  t4698 = -1.*t1275*t4691;
  t4722 = 0.049*t3821*t551;
  t4743 = t3821*t438*t551;
  t4775 = -1.*t1608*t4769;
  t4791 = t132*t4594;
  t4809 = t3821*t391*t551;
  t4832 = t4791 + t4809;
  t4870 = 0.1305*t4832;
  t4946 = -1.*t2003*t4939;
  t5031 = -1.*t2302*t5012;
  t5111 = -1.*t2803*t5085;
  t5152 = -1.*t2960*t5148;
  t5274 = -1.*t3348*t5184;
  t5346 = -1.*t3665*t5345;
  t5352 = -1.*t3280*t5184;
  t5363 = t3153*t5345;
  t5364 = t5352 + t5363;
  t5387 = 1.11344*t5364;
  t5388 = t3153*t5184;
  t5407 = t3280*t5345;
  t5436 = t5388 + t5407;
  t5441 = 0.02159*t5436;
  t5455 = t4595 + t4624 + t4698 + t4722 + t4743 + t4775 + t4870 + t4946 + t5031 + t5111 + t5152 + t5274 + t5346 + t5387 + t5441;
  t5460 = Power(t5455,2);
  t5476 = 0.049*t76;
  t5484 = t76*t438;
  t5508 = 0.135*t550*t551;
  t5509 = t550*t987*t551;
  t5526 = t1035*t1275*t551;
  t5528 = -0.1305*t1407;
  t5530 = t1608*t1652;
  t5533 = t2003*t2086;
  t5537 = t2302*t2445;
  t5540 = t2803*t2928;
  t5546 = t2960*t3047;
  t5555 = t3348*t3494;
  t5561 = t3665*t3741;
  t5562 = -1.11344*t3795;
  t5564 = -0.02159*t3817;
  t5565 = t5476 + t5484 + t5508 + t5509 + t5526 + t5528 + t5530 + t5533 + t5537 + t5540 + t5546 + t5555 + t5561 + t5562 + t5564;
  t5567 = Power(t5565,2);
  t5569 = t5460 + t5567;
  t5573 = 1/t5569;
  t5873 = -1.*t3821*t76*t550;
  t5877 = -1.*t1035*t3852;
  t5878 = t5873 + t5877;
  t5892 = t1190*t5878;
  t5896 = t1122*t391*t4691;
  t5903 = t5892 + t5896;
  t5909 = t1122*t5878;
  t5910 = -1.*t391*t1190*t4691;
  t5915 = t5909 + t5910;
  t5918 = -1.*t1979*t5903;
  t5919 = t1730*t5915;
  t5925 = t5918 + t5919;
  t5931 = t1730*t5903;
  t5973 = t1979*t5915;
  t5974 = t5931 + t5973;
  t5994 = t2720*t5925;
  t6050 = t2650*t5974;
  t6117 = t5994 + t6050;
  t6150 = t2650*t5925;
  t6155 = -1.*t2720*t5974;
  t6162 = t6150 + t6155;
  t77 = -0.049*t76;
  t515 = -1.*t76*t438;
  t896 = -0.135*t550*t551;
  t1030 = -1.*t550*t987*t551;
  t1294 = -1.*t1035*t1275*t551;
  t1457 = 0.1305*t1407;
  t1666 = -1.*t1608*t1652;
  t2159 = -1.*t2003*t2086;
  t2462 = -1.*t2302*t2445;
  t2940 = -1.*t2803*t2928;
  t3149 = -1.*t2960*t3047;
  t3589 = -1.*t3348*t3494;
  t3753 = -1.*t3665*t3741;
  t3805 = 1.11344*t3795;
  t3818 = 0.02159*t3817;
  t3819 = t77 + t515 + t896 + t1030 + t1294 + t1457 + t1666 + t2159 + t2462 + t2940 + t3149 + t3589 + t3753 + t3805 + t3818;
  t6355 = -1.*t1730*t1190*t1407;
  t6382 = -1.*t1122*t1979*t1407;
  t6385 = t6355 + t6382;
  t6414 = t1122*t1730*t1407;
  t6432 = -1.*t1190*t1979*t1407;
  t6446 = t6414 + t6432;
  t6481 = t2720*t6385;
  t6498 = t2650*t6446;
  t6514 = t6481 + t6498;
  t6530 = t2650*t6385;
  t6535 = -1.*t2720*t6446;
  t6545 = t6530 + t6535;
  t6318 = 0.049*t132;
  t6319 = t6318 + t395;
  t6279 = -0.135*t132;
  t6285 = -0.049*t391;
  t6288 = t6279 + t6285;
  t6645 = -1.*t1730*t1190*t4832;
  t6646 = -1.*t1122*t1979*t4832;
  t6650 = t6645 + t6646;
  t6654 = t1122*t1730*t4832;
  t6657 = -1.*t1190*t1979*t4832;
  t6658 = t6654 + t6657;
  t6668 = t2720*t6650;
  t6675 = t2650*t6658;
  t6677 = t6668 + t6675;
  t6681 = t2650*t6650;
  t6683 = -1.*t2720*t6658;
  t6684 = t6681 + t6683;
  t6780 = -1.*t1035*t1190*t551;
  t6792 = -1.*t1122*t1652;
  t6793 = t6780 + t6792;
  t6814 = t1979*t6793;
  t6831 = t6814 + t2882;
  t6844 = t1730*t6793;
  t6845 = -1.*t1979*t2445;
  t6846 = t6844 + t6845;
  t6854 = -1.*t2720*t6831;
  t6855 = t2650*t6846;
  t6857 = t6854 + t6855;
  t6859 = t2650*t6831;
  t6863 = t2720*t6846;
  t6865 = t6859 + t6863;
  t6741 = 0.049*t1122;
  t6742 = t6741 + t1582;
  t6749 = -0.09*t1122;
  t6759 = -0.049*t1190;
  t6761 = t6749 + t6759;
  t6930 = -1.*t1190*t4691;
  t6931 = -1.*t1122*t4769;
  t6933 = t6930 + t6931;
  t6938 = t1979*t6933;
  t6939 = t6938 + t5079;
  t6941 = t1730*t6933;
  t6942 = -1.*t1979*t5012;
  t6947 = t6941 + t6942;
  t6950 = -1.*t2720*t6939;
  t6951 = t2650*t6947;
  t6952 = t6950 + t6951;
  t6957 = t2650*t6939;
  t6960 = t2720*t6947;
  t6961 = t6957 + t6960;
  t6983 = -1.11344*t3153;
  t6990 = -0.02159*t3280;
  t6991 = t6983 + t6990;
  t6999 = 0.02159*t3153;
  t7004 = t6999 + t3310;
  t7061 = -1.*t1730*t4939;
  t7062 = t7061 + t6942;
  t7068 = t2650*t7062;
  t7069 = t7068 + t5168;
  t7071 = t2720*t7062;
  t7073 = t2720*t5148;
  t7074 = t7071 + t7073;
  t7042 = -0.21*t1730;
  t7043 = -0.049*t1979;
  t7044 = t7042 + t7043;
  t7048 = 0.049*t1730;
  t7049 = t7048 + t1987;
  t7055 = 0.01841*t2650;
  t7056 = 0.70544*t2720;
  t7059 = t7055 + t7056;
  t7064 = 0.70544*t2650;
  t7065 = t7064 + t2799;
  t7091 = -1.*t1730*t2086;
  t7092 = t7091 + t6845;
  t7095 = t2650*t7092;
  t7096 = t7095 + t3490;
  t7098 = t2720*t7092;
  t7099 = t2720*t3047;
  t7100 = t7098 + t7099;
  t7128 = t76*t550*t391;
  t7129 = -1.*t132*t551;
  t7130 = t7128 + t7129;
  t7137 = t1035*t76*t1190;
  t7138 = t1122*t7130;
  t7140 = t7137 + t7138;
  t7143 = t1035*t1122*t76;
  t7146 = -1.*t1190*t7130;
  t7148 = t7143 + t7146;
  t7152 = -1.*t1979*t7140;
  t7153 = t1730*t7148;
  t7154 = t7152 + t7153;
  t7156 = t1730*t7140;
  t7157 = t1979*t7148;
  t7159 = t7156 + t7157;
  t7161 = t2720*t7154;
  t7162 = t2650*t7159;
  t7163 = t7161 + t7162;
  t7166 = t2650*t7154;
  t7167 = -1.*t2720*t7159;
  t7168 = t7166 + t7167;
  t7200 = -1.*t132*t3821*t76;
  t7201 = -1.*t3821*t550*t391*t551;
  t7202 = t7200 + t7201;
  t7205 = -1.*t1035*t3821*t1190*t551;
  t7206 = t1122*t7202;
  t7207 = t7205 + t7206;
  t7209 = -1.*t1035*t1122*t3821*t551;
  t7210 = -1.*t1190*t7202;
  t7211 = t7209 + t7210;
  t7215 = -1.*t1979*t7207;
  t7216 = t1730*t7211;
  t7217 = t7215 + t7216;
  t7219 = t1730*t7207;
  t7220 = t1979*t7211;
  t7221 = t7219 + t7220;
  t7224 = t2720*t7217;
  t7225 = t2650*t7221;
  t7226 = t7224 + t7225;
  t7228 = t2650*t7217;
  t7230 = -1.*t2720*t7221;
  t7231 = t7228 + t7230;
  p_output1[0]=t3819*t5573*(-1.*t1275*t3885 - 0.135*t3942 - 1.*t1608*t4054 - 1.*t2003*t4121 - 1.*t2302*t4188 - 1.*t2803*t4248 - 1.*t2960*t4302 - 1.*t3348*t4380 - 1.*t3665*t4441 + 1.11344*(-1.*t3280*t4380 + t3153*t4441) + 0.02159*(t3153*t4380 + t3280*t4441) - 0.049*t3852*t551 - 1.*t3852*t438*t551 + 0.1305*(t132*t3942 - 1.*t3852*t391*t551) - 1.*t3942*t987)*var2[3] + (t3819*t5573*(t1035*t1275*t3821*t551 + 0.135*t3821*t550*t551 - 1.*t1608*t7202 - 1.*t2003*t7207 - 1.*t2302*t7211 - 1.*t2803*t7217 - 1.*t2960*t7221 - 1.*t3348*t7226 - 1.*t3665*t7231 + 1.11344*(-1.*t3280*t7226 + t3153*t7231) + 0.02159*(t3153*t7226 + t3280*t7231) + 0.049*t3821*t76 + t3821*t438*t76 + 0.1305*(-1.*t132*t3821*t550*t551 + t3821*t391*t76) + t3821*t550*t551*t987) + t5455*t5573*(-0.049*t551 - 1.*t438*t551 + t1608*t7130 + t2003*t7140 + t2302*t7148 + t2803*t7154 + t2960*t7159 + t3348*t7163 + t3665*t7168 - 1.11344*(-1.*t3280*t7163 + t3153*t7168) - 0.02159*(t3153*t7163 + t3280*t7168) + t1035*t1275*t76 + 0.135*t550*t76 - 0.1305*(t391*t551 + t132*t550*t76) + t550*t76*t987))*var2[4] + (t3819*t5573*(-0.135*t4691 + 0.1305*t132*t4691 - 1.*t1608*t391*t4691 - 1.*t1275*t5878 - 1.*t2003*t5903 - 1.*t2302*t5915 - 1.*t2803*t5925 - 1.*t2960*t5974 - 1.*t3348*t6117 - 1.*t3665*t6162 + 1.11344*(-1.*t3280*t6117 + t3153*t6162) + 0.02159*(t3153*t6117 + t3280*t6162) - 1.*t4691*t987) + t5455*t5573*(0.135*t1035*t551 - 0.1305*t1035*t132*t551 + t1035*t1608*t391*t551 - 1.*t1275*t550*t551 + t2003*t5680 + t2302*t5736 + t2803*t5758 + t2960*t5774 + t3348*t5789 + t3665*t5825 - 1.11344*(-1.*t3280*t5789 + t3153*t5825) - 0.02159*(t3153*t5789 + t3280*t5825) + t1035*t551*t987))*var2[14] + (t3819*t5573*(-1.*t1608*t4832 - 1.*t1122*t2003*t4832 + t1190*t2302*t4832 + 0.1305*(-1.*t391*t4594 + t132*t3821*t551) + t3821*t551*t6288 - 1.*t4594*t6319 - 1.*t2803*t6650 - 1.*t2960*t6658 - 1.*t3348*t6677 - 1.*t3665*t6684 + 1.11344*(-1.*t3280*t6677 + t3153*t6684) + 0.02159*(t3153*t6677 + t3280*t6684)) + t5455*t5573*(t1407*t1608 + t1122*t1407*t2003 - 1.*t1190*t1407*t2302 + t550*t551*t6319 + t2803*t6385 + t2960*t6446 + t3348*t6514 + t3665*t6545 - 1.11344*(-1.*t3280*t6514 + t3153*t6545) - 0.02159*(t3153*t6514 + t3280*t6545) + t6288*t76 - 0.1305*(-1.*t391*t550*t551 - 1.*t132*t76)))*var2[15] + (t5455*t5573*(t2003*t2445 + t1035*t551*t6742 + t1652*t6761 + t2302*t6793 + t2960*t6831 + t2803*t6846 + t3665*t6857 + t3348*t6865 - 0.02159*(t3280*t6857 + t3153*t6865) - 1.11344*(t3153*t6857 - 1.*t3280*t6865)) + t3819*t5573*(-1.*t2003*t5012 - 1.*t4691*t6742 - 1.*t4769*t6761 - 1.*t2302*t6933 - 1.*t2960*t6939 - 1.*t2803*t6947 - 1.*t3665*t6952 - 1.*t3348*t6961 + 0.02159*(t3280*t6952 + t3153*t6961) + 1.11344*(t3153*t6952 - 1.*t3280*t6961)))*var2[16] + (t3819*t5573*(-1.*t2960*t5085 - 1.*t4939*t7044 - 1.*t5012*t7049 - 1.*t5085*t7059 - 1.*t2803*t7062 - 1.*t5148*t7065 - 1.*t3665*t7069 - 1.*t3348*t7074 + 0.02159*(t3280*t7069 + t3153*t7074) + 1.11344*(t3153*t7069 - 1.*t3280*t7074)) + t5455*t5573*(t2928*t2960 + t2086*t7044 + t2445*t7049 + t2928*t7059 + t3047*t7065 + t2803*t7092 + t3665*t7096 + t3348*t7100 - 0.02159*(t3280*t7096 + t3153*t7100) - 1.11344*(t3153*t7096 - 1.*t3280*t7100)))*var2[17] + (t5455*t5573*(-1.11344*(-1.*t3153*t3494 - 1.*t3280*t3741) - 0.02159*t3795 + t3494*t6991 + t3741*t7004) + t3819*t5573*(1.11344*(-1.*t3153*t5184 - 1.*t3280*t5345) + 0.02159*t5364 - 1.*t5184*t6991 - 1.*t5345*t7004))*var2[21];
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




