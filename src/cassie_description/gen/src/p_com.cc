/*
 * Automatically Generated from Mathematica.
 * Sun 29 Aug 2021 14:49:27 GMT-07:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "p_com.hh"
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
  double t3556;
  double t3912;
  double t4128;
  double t4135;
  double t4275;
  double t4304;
  double t4314;
  double t4364;
  double t4351;
  double t4365;
  double t4366;
  double t4367;
  double t4369;
  double t4370;
  double t4374;
  double t4375;
  double t4378;
  double t4382;
  double t4386;
  double t4399;
  double t4463;
  double t4477;
  double t4487;
  double t4495;
  double t4404;
  double t4408;
  double t4424;
  double t4491;
  double t4496;
  double t4497;
  double t4500;
  double t4516;
  double t4517;
  double t4518;
  double t4519;
  double t4520;
  double t4521;
  double t4528;
  double t4586;
  double t4590;
  double t4594;
  double t4606;
  double t4532;
  double t4535;
  double t4539;
  double t4602;
  double t4607;
  double t4608;
  double t4609;
  double t4610;
  double t4611;
  double t4612;
  double t4613;
  double t4614;
  double t4615;
  double t4616;
  double t4659;
  double t4665;
  double t4669;
  double t4680;
  double t4623;
  double t4626;
  double t4630;
  double t4676;
  double t4687;
  double t4696;
  double t4697;
  double t4699;
  double t4700;
  double t4701;
  double t4702;
  double t4705;
  double t4712;
  double t4713;
  double t4722;
  double t4726;
  double t4733;
  double t4741;
  double t4715;
  double t4716;
  double t4717;
  double t4775;
  double t4779;
  double t4783;
  double t4795;
  double t4737;
  double t4745;
  double t4749;
  double t4753;
  double t4757;
  double t4761;
  double t4762;
  double t4763;
  double t4808;
  double t4764;
  double t4765;
  double t4766;
  double t4791;
  double t4816;
  double t4768;
  double t4769;
  double t4770;
  double t4845;
  double t4857;
  double t4820;
  double t4865;
  double t4817;
  double t4879;
  double t4809;
  double t4862;
  double t4799;
  double t4930;
  double t4931;
  double t4932;
  double t4937;
  double t4127;
  double t4970;
  double t4972;
  double t4987;
  double t4991;
  double t4995;
  double t5000;
  double t4983;
  double t4999;
  double t5001;
  double t5002;
  double t5003;
  double t5004;
  double t5005;
  double t5006;
  double t5007;
  double t5008;
  double t5012;
  double t5013;
  double t5015;
  double t5016;
  double t5020;
  double t5034;
  double t5038;
  double t5042;
  double t5047;
  double t5046;
  double t5048;
  double t5049;
  double t5050;
  double t5051;
  double t5052;
  double t5053;
  double t5054;
  double t5055;
  double t5058;
  double t5065;
  double t5098;
  double t5099;
  double t5100;
  double t5102;
  double t5073;
  double t5077;
  double t5081;
  double t5101;
  double t5103;
  double t5104;
  double t5105;
  double t5106;
  double t5107;
  double t5108;
  double t5112;
  double t5113;
  double t5116;
  double t5120;
  double t5141;
  double t5142;
  double t5143;
  double t5145;
  double t5128;
  double t5132;
  double t5136;
  double t5144;
  double t5146;
  double t5150;
  double t5154;
  double t5158;
  double t5162;
  double t5166;
  double t5170;
  double t5174;
  double t5178;
  double t5182;
  double t5191;
  double t5198;
  double t5201;
  double t5207;
  double t5184;
  double t5185;
  double t5186;
  double t5245;
  double t5249;
  double t5253;
  double t5256;
  double t5204;
  double t5211;
  double t5215;
  double t5219;
  double t5223;
  double t5224;
  double t5225;
  double t5226;
  double t5255;
  double t5227;
  double t5228;
  double t5229;
  double t5260;
  double t5281;
  double t5231;
  double t5232;
  double t5233;
  double t5298;
  double t5311;
  double t5291;
  double t5327;
  double t5285;
  double t5337;
  double t5257;
  double t5324;
  double t5261;
  double t5377;
  double t5378;
  double t5379;
  double t5381;
  double t5420;
  double t5425;
  double t5418;
  double t5419;
  double t5424;
  double t5428;
  double t5431;
  double t5433;
  double t5434;
  double t5437;
  double t5438;
  double t5439;
  double t5458;
  double t5459;
  double t5460;
  double t5461;
  double t5462;
  double t5464;
  double t5465;
  double t5469;
  double t5473;
  double t5474;
  double t5476;
  double t5477;
  double t5478;
  double t5480;
  double t5481;
  double t5482;
  double t5487;
  double t5488;
  double t5489;
  double t5490;
  double t5491;
  double t5493;
  double t5494;
  double t5495;
  double t5500;
  double t5501;
  double t5502;
  double t5503;
  double t5504;
  double t5506;
  double t5507;
  double t5508;
  double t4774;
  double t4787;
  double t4803;
  double t4807;
  double t4810;
  double t4811;
  double t4812;
  double t5513;
  double t5514;
  double t4814;
  double t4815;
  double t4818;
  double t4819;
  double t4821;
  double t4825;
  double t4829;
  double t5515;
  double t5516;
  double t5517;
  double t4837;
  double t4841;
  double t4849;
  double t4853;
  double t4858;
  double t4859;
  double t4860;
  double t5519;
  double t5520;
  double t5521;
  double t4863;
  double t4866;
  double t4868;
  double t4869;
  double t4883;
  double t4891;
  double t4895;
  double t4903;
  double t4910;
  double t4911;
  double t4913;
  double t4915;
  double t4933;
  double t4941;
  double t4945;
  double t4953;
  double t4957;
  double t4958;
  double t5443;
  double t5558;
  double t5559;
  double t5560;
  double t5561;
  double t5562;
  double t5563;
  double t5564;
  double t5566;
  double t5567;
  double t5568;
  double t5573;
  double t5574;
  double t5575;
  double t5576;
  double t5577;
  double t5579;
  double t5580;
  double t5581;
  double t5586;
  double t5587;
  double t5588;
  double t5589;
  double t5590;
  double t5592;
  double t5593;
  double t5594;
  double t5599;
  double t5600;
  double t5601;
  double t5602;
  double t5603;
  double t5605;
  double t5606;
  double t5607;
  double t5612;
  double t5613;
  double t5614;
  double t5615;
  double t5616;
  double t5618;
  double t5619;
  double t5620;
  double t5242;
  double t5254;
  double t5258;
  double t5259;
  double t5262;
  double t5266;
  double t5267;
  double t5625;
  double t5626;
  double t5273;
  double t5277;
  double t5289;
  double t5290;
  double t5292;
  double t5293;
  double t5294;
  double t5627;
  double t5628;
  double t5629;
  double t5296;
  double t5297;
  double t5301;
  double t5308;
  double t5314;
  double t5318;
  double t5322;
  double t5631;
  double t5632;
  double t5633;
  double t5325;
  double t5328;
  double t5330;
  double t5331;
  double t5340;
  double t5345;
  double t5346;
  double t5348;
  double t5352;
  double t5353;
  double t5358;
  double t5364;
  double t5380;
  double t5388;
  double t5391;
  double t5397;
  double t5399;
  double t5400;
  double t5677;
  double t5678;
  double t5679;
  double t5680;
  double t5681;
  double t5683;
  double t5684;
  double t5685;
  double t5690;
  double t5692;
  double t5693;
  double t5694;
  double t5695;
  double t5697;
  double t5698;
  double t5699;
  double t5703;
  double t5704;
  double t5706;
  double t5707;
  double t5708;
  double t5710;
  double t5711;
  double t5712;
  double t5717;
  double t5718;
  double t5719;
  double t5720;
  double t5721;
  double t5723;
  double t5724;
  double t5725;
  double t5730;
  double t5731;
  double t5732;
  double t5733;
  double t5734;
  double t5736;
  double t5737;
  double t5738;
  double t5743;
  double t5744;
  double t5745;
  double t5746;
  double t5747;
  double t5749;
  double t5750;
  double t5751;
  double t5687;
  double t5788;
  double t5789;
  double t5794;
  double t5795;
  double t5796;
  double t5790;
  double t5791;
  double t5792;
  double t5801;
  double t5802;
  double t5803;
  double t5804;
  double t5805;
  double t5807;
  double t5808;
  double t5809;
  double t5814;
  double t5815;
  double t5816;
  double t5817;
  double t5818;
  double t5820;
  double t5821;
  double t5822;
  double t5827;
  double t5828;
  double t5829;
  double t5830;
  double t5831;
  double t5833;
  double t5834;
  double t5835;
  double t5840;
  double t5841;
  double t5842;
  double t5843;
  double t5844;
  double t5846;
  double t5847;
  double t5848;
  double t5853;
  double t5854;
  double t5855;
  double t5856;
  double t5857;
  double t5859;
  double t5860;
  double t5861;
  t3556 = Cos(var1[4]);
  t3912 = Sin(var1[4]);
  t4128 = Cos(var1[14]);
  t4135 = Sin(var1[14]);
  t4275 = Cos(var1[15]);
  t4304 = -1.*t4275;
  t4314 = 1. + t4304;
  t4364 = Sin(var1[15]);
  t4351 = -0.049*t4314;
  t4365 = -0.135*t4364;
  t4366 = t4351 + t4365;
  t4367 = t3556*t4366;
  t4369 = 0.135*t4135*t3912;
  t4370 = -0.135*t4314;
  t4374 = 0.049*t4364;
  t4375 = t4370 + t4374;
  t4378 = t4135*t4375*t3912;
  t4382 = -1.*t3556*t4364;
  t4386 = t4275*t4135*t3912;
  t4399 = t4382 + t4386;
  t4463 = Cos(var1[16]);
  t4477 = -1.*t4463;
  t4487 = 1. + t4477;
  t4495 = Sin(var1[16]);
  t4404 = t4275*t3556;
  t4408 = t4135*t4364*t3912;
  t4424 = t4404 + t4408;
  t4491 = -0.09*t4487;
  t4496 = 0.049*t4495;
  t4497 = t4491 + t4496;
  t4500 = t4128*t4497*t3912;
  t4516 = -0.049*t4487;
  t4517 = -0.09*t4495;
  t4518 = t4516 + t4517;
  t4519 = t4518*t4424;
  t4520 = t4128*t4495*t3912;
  t4521 = t4463*t4424;
  t4528 = t4520 + t4521;
  t4586 = Cos(var1[17]);
  t4590 = -1.*t4586;
  t4594 = 1. + t4590;
  t4606 = Sin(var1[17]);
  t4532 = t4128*t4463*t3912;
  t4535 = -1.*t4495*t4424;
  t4539 = t4532 + t4535;
  t4602 = -0.049*t4594;
  t4607 = -0.21*t4606;
  t4608 = t4602 + t4607;
  t4609 = t4608*t4528;
  t4610 = -0.21*t4594;
  t4611 = 0.049*t4606;
  t4612 = t4610 + t4611;
  t4613 = t4612*t4539;
  t4614 = -1.*t4606*t4528;
  t4615 = t4586*t4539;
  t4616 = t4614 + t4615;
  t4659 = Cos(var1[18]);
  t4665 = -1.*t4659;
  t4669 = 1. + t4665;
  t4680 = Sin(var1[18]);
  t4623 = t4586*t4528;
  t4626 = t4606*t4539;
  t4630 = t4623 + t4626;
  t4676 = -0.27068*t4669;
  t4687 = 0.00159*t4680;
  t4696 = t4676 + t4687;
  t4697 = t4696*t4616;
  t4699 = -0.00159*t4669;
  t4700 = -0.27068*t4680;
  t4701 = t4699 + t4700;
  t4702 = t4701*t4630;
  t4705 = t4680*t4616;
  t4712 = t4659*t4630;
  t4713 = t4705 + t4712;
  t4722 = Cos(var1[19]);
  t4726 = -1.*t4722;
  t4733 = 1. + t4726;
  t4741 = Sin(var1[19]);
  t4715 = t4659*t4616;
  t4716 = -1.*t4680*t4630;
  t4717 = t4715 + t4716;
  t4775 = Cos(var1[20]);
  t4779 = -1.*t4775;
  t4783 = 1. + t4779;
  t4795 = Sin(var1[20]);
  t4737 = 0.01841*t4733;
  t4745 = -0.70544*t4741;
  t4749 = t4737 + t4745;
  t4753 = t4749*t4713;
  t4757 = -0.70544*t4733;
  t4761 = -0.01841*t4741;
  t4762 = t4757 + t4761;
  t4763 = t4762*t4717;
  t4808 = 0.005481192614*t4783;
  t4764 = -1.*t4741*t4713;
  t4765 = t4722*t4717;
  t4766 = t4764 + t4765;
  t4791 = 0.07769774964800001*t4783;
  t4816 = -0.0004284921280000001*t4783;
  t4768 = t4722*t4713;
  t4769 = t4741*t4717;
  t4770 = t4768 + t4769;
  t4845 = 0.005498*t4795;
  t4857 = 0.996943*t4795;
  t4820 = -0.077936*t4795;
  t4865 = 0.0004284921280000001*t4783;
  t4817 = -0.996943*t4795;
  t4879 = -0.005481192614*t4783;
  t4809 = 0.077936*t4795;
  t4862 = -0.07769774964800001*t4783;
  t4799 = -0.005498*t4795;
  t4930 = Cos(var1[21]);
  t4931 = -1.*t4930;
  t4932 = 1. + t4931;
  t4937 = Sin(var1[21]);
  t4127 = -0.0233*t3556;
  t4970 = Cos(var1[6]);
  t4972 = Sin(var1[6]);
  t4987 = Cos(var1[7]);
  t4991 = -1.*t4987;
  t4995 = 1. + t4991;
  t5000 = Sin(var1[7]);
  t4983 = -0.135*t3912*t4972;
  t4999 = 0.135*t4995;
  t5001 = 0.049*t5000;
  t5002 = t4999 + t5001;
  t5003 = t3912*t4972*t5002;
  t5004 = -0.049*t4995;
  t5005 = 0.135*t5000;
  t5006 = t5004 + t5005;
  t5007 = t3556*t5006;
  t5008 = t4987*t3912*t4972;
  t5012 = -1.*t3556*t5000;
  t5013 = t5008 + t5012;
  t5015 = t3556*t4987;
  t5016 = t3912*t4972*t5000;
  t5020 = t5015 + t5016;
  t5034 = Cos(var1[8]);
  t5038 = -1.*t5034;
  t5042 = 1. + t5038;
  t5047 = Sin(var1[8]);
  t5046 = -0.049*t5042;
  t5048 = -0.09*t5047;
  t5049 = t5046 + t5048;
  t5050 = t5020*t5049;
  t5051 = -0.09*t5042;
  t5052 = 0.049*t5047;
  t5053 = t5051 + t5052;
  t5054 = t4970*t3912*t5053;
  t5055 = t5034*t5020;
  t5058 = t4970*t3912*t5047;
  t5065 = t5055 + t5058;
  t5098 = Cos(var1[9]);
  t5099 = -1.*t5098;
  t5100 = 1. + t5099;
  t5102 = Sin(var1[9]);
  t5073 = t4970*t5034*t3912;
  t5077 = -1.*t5020*t5047;
  t5081 = t5073 + t5077;
  t5101 = -0.049*t5100;
  t5103 = -0.21*t5102;
  t5104 = t5101 + t5103;
  t5105 = t5104*t5065;
  t5106 = -0.21*t5100;
  t5107 = 0.049*t5102;
  t5108 = t5106 + t5107;
  t5112 = t5108*t5081;
  t5113 = -1.*t5102*t5065;
  t5116 = t5098*t5081;
  t5120 = t5113 + t5116;
  t5141 = Cos(var1[10]);
  t5142 = -1.*t5141;
  t5143 = 1. + t5142;
  t5145 = Sin(var1[10]);
  t5128 = t5098*t5065;
  t5132 = t5102*t5081;
  t5136 = t5128 + t5132;
  t5144 = -0.27068*t5143;
  t5146 = 0.00159*t5145;
  t5150 = t5144 + t5146;
  t5154 = t5150*t5120;
  t5158 = -0.00159*t5143;
  t5162 = -0.27068*t5145;
  t5166 = t5158 + t5162;
  t5170 = t5166*t5136;
  t5174 = t5145*t5120;
  t5178 = t5141*t5136;
  t5182 = t5174 + t5178;
  t5191 = Cos(var1[11]);
  t5198 = -1.*t5191;
  t5201 = 1. + t5198;
  t5207 = Sin(var1[11]);
  t5184 = t5141*t5120;
  t5185 = -1.*t5145*t5136;
  t5186 = t5184 + t5185;
  t5245 = Cos(var1[12]);
  t5249 = -1.*t5245;
  t5253 = 1. + t5249;
  t5256 = Sin(var1[12]);
  t5204 = 0.01841*t5201;
  t5211 = -0.70544*t5207;
  t5215 = t5204 + t5211;
  t5219 = t5215*t5182;
  t5223 = -0.70544*t5201;
  t5224 = -0.01841*t5207;
  t5225 = t5223 + t5224;
  t5226 = t5225*t5186;
  t5255 = -0.005481192614*t5253;
  t5227 = -1.*t5207*t5182;
  t5228 = t5191*t5186;
  t5229 = t5227 + t5228;
  t5260 = -0.07769774964800001*t5253;
  t5281 = -0.0004284921280000001*t5253;
  t5231 = t5191*t5182;
  t5232 = t5207*t5186;
  t5233 = t5231 + t5232;
  t5298 = -0.005498*t5256;
  t5311 = 0.996943*t5256;
  t5291 = 0.077936*t5256;
  t5327 = 0.0004284921280000001*t5253;
  t5285 = -0.996943*t5256;
  t5337 = 0.005481192614*t5253;
  t5257 = -0.077936*t5256;
  t5324 = 0.07769774964800001*t5253;
  t5261 = 0.005498*t5256;
  t5377 = Cos(var1[13]);
  t5378 = -1.*t5377;
  t5379 = 1. + t5378;
  t5381 = Sin(var1[13]);
  t5420 = Cos(var1[3]);
  t5425 = Sin(var1[3]);
  t5418 = -1.*t4128;
  t5419 = 1. + t5418;
  t5424 = -0.135*t5419*t5420;
  t5428 = -0.135*t3556*t4135*t5425;
  t5431 = -1.*t5420*t4135;
  t5433 = -1.*t4128*t3556*t5425;
  t5434 = t5431 + t5433;
  t5437 = t4128*t5420;
  t5438 = -1.*t3556*t4135*t5425;
  t5439 = t5437 + t5438;
  t5458 = t4375*t5439;
  t5459 = t4366*t5425*t3912;
  t5460 = t4364*t5439;
  t5461 = t4275*t5425*t3912;
  t5462 = t5460 + t5461;
  t5464 = t4275*t5439;
  t5465 = -1.*t4364*t5425*t3912;
  t5469 = t5464 + t5465;
  t5473 = t4497*t5434;
  t5474 = t4518*t5462;
  t5476 = t4495*t5434;
  t5477 = t4463*t5462;
  t5478 = t5476 + t5477;
  t5480 = t4463*t5434;
  t5481 = -1.*t4495*t5462;
  t5482 = t5480 + t5481;
  t5487 = t4608*t5478;
  t5488 = t4612*t5482;
  t5489 = -1.*t4606*t5478;
  t5490 = t4586*t5482;
  t5491 = t5489 + t5490;
  t5493 = t4586*t5478;
  t5494 = t4606*t5482;
  t5495 = t5493 + t5494;
  t5500 = t4696*t5491;
  t5501 = t4701*t5495;
  t5502 = t4680*t5491;
  t5503 = t4659*t5495;
  t5504 = t5502 + t5503;
  t5506 = t4659*t5491;
  t5507 = -1.*t4680*t5495;
  t5508 = t5506 + t5507;
  t4774 = 2.1934241414728571e-7*var1[20];
  t4787 = -0.000033783761634830594*t4783;
  t4803 = t4791 + t4799;
  t4807 = -0.021877537552*t4803;
  t4810 = t4808 + t4809;
  t4811 = -0.6934341012630001*t4810;
  t4812 = t4774 + t4787 + t4807 + t4811;
  t5513 = t4749*t5504;
  t5514 = t4762*t5508;
  t4814 = -1.2096424700126054e-9*var1[20];
  t4815 = -0.6934128581485427*t4783;
  t4818 = t4816 + t4817;
  t4819 = -0.021877537552*t4818;
  t4821 = t4808 + t4820;
  t4825 = -0.005534467322*t4821;
  t4829 = t4814 + t4815 + t4819 + t4825;
  t5515 = -1.*t4741*t5504;
  t5516 = t4722*t5508;
  t5517 = t5515 + t5516;
  t4837 = -1.7147089040178687e-8*var1[20];
  t4841 = -0.021744644052735636*t4783;
  t4849 = t4791 + t4845;
  t4853 = -0.005534467322*t4849;
  t4858 = t4816 + t4857;
  t4859 = -0.6934341012630001*t4858;
  t4860 = t4837 + t4841 + t4853 + t4859;
  t5519 = t4722*t5504;
  t5520 = t4741*t5508;
  t5521 = t5519 + t5520;
  t4863 = t4862 + t4845;
  t4866 = t4865 + t4857;
  t4868 = -0.993925573253*t4783;
  t4869 = 1. + t4868;
  t4883 = t4879 + t4820;
  t4891 = -0.999969365345*t4783;
  t4895 = 1. + t4891;
  t4903 = t4865 + t4817;
  t4910 = -0.006104248100000001*t4783;
  t4911 = 1. + t4910;
  t4913 = t4879 + t4809;
  t4915 = t4862 + t4799;
  t4933 = -1.11344*t4932;
  t4941 = 0.02159*t4937;
  t4945 = t4933 + t4941;
  t4953 = -0.02159*t4932;
  t4957 = -1.11344*t4937;
  t4958 = t4953 + t4957;
  t5443 = -0.0233*t5425*t3912;
  t5558 = -1.*t4970;
  t5559 = 1. + t5558;
  t5560 = 0.135*t5420*t5559;
  t5561 = 0.135*t3556*t5425*t4972;
  t5562 = -1.*t3556*t4970*t5425;
  t5563 = -1.*t5420*t4972;
  t5564 = t5562 + t5563;
  t5566 = t5420*t4970;
  t5567 = -1.*t3556*t5425*t4972;
  t5568 = t5566 + t5567;
  t5573 = t5568*t5002;
  t5574 = t5425*t3912*t5006;
  t5575 = t4987*t5568;
  t5576 = -1.*t5425*t3912*t5000;
  t5577 = t5575 + t5576;
  t5579 = t4987*t5425*t3912;
  t5580 = t5568*t5000;
  t5581 = t5579 + t5580;
  t5586 = t5581*t5049;
  t5587 = t5564*t5053;
  t5588 = t5034*t5581;
  t5589 = t5564*t5047;
  t5590 = t5588 + t5589;
  t5592 = t5034*t5564;
  t5593 = -1.*t5581*t5047;
  t5594 = t5592 + t5593;
  t5599 = t5104*t5590;
  t5600 = t5108*t5594;
  t5601 = -1.*t5102*t5590;
  t5602 = t5098*t5594;
  t5603 = t5601 + t5602;
  t5605 = t5098*t5590;
  t5606 = t5102*t5594;
  t5607 = t5605 + t5606;
  t5612 = t5150*t5603;
  t5613 = t5166*t5607;
  t5614 = t5145*t5603;
  t5615 = t5141*t5607;
  t5616 = t5614 + t5615;
  t5618 = t5141*t5603;
  t5619 = -1.*t5145*t5607;
  t5620 = t5618 + t5619;
  t5242 = -2.1934241414728571e-7*var1[12];
  t5254 = 0.000033783761634830594*t5253;
  t5258 = t5255 + t5257;
  t5259 = -0.6934341012630001*t5258;
  t5262 = t5260 + t5261;
  t5266 = -0.021877537552*t5262;
  t5267 = t5242 + t5254 + t5259 + t5266;
  t5625 = t5215*t5616;
  t5626 = t5225*t5620;
  t5273 = -1.2096424700126054e-9*var1[12];
  t5277 = -0.6934128581485427*t5253;
  t5289 = t5281 + t5285;
  t5290 = -0.021877537552*t5289;
  t5292 = t5255 + t5291;
  t5293 = 0.005534467322*t5292;
  t5294 = t5273 + t5277 + t5290 + t5293;
  t5627 = -1.*t5207*t5616;
  t5628 = t5191*t5620;
  t5629 = t5627 + t5628;
  t5296 = -1.7147089040178687e-8*var1[12];
  t5297 = -0.021744644052735636*t5253;
  t5301 = t5260 + t5298;
  t5308 = 0.005534467322*t5301;
  t5314 = t5281 + t5311;
  t5318 = -0.6934341012630001*t5314;
  t5322 = t5296 + t5297 + t5308 + t5318;
  t5631 = t5191*t5616;
  t5632 = t5207*t5620;
  t5633 = t5631 + t5632;
  t5325 = t5324 + t5298;
  t5328 = t5327 + t5311;
  t5330 = -0.993925573253*t5253;
  t5331 = 1. + t5330;
  t5340 = t5337 + t5291;
  t5345 = -0.999969365345*t5253;
  t5346 = 1. + t5345;
  t5348 = t5327 + t5285;
  t5352 = -0.006104248100000001*t5253;
  t5353 = 1. + t5352;
  t5358 = t5337 + t5257;
  t5364 = t5324 + t5261;
  t5380 = -1.11344*t5379;
  t5388 = 0.02159*t5381;
  t5391 = t5380 + t5388;
  t5397 = -0.02159*t5379;
  t5399 = -1.11344*t5381;
  t5400 = t5397 + t5399;
  t5677 = 0.135*t5420*t3556*t4135;
  t5678 = -0.135*t5419*t5425;
  t5679 = t5420*t3556*t4135;
  t5680 = t4128*t5425;
  t5681 = t5679 + t5680;
  t5683 = t4128*t5420*t3556;
  t5684 = -1.*t4135*t5425;
  t5685 = t5683 + t5684;
  t5690 = t4375*t5681;
  t5692 = -1.*t5420*t4366*t3912;
  t5693 = t4364*t5681;
  t5694 = -1.*t4275*t5420*t3912;
  t5695 = t5693 + t5694;
  t5697 = t4275*t5681;
  t5698 = t5420*t4364*t3912;
  t5699 = t5697 + t5698;
  t5703 = t4497*t5685;
  t5704 = t4518*t5695;
  t5706 = t4495*t5685;
  t5707 = t4463*t5695;
  t5708 = t5706 + t5707;
  t5710 = t4463*t5685;
  t5711 = -1.*t4495*t5695;
  t5712 = t5710 + t5711;
  t5717 = t4608*t5708;
  t5718 = t4612*t5712;
  t5719 = -1.*t4606*t5708;
  t5720 = t4586*t5712;
  t5721 = t5719 + t5720;
  t5723 = t4586*t5708;
  t5724 = t4606*t5712;
  t5725 = t5723 + t5724;
  t5730 = t4696*t5721;
  t5731 = t4701*t5725;
  t5732 = t4680*t5721;
  t5733 = t4659*t5725;
  t5734 = t5732 + t5733;
  t5736 = t4659*t5721;
  t5737 = -1.*t4680*t5725;
  t5738 = t5736 + t5737;
  t5743 = t4749*t5734;
  t5744 = t4762*t5738;
  t5745 = -1.*t4741*t5734;
  t5746 = t4722*t5738;
  t5747 = t5745 + t5746;
  t5749 = t4722*t5734;
  t5750 = t4741*t5738;
  t5751 = t5749 + t5750;
  t5687 = 0.0233*t5420*t3912;
  t5788 = 0.135*t5559*t5425;
  t5789 = -0.135*t5420*t3556*t4972;
  t5794 = t5420*t3556*t4970;
  t5795 = -1.*t5425*t4972;
  t5796 = t5794 + t5795;
  t5790 = t4970*t5425;
  t5791 = t5420*t3556*t4972;
  t5792 = t5790 + t5791;
  t5801 = t5792*t5002;
  t5802 = -1.*t5420*t3912*t5006;
  t5803 = t4987*t5792;
  t5804 = t5420*t3912*t5000;
  t5805 = t5803 + t5804;
  t5807 = -1.*t5420*t4987*t3912;
  t5808 = t5792*t5000;
  t5809 = t5807 + t5808;
  t5814 = t5809*t5049;
  t5815 = t5796*t5053;
  t5816 = t5034*t5809;
  t5817 = t5796*t5047;
  t5818 = t5816 + t5817;
  t5820 = t5034*t5796;
  t5821 = -1.*t5809*t5047;
  t5822 = t5820 + t5821;
  t5827 = t5104*t5818;
  t5828 = t5108*t5822;
  t5829 = -1.*t5102*t5818;
  t5830 = t5098*t5822;
  t5831 = t5829 + t5830;
  t5833 = t5098*t5818;
  t5834 = t5102*t5822;
  t5835 = t5833 + t5834;
  t5840 = t5150*t5831;
  t5841 = t5166*t5835;
  t5842 = t5145*t5831;
  t5843 = t5141*t5835;
  t5844 = t5842 + t5843;
  t5846 = t5141*t5831;
  t5847 = -1.*t5145*t5835;
  t5848 = t5846 + t5847;
  t5853 = t5215*t5844;
  t5854 = t5225*t5848;
  t5855 = -1.*t5207*t5844;
  t5856 = t5191*t5848;
  t5857 = t5855 + t5856;
  t5859 = t5191*t5844;
  t5860 = t5207*t5848;
  t5861 = t5859 + t5860;
  p_output1[0]=0.0288377642750394*(10.33*(0.05066*t3556 + 0.02841*t3912) + 1.965608*(t4127 + 0.01793*t3912*t4128 - 0.0001*t3912*t4135) + 1.316608*(-0.0343*t3912*t4128 + t4367 + t4369 + t4378 - 0.135*t4399 - 0.049*t4424) + 5.79228*(t4367 + t4369 + t4378 - 0.17081*t4399 + t4500 + t4519 - 0.04895*t4528 - 0.14946*t4539) + 1.03008*(t4367 + t4369 + t4378 - 0.132168*t4399 + t4500 + t4519 + t4609 + t4613 - 0.255862*t4616 - 0.007761*t4630) + 0.763*(t4367 + t4369 + t4378 - 0.130288*t4399 + t4500 + t4519 + t4609 + t4613 + t4697 + t4702 - 0.000421*t4713 - 0.45406*t4717) + 1.03*(t4367 + t4369 + t4378 - 0.127241*t4399 + t4500 + t4519 + t4609 + t4613 + t4697 + t4702 + t4753 + t4763 - 0.826587*t4766 - 0.004179*t4770) + 0.126*(t4367 + t4369 + t4378 + t4500 + t4519 + t4609 + t4613 + t4697 + t4702 + t4753 + t4763 + t4399*t4812 + t4766*t4829 + t4770*t4860 + 0.01889*(t4399*t4863 + t4766*t4866 + t4770*t4869) - 0.617968*(t4399*t4883 + t4766*t4895 + t4770*t4903) - 0.126739*(t4399*t4911 + t4766*t4913 + t4770*t4915)) + 0.1498*(t4367 + t4369 + t4378 - 0.13064*t4399 + t4500 + t4519 + t4609 + t4613 + t4697 + t4702 + t4753 + t4763 + 0.00589*(t4770*t4930 + t4766*t4937) - 1.11818*(t4766*t4930 - 1.*t4770*t4937) + t4766*t4945 + t4770*t4958) + 1.965608*(t4127 + 0.01793*t3912*t4970 + 0.0001*t3912*t4972) + 1.316608*(-0.0343*t3912*t4970 + t4983 + t5003 + t5007 + 0.135*t5013 - 0.049*t5020) + 5.79228*(t4983 + t5003 + t5007 + 0.17081*t5013 + t5050 + t5054 - 0.04895*t5065 - 0.14946*t5081) + 1.03008*(t4983 + t5003 + t5007 + 0.132168*t5013 + t5050 + t5054 + t5105 + t5112 - 0.255862*t5120 - 0.007761*t5136) + 0.763*(t4983 + t5003 + t5007 + 0.130288*t5013 + t5050 + t5054 + t5105 + t5112 + t5154 + t5170 - 0.000421*t5182 - 0.45406*t5186) + 1.03*(t4983 + t5003 + t5007 + 0.127241*t5013 + t5050 + t5054 + t5105 + t5112 + t5154 + t5170 + t5219 + t5226 - 0.826587*t5229 - 0.004179*t5233) + 0.126*(t4983 + t5003 + t5007 + t5050 + t5054 + t5105 + t5112 + t5154 + t5170 + t5219 + t5226 + t5013*t5267 + t5229*t5294 + t5233*t5322 + 0.01889*(t5013*t5325 + t5229*t5328 + t5233*t5331) - 0.617968*(t5013*t5340 + t5229*t5346 + t5233*t5348) + 0.126739*(t5013*t5353 + t5229*t5358 + t5233*t5364)) + 0.1498*(t4983 + t5003 + t5007 + 0.13064*t5013 + t5050 + t5054 + t5105 + t5112 + t5154 + t5170 + t5219 + t5226 + 0.00589*(t5233*t5377 + t5229*t5381) - 1.11818*(t5229*t5377 - 1.*t5233*t5381) + t5229*t5391 + t5233*t5400));
  p_output1[1]=0.0288377642750394*(10.33*(0.000346*t5420 - 0.02841*t3556*t5425 + 0.05066*t3912*t5425) + 1.965608*(t5424 + t5428 + 0.01793*t5434 - 0.1351*t5439 + t5443) + 1.316608*(t5424 + t5428 - 0.0343*t5434 + t5458 + t5459 - 0.049*t5462 - 0.135*t5469) + 5.79228*(t5424 + t5428 + t5458 + t5459 - 0.17081*t5469 + t5473 + t5474 - 0.04895*t5478 - 0.14946*t5482) + 1.03008*(t5424 + t5428 + t5458 + t5459 - 0.132168*t5469 + t5473 + t5474 + t5487 + t5488 - 0.255862*t5491 - 0.007761*t5495) + 0.763*(t5424 + t5428 + t5458 + t5459 - 0.130288*t5469 + t5473 + t5474 + t5487 + t5488 + t5500 + t5501 - 0.000421*t5504 - 0.45406*t5508) + 1.03*(t5424 + t5428 + t5458 + t5459 - 0.127241*t5469 + t5473 + t5474 + t5487 + t5488 + t5500 + t5501 + t5513 + t5514 - 0.826587*t5517 - 0.004179*t5521) + 0.126*(t5424 + t5428 + t5458 + t5459 + t4812*t5469 + t5473 + t5474 + t5487 + t5488 + t5500 + t5501 + t5513 + t5514 + t4829*t5517 + t4860*t5521 + 0.01889*(t4863*t5469 + t4866*t5517 + t4869*t5521) - 0.617968*(t4883*t5469 + t4895*t5517 + t4903*t5521) - 0.126739*(t4911*t5469 + t4913*t5517 + t4915*t5521)) + 0.1498*(t5424 + t5428 + t5458 + t5459 - 0.13064*t5469 + t5473 + t5474 + t5487 + t5488 + t5500 + t5501 + t5513 + t5514 + t4945*t5517 + t4958*t5521 + 0.00589*(t4937*t5517 + t4930*t5521) - 1.11818*(t4930*t5517 - 1.*t4937*t5521)) + 1.965608*(t5443 + t5560 + t5561 + 0.01793*t5564 + 0.1351*t5568) + 1.316608*(t5560 + t5561 - 0.0343*t5564 + t5573 + t5574 + 0.135*t5577 - 0.049*t5581) + 5.79228*(t5560 + t5561 + t5573 + t5574 + 0.17081*t5577 + t5586 + t5587 - 0.04895*t5590 - 0.14946*t5594) + 1.03008*(t5560 + t5561 + t5573 + t5574 + 0.132168*t5577 + t5586 + t5587 + t5599 + t5600 - 0.255862*t5603 - 0.007761*t5607) + 0.763*(t5560 + t5561 + t5573 + t5574 + 0.130288*t5577 + t5586 + t5587 + t5599 + t5600 + t5612 + t5613 - 0.000421*t5616 - 0.45406*t5620) + 1.03*(t5560 + t5561 + t5573 + t5574 + 0.127241*t5577 + t5586 + t5587 + t5599 + t5600 + t5612 + t5613 + t5625 + t5626 - 0.826587*t5629 - 0.004179*t5633) + 0.126*(t5560 + t5561 + t5573 + t5574 + t5267*t5577 + t5586 + t5587 + t5599 + t5600 + t5612 + t5613 + t5625 + t5626 + t5294*t5629 + t5322*t5633 + 0.01889*(t5325*t5577 + t5328*t5629 + t5331*t5633) - 0.617968*(t5340*t5577 + t5346*t5629 + t5348*t5633) + 0.126739*(t5353*t5577 + t5358*t5629 + t5364*t5633)) + 0.1498*(t5560 + t5561 + t5573 + t5574 + 0.13064*t5577 + t5586 + t5587 + t5599 + t5600 + t5612 + t5613 + t5625 + t5626 + t5391*t5629 + t5400*t5633 + 0.00589*(t5381*t5629 + t5377*t5633) - 1.11818*(t5377*t5629 - 1.*t5381*t5633)));
  p_output1[2]=0.0288377642750394*(10.33*(0.02841*t3556*t5420 - 0.05066*t3912*t5420 + 0.000346*t5425) + 1.965608*(t5677 + t5678 - 0.1351*t5681 + 0.01793*t5685 + t5687) + 1.316608*(t5677 + t5678 - 0.0343*t5685 + t5690 + t5692 - 0.049*t5695 - 0.135*t5699) + 5.79228*(t5677 + t5678 + t5690 + t5692 - 0.17081*t5699 + t5703 + t5704 - 0.04895*t5708 - 0.14946*t5712) + 1.03008*(t5677 + t5678 + t5690 + t5692 - 0.132168*t5699 + t5703 + t5704 + t5717 + t5718 - 0.255862*t5721 - 0.007761*t5725) + 0.763*(t5677 + t5678 + t5690 + t5692 - 0.130288*t5699 + t5703 + t5704 + t5717 + t5718 + t5730 + t5731 - 0.000421*t5734 - 0.45406*t5738) + 1.03*(t5677 + t5678 + t5690 + t5692 - 0.127241*t5699 + t5703 + t5704 + t5717 + t5718 + t5730 + t5731 + t5743 + t5744 - 0.826587*t5747 - 0.004179*t5751) + 0.126*(t5677 + t5678 + t5690 + t5692 + t4812*t5699 + t5703 + t5704 + t5717 + t5718 + t5730 + t5731 + t5743 + t5744 + t4829*t5747 + t4860*t5751 + 0.01889*(t4863*t5699 + t4866*t5747 + t4869*t5751) - 0.617968*(t4883*t5699 + t4895*t5747 + t4903*t5751) - 0.126739*(t4911*t5699 + t4913*t5747 + t4915*t5751)) + 0.1498*(t5677 + t5678 + t5690 + t5692 - 0.13064*t5699 + t5703 + t5704 + t5717 + t5718 + t5730 + t5731 + t5743 + t5744 + t4945*t5747 + t4958*t5751 + 0.00589*(t4937*t5747 + t4930*t5751) - 1.11818*(t4930*t5747 - 1.*t4937*t5751)) + 1.965608*(t5687 + t5788 + t5789 + 0.1351*t5792 + 0.01793*t5796) + 1.316608*(t5788 + t5789 - 0.0343*t5796 + t5801 + t5802 + 0.135*t5805 - 0.049*t5809) + 5.79228*(t5788 + t5789 + t5801 + t5802 + 0.17081*t5805 + t5814 + t5815 - 0.04895*t5818 - 0.14946*t5822) + 1.03008*(t5788 + t5789 + t5801 + t5802 + 0.132168*t5805 + t5814 + t5815 + t5827 + t5828 - 0.255862*t5831 - 0.007761*t5835) + 0.763*(t5788 + t5789 + t5801 + t5802 + 0.130288*t5805 + t5814 + t5815 + t5827 + t5828 + t5840 + t5841 - 0.000421*t5844 - 0.45406*t5848) + 1.03*(t5788 + t5789 + t5801 + t5802 + 0.127241*t5805 + t5814 + t5815 + t5827 + t5828 + t5840 + t5841 + t5853 + t5854 - 0.826587*t5857 - 0.004179*t5861) + 0.126*(t5788 + t5789 + t5801 + t5802 + t5267*t5805 + t5814 + t5815 + t5827 + t5828 + t5840 + t5841 + t5853 + t5854 + t5294*t5857 + t5322*t5861 + 0.01889*(t5325*t5805 + t5328*t5857 + t5331*t5861) - 0.617968*(t5340*t5805 + t5346*t5857 + t5348*t5861) + 0.126739*(t5353*t5805 + t5358*t5857 + t5364*t5861)) + 0.1498*(t5788 + t5789 + t5801 + t5802 + 0.13064*t5805 + t5814 + t5815 + t5827 + t5828 + t5840 + t5841 + t5853 + t5854 + t5391*t5857 + t5400*t5861 + 0.00589*(t5381*t5857 + t5377*t5861) - 1.11818*(t5377*t5857 - 1.*t5381*t5861)));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void p_com_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




