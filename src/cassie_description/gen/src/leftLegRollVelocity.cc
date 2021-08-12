/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:57 GMT-08:00
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
  double t383;
  double t529;
  double t786;
  double t1451;
  double t1472;
  double t1482;
  double t1540;
  double t1917;
  double t1934;
  double t1962;
  double t495;
  double t2907;
  double t2912;
  double t2934;
  double t2507;
  double t2537;
  double t2581;
  double t2586;
  double t2769;
  double t3397;
  double t3754;
  double t3815;
  double t3823;
  double t3839;
  double t3855;
  double t3941;
  double t4095;
  double t4156;
  double t4277;
  double t4547;
  double t4553;
  double t4586;
  double t4623;
  double t4625;
  double t4626;
  double t4655;
  double t4743;
  double t4754;
  double t4791;
  double t5046;
  double t5079;
  double t5140;
  double t5363;
  double t5388;
  double t5430;
  double t5475;
  double t5484;
  double t2128;
  double t3289;
  double t3320;
  double t3389;
  double t3400;
  double t3405;
  double t2674;
  double t2856;
  double t2888;
  double t5570;
  double t5572;
  double t5580;
  double t5584;
  double t5596;
  double t5597;
  double t3579;
  double t3596;
  double t3617;
  double t3890;
  double t3994;
  double t4036;
  double t5673;
  double t5682;
  double t5697;
  double t5742;
  double t5747;
  double t5748;
  double t4355;
  double t4374;
  double t4538;
  double t4651;
  double t4725;
  double t4729;
  double t5771;
  double t5773;
  double t5775;
  double t5781;
  double t5783;
  double t5792;
  double t4926;
  double t4959;
  double t5029;
  double t5834;
  double t5839;
  double t5840;
  double t5846;
  double t5853;
  double t5859;
  double t5347;
  double t5460;
  double t5509;
  double t5526;
  double t5530;
  double t5533;
  double t5540;
  double t5546;
  double t5561;
  double t5565;
  double t5567;
  double t5568;
  double t5569;
  double t5582;
  double t5603;
  double t5618;
  double t5622;
  double t5652;
  double t5734;
  double t5761;
  double t5778;
  double t5803;
  double t5842;
  double t5861;
  double t5866;
  double t5868;
  double t5870;
  double t5871;
  double t5872;
  double t5880;
  double t5885;
  double t5886;
  double t5889;
  double t5919;
  double t5929;
  double t5931;
  double t5982;
  double t5994;
  double t6050;
  double t6136;
  double t6150;
  double t6177;
  double t6180;
  double t6191;
  double t6193;
  double t6201;
  double t6216;
  double t6223;
  double t6228;
  double t6231;
  double t6235;
  double t6247;
  double t6277;
  double t6313;
  double t6317;
  double t6321;
  double t6328;
  double t650;
  double t854;
  double t982;
  double t1993;
  double t2385;
  double t6546;
  double t6560;
  double t6567;
  double t6575;
  double t6577;
  double t6587;
  double t6590;
  double t6591;
  double t6600;
  double t6606;
  double t6607;
  double t6610;
  double t6335;
  double t6338;
  double t6339;
  double t6350;
  double t6353;
  double t6354;
  double t5891;
  double t5892;
  double t5896;
  double t5904;
  double t5909;
  double t5917;
  double t5973;
  double t6072;
  double t6178;
  double t6200;
  double t6224;
  double t6244;
  double t6315;
  double t6333;
  double t6343;
  double t6386;
  double t6414;
  double t6457;
  double t6458;
  double t6460;
  double t6777;
  double t6789;
  double t6794;
  double t6803;
  double t6814;
  double t6817;
  double t6835;
  double t6837;
  double t6838;
  double t6844;
  double t6847;
  double t6850;
  double t6855;
  double t6856;
  double t6858;
  double t6860;
  double t6862;
  double t6863;
  double t6867;
  double t6871;
  double t6872;
  double t6924;
  double t6925;
  double t6928;
  double t6937;
  double t6938;
  double t6940;
  double t6948;
  double t6951;
  double t6953;
  double t6960;
  double t6964;
  double t6965;
  double t6967;
  double t6968;
  double t6969;
  double t6973;
  double t6975;
  double t6977;
  double t6979;
  double t6981;
  double t6986;
  double t6662;
  double t6668;
  double t6675;
  double t6678;
  double t6681;
  double t6686;
  double t6687;
  double t6688;
  double t6689;
  double t6693;
  double t6698;
  double t6701;
  double t6712;
  double t6719;
  double t6722;
  double t6727;
  double t7045;
  double t7051;
  double t7054;
  double t7067;
  double t7068;
  double t7070;
  double t7073;
  double t7075;
  double t7076;
  double t7078;
  double t7079;
  double t7080;
  double t7082;
  double t7083;
  double t7084;
  double t7086;
  double t7087;
  double t7088;
  double t7090;
  double t7093;
  double t7094;
  double t7124;
  double t7125;
  double t7126;
  double t7132;
  double t7133;
  double t7134;
  double t7136;
  double t7137;
  double t7138;
  double t7143;
  double t7151;
  double t7153;
  double t7156;
  double t7157;
  double t7160;
  double t7162;
  double t7164;
  double t7166;
  double t7174;
  double t7175;
  double t7176;
  double t7216;
  double t7218;
  double t7219;
  double t7224;
  double t7225;
  double t7228;
  double t7232;
  double t7233;
  double t7236;
  double t7237;
  double t7238;
  double t7240;
  double t7241;
  double t7242;
  double t7197;
  double t7198;
  double t7204;
  double t7206;
  double t7208;
  double t7259;
  double t7260;
  double t7261;
  double t7264;
  double t7265;
  double t7267;
  double t7268;
  double t7269;
  double t7272;
  double t7273;
  double t7274;
  double t7276;
  double t7277;
  double t7280;
  double t7297;
  double t7299;
  double t7300;
  double t7302;
  double t7303;
  double t6486;
  double t7333;
  double t7334;
  double t7337;
  double t7338;
  double t7339;
  double t7341;
  double t7342;
  double t7343;
  double t7345;
  double t7346;
  double t7347;
  double t7350;
  double t7351;
  double t7352;
  double t7354;
  double t7355;
  double t7356;
  double t7358;
  double t7359;
  double t7361;
  double t7363;
  double t7364;
  double t7365;
  double t7408;
  double t7409;
  double t7416;
  double t7418;
  double t7420;
  double t7421;
  double t7423;
  double t7391;
  double t7392;
  double t7394;
  double t7396;
  double t7398;
  double t7401;
  double t7403;
  double t7404;
  double t7411;
  double t7412;
  double t7444;
  double t7445;
  double t7450;
  double t7451;
  double t7455;
  double t7459;
  double t7460;
  t383 = Sin(var1[3]);
  t529 = Cos(var1[7]);
  t786 = Sin(var1[7]);
  t1451 = Cos(var1[3]);
  t1472 = Cos(var1[6]);
  t1482 = t1451*t1472;
  t1540 = Cos(var1[4]);
  t1917 = Sin(var1[6]);
  t1934 = -1.*t1540*t383*t1917;
  t1962 = t1482 + t1934;
  t495 = Sin(var1[4]);
  t2907 = t529*t1962;
  t2912 = -1.*t383*t495*t786;
  t2934 = t2907 + t2912;
  t2507 = Cos(var1[8]);
  t2537 = Cos(var1[9]);
  t2581 = -1.*t2537;
  t2586 = 1. + t2581;
  t2769 = Sin(var1[9]);
  t3397 = Sin(var1[8]);
  t3754 = -1.*var1[9];
  t3815 = 0.226893 + t3754;
  t3823 = Cos(t3815);
  t3839 = -1.*t3823;
  t3855 = 1. + t3839;
  t3941 = Sin(t3815);
  t4095 = -1.*t2507*t2769*t2934;
  t4156 = -1.*t2537*t2934*t3397;
  t4277 = t4095 + t4156;
  t4547 = t2537*t2507*t2934;
  t4553 = -1.*t2769*t2934*t3397;
  t4586 = t4547 + t4553;
  t4623 = Cos(var1[13]);
  t4625 = -1.*t4623;
  t4626 = 1. + t4625;
  t4655 = Sin(var1[13]);
  t4743 = t3941*t4277;
  t4754 = t3823*t4586;
  t4791 = t4743 + t4754;
  t5046 = t3823*t4277;
  t5079 = -1.*t3941*t4586;
  t5140 = t5046 + t5079;
  t5363 = t1472*t383;
  t5388 = t1451*t1540*t1917;
  t5430 = t5363 + t5388;
  t5475 = -1.*t529;
  t5484 = 1. + t5475;
  t2128 = 0.135*t786;
  t3289 = -1.*t2507;
  t3320 = 1. + t3289;
  t3389 = -0.049*t3320;
  t3400 = -0.09*t3397;
  t3405 = t3389 + t3400;
  t2674 = -0.049*t2586;
  t2856 = -0.21*t2769;
  t2888 = t2674 + t2856;
  t5570 = -1.*t1451*t529*t495;
  t5572 = t5430*t786;
  t5580 = t5570 + t5572;
  t5584 = t1451*t1540*t1472;
  t5596 = -1.*t383*t1917;
  t5597 = t5584 + t5596;
  t3579 = -0.21*t2586;
  t3596 = 0.049*t2769;
  t3617 = t3579 + t3596;
  t3890 = -0.70544*t3855;
  t3994 = -0.01841*t3941;
  t4036 = t3890 + t3994;
  t5673 = t2507*t5580;
  t5682 = t5597*t3397;
  t5697 = t5673 + t5682;
  t5742 = t2507*t5597;
  t5747 = -1.*t5580*t3397;
  t5748 = t5742 + t5747;
  t4355 = 0.01841*t3855;
  t4374 = -0.70544*t3941;
  t4538 = t4355 + t4374;
  t4651 = -0.02159*t4626;
  t4725 = -1.11344*t4655;
  t4729 = t4651 + t4725;
  t5771 = -1.*t2769*t5697;
  t5773 = t2537*t5748;
  t5775 = t5771 + t5773;
  t5781 = t2537*t5697;
  t5783 = t2769*t5748;
  t5792 = t5781 + t5783;
  t4926 = -1.11344*t4626;
  t4959 = 0.02159*t4655;
  t5029 = t4926 + t4959;
  t5834 = t3941*t5775;
  t5839 = t3823*t5792;
  t5840 = t5834 + t5839;
  t5846 = t3823*t5775;
  t5853 = -1.*t3941*t5792;
  t5859 = t5846 + t5853;
  t5347 = 0.049*t1451*t495;
  t5460 = 0.135*t5430;
  t5509 = 0.135*t5484;
  t5526 = 0.049*t786;
  t5530 = t5509 + t5526;
  t5533 = -1.*t5430*t5530;
  t5540 = -0.049*t5484;
  t5546 = t5540 + t2128;
  t5561 = t1451*t495*t5546;
  t5565 = t529*t5430;
  t5567 = t1451*t495*t786;
  t5568 = t5565 + t5567;
  t5569 = -0.1305*t5568;
  t5582 = -1.*t5580*t3405;
  t5603 = -0.09*t3320;
  t5618 = 0.049*t3397;
  t5622 = t5603 + t5618;
  t5652 = -1.*t5597*t5622;
  t5734 = -1.*t2888*t5697;
  t5761 = -1.*t3617*t5748;
  t5778 = -1.*t4036*t5775;
  t5803 = -1.*t4538*t5792;
  t5842 = -1.*t4729*t5840;
  t5861 = -1.*t5029*t5859;
  t5866 = -1.*t4655*t5840;
  t5868 = t4623*t5859;
  t5870 = t5866 + t5868;
  t5871 = 1.11344*t5870;
  t5872 = t4623*t5840;
  t5880 = t4655*t5859;
  t5885 = t5872 + t5880;
  t5886 = 0.02159*t5885;
  t5889 = t5347 + t5460 + t5533 + t5561 + t5569 + t5582 + t5652 + t5734 + t5761 + t5778 + t5803 + t5842 + t5861 + t5871 + t5886;
  t5919 = t529*t383*t495;
  t5929 = t1962*t786;
  t5931 = t5919 + t5929;
  t5982 = -1.*t1540*t1472*t383;
  t5994 = -1.*t1451*t1917;
  t6050 = t5982 + t5994;
  t6136 = t2507*t5931;
  t6150 = t6050*t3397;
  t6177 = t6136 + t6150;
  t6180 = t2507*t6050;
  t6191 = -1.*t5931*t3397;
  t6193 = t6180 + t6191;
  t6201 = -1.*t2769*t6177;
  t6216 = t2537*t6193;
  t6223 = t6201 + t6216;
  t6228 = t2537*t6177;
  t6231 = t2769*t6193;
  t6235 = t6228 + t6231;
  t6247 = t3941*t6223;
  t6277 = t3823*t6235;
  t6313 = t6247 + t6277;
  t6317 = t3823*t6223;
  t6321 = -1.*t3941*t6235;
  t6328 = t6317 + t6321;
  t650 = 0.135*t529;
  t854 = -0.049*t786;
  t982 = t650 + t854;
  t1993 = 0.049*t529;
  t2385 = t1993 + t2128;
  t6546 = -1.*t2507*t2769*t5568;
  t6560 = -1.*t2537*t5568*t3397;
  t6567 = t6546 + t6560;
  t6575 = t2537*t2507*t5568;
  t6577 = -1.*t2769*t5568*t3397;
  t6587 = t6575 + t6577;
  t6590 = t3941*t6567;
  t6591 = t3823*t6587;
  t6600 = t6590 + t6591;
  t6606 = t3823*t6567;
  t6607 = -1.*t3941*t6587;
  t6610 = t6606 + t6607;
  t6335 = -1.*t4655*t6313;
  t6338 = t4623*t6328;
  t6339 = t6335 + t6338;
  t6350 = t4623*t6313;
  t6353 = t4655*t6328;
  t6354 = t6350 + t6353;
  t5891 = Power(t5889,2);
  t5892 = 0.049*t383*t495;
  t5896 = -0.135*t1962;
  t5904 = t1962*t5530;
  t5909 = t383*t495*t5546;
  t5917 = 0.1305*t2934;
  t5973 = t5931*t3405;
  t6072 = t6050*t5622;
  t6178 = t2888*t6177;
  t6200 = t3617*t6193;
  t6224 = t4036*t6223;
  t6244 = t4538*t6235;
  t6315 = t4729*t6313;
  t6333 = t5029*t6328;
  t6343 = -1.11344*t6339;
  t6386 = -0.02159*t6354;
  t6414 = t5892 + t5896 + t5904 + t5909 + t5917 + t5973 + t6072 + t6178 + t6200 + t6224 + t6244 + t6315 + t6333 + t6343 + t6386;
  t6457 = Power(t6414,2);
  t6458 = t5891 + t6457;
  t6460 = 1/t6458;
  t6777 = -1.*t1451*t1472;
  t6789 = t1540*t383*t1917;
  t6794 = t6777 + t6789;
  t6803 = t2507*t6050*t786;
  t6814 = t6794*t3397;
  t6817 = t6803 + t6814;
  t6835 = t2507*t6794;
  t6837 = -1.*t6050*t786*t3397;
  t6838 = t6835 + t6837;
  t6844 = -1.*t2769*t6817;
  t6847 = t2537*t6838;
  t6850 = t6844 + t6847;
  t6855 = t2537*t6817;
  t6856 = t2769*t6838;
  t6858 = t6855 + t6856;
  t6860 = t3941*t6850;
  t6862 = t3823*t6858;
  t6863 = t6860 + t6862;
  t6867 = t3823*t6850;
  t6871 = -1.*t3941*t6858;
  t6872 = t6867 + t6871;
  t6924 = -1.*t1472*t383;
  t6925 = -1.*t1451*t1540*t1917;
  t6928 = t6924 + t6925;
  t6937 = t2507*t5597*t786;
  t6938 = t6928*t3397;
  t6940 = t6937 + t6938;
  t6948 = t2507*t6928;
  t6951 = -1.*t5597*t786*t3397;
  t6953 = t6948 + t6951;
  t6960 = -1.*t2769*t6940;
  t6964 = t2537*t6953;
  t6965 = t6960 + t6964;
  t6967 = t2537*t6940;
  t6968 = t2769*t6953;
  t6969 = t6967 + t6968;
  t6973 = t3941*t6965;
  t6975 = t3823*t6969;
  t6977 = t6973 + t6975;
  t6979 = t3823*t6965;
  t6981 = -1.*t3941*t6969;
  t6986 = t6979 + t6981;
  t6662 = -0.049*t383*t495;
  t6668 = 0.135*t1962;
  t6675 = -1.*t1962*t5530;
  t6678 = -1.*t383*t495*t5546;
  t6681 = -0.1305*t2934;
  t6686 = -1.*t5931*t3405;
  t6687 = -1.*t6050*t5622;
  t6688 = -1.*t2888*t6177;
  t6689 = -1.*t3617*t6193;
  t6693 = -1.*t4036*t6223;
  t6698 = -1.*t4538*t6235;
  t6701 = -1.*t4729*t6313;
  t6712 = -1.*t5029*t6328;
  t6719 = 1.11344*t6339;
  t6722 = 0.02159*t6354;
  t6727 = t6662 + t6668 + t6675 + t6678 + t6681 + t6686 + t6687 + t6688 + t6689 + t6693 + t6698 + t6701 + t6712 + t6719 + t6722;
  t7045 = t1540*t529*t383;
  t7051 = t383*t495*t1917*t786;
  t7054 = t7045 + t7051;
  t7067 = t2507*t7054;
  t7068 = t1472*t383*t495*t3397;
  t7070 = t7067 + t7068;
  t7073 = t1472*t2507*t383*t495;
  t7075 = -1.*t7054*t3397;
  t7076 = t7073 + t7075;
  t7078 = -1.*t2769*t7070;
  t7079 = t2537*t7076;
  t7080 = t7078 + t7079;
  t7082 = t2537*t7070;
  t7083 = t2769*t7076;
  t7084 = t7082 + t7083;
  t7086 = t3941*t7080;
  t7087 = t3823*t7084;
  t7088 = t7086 + t7087;
  t7090 = t3823*t7080;
  t7093 = -1.*t3941*t7084;
  t7094 = t7090 + t7093;
  t7124 = -1.*t1451*t1540*t529;
  t7125 = -1.*t1451*t495*t1917*t786;
  t7126 = t7124 + t7125;
  t7132 = t2507*t7126;
  t7133 = -1.*t1451*t1472*t495*t3397;
  t7134 = t7132 + t7133;
  t7136 = -1.*t1451*t1472*t2507*t495;
  t7137 = -1.*t7126*t3397;
  t7138 = t7136 + t7137;
  t7143 = -1.*t2769*t7134;
  t7151 = t2537*t7138;
  t7153 = t7143 + t7151;
  t7156 = t2537*t7134;
  t7157 = t2769*t7138;
  t7160 = t7156 + t7157;
  t7162 = t3941*t7153;
  t7164 = t3823*t7160;
  t7166 = t7162 + t7164;
  t7174 = t3823*t7153;
  t7175 = -1.*t3941*t7160;
  t7176 = t7174 + t7175;
  t7216 = -1.*t2507*t5931;
  t7218 = -1.*t6050*t3397;
  t7219 = t7216 + t7218;
  t7224 = t2769*t7219;
  t7225 = t7224 + t6216;
  t7228 = t2537*t7219;
  t7232 = -1.*t2769*t6193;
  t7233 = t7228 + t7232;
  t7236 = -1.*t3941*t7225;
  t7237 = t3823*t7233;
  t7238 = t7236 + t7237;
  t7240 = t3823*t7225;
  t7241 = t3941*t7233;
  t7242 = t7240 + t7241;
  t7197 = 0.049*t2507;
  t7198 = t7197 + t3400;
  t7204 = -0.09*t2507;
  t7206 = -0.049*t3397;
  t7208 = t7204 + t7206;
  t7259 = -1.*t2507*t5580;
  t7260 = -1.*t5597*t3397;
  t7261 = t7259 + t7260;
  t7264 = t2769*t7261;
  t7265 = t7264 + t5773;
  t7267 = t2537*t7261;
  t7268 = -1.*t2769*t5748;
  t7269 = t7267 + t7268;
  t7272 = -1.*t3941*t7265;
  t7273 = t3823*t7269;
  t7274 = t7272 + t7273;
  t7276 = t3823*t7265;
  t7277 = t3941*t7269;
  t7280 = t7276 + t7277;
  t7297 = -1.11344*t4623;
  t7299 = -0.02159*t4655;
  t7300 = t7297 + t7299;
  t7302 = 0.02159*t4623;
  t7303 = t7302 + t4725;
  t6486 = t1451*t529*t495;
  t7333 = t6928*t786;
  t7334 = t6486 + t7333;
  t7337 = -1.*t1451*t1540*t1472;
  t7338 = t383*t1917;
  t7339 = t7337 + t7338;
  t7341 = t2507*t7334;
  t7342 = t7339*t3397;
  t7343 = t7341 + t7342;
  t7345 = t2507*t7339;
  t7346 = -1.*t7334*t3397;
  t7347 = t7345 + t7346;
  t7350 = -1.*t2769*t7343;
  t7351 = t2537*t7347;
  t7352 = t7350 + t7351;
  t7354 = t2537*t7343;
  t7355 = t2769*t7347;
  t7356 = t7354 + t7355;
  t7358 = t3941*t7352;
  t7359 = t3823*t7356;
  t7361 = t7358 + t7359;
  t7363 = t3823*t7352;
  t7364 = -1.*t3941*t7356;
  t7365 = t7363 + t7364;
  t7408 = -1.*t2537*t5697;
  t7409 = t7408 + t7268;
  t7416 = t3823*t7409;
  t7418 = t7416 + t5839;
  t7420 = t3941*t7409;
  t7421 = t3941*t5792;
  t7423 = t7420 + t7421;
  t7391 = -0.21*t2537;
  t7392 = -0.049*t2769;
  t7394 = t7391 + t7392;
  t7396 = 0.049*t2537;
  t7398 = t7396 + t2856;
  t7401 = 0.01841*t3823;
  t7403 = 0.70544*t3941;
  t7404 = t7401 + t7403;
  t7411 = 0.70544*t3823;
  t7412 = t7411 + t3994;
  t7444 = -1.*t2537*t6177;
  t7445 = t7444 + t7232;
  t7450 = t3823*t7445;
  t7451 = t7450 + t6277;
  t7455 = t3941*t7445;
  t7459 = t3941*t6235;
  t7460 = t7455 + t7459;
  p_output1[0]=(t6460*Power(t6727,2) + t5889*t6460*(t5347 + t5561 - 0.135*t6928 + t5530*t6928 + t3405*t7334 + t5622*t7339 + t2888*t7343 + t3617*t7347 + t4036*t7352 + t4538*t7356 + t4729*t7361 + t5029*t7365 - 1.11344*(-1.*t4655*t7361 + t4623*t7365) - 0.02159*(t4623*t7361 + t4655*t7365) + 0.1305*(t529*t6928 - 1.*t1451*t495*t786)))*var2[3] + (t6460*t6727*(0.049*t1451*t1540 - 0.135*t1451*t1917*t495 + t1451*t1917*t495*t5530 + t1451*t1540*t5546 + t1451*t1472*t495*t5622 - 1.*t3405*t7126 - 1.*t2888*t7134 - 1.*t3617*t7138 - 1.*t4036*t7153 - 1.*t4538*t7160 - 1.*t4729*t7166 - 1.*t5029*t7176 + 1.11344*(-1.*t4655*t7166 + t4623*t7176) + 0.02159*(t4623*t7166 + t4655*t7176) - 0.1305*(-1.*t1451*t1917*t495*t529 + t1451*t1540*t786)) + t5889*t6460*(0.049*t1540*t383 - 0.135*t1917*t383*t495 + t1917*t383*t495*t5530 + t1540*t383*t5546 + t1472*t383*t495*t5622 + t3405*t7054 + t2888*t7070 + t3617*t7076 + t4036*t7080 + t4538*t7084 + t4729*t7088 + t5029*t7094 - 1.11344*(-1.*t4655*t7088 + t4623*t7094) - 0.02159*(t4623*t7088 + t4655*t7094) + 0.1305*(t1917*t383*t495*t529 - 1.*t1540*t383*t786)))*var2[4] + (t6460*t6727*(0.135*t5597 - 0.1305*t529*t5597 - 1.*t5530*t5597 - 1.*t5622*t6928 - 1.*t2888*t6940 - 1.*t3617*t6953 - 1.*t4036*t6965 - 1.*t4538*t6969 - 1.*t4729*t6977 - 1.*t5029*t6986 + 1.11344*(-1.*t4655*t6977 + t4623*t6986) + 0.02159*(t4623*t6977 + t4655*t6986) - 1.*t3405*t5597*t786) + t5889*t6460*(-0.135*t6050 + 0.1305*t529*t6050 + t5530*t6050 + t5622*t6794 + t2888*t6817 + t3617*t6838 + t4036*t6850 + t4538*t6858 + t4729*t6863 + t5029*t6872 - 1.11344*(-1.*t4655*t6863 + t4623*t6872) - 0.02159*(t4623*t6863 + t4655*t6872) + t3405*t6050*t786))*var2[6] + (t6460*t6727*(-1.*t2385*t5430 - 1.*t2507*t2888*t5568 - 1.*t3405*t5568 + t3397*t3617*t5568 - 1.*t4036*t6567 - 1.*t4538*t6587 - 1.*t4729*t6600 - 1.*t5029*t6610 + 1.11344*(-1.*t4655*t6600 + t4623*t6610) + 0.02159*(t4623*t6600 + t4655*t6610) - 0.1305*(t6486 - 1.*t5430*t786) + t1451*t495*t982) + t5889*t6460*(t1962*t2385 + t2507*t2888*t2934 + t2934*t3405 - 1.*t2934*t3397*t3617 + t4036*t4277 + t4538*t4586 + t4729*t4791 + t5029*t5140 - 1.11344*(-1.*t4655*t4791 + t4623*t5140) - 0.02159*(t4623*t4791 + t4655*t5140) + 0.1305*(-1.*t383*t495*t529 - 1.*t1962*t786) + t383*t495*t982))*var2[7] + (t5889*t6460*(t2888*t6193 + t6050*t7198 + t5931*t7208 + t3617*t7219 + t4538*t7225 + t4036*t7233 + t5029*t7238 + t4729*t7242 - 0.02159*(t4655*t7238 + t4623*t7242) - 1.11344*(t4623*t7238 - 1.*t4655*t7242)) + t6460*t6727*(-1.*t2888*t5748 - 1.*t5597*t7198 - 1.*t5580*t7208 - 1.*t3617*t7261 - 1.*t4538*t7265 - 1.*t4036*t7269 - 1.*t5029*t7274 - 1.*t4729*t7280 + 0.02159*(t4655*t7274 + t4623*t7280) + 1.11344*(t4623*t7274 - 1.*t4655*t7280)))*var2[8] + (t6460*t6727*(-1.*t4538*t5775 - 1.*t5697*t7394 - 1.*t5748*t7398 - 1.*t5775*t7404 - 1.*t4036*t7409 - 1.*t5792*t7412 - 1.*t5029*t7418 - 1.*t4729*t7423 + 0.02159*(t4655*t7418 + t4623*t7423) + 1.11344*(t4623*t7418 - 1.*t4655*t7423)) + t5889*t6460*(t4538*t6223 + t6177*t7394 + t6193*t7398 + t6223*t7404 + t6235*t7412 + t4036*t7445 + t5029*t7451 + t4729*t7460 - 0.02159*(t4655*t7451 + t4623*t7460) - 1.11344*(t4623*t7451 - 1.*t4655*t7460)))*var2[9] + (t6460*t6727*(1.11344*(-1.*t4623*t5840 - 1.*t4655*t5859) + 0.02159*t5870 - 1.*t5840*t7300 - 1.*t5859*t7303) + t5889*t6460*(-1.11344*(-1.*t4623*t6313 - 1.*t4655*t6328) - 0.02159*t6339 + t6313*t7300 + t6328*t7303))*var2[13];
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




