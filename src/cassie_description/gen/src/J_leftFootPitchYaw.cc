/*
 * Automatically Generated from Mathematica.
 * Thu 8 Mar 2018 14:44:35 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "J_leftFootPitchYaw.hh"
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


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t1265;
  double t1052;
  double t1083;
  double t1170;
  double t1269;
  double t1955;
  double t1817;
  double t1861;
  double t1878;
  double t1913;
  double t1966;
  double t1019;
  double t2348;
  double t2356;
  double t2378;
  double t1045;
  double t1235;
  double t1478;
  double t1488;
  double t1680;
  double t1936;
  double t2032;
  double t2061;
  double t2070;
  double t2095;
  double t2212;
  double t2413;
  double t2535;
  double t2254;
  double t2417;
  double t2476;
  double t1012;
  double t2581;
  double t2613;
  double t2624;
  double t2659;
  double t2501;
  double t2645;
  double t2649;
  double t1007;
  double t2725;
  double t2726;
  double t2757;
  double t2867;
  double t2652;
  double t2762;
  double t2825;
  double t644;
  double t2909;
  double t2961;
  double t2986;
  double t3215;
  double t2854;
  double t3082;
  double t3132;
  double t594;
  double t3233;
  double t3242;
  double t3244;
  double t3429;
  double t3442;
  double t3444;
  double t3551;
  double t3554;
  double t3559;
  double t3411;
  double t3415;
  double t3418;
  double t3426;
  double t3452;
  double t3453;
  double t3455;
  double t3474;
  double t3486;
  double t3489;
  double t3567;
  double t3597;
  double t3604;
  double t3673;
  double t3674;
  double t3598;
  double t3682;
  double t3684;
  double t3708;
  double t3710;
  double t3751;
  double t3687;
  double t3754;
  double t3790;
  double t3810;
  double t3812;
  double t3840;
  double t3797;
  double t3844;
  double t3845;
  double t3908;
  double t3916;
  double t3925;
  double t4030;
  double t4042;
  double t4051;
  double t4267;
  double t4269;
  double t4278;
  double t4004;
  double t4009;
  double t4014;
  double t4022;
  double t4120;
  double t4226;
  double t4228;
  double t4240;
  double t4247;
  double t4248;
  double t4378;
  double t4418;
  double t4425;
  double t4427;
  double t4435;
  double t4420;
  double t4436;
  double t4437;
  double t4448;
  double t4481;
  double t4508;
  double t4441;
  double t4517;
  double t4526;
  double t4535;
  double t4602;
  double t4607;
  double t4534;
  double t4641;
  double t4642;
  double t4701;
  double t4709;
  double t4718;
  double t3139;
  double t3265;
  double t3320;
  double t3363;
  double t3369;
  double t3397;
  double t5040;
  double t5051;
  double t5053;
  double t4923;
  double t4928;
  double t4934;
  double t4940;
  double t4957;
  double t5032;
  double t5034;
  double t5071;
  double t5093;
  double t5129;
  double t5139;
  double t5147;
  double t5122;
  double t5148;
  double t5167;
  double t5180;
  double t5187;
  double t5194;
  double t5174;
  double t5198;
  double t5214;
  double t5216;
  double t5219;
  double t5220;
  double t5215;
  double t5257;
  double t5266;
  double t5280;
  double t5288;
  double t5306;
  double t3901;
  double t3932;
  double t3940;
  double t3947;
  double t3966;
  double t3969;
  double t3973;
  double t3980;
  double t3981;
  double t3990;
  double t3998;
  double t4000;
  double t5541;
  double t5567;
  double t5572;
  double t5432;
  double t5442;
  double t5460;
  double t5483;
  double t5486;
  double t5489;
  double t5527;
  double t5575;
  double t5639;
  double t5681;
  double t5686;
  double t5704;
  double t5672;
  double t5715;
  double t5719;
  double t5810;
  double t5811;
  double t5890;
  double t5737;
  double t5983;
  double t5985;
  double t5995;
  double t6006;
  double t6016;
  double t5993;
  double t6021;
  double t6032;
  double t6098;
  double t6101;
  double t6103;
  double t4900;
  double t4905;
  double t4906;
  double t4916;
  double t4917;
  double t4920;
  double t6148;
  double t6181;
  double t6269;
  double t6270;
  double t6277;
  double t6279;
  double t6292;
  double t6297;
  double t6299;
  double t6291;
  double t6330;
  double t6375;
  double t6392;
  double t6422;
  double t6424;
  double t6387;
  double t6446;
  double t6448;
  double t6455;
  double t6459;
  double t6464;
  double t6449;
  double t6465;
  double t6491;
  double t6533;
  double t6561;
  double t6565;
  double t6765;
  double t6842;
  double t6876;
  double t6723;
  double t6961;
  double t7100;
  double t7157;
  double t7290;
  double t7342;
  double t7448;
  double t7462;
  double t7770;
  double t7423;
  double t7827;
  double t8159;
  double t8737;
  double t8898;
  double t9001;
  double t8612;
  double t9125;
  double t9135;
  double t9197;
  double t9213;
  double t9254;
  double t9192;
  double t9315;
  double t9353;
  double t9370;
  double t9380;
  double t9403;
  double t9910;
  double t9920;
  double t9892;
  double t9969;
  double t9999;
  double t10286;
  double t10341;
  double t10368;
  double t10189;
  double t10437;
  double t10451;
  double t10529;
  double t10580;
  double t10734;
  double t10524;
  double t10820;
  double t10830;
  double t10972;
  double t11030;
  double t11048;
  double t10933;
  double t11092;
  double t11108;
  double t11147;
  double t11177;
  double t11185;
  double t11321;
  double t11425;
  double t11428;
  double t11315;
  double t11431;
  double t11457;
  double t11499;
  double t11526;
  double t11543;
  double t11498;
  double t11561;
  double t11568;
  double t11633;
  double t11634;
  double t11641;
  double t11629;
  double t11667;
  double t11677;
  double t11722;
  double t11784;
  double t11845;
  double t11720;
  double t11854;
  double t11858;
  double t11903;
  double t11926;
  double t11942;
  double t12194;
  double t12211;
  double t12214;
  double t12218;
  double t12223;
  double t12246;
  double t12267;
  double t12276;
  double t12310;
  double t12266;
  double t12317;
  double t12318;
  double t12374;
  double t12389;
  double t12441;
  double t12368;
  double t12453;
  double t12455;
  double t12526;
  double t12529;
  double t12539;
  double t12636;
  double t12646;
  double t12647;
  double t12648;
  double t12656;
  double t12662;
  double t12709;
  double t12714;
  double t12724;
  double t12673;
  double t12729;
  double t12736;
  double t12748;
  double t12750;
  double t12755;
  double t12737;
  double t12764;
  double t12783;
  double t12802;
  double t12803;
  double t12804;
  double t12981;
  double t13012;
  double t13017;
  double t13055;
  double t13058;
  double t13063;
  double t13065;
  double t13067;
  double t13062;
  double t13072;
  double t13074;
  double t13076;
  double t13081;
  double t13082;
  double t13075;
  double t13229;
  double t13239;
  double t13246;
  double t13259;
  double t13278;
  double t13373;
  double t13374;
  double t13375;
  double t13379;
  double t13386;
  double t13391;
  double t13392;
  double t13400;
  double t13387;
  double t13404;
  double t13407;
  double t13409;
  double t13415;
  double t13416;
  double t13408;
  double t13432;
  double t13437;
  double t13449;
  double t13451;
  double t13454;
  double t13533;
  double t13555;
  double t13531;
  double t13566;
  double t13573;
  double t13586;
  double t13588;
  double t13579;
  double t13593;
  double t13602;
  double t13606;
  double t13616;
  double t13626;
  double t13728;
  double t13748;
  double t13721;
  double t13764;
  double t13773;
  double t13784;
  double t13807;
  double t13780;
  double t13817;
  double t13819;
  double t13839;
  double t13850;
  double t13855;
  double t13890;
  double t13897;
  double t13901;
  double t13909;
  double t13934;
  double t13940;
  double t13949;
  double t13991;
  double t13993;
  double t13994;
  double t14005;
  double t14025;
  double t14026;
  double t14030;
  double t14143;
  double t14157;
  double t14220;
  double t14224;
  double t14136;
  double t14215;
  t1265 = Cos(var1[3]);
  t1052 = Cos(var1[5]);
  t1083 = Sin(var1[3]);
  t1170 = Sin(var1[4]);
  t1269 = Sin(var1[5]);
  t1955 = Cos(var1[4]);
  t1817 = Cos(var1[6]);
  t1861 = t1265*t1052;
  t1878 = -1.*t1083*t1170*t1269;
  t1913 = t1861 + t1878;
  t1966 = Sin(var1[6]);
  t1019 = Cos(var1[8]);
  t2348 = -1.*t1955*t1817*t1083;
  t2356 = -1.*t1913*t1966;
  t2378 = t2348 + t2356;
  t1045 = Cos(var1[7]);
  t1235 = t1052*t1083*t1170;
  t1478 = t1265*t1269;
  t1488 = t1235 + t1478;
  t1680 = t1045*t1488;
  t1936 = t1817*t1913;
  t2032 = -1.*t1955*t1083*t1966;
  t2061 = t1936 + t2032;
  t2070 = Sin(var1[7]);
  t2095 = t2061*t2070;
  t2212 = t1680 + t2095;
  t2413 = Sin(var1[8]);
  t2535 = Cos(var1[9]);
  t2254 = t1019*t2212;
  t2417 = t2378*t2413;
  t2476 = t2254 + t2417;
  t1012 = Sin(var1[9]);
  t2581 = t1019*t2378;
  t2613 = -1.*t2212*t2413;
  t2624 = t2581 + t2613;
  t2659 = Cos(var1[10]);
  t2501 = -1.*t1012*t2476;
  t2645 = t2535*t2624;
  t2649 = t2501 + t2645;
  t1007 = Sin(var1[10]);
  t2725 = t2535*t2476;
  t2726 = t1012*t2624;
  t2757 = t2725 + t2726;
  t2867 = Cos(var1[11]);
  t2652 = t1007*t2649;
  t2762 = t2659*t2757;
  t2825 = t2652 + t2762;
  t644 = Sin(var1[11]);
  t2909 = t2659*t2649;
  t2961 = -1.*t1007*t2757;
  t2986 = t2909 + t2961;
  t3215 = Cos(var1[13]);
  t2854 = -1.*t644*t2825;
  t3082 = t2867*t2986;
  t3132 = t2854 + t3082;
  t594 = Sin(var1[13]);
  t3233 = t2867*t2825;
  t3242 = t644*t2986;
  t3244 = t3233 + t3242;
  t3429 = t1052*t1083;
  t3442 = t1265*t1170*t1269;
  t3444 = t3429 + t3442;
  t3551 = t1265*t1955*t1817;
  t3554 = -1.*t3444*t1966;
  t3559 = t3551 + t3554;
  t3411 = -1.*t1265*t1052*t1170;
  t3415 = t1083*t1269;
  t3418 = t3411 + t3415;
  t3426 = t1045*t3418;
  t3452 = t1817*t3444;
  t3453 = t1265*t1955*t1966;
  t3455 = t3452 + t3453;
  t3474 = t3455*t2070;
  t3486 = t3426 + t3474;
  t3489 = t1019*t3486;
  t3567 = t3559*t2413;
  t3597 = t3489 + t3567;
  t3604 = t1019*t3559;
  t3673 = -1.*t3486*t2413;
  t3674 = t3604 + t3673;
  t3598 = -1.*t1012*t3597;
  t3682 = t2535*t3674;
  t3684 = t3598 + t3682;
  t3708 = t2535*t3597;
  t3710 = t1012*t3674;
  t3751 = t3708 + t3710;
  t3687 = t1007*t3684;
  t3754 = t2659*t3751;
  t3790 = t3687 + t3754;
  t3810 = t2659*t3684;
  t3812 = -1.*t1007*t3751;
  t3840 = t3810 + t3812;
  t3797 = -1.*t644*t3790;
  t3844 = t2867*t3840;
  t3845 = t3797 + t3844;
  t3908 = t2867*t3790;
  t3916 = t644*t3840;
  t3925 = t3908 + t3916;
  t4030 = -1.*t1052*t1083;
  t4042 = -1.*t1265*t1170*t1269;
  t4051 = t4030 + t4042;
  t4267 = -1.*t1265*t1955*t1817;
  t4269 = -1.*t4051*t1966;
  t4278 = t4267 + t4269;
  t4004 = t1265*t1052*t1170;
  t4009 = -1.*t1083*t1269;
  t4014 = t4004 + t4009;
  t4022 = t1045*t4014;
  t4120 = t1817*t4051;
  t4226 = -1.*t1265*t1955*t1966;
  t4228 = t4120 + t4226;
  t4240 = t4228*t2070;
  t4247 = t4022 + t4240;
  t4248 = t1019*t4247;
  t4378 = t4278*t2413;
  t4418 = t4248 + t4378;
  t4425 = t1019*t4278;
  t4427 = -1.*t4247*t2413;
  t4435 = t4425 + t4427;
  t4420 = -1.*t1012*t4418;
  t4436 = t2535*t4435;
  t4437 = t4420 + t4436;
  t4448 = t2535*t4418;
  t4481 = t1012*t4435;
  t4508 = t4448 + t4481;
  t4441 = t1007*t4437;
  t4517 = t2659*t4508;
  t4526 = t4441 + t4517;
  t4535 = t2659*t4437;
  t4602 = -1.*t1007*t4508;
  t4607 = t4535 + t4602;
  t4534 = -1.*t644*t4526;
  t4641 = t2867*t4607;
  t4642 = t4534 + t4641;
  t4701 = t2867*t4526;
  t4709 = t644*t4607;
  t4718 = t4701 + t4709;
  t3139 = t594*t3132;
  t3265 = t3215*t3244;
  t3320 = t3139 + t3265;
  t3363 = t3215*t3132;
  t3369 = -1.*t594*t3244;
  t3397 = t3363 + t3369;
  t5040 = -1.*t1265*t1817*t1170;
  t5051 = -1.*t1265*t1955*t1269*t1966;
  t5053 = t5040 + t5051;
  t4923 = -1.*t1265*t1955*t1052*t1045;
  t4928 = t1265*t1955*t1817*t1269;
  t4934 = -1.*t1265*t1170*t1966;
  t4940 = t4928 + t4934;
  t4957 = t4940*t2070;
  t5032 = t4923 + t4957;
  t5034 = t1019*t5032;
  t5071 = t5053*t2413;
  t5093 = t5034 + t5071;
  t5129 = t1019*t5053;
  t5139 = -1.*t5032*t2413;
  t5147 = t5129 + t5139;
  t5122 = -1.*t1012*t5093;
  t5148 = t2535*t5147;
  t5167 = t5122 + t5148;
  t5180 = t2535*t5093;
  t5187 = t1012*t5147;
  t5194 = t5180 + t5187;
  t5174 = t1007*t5167;
  t5198 = t2659*t5194;
  t5214 = t5174 + t5198;
  t5216 = t2659*t5167;
  t5219 = -1.*t1007*t5194;
  t5220 = t5216 + t5219;
  t5215 = -1.*t644*t5214;
  t5257 = t2867*t5220;
  t5266 = t5215 + t5257;
  t5280 = t2867*t5214;
  t5288 = t644*t5220;
  t5306 = t5280 + t5288;
  t3901 = t594*t3845;
  t3932 = t3215*t3925;
  t3940 = t3901 + t3932;
  t3947 = -0.112142*t3940;
  t3966 = t3215*t3845;
  t3969 = -1.*t594*t3925;
  t3973 = t3966 + t3969;
  t3980 = -0.133646*t3973;
  t3981 = t3947 + t3980;
  t3990 = Power(t3981,2);
  t3998 = 0.03048516 + t3990;
  t4000 = 1/t3998;
  t5541 = t1817*t1083*t1170;
  t5567 = t1955*t1083*t1269*t1966;
  t5572 = t5541 + t5567;
  t5432 = t1955*t1052*t1045*t1083;
  t5442 = -1.*t1955*t1817*t1083*t1269;
  t5460 = t1083*t1170*t1966;
  t5483 = t5442 + t5460;
  t5486 = t5483*t2070;
  t5489 = t5432 + t5486;
  t5527 = t1019*t5489;
  t5575 = t5572*t2413;
  t5639 = t5527 + t5575;
  t5681 = t1019*t5572;
  t5686 = -1.*t5489*t2413;
  t5704 = t5681 + t5686;
  t5672 = -1.*t1012*t5639;
  t5715 = t2535*t5704;
  t5719 = t5672 + t5715;
  t5810 = t2535*t5639;
  t5811 = t1012*t5704;
  t5890 = t5810 + t5811;
  t5737 = t1007*t5719;
  t5983 = t2659*t5890;
  t5985 = t5737 + t5983;
  t5995 = t2659*t5719;
  t6006 = -1.*t1007*t5890;
  t6016 = t5995 + t6006;
  t5993 = -1.*t644*t5985;
  t6021 = t2867*t6016;
  t6032 = t5993 + t6021;
  t6098 = t2867*t5985;
  t6101 = t644*t6016;
  t6103 = t6098 + t6101;
  t4900 = 0.112142*t3320;
  t4905 = 0.133646*t3397;
  t4906 = t4900 + t4905;
  t4916 = Power(t4906,2);
  t4917 = 0.03048516 + t4916;
  t4920 = 1/t4917;
  t6148 = t1045*t3444;
  t6181 = t1817*t4014*t2070;
  t6269 = t6148 + t6181;
  t6270 = t1019*t6269;
  t6277 = -1.*t4014*t1966*t2413;
  t6279 = t6270 + t6277;
  t6292 = -1.*t1019*t4014*t1966;
  t6297 = -1.*t6269*t2413;
  t6299 = t6292 + t6297;
  t6291 = -1.*t1012*t6279;
  t6330 = t2535*t6299;
  t6375 = t6291 + t6330;
  t6392 = t2535*t6279;
  t6422 = t1012*t6299;
  t6424 = t6392 + t6422;
  t6387 = t1007*t6375;
  t6446 = t2659*t6424;
  t6448 = t6387 + t6446;
  t6455 = t2659*t6375;
  t6459 = -1.*t1007*t6424;
  t6464 = t6455 + t6459;
  t6449 = -1.*t644*t6448;
  t6465 = t2867*t6464;
  t6491 = t6449 + t6465;
  t6533 = t2867*t6448;
  t6561 = t644*t6464;
  t6565 = t6533 + t6561;
  t6765 = -1.*t1052*t1083*t1170;
  t6842 = -1.*t1265*t1269;
  t6876 = t6765 + t6842;
  t6723 = t1045*t1913;
  t6961 = t1817*t6876*t2070;
  t7100 = t6723 + t6961;
  t7157 = t1019*t7100;
  t7290 = -1.*t6876*t1966*t2413;
  t7342 = t7157 + t7290;
  t7448 = -1.*t1019*t6876*t1966;
  t7462 = -1.*t7100*t2413;
  t7770 = t7448 + t7462;
  t7423 = -1.*t1012*t7342;
  t7827 = t2535*t7770;
  t8159 = t7423 + t7827;
  t8737 = t2535*t7342;
  t8898 = t1012*t7770;
  t9001 = t8737 + t8898;
  t8612 = t1007*t8159;
  t9125 = t2659*t9001;
  t9135 = t8612 + t9125;
  t9197 = t2659*t8159;
  t9213 = -1.*t1007*t9001;
  t9254 = t9197 + t9213;
  t9192 = -1.*t644*t9135;
  t9315 = t2867*t9254;
  t9353 = t9192 + t9315;
  t9370 = t2867*t9135;
  t9380 = t644*t9254;
  t9403 = t9370 + t9380;
  t9910 = -1.*t1817*t3444;
  t9920 = t9910 + t4226;
  t9892 = t1019*t3559*t2070;
  t9969 = t9920*t2413;
  t9999 = t9892 + t9969;
  t10286 = t1019*t9920;
  t10341 = -1.*t3559*t2070*t2413;
  t10368 = t10286 + t10341;
  t10189 = -1.*t1012*t9999;
  t10437 = t2535*t10368;
  t10451 = t10189 + t10437;
  t10529 = t2535*t9999;
  t10580 = t1012*t10368;
  t10734 = t10529 + t10580;
  t10524 = t1007*t10451;
  t10820 = t2659*t10734;
  t10830 = t10524 + t10820;
  t10972 = t2659*t10451;
  t11030 = -1.*t1007*t10734;
  t11048 = t10972 + t11030;
  t10933 = -1.*t644*t10830;
  t11092 = t2867*t11048;
  t11108 = t10933 + t11092;
  t11147 = t2867*t10830;
  t11177 = t644*t11048;
  t11185 = t11147 + t11177;
  t11321 = -1.*t1817*t1913;
  t11425 = t1955*t1083*t1966;
  t11428 = t11321 + t11425;
  t11315 = t1019*t2378*t2070;
  t11431 = t11428*t2413;
  t11457 = t11315 + t11431;
  t11499 = t1019*t11428;
  t11526 = -1.*t2378*t2070*t2413;
  t11543 = t11499 + t11526;
  t11498 = -1.*t1012*t11457;
  t11561 = t2535*t11543;
  t11568 = t11498 + t11561;
  t11633 = t2535*t11457;
  t11634 = t1012*t11543;
  t11641 = t11633 + t11634;
  t11629 = t1007*t11568;
  t11667 = t2659*t11641;
  t11677 = t11629 + t11667;
  t11722 = t2659*t11568;
  t11784 = -1.*t1007*t11641;
  t11845 = t11722 + t11784;
  t11720 = -1.*t644*t11677;
  t11854 = t2867*t11845;
  t11858 = t11720 + t11854;
  t11903 = t2867*t11677;
  t11926 = t644*t11845;
  t11942 = t11903 + t11926;
  t12194 = t1045*t3455;
  t12211 = -1.*t3418*t2070;
  t12214 = t12194 + t12211;
  t12218 = -1.*t1019*t1012*t12214;
  t12223 = -1.*t2535*t12214*t2413;
  t12246 = t12218 + t12223;
  t12267 = t2535*t1019*t12214;
  t12276 = -1.*t1012*t12214*t2413;
  t12310 = t12267 + t12276;
  t12266 = t1007*t12246;
  t12317 = t2659*t12310;
  t12318 = t12266 + t12317;
  t12374 = t2659*t12246;
  t12389 = -1.*t1007*t12310;
  t12441 = t12374 + t12389;
  t12368 = -1.*t644*t12318;
  t12453 = t2867*t12441;
  t12455 = t12368 + t12453;
  t12526 = t2867*t12318;
  t12529 = t644*t12441;
  t12539 = t12526 + t12529;
  t12636 = t1045*t2061;
  t12646 = -1.*t1488*t2070;
  t12647 = t12636 + t12646;
  t12648 = -1.*t1019*t1012*t12647;
  t12656 = -1.*t2535*t12647*t2413;
  t12662 = t12648 + t12656;
  t12709 = t2535*t1019*t12647;
  t12714 = -1.*t1012*t12647*t2413;
  t12724 = t12709 + t12714;
  t12673 = t1007*t12662;
  t12729 = t2659*t12724;
  t12736 = t12673 + t12729;
  t12748 = t2659*t12662;
  t12750 = -1.*t1007*t12724;
  t12755 = t12748 + t12750;
  t12737 = -1.*t644*t12736;
  t12764 = t2867*t12755;
  t12783 = t12737 + t12764;
  t12802 = t2867*t12736;
  t12803 = t644*t12755;
  t12804 = t12802 + t12803;
  t12981 = -1.*t1019*t3486;
  t13012 = -1.*t3559*t2413;
  t13017 = t12981 + t13012;
  t13055 = t1012*t13017;
  t13058 = t13055 + t3682;
  t13063 = t2535*t13017;
  t13065 = -1.*t1012*t3674;
  t13067 = t13063 + t13065;
  t13062 = -1.*t1007*t13058;
  t13072 = t2659*t13067;
  t13074 = t13062 + t13072;
  t13076 = t2659*t13058;
  t13081 = t1007*t13067;
  t13082 = t13076 + t13081;
  t13075 = t644*t13074;
  t13229 = t2867*t13082;
  t13239 = t13075 + t13229;
  t13246 = t2867*t13074;
  t13259 = -1.*t644*t13082;
  t13278 = t13246 + t13259;
  t13373 = -1.*t1019*t2212;
  t13374 = -1.*t2378*t2413;
  t13375 = t13373 + t13374;
  t13379 = t1012*t13375;
  t13386 = t13379 + t2645;
  t13391 = t2535*t13375;
  t13392 = -1.*t1012*t2624;
  t13400 = t13391 + t13392;
  t13387 = -1.*t1007*t13386;
  t13404 = t2659*t13400;
  t13407 = t13387 + t13404;
  t13409 = t2659*t13386;
  t13415 = t1007*t13400;
  t13416 = t13409 + t13415;
  t13408 = t644*t13407;
  t13432 = t2867*t13416;
  t13437 = t13408 + t13432;
  t13449 = t2867*t13407;
  t13451 = -1.*t644*t13416;
  t13454 = t13449 + t13451;
  t13533 = -1.*t2535*t3597;
  t13555 = t13533 + t13065;
  t13531 = -1.*t1007*t3684;
  t13566 = t2659*t13555;
  t13573 = t13531 + t13566;
  t13586 = t1007*t13555;
  t13588 = t3810 + t13586;
  t13579 = t644*t13573;
  t13593 = t2867*t13588;
  t13602 = t13579 + t13593;
  t13606 = t2867*t13573;
  t13616 = -1.*t644*t13588;
  t13626 = t13606 + t13616;
  t13728 = -1.*t2535*t2476;
  t13748 = t13728 + t13392;
  t13721 = -1.*t1007*t2649;
  t13764 = t2659*t13748;
  t13773 = t13721 + t13764;
  t13784 = t1007*t13748;
  t13807 = t2909 + t13784;
  t13780 = t644*t13773;
  t13817 = t2867*t13807;
  t13819 = t13780 + t13817;
  t13839 = t2867*t13773;
  t13850 = -1.*t644*t13807;
  t13855 = t13839 + t13850;
  t13890 = -1.*t2659*t3751;
  t13897 = t13531 + t13890;
  t13901 = t644*t13897;
  t13909 = t13901 + t3844;
  t13934 = t2867*t13897;
  t13940 = -1.*t644*t3840;
  t13949 = t13934 + t13940;
  t13991 = -1.*t2659*t2757;
  t13993 = t13721 + t13991;
  t13994 = t644*t13993;
  t14005 = t13994 + t3082;
  t14025 = t2867*t13993;
  t14026 = -1.*t644*t2986;
  t14030 = t14025 + t14026;
  t14143 = -1.*t2867*t3790;
  t14157 = t14143 + t13940;
  t14220 = -1.*t2867*t2825;
  t14224 = t14220 + t14026;
  t14136 = -1.*t594*t3845;
  t14215 = -1.*t594*t3132;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0.1746*(-0.112142*t3320 - 0.133646*t3397)*t4000;
  p_output1[7]=0.1746*t4920*(0.112142*(t3215*t4718 + t4642*t594) + 0.133646*(t3215*t4642 - 1.*t4718*t594));
  p_output1[8]=0.1746*t4000*(-0.112142*(t3215*t5306 + t5266*t594) - 0.133646*(t3215*t5266 - 1.*t5306*t594));
  p_output1[9]=0.1746*t4920*(0.112142*(t594*t6032 + t3215*t6103) + 0.133646*(t3215*t6032 - 1.*t594*t6103));
  p_output1[10]=0.1746*t4000*(-0.112142*(t594*t6491 + t3215*t6565) - 0.133646*(t3215*t6491 - 1.*t594*t6565));
  p_output1[11]=0.1746*t4920*(0.112142*(t594*t9353 + t3215*t9403) + 0.133646*(t3215*t9353 - 1.*t594*t9403));
  p_output1[12]=0.1746*t4000*(-0.112142*(t11185*t3215 + t11108*t594) - 0.133646*(t11108*t3215 - 1.*t11185*t594));
  p_output1[13]=0.1746*t4920*(0.112142*(t11942*t3215 + t11858*t594) + 0.133646*(t11858*t3215 - 1.*t11942*t594));
  p_output1[14]=0.1746*t4000*(-0.112142*(t12539*t3215 + t12455*t594) - 0.133646*(t12455*t3215 - 1.*t12539*t594));
  p_output1[15]=0.1746*t4920*(0.112142*(t12804*t3215 + t12783*t594) + 0.133646*(t12783*t3215 - 1.*t12804*t594));
  p_output1[16]=0.1746*t4000*(-0.133646*(t13278*t3215 - 1.*t13239*t594) - 0.112142*(t13239*t3215 + t13278*t594));
  p_output1[17]=0.1746*t4920*(0.133646*(t13454*t3215 - 1.*t13437*t594) + 0.112142*(t13437*t3215 + t13454*t594));
  p_output1[18]=0.1746*t4000*(-0.133646*(t13626*t3215 - 1.*t13602*t594) - 0.112142*(t13602*t3215 + t13626*t594));
  p_output1[19]=0.1746*t4920*(0.133646*(t13855*t3215 - 1.*t13819*t594) + 0.112142*(t13819*t3215 + t13855*t594));
  p_output1[20]=0.1746*t4000*(-0.133646*(t13949*t3215 - 1.*t13909*t594) - 0.112142*(t13909*t3215 + t13949*t594));
  p_output1[21]=0.1746*t4920*(0.133646*(t14030*t3215 - 1.*t14005*t594) + 0.112142*(t14005*t3215 + t14030*t594));
  p_output1[22]=0.1746*t4000*(-0.133646*(t14136 + t14157*t3215) - 0.112142*(t3966 + t14157*t594));
  p_output1[23]=0.1746*t4920*(0.133646*(t14215 + t14224*t3215) + 0.112142*(t3363 + t14224*t594));
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0.1746*(-0.133646*(t14136 - 1.*t3215*t3925) - 0.112142*t3973)*t4000;
  p_output1[27]=0.1746*(0.133646*(t14215 - 1.*t3215*t3244) + 0.112142*t3397)*t4920;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
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

#include "J_leftFootPitchYaw.hh"

namespace SymFunction
{

void J_leftFootPitchYaw_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
