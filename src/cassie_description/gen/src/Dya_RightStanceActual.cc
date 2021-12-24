/*
 * Automatically Generated from Mathematica.
 * Thu 26 Aug 2021 14:19:35 GMT-07:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "Dya_RightStanceActual.hh"
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
  double t93;
  double t312;
  double t334;
  double t503;
  double t714;
  double t919;
  double t1005;
  double t1017;
  double t1098;
  double t1122;
  double t1227;
  double t1233;
  double t1280;
  double t1284;
  double t1333;
  double t1631;
  double t1635;
  double t1647;
  double t1757;
  double t1767;
  double t1841;
  double t1903;
  double t1999;
  double t2081;
  double t2084;
  double t2339;
  double t2372;
  double t2431;
  double t947;
  double t965;
  double t980;
  double t552;
  double t720;
  double t877;
  double t1440;
  double t1588;
  double t1595;
  double t1231;
  double t1238;
  double t1250;
  double t2170;
  double t2172;
  double t2258;
  double t2915;
  double t2918;
  double t2970;
  double t1843;
  double t1926;
  double t1930;
  double t2982;
  double t2983;
  double t3000;
  double t3002;
  double t3007;
  double t138;
  double t910;
  double t925;
  double t984;
  double t1345;
  double t1658;
  double t2159;
  double t2547;
  double t2596;
  double t2599;
  double t2659;
  double t2675;
  double t2680;
  double t2682;
  double t2685;
  double t2745;
  double t2756;
  double t2800;
  double t2846;
  double t2888;
  double t2892;
  double t2978;
  double t2980;
  double t2984;
  double t3015;
  double t3022;
  double t3066;
  double t3091;
  double t3124;
  double t3132;
  double t3136;
  double t3144;
  double t3167;
  double t3183;
  double t3291;
  double t3292;
  double t3297;
  double t3323;
  double t3328;
  double t3332;
  double t3362;
  double t3364;
  double t3630;
  double t3664;
  double t3683;
  double t3701;
  double t3720;
  double t3754;
  double t3771;
  double t3787;
  double t3790;
  double t3803;
  double t3819;
  double t3253;
  double t3256;
  double t3264;
  double t3271;
  double t3846;
  double t3848;
  double t3850;
  double t3862;
  double t3906;
  double t3916;
  double t3932;
  double t3368;
  double t3373;
  double t3376;
  double t3379;
  double t3408;
  double t3417;
  double t3835;
  double t3944;
  double t3958;
  double t3992;
  double t2797;
  double t3195;
  double t3217;
  double t3235;
  double t4820;
  double t4868;
  double t4968;
  double t4565;
  double t4572;
  double t4580;
  double t4403;
  double t4410;
  double t3287;
  double t4761;
  double t4782;
  double t4812;
  double t4625;
  double t4689;
  double t3311;
  double t5474;
  double t5508;
  double t4993;
  double t5020;
  double t5025;
  double t5063;
  double t5077;
  double t5082;
  double t4068;
  double t4113;
  double t5564;
  double t5661;
  double t5663;
  double t5717;
  double t5790;
  double t5825;
  double t6444;
  double t6483;
  double t6389;
  double t6393;
  double t6416;
  double t6627;
  double t6656;
  double t6657;
  double t6572;
  double t6579;
  double t6584;
  double t6832;
  double t6861;
  double t6878;
  double t6879;
  double t6886;
  double t6919;
  double t6975;
  double t7008;
  double t7024;
  double t7068;
  double t7149;
  double t7158;
  double t7247;
  double t7252;
  double t7256;
  double t7330;
  double t7349;
  double t7399;
  double t7445;
  double t7449;
  double t7451;
  double t7457;
  double t7468;
  double t7473;
  double t7476;
  double t7421;
  double t7426;
  double t7430;
  double t6894;
  double t6923;
  double t6928;
  double t6930;
  double t6931;
  double t6939;
  double t7263;
  double t7298;
  double t7299;
  double t7150;
  double t7204;
  double t7219;
  double t7551;
  double t7553;
  double t7554;
  double t7456;
  double t7460;
  double t7466;
  double t7482;
  double t7489;
  double t7497;
  double t7560;
  double t7563;
  double t7564;
  double t7570;
  double t7574;
  double t6854;
  double t6865;
  double t6929;
  double t6941;
  double t7262;
  double t7405;
  double t7467;
  double t7501;
  double t7505;
  double t7507;
  double t7510;
  double t7513;
  double t7520;
  double t7521;
  double t7524;
  double t7526;
  double t7527;
  double t7534;
  double t7536;
  double t7537;
  double t7548;
  double t7558;
  double t7559;
  double t7566;
  double t7578;
  double t7579;
  double t7580;
  double t7581;
  double t7582;
  double t7585;
  double t7595;
  double t7603;
  double t7612;
  double t7617;
  double t7648;
  double t7651;
  double t7653;
  double t7661;
  double t7666;
  double t7672;
  double t7675;
  double t7676;
  double t7528;
  double t7625;
  double t7629;
  double t7631;
  double t7742;
  double t7746;
  double t7755;
  double t7706;
  double t7708;
  double t7714;
  double t7716;
  double t7720;
  double t7647;
  double t7729;
  double t7730;
  double t7731;
  double t7722;
  double t7725;
  double t7658;
  double t7789;
  double t7794;
  double t7829;
  double t7834;
  double t7838;
  double t7839;
  double t7840;
  t93 = Cos(var1[8]);
  t312 = Cos(var1[9]);
  t334 = -1.*t312;
  t503 = 1. + t334;
  t714 = Sin(var1[9]);
  t919 = Sin(var1[8]);
  t1005 = -1.*var1[9];
  t1017 = 0.226893 + t1005;
  t1098 = Cos(t1017);
  t1122 = -1.*t1098;
  t1227 = 1. + t1122;
  t1233 = Sin(t1017);
  t1280 = -1.*t93*t714;
  t1284 = -1.*t312*t919;
  t1333 = t1280 + t1284;
  t1631 = t312*t93;
  t1635 = -1.*t714*t919;
  t1647 = t1631 + t1635;
  t1757 = Cos(var1[13]);
  t1767 = -1.*t1757;
  t1841 = 1. + t1767;
  t1903 = Sin(var1[13]);
  t1999 = t1233*t1333;
  t2081 = t1098*t1647;
  t2084 = t1999 + t2081;
  t2339 = t1098*t1333;
  t2372 = -1.*t1233*t1647;
  t2431 = t2339 + t2372;
  t947 = -0.21*t503;
  t965 = 0.049*t714;
  t980 = t947 + t965;
  t552 = -0.049*t503;
  t720 = -0.21*t714;
  t877 = t552 + t720;
  t1440 = 0.01841*t1227;
  t1588 = -0.70544*t1233;
  t1595 = t1440 + t1588;
  t1231 = -0.70544*t1227;
  t1238 = -0.01841*t1233;
  t1250 = t1231 + t1238;
  t2170 = -1.11344*t1841;
  t2172 = 0.02159*t1903;
  t2258 = t2170 + t2172;
  t2915 = t93*t714;
  t2918 = t312*t919;
  t2970 = t2915 + t2918;
  t1843 = -0.02159*t1841;
  t1926 = -1.11344*t1903;
  t1930 = t1843 + t1926;
  t2982 = -1.*t1233*t2970;
  t2983 = t2982 + t2081;
  t3000 = t1098*t2970;
  t3002 = t1233*t1647;
  t3007 = t3000 + t3002;
  t138 = 0.049*t93;
  t910 = t93*t877;
  t925 = -0.09*t919;
  t984 = -1.*t980*t919;
  t1345 = t1250*t1333;
  t1658 = t1595*t1647;
  t2159 = t1930*t2084;
  t2547 = t2258*t2431;
  t2596 = -1.*t1903*t2084;
  t2599 = t1757*t2431;
  t2659 = t2596 + t2599;
  t2675 = -1.11344*t2659;
  t2680 = t1757*t2084;
  t2682 = t1903*t2431;
  t2685 = t2680 + t2682;
  t2745 = -0.02159*t2685;
  t2756 = t138 + t910 + t925 + t984 + t1345 + t1658 + t2159 + t2547 + t2675 + t2745;
  t2800 = 0.09*t93;
  t2846 = t93*t980;
  t2888 = 0.049*t919;
  t2892 = t877*t919;
  t2978 = t1595*t2970;
  t2980 = t1250*t1647;
  t2984 = t2258*t2983;
  t3015 = t1930*t3007;
  t3022 = t1903*t2983;
  t3066 = t1757*t3007;
  t3091 = t3022 + t3066;
  t3124 = -0.02159*t3091;
  t3132 = t1757*t2983;
  t3136 = -1.*t1903*t3007;
  t3144 = t3132 + t3136;
  t3167 = -1.11344*t3144;
  t3183 = t2800 + t2846 + t2888 + t2892 + t2978 + t2980 + t2984 + t3015 + t3124 + t3167;
  t3291 = -1.*t312*t93;
  t3292 = t714*t919;
  t3297 = t3291 + t3292;
  t3323 = -1.*t1233*t1333;
  t3328 = t1098*t3297;
  t3332 = t3323 + t3328;
  t3362 = t1233*t3297;
  t3364 = t2339 + t3362;
  t3630 = -0.049*t93;
  t3664 = -1.*t93*t877;
  t3683 = 0.09*t919;
  t3701 = t980*t919;
  t3720 = -1.*t1250*t1333;
  t3754 = -1.*t1595*t1647;
  t3771 = -1.*t1930*t2084;
  t3787 = -1.*t2258*t2431;
  t3790 = 1.11344*t2659;
  t3803 = 0.02159*t2685;
  t3819 = t3630 + t3664 + t3683 + t3701 + t3720 + t3754 + t3771 + t3787 + t3790 + t3803;
  t3253 = -0.09*t93;
  t3256 = -1.*t93*t980;
  t3264 = -0.049*t919;
  t3271 = -1.*t877*t919;
  t3846 = -1.*t1595*t2970;
  t3848 = -1.*t1250*t1647;
  t3850 = -1.*t2258*t2983;
  t3862 = -1.*t1930*t3007;
  t3906 = 0.02159*t3091;
  t3916 = 1.11344*t3144;
  t3932 = t3253 + t3256 + t3264 + t3271 + t3846 + t3848 + t3850 + t3862 + t3906 + t3916;
  t3368 = t1903*t3332;
  t3373 = t1757*t3364;
  t3376 = t3368 + t3373;
  t3379 = t1757*t3332;
  t3408 = -1.*t1903*t3364;
  t3417 = t3379 + t3408;
  t3835 = Power(t3819,2);
  t3944 = Power(t3932,2);
  t3958 = t3835 + t3944;
  t3992 = 1/t3958;
  t2797 = Power(t2756,2);
  t3195 = Power(t3183,2);
  t3217 = 0.00002025 + t2797 + t3195;
  t3235 = 1/Sqrt(t3217);
  t4820 = t2339 + t3000;
  t4868 = t1233*t2970;
  t4968 = t1999 + t4868;
  t4565 = -0.21*t312;
  t4572 = -0.049*t714;
  t4580 = t4565 + t4572;
  t4403 = 0.049*t312;
  t4410 = t4403 + t720;
  t3287 = t1595*t1333;
  t4761 = 0.01841*t1098;
  t4782 = 0.70544*t1233;
  t4812 = t4761 + t4782;
  t4625 = 0.70544*t1098;
  t4689 = t4625 + t1238;
  t3311 = t1250*t3297;
  t5474 = t2081 + t3328;
  t5508 = t3002 + t3362;
  t4993 = t1903*t4820;
  t5020 = t1757*t4968;
  t5025 = t4993 + t5020;
  t5063 = t1757*t4820;
  t5077 = -1.*t1903*t4968;
  t5082 = t5063 + t5077;
  t4068 = -1.*t1595*t1333;
  t4113 = -1.*t1250*t3297;
  t5564 = t1903*t5474;
  t5661 = t1757*t5508;
  t5663 = t5564 + t5661;
  t5717 = t1757*t5474;
  t5790 = -1.*t1903*t5508;
  t5825 = t5717 + t5790;
  t6444 = 0.02159*t1757;
  t6483 = t6444 + t1926;
  t6389 = -1.11344*t1757;
  t6393 = -0.02159*t1903;
  t6416 = t6389 + t6393;
  t6627 = -1.*t1903*t2983;
  t6656 = -1.*t1757*t3007;
  t6657 = t6627 + t6656;
  t6572 = -1.*t1757*t2084;
  t6579 = -1.*t1903*t2431;
  t6584 = t6572 + t6579;
  t6832 = Cos(var1[16]);
  t6861 = Sin(var1[16]);
  t6878 = Cos(var1[17]);
  t6879 = -1.*t6878;
  t6886 = 1. + t6879;
  t6919 = Sin(var1[17]);
  t6975 = -1.*var1[17];
  t7008 = 0.226893 + t6975;
  t7024 = Cos(t7008);
  t7068 = -1.*t7024;
  t7149 = 1. + t7068;
  t7158 = Sin(t7008);
  t7247 = -1.*t6878*t6861;
  t7252 = -1.*t6832*t6919;
  t7256 = t7247 + t7252;
  t7330 = t6832*t6878;
  t7349 = -1.*t6861*t6919;
  t7399 = t7330 + t7349;
  t7445 = Cos(var1[21]);
  t7449 = -1.*t7445;
  t7451 = 1. + t7449;
  t7457 = Sin(var1[21]);
  t7468 = t7024*t7256;
  t7473 = -1.*t7158*t7399;
  t7476 = t7468 + t7473;
  t7421 = t7158*t7256;
  t7426 = t7024*t7399;
  t7430 = t7421 + t7426;
  t6894 = -0.049*t6886;
  t6923 = -0.21*t6919;
  t6928 = t6894 + t6923;
  t6930 = -0.21*t6886;
  t6931 = 0.049*t6919;
  t6939 = t6930 + t6931;
  t7263 = 0.01841*t7149;
  t7298 = -0.70544*t7158;
  t7299 = t7263 + t7298;
  t7150 = -0.70544*t7149;
  t7204 = -0.01841*t7158;
  t7219 = t7150 + t7204;
  t7551 = t6878*t6861;
  t7553 = t6832*t6919;
  t7554 = t7551 + t7553;
  t7456 = -0.02159*t7451;
  t7460 = -1.11344*t7457;
  t7466 = t7456 + t7460;
  t7482 = -1.11344*t7451;
  t7489 = 0.02159*t7457;
  t7497 = t7482 + t7489;
  t7560 = t7024*t7554;
  t7563 = t7158*t7399;
  t7564 = t7560 + t7563;
  t7570 = -1.*t7158*t7554;
  t7574 = t7570 + t7426;
  t6854 = 0.049*t6832;
  t6865 = -0.09*t6861;
  t6929 = t6832*t6928;
  t6941 = -1.*t6861*t6939;
  t7262 = t7219*t7256;
  t7405 = t7299*t7399;
  t7467 = t7430*t7466;
  t7501 = t7476*t7497;
  t7505 = t7445*t7476;
  t7507 = -1.*t7430*t7457;
  t7510 = t7505 + t7507;
  t7513 = -1.11344*t7510;
  t7520 = t7445*t7430;
  t7521 = t7476*t7457;
  t7524 = t7520 + t7521;
  t7526 = -0.02159*t7524;
  t7527 = t6854 + t6865 + t6929 + t6941 + t7262 + t7405 + t7467 + t7501 + t7513 + t7526;
  t7534 = 0.09*t6832;
  t7536 = 0.049*t6861;
  t7537 = t6861*t6928;
  t7548 = t6832*t6939;
  t7558 = t7299*t7554;
  t7559 = t7219*t7399;
  t7566 = t7564*t7466;
  t7578 = t7574*t7497;
  t7579 = t7445*t7564;
  t7580 = t7574*t7457;
  t7581 = t7579 + t7580;
  t7582 = -0.02159*t7581;
  t7585 = t7445*t7574;
  t7595 = -1.*t7564*t7457;
  t7603 = t7585 + t7595;
  t7612 = -1.11344*t7603;
  t7617 = t7534 + t7536 + t7537 + t7548 + t7558 + t7559 + t7566 + t7578 + t7582 + t7612;
  t7648 = -1.*t6832*t6878;
  t7651 = t6861*t6919;
  t7653 = t7648 + t7651;
  t7661 = t7158*t7653;
  t7666 = t7468 + t7661;
  t7672 = -1.*t7158*t7256;
  t7675 = t7024*t7653;
  t7676 = t7672 + t7675;
  t7528 = Power(t7527,2);
  t7625 = Power(t7617,2);
  t7629 = 0.00002025 + t7528 + t7625;
  t7631 = 1/Sqrt(t7629);
  t7742 = t7158*t7554;
  t7746 = t7421 + t7742;
  t7755 = t7468 + t7560;
  t7706 = 0.049*t6878;
  t7708 = t7706 + t6923;
  t7714 = -0.21*t6878;
  t7716 = -0.049*t6919;
  t7720 = t7714 + t7716;
  t7647 = t7299*t7256;
  t7729 = 0.01841*t7024;
  t7730 = 0.70544*t7158;
  t7731 = t7729 + t7730;
  t7722 = 0.70544*t7024;
  t7725 = t7722 + t7204;
  t7658 = t7219*t7653;
  t7789 = t7563 + t7661;
  t7794 = t7426 + t7675;
  t7829 = 0.02159*t7445;
  t7834 = t7829 + t7460;
  t7838 = -1.11344*t7445;
  t7839 = -0.02159*t7457;
  t7840 = t7838 + t7839;
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
  p_output1[60]=1.;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=1.;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0.5*t3235*(2.*t2756*t3183 + 2.*t2756*(t3253 + t3256 + t3264 + t3271 + t3287 + t3311 + t2258*t3332 + t1930*t3364 - 0.02159*t3376 - 1.11344*t3417));
  p_output1[77]=t2756*t3819*t3992 + t3932*t3992*(t2800 + t2846 + t2888 + t2892 - 1.*t2258*t3332 - 1.*t1930*t3364 + 0.02159*t3376 + 1.11344*t3417 + t4068 + t4113);
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0;
  p_output1[85]=0.5*t3235*(2.*t3183*(t1345 + t1658 + t2970*t4689 + t1647*t4812 + t2258*t4820 + t1930*t4968 - 0.02159*t5025 - 1.11344*t5082 + t4580*t919 + t4410*t93) + 2.*t2756*(t3287 + t3311 + t1647*t4689 + t1333*t4812 + t2258*t5474 + t1930*t5508 - 0.02159*t5663 - 1.11344*t5825 - 1.*t4410*t919 + t4580*t93));
  p_output1[86]=t2756*t3992*(t3720 + t3754 - 1.*t2970*t4689 - 1.*t1647*t4812 - 1.*t2258*t4820 - 1.*t1930*t4968 + 0.02159*t5025 + 1.11344*t5082 - 1.*t4580*t919 - 1.*t4410*t93) + t3932*t3992*(t4068 + t4113 - 1.*t1647*t4689 - 1.*t1333*t4812 - 1.*t2258*t5474 - 1.*t1930*t5508 + 0.02159*t5663 + 1.11344*t5825 + t4410*t919 - 1.*t4580*t93);
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
  p_output1[120]=0;
  p_output1[121]=0.5*t3235*(2.*t2756*(-0.02159*t2659 + t2084*t6416 + t2431*t6483 - 1.11344*t6584) + 2.*t3183*(-0.02159*t3144 + t3007*t6416 + t2983*t6483 - 1.11344*t6657));
  p_output1[122]=t3932*t3992*(0.02159*t2659 - 1.*t2084*t6416 - 1.*t2431*t6483 + 1.11344*t6584) + t2756*t3992*(0.02159*t3144 - 1.*t3007*t6416 - 1.*t2983*t6483 + 1.11344*t6657);
  p_output1[123]=0;
  p_output1[124]=0;
  p_output1[125]=-1.;
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
  p_output1[132]=0;
  p_output1[133]=0;
  p_output1[134]=0;
  p_output1[135]=0;
  p_output1[136]=0;
  p_output1[137]=1.;
  p_output1[138]=0;
  p_output1[139]=0;
  p_output1[140]=0;
  p_output1[141]=0;
  p_output1[142]=0;
  p_output1[143]=0;
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=0.5*t7631*(2.*t7527*t7617 + 2.*t7527*(-0.09*t6832 - 0.049*t6861 - 1.*t6861*t6928 - 1.*t6832*t6939 + t7647 + t7658 + t7466*t7666 + t7497*t7676 - 1.11344*(-1.*t7457*t7666 + t7445*t7676) - 0.02159*(t7445*t7666 + t7457*t7676)));
  p_output1[148]=0;
  p_output1[149]=0;
  p_output1[150]=0;
  p_output1[151]=0;
  p_output1[152]=0;
  p_output1[153]=0;
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=0.5*t7631*(2.*t7617*(t7262 + t7405 + t6832*t7708 + t6861*t7720 + t7554*t7725 + t7399*t7731 + t7466*t7746 + t7497*t7755 - 1.11344*(-1.*t7457*t7746 + t7445*t7755) - 0.02159*(t7445*t7746 + t7457*t7755)) + 2.*t7527*(t7647 + t7658 - 1.*t6861*t7708 + t6832*t7720 + t7399*t7725 + t7256*t7731 + t7466*t7789 + t7497*t7794 - 1.11344*(-1.*t7457*t7789 + t7445*t7794) - 0.02159*(t7445*t7789 + t7457*t7794)));
  p_output1[157]=0;
  p_output1[158]=0;
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
  p_output1[192]=0.5*t7631*(2.*t7527*(-1.11344*(-1.*t7430*t7445 - 1.*t7457*t7476) - 0.02159*t7510 + t7476*t7834 + t7430*t7840) + 2.*t7617*(-1.11344*(-1.*t7445*t7564 - 1.*t7457*t7574) - 0.02159*t7603 + t7574*t7834 + t7564*t7840));
  p_output1[193]=0;
  p_output1[194]=0;
  p_output1[195]=0;
  p_output1[196]=0;
  p_output1[197]=0;
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

void Dya_RightStanceActual_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




