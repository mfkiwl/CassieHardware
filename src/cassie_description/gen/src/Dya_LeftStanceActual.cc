/*
 * Automatically Generated from Mathematica.
 * Thu 26 Aug 2021 14:19:37 GMT-07:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "Dya_LeftStanceActual.hh"
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
  double t49;
  double t88;
  double t101;
  double t109;
  double t205;
  double t248;
  double t362;
  double t369;
  double t377;
  double t393;
  double t418;
  double t518;
  double t614;
  double t615;
  double t618;
  double t672;
  double t688;
  double t692;
  double t702;
  double t721;
  double t726;
  double t735;
  double t768;
  double t770;
  double t778;
  double t799;
  double t803;
  double t812;
  double t275;
  double t337;
  double t341;
  double t169;
  double t211;
  double t220;
  double t634;
  double t654;
  double t657;
  double t515;
  double t524;
  double t525;
  double t788;
  double t791;
  double t792;
  double t981;
  double t990;
  double t993;
  double t732;
  double t744;
  double t762;
  double t1040;
  double t1056;
  double t1069;
  double t1074;
  double t1075;
  double t74;
  double t246;
  double t268;
  double t360;
  double t621;
  double t700;
  double t780;
  double t830;
  double t842;
  double t845;
  double t871;
  double t884;
  double t899;
  double t909;
  double t914;
  double t920;
  double t930;
  double t938;
  double t939;
  double t943;
  double t944;
  double t1028;
  double t1030;
  double t1066;
  double t1076;
  double t1080;
  double t1084;
  double t1092;
  double t1112;
  double t1121;
  double t1134;
  double t1181;
  double t1200;
  double t1201;
  double t1295;
  double t1301;
  double t1309;
  double t1313;
  double t1326;
  double t1341;
  double t1354;
  double t1356;
  double t932;
  double t1205;
  double t1221;
  double t1224;
  double t1455;
  double t1459;
  double t1463;
  double t1429;
  double t1432;
  double t1434;
  double t1420;
  double t1427;
  double t1259;
  double t1447;
  double t1448;
  double t1450;
  double t1437;
  double t1438;
  double t1312;
  double t1490;
  double t1492;
  double t1534;
  double t1540;
  double t1527;
  double t1529;
  double t1530;
  double t1625;
  double t1628;
  double t1633;
  double t1634;
  double t1636;
  double t1638;
  double t1654;
  double t1657;
  double t1659;
  double t1661;
  double t1669;
  double t1707;
  double t1716;
  double t1718;
  double t1720;
  double t1751;
  double t1752;
  double t1755;
  double t1772;
  double t1776;
  double t1781;
  double t1786;
  double t1822;
  double t1824;
  double t1826;
  double t1758;
  double t1759;
  double t1764;
  double t1637;
  double t1640;
  double t1641;
  double t1645;
  double t1646;
  double t1652;
  double t1724;
  double t1748;
  double t1749;
  double t1687;
  double t1712;
  double t1713;
  double t1933;
  double t1937;
  double t1983;
  double t1783;
  double t1787;
  double t1801;
  double t1830;
  double t1832;
  double t1833;
  double t2020;
  double t2041;
  double t2043;
  double t2054;
  double t2066;
  double t1626;
  double t1630;
  double t1642;
  double t1653;
  double t1723;
  double t1756;
  double t1813;
  double t1840;
  double t1853;
  double t1868;
  double t1870;
  double t1871;
  double t1878;
  double t1879;
  double t1881;
  double t1883;
  double t1885;
  double t1894;
  double t1918;
  double t1923;
  double t1927;
  double t1987;
  double t1993;
  double t2045;
  double t2078;
  double t2079;
  double t2089;
  double t2094;
  double t2096;
  double t2099;
  double t2100;
  double t2103;
  double t2109;
  double t2122;
  double t2200;
  double t2253;
  double t2255;
  double t2274;
  double t2280;
  double t2303;
  double t2306;
  double t2309;
  double t2340;
  double t2342;
  double t2344;
  double t2358;
  double t2359;
  double t2379;
  double t2384;
  double t2401;
  double t2404;
  double t2435;
  double t2440;
  double t2146;
  double t2160;
  double t2161;
  double t2162;
  double t2445;
  double t2446;
  double t2448;
  double t2449;
  double t2454;
  double t2458;
  double t2459;
  double t2312;
  double t2318;
  double t2321;
  double t2324;
  double t2325;
  double t2326;
  double t2441;
  double t2460;
  double t2464;
  double t2465;
  double t1891;
  double t2130;
  double t2131;
  double t2141;
  double t2665;
  double t2686;
  double t2728;
  double t2571;
  double t2580;
  double t2582;
  double t2583;
  double t2591;
  double t2185;
  double t2620;
  double t2633;
  double t2634;
  double t2607;
  double t2616;
  double t2265;
  double t2930;
  double t2955;
  double t2764;
  double t2767;
  double t2792;
  double t2812;
  double t2815;
  double t2816;
  double t2472;
  double t2473;
  double t2973;
  double t2984;
  double t2990;
  double t3003;
  double t3021;
  double t3023;
  double t3268;
  double t3275;
  double t3280;
  double t3305;
  double t3312;
  double t3383;
  double t3387;
  double t3409;
  double t3328;
  double t3336;
  double t3347;
  t49 = Cos(var1[8]);
  t88 = Cos(var1[9]);
  t101 = -1.*t88;
  t109 = 1. + t101;
  t205 = Sin(var1[9]);
  t248 = Sin(var1[8]);
  t362 = -1.*var1[9];
  t369 = 0.226893 + t362;
  t377 = Cos(t369);
  t393 = -1.*t377;
  t418 = 1. + t393;
  t518 = Sin(t369);
  t614 = -1.*t49*t205;
  t615 = -1.*t88*t248;
  t618 = t614 + t615;
  t672 = t88*t49;
  t688 = -1.*t205*t248;
  t692 = t672 + t688;
  t702 = Cos(var1[13]);
  t721 = -1.*t702;
  t726 = 1. + t721;
  t735 = Sin(var1[13]);
  t768 = t518*t618;
  t770 = t377*t692;
  t778 = t768 + t770;
  t799 = t377*t618;
  t803 = -1.*t518*t692;
  t812 = t799 + t803;
  t275 = -0.21*t109;
  t337 = 0.049*t205;
  t341 = t275 + t337;
  t169 = -0.049*t109;
  t211 = -0.21*t205;
  t220 = t169 + t211;
  t634 = 0.01841*t418;
  t654 = -0.70544*t518;
  t657 = t634 + t654;
  t515 = -0.70544*t418;
  t524 = -0.01841*t518;
  t525 = t515 + t524;
  t788 = -1.11344*t726;
  t791 = 0.02159*t735;
  t792 = t788 + t791;
  t981 = t49*t205;
  t990 = t88*t248;
  t993 = t981 + t990;
  t732 = -0.02159*t726;
  t744 = -1.11344*t735;
  t762 = t732 + t744;
  t1040 = -1.*t518*t993;
  t1056 = t1040 + t770;
  t1069 = t377*t993;
  t1074 = t518*t692;
  t1075 = t1069 + t1074;
  t74 = 0.049*t49;
  t246 = t49*t220;
  t268 = -0.09*t248;
  t360 = -1.*t341*t248;
  t621 = t525*t618;
  t700 = t657*t692;
  t780 = t762*t778;
  t830 = t792*t812;
  t842 = -1.*t735*t778;
  t845 = t702*t812;
  t871 = t842 + t845;
  t884 = -1.11344*t871;
  t899 = t702*t778;
  t909 = t735*t812;
  t914 = t899 + t909;
  t920 = -0.02159*t914;
  t930 = t74 + t246 + t268 + t360 + t621 + t700 + t780 + t830 + t884 + t920;
  t938 = 0.09*t49;
  t939 = t49*t341;
  t943 = 0.049*t248;
  t944 = t220*t248;
  t1028 = t657*t993;
  t1030 = t525*t692;
  t1066 = t792*t1056;
  t1076 = t762*t1075;
  t1080 = t735*t1056;
  t1084 = t702*t1075;
  t1092 = t1080 + t1084;
  t1112 = -0.02159*t1092;
  t1121 = t702*t1056;
  t1134 = -1.*t735*t1075;
  t1181 = t1121 + t1134;
  t1200 = -1.11344*t1181;
  t1201 = t938 + t939 + t943 + t944 + t1028 + t1030 + t1066 + t1076 + t1112 + t1200;
  t1295 = -1.*t88*t49;
  t1301 = t205*t248;
  t1309 = t1295 + t1301;
  t1313 = -1.*t518*t618;
  t1326 = t377*t1309;
  t1341 = t1313 + t1326;
  t1354 = t518*t1309;
  t1356 = t799 + t1354;
  t932 = Power(t930,2);
  t1205 = Power(t1201,2);
  t1221 = 0.00002025 + t932 + t1205;
  t1224 = 1/Sqrt(t1221);
  t1455 = t799 + t1069;
  t1459 = t518*t993;
  t1463 = t768 + t1459;
  t1429 = -0.21*t88;
  t1432 = -0.049*t205;
  t1434 = t1429 + t1432;
  t1420 = 0.049*t88;
  t1427 = t1420 + t211;
  t1259 = t657*t618;
  t1447 = 0.01841*t377;
  t1448 = 0.70544*t518;
  t1450 = t1447 + t1448;
  t1437 = 0.70544*t377;
  t1438 = t1437 + t524;
  t1312 = t525*t1309;
  t1490 = t770 + t1326;
  t1492 = t1074 + t1354;
  t1534 = 0.02159*t702;
  t1540 = t1534 + t744;
  t1527 = -1.11344*t702;
  t1529 = -0.02159*t735;
  t1530 = t1527 + t1529;
  t1625 = Cos(var1[16]);
  t1628 = Sin(var1[16]);
  t1633 = Cos(var1[17]);
  t1634 = -1.*t1633;
  t1636 = 1. + t1634;
  t1638 = Sin(var1[17]);
  t1654 = -1.*var1[17];
  t1657 = 0.226893 + t1654;
  t1659 = Cos(t1657);
  t1661 = -1.*t1659;
  t1669 = 1. + t1661;
  t1707 = Sin(t1657);
  t1716 = -1.*t1633*t1628;
  t1718 = -1.*t1625*t1638;
  t1720 = t1716 + t1718;
  t1751 = t1625*t1633;
  t1752 = -1.*t1628*t1638;
  t1755 = t1751 + t1752;
  t1772 = Cos(var1[21]);
  t1776 = -1.*t1772;
  t1781 = 1. + t1776;
  t1786 = Sin(var1[21]);
  t1822 = t1659*t1720;
  t1824 = -1.*t1707*t1755;
  t1826 = t1822 + t1824;
  t1758 = t1707*t1720;
  t1759 = t1659*t1755;
  t1764 = t1758 + t1759;
  t1637 = -0.049*t1636;
  t1640 = -0.21*t1638;
  t1641 = t1637 + t1640;
  t1645 = -0.21*t1636;
  t1646 = 0.049*t1638;
  t1652 = t1645 + t1646;
  t1724 = 0.01841*t1669;
  t1748 = -0.70544*t1707;
  t1749 = t1724 + t1748;
  t1687 = -0.70544*t1669;
  t1712 = -0.01841*t1707;
  t1713 = t1687 + t1712;
  t1933 = t1633*t1628;
  t1937 = t1625*t1638;
  t1983 = t1933 + t1937;
  t1783 = -0.02159*t1781;
  t1787 = -1.11344*t1786;
  t1801 = t1783 + t1787;
  t1830 = -1.11344*t1781;
  t1832 = 0.02159*t1786;
  t1833 = t1830 + t1832;
  t2020 = t1659*t1983;
  t2041 = t1707*t1755;
  t2043 = t2020 + t2041;
  t2054 = -1.*t1707*t1983;
  t2066 = t2054 + t1759;
  t1626 = 0.049*t1625;
  t1630 = -0.09*t1628;
  t1642 = t1625*t1641;
  t1653 = -1.*t1628*t1652;
  t1723 = t1713*t1720;
  t1756 = t1749*t1755;
  t1813 = t1764*t1801;
  t1840 = t1826*t1833;
  t1853 = t1772*t1826;
  t1868 = -1.*t1764*t1786;
  t1870 = t1853 + t1868;
  t1871 = -1.11344*t1870;
  t1878 = t1772*t1764;
  t1879 = t1826*t1786;
  t1881 = t1878 + t1879;
  t1883 = -0.02159*t1881;
  t1885 = t1626 + t1630 + t1642 + t1653 + t1723 + t1756 + t1813 + t1840 + t1871 + t1883;
  t1894 = 0.09*t1625;
  t1918 = 0.049*t1628;
  t1923 = t1628*t1641;
  t1927 = t1625*t1652;
  t1987 = t1749*t1983;
  t1993 = t1713*t1755;
  t2045 = t2043*t1801;
  t2078 = t2066*t1833;
  t2079 = t1772*t2043;
  t2089 = t2066*t1786;
  t2094 = t2079 + t2089;
  t2096 = -0.02159*t2094;
  t2099 = t1772*t2066;
  t2100 = -1.*t2043*t1786;
  t2103 = t2099 + t2100;
  t2109 = -1.11344*t2103;
  t2122 = t1894 + t1918 + t1923 + t1927 + t1987 + t1993 + t2045 + t2078 + t2096 + t2109;
  t2200 = -1.*t1625*t1633;
  t2253 = t1628*t1638;
  t2255 = t2200 + t2253;
  t2274 = t1707*t2255;
  t2280 = t1822 + t2274;
  t2303 = -1.*t1707*t1720;
  t2306 = t1659*t2255;
  t2309 = t2303 + t2306;
  t2340 = -0.049*t1625;
  t2342 = 0.09*t1628;
  t2344 = -1.*t1625*t1641;
  t2358 = t1628*t1652;
  t2359 = -1.*t1713*t1720;
  t2379 = -1.*t1749*t1755;
  t2384 = -1.*t1764*t1801;
  t2401 = -1.*t1826*t1833;
  t2404 = 1.11344*t1870;
  t2435 = 0.02159*t1881;
  t2440 = t2340 + t2342 + t2344 + t2358 + t2359 + t2379 + t2384 + t2401 + t2404 + t2435;
  t2146 = -0.09*t1625;
  t2160 = -0.049*t1628;
  t2161 = -1.*t1628*t1641;
  t2162 = -1.*t1625*t1652;
  t2445 = -1.*t1749*t1983;
  t2446 = -1.*t1713*t1755;
  t2448 = -1.*t2043*t1801;
  t2449 = -1.*t2066*t1833;
  t2454 = 0.02159*t2094;
  t2458 = 1.11344*t2103;
  t2459 = t2146 + t2160 + t2161 + t2162 + t2445 + t2446 + t2448 + t2449 + t2454 + t2458;
  t2312 = t1772*t2280;
  t2318 = t2309*t1786;
  t2321 = t2312 + t2318;
  t2324 = t1772*t2309;
  t2325 = -1.*t2280*t1786;
  t2326 = t2324 + t2325;
  t2441 = Power(t2440,2);
  t2460 = Power(t2459,2);
  t2464 = t2441 + t2460;
  t2465 = 1/t2464;
  t1891 = Power(t1885,2);
  t2130 = Power(t2122,2);
  t2131 = 0.00002025 + t1891 + t2130;
  t2141 = 1/Sqrt(t2131);
  t2665 = t1707*t1983;
  t2686 = t1758 + t2665;
  t2728 = t1822 + t2020;
  t2571 = 0.049*t1633;
  t2580 = t2571 + t1640;
  t2582 = -0.21*t1633;
  t2583 = -0.049*t1638;
  t2591 = t2582 + t2583;
  t2185 = t1749*t1720;
  t2620 = 0.01841*t1659;
  t2633 = 0.70544*t1707;
  t2634 = t2620 + t2633;
  t2607 = 0.70544*t1659;
  t2616 = t2607 + t1712;
  t2265 = t1713*t2255;
  t2930 = t2041 + t2274;
  t2955 = t1759 + t2306;
  t2764 = t1772*t2686;
  t2767 = t2728*t1786;
  t2792 = t2764 + t2767;
  t2812 = t1772*t2728;
  t2815 = -1.*t2686*t1786;
  t2816 = t2812 + t2815;
  t2472 = -1.*t1749*t1720;
  t2473 = -1.*t1713*t2255;
  t2973 = t1772*t2930;
  t2984 = t2955*t1786;
  t2990 = t2973 + t2984;
  t3003 = t1772*t2955;
  t3021 = -1.*t2930*t1786;
  t3023 = t3003 + t3021;
  t3268 = 0.02159*t1772;
  t3275 = t3268 + t1787;
  t3280 = -1.11344*t1772;
  t3305 = -0.02159*t1786;
  t3312 = t3280 + t3305;
  t3383 = -1.*t1772*t2043;
  t3387 = -1.*t2066*t1786;
  t3409 = t3383 + t3387;
  t3328 = -1.*t1772*t1764;
  t3336 = -1.*t1826*t1786;
  t3347 = t3328 + t3336;
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
  p_output1[27]=1.;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=1.;
  p_output1[38]=0;
  p_output1[39]=0;
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
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=1.;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0.5*t1224*(2.*t1201*t930 + 2.*(t1259 + t1312 - 0.049*t248 - 1.*t220*t248 - 0.09*t49 - 1.*t341*t49 - 0.02159*(t1356*t702 + t1341*t735) - 1.11344*(t1341*t702 - 1.*t1356*t735) + t1356*t762 + t1341*t792)*t930);
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0.5*t1224*(2.*(t1259 + t1312 - 1.*t1427*t248 + t1434*t49 + t1450*t618 + t1438*t692 - 0.02159*(t1492*t702 + t1490*t735) - 1.11344*(t1490*t702 - 1.*t1492*t735) + t1492*t762 + t1490*t792)*t930 + 2.*t1201*(t1434*t248 + t1427*t49 + t621 + t1450*t692 + t700 - 0.02159*(t1463*t702 + t1455*t735) - 1.11344*(t1455*t702 - 1.*t1463*t735) + t1463*t762 + t1455*t792 + t1438*t993));
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
  p_output1[120]=0.5*t1224*(2.*t1201*(-0.02159*t1181 + t1075*t1530 + t1056*t1540 - 1.11344*(-1.*t1075*t702 - 1.*t1056*t735)) + 2.*(t1530*t778 + t1540*t812 - 1.11344*(-1.*t702*t778 - 1.*t735*t812) - 0.02159*t871)*t930);
  p_output1[121]=0;
  p_output1[122]=0;
  p_output1[123]=0;
  p_output1[124]=0;
  p_output1[125]=0;
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
  p_output1[132]=1.;
  p_output1[133]=0;
  p_output1[134]=0;
  p_output1[135]=0;
  p_output1[136]=0;
  p_output1[137]=0;
  p_output1[138]=0;
  p_output1[139]=0;
  p_output1[140]=0;
  p_output1[141]=0;
  p_output1[142]=1.;
  p_output1[143]=0;
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=0;
  p_output1[148]=0.5*t2141*(2.*t1885*t2122 + 2.*t1885*(t2146 + t2160 + t2161 + t2162 + t2185 + t2265 + t1801*t2280 + t1833*t2309 - 0.02159*t2321 - 1.11344*t2326));
  p_output1[149]=t1885*t2440*t2465 + t2459*t2465*(t1894 + t1918 + t1923 + t1927 - 1.*t1801*t2280 - 1.*t1833*t2309 + 0.02159*t2321 + 1.11344*t2326 + t2472 + t2473);
  p_output1[150]=0;
  p_output1[151]=0;
  p_output1[152]=0;
  p_output1[153]=0;
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=0;
  p_output1[157]=0.5*t2141*(2.*t2122*(t1723 + t1756 + t1625*t2580 + t1628*t2591 + t1983*t2616 + t1755*t2634 + t1801*t2686 + t1833*t2728 - 0.02159*t2792 - 1.11344*t2816) + 2.*t1885*(t2185 + t2265 - 1.*t1628*t2580 + t1625*t2591 + t1755*t2616 + t1720*t2634 + t1801*t2930 + t1833*t2955 - 0.02159*t2990 - 1.11344*t3023));
  p_output1[158]=t1885*t2465*(t2359 + t2379 - 1.*t1625*t2580 - 1.*t1628*t2591 - 1.*t1983*t2616 - 1.*t1755*t2634 - 1.*t1801*t2686 - 1.*t1833*t2728 + 0.02159*t2792 + 1.11344*t2816) + t2459*t2465*(t2472 + t2473 + t1628*t2580 - 1.*t1625*t2591 - 1.*t1755*t2616 - 1.*t1720*t2634 - 1.*t1801*t2930 - 1.*t1833*t2955 + 0.02159*t2990 + 1.11344*t3023);
  p_output1[159]=0;
  p_output1[160]=0;
  p_output1[161]=0;
  p_output1[162]=0;
  p_output1[163]=0;
  p_output1[164]=0;
  p_output1[165]=0;
  p_output1[166]=0;
  p_output1[167]=0;
  p_output1[168]=0;
  p_output1[169]=0;
  p_output1[170]=0;
  p_output1[171]=0;
  p_output1[172]=0;
  p_output1[173]=0;
  p_output1[174]=0;
  p_output1[175]=0;
  p_output1[176]=0;
  p_output1[177]=0;
  p_output1[178]=0;
  p_output1[179]=0;
  p_output1[180]=0;
  p_output1[181]=0;
  p_output1[182]=0;
  p_output1[183]=0;
  p_output1[184]=0;
  p_output1[185]=0;
  p_output1[186]=0;
  p_output1[187]=0;
  p_output1[188]=0;
  p_output1[189]=0;
  p_output1[190]=0;
  p_output1[191]=0;
  p_output1[192]=0;
  p_output1[193]=0.5*t2141*(2.*t1885*(-0.02159*t1870 + t1826*t3275 + t1764*t3312 - 1.11344*t3347) + 2.*t2122*(-0.02159*t2103 + t2066*t3275 + t2043*t3312 - 1.11344*t3409));
  p_output1[194]=t2459*t2465*(0.02159*t1870 - 1.*t1826*t3275 - 1.*t1764*t3312 + 1.11344*t3347) + t1885*t2465*(0.02159*t2103 - 1.*t2066*t3275 - 1.*t2043*t3312 + 1.11344*t3409);
  p_output1[195]=0;
  p_output1[196]=0;
  p_output1[197]=-1.;
  p_output1[198]=0;
  p_output1[199]=0;
  p_output1[200]=0;
  p_output1[201]=0;
  p_output1[202]=0;
  p_output1[203]=0;
  p_output1[204]=0;
  p_output1[205]=0;
  p_output1[206]=0;
  p_output1[207]=0;
  p_output1[208]=0;
  p_output1[209]=0;
  p_output1[210]=0;
  p_output1[211]=0;
  p_output1[212]=0;
  p_output1[213]=0;
  p_output1[214]=0;
  p_output1[215]=0;
  p_output1[216]=0;
  p_output1[217]=0;
  p_output1[218]=0;
  p_output1[219]=0;
  p_output1[220]=0;
  p_output1[221]=0;
  p_output1[222]=0;
  p_output1[223]=0;
  p_output1[224]=0;
  p_output1[225]=0;
  p_output1[226]=0;
  p_output1[227]=0;
  p_output1[228]=0;
  p_output1[229]=0;
  p_output1[230]=0;
  p_output1[231]=0;
  p_output1[232]=0;
  p_output1[233]=0;
  p_output1[234]=0;
  p_output1[235]=0;
  p_output1[236]=0;
  p_output1[237]=0;
  p_output1[238]=0;
  p_output1[239]=0;
  p_output1[240]=0;
  p_output1[241]=0;
  p_output1[242]=0;
  p_output1[243]=0;
  p_output1[244]=0;
  p_output1[245]=0;
  p_output1[246]=0;
  p_output1[247]=0;
  p_output1[248]=0;
  p_output1[249]=0;
  p_output1[250]=0;
  p_output1[251]=0;
  p_output1[252]=0;
  p_output1[253]=0;
  p_output1[254]=0;
  p_output1[255]=0;
  p_output1[256]=0;
  p_output1[257]=0;
  p_output1[258]=0;
  p_output1[259]=0;
  p_output1[260]=0;
  p_output1[261]=0;
  p_output1[262]=0;
  p_output1[263]=0;
  p_output1[264]=0;
  p_output1[265]=0;
  p_output1[266]=0;
  p_output1[267]=0;
  p_output1[268]=0;
  p_output1[269]=0;
  p_output1[270]=0;
  p_output1[271]=0;
  p_output1[272]=0;
  p_output1[273]=0;
  p_output1[274]=0;
  p_output1[275]=0;
  p_output1[276]=0;
  p_output1[277]=0;
  p_output1[278]=0;
  p_output1[279]=0;
  p_output1[280]=0;
  p_output1[281]=0;
  p_output1[282]=0;
  p_output1[283]=0;
  p_output1[284]=0;
  p_output1[285]=0;
  p_output1[286]=0;
  p_output1[287]=0;
  p_output1[288]=0;
  p_output1[289]=0;
  p_output1[290]=0;
  p_output1[291]=0;
  p_output1[292]=0;
  p_output1[293]=0;
  p_output1[294]=0;
  p_output1[295]=0;
  p_output1[296]=0;
  p_output1[297]=0;
  p_output1[298]=0;
  p_output1[299]=0;
  p_output1[300]=0;
  p_output1[301]=0;
  p_output1[302]=0;
  p_output1[303]=0;
  p_output1[304]=0;
  p_output1[305]=0;
  p_output1[306]=0;
  p_output1[307]=0;
  p_output1[308]=0;
  p_output1[309]=0;
  p_output1[310]=0;
  p_output1[311]=0;
  p_output1[312]=0;
  p_output1[313]=0;
  p_output1[314]=0;
  p_output1[315]=0;
  p_output1[316]=0;
  p_output1[317]=0;
  p_output1[318]=0;
  p_output1[319]=0;
  p_output1[320]=0;
  p_output1[321]=0;
  p_output1[322]=0;
  p_output1[323]=0;
  p_output1[324]=0;
  p_output1[325]=0;
  p_output1[326]=0;
  p_output1[327]=0;
  p_output1[328]=0;
  p_output1[329]=0;
  p_output1[330]=0;
  p_output1[331]=0;
  p_output1[332]=0;
  p_output1[333]=0;
  p_output1[334]=0;
  p_output1[335]=0;
  p_output1[336]=0;
  p_output1[337]=0;
  p_output1[338]=0;
  p_output1[339]=0;
  p_output1[340]=0;
  p_output1[341]=0;
  p_output1[342]=0;
  p_output1[343]=0;
  p_output1[344]=0;
  p_output1[345]=0;
  p_output1[346]=0;
  p_output1[347]=0;
  p_output1[348]=0;
  p_output1[349]=0;
  p_output1[350]=0;
  p_output1[351]=0;
  p_output1[352]=0;
  p_output1[353]=0;
  p_output1[354]=0;
  p_output1[355]=0;
  p_output1[356]=0;
  p_output1[357]=0;
  p_output1[358]=0;
  p_output1[359]=0;
  p_output1[360]=0;
  p_output1[361]=0;
  p_output1[362]=0;
  p_output1[363]=0;
  p_output1[364]=0;
  p_output1[365]=0;
  p_output1[366]=0;
  p_output1[367]=0;
  p_output1[368]=0;
  p_output1[369]=0;
  p_output1[370]=0;
  p_output1[371]=0;
  p_output1[372]=0;
  p_output1[373]=0;
  p_output1[374]=0;
  p_output1[375]=0;
  p_output1[376]=0;
  p_output1[377]=0;
  p_output1[378]=0;
  p_output1[379]=0;
  p_output1[380]=0;
  p_output1[381]=0;
  p_output1[382]=0;
  p_output1[383]=0;
  p_output1[384]=0;
  p_output1[385]=0;
  p_output1[386]=0;
  p_output1[387]=0;
  p_output1[388]=0;
  p_output1[389]=0;
  p_output1[390]=0;
  p_output1[391]=0;
  p_output1[392]=0;
  p_output1[393]=0;
  p_output1[394]=0;
  p_output1[395]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 44, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void Dya_LeftStanceActual_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




