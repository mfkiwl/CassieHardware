/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:56 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "leftLegPitchVelocity.hh"
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
  double t327;
  double t489;
  double t242;
  double t584;
  double t642;
  double t668;
  double t815;
  double t1726;
  double t1745;
  double t1758;
  double t1825;
  double t1650;
  double t1652;
  double t1657;
  double t1921;
  double t2214;
  double t2224;
  double t2259;
  double t2271;
  double t2796;
  double t2803;
  double t2302;
  double t2367;
  double t2371;
  double t2650;
  double t2686;
  double t2756;
  double t2813;
  double t2847;
  double t2881;
  double t2927;
  double t2944;
  double t2948;
  double t2954;
  double t3034;
  double t3047;
  double t3076;
  double t3111;
  double t3115;
  double t3124;
  double t3145;
  double t3280;
  double t3310;
  double t3311;
  double t3490;
  double t3561;
  double t3618;
  double t3740;
  double t3751;
  double t3763;
  double t3764;
  double t3771;
  double t791;
  double t911;
  double t942;
  double t1102;
  double t1123;
  double t1214;
  double t1792;
  double t1841;
  double t1883;
  double t2046;
  double t2067;
  double t2076;
  double t2265;
  double t2272;
  double t2281;
  double t3821;
  double t3823;
  double t3833;
  double t3869;
  double t3875;
  double t3881;
  double t2556;
  double t2591;
  double t2620;
  double t2910;
  double t2933;
  double t2938;
  double t3890;
  double t3896;
  double t3931;
  double t3948;
  double t4009;
  double t4037;
  double t2989;
  double t3027;
  double t3031;
  double t3143;
  double t3213;
  double t3255;
  double t4053;
  double t4062;
  double t4074;
  double t4095;
  double t4102;
  double t4110;
  double t3336;
  double t3367;
  double t3437;
  double t4121;
  double t4142;
  double t4155;
  double t4188;
  double t4200;
  double t4233;
  double t1407;
  double t1447;
  double t1497;
  double t3650;
  double t3651;
  double t3679;
  double t3706;
  double t3716;
  double t3725;
  double t4624;
  double t4626;
  double t4628;
  double t4719;
  double t4722;
  double t4735;
  double t4754;
  double t4760;
  double t4772;
  double t4791;
  double t4809;
  double t4815;
  double t4832;
  double t4900;
  double t4903;
  double t4925;
  double t4926;
  double t4929;
  double t4939;
  double t4988;
  double t5000;
  double t5012;
  double t5031;
  double t5035;
  double t5038;
  double t5041;
  double t5058;
  double t4691;
  double t4698;
  double t4699;
  double t5417;
  double t5422;
  double t5423;
  double t5441;
  double t5451;
  double t5452;
  double t5460;
  double t5484;
  double t5505;
  double t5509;
  double t5512;
  double t5517;
  double t299;
  double t562;
  double t1047;
  double t1396;
  double t1594;
  double t1893;
  double t2110;
  double t2485;
  double t2783;
  double t2987;
  double t3080;
  double t3317;
  double t3629;
  double t3692;
  double t3729;
  double t3735;
  double t4384;
  double t4388;
  double t4400;
  double t4406;
  double t4462;
  double t4478;
  double t4509;
  double t4515;
  double t4532;
  double t4536;
  double t4547;
  double t4553;
  double t4565;
  double t4567;
  double t4590;
  double t4594;
  double t4595;
  double t4598;
  double t4672;
  double t4675;
  double t4676;
  double t4705;
  double t4753;
  double t4780;
  double t4827;
  double t4905;
  double t4937;
  double t5011;
  double t5037;
  double t5059;
  double t5070;
  double t5079;
  double t5082;
  double t5084;
  double t5085;
  double t5111;
  double t5112;
  double t5132;
  double t5139;
  double t5140;
  double t5168;
  double t5177;
  double t5193;
  double t5213;
  double t5252;
  double t5327;
  double t5338;
  double t5609;
  double t5614;
  double t5616;
  double t5622;
  double t5641;
  double t5642;
  double t5680;
  double t5697;
  double t5705;
  double t5716;
  double t5722;
  double t5728;
  double t5836;
  double t5837;
  double t5838;
  double t5840;
  double t5842;
  double t5847;
  double t5861;
  double t5862;
  double t5863;
  double t5867;
  double t5868;
  double t5869;
  double t5872;
  double t5873;
  double t5875;
  double t5878;
  double t5880;
  double t5881;
  double t5886;
  double t5887;
  double t5888;
  double t5994;
  double t6019;
  double t6033;
  double t6077;
  double t6093;
  double t6116;
  double t6128;
  double t6136;
  double t6140;
  double t6155;
  double t6162;
  double t6172;
  double t6178;
  double t6180;
  double t6189;
  double t6201;
  double t6208;
  double t6212;
  double t6359;
  double t6363;
  double t6376;
  double t6386;
  double t6397;
  double t6403;
  double t6418;
  double t6438;
  double t6456;
  double t6463;
  double t6481;
  double t6484;
  double t6514;
  double t6515;
  double t6516;
  double t6535;
  double t6545;
  double t6564;
  double t6570;
  double t6572;
  double t6573;
  double t6647;
  double t6650;
  double t6652;
  double t6657;
  double t6658;
  double t6660;
  double t6668;
  double t6671;
  double t6672;
  double t6676;
  double t6677;
  double t6680;
  double t6683;
  double t6684;
  double t6685;
  double t6687;
  double t6689;
  double t6690;
  double t6698;
  double t6700;
  double t6706;
  double t6781;
  double t6783;
  double t6791;
  double t6794;
  double t6797;
  double t6814;
  double t6816;
  double t6830;
  double t6832;
  double t6835;
  double t6836;
  double t6845;
  double t6846;
  double t6848;
  double t6762;
  double t6764;
  double t6766;
  double t6770;
  double t6779;
  double t6897;
  double t6898;
  double t6901;
  double t6905;
  double t6907;
  double t6915;
  double t6918;
  double t6920;
  double t6926;
  double t6928;
  double t6929;
  double t6931;
  double t6933;
  double t6935;
  double t6954;
  double t6955;
  double t6956;
  double t6958;
  double t6959;
  double t7013;
  double t7014;
  double t7019;
  double t7020;
  double t7022;
  double t7023;
  double t7024;
  double t6994;
  double t6997;
  double t6998;
  double t7000;
  double t7003;
  double t7007;
  double t7009;
  double t7010;
  double t7016;
  double t7017;
  double t7046;
  double t7047;
  double t7051;
  double t7053;
  double t7055;
  double t7056;
  double t7058;
  t327 = Sin(var1[4]);
  t489 = Sin(var1[6]);
  t242 = Cos(var1[4]);
  t584 = Cos(var1[7]);
  t642 = -1.*t584;
  t668 = 1. + t642;
  t815 = Sin(var1[7]);
  t1726 = Cos(var1[8]);
  t1745 = -1.*t1726;
  t1758 = 1. + t1745;
  t1825 = Sin(var1[8]);
  t1650 = t242*t584;
  t1652 = t327*t489*t815;
  t1657 = t1650 + t1652;
  t1921 = Cos(var1[6]);
  t2214 = Cos(var1[9]);
  t2224 = -1.*t2214;
  t2259 = 1. + t2224;
  t2271 = Sin(var1[9]);
  t2796 = -1.*var1[9];
  t2803 = 0.226893 + t2796;
  t2302 = t1726*t1657;
  t2367 = t1921*t327*t1825;
  t2371 = t2302 + t2367;
  t2650 = t1921*t1726*t327;
  t2686 = -1.*t1657*t1825;
  t2756 = t2650 + t2686;
  t2813 = Cos(t2803);
  t2847 = -1.*t2813;
  t2881 = 1. + t2847;
  t2927 = Sin(t2803);
  t2944 = -1.*t2271*t2371;
  t2948 = t2214*t2756;
  t2954 = t2944 + t2948;
  t3034 = t2214*t2371;
  t3047 = t2271*t2756;
  t3076 = t3034 + t3047;
  t3111 = Cos(var1[13]);
  t3115 = -1.*t3111;
  t3124 = 1. + t3115;
  t3145 = Sin(var1[13]);
  t3280 = t2927*t2954;
  t3310 = t2813*t3076;
  t3311 = t3280 + t3310;
  t3490 = t2813*t2954;
  t3561 = -1.*t2927*t3076;
  t3618 = t3490 + t3561;
  t3740 = Sin(var1[3]);
  t3751 = Cos(var1[3]);
  t3763 = t3751*t1921;
  t3764 = -1.*t242*t3740*t489;
  t3771 = t3763 + t3764;
  t791 = 0.135*t668;
  t911 = 0.049*t815;
  t942 = t791 + t911;
  t1102 = -0.049*t668;
  t1123 = 0.135*t815;
  t1214 = t1102 + t1123;
  t1792 = -0.049*t1758;
  t1841 = -0.09*t1825;
  t1883 = t1792 + t1841;
  t2046 = -0.09*t1758;
  t2067 = 0.049*t1825;
  t2076 = t2046 + t2067;
  t2265 = -0.049*t2259;
  t2272 = -0.21*t2271;
  t2281 = t2265 + t2272;
  t3821 = t584*t3740*t327;
  t3823 = t3771*t815;
  t3833 = t3821 + t3823;
  t3869 = -1.*t242*t1921*t3740;
  t3875 = -1.*t3751*t489;
  t3881 = t3869 + t3875;
  t2556 = -0.21*t2259;
  t2591 = 0.049*t2271;
  t2620 = t2556 + t2591;
  t2910 = -0.70544*t2881;
  t2933 = -0.01841*t2927;
  t2938 = t2910 + t2933;
  t3890 = t1726*t3833;
  t3896 = t3881*t1825;
  t3931 = t3890 + t3896;
  t3948 = t1726*t3881;
  t4009 = -1.*t3833*t1825;
  t4037 = t3948 + t4009;
  t2989 = 0.01841*t2881;
  t3027 = -0.70544*t2927;
  t3031 = t2989 + t3027;
  t3143 = -0.02159*t3124;
  t3213 = -1.11344*t3145;
  t3255 = t3143 + t3213;
  t4053 = -1.*t2271*t3931;
  t4062 = t2214*t4037;
  t4074 = t4053 + t4062;
  t4095 = t2214*t3931;
  t4102 = t2271*t4037;
  t4110 = t4095 + t4102;
  t3336 = -1.11344*t3124;
  t3367 = 0.02159*t3145;
  t3437 = t3336 + t3367;
  t4121 = t2927*t4074;
  t4142 = t2813*t4110;
  t4155 = t4121 + t4142;
  t4188 = t2813*t4074;
  t4200 = -1.*t2927*t4110;
  t4233 = t4188 + t4200;
  t1407 = t584*t327*t489;
  t1447 = -1.*t242*t815;
  t1497 = t1407 + t1447;
  t3650 = -1.*t3145*t3311;
  t3651 = t3111*t3618;
  t3679 = t3650 + t3651;
  t3706 = t3111*t3311;
  t3716 = t3145*t3618;
  t3725 = t3706 + t3716;
  t4624 = t1921*t3740;
  t4626 = t3751*t242*t489;
  t4628 = t4624 + t4626;
  t4719 = -1.*t3751*t584*t327;
  t4722 = t4628*t815;
  t4735 = t4719 + t4722;
  t4754 = t3751*t242*t1921;
  t4760 = -1.*t3740*t489;
  t4772 = t4754 + t4760;
  t4791 = t1726*t4735;
  t4809 = t4772*t1825;
  t4815 = t4791 + t4809;
  t4832 = t1726*t4772;
  t4900 = -1.*t4735*t1825;
  t4903 = t4832 + t4900;
  t4925 = -1.*t2271*t4815;
  t4926 = t2214*t4903;
  t4929 = t4925 + t4926;
  t4939 = t2214*t4815;
  t4988 = t2271*t4903;
  t5000 = t4939 + t4988;
  t5012 = t2927*t4929;
  t5031 = t2813*t5000;
  t5035 = t5012 + t5031;
  t5038 = t2813*t4929;
  t5041 = -1.*t2927*t5000;
  t5058 = t5038 + t5041;
  t4691 = t584*t4628;
  t4698 = t3751*t327*t815;
  t4699 = t4691 + t4698;
  t5417 = -1.*t1726*t2271*t4699;
  t5422 = -1.*t2214*t4699*t1825;
  t5423 = t5417 + t5422;
  t5441 = t2214*t1726*t4699;
  t5451 = -1.*t2271*t4699*t1825;
  t5452 = t5441 + t5451;
  t5460 = t2927*t5423;
  t5484 = t2813*t5452;
  t5505 = t5460 + t5484;
  t5509 = t2813*t5423;
  t5512 = -1.*t2927*t5452;
  t5517 = t5509 + t5512;
  t299 = -0.049*t242;
  t562 = 0.135*t327*t489;
  t1047 = -1.*t327*t489*t942;
  t1396 = -1.*t242*t1214;
  t1594 = -0.1305*t1497;
  t1893 = -1.*t1657*t1883;
  t2110 = -1.*t1921*t327*t2076;
  t2485 = -1.*t2281*t2371;
  t2783 = -1.*t2620*t2756;
  t2987 = -1.*t2938*t2954;
  t3080 = -1.*t3031*t3076;
  t3317 = -1.*t3255*t3311;
  t3629 = -1.*t3437*t3618;
  t3692 = 1.11344*t3679;
  t3729 = 0.02159*t3725;
  t3735 = t299 + t562 + t1047 + t1396 + t1594 + t1893 + t2110 + t2485 + t2783 + t2987 + t3080 + t3317 + t3629 + t3692 + t3729;
  t4384 = 0.049*t242;
  t4388 = -0.135*t327*t489;
  t4400 = t327*t489*t942;
  t4406 = t242*t1214;
  t4462 = 0.1305*t1497;
  t4478 = t1657*t1883;
  t4509 = t1921*t327*t2076;
  t4515 = t2281*t2371;
  t4532 = t2620*t2756;
  t4536 = t2938*t2954;
  t4547 = t3031*t3076;
  t4553 = t3255*t3311;
  t4565 = t3437*t3618;
  t4567 = -1.11344*t3679;
  t4590 = -0.02159*t3725;
  t4594 = t4384 + t4388 + t4400 + t4406 + t4462 + t4478 + t4509 + t4515 + t4532 + t4536 + t4547 + t4553 + t4565 + t4567 + t4590;
  t4595 = Power(t4594,2);
  t4598 = 0.049*t3751*t327;
  t4672 = 0.135*t4628;
  t4675 = -1.*t4628*t942;
  t4676 = t3751*t327*t1214;
  t4705 = -0.1305*t4699;
  t4753 = -1.*t4735*t1883;
  t4780 = -1.*t4772*t2076;
  t4827 = -1.*t2281*t4815;
  t4905 = -1.*t2620*t4903;
  t4937 = -1.*t2938*t4929;
  t5011 = -1.*t3031*t5000;
  t5037 = -1.*t3255*t5035;
  t5059 = -1.*t3437*t5058;
  t5070 = -1.*t3145*t5035;
  t5079 = t3111*t5058;
  t5082 = t5070 + t5079;
  t5084 = 1.11344*t5082;
  t5085 = t3111*t5035;
  t5111 = t3145*t5058;
  t5112 = t5085 + t5111;
  t5132 = 0.02159*t5112;
  t5139 = t4598 + t4672 + t4675 + t4676 + t4705 + t4753 + t4780 + t4827 + t4905 + t4937 + t5011 + t5037 + t5059 + t5084 + t5132;
  t5140 = Power(t5139,2);
  t5168 = t4595 + t5140;
  t5177 = 1/t5168;
  t5193 = 0.135*t584;
  t5213 = -0.049*t815;
  t5252 = t5193 + t5213;
  t5327 = 0.049*t584;
  t5338 = t5327 + t1123;
  t5609 = -1.*t1726*t2271*t1497;
  t5614 = -1.*t2214*t1497*t1825;
  t5616 = t5609 + t5614;
  t5622 = t2214*t1726*t1497;
  t5641 = -1.*t2271*t1497*t1825;
  t5642 = t5622 + t5641;
  t5680 = t2927*t5616;
  t5697 = t2813*t5642;
  t5705 = t5680 + t5697;
  t5716 = t2813*t5616;
  t5722 = -1.*t2927*t5642;
  t5728 = t5716 + t5722;
  t5836 = -1.*t1921*t3740;
  t5837 = -1.*t3751*t242*t489;
  t5838 = t5836 + t5837;
  t5840 = t1726*t4772*t815;
  t5842 = t5838*t1825;
  t5847 = t5840 + t5842;
  t5861 = t1726*t5838;
  t5862 = -1.*t4772*t815*t1825;
  t5863 = t5861 + t5862;
  t5867 = -1.*t2271*t5847;
  t5868 = t2214*t5863;
  t5869 = t5867 + t5868;
  t5872 = t2214*t5847;
  t5873 = t2271*t5863;
  t5875 = t5872 + t5873;
  t5878 = t2927*t5869;
  t5880 = t2813*t5875;
  t5881 = t5878 + t5880;
  t5886 = t2813*t5869;
  t5887 = -1.*t2927*t5875;
  t5888 = t5886 + t5887;
  t5994 = t1921*t1726*t327*t815;
  t6019 = -1.*t327*t489*t1825;
  t6033 = t5994 + t6019;
  t6077 = -1.*t1726*t327*t489;
  t6093 = -1.*t1921*t327*t815*t1825;
  t6116 = t6077 + t6093;
  t6128 = -1.*t2271*t6033;
  t6136 = t2214*t6116;
  t6140 = t6128 + t6136;
  t6155 = t2214*t6033;
  t6162 = t2271*t6116;
  t6172 = t6155 + t6162;
  t6178 = t2927*t6140;
  t6180 = t2813*t6172;
  t6189 = t6178 + t6180;
  t6201 = t2813*t6140;
  t6208 = -1.*t2927*t6172;
  t6212 = t6201 + t6208;
  t6359 = -1.*t3751*t242*t584;
  t6363 = -1.*t3751*t327*t489*t815;
  t6376 = t6359 + t6363;
  t6386 = t1726*t6376;
  t6397 = -1.*t3751*t1921*t327*t1825;
  t6403 = t6386 + t6397;
  t6418 = -1.*t3751*t1921*t1726*t327;
  t6438 = -1.*t6376*t1825;
  t6456 = t6418 + t6438;
  t6463 = -1.*t2271*t6403;
  t6481 = t2214*t6456;
  t6484 = t6463 + t6481;
  t6514 = t2214*t6403;
  t6515 = t2271*t6456;
  t6516 = t6514 + t6515;
  t6535 = t2927*t6484;
  t6545 = t2813*t6516;
  t6564 = t6535 + t6545;
  t6570 = t2813*t6484;
  t6572 = -1.*t2927*t6516;
  t6573 = t6570 + t6572;
  t6647 = -1.*t584*t327;
  t6650 = t242*t489*t815;
  t6652 = t6647 + t6650;
  t6657 = t1726*t6652;
  t6658 = t242*t1921*t1825;
  t6660 = t6657 + t6658;
  t6668 = t242*t1921*t1726;
  t6671 = -1.*t6652*t1825;
  t6672 = t6668 + t6671;
  t6676 = -1.*t2271*t6660;
  t6677 = t2214*t6672;
  t6680 = t6676 + t6677;
  t6683 = t2214*t6660;
  t6684 = t2271*t6672;
  t6685 = t6683 + t6684;
  t6687 = t2927*t6680;
  t6689 = t2813*t6685;
  t6690 = t6687 + t6689;
  t6698 = t2813*t6680;
  t6700 = -1.*t2927*t6685;
  t6706 = t6698 + t6700;
  t6781 = -1.*t1726*t4735;
  t6783 = -1.*t4772*t1825;
  t6791 = t6781 + t6783;
  t6794 = t2271*t6791;
  t6797 = t6794 + t4926;
  t6814 = t2214*t6791;
  t6816 = -1.*t2271*t4903;
  t6830 = t6814 + t6816;
  t6832 = -1.*t2927*t6797;
  t6835 = t2813*t6830;
  t6836 = t6832 + t6835;
  t6845 = t2813*t6797;
  t6846 = t2927*t6830;
  t6848 = t6845 + t6846;
  t6762 = 0.049*t1726;
  t6764 = t6762 + t1841;
  t6766 = -0.09*t1726;
  t6770 = -0.049*t1825;
  t6779 = t6766 + t6770;
  t6897 = -1.*t1726*t1657;
  t6898 = -1.*t1921*t327*t1825;
  t6901 = t6897 + t6898;
  t6905 = t2271*t6901;
  t6907 = t6905 + t2948;
  t6915 = t2214*t6901;
  t6918 = -1.*t2271*t2756;
  t6920 = t6915 + t6918;
  t6926 = -1.*t2927*t6907;
  t6928 = t2813*t6920;
  t6929 = t6926 + t6928;
  t6931 = t2813*t6907;
  t6933 = t2927*t6920;
  t6935 = t6931 + t6933;
  t6954 = -1.11344*t3111;
  t6955 = -0.02159*t3145;
  t6956 = t6954 + t6955;
  t6958 = 0.02159*t3111;
  t6959 = t6958 + t3213;
  t7013 = -1.*t2214*t2371;
  t7014 = t7013 + t6918;
  t7019 = t2813*t7014;
  t7020 = t7019 + t3310;
  t7022 = t2927*t7014;
  t7023 = t2927*t3076;
  t7024 = t7022 + t7023;
  t6994 = -0.21*t2214;
  t6997 = -0.049*t2271;
  t6998 = t6994 + t6997;
  t7000 = 0.049*t2214;
  t7003 = t7000 + t2272;
  t7007 = 0.01841*t2813;
  t7009 = 0.70544*t2927;
  t7010 = t7007 + t7009;
  t7016 = 0.70544*t2813;
  t7017 = t7016 + t2933;
  t7046 = -1.*t2214*t4815;
  t7047 = t7046 + t6816;
  t7051 = t2813*t7047;
  t7053 = t7051 + t5031;
  t7055 = t2927*t7047;
  t7056 = t2927*t5000;
  t7058 = t7055 + t7056;
  p_output1[0]=t3735*t5177*(-0.049*t327*t3740 - 1.*t1214*t327*t3740 + 0.135*t3771 - 1.*t1883*t3833 - 1.*t2076*t3881 - 1.*t2281*t3931 - 1.*t2620*t4037 - 1.*t2938*t4074 - 1.*t3031*t4110 - 1.*t3255*t4155 - 1.*t3437*t4233 + 1.11344*(-1.*t3145*t4155 + t3111*t4233) + 0.02159*(t3111*t4155 + t3145*t4233) - 0.1305*(t3771*t584 - 1.*t327*t3740*t815) - 1.*t3771*t942)*var2[3] + (t5139*t5177*(t1921*t2076*t242 - 0.049*t327 - 1.*t1214*t327 - 0.135*t242*t489 + t1883*t6652 + t2281*t6660 + t2620*t6672 + t2938*t6680 + t3031*t6685 + t3255*t6690 + t3437*t6706 - 1.11344*(-1.*t3145*t6690 + t3111*t6706) - 0.02159*(t3111*t6690 + t3145*t6706) + 0.1305*(t242*t489*t584 + t327*t815) + t242*t489*t942) + t3735*t5177*(0.049*t242*t3751 + t1214*t242*t3751 + t1921*t2076*t327*t3751 - 0.135*t327*t3751*t489 - 1.*t1883*t6376 - 1.*t2281*t6403 - 1.*t2620*t6456 - 1.*t2938*t6484 - 1.*t3031*t6516 - 1.*t3255*t6564 - 1.*t3437*t6573 + 1.11344*(-1.*t3145*t6564 + t3111*t6573) + 0.02159*(t3111*t6564 + t3145*t6573) - 0.1305*(-1.*t327*t3751*t489*t584 + t242*t3751*t815) + t327*t3751*t489*t942))*var2[4] + (t5139*t5177*(-0.135*t1921*t327 - 1.*t2076*t327*t489 + 0.1305*t1921*t327*t584 + t2281*t6033 + t2620*t6116 + t2938*t6140 + t3031*t6172 + t3255*t6189 + t3437*t6212 - 1.11344*(-1.*t3145*t6189 + t3111*t6212) - 0.02159*(t3111*t6189 + t3145*t6212) + t1883*t1921*t327*t815 + t1921*t327*t942) + t3735*t5177*(0.135*t4772 - 1.*t2076*t5838 - 0.1305*t4772*t584 - 1.*t2281*t5847 - 1.*t2620*t5863 - 1.*t2938*t5869 - 1.*t3031*t5875 - 1.*t3255*t5881 - 1.*t3437*t5888 + 1.11344*(-1.*t3145*t5881 + t3111*t5888) + 0.02159*(t3111*t5881 + t3145*t5888) - 1.*t1883*t4772*t815 - 1.*t4772*t942))*var2[6] + (t3735*t5177*(-1.*t1883*t4699 - 1.*t1726*t2281*t4699 + t1825*t2620*t4699 + t327*t3751*t5252 - 1.*t4628*t5338 - 1.*t2938*t5423 - 1.*t3031*t5452 - 1.*t3255*t5505 - 1.*t3437*t5517 + 1.11344*(-1.*t3145*t5505 + t3111*t5517) + 0.02159*(t3111*t5505 + t3145*t5517) - 0.1305*(t327*t3751*t584 - 1.*t4628*t815)) + t5139*t5177*(t1497*t1883 + t1497*t1726*t2281 - 1.*t1497*t1825*t2620 + t242*t5252 + t327*t489*t5338 + t2938*t5616 + t3031*t5642 + t3255*t5705 + t3437*t5728 - 1.11344*(-1.*t3145*t5705 + t3111*t5728) - 0.02159*(t3111*t5705 + t3145*t5728) + 0.1305*(-1.*t242*t584 - 1.*t327*t489*t815)))*var2[7] + (t3735*t5177*(-1.*t2281*t4903 - 1.*t4772*t6764 - 1.*t4735*t6779 - 1.*t2620*t6791 - 1.*t3031*t6797 - 1.*t2938*t6830 - 1.*t3437*t6836 - 1.*t3255*t6848 + 0.02159*(t3145*t6836 + t3111*t6848) + 1.11344*(t3111*t6836 - 1.*t3145*t6848)) + t5139*t5177*(t2281*t2756 + t1921*t327*t6764 + t1657*t6779 + t2620*t6901 + t3031*t6907 + t2938*t6920 + t3437*t6929 + t3255*t6935 - 0.02159*(t3145*t6929 + t3111*t6935) - 1.11344*(t3111*t6929 - 1.*t3145*t6935)))*var2[8] + (t5139*t5177*(t2954*t3031 + t2371*t6998 + t2756*t7003 + t2954*t7010 + t2938*t7014 + t3076*t7017 + t3437*t7020 + t3255*t7024 - 0.02159*(t3145*t7020 + t3111*t7024) - 1.11344*(t3111*t7020 - 1.*t3145*t7024)) + t3735*t5177*(-1.*t3031*t4929 - 1.*t4815*t6998 - 1.*t4903*t7003 - 1.*t4929*t7010 - 1.*t5000*t7017 - 1.*t2938*t7047 - 1.*t3437*t7053 - 1.*t3255*t7058 + 0.02159*(t3145*t7053 + t3111*t7058) + 1.11344*(t3111*t7053 - 1.*t3145*t7058)))*var2[9] + (t5139*t5177*(-1.11344*(-1.*t3111*t3311 - 1.*t3145*t3618) - 0.02159*t3679 + t3311*t6956 + t3618*t6959) + t3735*t5177*(1.11344*(-1.*t3111*t5035 - 1.*t3145*t5058) + 0.02159*t5082 - 1.*t5035*t6956 - 1.*t5058*t6959))*var2[13];
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

void leftLegPitchVelocity_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}




