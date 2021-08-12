/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:04 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "J_position_rightFoot.hh"
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
  double t119;
  double t391;
  double t1244;
  double t1751;
  double t1835;
  double t1856;
  double t2446;
  double t3523;
  double t3680;
  double t3682;
  double t3683;
  double t3688;
  double t3640;
  double t3652;
  double t3678;
  double t3774;
  double t3796;
  double t3903;
  double t4032;
  double t4033;
  double t4034;
  double t4038;
  double t4021;
  double t4030;
  double t4031;
  double t4043;
  double t4044;
  double t4047;
  double t4145;
  double t4173;
  double t4181;
  double t4204;
  double t4111;
  double t4117;
  double t4125;
  double t4226;
  double t4231;
  double t4238;
  double t4259;
  double t4260;
  double t4261;
  double t4265;
  double t4255;
  double t4256;
  double t4258;
  double t4274;
  double t4276;
  double t4277;
  double t956;
  double t977;
  double t1219;
  double t1365;
  double t1623;
  double t2360;
  double t2688;
  double t3135;
  double t3563;
  double t3581;
  double t3621;
  double t3685;
  double t3729;
  double t3733;
  double t3923;
  double t3970;
  double t3990;
  double t4319;
  double t4321;
  double t4322;
  double t4325;
  double t4328;
  double t4330;
  double t4035;
  double t4039;
  double t4040;
  double t4055;
  double t4059;
  double t4082;
  double t4334;
  double t4341;
  double t4343;
  double t4359;
  double t4375;
  double t4379;
  double t4198;
  double t4210;
  double t4214;
  double t4242;
  double t4250;
  double t4252;
  double t4384;
  double t4394;
  double t4398;
  double t4400;
  double t4401;
  double t4405;
  double t4262;
  double t4266;
  double t4268;
  double t4278;
  double t4283;
  double t4285;
  double t4416;
  double t4422;
  double t4429;
  double t4441;
  double t4449;
  double t4453;
  double t4504;
  double t4510;
  double t4521;
  double t4523;
  double t4524;
  double t4525;
  double t4527;
  double t4531;
  double t4532;
  double t4534;
  double t4535;
  double t4536;
  double t4544;
  double t4545;
  double t4546;
  double t4550;
  double t4551;
  double t4552;
  double t4602;
  double t4605;
  double t4609;
  double t4616;
  double t4617;
  double t4618;
  double t4620;
  double t4621;
  double t4624;
  double t4629;
  double t4634;
  double t4642;
  double t4650;
  double t4662;
  double t4670;
  double t4683;
  double t4685;
  double t4692;
  double t4575;
  double t4576;
  double t4577;
  double t4718;
  double t4719;
  double t4720;
  double t4727;
  double t4728;
  double t4729;
  double t4731;
  double t4732;
  double t4736;
  double t4738;
  double t4746;
  double t4749;
  double t4759;
  double t4762;
  double t4771;
  double t4786;
  double t4788;
  double t4789;
  double t4876;
  double t4877;
  double t4884;
  double t4888;
  double t4890;
  double t4891;
  double t4895;
  double t4896;
  double t4897;
  double t4906;
  double t4910;
  double t4911;
  double t4923;
  double t4924;
  double t4925;
  double t4915;
  double t4916;
  double t4917;
  double t4837;
  double t4840;
  double t4847;
  double t4960;
  double t4962;
  double t4969;
  double t4974;
  double t4977;
  double t4994;
  double t5001;
  double t5002;
  double t5004;
  double t5005;
  double t5007;
  double t5016;
  double t5020;
  double t5021;
  double t5038;
  double t5041;
  double t5042;
  double t5027;
  double t5028;
  double t5029;
  double t4948;
  double t4951;
  double t5058;
  double t5059;
  double t5060;
  double t5063;
  double t5064;
  double t5065;
  double t5067;
  double t5068;
  double t5070;
  double t5071;
  double t5072;
  double t5074;
  double t5075;
  double t5076;
  double t5087;
  double t5090;
  double t5091;
  double t5078;
  double t5079;
  double t5080;
  double t4885;
  double t4894;
  double t4903;
  double t4912;
  double t4918;
  double t4926;
  double t4928;
  double t4929;
  double t4930;
  double t4935;
  double t4939;
  double t4940;
  double t4942;
  double t4946;
  double t5106;
  double t5109;
  double t5111;
  double t5112;
  double t5113;
  double t5120;
  double t5123;
  double t5125;
  double t5126;
  double t5128;
  double t5129;
  double t5134;
  double t5141;
  double t5142;
  double t5144;
  double t5136;
  double t5137;
  double t5139;
  double t5169;
  double t5171;
  double t5172;
  double t5176;
  double t5177;
  double t5182;
  double t5183;
  double t5190;
  double t5193;
  double t5194;
  double t5197;
  double t5198;
  double t5200;
  double t5210;
  double t5211;
  double t5213;
  double t5204;
  double t5205;
  double t5208;
  double t5243;
  double t5246;
  double t5247;
  double t5262;
  double t5263;
  double t5266;
  double t5275;
  double t5289;
  double t5290;
  double t5296;
  double t5279;
  double t5281;
  double t5283;
  double t5238;
  double t5241;
  double t5251;
  double t5257;
  double t5258;
  double t5328;
  double t5333;
  double t5339;
  double t5340;
  double t5344;
  double t5335;
  double t5336;
  double t5385;
  double t5390;
  double t5392;
  double t5394;
  double t5397;
  double t5401;
  double t5402;
  double t5432;
  double t5440;
  double t5441;
  double t5404;
  double t5407;
  double t5415;
  double t5501;
  double t5502;
  double t5503;
  double t5511;
  double t5512;
  double t5508;
  double t5509;
  double t5496;
  double t5497;
  double t5504;
  double t5505;
  double t5506;
  double t5526;
  double t5527;
  double t4466;
  double t5538;
  double t5539;
  double t5540;
  double t5545;
  double t5546;
  double t5542;
  double t5543;
  double t5560;
  double t5561;
  double t5562;
  double t5515;
  double t5518;
  double t5557;
  double t5558;
  double t5563;
  double t5564;
  double t5565;
  double t5530;
  double t4469;
  double t4473;
  double t5582;
  double t5583;
  double t5584;
  double t5549;
  double t5552;
  t119 = Sin(var1[14]);
  t391 = Cos(var1[15]);
  t1244 = Sin(var1[15]);
  t1751 = Cos(var1[16]);
  t1835 = -1.*t1751;
  t1856 = 1. + t1835;
  t2446 = Sin(var1[16]);
  t3523 = Cos(var1[14]);
  t3680 = Cos(var1[17]);
  t3682 = -1.*t3680;
  t3683 = 1. + t3682;
  t3688 = Sin(var1[17]);
  t3640 = -1.*t1751*t119*t1244;
  t3652 = -1.*t3523*t2446;
  t3678 = t3640 + t3652;
  t3774 = -1.*t3523*t1751;
  t3796 = t119*t1244*t2446;
  t3903 = t3774 + t3796;
  t4032 = Cos(var1[18]);
  t4033 = -1.*t4032;
  t4034 = 1. + t4033;
  t4038 = Sin(var1[18]);
  t4021 = t3680*t3678;
  t4030 = t3903*t3688;
  t4031 = t4021 + t4030;
  t4043 = t3680*t3903;
  t4044 = -1.*t3678*t3688;
  t4047 = t4043 + t4044;
  t4145 = Cos(var1[19]);
  t4173 = -1.*t4145;
  t4181 = 1. + t4173;
  t4204 = Sin(var1[19]);
  t4111 = t4032*t4031;
  t4117 = t4047*t4038;
  t4125 = t4111 + t4117;
  t4226 = t4032*t4047;
  t4231 = -1.*t4031*t4038;
  t4238 = t4226 + t4231;
  t4259 = Cos(var1[21]);
  t4260 = -1.*t4259;
  t4261 = 1. + t4260;
  t4265 = Sin(var1[21]);
  t4255 = t4145*t4125;
  t4256 = t4238*t4204;
  t4258 = t4255 + t4256;
  t4274 = t4145*t4238;
  t4276 = -1.*t4125*t4204;
  t4277 = t4274 + t4276;
  t956 = -1.*t391;
  t977 = 1. + t956;
  t1219 = -0.135*t977;
  t1365 = 0.049*t1244;
  t1623 = t1219 + t1365;
  t2360 = -0.049*t1856;
  t2688 = -0.09*t2446;
  t3135 = t2360 + t2688;
  t3563 = -0.09*t1856;
  t3581 = 0.049*t2446;
  t3621 = t3563 + t3581;
  t3685 = -0.049*t3683;
  t3729 = -0.21*t3688;
  t3733 = t3685 + t3729;
  t3923 = -0.21*t3683;
  t3970 = 0.049*t3688;
  t3990 = t3923 + t3970;
  t4319 = t3523*t1751*t1244;
  t4321 = -1.*t119*t2446;
  t4322 = t4319 + t4321;
  t4325 = -1.*t1751*t119;
  t4328 = -1.*t3523*t1244*t2446;
  t4330 = t4325 + t4328;
  t4035 = -0.00159*t4034;
  t4039 = -0.27068*t4038;
  t4040 = t4035 + t4039;
  t4055 = -0.27068*t4034;
  t4059 = 0.00159*t4038;
  t4082 = t4055 + t4059;
  t4334 = t3680*t4322;
  t4341 = t4330*t3688;
  t4343 = t4334 + t4341;
  t4359 = t3680*t4330;
  t4375 = -1.*t4322*t3688;
  t4379 = t4359 + t4375;
  t4198 = 0.01841*t4181;
  t4210 = -0.70544*t4204;
  t4214 = t4198 + t4210;
  t4242 = -0.70544*t4181;
  t4250 = -0.01841*t4204;
  t4252 = t4242 + t4250;
  t4384 = t4032*t4343;
  t4394 = t4379*t4038;
  t4398 = t4384 + t4394;
  t4400 = t4032*t4379;
  t4401 = -1.*t4343*t4038;
  t4405 = t4400 + t4401;
  t4262 = -0.02159*t4261;
  t4266 = -1.11344*t4265;
  t4268 = t4262 + t4266;
  t4278 = -1.11344*t4261;
  t4283 = 0.02159*t4265;
  t4285 = t4278 + t4283;
  t4416 = t4145*t4398;
  t4422 = t4405*t4204;
  t4429 = t4416 + t4422;
  t4441 = t4145*t4405;
  t4449 = -1.*t4398*t4204;
  t4453 = t4441 + t4449;
  t4504 = -1.*t1751*t3680*t1244;
  t4510 = t1244*t2446*t3688;
  t4521 = t4504 + t4510;
  t4523 = t3680*t1244*t2446;
  t4524 = t1751*t1244*t3688;
  t4525 = t4523 + t4524;
  t4527 = t4032*t4521;
  t4531 = t4525*t4038;
  t4532 = t4527 + t4531;
  t4534 = t4032*t4525;
  t4535 = -1.*t4521*t4038;
  t4536 = t4534 + t4535;
  t4544 = t4145*t4532;
  t4545 = t4536*t4204;
  t4546 = t4544 + t4545;
  t4550 = t4145*t4536;
  t4551 = -1.*t4532*t4204;
  t4552 = t4550 + t4551;
  t4602 = t3523*t391*t1751*t3680;
  t4605 = -1.*t3523*t391*t2446*t3688;
  t4609 = t4602 + t4605;
  t4616 = -1.*t3523*t391*t3680*t2446;
  t4617 = -1.*t3523*t391*t1751*t3688;
  t4618 = t4616 + t4617;
  t4620 = t4032*t4609;
  t4621 = t4618*t4038;
  t4624 = t4620 + t4621;
  t4629 = t4032*t4618;
  t4634 = -1.*t4609*t4038;
  t4642 = t4629 + t4634;
  t4650 = t4145*t4624;
  t4662 = t4642*t4204;
  t4670 = t4650 + t4662;
  t4683 = t4145*t4642;
  t4685 = -1.*t4624*t4204;
  t4692 = t4683 + t4685;
  t4575 = 0.049*t391;
  t4576 = -0.135*t1244;
  t4577 = t4575 + t4576;
  t4718 = t391*t1751*t3680*t119;
  t4719 = -1.*t391*t119*t2446*t3688;
  t4720 = t4718 + t4719;
  t4727 = -1.*t391*t3680*t119*t2446;
  t4728 = -1.*t391*t1751*t119*t3688;
  t4729 = t4727 + t4728;
  t4731 = t4032*t4720;
  t4732 = t4729*t4038;
  t4736 = t4731 + t4732;
  t4738 = t4032*t4729;
  t4746 = -1.*t4720*t4038;
  t4749 = t4738 + t4746;
  t4759 = t4145*t4736;
  t4762 = t4749*t4204;
  t4771 = t4759 + t4762;
  t4786 = t4145*t4749;
  t4788 = -1.*t4736*t4204;
  t4789 = t4786 + t4788;
  t4876 = -1.*t391*t3680*t2446;
  t4877 = -1.*t391*t1751*t3688;
  t4884 = t4876 + t4877;
  t4888 = -1.*t391*t1751*t3680;
  t4890 = t391*t2446*t3688;
  t4891 = t4888 + t4890;
  t4895 = t4032*t4884;
  t4896 = t4891*t4038;
  t4897 = t4895 + t4896;
  t4906 = t4032*t4891;
  t4910 = -1.*t4884*t4038;
  t4911 = t4906 + t4910;
  t4923 = t4145*t4911;
  t4924 = -1.*t4897*t4204;
  t4925 = t4923 + t4924;
  t4915 = t4145*t4897;
  t4916 = t4911*t4204;
  t4917 = t4915 + t4916;
  t4837 = -0.09*t1751;
  t4840 = -0.049*t2446;
  t4847 = t4837 + t4840;
  t4960 = -1.*t3523*t1751*t1244;
  t4962 = t119*t2446;
  t4969 = t4960 + t4962;
  t4974 = t4969*t3688;
  t4977 = t4359 + t4974;
  t4994 = t3680*t4969;
  t5001 = -1.*t4330*t3688;
  t5002 = t4994 + t5001;
  t5004 = t4032*t4977;
  t5005 = t5002*t4038;
  t5007 = t5004 + t5005;
  t5016 = t4032*t5002;
  t5020 = -1.*t4977*t4038;
  t5021 = t5016 + t5020;
  t5038 = t4145*t5021;
  t5041 = -1.*t5007*t4204;
  t5042 = t5038 + t5041;
  t5027 = t4145*t5007;
  t5028 = t5021*t4204;
  t5029 = t5027 + t5028;
  t4948 = 0.049*t1751;
  t4951 = t4948 + t2688;
  t5058 = t3523*t1751;
  t5059 = -1.*t119*t1244*t2446;
  t5060 = t5058 + t5059;
  t5063 = t3680*t5060;
  t5064 = t3678*t3688;
  t5065 = t5063 + t5064;
  t5067 = -1.*t5060*t3688;
  t5068 = t4021 + t5067;
  t5070 = t4032*t5065;
  t5071 = t5068*t4038;
  t5072 = t5070 + t5071;
  t5074 = t4032*t5068;
  t5075 = -1.*t5065*t4038;
  t5076 = t5074 + t5075;
  t5087 = t4145*t5076;
  t5090 = -1.*t5072*t4204;
  t5091 = t5087 + t5090;
  t5078 = t4145*t5072;
  t5079 = t5076*t4204;
  t5080 = t5078 + t5079;
  t4885 = t4884*t4040;
  t4894 = t4891*t4082;
  t4903 = t4897*t4214;
  t4912 = t4911*t4252;
  t4918 = t4917*t4268;
  t4926 = t4925*t4285;
  t4928 = t4259*t4925;
  t4929 = -1.*t4917*t4265;
  t4930 = t4928 + t4929;
  t4935 = -1.13106*t4930;
  t4939 = t4259*t4917;
  t4940 = t4925*t4265;
  t4942 = t4939 + t4940;
  t4946 = 0.0306*t4942;
  t5106 = 0.049*t3680;
  t5109 = t5106 + t3729;
  t5111 = -0.21*t3680;
  t5112 = -0.049*t3688;
  t5113 = t5111 + t5112;
  t5120 = -1.*t3680*t4322;
  t5123 = t5120 + t5001;
  t5125 = t5123*t4038;
  t5126 = t4400 + t5125;
  t5128 = t4032*t5123;
  t5129 = -1.*t4379*t4038;
  t5134 = t5128 + t5129;
  t5141 = t4145*t5134;
  t5142 = -1.*t5126*t4204;
  t5144 = t5141 + t5142;
  t5136 = t4145*t5126;
  t5137 = t5134*t4204;
  t5139 = t5136 + t5137;
  t5169 = t1751*t119*t1244;
  t5171 = t3523*t2446;
  t5172 = t5169 + t5171;
  t5176 = -1.*t5172*t3688;
  t5177 = t5063 + t5176;
  t5182 = -1.*t3680*t5172;
  t5183 = t5182 + t5067;
  t5190 = t4032*t5177;
  t5193 = t5183*t4038;
  t5194 = t5190 + t5193;
  t5197 = t4032*t5183;
  t5198 = -1.*t5177*t4038;
  t5200 = t5197 + t5198;
  t5210 = t4145*t5200;
  t5211 = -1.*t5194*t4204;
  t5213 = t5210 + t5211;
  t5204 = t4145*t5194;
  t5205 = t5200*t4204;
  t5208 = t5204 + t5205;
  t5243 = t391*t1751*t3680;
  t5246 = -1.*t391*t2446*t3688;
  t5247 = t5243 + t5246;
  t5262 = -1.*t5247*t4038;
  t5263 = t4895 + t5262;
  t5266 = -1.*t4032*t5247;
  t5275 = t5266 + t4910;
  t5289 = t4145*t5275;
  t5290 = -1.*t5263*t4204;
  t5296 = t5289 + t5290;
  t5279 = t4145*t5263;
  t5281 = t5275*t4204;
  t5283 = t5279 + t5281;
  t5238 = 0.00159*t4032;
  t5241 = t5238 + t4039;
  t5251 = -0.27068*t4032;
  t5257 = -0.00159*t4038;
  t5258 = t5251 + t5257;
  t5328 = -1.*t4032*t4343;
  t5333 = t5328 + t5129;
  t5339 = t4145*t5333;
  t5340 = -1.*t4405*t4204;
  t5344 = t5339 + t5340;
  t5335 = t5333*t4204;
  t5336 = t4441 + t5335;
  t5385 = t3680*t5172;
  t5390 = t5060*t3688;
  t5392 = t5385 + t5390;
  t5394 = -1.*t5392*t4038;
  t5397 = t5190 + t5394;
  t5401 = -1.*t4032*t5392;
  t5402 = t5401 + t5198;
  t5432 = t4145*t5402;
  t5440 = -1.*t5397*t4204;
  t5441 = t5432 + t5440;
  t5404 = t4145*t5397;
  t5407 = t5402*t4204;
  t5415 = t5404 + t5407;
  t5501 = t4032*t5247;
  t5502 = t4884*t4038;
  t5503 = t5501 + t5502;
  t5511 = -1.*t4145*t5503;
  t5512 = t5511 + t5290;
  t5508 = -1.*t5503*t4204;
  t5509 = t5279 + t5508;
  t5496 = -0.01841*t4145;
  t5497 = t5496 + t4210;
  t5504 = -0.70544*t4145;
  t5505 = 0.01841*t4204;
  t5506 = t5504 + t5505;
  t5526 = -1.*t4145*t4398;
  t5527 = t5526 + t5340;
  t4466 = t4259*t4453;
  t5538 = t4032*t5392;
  t5539 = t5177*t4038;
  t5540 = t5538 + t5539;
  t5545 = -1.*t4145*t5540;
  t5546 = t5545 + t5440;
  t5542 = -1.*t5540*t4204;
  t5543 = t5404 + t5542;
  t5560 = t4145*t5503;
  t5561 = t5263*t4204;
  t5562 = t5560 + t5561;
  t5515 = -1.*t5509*t4265;
  t5518 = t4259*t5509;
  t5557 = 0.02159*t4259;
  t5558 = t5557 + t4266;
  t5563 = -1.11344*t4259;
  t5564 = -0.02159*t4265;
  t5565 = t5563 + t5564;
  t5530 = -1.*t4453*t4265;
  t4469 = -1.*t4429*t4265;
  t4473 = t4466 + t4469;
  t5582 = t4145*t5540;
  t5583 = t5397*t4204;
  t5584 = t5582 + t5583;
  t5549 = -1.*t5543*t4265;
  t5552 = t4259*t5543;
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
  p_output1[27]=0;
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
  p_output1[43]=-0.135*t119 - 1.*t119*t1623 - 1.*t119*t1244*t3135 - 1.*t3523*t3621 + t3678*t3733 + 0.1305*t119*t391 + t3903*t3990 + t4031*t4040 + t4047*t4082 + t4125*t4214 + t4238*t4252 + t4258*t4268 - 1.13106*(-1.*t4258*t4265 + t4259*t4277) + 0.0306*(t4258*t4259 + t4265*t4277) + t4277*t4285;
  p_output1[44]=0.135*t3523 + t1623*t3523 + t1244*t3135*t3523 - 1.*t119*t3621 - 0.1305*t3523*t391 + t3733*t4322 + t3990*t4330 + t4040*t4343 + t4082*t4379 + t4214*t4398 + t4252*t4405 + t4268*t4429 + t4285*t4453 + 0.0306*(t4259*t4429 + t4265*t4453) - 1.13106*t4473;
  p_output1[45]=-0.049*t1244 - 1.*t1244*t3135 - 1.*t1244*t1751*t3733 - 0.0045*t391 + t1244*t2446*t3990 + t4040*t4521 + t4082*t4525 + t4214*t4532 + t4252*t4536 + t4268*t4546 + t4285*t4552 - 1.13106*(-1.*t4265*t4546 + t4259*t4552) + 0.0306*(t4259*t4546 + t4265*t4552);
  p_output1[46]=0.1305*t1244*t3523 + t3135*t3523*t391 + t1751*t3523*t3733*t391 - 1.*t2446*t3523*t391*t3990 + t3523*t4577 + t4040*t4609 + t4082*t4618 + t4214*t4624 + t4252*t4642 + t4268*t4670 + t4285*t4692 - 1.13106*(-1.*t4265*t4670 + t4259*t4692) + 0.0306*(t4259*t4670 + t4265*t4692);
  p_output1[47]=0.1305*t119*t1244 + t119*t3135*t391 + t119*t1751*t3733*t391 - 1.*t119*t2446*t391*t3990 + t119*t4577 + t4040*t4720 + t4082*t4729 + t4214*t4736 + t4252*t4749 + t4268*t4771 + t4285*t4789 - 1.13106*(-1.*t4265*t4771 + t4259*t4789) + 0.0306*(t4259*t4771 + t4265*t4789);
  p_output1[48]=-1.*t2446*t3733*t391 - 1.*t1751*t391*t3990 + t391*t4847 + t4885 + t4894 + t4903 + t4912 + t4918 + t4926 + t4935 + t4946;
  p_output1[49]=t3733*t4330 + t1244*t3523*t4847 - 1.*t119*t4951 + t3990*t4969 + t4040*t4977 + t4082*t5002 + t4214*t5007 + t4252*t5021 + t4268*t5029 + t4285*t5042 - 1.13106*(-1.*t4265*t5029 + t4259*t5042) + 0.0306*(t4259*t5029 + t4265*t5042);
  p_output1[50]=t3678*t3990 + t119*t1244*t4847 + t3523*t4951 + t3733*t5060 + t4040*t5065 + t4082*t5068 + t4214*t5072 + t4252*t5076 + t4268*t5080 + t4285*t5091 - 1.13106*(-1.*t4265*t5080 + t4259*t5091) + 0.0306*(t4259*t5080 + t4265*t5091);
  p_output1[51]=t4885 + t4894 + t4903 + t4912 + t4918 + t4926 + t4935 + t4946 - 1.*t2446*t391*t5109 + t1751*t391*t5113;
  p_output1[52]=t4040*t4379 + t4330*t5109 + t4322*t5113 + t4082*t5123 + t4214*t5126 + t4252*t5134 + t4268*t5139 + t4285*t5144 - 1.13106*(-1.*t4265*t5139 + t4259*t5144) + 0.0306*(t4259*t5139 + t4265*t5144);
  p_output1[53]=t5060*t5109 + t5113*t5172 + t4040*t5177 + t4082*t5183 + t4214*t5194 + t4252*t5200 + t4268*t5208 + t4285*t5213 - 1.13106*(-1.*t4265*t5208 + t4259*t5213) + 0.0306*(t4259*t5208 + t4265*t5213);
  p_output1[54]=t4884*t5241 + t5247*t5258 + t4214*t5263 + t4252*t5275 + t4268*t5283 + t4285*t5296 - 1.13106*(-1.*t4265*t5283 + t4259*t5296) + 0.0306*(t4259*t5283 + t4265*t5296);
  p_output1[55]=t4214*t4405 + t4379*t5241 + t4343*t5258 + t4252*t5333 + t4268*t5336 + t4285*t5344 - 1.13106*(-1.*t4265*t5336 + t4259*t5344) + 0.0306*(t4259*t5336 + t4265*t5344);
  p_output1[56]=t5177*t5241 + t5258*t5392 + t4214*t5397 + t4252*t5402 + t4268*t5415 + t4285*t5441 - 1.13106*(-1.*t4265*t5415 + t4259*t5441) + 0.0306*(t4259*t5415 + t4265*t5441);
  p_output1[57]=t5263*t5497 + t5503*t5506 + t4268*t5509 + t4285*t5512 - 1.13106*(t4259*t5512 + t5515) + 0.0306*(t4265*t5512 + t5518);
  p_output1[58]=t4268*t4453 + t4405*t5497 + t4398*t5506 + t4285*t5527 + 0.0306*(t4466 + t4265*t5527) - 1.13106*(t4259*t5527 + t5530);
  p_output1[59]=t5397*t5497 + t5506*t5540 + t4268*t5543 + t4285*t5546 - 1.13106*(t4259*t5546 + t5549) + 0.0306*(t4265*t5546 + t5552);
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=t5509*t5558 - 1.13106*(t5515 - 1.*t4259*t5562) + 0.0306*(t5518 - 1.*t4265*t5562) + t5562*t5565;
  p_output1[64]=0.0306*t4473 - 1.13106*(-1.*t4259*t4429 + t5530) + t4453*t5558 + t4429*t5565;
  p_output1[65]=t5543*t5558 + t5565*t5584 - 1.13106*(t5549 - 1.*t4259*t5584) + 0.0306*(t5552 - 1.*t4265*t5584);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 22, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void J_position_rightFoot_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




