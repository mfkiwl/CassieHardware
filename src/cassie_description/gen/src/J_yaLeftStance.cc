/*
 * Automatically Generated from Mathematica.
 * Thu 26 Aug 2021 14:19:33 GMT-07:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "J_yaLeftStance.hh"
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
  double t94;
  double t168;
  double t206;
  double t238;
  double t265;
  double t464;
  double t710;
  double t749;
  double t1016;
  double t1033;
  double t1045;
  double t1060;
  double t1206;
  double t1233;
  double t1290;
  double t1566;
  double t1579;
  double t1587;
  double t1673;
  double t1728;
  double t1825;
  double t1960;
  double t2076;
  double t2085;
  double t2118;
  double t2219;
  double t2221;
  double t2226;
  double t526;
  double t630;
  double t636;
  double t246;
  double t289;
  double t354;
  double t1314;
  double t1346;
  double t1349;
  double t1058;
  double t1139;
  double t1171;
  double t2150;
  double t2159;
  double t2214;
  double t2438;
  double t2442;
  double t2447;
  double t1845;
  double t1969;
  double t1982;
  double t2507;
  double t2520;
  double t2533;
  double t2624;
  double t2652;
  double t148;
  double t371;
  double t474;
  double t700;
  double t1297;
  double t1607;
  double t2134;
  double t2238;
  double t2242;
  double t2261;
  double t2286;
  double t2313;
  double t2360;
  double t2361;
  double t2364;
  double t2381;
  double t2387;
  double t2405;
  double t2409;
  double t2424;
  double t2430;
  double t2474;
  double t2501;
  double t2521;
  double t2667;
  double t2678;
  double t2690;
  double t2703;
  double t2708;
  double t2723;
  double t2731;
  double t2732;
  double t2738;
  double t2739;
  double t2838;
  double t2845;
  double t2846;
  double t2868;
  double t2886;
  double t2889;
  double t2909;
  double t2932;
  double t2396;
  double t2766;
  double t2769;
  double t2795;
  double t3281;
  double t3330;
  double t3367;
  double t3092;
  double t3100;
  double t3105;
  double t3068;
  double t3072;
  double t2837;
  double t3152;
  double t3190;
  double t3218;
  double t3108;
  double t3113;
  double t2866;
  double t3533;
  double t3535;
  double t3669;
  double t3675;
  double t3634;
  double t3643;
  double t3656;
  double t4036;
  double t4082;
  double t4109;
  double t4118;
  double t4126;
  double t4163;
  double t4226;
  double t4230;
  double t4234;
  double t4245;
  double t4248;
  double t4263;
  double t4299;
  double t4318;
  double t4322;
  double t4350;
  double t4351;
  double t4352;
  double t4405;
  double t4427;
  double t4440;
  double t4447;
  double t4558;
  double t4586;
  double t4598;
  double t4379;
  double t4386;
  double t4401;
  double t4132;
  double t4179;
  double t4182;
  double t4210;
  double t4220;
  double t4224;
  double t4339;
  double t4341;
  double t4348;
  double t4259;
  double t4266;
  double t4276;
  double t4748;
  double t4750;
  double t4759;
  double t4442;
  double t4509;
  double t4518;
  double t4604;
  double t4608;
  double t4631;
  double t4769;
  double t4779;
  double t4794;
  double t4799;
  double t4806;
  double t4078;
  double t4086;
  double t4187;
  double t4225;
  double t4323;
  double t4375;
  double t4554;
  double t4635;
  double t4648;
  double t4654;
  double t4656;
  double t4672;
  double t4673;
  double t4682;
  double t4684;
  double t4696;
  double t4715;
  double t4737;
  double t4742;
  double t4743;
  double t4746;
  double t4761;
  double t4765;
  double t4798;
  double t4807;
  double t4812;
  double t4820;
  double t4835;
  double t4837;
  double t4838;
  double t4852;
  double t4857;
  double t4867;
  double t4874;
  double t4913;
  double t4957;
  double t5000;
  double t5048;
  double t5050;
  double t5058;
  double t5063;
  double t5067;
  double t5130;
  double t5153;
  double t5156;
  double t5159;
  double t5167;
  double t5168;
  double t5172;
  double t5175;
  double t5178;
  double t5179;
  double t5180;
  double t4884;
  double t4885;
  double t4886;
  double t4889;
  double t5183;
  double t5184;
  double t5185;
  double t5187;
  double t5188;
  double t5192;
  double t5193;
  double t5075;
  double t5079;
  double t5080;
  double t5085;
  double t5100;
  double t5110;
  double t5182;
  double t5196;
  double t5197;
  double t5198;
  double t4722;
  double t4879;
  double t4880;
  double t4881;
  double t5343;
  double t5344;
  double t5359;
  double t5245;
  double t5246;
  double t5254;
  double t5260;
  double t5279;
  double t4893;
  double t5324;
  double t5327;
  double t5329;
  double t5293;
  double t5297;
  double t5004;
  double t5428;
  double t5442;
  double t5363;
  double t5367;
  double t5369;
  double t5373;
  double t5374;
  double t5389;
  double t5204;
  double t5205;
  double t5454;
  double t5455;
  double t5456;
  double t5461;
  double t5463;
  double t5467;
  double t5612;
  double t5615;
  double t5617;
  double t5618;
  double t5626;
  double t5676;
  double t5677;
  double t5683;
  double t5645;
  double t5647;
  double t5653;
  t94 = Cos(var1[8]);
  t168 = Cos(var1[9]);
  t206 = -1.*t168;
  t238 = 1. + t206;
  t265 = Sin(var1[9]);
  t464 = Sin(var1[8]);
  t710 = -1.*var1[9];
  t749 = 0.226893 + t710;
  t1016 = Cos(t749);
  t1033 = -1.*t1016;
  t1045 = 1. + t1033;
  t1060 = Sin(t749);
  t1206 = -1.*t94*t265;
  t1233 = -1.*t168*t464;
  t1290 = t1206 + t1233;
  t1566 = t168*t94;
  t1579 = -1.*t265*t464;
  t1587 = t1566 + t1579;
  t1673 = Cos(var1[13]);
  t1728 = -1.*t1673;
  t1825 = 1. + t1728;
  t1960 = Sin(var1[13]);
  t2076 = t1060*t1290;
  t2085 = t1016*t1587;
  t2118 = t2076 + t2085;
  t2219 = t1016*t1290;
  t2221 = -1.*t1060*t1587;
  t2226 = t2219 + t2221;
  t526 = -0.21*t238;
  t630 = 0.049*t265;
  t636 = t526 + t630;
  t246 = -0.049*t238;
  t289 = -0.21*t265;
  t354 = t246 + t289;
  t1314 = 0.01841*t1045;
  t1346 = -0.70544*t1060;
  t1349 = t1314 + t1346;
  t1058 = -0.70544*t1045;
  t1139 = -0.01841*t1060;
  t1171 = t1058 + t1139;
  t2150 = -1.11344*t1825;
  t2159 = 0.02159*t1960;
  t2214 = t2150 + t2159;
  t2438 = t94*t265;
  t2442 = t168*t464;
  t2447 = t2438 + t2442;
  t1845 = -0.02159*t1825;
  t1969 = -1.11344*t1960;
  t1982 = t1845 + t1969;
  t2507 = -1.*t1060*t2447;
  t2520 = t2507 + t2085;
  t2533 = t1016*t2447;
  t2624 = t1060*t1587;
  t2652 = t2533 + t2624;
  t148 = 0.049*t94;
  t371 = t94*t354;
  t474 = -0.09*t464;
  t700 = -1.*t636*t464;
  t1297 = t1171*t1290;
  t1607 = t1349*t1587;
  t2134 = t1982*t2118;
  t2238 = t2214*t2226;
  t2242 = -1.*t1960*t2118;
  t2261 = t1673*t2226;
  t2286 = t2242 + t2261;
  t2313 = -1.11344*t2286;
  t2360 = t1673*t2118;
  t2361 = t1960*t2226;
  t2364 = t2360 + t2361;
  t2381 = -0.02159*t2364;
  t2387 = t148 + t371 + t474 + t700 + t1297 + t1607 + t2134 + t2238 + t2313 + t2381;
  t2405 = 0.09*t94;
  t2409 = t94*t636;
  t2424 = 0.049*t464;
  t2430 = t354*t464;
  t2474 = t1349*t2447;
  t2501 = t1171*t1587;
  t2521 = t2214*t2520;
  t2667 = t1982*t2652;
  t2678 = t1960*t2520;
  t2690 = t1673*t2652;
  t2703 = t2678 + t2690;
  t2708 = -0.02159*t2703;
  t2723 = t1673*t2520;
  t2731 = -1.*t1960*t2652;
  t2732 = t2723 + t2731;
  t2738 = -1.11344*t2732;
  t2739 = t2405 + t2409 + t2424 + t2430 + t2474 + t2501 + t2521 + t2667 + t2708 + t2738;
  t2838 = -1.*t168*t94;
  t2845 = t265*t464;
  t2846 = t2838 + t2845;
  t2868 = -1.*t1060*t1290;
  t2886 = t1016*t2846;
  t2889 = t2868 + t2886;
  t2909 = t1060*t2846;
  t2932 = t2219 + t2909;
  t2396 = Power(t2387,2);
  t2766 = Power(t2739,2);
  t2769 = 0.00002025 + t2396 + t2766;
  t2795 = 1/Sqrt(t2769);
  t3281 = t2219 + t2533;
  t3330 = t1060*t2447;
  t3367 = t2076 + t3330;
  t3092 = -0.21*t168;
  t3100 = -0.049*t265;
  t3105 = t3092 + t3100;
  t3068 = 0.049*t168;
  t3072 = t3068 + t289;
  t2837 = t1349*t1290;
  t3152 = 0.01841*t1016;
  t3190 = 0.70544*t1060;
  t3218 = t3152 + t3190;
  t3108 = 0.70544*t1016;
  t3113 = t3108 + t1139;
  t2866 = t1171*t2846;
  t3533 = t2085 + t2886;
  t3535 = t2624 + t2909;
  t3669 = 0.02159*t1673;
  t3675 = t3669 + t1969;
  t3634 = -1.11344*t1673;
  t3643 = -0.02159*t1960;
  t3656 = t3634 + t3643;
  t4036 = Cos(var1[16]);
  t4082 = Sin(var1[16]);
  t4109 = Cos(var1[17]);
  t4118 = -1.*t4109;
  t4126 = 1. + t4118;
  t4163 = Sin(var1[17]);
  t4226 = -1.*var1[17];
  t4230 = 0.226893 + t4226;
  t4234 = Cos(t4230);
  t4245 = -1.*t4234;
  t4248 = 1. + t4245;
  t4263 = Sin(t4230);
  t4299 = -1.*t4109*t4082;
  t4318 = -1.*t4036*t4163;
  t4322 = t4299 + t4318;
  t4350 = t4036*t4109;
  t4351 = -1.*t4082*t4163;
  t4352 = t4350 + t4351;
  t4405 = Cos(var1[21]);
  t4427 = -1.*t4405;
  t4440 = 1. + t4427;
  t4447 = Sin(var1[21]);
  t4558 = t4234*t4322;
  t4586 = -1.*t4263*t4352;
  t4598 = t4558 + t4586;
  t4379 = t4263*t4322;
  t4386 = t4234*t4352;
  t4401 = t4379 + t4386;
  t4132 = -0.049*t4126;
  t4179 = -0.21*t4163;
  t4182 = t4132 + t4179;
  t4210 = -0.21*t4126;
  t4220 = 0.049*t4163;
  t4224 = t4210 + t4220;
  t4339 = 0.01841*t4248;
  t4341 = -0.70544*t4263;
  t4348 = t4339 + t4341;
  t4259 = -0.70544*t4248;
  t4266 = -0.01841*t4263;
  t4276 = t4259 + t4266;
  t4748 = t4109*t4082;
  t4750 = t4036*t4163;
  t4759 = t4748 + t4750;
  t4442 = -0.02159*t4440;
  t4509 = -1.11344*t4447;
  t4518 = t4442 + t4509;
  t4604 = -1.11344*t4440;
  t4608 = 0.02159*t4447;
  t4631 = t4604 + t4608;
  t4769 = t4234*t4759;
  t4779 = t4263*t4352;
  t4794 = t4769 + t4779;
  t4799 = -1.*t4263*t4759;
  t4806 = t4799 + t4386;
  t4078 = 0.049*t4036;
  t4086 = -0.09*t4082;
  t4187 = t4036*t4182;
  t4225 = -1.*t4082*t4224;
  t4323 = t4276*t4322;
  t4375 = t4348*t4352;
  t4554 = t4401*t4518;
  t4635 = t4598*t4631;
  t4648 = t4405*t4598;
  t4654 = -1.*t4401*t4447;
  t4656 = t4648 + t4654;
  t4672 = -1.11344*t4656;
  t4673 = t4405*t4401;
  t4682 = t4598*t4447;
  t4684 = t4673 + t4682;
  t4696 = -0.02159*t4684;
  t4715 = t4078 + t4086 + t4187 + t4225 + t4323 + t4375 + t4554 + t4635 + t4672 + t4696;
  t4737 = 0.09*t4036;
  t4742 = 0.049*t4082;
  t4743 = t4082*t4182;
  t4746 = t4036*t4224;
  t4761 = t4348*t4759;
  t4765 = t4276*t4352;
  t4798 = t4794*t4518;
  t4807 = t4806*t4631;
  t4812 = t4405*t4794;
  t4820 = t4806*t4447;
  t4835 = t4812 + t4820;
  t4837 = -0.02159*t4835;
  t4838 = t4405*t4806;
  t4852 = -1.*t4794*t4447;
  t4857 = t4838 + t4852;
  t4867 = -1.11344*t4857;
  t4874 = t4737 + t4742 + t4743 + t4746 + t4761 + t4765 + t4798 + t4807 + t4837 + t4867;
  t4913 = -1.*t4036*t4109;
  t4957 = t4082*t4163;
  t5000 = t4913 + t4957;
  t5048 = t4263*t5000;
  t5050 = t4558 + t5048;
  t5058 = -1.*t4263*t4322;
  t5063 = t4234*t5000;
  t5067 = t5058 + t5063;
  t5130 = -0.049*t4036;
  t5153 = 0.09*t4082;
  t5156 = -1.*t4036*t4182;
  t5159 = t4082*t4224;
  t5167 = -1.*t4276*t4322;
  t5168 = -1.*t4348*t4352;
  t5172 = -1.*t4401*t4518;
  t5175 = -1.*t4598*t4631;
  t5178 = 1.11344*t4656;
  t5179 = 0.02159*t4684;
  t5180 = t5130 + t5153 + t5156 + t5159 + t5167 + t5168 + t5172 + t5175 + t5178 + t5179;
  t4884 = -0.09*t4036;
  t4885 = -0.049*t4082;
  t4886 = -1.*t4082*t4182;
  t4889 = -1.*t4036*t4224;
  t5183 = -1.*t4348*t4759;
  t5184 = -1.*t4276*t4352;
  t5185 = -1.*t4794*t4518;
  t5187 = -1.*t4806*t4631;
  t5188 = 0.02159*t4835;
  t5192 = 1.11344*t4857;
  t5193 = t4884 + t4885 + t4886 + t4889 + t5183 + t5184 + t5185 + t5187 + t5188 + t5192;
  t5075 = t4405*t5050;
  t5079 = t5067*t4447;
  t5080 = t5075 + t5079;
  t5085 = t4405*t5067;
  t5100 = -1.*t5050*t4447;
  t5110 = t5085 + t5100;
  t5182 = Power(t5180,2);
  t5196 = Power(t5193,2);
  t5197 = t5182 + t5196;
  t5198 = 1/t5197;
  t4722 = Power(t4715,2);
  t4879 = Power(t4874,2);
  t4880 = 0.00002025 + t4722 + t4879;
  t4881 = 1/Sqrt(t4880);
  t5343 = t4263*t4759;
  t5344 = t4379 + t5343;
  t5359 = t4558 + t4769;
  t5245 = 0.049*t4109;
  t5246 = t5245 + t4179;
  t5254 = -0.21*t4109;
  t5260 = -0.049*t4163;
  t5279 = t5254 + t5260;
  t4893 = t4348*t4322;
  t5324 = 0.01841*t4234;
  t5327 = 0.70544*t4263;
  t5329 = t5324 + t5327;
  t5293 = 0.70544*t4234;
  t5297 = t5293 + t4266;
  t5004 = t4276*t5000;
  t5428 = t4779 + t5048;
  t5442 = t4386 + t5063;
  t5363 = t4405*t5344;
  t5367 = t5359*t4447;
  t5369 = t5363 + t5367;
  t5373 = t4405*t5359;
  t5374 = -1.*t5344*t4447;
  t5389 = t5373 + t5374;
  t5204 = -1.*t4348*t4322;
  t5205 = -1.*t4276*t5000;
  t5454 = t4405*t5428;
  t5455 = t5442*t4447;
  t5456 = t5454 + t5455;
  t5461 = t4405*t5442;
  t5463 = -1.*t5428*t4447;
  t5467 = t5461 + t5463;
  t5612 = 0.02159*t4405;
  t5615 = t5612 + t4509;
  t5617 = -1.11344*t4405;
  t5618 = -0.02159*t4447;
  t5626 = t5617 + t5618;
  t5676 = -1.*t4405*t4794;
  t5677 = -1.*t4806*t4447;
  t5683 = t5676 + t5677;
  t5645 = -1.*t4405*t4401;
  t5647 = -1.*t4598*t4447;
  t5653 = t5645 + t5647;
  p_output1[0]=-1.;
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
  p_output1[11]=1.;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=1.;
  p_output1[20]=0;
  p_output1[21]=0.5*t2795*(2.*t2387*t2739 + 2.*t2387*(t2837 + t2866 + t2214*t2889 + t1982*t2932 - 0.02159*(t1960*t2889 + t1673*t2932) - 1.11344*(t1673*t2889 - 1.*t1960*t2932) - 0.049*t464 - 1.*t354*t464 - 0.09*t94 - 1.*t636*t94));
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0.5*t2795*(2.*t2739*(t1297 + t1607 + t2447*t3113 + t1587*t3218 + t2214*t3281 + t1982*t3367 - 0.02159*(t1960*t3281 + t1673*t3367) - 1.11344*(t1673*t3281 - 1.*t1960*t3367) + t3105*t464 + t3072*t94) + 2.*t2387*(t2837 + t2866 + t1587*t3113 + t1290*t3218 + t2214*t3533 + t1982*t3535 - 0.02159*(t1960*t3533 + t1673*t3535) - 1.11344*(t1673*t3533 - 1.*t1960*t3535) - 1.*t3072*t464 + t3105*t94));
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0.5*t2795*(2.*t2387*(-1.11344*(-1.*t1673*t2118 - 1.*t1960*t2226) - 0.02159*t2286 + t2118*t3656 + t2226*t3675) + 2.*t2739*(-1.11344*(-1.*t1960*t2520 - 1.*t1673*t2652) - 0.02159*t2732 + t2652*t3656 + t2520*t3675));
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
  p_output1[51]=1.;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=1.;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0.5*t4881*(2.*t4715*t4874 + 2.*t4715*(t4884 + t4885 + t4886 + t4889 + t4893 + t5004 + t4518*t5050 + t4631*t5067 - 0.02159*t5080 - 1.11344*t5110));
  p_output1[68]=t4715*t5180*t5198 + t5193*t5198*(t4737 + t4742 + t4743 + t4746 - 1.*t4518*t5050 - 1.*t4631*t5067 + 0.02159*t5080 + 1.11344*t5110 + t5204 + t5205);
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0.5*t4881*(2.*t4874*(t4323 + t4375 + t4036*t5246 + t4082*t5279 + t4759*t5297 + t4352*t5329 + t4518*t5344 + t4631*t5359 - 0.02159*t5369 - 1.11344*t5389) + 2.*t4715*(t4893 + t5004 - 1.*t4082*t5246 + t4036*t5279 + t4352*t5297 + t4322*t5329 + t4518*t5428 + t4631*t5442 - 0.02159*t5456 - 1.11344*t5467));
  p_output1[77]=t4715*t5198*(t5167 + t5168 - 1.*t4036*t5246 - 1.*t4082*t5279 - 1.*t4759*t5297 - 1.*t4352*t5329 - 1.*t4518*t5344 - 1.*t4631*t5359 + 0.02159*t5369 + 1.11344*t5389) + t5193*t5198*(t5204 + t5205 + t4082*t5246 - 1.*t4036*t5279 - 1.*t4352*t5297 - 1.*t4322*t5329 - 1.*t4518*t5428 - 1.*t4631*t5442 + 0.02159*t5456 + 1.11344*t5467);
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0;
  p_output1[85]=0.5*t4881*(2.*t4715*(-0.02159*t4656 + t4598*t5615 + t4401*t5626 - 1.11344*t5653) + 2.*t4874*(-0.02159*t4857 + t4806*t5615 + t4794*t5626 - 1.11344*t5683));
  p_output1[86]=t5193*t5198*(0.02159*t4656 - 1.*t4598*t5615 - 1.*t4401*t5626 + 1.11344*t5653) + t4715*t5198*(0.02159*t4857 - 1.*t4806*t5615 - 1.*t4794*t5626 + 1.11344*t5683);
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 10, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void J_yaLeftStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




