/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:04 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "J_rightToe.hh"
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
  double t405;
  double t867;
  double t2237;
  double t3450;
  double t3674;
  double t4106;
  double t4292;
  double t4382;
  double t4458;
  double t4460;
  double t4480;
  double t4486;
  double t4455;
  double t4456;
  double t4457;
  double t4557;
  double t4572;
  double t4591;
  double t4715;
  double t4716;
  double t4717;
  double t4724;
  double t4709;
  double t4713;
  double t4714;
  double t4779;
  double t4792;
  double t4795;
  double t5026;
  double t5048;
  double t5049;
  double t5051;
  double t4901;
  double t4952;
  double t4980;
  double t5055;
  double t5056;
  double t5057;
  double t5092;
  double t5093;
  double t5094;
  double t5098;
  double t5073;
  double t5077;
  double t5083;
  double t5104;
  double t5105;
  double t5110;
  double t1578;
  double t1929;
  double t2158;
  double t2550;
  double t2668;
  double t4157;
  double t4310;
  double t4347;
  double t4399;
  double t4408;
  double t4413;
  double t4482;
  double t4503;
  double t4522;
  double t4619;
  double t4667;
  double t4697;
  double t5162;
  double t5163;
  double t5173;
  double t5175;
  double t5179;
  double t5186;
  double t4721;
  double t4730;
  double t4737;
  double t4797;
  double t4813;
  double t4831;
  double t5201;
  double t5209;
  double t5214;
  double t5217;
  double t5218;
  double t5219;
  double t5050;
  double t5052;
  double t5053;
  double t5061;
  double t5062;
  double t5066;
  double t5222;
  double t5223;
  double t5226;
  double t5231;
  double t5242;
  double t5261;
  double t5097;
  double t5099;
  double t5100;
  double t5114;
  double t5115;
  double t5116;
  double t5269;
  double t5276;
  double t5277;
  double t5299;
  double t5301;
  double t5303;
  double t5353;
  double t5354;
  double t5355;
  double t5357;
  double t5360;
  double t5362;
  double t5374;
  double t5377;
  double t5379;
  double t5382;
  double t5393;
  double t5400;
  double t5431;
  double t5438;
  double t5445;
  double t5450;
  double t5453;
  double t5457;
  double t5519;
  double t5520;
  double t5521;
  double t5523;
  double t5524;
  double t5525;
  double t5529;
  double t5531;
  double t5532;
  double t5534;
  double t5535;
  double t5536;
  double t5541;
  double t5544;
  double t5547;
  double t5550;
  double t5551;
  double t5553;
  double t5495;
  double t5498;
  double t5507;
  double t5577;
  double t5578;
  double t5579;
  double t5581;
  double t5586;
  double t5587;
  double t5592;
  double t5594;
  double t5595;
  double t5599;
  double t5600;
  double t5602;
  double t5605;
  double t5607;
  double t5608;
  double t5610;
  double t5612;
  double t5613;
  double t5643;
  double t5644;
  double t5645;
  double t5647;
  double t5649;
  double t5650;
  double t5653;
  double t5655;
  double t5657;
  double t5661;
  double t5663;
  double t5667;
  double t5676;
  double t5677;
  double t5678;
  double t5669;
  double t5670;
  double t5671;
  double t5631;
  double t5632;
  double t5634;
  double t5701;
  double t5703;
  double t5704;
  double t5712;
  double t5713;
  double t5718;
  double t5720;
  double t5721;
  double t5724;
  double t5725;
  double t5727;
  double t5731;
  double t5732;
  double t5733;
  double t5743;
  double t5749;
  double t5750;
  double t5738;
  double t5739;
  double t5740;
  double t5691;
  double t5692;
  double t5777;
  double t5780;
  double t5782;
  double t5790;
  double t5796;
  double t5798;
  double t5805;
  double t5808;
  double t5811;
  double t5814;
  double t5816;
  double t5818;
  double t5819;
  double t5820;
  double t5830;
  double t5833;
  double t5835;
  double t5826;
  double t5827;
  double t5828;
  double t5646;
  double t5651;
  double t5659;
  double t5668;
  double t5675;
  double t5679;
  double t5681;
  double t5683;
  double t5684;
  double t5685;
  double t5686;
  double t5687;
  double t5688;
  double t5689;
  double t5865;
  double t5876;
  double t5879;
  double t5883;
  double t5884;
  double t5902;
  double t5912;
  double t5914;
  double t5920;
  double t5922;
  double t5923;
  double t5924;
  double t5938;
  double t5939;
  double t5943;
  double t5928;
  double t5930;
  double t5933;
  double t5955;
  double t5956;
  double t5957;
  double t5959;
  double t5960;
  double t5962;
  double t5963;
  double t5967;
  double t5968;
  double t5971;
  double t5975;
  double t5976;
  double t5979;
  double t5987;
  double t5988;
  double t5989;
  double t5981;
  double t5983;
  double t5984;
  double t6003;
  double t6004;
  double t6005;
  double t6010;
  double t6011;
  double t6013;
  double t6014;
  double t6020;
  double t6021;
  double t6022;
  double t6016;
  double t6017;
  double t6018;
  double t6000;
  double t6001;
  double t6006;
  double t6007;
  double t6008;
  double t6036;
  double t6037;
  double t6042;
  double t6043;
  double t6044;
  double t6039;
  double t6040;
  double t6056;
  double t6057;
  double t6058;
  double t6062;
  double t6063;
  double t6066;
  double t6067;
  double t6079;
  double t6082;
  double t6083;
  double t6070;
  double t6074;
  double t6076;
  double t6097;
  double t6098;
  double t6099;
  double t6107;
  double t6108;
  double t6104;
  double t6105;
  double t6094;
  double t6095;
  double t6100;
  double t6101;
  double t6102;
  double t6122;
  double t6123;
  double t5313;
  double t6145;
  double t6147;
  double t6148;
  double t6160;
  double t6161;
  double t6154;
  double t6156;
  double t6265;
  double t6268;
  double t6272;
  double t6111;
  double t6114;
  double t6237;
  double t6239;
  double t6273;
  double t6275;
  double t6276;
  double t6126;
  double t5314;
  double t5317;
  double t6312;
  double t6320;
  double t6323;
  double t6217;
  double t6227;
  t405 = Sin(var1[14]);
  t867 = Cos(var1[15]);
  t2237 = Sin(var1[15]);
  t3450 = Cos(var1[16]);
  t3674 = -1.*t3450;
  t4106 = 1. + t3674;
  t4292 = Sin(var1[16]);
  t4382 = Cos(var1[14]);
  t4458 = Cos(var1[17]);
  t4460 = -1.*t4458;
  t4480 = 1. + t4460;
  t4486 = Sin(var1[17]);
  t4455 = -1.*t3450*t405*t2237;
  t4456 = -1.*t4382*t4292;
  t4457 = t4455 + t4456;
  t4557 = -1.*t4382*t3450;
  t4572 = t405*t2237*t4292;
  t4591 = t4557 + t4572;
  t4715 = Cos(var1[18]);
  t4716 = -1.*t4715;
  t4717 = 1. + t4716;
  t4724 = Sin(var1[18]);
  t4709 = t4458*t4457;
  t4713 = t4591*t4486;
  t4714 = t4709 + t4713;
  t4779 = t4458*t4591;
  t4792 = -1.*t4457*t4486;
  t4795 = t4779 + t4792;
  t5026 = Cos(var1[19]);
  t5048 = -1.*t5026;
  t5049 = 1. + t5048;
  t5051 = Sin(var1[19]);
  t4901 = t4715*t4714;
  t4952 = t4795*t4724;
  t4980 = t4901 + t4952;
  t5055 = t4715*t4795;
  t5056 = -1.*t4714*t4724;
  t5057 = t5055 + t5056;
  t5092 = Cos(var1[21]);
  t5093 = -1.*t5092;
  t5094 = 1. + t5093;
  t5098 = Sin(var1[21]);
  t5073 = t5026*t4980;
  t5077 = t5057*t5051;
  t5083 = t5073 + t5077;
  t5104 = t5026*t5057;
  t5105 = -1.*t4980*t5051;
  t5110 = t5104 + t5105;
  t1578 = -1.*t867;
  t1929 = 1. + t1578;
  t2158 = -0.135*t1929;
  t2550 = 0.049*t2237;
  t2668 = t2158 + t2550;
  t4157 = -0.049*t4106;
  t4310 = -0.09*t4292;
  t4347 = t4157 + t4310;
  t4399 = -0.09*t4106;
  t4408 = 0.049*t4292;
  t4413 = t4399 + t4408;
  t4482 = -0.049*t4480;
  t4503 = -0.21*t4486;
  t4522 = t4482 + t4503;
  t4619 = -0.21*t4480;
  t4667 = 0.049*t4486;
  t4697 = t4619 + t4667;
  t5162 = t4382*t3450*t2237;
  t5163 = -1.*t405*t4292;
  t5173 = t5162 + t5163;
  t5175 = -1.*t3450*t405;
  t5179 = -1.*t4382*t2237*t4292;
  t5186 = t5175 + t5179;
  t4721 = -0.00159*t4717;
  t4730 = -0.27068*t4724;
  t4737 = t4721 + t4730;
  t4797 = -0.27068*t4717;
  t4813 = 0.00159*t4724;
  t4831 = t4797 + t4813;
  t5201 = t4458*t5173;
  t5209 = t5186*t4486;
  t5214 = t5201 + t5209;
  t5217 = t4458*t5186;
  t5218 = -1.*t5173*t4486;
  t5219 = t5217 + t5218;
  t5050 = 0.01841*t5049;
  t5052 = -0.70544*t5051;
  t5053 = t5050 + t5052;
  t5061 = -0.70544*t5049;
  t5062 = -0.01841*t5051;
  t5066 = t5061 + t5062;
  t5222 = t4715*t5214;
  t5223 = t5219*t4724;
  t5226 = t5222 + t5223;
  t5231 = t4715*t5219;
  t5242 = -1.*t5214*t4724;
  t5261 = t5231 + t5242;
  t5097 = -0.02159*t5094;
  t5099 = -1.11344*t5098;
  t5100 = t5097 + t5099;
  t5114 = -1.11344*t5094;
  t5115 = 0.02159*t5098;
  t5116 = t5114 + t5115;
  t5269 = t5026*t5226;
  t5276 = t5261*t5051;
  t5277 = t5269 + t5276;
  t5299 = t5026*t5261;
  t5301 = -1.*t5226*t5051;
  t5303 = t5299 + t5301;
  t5353 = -1.*t3450*t4458*t2237;
  t5354 = t2237*t4292*t4486;
  t5355 = t5353 + t5354;
  t5357 = t4458*t2237*t4292;
  t5360 = t3450*t2237*t4486;
  t5362 = t5357 + t5360;
  t5374 = t4715*t5355;
  t5377 = t5362*t4724;
  t5379 = t5374 + t5377;
  t5382 = t4715*t5362;
  t5393 = -1.*t5355*t4724;
  t5400 = t5382 + t5393;
  t5431 = t5026*t5379;
  t5438 = t5400*t5051;
  t5445 = t5431 + t5438;
  t5450 = t5026*t5400;
  t5453 = -1.*t5379*t5051;
  t5457 = t5450 + t5453;
  t5519 = t4382*t867*t3450*t4458;
  t5520 = -1.*t4382*t867*t4292*t4486;
  t5521 = t5519 + t5520;
  t5523 = -1.*t4382*t867*t4458*t4292;
  t5524 = -1.*t4382*t867*t3450*t4486;
  t5525 = t5523 + t5524;
  t5529 = t4715*t5521;
  t5531 = t5525*t4724;
  t5532 = t5529 + t5531;
  t5534 = t4715*t5525;
  t5535 = -1.*t5521*t4724;
  t5536 = t5534 + t5535;
  t5541 = t5026*t5532;
  t5544 = t5536*t5051;
  t5547 = t5541 + t5544;
  t5550 = t5026*t5536;
  t5551 = -1.*t5532*t5051;
  t5553 = t5550 + t5551;
  t5495 = 0.049*t867;
  t5498 = -0.135*t2237;
  t5507 = t5495 + t5498;
  t5577 = t867*t3450*t4458*t405;
  t5578 = -1.*t867*t405*t4292*t4486;
  t5579 = t5577 + t5578;
  t5581 = -1.*t867*t4458*t405*t4292;
  t5586 = -1.*t867*t3450*t405*t4486;
  t5587 = t5581 + t5586;
  t5592 = t4715*t5579;
  t5594 = t5587*t4724;
  t5595 = t5592 + t5594;
  t5599 = t4715*t5587;
  t5600 = -1.*t5579*t4724;
  t5602 = t5599 + t5600;
  t5605 = t5026*t5595;
  t5607 = t5602*t5051;
  t5608 = t5605 + t5607;
  t5610 = t5026*t5602;
  t5612 = -1.*t5595*t5051;
  t5613 = t5610 + t5612;
  t5643 = -1.*t867*t4458*t4292;
  t5644 = -1.*t867*t3450*t4486;
  t5645 = t5643 + t5644;
  t5647 = -1.*t867*t3450*t4458;
  t5649 = t867*t4292*t4486;
  t5650 = t5647 + t5649;
  t5653 = t4715*t5645;
  t5655 = t5650*t4724;
  t5657 = t5653 + t5655;
  t5661 = t4715*t5650;
  t5663 = -1.*t5645*t4724;
  t5667 = t5661 + t5663;
  t5676 = t5026*t5667;
  t5677 = -1.*t5657*t5051;
  t5678 = t5676 + t5677;
  t5669 = t5026*t5657;
  t5670 = t5667*t5051;
  t5671 = t5669 + t5670;
  t5631 = -0.09*t3450;
  t5632 = -0.049*t4292;
  t5634 = t5631 + t5632;
  t5701 = -1.*t4382*t3450*t2237;
  t5703 = t405*t4292;
  t5704 = t5701 + t5703;
  t5712 = t5704*t4486;
  t5713 = t5217 + t5712;
  t5718 = t4458*t5704;
  t5720 = -1.*t5186*t4486;
  t5721 = t5718 + t5720;
  t5724 = t4715*t5713;
  t5725 = t5721*t4724;
  t5727 = t5724 + t5725;
  t5731 = t4715*t5721;
  t5732 = -1.*t5713*t4724;
  t5733 = t5731 + t5732;
  t5743 = t5026*t5733;
  t5749 = -1.*t5727*t5051;
  t5750 = t5743 + t5749;
  t5738 = t5026*t5727;
  t5739 = t5733*t5051;
  t5740 = t5738 + t5739;
  t5691 = 0.049*t3450;
  t5692 = t5691 + t4310;
  t5777 = t4382*t3450;
  t5780 = -1.*t405*t2237*t4292;
  t5782 = t5777 + t5780;
  t5790 = t4458*t5782;
  t5796 = t4457*t4486;
  t5798 = t5790 + t5796;
  t5805 = -1.*t5782*t4486;
  t5808 = t4709 + t5805;
  t5811 = t4715*t5798;
  t5814 = t5808*t4724;
  t5816 = t5811 + t5814;
  t5818 = t4715*t5808;
  t5819 = -1.*t5798*t4724;
  t5820 = t5818 + t5819;
  t5830 = t5026*t5820;
  t5833 = -1.*t5816*t5051;
  t5835 = t5830 + t5833;
  t5826 = t5026*t5816;
  t5827 = t5820*t5051;
  t5828 = t5826 + t5827;
  t5646 = t5645*t4737;
  t5651 = t5650*t4831;
  t5659 = t5657*t5053;
  t5668 = t5667*t5066;
  t5675 = t5671*t5100;
  t5679 = t5678*t5116;
  t5681 = t5092*t5678;
  t5683 = -1.*t5671*t5098;
  t5684 = t5681 + t5683;
  t5685 = -1.11344*t5684;
  t5686 = t5092*t5671;
  t5687 = t5678*t5098;
  t5688 = t5686 + t5687;
  t5689 = -0.02159*t5688;
  t5865 = 0.049*t4458;
  t5876 = t5865 + t4503;
  t5879 = -0.21*t4458;
  t5883 = -0.049*t4486;
  t5884 = t5879 + t5883;
  t5902 = -1.*t4458*t5173;
  t5912 = t5902 + t5720;
  t5914 = t5912*t4724;
  t5920 = t5231 + t5914;
  t5922 = t4715*t5912;
  t5923 = -1.*t5219*t4724;
  t5924 = t5922 + t5923;
  t5938 = t5026*t5924;
  t5939 = -1.*t5920*t5051;
  t5943 = t5938 + t5939;
  t5928 = t5026*t5920;
  t5930 = t5924*t5051;
  t5933 = t5928 + t5930;
  t5955 = t3450*t405*t2237;
  t5956 = t4382*t4292;
  t5957 = t5955 + t5956;
  t5959 = -1.*t5957*t4486;
  t5960 = t5790 + t5959;
  t5962 = -1.*t4458*t5957;
  t5963 = t5962 + t5805;
  t5967 = t4715*t5960;
  t5968 = t5963*t4724;
  t5971 = t5967 + t5968;
  t5975 = t4715*t5963;
  t5976 = -1.*t5960*t4724;
  t5979 = t5975 + t5976;
  t5987 = t5026*t5979;
  t5988 = -1.*t5971*t5051;
  t5989 = t5987 + t5988;
  t5981 = t5026*t5971;
  t5983 = t5979*t5051;
  t5984 = t5981 + t5983;
  t6003 = t867*t3450*t4458;
  t6004 = -1.*t867*t4292*t4486;
  t6005 = t6003 + t6004;
  t6010 = -1.*t6005*t4724;
  t6011 = t5653 + t6010;
  t6013 = -1.*t4715*t6005;
  t6014 = t6013 + t5663;
  t6020 = t5026*t6014;
  t6021 = -1.*t6011*t5051;
  t6022 = t6020 + t6021;
  t6016 = t5026*t6011;
  t6017 = t6014*t5051;
  t6018 = t6016 + t6017;
  t6000 = 0.00159*t4715;
  t6001 = t6000 + t4730;
  t6006 = -0.27068*t4715;
  t6007 = -0.00159*t4724;
  t6008 = t6006 + t6007;
  t6036 = -1.*t4715*t5214;
  t6037 = t6036 + t5923;
  t6042 = t5026*t6037;
  t6043 = -1.*t5261*t5051;
  t6044 = t6042 + t6043;
  t6039 = t6037*t5051;
  t6040 = t5299 + t6039;
  t6056 = t4458*t5957;
  t6057 = t5782*t4486;
  t6058 = t6056 + t6057;
  t6062 = -1.*t6058*t4724;
  t6063 = t5967 + t6062;
  t6066 = -1.*t4715*t6058;
  t6067 = t6066 + t5976;
  t6079 = t5026*t6067;
  t6082 = -1.*t6063*t5051;
  t6083 = t6079 + t6082;
  t6070 = t5026*t6063;
  t6074 = t6067*t5051;
  t6076 = t6070 + t6074;
  t6097 = t4715*t6005;
  t6098 = t5645*t4724;
  t6099 = t6097 + t6098;
  t6107 = -1.*t5026*t6099;
  t6108 = t6107 + t6021;
  t6104 = -1.*t6099*t5051;
  t6105 = t6016 + t6104;
  t6094 = -0.01841*t5026;
  t6095 = t6094 + t5052;
  t6100 = -0.70544*t5026;
  t6101 = 0.01841*t5051;
  t6102 = t6100 + t6101;
  t6122 = -1.*t5026*t5226;
  t6123 = t6122 + t6043;
  t5313 = t5092*t5303;
  t6145 = t4715*t6058;
  t6147 = t5960*t4724;
  t6148 = t6145 + t6147;
  t6160 = -1.*t5026*t6148;
  t6161 = t6160 + t6082;
  t6154 = -1.*t6148*t5051;
  t6156 = t6070 + t6154;
  t6265 = t5026*t6099;
  t6268 = t6011*t5051;
  t6272 = t6265 + t6268;
  t6111 = -1.*t6105*t5098;
  t6114 = t5092*t6105;
  t6237 = 0.02159*t5092;
  t6239 = t6237 + t5099;
  t6273 = -1.11344*t5092;
  t6275 = -0.02159*t5098;
  t6276 = t6273 + t6275;
  t6126 = -1.*t5303*t5098;
  t5314 = -1.*t5277*t5098;
  t5317 = t5313 + t5314;
  t6312 = t5026*t6148;
  t6320 = t6063*t5051;
  t6323 = t6312 + t6320;
  t6217 = -1.*t6156*t5098;
  t6227 = t5092*t6156;
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
  p_output1[43]=-0.135*t405 - 1.*t2668*t405 - 1.*t2237*t405*t4347 - 1.*t4382*t4413 + t4457*t4522 + t4591*t4697 + t4714*t4737 + t4795*t4831 + t4980*t5053 + t5057*t5066 + t5083*t5100 - 1.11344*(-1.*t5083*t5098 + t5092*t5110) - 0.02159*(t5083*t5092 + t5098*t5110) + t5110*t5116 + 0.1305*t405*t867;
  p_output1[44]=0.135*t4382 + t2668*t4382 + t2237*t4347*t4382 - 1.*t405*t4413 + t4522*t5173 + t4697*t5186 + t4737*t5214 + t4831*t5219 + t5053*t5226 + t5066*t5261 + t5100*t5277 + t5116*t5303 - 0.02159*(t5092*t5277 + t5098*t5303) - 1.11344*t5317 - 0.1305*t4382*t867;
  p_output1[45]=-0.049*t2237 - 1.*t2237*t4347 - 1.*t2237*t3450*t4522 + t2237*t4292*t4697 + t4737*t5355 + t4831*t5362 + t5053*t5379 + t5066*t5400 + t5100*t5445 + t5116*t5457 - 1.11344*(-1.*t5098*t5445 + t5092*t5457) - 0.02159*(t5092*t5445 + t5098*t5457) - 0.0045*t867;
  p_output1[46]=0.1305*t2237*t4382 + t4382*t5507 + t4737*t5521 + t4831*t5525 + t5053*t5532 + t5066*t5536 + t5100*t5547 + t5116*t5553 - 1.11344*(-1.*t5098*t5547 + t5092*t5553) - 0.02159*(t5092*t5547 + t5098*t5553) + t4347*t4382*t867 + t3450*t4382*t4522*t867 - 1.*t4292*t4382*t4697*t867;
  p_output1[47]=0.1305*t2237*t405 + t405*t5507 + t4737*t5579 + t4831*t5587 + t5053*t5595 + t5066*t5602 + t5100*t5608 + t5116*t5613 - 1.11344*(-1.*t5098*t5608 + t5092*t5613) - 0.02159*(t5092*t5608 + t5098*t5613) + t405*t4347*t867 + t3450*t405*t4522*t867 - 1.*t405*t4292*t4697*t867;
  p_output1[48]=t5646 + t5651 + t5659 + t5668 + t5675 + t5679 + t5685 + t5689 - 1.*t4292*t4522*t867 - 1.*t3450*t4697*t867 + t5634*t867;
  p_output1[49]=t4522*t5186 + t2237*t4382*t5634 - 1.*t405*t5692 + t4697*t5704 + t4737*t5713 + t4831*t5721 + t5053*t5727 + t5066*t5733 + t5100*t5740 + t5116*t5750 - 1.11344*(-1.*t5098*t5740 + t5092*t5750) - 0.02159*(t5092*t5740 + t5098*t5750);
  p_output1[50]=t4457*t4697 + t2237*t405*t5634 + t4382*t5692 + t4522*t5782 + t4737*t5798 + t4831*t5808 + t5053*t5816 + t5066*t5820 + t5100*t5828 + t5116*t5835 - 1.11344*(-1.*t5098*t5828 + t5092*t5835) - 0.02159*(t5092*t5828 + t5098*t5835);
  p_output1[51]=t5646 + t5651 + t5659 + t5668 + t5675 + t5679 + t5685 + t5689 - 1.*t4292*t5876*t867 + t3450*t5884*t867;
  p_output1[52]=t4737*t5219 + t5186*t5876 + t5173*t5884 + t4831*t5912 + t5053*t5920 + t5066*t5924 + t5100*t5933 + t5116*t5943 - 1.11344*(-1.*t5098*t5933 + t5092*t5943) - 0.02159*(t5092*t5933 + t5098*t5943);
  p_output1[53]=t5782*t5876 + t5884*t5957 + t4737*t5960 + t4831*t5963 + t5053*t5971 + t5066*t5979 + t5100*t5984 + t5116*t5989 - 1.11344*(-1.*t5098*t5984 + t5092*t5989) - 0.02159*(t5092*t5984 + t5098*t5989);
  p_output1[54]=t5645*t6001 + t6005*t6008 + t5053*t6011 + t5066*t6014 + t5100*t6018 + t5116*t6022 - 1.11344*(-1.*t5098*t6018 + t5092*t6022) - 0.02159*(t5092*t6018 + t5098*t6022);
  p_output1[55]=t5053*t5261 + t5219*t6001 + t5214*t6008 + t5066*t6037 + t5100*t6040 + t5116*t6044 - 1.11344*(-1.*t5098*t6040 + t5092*t6044) - 0.02159*(t5092*t6040 + t5098*t6044);
  p_output1[56]=t5960*t6001 + t6008*t6058 + t5053*t6063 + t5066*t6067 + t5100*t6076 + t5116*t6083 - 1.11344*(-1.*t5098*t6076 + t5092*t6083) - 0.02159*(t5092*t6076 + t5098*t6083);
  p_output1[57]=t6011*t6095 + t6099*t6102 + t5100*t6105 + t5116*t6108 - 1.11344*(t5092*t6108 + t6111) - 0.02159*(t5098*t6108 + t6114);
  p_output1[58]=t5100*t5303 + t5261*t6095 + t5226*t6102 + t5116*t6123 - 0.02159*(t5313 + t5098*t6123) - 1.11344*(t5092*t6123 + t6126);
  p_output1[59]=t6063*t6095 + t6102*t6148 + t5100*t6156 + t5116*t6161 - 1.11344*(t5092*t6161 + t6217) - 0.02159*(t5098*t6161 + t6227);
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=t6105*t6239 - 1.11344*(t6111 - 1.*t5092*t6272) - 0.02159*(t6114 - 1.*t5098*t6272) + t6272*t6276;
  p_output1[64]=-0.02159*t5317 - 1.11344*(-1.*t5092*t5277 + t6126) + t5303*t6239 + t5277*t6276;
  p_output1[65]=t6156*t6239 + t6276*t6323 - 1.11344*(t6217 - 1.*t5092*t6323) - 0.02159*(t6227 - 1.*t5098*t6323);
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

void J_rightToe_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




