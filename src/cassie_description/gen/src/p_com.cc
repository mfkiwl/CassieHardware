/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:05 GMT-08:00
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
  double t127;
  double t640;
  double t149;
  double t251;
  double t313;
  double t1193;
  double t2029;
  double t1200;
  double t1819;
  double t1943;
  double t2011;
  double t2052;
  double t2076;
  double t2132;
  double t2748;
  double t2832;
  double t2846;
  double t2896;
  double t2859;
  double t2905;
  double t2953;
  double t3029;
  double t3068;
  double t3119;
  double t3192;
  double t3196;
  double t3834;
  double t3917;
  double t3969;
  double t3241;
  double t3267;
  double t3404;
  double t4271;
  double t4367;
  double t4381;
  double t4417;
  double t4389;
  double t4418;
  double t4434;
  double t4553;
  double t4701;
  double t4705;
  double t4722;
  double t4750;
  double t4791;
  double t4806;
  double t4835;
  double t4927;
  double t4986;
  double t5054;
  double t5124;
  double t5127;
  double t5135;
  double t5140;
  double t5138;
  double t5145;
  double t5149;
  double t5152;
  double t5153;
  double t5154;
  double t5158;
  double t5159;
  double t5160;
  double t5161;
  double t5174;
  double t5196;
  double t5216;
  double t5221;
  double t5236;
  double t5264;
  double t5265;
  double t5308;
  double t5309;
  double t5324;
  double t5323;
  double t5452;
  double t5380;
  double t5470;
  double t5493;
  double t5358;
  double t5451;
  double t5533;
  double t5305;
  double t5554;
  double t5596;
  double t5601;
  double t5603;
  double t5614;
  double t838;
  double t1065;
  double t1076;
  double t5698;
  double t5742;
  double t5705;
  double t5723;
  double t5728;
  double t5735;
  double t5752;
  double t5757;
  double t5758;
  double t5768;
  double t5769;
  double t5770;
  double t5774;
  double t5773;
  double t5775;
  double t5784;
  double t5787;
  double t5803;
  double t5807;
  double t5810;
  double t5817;
  double t5823;
  double t5829;
  double t5839;
  double t5859;
  double t5860;
  double t5877;
  double t5890;
  double t5843;
  double t5846;
  double t5847;
  double t5889;
  double t5891;
  double t5892;
  double t5894;
  double t5896;
  double t5900;
  double t5913;
  double t5921;
  double t5927;
  double t5929;
  double t5937;
  double t5952;
  double t5953;
  double t5954;
  double t5961;
  double t5945;
  double t5946;
  double t5947;
  double t6023;
  double t6024;
  double t6025;
  double t6028;
  double t5958;
  double t5964;
  double t5972;
  double t5980;
  double t5985;
  double t5990;
  double t5991;
  double t5992;
  double t6027;
  double t5993;
  double t5994;
  double t5995;
  double t6032;
  double t6047;
  double t5997;
  double t5998;
  double t5999;
  double t6068;
  double t6085;
  double t6051;
  double t6093;
  double t6048;
  double t6115;
  double t6029;
  double t6090;
  double t6033;
  double t6221;
  double t6224;
  double t6228;
  double t6233;
  double t6326;
  double t6330;
  double t6332;
  double t6340;
  double t6344;
  double t6352;
  double t6354;
  double t6355;
  double t6356;
  double t6368;
  double t6370;
  double t6372;
  double t6374;
  double t6375;
  double t6378;
  double t6381;
  double t6382;
  double t6384;
  double t6388;
  double t6390;
  double t6399;
  double t6400;
  double t6411;
  double t6414;
  double t6416;
  double t6403;
  double t6405;
  double t6406;
  double t6424;
  double t6426;
  double t6429;
  double t6431;
  double t6435;
  double t6443;
  double t6444;
  double t6447;
  double t6458;
  double t6460;
  double t5274;
  double t5282;
  double t6461;
  double t6462;
  double t6464;
  double t6468;
  double t6470;
  double t6472;
  double t5311;
  double t5334;
  double t5346;
  double t5356;
  double t5369;
  double t5370;
  double t5381;
  double t5395;
  double t5403;
  double t5420;
  double t5430;
  double t5459;
  double t5475;
  double t5488;
  double t5489;
  double t5494;
  double t5510;
  double t5513;
  double t5514;
  double t5516;
  double t5522;
  double t5528;
  double t5537;
  double t5548;
  double t5555;
  double t5556;
  double t5559;
  double t5567;
  double t5568;
  double t5570;
  double t5572;
  double t5609;
  double t5615;
  double t5616;
  double t5620;
  double t5621;
  double t5622;
  double t6563;
  double t6564;
  double t6565;
  double t6566;
  double t6568;
  double t6580;
  double t6581;
  double t6586;
  double t6587;
  double t6597;
  double t6600;
  double t6601;
  double t6604;
  double t6607;
  double t6610;
  double t6616;
  double t6622;
  double t6625;
  double t6630;
  double t6632;
  double t6643;
  double t6644;
  double t6647;
  double t6651;
  double t6653;
  double t6679;
  double t6682;
  double t6683;
  double t6695;
  double t6704;
  double t6705;
  double t6707;
  double t6709;
  double t6713;
  double t6722;
  double t6723;
  double t6019;
  double t6026;
  double t6030;
  double t6031;
  double t6034;
  double t6035;
  double t6038;
  double t6739;
  double t6740;
  double t6045;
  double t6046;
  double t6049;
  double t6050;
  double t6052;
  double t6053;
  double t6054;
  double t6743;
  double t6746;
  double t6747;
  double t6059;
  double t6064;
  double t6078;
  double t6084;
  double t6086;
  double t6087;
  double t6088;
  double t6749;
  double t6750;
  double t6751;
  double t6091;
  double t6096;
  double t6106;
  double t6109;
  double t6116;
  double t6118;
  double t6119;
  double t6121;
  double t6130;
  double t6132;
  double t6135;
  double t6143;
  double t6231;
  double t6235;
  double t6263;
  double t6280;
  double t6281;
  double t6284;
  double t6799;
  double t6801;
  double t6806;
  double t6807;
  double t6808;
  double t6809;
  double t6810;
  double t6812;
  double t6813;
  double t6814;
  double t6819;
  double t6820;
  double t6825;
  double t6826;
  double t6827;
  double t6821;
  double t6822;
  double t6823;
  double t6832;
  double t6833;
  double t6834;
  double t6835;
  double t6836;
  double t6838;
  double t6839;
  double t6840;
  double t6845;
  double t6846;
  double t6847;
  double t6848;
  double t6849;
  double t6851;
  double t6852;
  double t6853;
  double t6896;
  double t6898;
  double t6903;
  double t6904;
  double t6905;
  double t6906;
  double t6907;
  double t6909;
  double t6910;
  double t6911;
  double t6916;
  double t6917;
  double t6918;
  double t6919;
  double t6920;
  double t6922;
  double t6923;
  double t6924;
  double t6929;
  double t6930;
  double t6931;
  double t6932;
  double t6933;
  double t6935;
  double t6936;
  double t6937;
  double t6947;
  double t6948;
  double t6949;
  double t6950;
  double t6951;
  double t6953;
  double t6954;
  double t6955;
  t127 = Cos(var1[15]);
  t640 = Cos(var1[7]);
  t149 = -1.*t127;
  t251 = 1. + t149;
  t313 = -0.049*t251;
  t1193 = Cos(var1[16]);
  t2029 = Sin(var1[16]);
  t1200 = Sin(var1[15]);
  t1819 = -1.*t1193;
  t1943 = 1. + t1819;
  t2011 = -0.049*t1943;
  t2052 = -0.09*t2029;
  t2076 = t2011 + t2052;
  t2132 = t127*t2076;
  t2748 = Cos(var1[17]);
  t2832 = -1.*t2748;
  t2846 = 1. + t2832;
  t2896 = Sin(var1[17]);
  t2859 = -0.049*t2846;
  t2905 = -0.21*t2896;
  t2953 = t2859 + t2905;
  t3029 = t127*t1193*t2953;
  t3068 = -0.21*t2846;
  t3119 = 0.049*t2896;
  t3192 = t3068 + t3119;
  t3196 = -1.*t127*t2029*t3192;
  t3834 = t127*t1193*t2748;
  t3917 = -1.*t127*t2029*t2896;
  t3969 = t3834 + t3917;
  t3241 = -1.*t127*t2748*t2029;
  t3267 = -1.*t127*t1193*t2896;
  t3404 = t3241 + t3267;
  t4271 = Cos(var1[18]);
  t4367 = -1.*t4271;
  t4381 = 1. + t4367;
  t4417 = Sin(var1[18]);
  t4389 = -0.00159*t4381;
  t4418 = -0.27068*t4417;
  t4434 = t4389 + t4418;
  t4553 = t3969*t4434;
  t4701 = -0.27068*t4381;
  t4705 = 0.00159*t4417;
  t4722 = t4701 + t4705;
  t4750 = t3404*t4722;
  t4791 = t4271*t3969;
  t4806 = t3404*t4417;
  t4835 = t4791 + t4806;
  t4927 = t4271*t3404;
  t4986 = -1.*t3969*t4417;
  t5054 = t4927 + t4986;
  t5124 = Cos(var1[19]);
  t5127 = -1.*t5124;
  t5135 = 1. + t5127;
  t5140 = Sin(var1[19]);
  t5138 = 0.01841*t5135;
  t5145 = -0.70544*t5140;
  t5149 = t5138 + t5145;
  t5152 = t4835*t5149;
  t5153 = -0.70544*t5135;
  t5154 = -0.01841*t5140;
  t5158 = t5153 + t5154;
  t5159 = t5054*t5158;
  t5160 = t5124*t5054;
  t5161 = -1.*t4835*t5140;
  t5174 = t5160 + t5161;
  t5196 = t5124*t4835;
  t5216 = t5054*t5140;
  t5221 = t5196 + t5216;
  t5236 = Cos(var1[20]);
  t5264 = -1.*t5236;
  t5265 = 1. + t5264;
  t5308 = Sin(var1[20]);
  t5309 = -0.996943*t5308;
  t5324 = -0.077936*t5308;
  t5323 = -0.005481192614*t5265;
  t5452 = -0.005498*t5308;
  t5380 = 0.005481192614*t5265;
  t5470 = 0.077936*t5308;
  t5493 = 0.07769774964800001*t5265;
  t5358 = -0.0004284921280000001*t5265;
  t5451 = -0.07769774964800001*t5265;
  t5533 = 0.005498*t5308;
  t5305 = 0.0004284921280000001*t5265;
  t5554 = 0.996943*t5308;
  t5596 = Cos(var1[21]);
  t5601 = -1.*t5596;
  t5603 = 1. + t5601;
  t5614 = Sin(var1[21]);
  t838 = -1.*t640;
  t1065 = 1. + t838;
  t1076 = -0.049*t1065;
  t5698 = Cos(var1[8]);
  t5742 = Sin(var1[8]);
  t5705 = Sin(var1[7]);
  t5723 = -1.*t5698;
  t5728 = 1. + t5723;
  t5735 = -0.049*t5728;
  t5752 = -0.09*t5742;
  t5757 = t5735 + t5752;
  t5758 = t640*t5757;
  t5768 = Cos(var1[9]);
  t5769 = -1.*t5768;
  t5770 = 1. + t5769;
  t5774 = Sin(var1[9]);
  t5773 = -0.049*t5770;
  t5775 = -0.21*t5774;
  t5784 = t5773 + t5775;
  t5787 = t640*t5698*t5784;
  t5803 = -0.21*t5770;
  t5807 = 0.049*t5774;
  t5810 = t5803 + t5807;
  t5817 = -1.*t640*t5810*t5742;
  t5823 = -1.*t640*t5698*t5774;
  t5829 = -1.*t5768*t640*t5742;
  t5839 = t5823 + t5829;
  t5859 = Cos(var1[10]);
  t5860 = -1.*t5859;
  t5877 = 1. + t5860;
  t5890 = Sin(var1[10]);
  t5843 = t5768*t640*t5698;
  t5846 = -1.*t640*t5774*t5742;
  t5847 = t5843 + t5846;
  t5889 = -0.27068*t5877;
  t5891 = 0.00159*t5890;
  t5892 = t5889 + t5891;
  t5894 = t5892*t5839;
  t5896 = -0.00159*t5877;
  t5900 = -0.27068*t5890;
  t5913 = t5896 + t5900;
  t5921 = t5913*t5847;
  t5927 = t5890*t5839;
  t5929 = t5859*t5847;
  t5937 = t5927 + t5929;
  t5952 = Cos(var1[11]);
  t5953 = -1.*t5952;
  t5954 = 1. + t5953;
  t5961 = Sin(var1[11]);
  t5945 = t5859*t5839;
  t5946 = -1.*t5890*t5847;
  t5947 = t5945 + t5946;
  t6023 = Cos(var1[12]);
  t6024 = -1.*t6023;
  t6025 = 1. + t6024;
  t6028 = Sin(var1[12]);
  t5958 = 0.01841*t5954;
  t5964 = -0.70544*t5961;
  t5972 = t5958 + t5964;
  t5980 = t5972*t5937;
  t5985 = -0.70544*t5954;
  t5990 = -0.01841*t5961;
  t5991 = t5985 + t5990;
  t5992 = t5991*t5947;
  t6027 = -0.005481192614*t6025;
  t5993 = -1.*t5961*t5937;
  t5994 = t5952*t5947;
  t5995 = t5993 + t5994;
  t6032 = -0.07769774964800001*t6025;
  t6047 = -0.0004284921280000001*t6025;
  t5997 = t5952*t5937;
  t5998 = t5961*t5947;
  t5999 = t5997 + t5998;
  t6068 = -0.005498*t6028;
  t6085 = 0.996943*t6028;
  t6051 = 0.077936*t6028;
  t6093 = 0.0004284921280000001*t6025;
  t6048 = -0.996943*t6028;
  t6115 = 0.005481192614*t6025;
  t6029 = -0.077936*t6028;
  t6090 = 0.07769774964800001*t6025;
  t6033 = 0.005498*t6028;
  t6221 = Cos(var1[13]);
  t6224 = -1.*t6221;
  t6228 = 1. + t6224;
  t6233 = Sin(var1[13]);
  t6326 = Cos(var1[14]);
  t6330 = -1.*t6326;
  t6332 = 1. + t6330;
  t6340 = -0.135*t6332;
  t6344 = Sin(var1[14]);
  t6352 = -0.135*t251;
  t6354 = 0.049*t1200;
  t6355 = t6352 + t6354;
  t6356 = t6326*t6355;
  t6368 = t6326*t1200*t2076;
  t6370 = -0.09*t1943;
  t6372 = 0.049*t2029;
  t6374 = t6370 + t6372;
  t6375 = -1.*t6344*t6374;
  t6378 = t6326*t1193*t1200;
  t6381 = -1.*t6344*t2029;
  t6382 = t6378 + t6381;
  t6384 = -1.*t1193*t6344;
  t6388 = -1.*t6326*t1200*t2029;
  t6390 = t6384 + t6388;
  t6399 = t6382*t2953;
  t6400 = t6390*t3192;
  t6411 = t2748*t6382;
  t6414 = t6390*t2896;
  t6416 = t6411 + t6414;
  t6403 = t2748*t6390;
  t6405 = -1.*t6382*t2896;
  t6406 = t6403 + t6405;
  t6424 = t6416*t4434;
  t6426 = t6406*t4722;
  t6429 = t4271*t6416;
  t6431 = t6406*t4417;
  t6435 = t6429 + t6431;
  t6443 = t4271*t6406;
  t6444 = -1.*t6416*t4417;
  t6447 = t6443 + t6444;
  t6458 = t6435*t5149;
  t6460 = t6447*t5158;
  t5274 = -0.999969365345*t5265;
  t5282 = 1. + t5274;
  t6461 = t5124*t6447;
  t6462 = -1.*t6435*t5140;
  t6464 = t6461 + t6462;
  t6468 = t5124*t6435;
  t6470 = t6447*t5140;
  t6472 = t6468 + t6470;
  t5311 = t5305 + t5309;
  t5334 = t5323 + t5324;
  t5346 = -1.2096424700126054e-9*var1[20];
  t5356 = -0.6934128581485427*t5265;
  t5369 = t5358 + t5309;
  t5370 = -0.021877537552*t5369;
  t5381 = t5380 + t5324;
  t5395 = -0.005534467322*t5381;
  t5403 = t5346 + t5356 + t5370 + t5395;
  t5420 = -0.006104248100000001*t5265;
  t5430 = 1. + t5420;
  t5459 = t5451 + t5452;
  t5475 = t5323 + t5470;
  t5488 = 2.1934241414728571e-7*var1[20];
  t5489 = -0.000033783761634830594*t5265;
  t5494 = t5493 + t5452;
  t5510 = -0.021877537552*t5494;
  t5513 = t5380 + t5470;
  t5514 = -0.6934341012630001*t5513;
  t5516 = t5488 + t5489 + t5510 + t5514;
  t5522 = -1.7147089040178687e-8*var1[20];
  t5528 = -0.021744644052735636*t5265;
  t5537 = t5493 + t5533;
  t5548 = -0.005534467322*t5537;
  t5555 = t5358 + t5554;
  t5556 = -0.6934341012630001*t5555;
  t5559 = t5522 + t5528 + t5548 + t5556;
  t5567 = -0.993925573253*t5265;
  t5568 = 1. + t5567;
  t5570 = t5451 + t5533;
  t5572 = t5305 + t5554;
  t5609 = -0.02159*t5603;
  t5615 = -1.11344*t5614;
  t5616 = t5609 + t5615;
  t5620 = -1.11344*t5603;
  t5621 = 0.02159*t5614;
  t5622 = t5620 + t5621;
  t6563 = Cos(var1[6]);
  t6564 = -1.*t6563;
  t6565 = 1. + t6564;
  t6566 = 0.135*t6565;
  t6568 = Sin(var1[6]);
  t6580 = 0.135*t1065;
  t6581 = 0.049*t5705;
  t6586 = t6580 + t6581;
  t6587 = t6563*t6586;
  t6597 = t6563*t5705*t5757;
  t6600 = -0.09*t5728;
  t6601 = 0.049*t5742;
  t6604 = t6600 + t6601;
  t6607 = -1.*t6568*t6604;
  t6610 = t6563*t5698*t5705;
  t6616 = -1.*t6568*t5742;
  t6622 = t6610 + t6616;
  t6625 = -1.*t5698*t6568;
  t6630 = -1.*t6563*t5705*t5742;
  t6632 = t6625 + t6630;
  t6643 = t5784*t6622;
  t6644 = t5810*t6632;
  t6647 = -1.*t5774*t6622;
  t6651 = t5768*t6632;
  t6653 = t6647 + t6651;
  t6679 = t5768*t6622;
  t6682 = t5774*t6632;
  t6683 = t6679 + t6682;
  t6695 = t5892*t6653;
  t6704 = t5913*t6683;
  t6705 = t5890*t6653;
  t6707 = t5859*t6683;
  t6709 = t6705 + t6707;
  t6713 = t5859*t6653;
  t6722 = -1.*t5890*t6683;
  t6723 = t6713 + t6722;
  t6019 = -2.1934241414728571e-7*var1[12];
  t6026 = 0.000033783761634830594*t6025;
  t6030 = t6027 + t6029;
  t6031 = -0.6934341012630001*t6030;
  t6034 = t6032 + t6033;
  t6035 = -0.021877537552*t6034;
  t6038 = t6019 + t6026 + t6031 + t6035;
  t6739 = t5972*t6709;
  t6740 = t5991*t6723;
  t6045 = -1.2096424700126054e-9*var1[12];
  t6046 = -0.6934128581485427*t6025;
  t6049 = t6047 + t6048;
  t6050 = -0.021877537552*t6049;
  t6052 = t6027 + t6051;
  t6053 = 0.005534467322*t6052;
  t6054 = t6045 + t6046 + t6050 + t6053;
  t6743 = -1.*t5961*t6709;
  t6746 = t5952*t6723;
  t6747 = t6743 + t6746;
  t6059 = -1.7147089040178687e-8*var1[12];
  t6064 = -0.021744644052735636*t6025;
  t6078 = t6032 + t6068;
  t6084 = 0.005534467322*t6078;
  t6086 = t6047 + t6085;
  t6087 = -0.6934341012630001*t6086;
  t6088 = t6059 + t6064 + t6084 + t6087;
  t6749 = t5952*t6709;
  t6750 = t5961*t6723;
  t6751 = t6749 + t6750;
  t6091 = t6090 + t6068;
  t6096 = t6093 + t6085;
  t6106 = -0.993925573253*t6025;
  t6109 = 1. + t6106;
  t6116 = t6115 + t6051;
  t6118 = -0.999969365345*t6025;
  t6119 = 1. + t6118;
  t6121 = t6093 + t6048;
  t6130 = -0.006104248100000001*t6025;
  t6132 = 1. + t6130;
  t6135 = t6115 + t6029;
  t6143 = t6090 + t6033;
  t6231 = -1.11344*t6228;
  t6235 = 0.02159*t6233;
  t6263 = t6231 + t6235;
  t6280 = -0.02159*t6228;
  t6281 = -1.11344*t6233;
  t6284 = t6280 + t6281;
  t6799 = 0.135*t6344;
  t6801 = t6344*t6355;
  t6806 = t6344*t1200*t2076;
  t6807 = t6326*t6374;
  t6808 = t1193*t6344*t1200;
  t6809 = t6326*t2029;
  t6810 = t6808 + t6809;
  t6812 = t6326*t1193;
  t6813 = -1.*t6344*t1200*t2029;
  t6814 = t6812 + t6813;
  t6819 = t6810*t2953;
  t6820 = t6814*t3192;
  t6825 = t2748*t6810;
  t6826 = t6814*t2896;
  t6827 = t6825 + t6826;
  t6821 = t2748*t6814;
  t6822 = -1.*t6810*t2896;
  t6823 = t6821 + t6822;
  t6832 = t6827*t4434;
  t6833 = t6823*t4722;
  t6834 = t4271*t6827;
  t6835 = t6823*t4417;
  t6836 = t6834 + t6835;
  t6838 = t4271*t6823;
  t6839 = -1.*t6827*t4417;
  t6840 = t6838 + t6839;
  t6845 = t6836*t5149;
  t6846 = t6840*t5158;
  t6847 = t5124*t6840;
  t6848 = -1.*t6836*t5140;
  t6849 = t6847 + t6848;
  t6851 = t5124*t6836;
  t6852 = t6840*t5140;
  t6853 = t6851 + t6852;
  t6896 = -0.135*t6568;
  t6898 = t6568*t6586;
  t6903 = t6568*t5705*t5757;
  t6904 = t6563*t6604;
  t6905 = t5698*t6568*t5705;
  t6906 = t6563*t5742;
  t6907 = t6905 + t6906;
  t6909 = t6563*t5698;
  t6910 = -1.*t6568*t5705*t5742;
  t6911 = t6909 + t6910;
  t6916 = t5784*t6907;
  t6917 = t5810*t6911;
  t6918 = -1.*t5774*t6907;
  t6919 = t5768*t6911;
  t6920 = t6918 + t6919;
  t6922 = t5768*t6907;
  t6923 = t5774*t6911;
  t6924 = t6922 + t6923;
  t6929 = t5892*t6920;
  t6930 = t5913*t6924;
  t6931 = t5890*t6920;
  t6932 = t5859*t6924;
  t6933 = t6931 + t6932;
  t6935 = t5859*t6920;
  t6936 = -1.*t5890*t6924;
  t6937 = t6935 + t6936;
  t6947 = t5972*t6933;
  t6948 = t5991*t6937;
  t6949 = -1.*t5961*t6933;
  t6950 = t5952*t6937;
  t6951 = t6949 + t6950;
  t6953 = t5952*t6933;
  t6954 = t5961*t6937;
  t6955 = t6953 + t6954;
  p_output1[0]=0.0288377642750394*(0.4317204672 + 1.316608*(-0.049*t127 + t313) + 5.79228*(0.03581*t1200 - 0.04895*t1193*t127 + 0.14946*t127*t2029 + t2132 + t313) + 1.03008*(-0.002832*t1200 + t2132 + t3029 + t313 + t3196 - 0.255862*t3404 - 0.007761*t3969) + 0.763*(-0.004712*t1200 + t2132 + t3029 + t313 + t3196 + t4553 + t4750 - 0.000421*t4835 - 0.45406*t5054) + 1.03*(-0.007759*t1200 + t2132 + t3029 + t313 + t3196 + t4553 + t4750 + t5152 + t5159 - 0.826587*t5174 - 0.004179*t5221) + 0.126*(-0.135*t1200 + t2132 + t3029 + t313 + t3196 + t4553 + t4750 + t5152 + t5159 - 0.617968*(t5174*t5282 + t5221*t5311 - 1.*t1200*t5334) + t5174*t5403 - 0.126739*(-1.*t1200*t5430 + t5221*t5459 + t5174*t5475) - 1.*t1200*t5516 + t5221*t5559 + 0.01889*(t5221*t5568 - 1.*t1200*t5570 + t5174*t5572)) + 0.1498*(-0.00436*t1200 + t2132 + t3029 + t313 + t3196 + t4553 + t4750 + t5152 + t5159 + 0.00589*(t5221*t5596 + t5174*t5614) - 1.11818*(t5174*t5596 - 1.*t5221*t5614) + t5221*t5616 + t5174*t5622) + 1.03008*(t1076 + 0.002832*t5705 + t5758 + t5787 + t5817 - 0.255862*t5839 - 0.007761*t5847) + 0.763*(t1076 + 0.004712*t5705 + t5758 + t5787 + t5817 + t5894 + t5921 - 0.000421*t5937 - 0.45406*t5947) + 1.03*(t1076 + 0.007759*t5705 + t5758 + t5787 + t5817 + t5894 + t5921 + t5980 + t5992 - 0.826587*t5995 - 0.004179*t5999) + 0.126*(t1076 + 0.135*t5705 + t5758 + t5787 + t5817 + t5894 + t5921 + t5980 + t5992 - 1.*t5705*t6038 + t5995*t6054 + t5999*t6088 + 0.01889*(-1.*t5705*t6091 + t5995*t6096 + t5999*t6109) - 0.617968*(-1.*t5705*t6116 + t5995*t6119 + t5999*t6121) + 0.126739*(-1.*t5705*t6132 + t5995*t6135 + t5999*t6143)) + 0.1498*(t1076 + 0.00436*t5705 + t5758 + t5787 + t5817 + t5894 + t5921 + t5980 + t5992 + 0.00589*(t5999*t6221 + t5995*t6233) - 1.11818*(t5995*t6221 - 1.*t5999*t6233) + t5995*t6263 + t5999*t6284) + 1.316608*(t1076 - 0.049*t640) + 5.79228*(t1076 - 0.03581*t5705 + t5758 - 0.04895*t5698*t640 + 0.14946*t5742*t640));
  p_output1[1]=0.0288377642750394*(0.00357418 + 1.965608*(-0.1351*t6326 + t6340 - 0.01793*t6344) + 1.316608*(-0.049*t1200*t6326 - 0.135*t127*t6326 + t6340 + 0.0343*t6344 + t6356) + 5.79228*(-0.17081*t127*t6326 + t6340 + t6356 + t6368 + t6375 - 0.04895*t6382 - 0.14946*t6390) + 1.03008*(-0.132168*t127*t6326 + t6340 + t6356 + t6368 + t6375 + t6399 + t6400 - 0.255862*t6406 - 0.007761*t6416) + 0.763*(-0.130288*t127*t6326 + t6340 + t6356 + t6368 + t6375 + t6399 + t6400 + t6424 + t6426 - 0.000421*t6435 - 0.45406*t6447) + 1.03*(-0.127241*t127*t6326 + t6340 + t6356 + t6368 + t6375 + t6399 + t6400 + t6424 + t6426 + t6458 + t6460 - 0.826587*t6464 - 0.004179*t6472) + 0.126*(t127*t5516*t6326 + t6340 + t6356 + t6368 + t6375 + t6399 + t6400 + t6424 + t6426 + t6458 + t6460 + t5403*t6464 + t5559*t6472 - 0.617968*(t127*t5334*t6326 + t5282*t6464 + t5311*t6472) - 0.126739*(t127*t5430*t6326 + t5475*t6464 + t5459*t6472) + 0.01889*(t127*t5570*t6326 + t5572*t6464 + t5568*t6472)) + 0.1498*(-0.13064*t127*t6326 + t6340 + t6356 + t6368 + t6375 + t6399 + t6400 + t6424 + t6426 + t6458 + t6460 + t5622*t6464 + t5616*t6472 + 0.00589*(t5614*t6464 + t5596*t6472) - 1.11818*(t5596*t6464 - 1.*t5614*t6472)) + 1.965608*(0.1351*t6563 + t6566 - 0.01793*t6568) + 1.316608*(-0.049*t5705*t6563 + 0.135*t640*t6563 + t6566 + 0.0343*t6568 + t6587) + 5.79228*(0.17081*t640*t6563 + t6566 + t6587 + t6597 + t6607 - 0.04895*t6622 - 0.14946*t6632) + 1.03008*(0.132168*t640*t6563 + t6566 + t6587 + t6597 + t6607 + t6643 + t6644 - 0.255862*t6653 - 0.007761*t6683) + 0.763*(0.130288*t640*t6563 + t6566 + t6587 + t6597 + t6607 + t6643 + t6644 + t6695 + t6704 - 0.000421*t6709 - 0.45406*t6723) + 1.03*(0.127241*t640*t6563 + t6566 + t6587 + t6597 + t6607 + t6643 + t6644 + t6695 + t6704 + t6739 + t6740 - 0.826587*t6747 - 0.004179*t6751) + 0.126*(t6038*t640*t6563 + t6566 + t6587 + t6597 + t6607 + t6643 + t6644 + t6695 + t6704 + t6739 + t6740 + t6054*t6747 + t6088*t6751 + 0.01889*(t6091*t640*t6563 + t6096*t6747 + t6109*t6751) - 0.617968*(t6116*t640*t6563 + t6119*t6747 + t6121*t6751) + 0.126739*(t6132*t640*t6563 + t6135*t6747 + t6143*t6751)) + 0.1498*(0.13064*t640*t6563 + t6566 + t6587 + t6597 + t6607 + t6643 + t6644 + t6695 + t6704 + t6739 + t6740 + t6263*t6747 + t6284*t6751 + 0.00589*(t6233*t6747 + t6221*t6751) - 1.11818*(t6221*t6747 - 1.*t6233*t6751)));
  p_output1[2]=0.0288377642750394*(0.2934753 + 1.965608*(0.01793*t6326 - 0.0001*t6344) + 1.965608*(0.01793*t6563 + 0.0001*t6568) + 1.316608*(-0.0343*t6326 - 0.049*t1200*t6344 - 0.135*t127*t6344 + t6799 + t6801) + 5.79228*(-0.17081*t127*t6344 + t6799 + t6801 + t6806 + t6807 - 0.04895*t6810 - 0.14946*t6814) + 1.03008*(-0.132168*t127*t6344 + t6799 + t6801 + t6806 + t6807 + t6819 + t6820 - 0.255862*t6823 - 0.007761*t6827) + 0.763*(-0.130288*t127*t6344 + t6799 + t6801 + t6806 + t6807 + t6819 + t6820 + t6832 + t6833 - 0.000421*t6836 - 0.45406*t6840) + 1.03*(-0.127241*t127*t6344 + t6799 + t6801 + t6806 + t6807 + t6819 + t6820 + t6832 + t6833 + t6845 + t6846 - 0.826587*t6849 - 0.004179*t6853) + 0.126*(t127*t5516*t6344 + t6799 + t6801 + t6806 + t6807 + t6819 + t6820 + t6832 + t6833 + t6845 + t6846 + t5403*t6849 + t5559*t6853 - 0.617968*(t127*t5334*t6344 + t5282*t6849 + t5311*t6853) - 0.126739*(t127*t5430*t6344 + t5475*t6849 + t5459*t6853) + 0.01889*(t127*t5570*t6344 + t5572*t6849 + t5568*t6853)) + 0.1498*(-0.13064*t127*t6344 + t6799 + t6801 + t6806 + t6807 + t6819 + t6820 + t6832 + t6833 + t6845 + t6846 + t5622*t6849 + t5616*t6853 + 0.00589*(t5614*t6849 + t5596*t6853) - 1.11818*(t5596*t6849 - 1.*t5614*t6853)) + 1.316608*(-0.0343*t6563 - 0.049*t5705*t6568 + 0.135*t640*t6568 + t6896 + t6898) + 5.79228*(0.17081*t640*t6568 + t6896 + t6898 + t6903 + t6904 - 0.04895*t6907 - 0.14946*t6911) + 1.03008*(0.132168*t640*t6568 + t6896 + t6898 + t6903 + t6904 + t6916 + t6917 - 0.255862*t6920 - 0.007761*t6924) + 0.763*(0.130288*t640*t6568 + t6896 + t6898 + t6903 + t6904 + t6916 + t6917 + t6929 + t6930 - 0.000421*t6933 - 0.45406*t6937) + 1.03*(0.127241*t640*t6568 + t6896 + t6898 + t6903 + t6904 + t6916 + t6917 + t6929 + t6930 + t6947 + t6948 - 0.826587*t6951 - 0.004179*t6955) + 0.126*(t6038*t640*t6568 + t6896 + t6898 + t6903 + t6904 + t6916 + t6917 + t6929 + t6930 + t6947 + t6948 + t6054*t6951 + t6088*t6955 + 0.01889*(t6091*t640*t6568 + t6096*t6951 + t6109*t6955) - 0.617968*(t6116*t640*t6568 + t6119*t6951 + t6121*t6955) + 0.126739*(t6132*t640*t6568 + t6135*t6951 + t6143*t6955)) + 0.1498*(0.13064*t640*t6568 + t6896 + t6898 + t6903 + t6904 + t6916 + t6917 + t6929 + t6930 + t6947 + t6948 + t6263*t6951 + t6284*t6955 + 0.00589*(t6233*t6951 + t6221*t6955) - 1.11818*(t6221*t6951 - 1.*t6233*t6955)));
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




