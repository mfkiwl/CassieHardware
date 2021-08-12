/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:07 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "J_achilles_constraint.hh"
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
  double t322;
  double t147;
  double t407;
  double t474;
  double t941;
  double t1185;
  double t2732;
  double t2789;
  double t3124;
  double t3291;
  double t3887;
  double t3962;
  double t4037;
  double t2238;
  double t2239;
  double t2576;
  double t4089;
  double t4112;
  double t4133;
  double t4426;
  double t4434;
  double t4529;
  double t4768;
  double t4653;
  double t4710;
  double t4722;
  double t4790;
  double t5227;
  double t4725;
  double t5323;
  double t942;
  double t1215;
  double t1435;
  double t1567;
  double t1591;
  double t1651;
  double t3143;
  double t3559;
  double t3834;
  double t4042;
  double t4052;
  double t4062;
  double t4203;
  double t4237;
  double t5414;
  double t5424;
  double t5429;
  double t4791;
  double t5448;
  double t5451;
  double t4927;
  double t4937;
  double t4938;
  double t5464;
  double t5476;
  double t5478;
  double t4979;
  double t5101;
  double t5118;
  double t5187;
  double t5216;
  double t5228;
  double t5233;
  double t5234;
  double t5237;
  double t5240;
  double t5244;
  double t5245;
  double t5278;
  double t5287;
  double t5305;
  double t5306;
  double t5312;
  double t5318;
  double t5337;
  double t5342;
  double t5345;
  double t5351;
  double t5352;
  double t5358;
  double t5380;
  double t5381;
  double t5792;
  double t5794;
  double t5802;
  double t5848;
  double t5854;
  double t5858;
  double t5867;
  double t5869;
  double t5395;
  double t5399;
  double t5410;
  double t5437;
  double t5447;
  double t5463;
  double t5486;
  double t5487;
  double t5488;
  double t5489;
  double t5493;
  double t5494;
  double t5514;
  double t5522;
  double t5569;
  double t5575;
  double t5576;
  double t5580;
  double t5635;
  double t5710;
  double t5764;
  double t5771;
  double t5788;
  double t5837;
  double t5840;
  double t5857;
  double t5892;
  double t5913;
  double t5927;
  double t5929;
  double t5944;
  double t5948;
  double t5949;
  double t5951;
  double t5996;
  double t6009;
  double t6012;
  double t6015;
  double t6019;
  double t6026;
  double t6035;
  double t6041;
  double t6049;
  double t6052;
  double t6053;
  double t3847;
  double t4074;
  double t4559;
  double t4818;
  double t4843;
  double t4859;
  double t4944;
  double t5119;
  double t5149;
  double t5158;
  double t5271;
  double t5346;
  double t5356;
  double t5369;
  double t5370;
  double t5376;
  double t5387;
  double t5636;
  double t6127;
  double t6128;
  double t6093;
  double t6103;
  double t6115;
  double t6120;
  double t6124;
  double t6303;
  double t6305;
  double t6429;
  double t6449;
  double t6420;
  double t6457;
  double t6443;
  double t6431;
  double t6454;
  double t6422;
  double t6509;
  double t6526;
  double t6508;
  double t6535;
  double t6497;
  double t6499;
  double t6505;
  double t6507;
  double t6513;
  double t6514;
  double t6518;
  double t6520;
  double t6524;
  double t6525;
  double t6529;
  double t6530;
  double t6531;
  double t6532;
  double t6542;
  double t6536;
  double t6633;
  double t6610;
  double t6637;
  double t6640;
  double t6645;
  double t6655;
  double t6711;
  double t6713;
  double t6714;
  double t6731;
  double t6748;
  double t6749;
  double t6750;
  double t6701;
  double t6705;
  double t6707;
  double t6757;
  double t6758;
  double t6759;
  double t6762;
  double t6763;
  double t6764;
  double t6770;
  double t6771;
  double t6766;
  double t6767;
  double t6768;
  double t6781;
  double t6769;
  double t6811;
  double t6651;
  double t6679;
  double t6682;
  double t6686;
  double t6687;
  double t6688;
  double t6727;
  double t6733;
  double t6734;
  double t6752;
  double t6753;
  double t6754;
  double t6760;
  double t6761;
  double t6842;
  double t6843;
  double t6844;
  double t6772;
  double t6851;
  double t6852;
  double t6779;
  double t6780;
  double t6782;
  double t6783;
  double t6784;
  double t6785;
  double t6786;
  double t6787;
  double t6788;
  double t6855;
  double t6856;
  double t6857;
  double t6790;
  double t6791;
  double t6792;
  double t6794;
  double t6795;
  double t6796;
  double t6802;
  double t6803;
  double t6804;
  double t6805;
  double t6808;
  double t6809;
  double t6812;
  double t6815;
  double t6816;
  double t6818;
  double t6821;
  double t6825;
  double t6831;
  double t6834;
  double t6878;
  double t6879;
  double t6880;
  double t6883;
  double t6884;
  double t6886;
  double t6887;
  double t6888;
  double t6837;
  double t6838;
  double t6841;
  double t6847;
  double t6850;
  double t6854;
  double t6858;
  double t6859;
  double t6860;
  double t6862;
  double t6863;
  double t6864;
  double t6865;
  double t6866;
  double t6867;
  double t6868;
  double t6869;
  double t6870;
  double t6871;
  double t6874;
  double t6875;
  double t6876;
  double t6877;
  double t6881;
  double t6882;
  double t6885;
  double t6889;
  double t6890;
  double t6891;
  double t6892;
  double t6893;
  double t6894;
  double t6895;
  double t6897;
  double t6899;
  double t6900;
  double t6901;
  double t6902;
  double t6905;
  double t6906;
  double t6914;
  double t6915;
  double t6921;
  double t6922;
  double t6923;
  double t6746;
  double t6756;
  double t6765;
  double t6773;
  double t6775;
  double t6777;
  double t6789;
  double t6793;
  double t6797;
  double t6798;
  double t6800;
  double t6817;
  double t6824;
  double t6826;
  double t6828;
  double t6829;
  double t6835;
  double t6872;
  double t6953;
  double t6954;
  double t6938;
  double t6939;
  double t6941;
  double t6944;
  double t6950;
  double t6983;
  double t6984;
  double t7054;
  double t7040;
  double t7048;
  double t7044;
  double t7043;
  double t7050;
  double t7102;
  double t7038;
  double t7055;
  double t7115;
  double t7078;
  double t7125;
  double t7068;
  double t7072;
  double t7105;
  double t7107;
  double t7108;
  double t7110;
  double t7111;
  double t7112;
  double t7116;
  double t7117;
  double t7120;
  double t7121;
  double t7122;
  double t7123;
  double t7139;
  double t7126;
  t322 = Sin(var1[9]);
  t147 = Cos(var1[9]);
  t407 = Cos(var1[10]);
  t474 = -1.*t407;
  t941 = 1. + t474;
  t1185 = Sin(var1[10]);
  t2732 = Cos(var1[11]);
  t2789 = -1.*t2732;
  t3124 = 1. + t2789;
  t3291 = Sin(var1[11]);
  t3887 = -1.*t147*t407;
  t3962 = t322*t1185;
  t4037 = t3887 + t3962;
  t2238 = -1.*t407*t322;
  t2239 = -1.*t147*t1185;
  t2576 = t2238 + t2239;
  t4089 = Cos(var1[12]);
  t4112 = -1.*t4089;
  t4133 = 1. + t4112;
  t4426 = t2732*t4037;
  t4434 = -1.*t2576*t3291;
  t4529 = t4426 + t4434;
  t4768 = Sin(var1[12]);
  t4653 = t2732*t2576;
  t4710 = t4037*t3291;
  t4722 = t4653 + t4710;
  t4790 = -0.996943*t4768;
  t5227 = -0.0004284921280000001*t4133;
  t4725 = 0.0004284921280000001*t4133;
  t5323 = 0.996943*t4768;
  t942 = -0.00159*t941;
  t1215 = -0.27068*t1185;
  t1435 = t942 + t1215;
  t1567 = -0.27068*t941;
  t1591 = 0.00159*t1185;
  t1651 = t1567 + t1591;
  t3143 = 0.01841*t3124;
  t3559 = -0.70544*t3291;
  t3834 = t3143 + t3559;
  t4042 = -0.70544*t3124;
  t4052 = -0.01841*t3291;
  t4062 = t4042 + t4052;
  t4203 = -0.999969365345*t4133;
  t4237 = 1. + t4203;
  t5414 = t147*t407;
  t5424 = -1.*t322*t1185;
  t5429 = t5414 + t5424;
  t4791 = t4725 + t4790;
  t5448 = -1.*t5429*t3291;
  t5451 = t4653 + t5448;
  t4927 = 0.005481192614*t4133;
  t4937 = -0.077936*t4768;
  t4938 = t4927 + t4937;
  t5464 = t2732*t5429;
  t5476 = t2576*t3291;
  t5478 = t5464 + t5476;
  t4979 = 0.07769774964800001*t4133;
  t5101 = 0.005498*t4768;
  t5118 = t4979 + t5101;
  t5187 = -1.2096424700126054e-9*var1[12];
  t5216 = -0.6934128581485427*t4133;
  t5228 = t5227 + t4790;
  t5233 = -0.021877537552*t5228;
  t5234 = -0.005481192614*t4133;
  t5237 = 0.077936*t4768;
  t5240 = t5234 + t5237;
  t5244 = 0.005534467322*t5240;
  t5245 = t5187 + t5216 + t5233 + t5244;
  t5278 = -1.7147089040178687e-8*var1[12];
  t5287 = -0.021744644052735636*t4133;
  t5305 = -0.07769774964800001*t4133;
  t5306 = -0.005498*t4768;
  t5312 = t5305 + t5306;
  t5318 = 0.005534467322*t5312;
  t5337 = t5227 + t5323;
  t5342 = -0.6934341012630001*t5337;
  t5345 = t5278 + t5287 + t5318 + t5342;
  t5351 = -0.993925573253*t4133;
  t5352 = 1. + t5351;
  t5358 = t4725 + t5323;
  t5380 = -1.*t147;
  t5381 = 1. + t5380;
  t5792 = t407*t322;
  t5794 = t147*t1185;
  t5802 = t5792 + t5794;
  t5848 = -1.*t5802*t3291;
  t5854 = t5464 + t5848;
  t5858 = t2732*t5802;
  t5867 = t5429*t3291;
  t5869 = t5858 + t5867;
  t5395 = 0.21*t322;
  t5399 = -1.*t147*t1435;
  t5410 = t322*t1651;
  t5437 = -1.*t5429*t3834;
  t5447 = -1.*t2576*t4062;
  t5463 = t4237*t5451;
  t5486 = t5478*t4791;
  t5487 = t5463 + t5486;
  t5488 = 0.588518*t5487;
  t5489 = t5451*t4938;
  t5493 = t5478*t5118;
  t5494 = t5489 + t5493;
  t5514 = -0.124503*t5494;
  t5522 = -1.*t5451*t5245;
  t5569 = -1.*t5478*t5345;
  t5575 = t5352*t5478;
  t5576 = t5451*t5358;
  t5580 = t5575 + t5576;
  t5635 = -0.045407*t5580;
  t5710 = 0.21*t5381;
  t5764 = -0.049*t322;
  t5771 = -1.*t322*t1435;
  t5788 = -1.*t147*t1651;
  t5837 = -1.*t5802*t3834;
  t5840 = -1.*t5429*t4062;
  t5857 = t4237*t5854;
  t5892 = t5869*t4791;
  t5913 = t5857 + t5892;
  t5927 = 0.588518*t5913;
  t5929 = t5854*t4938;
  t5944 = t5869*t5118;
  t5948 = t5929 + t5944;
  t5949 = -0.124503*t5948;
  t5951 = -1.*t5854*t5245;
  t5996 = -1.*t5869*t5345;
  t6009 = t5352*t5869;
  t6012 = t5854*t5358;
  t6015 = t6009 + t6012;
  t6019 = -0.045407*t6015;
  t6026 = -0.09 + t5710 + t5764 + t5771 + t5788 + t5837 + t5840 + t5927 + t5949 + t5951 + t5996 + t6019;
  t6035 = 0.00159*t407;
  t6041 = t6035 + t1215;
  t6049 = -0.27068*t407;
  t6052 = -0.00159*t1185;
  t6053 = t6049 + t6052;
  t3847 = -1.*t2576*t3834;
  t4074 = -1.*t4037*t4062;
  t4559 = t4237*t4529;
  t4818 = t4722*t4791;
  t4843 = t4559 + t4818;
  t4859 = 0.588518*t4843;
  t4944 = t4529*t4938;
  t5119 = t4722*t5118;
  t5149 = t4944 + t5119;
  t5158 = -0.124503*t5149;
  t5271 = -1.*t4529*t5245;
  t5346 = -1.*t4722*t5345;
  t5356 = t5352*t4722;
  t5369 = t4529*t5358;
  t5370 = t5356 + t5369;
  t5376 = -0.045407*t5370;
  t5387 = 0.049*t5381;
  t5636 = -0.049 + t5387 + t5395 + t5399 + t5410 + t5437 + t5447 + t5488 + t5514 + t5522 + t5569 + t5635;
  t6127 = -1.*t2732*t5429;
  t6128 = t6127 + t4434;
  t6093 = -0.01841*t2732;
  t6103 = t6093 + t3559;
  t6115 = -0.70544*t2732;
  t6120 = 0.01841*t3291;
  t6124 = t6115 + t6120;
  t6303 = -1.*t2732*t5802;
  t6305 = t6303 + t5448;
  t6429 = -0.077936*t4089;
  t6449 = 0.005481192614*t4768;
  t6420 = 0.005498*t4089;
  t6457 = 0.07769774964800001*t4768;
  t6443 = 0.077936*t4089;
  t6431 = -0.005481192614*t4768;
  t6454 = -0.005498*t4089;
  t6422 = -0.07769774964800001*t4768;
  t6509 = -0.0004284921280000001*t4768;
  t6526 = 0.996943*t4089;
  t6508 = -0.996943*t4089;
  t6535 = 0.0004284921280000001*t4768;
  t6497 = t6429 + t6449;
  t6499 = t6420 + t6457;
  t6505 = t6443 + t6431;
  t6507 = 0.005534467322*t6505;
  t6513 = t6508 + t6509;
  t6514 = -0.021877537552*t6513;
  t6518 = -0.6934128581485427*t4768;
  t6520 = -1.2096424700126054e-9 + t6507 + t6514 + t6518;
  t6524 = t6454 + t6422;
  t6525 = 0.005534467322*t6524;
  t6529 = t6526 + t6509;
  t6530 = -0.6934341012630001*t6529;
  t6531 = -0.021744644052735636*t4768;
  t6532 = -1.7147089040178687e-8 + t6525 + t6530 + t6531;
  t6542 = t6508 + t6535;
  t6536 = t6526 + t6535;
  t6633 = Sin(var1[17]);
  t6610 = Cos(var1[17]);
  t6637 = Cos(var1[18]);
  t6640 = -1.*t6637;
  t6645 = 1. + t6640;
  t6655 = Sin(var1[18]);
  t6711 = Cos(var1[19]);
  t6713 = -1.*t6711;
  t6714 = 1. + t6713;
  t6731 = Sin(var1[19]);
  t6748 = -1.*t6610*t6637;
  t6749 = t6633*t6655;
  t6750 = t6748 + t6749;
  t6701 = -1.*t6637*t6633;
  t6705 = -1.*t6610*t6655;
  t6707 = t6701 + t6705;
  t6757 = Cos(var1[20]);
  t6758 = -1.*t6757;
  t6759 = 1. + t6758;
  t6762 = t6711*t6750;
  t6763 = -1.*t6707*t6731;
  t6764 = t6762 + t6763;
  t6770 = Sin(var1[20]);
  t6771 = -0.996943*t6770;
  t6766 = t6711*t6707;
  t6767 = t6750*t6731;
  t6768 = t6766 + t6767;
  t6781 = -0.0004284921280000001*t6759;
  t6769 = 0.0004284921280000001*t6759;
  t6811 = 0.996943*t6770;
  t6651 = -0.00159*t6645;
  t6679 = -0.27068*t6655;
  t6682 = t6651 + t6679;
  t6686 = -0.27068*t6645;
  t6687 = 0.00159*t6655;
  t6688 = t6686 + t6687;
  t6727 = 0.01841*t6714;
  t6733 = -0.70544*t6731;
  t6734 = t6727 + t6733;
  t6752 = -0.70544*t6714;
  t6753 = -0.01841*t6731;
  t6754 = t6752 + t6753;
  t6760 = -0.999969365345*t6759;
  t6761 = 1. + t6760;
  t6842 = t6610*t6637;
  t6843 = -1.*t6633*t6655;
  t6844 = t6842 + t6843;
  t6772 = t6769 + t6771;
  t6851 = -1.*t6844*t6731;
  t6852 = t6766 + t6851;
  t6779 = -1.2096424700126054e-9*var1[20];
  t6780 = -0.6934128581485427*t6759;
  t6782 = t6781 + t6771;
  t6783 = -0.021877537552*t6782;
  t6784 = 0.005481192614*t6759;
  t6785 = -0.077936*t6770;
  t6786 = t6784 + t6785;
  t6787 = -0.005534467322*t6786;
  t6788 = t6779 + t6780 + t6783 + t6787;
  t6855 = t6711*t6844;
  t6856 = t6707*t6731;
  t6857 = t6855 + t6856;
  t6790 = -0.07769774964800001*t6759;
  t6791 = -0.005498*t6770;
  t6792 = t6790 + t6791;
  t6794 = -0.005481192614*t6759;
  t6795 = 0.077936*t6770;
  t6796 = t6794 + t6795;
  t6802 = -1.7147089040178687e-8*var1[20];
  t6803 = -0.021744644052735636*t6759;
  t6804 = 0.07769774964800001*t6759;
  t6805 = 0.005498*t6770;
  t6808 = t6804 + t6805;
  t6809 = -0.005534467322*t6808;
  t6812 = t6781 + t6811;
  t6815 = -0.6934341012630001*t6812;
  t6816 = t6802 + t6803 + t6809 + t6815;
  t6818 = -0.993925573253*t6759;
  t6821 = 1. + t6818;
  t6825 = t6769 + t6811;
  t6831 = -1.*t6610;
  t6834 = 1. + t6831;
  t6878 = t6637*t6633;
  t6879 = t6610*t6655;
  t6880 = t6878 + t6879;
  t6883 = -1.*t6880*t6731;
  t6884 = t6855 + t6883;
  t6886 = t6711*t6880;
  t6887 = t6844*t6731;
  t6888 = t6886 + t6887;
  t6837 = 0.21*t6633;
  t6838 = -1.*t6610*t6682;
  t6841 = t6633*t6688;
  t6847 = -1.*t6844*t6734;
  t6850 = -1.*t6707*t6754;
  t6854 = t6761*t6852;
  t6858 = t6857*t6772;
  t6859 = t6854 + t6858;
  t6860 = 0.588518*t6859;
  t6862 = -1.*t6852*t6788;
  t6863 = t6857*t6792;
  t6864 = t6852*t6796;
  t6865 = t6863 + t6864;
  t6866 = 0.124503*t6865;
  t6867 = -1.*t6857*t6816;
  t6868 = t6821*t6857;
  t6869 = t6852*t6825;
  t6870 = t6868 + t6869;
  t6871 = -0.045407*t6870;
  t6874 = 0.21*t6834;
  t6875 = -0.049*t6633;
  t6876 = -1.*t6633*t6682;
  t6877 = -1.*t6610*t6688;
  t6881 = -1.*t6880*t6734;
  t6882 = -1.*t6844*t6754;
  t6885 = t6761*t6884;
  t6889 = t6888*t6772;
  t6890 = t6885 + t6889;
  t6891 = 0.588518*t6890;
  t6892 = -1.*t6884*t6788;
  t6893 = t6888*t6792;
  t6894 = t6884*t6796;
  t6895 = t6893 + t6894;
  t6897 = 0.124503*t6895;
  t6899 = -1.*t6888*t6816;
  t6900 = t6821*t6888;
  t6901 = t6884*t6825;
  t6902 = t6900 + t6901;
  t6905 = -0.045407*t6902;
  t6906 = -0.09 + t6874 + t6875 + t6876 + t6877 + t6881 + t6882 + t6891 + t6892 + t6897 + t6899 + t6905;
  t6914 = 0.00159*t6637;
  t6915 = t6914 + t6679;
  t6921 = -0.27068*t6637;
  t6922 = -0.00159*t6655;
  t6923 = t6921 + t6922;
  t6746 = -1.*t6707*t6734;
  t6756 = -1.*t6750*t6754;
  t6765 = t6761*t6764;
  t6773 = t6768*t6772;
  t6775 = t6765 + t6773;
  t6777 = 0.588518*t6775;
  t6789 = -1.*t6764*t6788;
  t6793 = t6768*t6792;
  t6797 = t6764*t6796;
  t6798 = t6793 + t6797;
  t6800 = 0.124503*t6798;
  t6817 = -1.*t6768*t6816;
  t6824 = t6821*t6768;
  t6826 = t6764*t6825;
  t6828 = t6824 + t6826;
  t6829 = -0.045407*t6828;
  t6835 = 0.049*t6834;
  t6872 = -0.049 + t6835 + t6837 + t6838 + t6841 + t6847 + t6850 + t6860 + t6862 + t6866 + t6867 + t6871;
  t6953 = -1.*t6711*t6844;
  t6954 = t6953 + t6763;
  t6938 = -0.01841*t6711;
  t6939 = t6938 + t6733;
  t6941 = -0.70544*t6711;
  t6944 = 0.01841*t6731;
  t6950 = t6941 + t6944;
  t6983 = -1.*t6711*t6880;
  t6984 = t6983 + t6851;
  t7054 = -0.005498*t6757;
  t7040 = -0.07769774964800001*t6770;
  t7048 = 0.077936*t6757;
  t7044 = -0.005481192614*t6770;
  t7043 = -0.077936*t6757;
  t7050 = 0.005481192614*t6770;
  t7102 = -0.0004284921280000001*t6770;
  t7038 = 0.005498*t6757;
  t7055 = 0.07769774964800001*t6770;
  t7115 = 0.996943*t6757;
  t7078 = -0.996943*t6757;
  t7125 = 0.0004284921280000001*t6770;
  t7068 = t7054 + t7040;
  t7072 = t7048 + t7044;
  t7105 = t7078 + t7102;
  t7107 = -0.021877537552*t7105;
  t7108 = t7043 + t7050;
  t7110 = -0.005534467322*t7108;
  t7111 = -0.6934128581485427*t6770;
  t7112 = -1.2096424700126054e-9 + t7107 + t7110 + t7111;
  t7116 = t7115 + t7102;
  t7117 = -0.6934341012630001*t7116;
  t7120 = t7038 + t7055;
  t7121 = -0.005534467322*t7120;
  t7122 = -0.021744644052735636*t6770;
  t7123 = -1.7147089040178687e-8 + t7117 + t7121 + t7122;
  t7139 = t7078 + t7125;
  t7126 = t7115 + t7125;
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
  p_output1[18]=2.*(0.21*t147 + t147*t1651 + 0.049*t322 + t1435*t322 + t3847 + t4074 + t4859 + t5158 + t5271 + t5346 + t5376)*t5636 + 2.*(-0.049*t147 + t5395 + t5399 + t5410 + t5437 + t5447 + t5488 + t5514 + t5522 + t5569 + t5635)*t6026;
  p_output1[19]=0;
  p_output1[20]=2.*t5636*(t3847 + t4074 + t4859 + t5158 + t5271 + t5346 + t5376 + t322*t6041 - 1.*t147*t6053) + 2.*t6026*(t5437 + t5447 + t5488 + t5514 + t5522 + t5569 + t5635 - 1.*t147*t6041 - 1.*t322*t6053);
  p_output1[21]=0;
  p_output1[22]=2.*t5636*(-1.*t5345*t5451 - 1.*t2576*t6103 - 1.*t5429*t6124 - 1.*t5245*t6128 + 0.588518*(t4791*t5451 + t4237*t6128) - 0.124503*(t5118*t5451 + t4938*t6128) - 0.045407*(t5352*t5451 + t5358*t6128)) + 2.*t6026*(-1.*t5345*t5854 - 1.*t5429*t6103 - 1.*t5802*t6124 - 1.*t5245*t6305 + 0.588518*(t4791*t5854 + t4237*t6305) - 0.124503*(t5118*t5854 + t4938*t6305) - 0.045407*(t5352*t5854 + t5358*t6305));
  p_output1[23]=0;
  p_output1[24]=2.*t5636*(-0.124503*(t5451*t6497 + t5478*t6499) - 1.*t5451*t6520 - 1.*t5478*t6532 - 0.045407*(-0.993925573253*t4768*t5478 + t5451*t6536) + 0.588518*(-0.999969365345*t4768*t5451 + t5478*t6542)) + 2.*t6026*(-0.124503*(t5854*t6497 + t5869*t6499) - 1.*t5854*t6520 - 1.*t5869*t6532 - 0.045407*(-0.993925573253*t4768*t5869 + t5854*t6536) + 0.588518*(-0.999969365345*t4768*t5854 + t5869*t6542)) + 2.*(2.1934241414728571e-7 + 0.0007262134395594695*t4768 + 0.021877537552*(t6420 + t6422) + 0.6934341012630001*(t6429 + t6431) + 0.588518*(t6443 + t6449) - 0.045407*(t6454 + t6457))*(0.09 - 0.124503*(1. - 0.006104248100000001*t4133) - 0.000033783761634830594*t4133 + 0.6934341012630001*(t4937 + t5234) + 0.588518*(t4927 + t5237) + 0.021877537552*(t5101 + t5305) - 0.045407*(t4979 + t5306) + 2.1934241414728571e-7*var1[12]);
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
  p_output1[35]=2.*(0.21*t6610 + 0.049*t6633 + t6633*t6682 + t6610*t6688 + t6746 + t6756 + t6777 + t6789 + t6800 + t6817 + t6829)*t6872 + 2.*(-0.049*t6610 + t6837 + t6838 + t6841 + t6847 + t6850 + t6860 + t6862 + t6866 + t6867 + t6871)*t6906;
  p_output1[36]=0;
  p_output1[37]=2.*t6872*(t6746 + t6756 + t6777 + t6789 + t6800 + t6817 + t6829 + t6633*t6915 - 1.*t6610*t6923) + 2.*t6906*(t6847 + t6850 + t6860 + t6862 + t6866 + t6867 + t6871 - 1.*t6610*t6915 - 1.*t6633*t6923);
  p_output1[38]=0;
  p_output1[39]=2.*t6872*(-1.*t6816*t6852 - 1.*t6707*t6939 - 1.*t6844*t6950 - 1.*t6788*t6954 + 0.588518*(t6772*t6852 + t6761*t6954) + 0.124503*(t6792*t6852 + t6796*t6954) - 0.045407*(t6821*t6852 + t6825*t6954)) + 2.*t6906*(-1.*t6816*t6884 - 1.*t6844*t6939 - 1.*t6880*t6950 - 1.*t6788*t6984 + 0.588518*(t6772*t6884 + t6761*t6984) + 0.124503*(t6792*t6884 + t6796*t6984) - 0.045407*(t6821*t6884 + t6825*t6984));
  p_output1[40]=0;
  p_output1[41]=2.*t6872*(0.124503*(t6857*t7068 + t6852*t7072) - 1.*t6852*t7112 - 1.*t6857*t7123 - 0.045407*(-0.993925573253*t6770*t6857 + t6852*t7126) + 0.588518*(-0.999969365345*t6770*t6852 + t6857*t7139)) + 2.*t6906*(0.124503*(t6888*t7068 + t6884*t7072) - 1.*t6884*t7112 - 1.*t6888*t7123 - 0.045407*(-0.993925573253*t6770*t6888 + t6884*t7126) + 0.588518*(-0.999969365345*t6770*t6884 + t6888*t7139)) + 2.*(-2.1934241414728571e-7 - 0.0007262134395594695*t6770 - 0.045407*(t7038 + t7040) + 0.588518*(t7043 + t7044) + 0.6934341012630001*(t7048 + t7050) + 0.021877537552*(t7054 + t7055))*(-0.09 + 0.124503*(1. - 0.006104248100000001*t6759) + 0.000033783761634830594*t6759 + 0.588518*(t6785 + t6794) + 0.6934341012630001*(t6784 + t6795) + 0.021877537552*(t6791 + t6804) - 0.045407*(t6790 + t6805) - 2.1934241414728571e-7*var1[20]);
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

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void J_achilles_constraint_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




