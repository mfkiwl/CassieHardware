/*
 * Automatically Generated from Mathematica.
 * Thu 26 Aug 2021 14:19:40 GMT-07:00
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
  double t10;
  double t47;
  double t158;
  double t176;
  double t196;
  double t214;
  double t223;
  double t329;
  double t352;
  double t629;
  double t697;
  double t711;
  double t712;
  double t718;
  double t873;
  double t918;
  double t922;
  double t1018;
  double t1100;
  double t1146;
  double t1222;
  double t2565;
  double t2777;
  double t1346;
  double t1350;
  double t1472;
  double t2181;
  double t2220;
  double t2250;
  double t2803;
  double t2905;
  double t2988;
  double t3009;
  double t3108;
  double t3146;
  double t3189;
  double t3422;
  double t3423;
  double t3432;
  double t3463;
  double t3467;
  double t3473;
  double t3515;
  double t3703;
  double t3761;
  double t3899;
  double t4225;
  double t4253;
  double t4268;
  double t528;
  double t623;
  double t627;
  double t640;
  double t642;
  double t4523;
  double t4530;
  double t4553;
  double t849;
  double t853;
  double t860;
  double t4683;
  double t717;
  double t722;
  double t723;
  double t1746;
  double t1762;
  double t1897;
  double t4627;
  double t4632;
  double t4658;
  double t4763;
  double t4764;
  double t4782;
  double t1207;
  double t1228;
  double t1292;
  double t3249;
  double t3304;
  double t3348;
  double t4986;
  double t5022;
  double t5031;
  double t5039;
  double t5044;
  double t5059;
  double t2993;
  double t3050;
  double t3092;
  double t3974;
  double t4014;
  double t4167;
  double t5136;
  double t5139;
  double t5179;
  double t5210;
  double t5229;
  double t5249;
  double t3476;
  double t3526;
  double t3649;
  double t5282;
  double t5286;
  double t5326;
  double t5350;
  double t5379;
  double t5387;
  double t4570;
  double t4611;
  double t4670;
  double t4693;
  double t4695;
  double t4710;
  double t4714;
  double t4732;
  double t4871;
  double t4872;
  double t4896;
  double t4911;
  double t4937;
  double t5037;
  double t5108;
  double t5185;
  double t5260;
  double t5335;
  double t5403;
  double t5409;
  double t5410;
  double t5429;
  double t5434;
  double t5503;
  double t5506;
  double t5514;
  double t5550;
  double t5552;
  double t5609;
  double t5627;
  double t5641;
  double t5678;
  double t5687;
  double t5699;
  double t5735;
  double t5804;
  double t5814;
  double t5842;
  double t5856;
  double t5860;
  double t5884;
  double t5914;
  double t5915;
  double t5984;
  double t5994;
  double t5998;
  double t6005;
  double t6007;
  double t6017;
  double t6019;
  double t6025;
  double t6051;
  double t6207;
  double t6210;
  double t6212;
  double t6492;
  double t6497;
  double t6517;
  double t6617;
  double t6618;
  double t6620;
  double t6636;
  double t6644;
  double t6658;
  double t6696;
  double t6707;
  double t6731;
  double t6786;
  double t6791;
  double t6827;
  double t6882;
  double t6893;
  double t6926;
  double t5708;
  double t5709;
  double t5713;
  double t6077;
  double t6079;
  double t6080;
  double t6103;
  double t6104;
  double t6111;
  double t5570;
  double t5579;
  double t5648;
  double t5667;
  double t5668;
  double t5671;
  double t5705;
  double t5724;
  double t5827;
  double t5869;
  double t5949;
  double t6003;
  double t6018;
  double t6054;
  double t6081;
  double t6167;
  double t6169;
  double t6176;
  double t6178;
  double t6179;
  double t7776;
  double t7806;
  double t7815;
  double t7821;
  double t7838;
  double t7844;
  double t7861;
  double t7863;
  double t7872;
  double t7899;
  double t7901;
  double t7914;
  double t7532;
  double t7579;
  double t7627;
  double t7632;
  double t7682;
  double t8066;
  double t8071;
  double t8078;
  double t8113;
  double t8158;
  double t8172;
  double t8232;
  double t8236;
  double t8243;
  double t8246;
  double t8251;
  double t8256;
  double t7277;
  double t7318;
  double t7324;
  double t7336;
  double t7339;
  double t7344;
  double t7348;
  double t7357;
  double t7360;
  double t7371;
  double t7377;
  double t7380;
  double t7397;
  double t7417;
  double t7438;
  double t7454;
  double t8397;
  double t8408;
  double t8411;
  double t8487;
  double t8488;
  double t8511;
  double t8516;
  double t8538;
  double t8570;
  double t8571;
  double t8579;
  double t8599;
  double t8604;
  double t8605;
  double t8352;
  double t8364;
  double t8372;
  double t8377;
  double t8379;
  double t8700;
  double t8702;
  double t8705;
  double t8718;
  double t8720;
  double t8736;
  double t8742;
  double t8755;
  double t8764;
  double t8765;
  double t8767;
  double t8781;
  double t8784;
  double t8788;
  double t8841;
  double t8844;
  double t8846;
  double t8855;
  double t8856;
  double t8027;
  double t8895;
  double t8896;
  double t8900;
  double t8911;
  double t8912;
  double t8922;
  double t8924;
  double t8926;
  double t8928;
  double t8929;
  double t8933;
  double t8935;
  double t8936;
  double t8937;
  double t8940;
  double t8942;
  double t8943;
  double t8946;
  double t8948;
  double t8950;
  double t8957;
  double t8960;
  double t8961;
  double t9011;
  double t9012;
  double t9031;
  double t9034;
  double t9040;
  double t9042;
  double t9045;
  double t8995;
  double t8998;
  double t8999;
  double t9001;
  double t9002;
  double t9005;
  double t9006;
  double t9007;
  double t9023;
  double t9024;
  double t9070;
  double t9071;
  double t9081;
  double t9082;
  double t9085;
  double t9086;
  double t9087;
  double t9118;
  double t9119;
  double t9120;
  double t9122;
  double t9125;
  double t9127;
  double t9132;
  double t9134;
  double t9136;
  double t9139;
  double t9141;
  double t9143;
  double t9145;
  double t9147;
  double t9148;
  double t9152;
  double t9153;
  double t9154;
  double t9156;
  double t9157;
  double t9159;
  double t9186;
  double t9187;
  double t9188;
  double t9190;
  double t9191;
  double t9193;
  double t9196;
  double t9197;
  double t9199;
  double t9202;
  double t9203;
  double t9205;
  double t9207;
  double t9208;
  double t9209;
  double t9212;
  double t9213;
  double t9214;
  double t9218;
  double t9219;
  double t9220;
  t10 = Cos(var1[3]);
  t47 = Sin(var1[14]);
  t158 = -1.*t10*t47;
  t176 = Cos(var1[14]);
  t196 = Cos(var1[4]);
  t214 = Sin(var1[3]);
  t223 = -1.*t176*t196*t214;
  t329 = t158 + t223;
  t352 = Cos(var1[15]);
  t629 = Sin(var1[15]);
  t697 = Cos(var1[16]);
  t711 = -1.*t697;
  t712 = 1. + t711;
  t718 = Sin(var1[16]);
  t873 = -1.*t176*t10;
  t918 = t196*t47*t214;
  t922 = t873 + t918;
  t1018 = Cos(var1[17]);
  t1100 = -1.*t1018;
  t1146 = 1. + t1100;
  t1222 = Sin(var1[17]);
  t2565 = -1.*var1[17];
  t2777 = 0.226893 + t2565;
  t1346 = -1.*t629*t718*t329;
  t1350 = t697*t922;
  t1472 = t1346 + t1350;
  t2181 = t697*t629*t329;
  t2220 = t718*t922;
  t2250 = t2181 + t2220;
  t2803 = Cos(t2777);
  t2905 = -1.*t2803;
  t2988 = 1. + t2905;
  t3009 = Sin(t2777);
  t3108 = t1222*t1472;
  t3146 = t1018*t2250;
  t3189 = t3108 + t3146;
  t3422 = t1018*t1472;
  t3423 = -1.*t1222*t2250;
  t3432 = t3422 + t3423;
  t3463 = Cos(var1[21]);
  t3467 = -1.*t3463;
  t3473 = 1. + t3467;
  t3515 = Sin(var1[21]);
  t3703 = -1.*t3009*t3189;
  t3761 = t2803*t3432;
  t3899 = t3703 + t3761;
  t4225 = t2803*t3189;
  t4253 = t3009*t3432;
  t4268 = t4225 + t4253;
  t528 = -1.*t352;
  t623 = 1. + t528;
  t627 = -0.135*t623;
  t640 = 0.049*t629;
  t642 = t627 + t640;
  t4523 = t10*t196*t47;
  t4530 = t176*t214;
  t4553 = t4523 + t4530;
  t849 = -0.09*t712;
  t853 = 0.049*t718;
  t860 = t849 + t853;
  t4683 = Sin(var1[4]);
  t717 = -0.049*t712;
  t722 = -0.09*t718;
  t723 = t717 + t722;
  t1746 = -0.049*t1146;
  t1762 = -0.21*t1222;
  t1897 = t1746 + t1762;
  t4627 = t176*t10*t196;
  t4632 = -1.*t47*t214;
  t4658 = t4627 + t4632;
  t4763 = t629*t4553;
  t4764 = -1.*t352*t10*t4683;
  t4782 = t4763 + t4764;
  t1207 = -0.21*t1146;
  t1228 = 0.049*t1222;
  t1292 = t1207 + t1228;
  t3249 = -0.70544*t2988;
  t3304 = -0.01841*t3009;
  t3348 = t3249 + t3304;
  t4986 = t718*t4658;
  t5022 = t697*t4782;
  t5031 = t4986 + t5022;
  t5039 = t697*t4658;
  t5044 = -1.*t718*t4782;
  t5059 = t5039 + t5044;
  t2993 = 0.01841*t2988;
  t3050 = -0.70544*t3009;
  t3092 = t2993 + t3050;
  t3974 = -0.02159*t3473;
  t4014 = -1.11344*t3515;
  t4167 = t3974 + t4014;
  t5136 = -1.*t1222*t5031;
  t5139 = t1018*t5059;
  t5179 = t5136 + t5139;
  t5210 = t1018*t5031;
  t5229 = t1222*t5059;
  t5249 = t5210 + t5229;
  t3476 = -1.11344*t3473;
  t3526 = 0.02159*t3515;
  t3649 = t3476 + t3526;
  t5282 = t3009*t5179;
  t5286 = t2803*t5249;
  t5326 = t5282 + t5286;
  t5350 = t2803*t5179;
  t5379 = -1.*t3009*t5249;
  t5387 = t5350 + t5379;
  t4570 = -0.135*t4553;
  t4611 = -1.*t642*t4553;
  t4670 = -1.*t860*t4658;
  t4693 = 0.049*t10*t4683;
  t4695 = -0.049*t623;
  t4710 = -0.135*t629;
  t4714 = t4695 + t4710;
  t4732 = t10*t4714*t4683;
  t4871 = -1.*t723*t4782;
  t4872 = t352*t4553;
  t4896 = t10*t629*t4683;
  t4911 = t4872 + t4896;
  t4937 = 0.1305*t4911;
  t5037 = -1.*t1897*t5031;
  t5108 = -1.*t1292*t5059;
  t5185 = -1.*t3348*t5179;
  t5260 = -1.*t3092*t5249;
  t5335 = -1.*t4167*t5326;
  t5403 = -1.*t3649*t5387;
  t5409 = -1.*t3515*t5326;
  t5410 = t3463*t5387;
  t5429 = t5409 + t5410;
  t5434 = 1.11344*t5429;
  t5503 = t3463*t5326;
  t5506 = t3515*t5387;
  t5514 = t5503 + t5506;
  t5550 = 0.02159*t5514;
  t5552 = t4570 + t4611 + t4670 + t4693 + t4732 + t4871 + t4937 + t5037 + t5108 + t5185 + t5260 + t5335 + t5403 + t5434 + t5550;
  t5609 = t176*t10;
  t5627 = -1.*t196*t47*t214;
  t5641 = t5609 + t5627;
  t5678 = t629*t5641;
  t5687 = t352*t214*t4683;
  t5699 = t5678 + t5687;
  t5735 = t718*t329;
  t5804 = t697*t5699;
  t5814 = t5735 + t5804;
  t5842 = t697*t329;
  t5856 = -1.*t718*t5699;
  t5860 = t5842 + t5856;
  t5884 = -1.*t1222*t5814;
  t5914 = t1018*t5860;
  t5915 = t5884 + t5914;
  t5984 = t1018*t5814;
  t5994 = t1222*t5860;
  t5998 = t5984 + t5994;
  t6005 = t3009*t5915;
  t6007 = t2803*t5998;
  t6017 = t6005 + t6007;
  t6019 = t2803*t5915;
  t6025 = -1.*t3009*t5998;
  t6051 = t6019 + t6025;
  t6207 = -1.*t10*t196*t47;
  t6210 = -1.*t176*t214;
  t6212 = t6207 + t6210;
  t6492 = t718*t6212;
  t6497 = t697*t629*t4658;
  t6517 = t6492 + t6497;
  t6617 = t697*t6212;
  t6618 = -1.*t629*t718*t4658;
  t6620 = t6617 + t6618;
  t6636 = -1.*t1222*t6517;
  t6644 = t1018*t6620;
  t6658 = t6636 + t6644;
  t6696 = t1018*t6517;
  t6707 = t1222*t6620;
  t6731 = t6696 + t6707;
  t6786 = t3009*t6658;
  t6791 = t2803*t6731;
  t6827 = t6786 + t6791;
  t6882 = t2803*t6658;
  t6893 = -1.*t3009*t6731;
  t6926 = t6882 + t6893;
  t5708 = t352*t5641;
  t5709 = -1.*t629*t214*t4683;
  t5713 = t5708 + t5709;
  t6077 = -1.*t3515*t6017;
  t6079 = t3463*t6051;
  t6080 = t6077 + t6079;
  t6103 = t3463*t6017;
  t6104 = t3515*t6051;
  t6111 = t6103 + t6104;
  t5570 = Power(t5552,2);
  t5579 = t860*t329;
  t5648 = 0.135*t5641;
  t5667 = t642*t5641;
  t5668 = 0.049*t214*t4683;
  t5671 = t4714*t214*t4683;
  t5705 = t723*t5699;
  t5724 = -0.1305*t5713;
  t5827 = t1897*t5814;
  t5869 = t1292*t5860;
  t5949 = t3348*t5915;
  t6003 = t3092*t5998;
  t6018 = t4167*t6017;
  t6054 = t3649*t6051;
  t6081 = -1.11344*t6080;
  t6167 = -0.02159*t6111;
  t6169 = t5579 + t5648 + t5667 + t5668 + t5671 + t5705 + t5724 + t5827 + t5869 + t5949 + t6003 + t6018 + t6054 + t6081 + t6167;
  t6176 = Power(t6169,2);
  t6178 = t5570 + t6176;
  t6179 = 1/t6178;
  t7776 = -1.*t1018*t718*t5713;
  t7806 = -1.*t697*t1222*t5713;
  t7815 = t7776 + t7806;
  t7821 = t697*t1018*t5713;
  t7838 = -1.*t718*t1222*t5713;
  t7844 = t7821 + t7838;
  t7861 = t3009*t7815;
  t7863 = t2803*t7844;
  t7872 = t7861 + t7863;
  t7899 = t2803*t7815;
  t7901 = -1.*t3009*t7844;
  t7914 = t7899 + t7901;
  t7532 = 0.049*t352;
  t7579 = t7532 + t4710;
  t7627 = -0.135*t352;
  t7632 = -0.049*t629;
  t7682 = t7627 + t7632;
  t8066 = -1.*t1018*t718*t4911;
  t8071 = -1.*t697*t1222*t4911;
  t8078 = t8066 + t8071;
  t8113 = t697*t1018*t4911;
  t8158 = -1.*t718*t1222*t4911;
  t8172 = t8113 + t8158;
  t8232 = t3009*t8078;
  t8236 = t2803*t8172;
  t8243 = t8232 + t8236;
  t8246 = t2803*t8078;
  t8251 = -1.*t3009*t8172;
  t8256 = t8246 + t8251;
  t7277 = -1.*t860*t329;
  t7318 = -0.135*t5641;
  t7324 = -1.*t642*t5641;
  t7336 = -0.049*t214*t4683;
  t7339 = -1.*t4714*t214*t4683;
  t7344 = -1.*t723*t5699;
  t7348 = 0.1305*t5713;
  t7357 = -1.*t1897*t5814;
  t7360 = -1.*t1292*t5860;
  t7371 = -1.*t3348*t5915;
  t7377 = -1.*t3092*t5998;
  t7380 = -1.*t4167*t6017;
  t7397 = -1.*t3649*t6051;
  t7417 = 1.11344*t6080;
  t7438 = 0.02159*t6111;
  t7454 = t7277 + t7318 + t7324 + t7336 + t7339 + t7344 + t7348 + t7357 + t7360 + t7371 + t7377 + t7380 + t7397 + t7417 + t7438;
  t8397 = -1.*t718*t329;
  t8408 = -1.*t697*t5699;
  t8411 = t8397 + t8408;
  t8487 = t1222*t8411;
  t8488 = t8487 + t5914;
  t8511 = t1018*t8411;
  t8516 = -1.*t1222*t5860;
  t8538 = t8511 + t8516;
  t8570 = -1.*t3009*t8488;
  t8571 = t2803*t8538;
  t8579 = t8570 + t8571;
  t8599 = t2803*t8488;
  t8604 = t3009*t8538;
  t8605 = t8599 + t8604;
  t8352 = 0.049*t697;
  t8364 = t8352 + t722;
  t8372 = -0.09*t697;
  t8377 = -0.049*t718;
  t8379 = t8372 + t8377;
  t8700 = -1.*t718*t4658;
  t8702 = -1.*t697*t4782;
  t8705 = t8700 + t8702;
  t8718 = t1222*t8705;
  t8720 = t8718 + t5139;
  t8736 = t1018*t8705;
  t8742 = -1.*t1222*t5059;
  t8755 = t8736 + t8742;
  t8764 = -1.*t3009*t8720;
  t8765 = t2803*t8755;
  t8767 = t8764 + t8765;
  t8781 = t2803*t8720;
  t8784 = t3009*t8755;
  t8788 = t8781 + t8784;
  t8841 = -1.11344*t3463;
  t8844 = -0.02159*t3515;
  t8846 = t8841 + t8844;
  t8855 = 0.02159*t3463;
  t8856 = t8855 + t4014;
  t8027 = t352*t10*t4683;
  t8895 = -1.*t176*t10*t196;
  t8896 = t47*t214;
  t8900 = t8895 + t8896;
  t8911 = t629*t6212;
  t8912 = t8911 + t8027;
  t8922 = t718*t8900;
  t8924 = t697*t8912;
  t8926 = t8922 + t8924;
  t8928 = t697*t8900;
  t8929 = -1.*t718*t8912;
  t8933 = t8928 + t8929;
  t8935 = -1.*t1222*t8926;
  t8936 = t1018*t8933;
  t8937 = t8935 + t8936;
  t8940 = t1018*t8926;
  t8942 = t1222*t8933;
  t8943 = t8940 + t8942;
  t8946 = t3009*t8937;
  t8948 = t2803*t8943;
  t8950 = t8946 + t8948;
  t8957 = t2803*t8937;
  t8960 = -1.*t3009*t8943;
  t8961 = t8957 + t8960;
  t9011 = -1.*t1018*t5031;
  t9012 = t9011 + t8742;
  t9031 = t2803*t9012;
  t9034 = t9031 + t5286;
  t9040 = t3009*t9012;
  t9042 = t3009*t5249;
  t9045 = t9040 + t9042;
  t8995 = -0.21*t1018;
  t8998 = -0.049*t1222;
  t8999 = t8995 + t8998;
  t9001 = 0.049*t1018;
  t9002 = t9001 + t1762;
  t9005 = 0.01841*t2803;
  t9006 = 0.70544*t3009;
  t9007 = t9005 + t9006;
  t9023 = 0.70544*t2803;
  t9024 = t9023 + t3304;
  t9070 = -1.*t1018*t5814;
  t9071 = t9070 + t8516;
  t9081 = t2803*t9071;
  t9082 = t9081 + t6007;
  t9085 = t3009*t9071;
  t9086 = t3009*t5998;
  t9087 = t9085 + t9086;
  t9118 = -1.*t352*t10*t196;
  t9119 = -1.*t10*t47*t629*t4683;
  t9120 = t9118 + t9119;
  t9122 = -1.*t176*t10*t718*t4683;
  t9125 = t697*t9120;
  t9127 = t9122 + t9125;
  t9132 = -1.*t176*t697*t10*t4683;
  t9134 = -1.*t718*t9120;
  t9136 = t9132 + t9134;
  t9139 = -1.*t1222*t9127;
  t9141 = t1018*t9136;
  t9143 = t9139 + t9141;
  t9145 = t1018*t9127;
  t9147 = t1222*t9136;
  t9148 = t9145 + t9147;
  t9152 = t3009*t9143;
  t9153 = t2803*t9148;
  t9154 = t9152 + t9153;
  t9156 = t2803*t9143;
  t9157 = -1.*t3009*t9148;
  t9159 = t9156 + t9157;
  t9186 = t352*t196*t214;
  t9187 = t47*t629*t214*t4683;
  t9188 = t9186 + t9187;
  t9190 = t176*t718*t214*t4683;
  t9191 = t697*t9188;
  t9193 = t9190 + t9191;
  t9196 = t176*t697*t214*t4683;
  t9197 = -1.*t718*t9188;
  t9199 = t9196 + t9197;
  t9202 = -1.*t1222*t9193;
  t9203 = t1018*t9199;
  t9205 = t9202 + t9203;
  t9207 = t1018*t9193;
  t9208 = t1222*t9199;
  t9209 = t9207 + t9208;
  t9212 = t3009*t9205;
  t9213 = t2803*t9209;
  t9214 = t9212 + t9213;
  t9218 = t2803*t9205;
  t9219 = -1.*t3009*t9209;
  t9220 = t9218 + t9219;
  p_output1[0]=(t6179*Power(t7454,2) + t5552*t6179*(t4693 + t4732 + 0.135*t6212 - 0.1305*(t352*t6212 - 1.*t10*t4683*t629) + t6212*t642 + t860*t8900 + t723*t8912 + t1897*t8926 + t1292*t8933 + t3348*t8937 + t3092*t8943 + t4167*t8950 + t3649*t8961 - 1.11344*(-1.*t3515*t8950 + t3463*t8961) - 0.02159*(t3463*t8950 + t3515*t8961)))*var2[3] + (t6179*t7454*(0.049*t10*t196 + 0.135*t10*t4683*t47 + t10*t196*t4714 + 0.1305*(-1.*t10*t352*t4683*t47 + t10*t196*t629) + t10*t4683*t47*t642 + t10*t176*t4683*t860 - 1.*t723*t9120 - 1.*t1897*t9127 - 1.*t1292*t9136 - 1.*t3348*t9143 - 1.*t3092*t9148 - 1.*t4167*t9154 - 1.*t3649*t9159 + 1.11344*(-1.*t3515*t9154 + t3463*t9159) + 0.02159*(t3463*t9154 + t3515*t9159)) + t5552*t6179*(0.049*t196*t214 + 0.135*t214*t4683*t47 + t196*t214*t4714 - 0.1305*(t214*t352*t4683*t47 - 1.*t196*t214*t629) + t214*t4683*t47*t642 + t176*t214*t4683*t860 + t723*t9188 + t1897*t9193 + t1292*t9199 + t3348*t9205 + t3092*t9209 + t4167*t9214 + t3649*t9220 - 1.11344*(-1.*t3515*t9214 + t3463*t9220) - 0.02159*(t3463*t9214 + t3515*t9220)))*var2[4] + (t6179*t7454*(-0.135*t4658 + 0.1305*t352*t4658 - 1.*t4658*t642 - 1.*t1897*t6517 - 1.*t1292*t6620 - 1.*t3348*t6658 - 1.*t3092*t6731 - 1.*t4167*t6827 - 1.*t3649*t6926 + 1.11344*(-1.*t3515*t6827 + t3463*t6926) + 0.02159*(t3463*t6827 + t3515*t6926) - 1.*t4658*t629*t723 - 1.*t6212*t860) + t5552*t6179*(t1292*t1472 + t1897*t2250 + t3092*t3189 + 0.135*t329 + t3348*t3432 - 0.1305*t329*t352 + t3649*t3899 + t4167*t4268 - 0.02159*(t3515*t3899 + t3463*t4268) - 1.11344*(t3463*t3899 - 1.*t3515*t4268) + t329*t642 + t329*t629*t723 + t860*t922))*var2[14] + (t5552*t6179*(-0.1305*(-1.*t214*t352*t4683 - 1.*t5641*t629) + t1897*t5713*t697 - 1.*t1292*t5713*t718 + t5713*t723 + t5641*t7579 + t214*t4683*t7682 + t3348*t7815 + t3092*t7844 + t4167*t7872 + t3649*t7914 - 1.11344*(-1.*t3515*t7872 + t3463*t7914) - 0.02159*(t3463*t7872 + t3515*t7914)) + t6179*t7454*(-1.*t1897*t4911*t697 + t1292*t4911*t718 - 1.*t4911*t723 - 1.*t4553*t7579 + t10*t4683*t7682 + 0.1305*(-1.*t4553*t629 + t8027) - 1.*t3348*t8078 - 1.*t3092*t8172 - 1.*t4167*t8243 - 1.*t3649*t8256 + 1.11344*(-1.*t3515*t8243 + t3463*t8256) + 0.02159*(t3463*t8243 + t3515*t8256)))*var2[15] + (t5552*t6179*(t1897*t5860 + t329*t8364 + t5699*t8379 + t1292*t8411 + t3092*t8488 + t3348*t8538 + t3649*t8579 + t4167*t8605 - 0.02159*(t3515*t8579 + t3463*t8605) - 1.11344*(t3463*t8579 - 1.*t3515*t8605)) + t6179*t7454*(-1.*t1897*t5059 - 1.*t4658*t8364 - 1.*t4782*t8379 - 1.*t1292*t8705 - 1.*t3092*t8720 - 1.*t3348*t8755 - 1.*t3649*t8767 - 1.*t4167*t8788 + 0.02159*(t3515*t8767 + t3463*t8788) + 1.11344*(t3463*t8767 - 1.*t3515*t8788)))*var2[16] + (t6179*t7454*(-1.*t3092*t5179 - 1.*t5031*t8999 - 1.*t5059*t9002 - 1.*t5179*t9007 - 1.*t3348*t9012 - 1.*t5249*t9024 - 1.*t3649*t9034 - 1.*t4167*t9045 + 0.02159*(t3515*t9034 + t3463*t9045) + 1.11344*(t3463*t9034 - 1.*t3515*t9045)) + t5552*t6179*(t3092*t5915 + t5814*t8999 + t5860*t9002 + t5915*t9007 + t5998*t9024 + t3348*t9071 + t3649*t9082 + t4167*t9087 - 0.02159*(t3515*t9082 + t3463*t9087) - 1.11344*(t3463*t9082 - 1.*t3515*t9087)))*var2[17] + (t6179*t7454*(1.11344*(-1.*t3463*t5326 - 1.*t3515*t5387) + 0.02159*t5429 - 1.*t5326*t8846 - 1.*t5387*t8856) + t5552*t6179*(-1.11344*(-1.*t3463*t6017 - 1.*t3515*t6051) - 0.02159*t6080 + t6017*t8846 + t6051*t8856))*var2[21];
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




