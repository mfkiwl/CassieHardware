/*
 * Automatically Generated from Mathematica.
 * Fri 15 Oct 2021 13:09:09 GMT-07:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "yaRightStance_new.hh"
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
  double t69;
  double t34;
  double t74;
  double t59;
  double t78;
  double t64;
  double t87;
  double t89;
  double t209;
  double t214;
  double t237;
  double t246;
  double t133;
  double t177;
  double t375;
  double t312;
  double t340;
  double t342;
  double t478;
  double t491;
  double t493;
  double t511;
  double t514;
  double t546;
  double t563;
  double t578;
  double t579;
  double t582;
  double t635;
  double t636;
  double t644;
  double t661;
  double t667;
  double t669;
  double t724;
  double t737;
  double t741;
  double t746;
  double t812;
  double t819;
  double t821;
  double t835;
  double t842;
  double t844;
  double t882;
  double t892;
  double t894;
  double t900;
  double t911;
  double t912;
  double t915;
  double t960;
  double t962;
  double t964;
  double t973;
  double t976;
  double t986;
  double t987;
  double t1002;
  double t1010;
  double t1012;
  double t1019;
  double t1020;
  double t1023;
  double t1027;
  double t1040;
  double t1043;
  double t1045;
  double t1059;
  double t1073;
  double t1075;
  double t383;
  double t426;
  double t1122;
  double t242;
  double t281;
  double t284;
  double t1140;
  double t451;
  double t453;
  double t457;
  double t590;
  double t594;
  double t598;
  double t1161;
  double t1170;
  double t552;
  double t569;
  double t573;
  double t608;
  double t612;
  double t619;
  double t1199;
  double t1203;
  double t715;
  double t731;
  double t734;
  double t788;
  double t809;
  double t810;
  double t1242;
  double t1266;
  double t877;
  double t885;
  double t886;
  double t908;
  double t909;
  double t910;
  double t1313;
  double t1315;
  double t967;
  double t974;
  double t975;
  double t997;
  double t998;
  double t999;
  double t1403;
  double t1404;
  double t1408;
  double t1413;
  double t1353;
  double t1359;
  double t1420;
  double t1412;
  double t1461;
  double t1553;
  double t1568;
  double t1477;
  double t1608;
  double t1463;
  double t1630;
  double t1432;
  double t1580;
  double t1414;
  double t1025;
  double t1032;
  double t1035;
  double t1054;
  double t1055;
  double t1056;
  double t1077;
  double t1079;
  double t1081;
  double t1090;
  double t1091;
  double t1092;
  double t1133;
  double t1693;
  double t1706;
  double t1697;
  double t1699;
  double t1705;
  double t1707;
  double t1719;
  double t1725;
  double t1726;
  double t1708;
  double t1712;
  double t1713;
  double t1737;
  double t1740;
  double t1741;
  double t1743;
  double t1742;
  double t1745;
  double t1749;
  double t1751;
  double t1752;
  double t1758;
  double t1765;
  double t1769;
  double t1771;
  double t1773;
  double t1774;
  double t1785;
  double t1795;
  double t1807;
  double t1836;
  double t1841;
  double t1845;
  double t1852;
  double t1846;
  double t1854;
  double t1866;
  double t1867;
  double t1873;
  double t1875;
  double t1878;
  double t1879;
  double t1883;
  double t1884;
  double t1900;
  double t1933;
  double t1941;
  double t1942;
  double t1947;
  double t1906;
  double t1909;
  double t1912;
  double t1946;
  double t1949;
  double t1961;
  double t1964;
  double t1971;
  double t1977;
  double t1982;
  double t1985;
  double t1986;
  double t1988;
  double t1989;
  double t1998;
  double t2013;
  double t2021;
  double t2062;
  double t2063;
  double t2064;
  double t2066;
  double t2067;
  double t2078;
  double t2173;
  double t2179;
  double t2187;
  double t2201;
  double t2068;
  double t2080;
  double t2084;
  double t2085;
  double t2087;
  double t2095;
  double t2097;
  double t2102;
  double t2229;
  double t2108;
  double t2114;
  double t2119;
  double t2272;
  double t2200;
  double t2130;
  double t2133;
  double t2143;
  double t2314;
  double t2297;
  double t2232;
  double t2337;
  double t2214;
  double t2436;
  double t2264;
  double t2373;
  double t2273;
  double t2498;
  double t2499;
  double t2502;
  double t2511;
  double t191;
  double t2567;
  double t2570;
  double t2573;
  double t2580;
  double t2591;
  double t2594;
  double t2598;
  double t2619;
  double t2625;
  double t2627;
  double t2635;
  double t2638;
  double t2643;
  double t2648;
  double t2650;
  double t2652;
  double t2656;
  double t2658;
  double t2660;
  double t2674;
  double t2676;
  double t2683;
  double t2691;
  double t2693;
  double t2694;
  double t2697;
  double t2699;
  double t2701;
  double t2707;
  double t2708;
  double t2710;
  double t2726;
  double t2727;
  double t2741;
  double t2743;
  double t2744;
  double t2750;
  double t2751;
  double t2755;
  double t2757;
  double t2764;
  double t2768;
  double t2770;
  double t2771;
  double t2504;
  double t2512;
  double t2513;
  double t2774;
  double t2776;
  double t2780;
  double t2784;
  double t2785;
  double t2786;
  double t2515;
  double t2519;
  double t2520;
  double t2788;
  double t2789;
  double t2790;
  double t2794;
  double t2795;
  double t2796;
  double t2840;
  double t2842;
  double t2847;
  double t2851;
  double t2853;
  double t2856;
  double t2858;
  double t2861;
  double t2866;
  double t2873;
  double t2875;
  double t2880;
  double t2890;
  double t2892;
  double t2894;
  double t2908;
  double t2910;
  double t2911;
  double t2927;
  double t2930;
  double t2934;
  double t2944;
  double t2945;
  double t2946;
  double t2954;
  double t2955;
  double t2959;
  double t3004;
  double t3005;
  double t3007;
  double t3016;
  double t3018;
  double t3019;
  double t3028;
  double t3029;
  double t3033;
  double t3037;
  double t3039;
  double t3047;
  double t3049;
  double t3050;
  double t3053;
  double t3075;
  double t3076;
  double t3089;
  double t3091;
  double t3095;
  double t3101;
  double t3168;
  double t3169;
  double t3170;
  double t3156;
  double t3157;
  double t3161;
  double t3177;
  double t3184;
  double t3185;
  double t3201;
  double t3204;
  double t3205;
  double t3214;
  double t3218;
  double t3220;
  double t3229;
  double t3232;
  double t3233;
  double t3238;
  double t3240;
  double t3241;
  double t3248;
  double t3257;
  double t3260;
  double t3269;
  double t3270;
  double t3273;
  double t3277;
  double t3278;
  double t3279;
  double t3293;
  double t3294;
  double t3295;
  double t3331;
  double t3333;
  double t3335;
  double t3363;
  double t3369;
  double t3370;
  double t3372;
  double t3377;
  double t3378;
  double t3381;
  double t3384;
  double t3386;
  double t3389;
  double t3390;
  double t3391;
  double t3395;
  double t3396;
  double t3397;
  double t3399;
  double t3401;
  double t3402;
  double t3408;
  double t3410;
  double t3422;
  double t3432;
  double t3433;
  double t3440;
  double t2525;
  double t2528;
  double t2532;
  double t2536;
  double t2539;
  double t2541;
  t69 = Cos(var1[3]);
  t34 = Cos(var1[5]);
  t74 = Sin(var1[4]);
  t59 = Sin(var1[3]);
  t78 = Sin(var1[5]);
  t64 = t34*t59;
  t87 = t69*t74*t78;
  t89 = t64 + t87;
  t209 = Cos(var1[15]);
  t214 = -1.*t209;
  t237 = 1. + t214;
  t246 = Sin(var1[15]);
  t133 = Cos(var1[4]);
  t177 = Sin(var1[14]);
  t375 = Cos(var1[14]);
  t312 = -1.*t69*t34*t74;
  t340 = t59*t78;
  t342 = t312 + t340;
  t478 = t69*t133*t177;
  t491 = t375*t89;
  t493 = t478 + t491;
  t511 = Cos(var1[16]);
  t514 = -1.*t511;
  t546 = 1. + t514;
  t563 = Sin(var1[16]);
  t578 = t375*t69*t133;
  t579 = -1.*t177*t89;
  t582 = t578 + t579;
  t635 = t209*t342;
  t636 = t246*t493;
  t644 = t635 + t636;
  t661 = Cos(var1[17]);
  t667 = -1.*t661;
  t669 = 1. + t667;
  t724 = Sin(var1[17]);
  t737 = t563*t582;
  t741 = t511*t644;
  t746 = t737 + t741;
  t812 = t511*t582;
  t819 = -1.*t563*t644;
  t821 = t812 + t819;
  t835 = Cos(var1[18]);
  t842 = -1.*t835;
  t844 = 1. + t842;
  t882 = Sin(var1[18]);
  t892 = -1.*t724*t746;
  t894 = t661*t821;
  t900 = t892 + t894;
  t911 = t661*t746;
  t912 = t724*t821;
  t915 = t911 + t912;
  t960 = Cos(var1[19]);
  t962 = -1.*t960;
  t964 = 1. + t962;
  t973 = Sin(var1[19]);
  t976 = t882*t900;
  t986 = t835*t915;
  t987 = t976 + t986;
  t1002 = t835*t900;
  t1010 = -1.*t882*t915;
  t1012 = t1002 + t1010;
  t1019 = Cos(var1[21]);
  t1020 = -1.*t1019;
  t1023 = 1. + t1020;
  t1027 = Sin(var1[21]);
  t1040 = -1.*t973*t987;
  t1043 = t960*t1012;
  t1045 = t1040 + t1043;
  t1059 = t960*t987;
  t1073 = t973*t1012;
  t1075 = t1059 + t1073;
  t383 = -1.*t375;
  t426 = 1. + t383;
  t1122 = 0.135*t69*t133*t177;
  t242 = -0.049*t237;
  t281 = -0.135*t246;
  t284 = t242 + t281;
  t1140 = -0.135*t426*t89;
  t451 = -0.135*t237;
  t453 = 0.049*t246;
  t457 = t451 + t453;
  t590 = -1.*t246*t342;
  t594 = t209*t493;
  t598 = t590 + t594;
  t1161 = t284*t342;
  t1170 = t457*t493;
  t552 = -0.09*t546;
  t569 = 0.049*t563;
  t573 = t552 + t569;
  t608 = -0.049*t546;
  t612 = -0.09*t563;
  t619 = t608 + t612;
  t1199 = t573*t582;
  t1203 = t619*t644;
  t715 = -0.049*t669;
  t731 = -0.21*t724;
  t734 = t715 + t731;
  t788 = -0.21*t669;
  t809 = 0.049*t724;
  t810 = t788 + t809;
  t1242 = t734*t746;
  t1266 = t810*t821;
  t877 = -0.27068*t844;
  t885 = 0.00159*t882;
  t886 = t877 + t885;
  t908 = -0.00159*t844;
  t909 = -0.27068*t882;
  t910 = t908 + t909;
  t1313 = t886*t900;
  t1315 = t910*t915;
  t967 = 0.01841*t964;
  t974 = -0.70544*t973;
  t975 = t967 + t974;
  t997 = -0.70544*t964;
  t998 = -0.01841*t973;
  t999 = t997 + t998;
  t1403 = Cos(var1[20]);
  t1404 = -1.*t1403;
  t1408 = 1. + t1404;
  t1413 = Sin(var1[20]);
  t1353 = t975*t987;
  t1359 = t999*t1012;
  t1420 = 0.005481192614*t1408;
  t1412 = 0.07769774964800001*t1408;
  t1461 = -0.0004284921280000001*t1408;
  t1553 = 0.005498*t1413;
  t1568 = 0.996943*t1413;
  t1477 = -0.077936*t1413;
  t1608 = 0.0004284921280000001*t1408;
  t1463 = -0.996943*t1413;
  t1630 = -0.005481192614*t1408;
  t1432 = 0.077936*t1413;
  t1580 = -0.07769774964800001*t1408;
  t1414 = -0.005498*t1413;
  t1025 = -1.11344*t1023;
  t1032 = 0.02159*t1027;
  t1035 = t1025 + t1032;
  t1054 = -0.02159*t1023;
  t1055 = -1.11344*t1027;
  t1056 = t1054 + t1055;
  t1077 = t1027*t1045;
  t1079 = t1019*t1075;
  t1081 = t1077 + t1079;
  t1090 = t1019*t1045;
  t1091 = -1.*t1027*t1075;
  t1092 = t1090 + t1091;
  t1133 = -0.0233*t342;
  t1693 = Cos(var1[6]);
  t1706 = Sin(var1[6]);
  t1697 = -1.*t1693;
  t1699 = 1. + t1697;
  t1705 = 0.135*t1699*t89;
  t1707 = -0.135*t69*t133*t1706;
  t1719 = t69*t133*t1693;
  t1725 = -1.*t89*t1706;
  t1726 = t1719 + t1725;
  t1708 = t1693*t89;
  t1712 = t69*t133*t1706;
  t1713 = t1708 + t1712;
  t1737 = Cos(var1[7]);
  t1740 = -1.*t1737;
  t1741 = 1. + t1740;
  t1743 = Sin(var1[7]);
  t1742 = 0.135*t1741;
  t1745 = 0.049*t1743;
  t1749 = t1742 + t1745;
  t1751 = t1713*t1749;
  t1752 = -0.049*t1741;
  t1758 = 0.135*t1743;
  t1765 = t1752 + t1758;
  t1769 = t342*t1765;
  t1771 = t1737*t1713;
  t1773 = -1.*t342*t1743;
  t1774 = t1771 + t1773;
  t1785 = t1737*t342;
  t1795 = t1713*t1743;
  t1807 = t1785 + t1795;
  t1836 = Cos(var1[8]);
  t1841 = -1.*t1836;
  t1845 = 1. + t1841;
  t1852 = Sin(var1[8]);
  t1846 = -0.049*t1845;
  t1854 = -0.09*t1852;
  t1866 = t1846 + t1854;
  t1867 = t1807*t1866;
  t1873 = -0.09*t1845;
  t1875 = 0.049*t1852;
  t1878 = t1873 + t1875;
  t1879 = t1726*t1878;
  t1883 = t1836*t1807;
  t1884 = t1726*t1852;
  t1900 = t1883 + t1884;
  t1933 = Cos(var1[9]);
  t1941 = -1.*t1933;
  t1942 = 1. + t1941;
  t1947 = Sin(var1[9]);
  t1906 = t1836*t1726;
  t1909 = -1.*t1807*t1852;
  t1912 = t1906 + t1909;
  t1946 = -0.049*t1942;
  t1949 = -0.21*t1947;
  t1961 = t1946 + t1949;
  t1964 = t1961*t1900;
  t1971 = -0.21*t1942;
  t1977 = 0.049*t1947;
  t1982 = t1971 + t1977;
  t1985 = t1982*t1912;
  t1986 = -1.*t1947*t1900;
  t1988 = t1933*t1912;
  t1989 = t1986 + t1988;
  t1998 = t1933*t1900;
  t2013 = t1947*t1912;
  t2021 = t1998 + t2013;
  t2062 = -1.*var1[9];
  t2063 = 0.226893 + t2062;
  t2064 = Cos(t2063);
  t2066 = -1.*t2064;
  t2067 = 1. + t2066;
  t2078 = Sin(t2063);
  t2173 = Cos(var1[12]);
  t2179 = -1.*t2173;
  t2187 = 1. + t2179;
  t2201 = Sin(var1[12]);
  t2068 = -0.70544*t2067;
  t2080 = -0.01841*t2078;
  t2084 = t2068 + t2080;
  t2085 = t2084*t1989;
  t2087 = 0.01841*t2067;
  t2095 = -0.70544*t2078;
  t2097 = t2087 + t2095;
  t2102 = t2097*t2021;
  t2229 = -0.07769774964800001*t2187;
  t2108 = t2078*t1989;
  t2114 = t2064*t2021;
  t2119 = t2108 + t2114;
  t2272 = -0.0004284921280000001*t2187;
  t2200 = -0.005481192614*t2187;
  t2130 = t2064*t1989;
  t2133 = -1.*t2078*t2021;
  t2143 = t2130 + t2133;
  t2314 = 0.077936*t2201;
  t2297 = -0.996943*t2201;
  t2232 = 0.005498*t2201;
  t2337 = 0.005481192614*t2187;
  t2214 = -0.077936*t2201;
  t2436 = 0.07769774964800001*t2187;
  t2264 = -0.005498*t2201;
  t2373 = 0.0004284921280000001*t2187;
  t2273 = 0.996943*t2201;
  t2498 = Cos(var1[13]);
  t2499 = -1.*t2498;
  t2502 = 1. + t2499;
  t2511 = Sin(var1[13]);
  t191 = -0.135*t69*t133*t177;
  t2567 = t375*t59;
  t2570 = t478 + t2567;
  t2573 = -1.*t177*t59;
  t2580 = t578 + t2573;
  t2591 = t246*t2570;
  t2594 = -1.*t209*t69*t74;
  t2598 = t2591 + t2594;
  t2619 = t563*t2580;
  t2625 = t511*t2598;
  t2627 = t2619 + t2625;
  t2635 = t511*t2580;
  t2638 = -1.*t563*t2598;
  t2643 = t2635 + t2638;
  t2648 = -1.*t724*t2627;
  t2650 = t661*t2643;
  t2652 = t2648 + t2650;
  t2656 = t661*t2627;
  t2658 = t724*t2643;
  t2660 = t2656 + t2658;
  t2674 = t882*t2652;
  t2676 = t835*t2660;
  t2683 = t2674 + t2676;
  t2691 = t835*t2652;
  t2693 = -1.*t882*t2660;
  t2694 = t2691 + t2693;
  t2697 = -1.*t973*t2683;
  t2699 = t960*t2694;
  t2701 = t2697 + t2699;
  t2707 = t960*t2683;
  t2708 = t973*t2694;
  t2710 = t2707 + t2708;
  t2726 = t1693*t59;
  t2727 = t2726 + t1712;
  t2741 = -1.*t69*t1737*t74;
  t2743 = t2727*t1743;
  t2744 = t2741 + t2743;
  t2750 = -1.*t59*t1706;
  t2751 = t1719 + t2750;
  t2755 = t1836*t2744;
  t2757 = t2751*t1852;
  t2764 = t2755 + t2757;
  t2768 = t1836*t2751;
  t2770 = -1.*t2744*t1852;
  t2771 = t2768 + t2770;
  t2504 = -0.02159*t2502;
  t2512 = -1.11344*t2511;
  t2513 = t2504 + t2512;
  t2774 = -1.*t1947*t2764;
  t2776 = t1933*t2771;
  t2780 = t2774 + t2776;
  t2784 = t1933*t2764;
  t2785 = t1947*t2771;
  t2786 = t2784 + t2785;
  t2515 = -1.11344*t2502;
  t2519 = 0.02159*t2511;
  t2520 = t2515 + t2519;
  t2788 = t2078*t2780;
  t2789 = t2064*t2786;
  t2790 = t2788 + t2789;
  t2794 = t2064*t2780;
  t2795 = -1.*t2078*t2786;
  t2796 = t2794 + t2795;
  t2840 = t209*t133;
  t2842 = t177*t246*t74;
  t2847 = t2840 + t2842;
  t2851 = t375*t563*t74;
  t2853 = t511*t2847;
  t2856 = t2851 + t2853;
  t2858 = t375*t511*t74;
  t2861 = -1.*t563*t2847;
  t2866 = t2858 + t2861;
  t2873 = -1.*t724*t2856;
  t2875 = t661*t2866;
  t2880 = t2873 + t2875;
  t2890 = t661*t2856;
  t2892 = t724*t2866;
  t2894 = t2890 + t2892;
  t2908 = t882*t2880;
  t2910 = t835*t2894;
  t2911 = t2908 + t2910;
  t2927 = t835*t2880;
  t2930 = -1.*t882*t2894;
  t2934 = t2927 + t2930;
  t2944 = -1.*t973*t2911;
  t2945 = t960*t2934;
  t2946 = t2944 + t2945;
  t2954 = t960*t2911;
  t2955 = t973*t2934;
  t2959 = t2954 + t2955;
  t3004 = t133*t1737;
  t3005 = t74*t1706*t1743;
  t3007 = t3004 + t3005;
  t3016 = t1836*t3007;
  t3018 = t1693*t74*t1852;
  t3019 = t3016 + t3018;
  t3028 = t1693*t1836*t74;
  t3029 = -1.*t3007*t1852;
  t3033 = t3028 + t3029;
  t3037 = -1.*t1947*t3019;
  t3039 = t1933*t3033;
  t3047 = t3037 + t3039;
  t3049 = t1933*t3019;
  t3050 = t1947*t3033;
  t3053 = t3049 + t3050;
  t3075 = t2078*t3047;
  t3076 = t2064*t3053;
  t3089 = t3075 + t3076;
  t3091 = t2064*t3047;
  t3095 = -1.*t2078*t3053;
  t3101 = t3091 + t3095;
  t3168 = t375*t69;
  t3169 = -1.*t133*t177*t59;
  t3170 = t3168 + t3169;
  t3156 = -1.*t69*t177;
  t3157 = -1.*t375*t133*t59;
  t3161 = t3156 + t3157;
  t3177 = t246*t3170;
  t3184 = t209*t59*t74;
  t3185 = t3177 + t3184;
  t3201 = t563*t3161;
  t3204 = t511*t3185;
  t3205 = t3201 + t3204;
  t3214 = t511*t3161;
  t3218 = -1.*t563*t3185;
  t3220 = t3214 + t3218;
  t3229 = -1.*t724*t3205;
  t3232 = t661*t3220;
  t3233 = t3229 + t3232;
  t3238 = t661*t3205;
  t3240 = t724*t3220;
  t3241 = t3238 + t3240;
  t3248 = t882*t3233;
  t3257 = t835*t3241;
  t3260 = t3248 + t3257;
  t3269 = t835*t3233;
  t3270 = -1.*t882*t3241;
  t3273 = t3269 + t3270;
  t3277 = -1.*t973*t3260;
  t3278 = t960*t3273;
  t3279 = t3277 + t3278;
  t3293 = t960*t3260;
  t3294 = t973*t3273;
  t3295 = t3293 + t3294;
  t3331 = t69*t1693;
  t3333 = -1.*t133*t59*t1706;
  t3335 = t3331 + t3333;
  t3363 = t1737*t59*t74;
  t3369 = t3335*t1743;
  t3370 = t3363 + t3369;
  t3372 = -1.*t133*t1693*t59;
  t3377 = -1.*t69*t1706;
  t3378 = t3372 + t3377;
  t3381 = t1836*t3370;
  t3384 = t3378*t1852;
  t3386 = t3381 + t3384;
  t3389 = t1836*t3378;
  t3390 = -1.*t3370*t1852;
  t3391 = t3389 + t3390;
  t3395 = -1.*t1947*t3386;
  t3396 = t1933*t3391;
  t3397 = t3395 + t3396;
  t3399 = t1933*t3386;
  t3401 = t1947*t3391;
  t3402 = t3399 + t3401;
  t3408 = t2078*t3397;
  t3410 = t2064*t3402;
  t3422 = t3408 + t3410;
  t3432 = t2064*t3397;
  t3433 = -1.*t2078*t3402;
  t3440 = t3432 + t3433;
  t2525 = -1.*t2511*t2119;
  t2528 = t2498*t2143;
  t2532 = t2525 + t2528;
  t2536 = t2498*t2119;
  t2539 = t2511*t2143;
  t2541 = t2536 + t2539;
  p_output1[0]=t89;
  p_output1[1]=t34*t69*t74 - 1.*t59*t78;
  p_output1[2]=var1[15];
  p_output1[3]=-1.*t1035*t1045 - 1.*t1056*t1075 + 0.02159*t1081 + 1.11344*t1092 + t191 - 1.*t284*t342 - 1.*t457*t493 - 1.*t573*t582 + 0.1305*t598 - 1.*t619*t644 - 1.*t734*t746 - 1.*t810*t821 + 0.135*t426*t89 - 1.*t886*t900 - 1.*t910*t915 - 1.*t975*t987 - 1.*t1012*t999 - 1.*var1[2] + 0.0288377642750394*(1.965608*(t1133 + t1705 + t1707 + 0.1351*t1713 + 0.01793*t1726 + var1[2]) + 1.316608*(t1705 + t1707 - 0.0343*t1726 + t1751 + t1769 + 0.135*t1774 - 0.049*t1807 + var1[2]) + 5.79228*(t1705 + t1707 + t1751 + t1769 + 0.17081*t1774 + t1867 + t1879 - 0.04895*t1900 - 0.14946*t1912 + var1[2]) + 1.03008*(t1705 + t1707 + t1751 + t1769 + 0.132168*t1774 + t1867 + t1879 + t1964 + t1985 - 0.255862*t1989 - 0.007761*t2021 + var1[2]) + 0.763*(t1705 + t1707 + t1751 + t1769 + 0.130288*t1774 + t1867 + t1879 + t1964 + t1985 - 0.45406*t1989 - 0.000421*t2021 + var1[2]) + 1.03*(t1705 + t1707 + t1751 + t1769 + 0.127241*t1774 + t1867 + t1879 + t1964 + t1985 + t2085 + t2102 - 0.004179*t2119 - 0.826587*t2143 + var1[2]) + 0.1498*(t1705 + t1707 + t1751 + t1769 + 0.13064*t1774 + t1867 + t1879 + t1964 + t1985 + t2085 + t2102 + t2119*t2513 + t2143*t2520 - 1.11818*t2532 + 0.00589*t2541 + var1[2]) + 1.965608*(t1122 + t1133 + t1140 - 0.1351*t493 + 0.01793*t582 + var1[2]) + 0.1498*(t1035*t1045 + t1056*t1075 + 0.00589*t1081 - 1.11818*t1092 + t1122 + t1140 + t1161 + t1170 + t1199 + t1203 + t1242 + t1266 + t1313 + t1315 + t1353 + t1359 - 0.13064*t598 + var1[2]) + 1.03*(-0.826587*t1045 - 0.004179*t1075 + t1122 + t1140 + t1161 + t1170 + t1199 + t1203 + t1242 + t1266 + t1313 + t1315 + t1353 + t1359 - 0.127241*t598 + var1[2]) + 1.316608*(t1122 + t1140 + t1161 + t1170 - 0.0343*t582 - 0.135*t598 - 0.049*t644 + var1[2]) + 5.79228*(t1122 + t1140 + t1161 + t1170 + t1199 + t1203 - 0.17081*t598 - 0.04895*t746 - 0.14946*t821 + var1[2]) + 10.33*(0.05066*t342 + 0.02841*t133*t69 + 0.000346*t89 + var1[2]) + 1.03008*(t1122 + t1140 + t1161 + t1170 + t1199 + t1203 + t1242 + t1266 - 0.132168*t598 - 0.255862*t900 - 0.007761*t915 + var1[2]) + 0.763*(-0.45406*t1012 + t1122 + t1140 + t1161 + t1170 + t1199 + t1203 + t1242 + t1266 + t1313 + t1315 - 0.130288*t598 - 0.000421*t987 + var1[2]) + 0.126*(t1705 + t1707 + t1751 + t1769 + t1867 + t1879 + t1964 + t1985 + t2085 + t2102 - 0.617968*(t2143*(1. - 0.999969365345*t2187) + t1774*(t2314 + t2337) + t2119*(t2297 + t2373)) + 0.126739*(t1774*(1. - 0.006104248100000001*t2187) + t2143*(t2214 + t2337) + t2119*(t2232 + t2436)) + 0.01889*(t2119*(1. - 0.993925573253*t2187) + t2143*(t2273 + t2373) + t1774*(t2264 + t2436)) + var1[2] + t1774*(0.000033783761634830594*t2187 - 0.6934341012630001*(t2200 + t2214) - 0.021877537552*(t2229 + t2232) - 2.1934241414728571e-7*var1[12]) + t2119*(-0.021744644052735636*t2187 + 0.005534467322*(t2229 + t2264) - 0.6934341012630001*(t2272 + t2273) - 1.7147089040178687e-8*var1[12]) + t2143*(-0.6934128581485427*t2187 - 0.021877537552*(t2272 + t2297) + 0.005534467322*(t2200 + t2314) - 1.2096424700126054e-9*var1[12])) + 0.126*(t1122 + t1140 + t1161 + t1170 + t1199 + t1203 + t1242 + t1266 + t1313 + t1315 + t1353 + t1359 - 0.126739*(t1075*(t1414 + t1580) + t1045*(t1432 + t1630) + (1. - 0.006104248100000001*t1408)*t598) + 0.01889*(t1075*(1. - 0.993925573253*t1408) + t1045*(t1568 + t1608) + (t1553 + t1580)*t598) - 0.617968*(t1045*(1. - 0.999969365345*t1408) + t1075*(t1463 + t1608) + (t1477 + t1630)*t598) + var1[2] + t1075*(-0.021744644052735636*t1408 - 0.005534467322*(t1412 + t1553) - 0.6934341012630001*(t1461 + t1568) - 1.7147089040178687e-8*var1[20]) + t1045*(-0.6934128581485427*t1408 - 0.021877537552*(t1461 + t1463) - 0.005534467322*(t1420 + t1477) - 1.2096424700126054e-9*var1[20]) + t598*(-0.000033783761634830594*t1408 - 0.021877537552*(t1412 + t1414) - 0.6934341012630001*(t1420 + t1432) + 2.1934241414728571e-7*var1[20])));
  p_output1[4]=t1707 + t191 - 1.*t1035*t2701 - 1.*t1056*t2710 + 0.02159*(t1027*t2701 + t1019*t2710) + 1.11344*(t1019*t2701 - 1.*t1027*t2710) + t1749*t2727 + t1866*t2744 + t1878*t2751 + t1961*t2764 + t1982*t2771 + t2084*t2780 + t2097*t2786 + t2513*t2790 + t2520*t2796 - 1.11344*(-1.*t2511*t2790 + t2498*t2796) - 0.02159*(t2498*t2790 + t2511*t2796) - 1.*t2570*t457 - 1.*t2580*t573 + 0.135*t1699*t59 + 0.135*t426*t59 - 1.*t2598*t619 - 1.*t2627*t734 - 1.*t1765*t69*t74 + t284*t69*t74 + 0.1305*(t1737*t2727 + t1743*t69*t74) + 0.1305*(t209*t2570 + t246*t69*t74) - 1.*t2643*t810 - 1.*t2652*t886 - 1.*t2660*t910 - 1.*t2683*t975 - 1.*t2694*t999;
  p_output1[5]=t133*t1765 - 1.*t133*t284 - 1.*t1035*t2946 - 1.*t1056*t2959 + 0.02159*(t1027*t2946 + t1019*t2959) + 1.11344*(t1019*t2946 - 1.*t1027*t2959) + t1866*t3007 + t1961*t3019 + t1982*t3033 + t2084*t3047 + t2097*t3053 + t2513*t3089 + t2520*t3101 - 1.11344*(-1.*t2511*t3089 + t2498*t3101) - 0.02159*(t2498*t3089 + t2511*t3101) - 1.*t2847*t619 - 1.*t2856*t734 - 0.135*t1706*t74 + t1706*t1749*t74 - 0.135*t177*t74 + t1693*t1878*t74 - 1.*t177*t457*t74 - 1.*t375*t573*t74 + 0.1305*(-1.*t133*t1743 + t1706*t1737*t74) + 0.1305*(-1.*t133*t246 + t177*t209*t74) - 1.*t2866*t810 - 1.*t2880*t886 - 1.*t2894*t910 - 1.*t2911*t975 - 1.*t2934*t999;
  p_output1[6]=-1.*t1035*t3279 - 1.*t1056*t3295 + 0.02159*(t1027*t3279 + t1019*t3295) + 1.11344*(t1019*t3279 - 1.*t1027*t3295) + t1749*t3335 + t1866*t3370 + t1878*t3378 + t1961*t3386 + t1982*t3391 + t2084*t3397 + t2097*t3402 + t2513*t3422 + t2520*t3440 - 1.11344*(-1.*t2511*t3422 + t2498*t3440) - 0.02159*(t2498*t3422 + t2511*t3440) - 1.*t3170*t457 - 1.*t3161*t573 + 0.135*t133*t1706*t59 + 0.135*t133*t177*t59 - 1.*t3185*t619 + 0.135*t1699*t69 + 0.135*t426*t69 - 1.*t3205*t734 + t1765*t59*t74 - 1.*t284*t59*t74 + 0.1305*(t1737*t3335 - 1.*t1743*t59*t74) + 0.1305*(t209*t3170 - 1.*t246*t59*t74) - 1.*t3220*t810 - 1.*t3233*t886 - 1.*t3241*t910 - 1.*t3260*t975 - 1.*t3273*t999;
  p_output1[7]=var1[7];
  p_output1[8]=7.142857142857142*(0. - 0.10724599999999995*t2532 - 0.08999*t2541);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void yaRightStance_new_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




