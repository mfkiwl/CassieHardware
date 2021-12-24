/*
 * Automatically Generated from Mathematica.
 * Thu 8 Mar 2018 14:44:37 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "J_rightFootPitchYaw.hh"
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
  double t3233;
  double t3398;
  double t3404;
  double t3328;
  double t3415;
  double t3082;
  double t3265;
  double t2909;
  double t3402;
  double t3429;
  double t3453;
  double t3567;
  double t3242;
  double t3455;
  double t3489;
  double t2762;
  double t3604;
  double t3682;
  double t3687;
  double t3708;
  double t3754;
  double t3901;
  double t3908;
  double t3932;
  double t3981;
  double t3998;
  double t4002;
  double t4240;
  double t3551;
  double t4004;
  double t4120;
  double t2726;
  double t4248;
  double t4278;
  double t4378;
  double t4441;
  double t4228;
  double t4425;
  double t4435;
  double t2645;
  double t4535;
  double t4607;
  double t4641;
  double t4735;
  double t4436;
  double t4652;
  double t4701;
  double t2417;
  double t4737;
  double t4748;
  double t4826;
  double t4922;
  double t4709;
  double t4906;
  double t4917;
  double t1936;
  double t4928;
  double t4940;
  double t4957;
  double t5280;
  double t5288;
  double t5317;
  double t5278;
  double t5322;
  double t5386;
  double t5393;
  double t5398;
  double t5405;
  double t5407;
  double t5415;
  double t5432;
  double t5460;
  double t5483;
  double t5486;
  double t5387;
  double t5527;
  double t5541;
  double t5572;
  double t5575;
  double t5681;
  double t5567;
  double t5704;
  double t5715;
  double t5737;
  double t5810;
  double t5811;
  double t5719;
  double t5983;
  double t5995;
  double t6021;
  double t6034;
  double t6098;
  double t6016;
  double t6101;
  double t6108;
  double t6112;
  double t6119;
  double t6120;
  double t6392;
  double t6422;
  double t6446;
  double t6387;
  double t6455;
  double t6464;
  double t6501;
  double t6533;
  double t6561;
  double t6571;
  double t6576;
  double t6577;
  double t6590;
  double t6596;
  double t6603;
  double t6465;
  double t6612;
  double t6616;
  double t6626;
  double t6723;
  double t6961;
  double t6625;
  double t7157;
  double t7770;
  double t8159;
  double t8469;
  double t8612;
  double t7827;
  double t8737;
  double t8832;
  double t9125;
  double t9197;
  double t9254;
  double t8898;
  double t9315;
  double t9369;
  double t9380;
  double t9423;
  double t9476;
  double t4920;
  double t5053;
  double t5147;
  double t5174;
  double t5187;
  double t5198;
  double t10524;
  double t10529;
  double t10580;
  double t10972;
  double t11048;
  double t11092;
  double t11139;
  double t11147;
  double t11177;
  double t10820;
  double t11236;
  double t11247;
  double t11263;
  double t11280;
  double t11283;
  double t11250;
  double t11286;
  double t11295;
  double t11315;
  double t11425;
  double t11428;
  double t11302;
  double t11431;
  double t11499;
  double t11561;
  double t11568;
  double t11629;
  double t11543;
  double t11633;
  double t11634;
  double t11722;
  double t11845;
  double t11854;
  double t6109;
  double t6126;
  double t6129;
  double t6139;
  double t6146;
  double t6148;
  double t6181;
  double t6270;
  double t6299;
  double t6330;
  double t6364;
  double t6375;
  double t12147;
  double t12148;
  double t12156;
  double t12246;
  double t12266;
  double t12267;
  double t12317;
  double t12374;
  double t12441;
  double t12194;
  double t12453;
  double t12520;
  double t12529;
  double t12548;
  double t12569;
  double t12526;
  double t12576;
  double t12582;
  double t12599;
  double t12601;
  double t12604;
  double t12595;
  double t12619;
  double t12636;
  double t12673;
  double t12709;
  double t12729;
  double t12662;
  double t12748;
  double t12755;
  double t12789;
  double t12802;
  double t12803;
  double t9920;
  double t9969;
  double t10286;
  double t10368;
  double t10387;
  double t10437;
  double t13055;
  double t13063;
  double t13067;
  double t13017;
  double t13072;
  double t13074;
  double t13076;
  double t13081;
  double t13229;
  double t13075;
  double t13241;
  double t13246;
  double t13302;
  double t13318;
  double t13333;
  double t13290;
  double t13346;
  double t13353;
  double t13370;
  double t13372;
  double t13375;
  double t13369;
  double t13379;
  double t13391;
  double t13404;
  double t13407;
  double t13408;
  double t13468;
  double t13480;
  double t13488;
  double t13520;
  double t13555;
  double t13566;
  double t13508;
  double t13573;
  double t13579;
  double t13593;
  double t13605;
  double t13606;
  double t13586;
  double t13628;
  double t13637;
  double t13648;
  double t13656;
  double t13666;
  double t13647;
  double t13672;
  double t13692;
  double t13748;
  double t13764;
  double t13773;
  double t13703;
  double t13780;
  double t13784;
  double t13833;
  double t13839;
  double t13856;
  double t13901;
  double t13924;
  double t13934;
  double t13953;
  double t13977;
  double t13985;
  double t13986;
  double t13987;
  double t13984;
  double t13988;
  double t13989;
  double t13993;
  double t13994;
  double t14015;
  double t13990;
  double t14025;
  double t14115;
  double t14119;
  double t14120;
  double t14123;
  double t14117;
  double t14124;
  double t14126;
  double t14128;
  double t14129;
  double t14158;
  double t14232;
  double t14233;
  double t14234;
  double t14235;
  double t14238;
  double t14239;
  double t14241;
  double t14249;
  double t14255;
  double t14240;
  double t14257;
  double t14262;
  double t14273;
  double t14277;
  double t14283;
  double t14268;
  double t14290;
  double t14293;
  double t14305;
  double t14306;
  double t14308;
  double t14301;
  double t14309;
  double t14311;
  double t14317;
  double t14318;
  double t14324;
  double t14356;
  double t14360;
  double t14371;
  double t14375;
  double t14380;
  double t14381;
  double t14385;
  double t14386;
  double t14387;
  double t14384;
  double t14389;
  double t14390;
  double t14394;
  double t14395;
  double t14396;
  double t14393;
  double t14397;
  double t14399;
  double t14401;
  double t14438;
  double t14443;
  double t14468;
  double t14470;
  double t14471;
  double t14472;
  double t14473;
  double t14478;
  double t14489;
  double t14494;
  double t14499;
  double t14483;
  double t14506;
  double t14507;
  double t14510;
  double t14512;
  double t14513;
  double t14509;
  double t14516;
  double t14526;
  double t14531;
  double t14536;
  double t14541;
  double t14576;
  double t14578;
  double t14580;
  double t14583;
  double t14586;
  double t14592;
  double t14595;
  double t14603;
  double t14587;
  double t14610;
  double t14614;
  double t14626;
  double t14627;
  double t14629;
  double t14623;
  double t14630;
  double t14631;
  double t14671;
  double t14672;
  double t14678;
  double t14708;
  double t14721;
  double t14725;
  double t14728;
  double t14729;
  double t14740;
  double t14752;
  double t14756;
  double t14737;
  double t14759;
  double t14760;
  double t14773;
  double t14774;
  double t14777;
  double t14764;
  double t14779;
  double t14781;
  double t14784;
  double t14786;
  double t14790;
  double t14873;
  double t14875;
  double t14863;
  double t14876;
  double t14883;
  double t14886;
  double t14887;
  double t14884;
  double t14888;
  double t14889;
  double t14902;
  double t14907;
  double t14912;
  double t14958;
  double t14962;
  double t14953;
  double t14967;
  double t14972;
  double t14980;
  double t14981;
  double t14975;
  double t14982;
  double t14983;
  double t14986;
  double t14987;
  double t14989;
  double t15096;
  double t15102;
  double t15103;
  double t15104;
  double t15117;
  double t15118;
  double t15123;
  double t15152;
  double t15162;
  double t15166;
  double t15169;
  double t15180;
  double t15181;
  double t15189;
  double t15234;
  double t15235;
  double t15257;
  double t15260;
  double t15233;
  double t15254;
  t3233 = Sin(var1[3]);
  t3398 = Cos(var1[5]);
  t3404 = Sin(var1[4]);
  t3328 = Cos(var1[3]);
  t3415 = Sin(var1[5]);
  t3082 = Cos(var1[4]);
  t3265 = Sin(var1[14]);
  t2909 = Cos(var1[14]);
  t3402 = t3328*t3398;
  t3429 = -1.*t3233*t3404*t3415;
  t3453 = t3402 + t3429;
  t3567 = Cos(var1[16]);
  t3242 = -1.*t2909*t3082*t3233;
  t3455 = -1.*t3265*t3453;
  t3489 = t3242 + t3455;
  t2762 = Sin(var1[16]);
  t3604 = Cos(var1[15]);
  t3682 = t3398*t3233*t3404;
  t3687 = t3328*t3415;
  t3708 = t3682 + t3687;
  t3754 = t3604*t3708;
  t3901 = Sin(var1[15]);
  t3908 = -1.*t3082*t3265*t3233;
  t3932 = t2909*t3453;
  t3981 = t3908 + t3932;
  t3998 = t3901*t3981;
  t4002 = t3754 + t3998;
  t4240 = Cos(var1[17]);
  t3551 = t2762*t3489;
  t4004 = t3567*t4002;
  t4120 = t3551 + t4004;
  t2726 = Sin(var1[17]);
  t4248 = t3567*t3489;
  t4278 = -1.*t2762*t4002;
  t4378 = t4248 + t4278;
  t4441 = Cos(var1[18]);
  t4228 = -1.*t2726*t4120;
  t4425 = t4240*t4378;
  t4435 = t4228 + t4425;
  t2645 = Sin(var1[18]);
  t4535 = t4240*t4120;
  t4607 = t2726*t4378;
  t4641 = t4535 + t4607;
  t4735 = Cos(var1[19]);
  t4436 = t2645*t4435;
  t4652 = t4441*t4641;
  t4701 = t4436 + t4652;
  t2417 = Sin(var1[19]);
  t4737 = t4441*t4435;
  t4748 = -1.*t2645*t4641;
  t4826 = t4737 + t4748;
  t4922 = Cos(var1[21]);
  t4709 = -1.*t2417*t4701;
  t4906 = t4735*t4826;
  t4917 = t4709 + t4906;
  t1936 = Sin(var1[21]);
  t4928 = t4735*t4701;
  t4940 = t2417*t4826;
  t4957 = t4928 + t4940;
  t5280 = t3398*t3233;
  t5288 = t3328*t3404*t3415;
  t5317 = t5280 + t5288;
  t5278 = t2909*t3328*t3082;
  t5322 = -1.*t3265*t5317;
  t5386 = t5278 + t5322;
  t5393 = -1.*t3328*t3398*t3404;
  t5398 = t3233*t3415;
  t5405 = t5393 + t5398;
  t5407 = t3604*t5405;
  t5415 = t3328*t3082*t3265;
  t5432 = t2909*t5317;
  t5460 = t5415 + t5432;
  t5483 = t3901*t5460;
  t5486 = t5407 + t5483;
  t5387 = t2762*t5386;
  t5527 = t3567*t5486;
  t5541 = t5387 + t5527;
  t5572 = t3567*t5386;
  t5575 = -1.*t2762*t5486;
  t5681 = t5572 + t5575;
  t5567 = -1.*t2726*t5541;
  t5704 = t4240*t5681;
  t5715 = t5567 + t5704;
  t5737 = t4240*t5541;
  t5810 = t2726*t5681;
  t5811 = t5737 + t5810;
  t5719 = t2645*t5715;
  t5983 = t4441*t5811;
  t5995 = t5719 + t5983;
  t6021 = t4441*t5715;
  t6034 = -1.*t2645*t5811;
  t6098 = t6021 + t6034;
  t6016 = -1.*t2417*t5995;
  t6101 = t4735*t6098;
  t6108 = t6016 + t6101;
  t6112 = t4735*t5995;
  t6119 = t2417*t6098;
  t6120 = t6112 + t6119;
  t6392 = -1.*t3398*t3233;
  t6422 = -1.*t3328*t3404*t3415;
  t6446 = t6392 + t6422;
  t6387 = -1.*t2909*t3328*t3082;
  t6455 = -1.*t3265*t6446;
  t6464 = t6387 + t6455;
  t6501 = t3328*t3398*t3404;
  t6533 = -1.*t3233*t3415;
  t6561 = t6501 + t6533;
  t6571 = t3604*t6561;
  t6576 = -1.*t3328*t3082*t3265;
  t6577 = t2909*t6446;
  t6590 = t6576 + t6577;
  t6596 = t3901*t6590;
  t6603 = t6571 + t6596;
  t6465 = t2762*t6464;
  t6612 = t3567*t6603;
  t6616 = t6465 + t6612;
  t6626 = t3567*t6464;
  t6723 = -1.*t2762*t6603;
  t6961 = t6626 + t6723;
  t6625 = -1.*t2726*t6616;
  t7157 = t4240*t6961;
  t7770 = t6625 + t7157;
  t8159 = t4240*t6616;
  t8469 = t2726*t6961;
  t8612 = t8159 + t8469;
  t7827 = t2645*t7770;
  t8737 = t4441*t8612;
  t8832 = t7827 + t8737;
  t9125 = t4441*t7770;
  t9197 = -1.*t2645*t8612;
  t9254 = t9125 + t9197;
  t8898 = -1.*t2417*t8832;
  t9315 = t4735*t9254;
  t9369 = t8898 + t9315;
  t9380 = t4735*t8832;
  t9423 = t2417*t9254;
  t9476 = t9380 + t9423;
  t4920 = t1936*t4917;
  t5053 = t4922*t4957;
  t5147 = t4920 + t5053;
  t5174 = t4922*t4917;
  t5187 = -1.*t1936*t4957;
  t5198 = t5174 + t5187;
  t10524 = -1.*t2909*t3328*t3404;
  t10529 = -1.*t3328*t3082*t3265*t3415;
  t10580 = t10524 + t10529;
  t10972 = -1.*t3604*t3328*t3082*t3398;
  t11048 = -1.*t3328*t3265*t3404;
  t11092 = t2909*t3328*t3082*t3415;
  t11139 = t11048 + t11092;
  t11147 = t3901*t11139;
  t11177 = t10972 + t11147;
  t10820 = t2762*t10580;
  t11236 = t3567*t11177;
  t11247 = t10820 + t11236;
  t11263 = t3567*t10580;
  t11280 = -1.*t2762*t11177;
  t11283 = t11263 + t11280;
  t11250 = -1.*t2726*t11247;
  t11286 = t4240*t11283;
  t11295 = t11250 + t11286;
  t11315 = t4240*t11247;
  t11425 = t2726*t11283;
  t11428 = t11315 + t11425;
  t11302 = t2645*t11295;
  t11431 = t4441*t11428;
  t11499 = t11302 + t11431;
  t11561 = t4441*t11295;
  t11568 = -1.*t2645*t11428;
  t11629 = t11561 + t11568;
  t11543 = -1.*t2417*t11499;
  t11633 = t4735*t11629;
  t11634 = t11543 + t11633;
  t11722 = t4735*t11499;
  t11845 = t2417*t11629;
  t11854 = t11722 + t11845;
  t6109 = t1936*t6108;
  t6126 = t4922*t6120;
  t6129 = t6109 + t6126;
  t6139 = -0.112142*t6129;
  t6146 = t4922*t6108;
  t6148 = -1.*t1936*t6120;
  t6181 = t6146 + t6148;
  t6270 = -0.133646*t6181;
  t6299 = t6139 + t6270;
  t6330 = Power(t6299,2);
  t6364 = 0.03048516 + t6330;
  t6375 = 1/t6364;
  t12147 = t2909*t3233*t3404;
  t12148 = t3082*t3265*t3233*t3415;
  t12156 = t12147 + t12148;
  t12246 = t3604*t3082*t3398*t3233;
  t12266 = t3265*t3233*t3404;
  t12267 = -1.*t2909*t3082*t3233*t3415;
  t12317 = t12266 + t12267;
  t12374 = t3901*t12317;
  t12441 = t12246 + t12374;
  t12194 = t2762*t12156;
  t12453 = t3567*t12441;
  t12520 = t12194 + t12453;
  t12529 = t3567*t12156;
  t12548 = -1.*t2762*t12441;
  t12569 = t12529 + t12548;
  t12526 = -1.*t2726*t12520;
  t12576 = t4240*t12569;
  t12582 = t12526 + t12576;
  t12599 = t4240*t12520;
  t12601 = t2726*t12569;
  t12604 = t12599 + t12601;
  t12595 = t2645*t12582;
  t12619 = t4441*t12604;
  t12636 = t12595 + t12619;
  t12673 = t4441*t12582;
  t12709 = -1.*t2645*t12604;
  t12729 = t12673 + t12709;
  t12662 = -1.*t2417*t12636;
  t12748 = t4735*t12729;
  t12755 = t12662 + t12748;
  t12789 = t4735*t12636;
  t12802 = t2417*t12729;
  t12803 = t12789 + t12802;
  t9920 = 0.112142*t5147;
  t9969 = 0.133646*t5198;
  t10286 = t9920 + t9969;
  t10368 = Power(t10286,2);
  t10387 = 0.03048516 + t10368;
  t10437 = 1/t10387;
  t13055 = t2909*t3901*t6561;
  t13063 = t3604*t5317;
  t13067 = t13055 + t13063;
  t13017 = -1.*t3265*t2762*t6561;
  t13072 = t3567*t13067;
  t13074 = t13017 + t13072;
  t13076 = -1.*t3567*t3265*t6561;
  t13081 = -1.*t2762*t13067;
  t13229 = t13076 + t13081;
  t13075 = -1.*t2726*t13074;
  t13241 = t4240*t13229;
  t13246 = t13075 + t13241;
  t13302 = t4240*t13074;
  t13318 = t2726*t13229;
  t13333 = t13302 + t13318;
  t13290 = t2645*t13246;
  t13346 = t4441*t13333;
  t13353 = t13290 + t13346;
  t13370 = t4441*t13246;
  t13372 = -1.*t2645*t13333;
  t13375 = t13370 + t13372;
  t13369 = -1.*t2417*t13353;
  t13379 = t4735*t13375;
  t13391 = t13369 + t13379;
  t13404 = t4735*t13353;
  t13407 = t2417*t13375;
  t13408 = t13404 + t13407;
  t13468 = -1.*t3398*t3233*t3404;
  t13480 = -1.*t3328*t3415;
  t13488 = t13468 + t13480;
  t13520 = t2909*t3901*t13488;
  t13555 = t3604*t3453;
  t13566 = t13520 + t13555;
  t13508 = -1.*t3265*t2762*t13488;
  t13573 = t3567*t13566;
  t13579 = t13508 + t13573;
  t13593 = -1.*t3567*t3265*t13488;
  t13605 = -1.*t2762*t13566;
  t13606 = t13593 + t13605;
  t13586 = -1.*t2726*t13579;
  t13628 = t4240*t13606;
  t13637 = t13586 + t13628;
  t13648 = t4240*t13579;
  t13656 = t2726*t13606;
  t13666 = t13648 + t13656;
  t13647 = t2645*t13637;
  t13672 = t4441*t13666;
  t13692 = t13647 + t13672;
  t13748 = t4441*t13637;
  t13764 = -1.*t2645*t13666;
  t13773 = t13748 + t13764;
  t13703 = -1.*t2417*t13692;
  t13780 = t4735*t13773;
  t13784 = t13703 + t13780;
  t13833 = t4735*t13692;
  t13839 = t2417*t13773;
  t13856 = t13833 + t13839;
  t13901 = -1.*t2909*t5317;
  t13924 = t6576 + t13901;
  t13934 = t2762*t13924;
  t13953 = t3567*t3901*t5386;
  t13977 = t13934 + t13953;
  t13985 = t3567*t13924;
  t13986 = -1.*t3901*t2762*t5386;
  t13987 = t13985 + t13986;
  t13984 = -1.*t2726*t13977;
  t13988 = t4240*t13987;
  t13989 = t13984 + t13988;
  t13993 = t4240*t13977;
  t13994 = t2726*t13987;
  t14015 = t13993 + t13994;
  t13990 = t2645*t13989;
  t14025 = t4441*t14015;
  t14115 = t13990 + t14025;
  t14119 = t4441*t13989;
  t14120 = -1.*t2645*t14015;
  t14123 = t14119 + t14120;
  t14117 = -1.*t2417*t14115;
  t14124 = t4735*t14123;
  t14126 = t14117 + t14124;
  t14128 = t4735*t14115;
  t14129 = t2417*t14123;
  t14158 = t14128 + t14129;
  t14232 = t3082*t3265*t3233;
  t14233 = -1.*t2909*t3453;
  t14234 = t14232 + t14233;
  t14235 = t2762*t14234;
  t14238 = t3567*t3901*t3489;
  t14239 = t14235 + t14238;
  t14241 = t3567*t14234;
  t14249 = -1.*t3901*t2762*t3489;
  t14255 = t14241 + t14249;
  t14240 = -1.*t2726*t14239;
  t14257 = t4240*t14255;
  t14262 = t14240 + t14257;
  t14273 = t4240*t14239;
  t14277 = t2726*t14255;
  t14283 = t14273 + t14277;
  t14268 = t2645*t14262;
  t14290 = t4441*t14283;
  t14293 = t14268 + t14290;
  t14305 = t4441*t14262;
  t14306 = -1.*t2645*t14283;
  t14308 = t14305 + t14306;
  t14301 = -1.*t2417*t14293;
  t14309 = t4735*t14308;
  t14311 = t14301 + t14309;
  t14317 = t4735*t14293;
  t14318 = t2417*t14308;
  t14324 = t14317 + t14318;
  t14356 = -1.*t3901*t5405;
  t14360 = t3604*t5460;
  t14371 = t14356 + t14360;
  t14375 = -1.*t4240*t2762*t14371;
  t14380 = -1.*t3567*t2726*t14371;
  t14381 = t14375 + t14380;
  t14385 = t3567*t4240*t14371;
  t14386 = -1.*t2762*t2726*t14371;
  t14387 = t14385 + t14386;
  t14384 = t2645*t14381;
  t14389 = t4441*t14387;
  t14390 = t14384 + t14389;
  t14394 = t4441*t14381;
  t14395 = -1.*t2645*t14387;
  t14396 = t14394 + t14395;
  t14393 = -1.*t2417*t14390;
  t14397 = t4735*t14396;
  t14399 = t14393 + t14397;
  t14401 = t4735*t14390;
  t14438 = t2417*t14396;
  t14443 = t14401 + t14438;
  t14468 = -1.*t3901*t3708;
  t14470 = t3604*t3981;
  t14471 = t14468 + t14470;
  t14472 = -1.*t4240*t2762*t14471;
  t14473 = -1.*t3567*t2726*t14471;
  t14478 = t14472 + t14473;
  t14489 = t3567*t4240*t14471;
  t14494 = -1.*t2762*t2726*t14471;
  t14499 = t14489 + t14494;
  t14483 = t2645*t14478;
  t14506 = t4441*t14499;
  t14507 = t14483 + t14506;
  t14510 = t4441*t14478;
  t14512 = -1.*t2645*t14499;
  t14513 = t14510 + t14512;
  t14509 = -1.*t2417*t14507;
  t14516 = t4735*t14513;
  t14526 = t14509 + t14516;
  t14531 = t4735*t14507;
  t14536 = t2417*t14513;
  t14541 = t14531 + t14536;
  t14576 = -1.*t2762*t5386;
  t14578 = -1.*t3567*t5486;
  t14580 = t14576 + t14578;
  t14583 = t2726*t14580;
  t14586 = t14583 + t5704;
  t14592 = t4240*t14580;
  t14595 = -1.*t2726*t5681;
  t14603 = t14592 + t14595;
  t14587 = -1.*t2645*t14586;
  t14610 = t4441*t14603;
  t14614 = t14587 + t14610;
  t14626 = t4441*t14586;
  t14627 = t2645*t14603;
  t14629 = t14626 + t14627;
  t14623 = t2417*t14614;
  t14630 = t4735*t14629;
  t14631 = t14623 + t14630;
  t14671 = t4735*t14614;
  t14672 = -1.*t2417*t14629;
  t14678 = t14671 + t14672;
  t14708 = -1.*t2762*t3489;
  t14721 = -1.*t3567*t4002;
  t14725 = t14708 + t14721;
  t14728 = t2726*t14725;
  t14729 = t14728 + t4425;
  t14740 = t4240*t14725;
  t14752 = -1.*t2726*t4378;
  t14756 = t14740 + t14752;
  t14737 = -1.*t2645*t14729;
  t14759 = t4441*t14756;
  t14760 = t14737 + t14759;
  t14773 = t4441*t14729;
  t14774 = t2645*t14756;
  t14777 = t14773 + t14774;
  t14764 = t2417*t14760;
  t14779 = t4735*t14777;
  t14781 = t14764 + t14779;
  t14784 = t4735*t14760;
  t14786 = -1.*t2417*t14777;
  t14790 = t14784 + t14786;
  t14873 = -1.*t4240*t5541;
  t14875 = t14873 + t14595;
  t14863 = -1.*t2645*t5715;
  t14876 = t4441*t14875;
  t14883 = t14863 + t14876;
  t14886 = t2645*t14875;
  t14887 = t6021 + t14886;
  t14884 = t2417*t14883;
  t14888 = t4735*t14887;
  t14889 = t14884 + t14888;
  t14902 = t4735*t14883;
  t14907 = -1.*t2417*t14887;
  t14912 = t14902 + t14907;
  t14958 = -1.*t4240*t4120;
  t14962 = t14958 + t14752;
  t14953 = -1.*t2645*t4435;
  t14967 = t4441*t14962;
  t14972 = t14953 + t14967;
  t14980 = t2645*t14962;
  t14981 = t4737 + t14980;
  t14975 = t2417*t14972;
  t14982 = t4735*t14981;
  t14983 = t14975 + t14982;
  t14986 = t4735*t14972;
  t14987 = -1.*t2417*t14981;
  t14989 = t14986 + t14987;
  t15096 = -1.*t4441*t5811;
  t15102 = t14863 + t15096;
  t15103 = t2417*t15102;
  t15104 = t15103 + t6101;
  t15117 = t4735*t15102;
  t15118 = -1.*t2417*t6098;
  t15123 = t15117 + t15118;
  t15152 = -1.*t4441*t4641;
  t15162 = t14953 + t15152;
  t15166 = t2417*t15162;
  t15169 = t15166 + t4906;
  t15180 = t4735*t15162;
  t15181 = -1.*t2417*t4826;
  t15189 = t15180 + t15181;
  t15234 = -1.*t4735*t5995;
  t15235 = t15234 + t15118;
  t15257 = -1.*t4735*t4701;
  t15260 = t15257 + t15181;
  t15233 = -1.*t1936*t6108;
  t15254 = -1.*t1936*t4917;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0.1746*(-0.112142*t5147 - 0.133646*t5198)*t6375;
  p_output1[7]=0.1746*t10437*(0.133646*(t4922*t9369 - 1.*t1936*t9476) + 0.112142*(t1936*t9369 + t4922*t9476));
  p_output1[8]=0.1746*(-0.133646*(-1.*t11854*t1936 + t11634*t4922) - 0.112142*(t11634*t1936 + t11854*t4922))*t6375;
  p_output1[9]=0.1746*t10437*(0.133646*(-1.*t12803*t1936 + t12755*t4922) + 0.112142*(t12755*t1936 + t12803*t4922));
  p_output1[10]=0.1746*(-0.133646*(-1.*t13408*t1936 + t13391*t4922) - 0.112142*(t13391*t1936 + t13408*t4922))*t6375;
  p_output1[11]=0.1746*t10437*(0.133646*(-1.*t13856*t1936 + t13784*t4922) + 0.112142*(t13784*t1936 + t13856*t4922));
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
  p_output1[27]=0;
  p_output1[28]=0.1746*(-0.133646*(-1.*t14158*t1936 + t14126*t4922) - 0.112142*(t14126*t1936 + t14158*t4922))*t6375;
  p_output1[29]=0.1746*t10437*(0.133646*(-1.*t14324*t1936 + t14311*t4922) + 0.112142*(t14311*t1936 + t14324*t4922));
  p_output1[30]=0.1746*(-0.133646*(-1.*t14443*t1936 + t14399*t4922) - 0.112142*(t14399*t1936 + t14443*t4922))*t6375;
  p_output1[31]=0.1746*t10437*(0.133646*(-1.*t14541*t1936 + t14526*t4922) + 0.112142*(t14526*t1936 + t14541*t4922));
  p_output1[32]=0.1746*(-0.112142*(t14678*t1936 + t14631*t4922) - 0.133646*(-1.*t14631*t1936 + t14678*t4922))*t6375;
  p_output1[33]=0.1746*t10437*(0.112142*(t14790*t1936 + t14781*t4922) + 0.133646*(-1.*t14781*t1936 + t14790*t4922));
  p_output1[34]=0.1746*(-0.112142*(t14912*t1936 + t14889*t4922) - 0.133646*(-1.*t14889*t1936 + t14912*t4922))*t6375;
  p_output1[35]=0.1746*t10437*(0.112142*(t14989*t1936 + t14983*t4922) + 0.133646*(-1.*t14983*t1936 + t14989*t4922));
  p_output1[36]=0.1746*(-0.112142*(t15123*t1936 + t15104*t4922) - 0.133646*(-1.*t15104*t1936 + t15123*t4922))*t6375;
  p_output1[37]=0.1746*t10437*(0.112142*(t15189*t1936 + t15169*t4922) + 0.133646*(-1.*t15169*t1936 + t15189*t4922));
  p_output1[38]=0.1746*(-0.133646*(t15233 + t15235*t4922) - 0.112142*(t15235*t1936 + t6146))*t6375;
  p_output1[39]=0.1746*t10437*(0.133646*(t15254 + t15260*t4922) + 0.112142*(t15260*t1936 + t5174));
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0.1746*(-0.133646*(t15233 - 1.*t4922*t6120) - 0.112142*t6181)*t6375;
  p_output1[43]=0.1746*t10437*(0.133646*(t15254 - 1.*t4922*t4957) + 0.112142*t5198);
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

#include "J_rightFootPitchYaw.hh"

namespace SymFunction
{

void J_rightFootPitchYaw_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
