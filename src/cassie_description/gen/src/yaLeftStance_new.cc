/*
 * Automatically Generated from Mathematica.
 * Fri 15 Oct 2021 13:09:08 GMT-07:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "yaLeftStance_new.hh"
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
  double t57;
  double t17;
  double t58;
  double t24;
  double t59;
  double t34;
  double t64;
  double t66;
  double t98;
  double t115;
  double t121;
  double t145;
  double t153;
  double t157;
  double t167;
  double t131;
  double t133;
  double t144;
  double t188;
  double t191;
  double t193;
  double t261;
  double t265;
  double t266;
  double t270;
  double t242;
  double t246;
  double t248;
  double t284;
  double t296;
  double t298;
  double t317;
  double t319;
  double t325;
  double t330;
  double t340;
  double t342;
  double t348;
  double t375;
  double t376;
  double t378;
  double t389;
  double t396;
  double t397;
  double t405;
  double t420;
  double t426;
  double t429;
  double t451;
  double t453;
  double t454;
  double t458;
  double t461;
  double t462;
  double t476;
  double t491;
  double t493;
  double t494;
  double t511;
  double t512;
  double t513;
  double t515;
  double t519;
  double t530;
  double t537;
  double t545;
  double t546;
  double t549;
  double t563;
  double t569;
  double t571;
  double t614;
  double t629;
  double t623;
  double t630;
  double t633;
  double t634;
  double t674;
  double t678;
  double t682;
  double t691;
  double t635;
  double t636;
  double t639;
  double t645;
  double t652;
  double t655;
  double t688;
  double t692;
  double t694;
  double t695;
  double t699;
  double t705;
  double t713;
  double t714;
  double t717;
  double t724;
  double t730;
  double t759;
  double t769;
  double t771;
  double t775;
  double t734;
  double t737;
  double t738;
  double t774;
  double t778;
  double t786;
  double t787;
  double t794;
  double t798;
  double t802;
  double t805;
  double t809;
  double t812;
  double t816;
  double t849;
  double t853;
  double t854;
  double t858;
  double t821;
  double t824;
  double t825;
  double t855;
  double t860;
  double t861;
  double t862;
  double t865;
  double t869;
  double t870;
  double t872;
  double t874;
  double t877;
  double t878;
  double t885;
  double t886;
  double t888;
  double t913;
  double t915;
  double t917;
  double t921;
  double t925;
  double t932;
  double t978;
  double t980;
  double t986;
  double t990;
  double t928;
  double t937;
  double t940;
  double t942;
  double t944;
  double t948;
  double t951;
  double t958;
  double t989;
  double t960;
  double t962;
  double t963;
  double t1027;
  double t999;
  double t967;
  double t968;
  double t971;
  double t1063;
  double t1055;
  double t996;
  double t1079;
  double t1000;
  double t1144;
  double t1021;
  double t1090;
  double t1032;
  double t1218;
  double t1222;
  double t1230;
  double t1234;
  double t624;
  double t102;
  double t107;
  double t1317;
  double t1323;
  double t159;
  double t169;
  double t172;
  double t194;
  double t198;
  double t208;
  double t214;
  double t215;
  double t217;
  double t1354;
  double t1357;
  double t268;
  double t271;
  double t275;
  double t301;
  double t304;
  double t309;
  double t1386;
  double t1394;
  double t327;
  double t332;
  double t339;
  double t359;
  double t366;
  double t373;
  double t1410;
  double t1411;
  double t402;
  double t408;
  double t417;
  double t441;
  double t446;
  double t449;
  double t1422;
  double t1429;
  double t467;
  double t478;
  double t490;
  double t496;
  double t503;
  double t506;
  double t1471;
  double t1473;
  double t1475;
  double t1497;
  double t1445;
  double t1447;
  double t1477;
  double t1514;
  double t1568;
  double t1617;
  double t1626;
  double t1577;
  double t1652;
  double t1569;
  double t1667;
  double t1501;
  double t1634;
  double t1520;
  double t532;
  double t539;
  double t544;
  double t553;
  double t557;
  double t561;
  double t578;
  double t579;
  double t580;
  double t585;
  double t587;
  double t588;
  double t1743;
  double t1744;
  double t1746;
  double t1747;
  double t1752;
  double t1754;
  double t1756;
  double t1777;
  double t1785;
  double t1793;
  double t1807;
  double t1811;
  double t1819;
  double t1231;
  double t1237;
  double t1238;
  double t1823;
  double t1829;
  double t1833;
  double t1835;
  double t1836;
  double t1838;
  double t1243;
  double t1250;
  double t1259;
  double t1845;
  double t1846;
  double t1851;
  double t1854;
  double t1857;
  double t1858;
  double t123;
  double t1903;
  double t1904;
  double t1919;
  double t1927;
  double t1932;
  double t1935;
  double t1939;
  double t1946;
  double t1947;
  double t1948;
  double t1961;
  double t1967;
  double t1970;
  double t1975;
  double t1977;
  double t1980;
  double t1985;
  double t1986;
  double t1987;
  double t1989;
  double t1990;
  double t1994;
  double t2013;
  double t2014;
  double t2015;
  double t2027;
  double t2028;
  double t2029;
  double t2044;
  double t2047;
  double t2053;
  double t2108;
  double t2114;
  double t2117;
  double t2122;
  double t2130;
  double t2131;
  double t2143;
  double t2147;
  double t2151;
  double t2163;
  double t2179;
  double t2184;
  double t2193;
  double t2201;
  double t2205;
  double t2218;
  double t2222;
  double t2225;
  double t2232;
  double t2235;
  double t2239;
  double t2298;
  double t2310;
  double t2313;
  double t2321;
  double t2327;
  double t2329;
  double t2337;
  double t2341;
  double t2343;
  double t2353;
  double t2363;
  double t2370;
  double t2379;
  double t2384;
  double t2387;
  double t2391;
  double t2394;
  double t2401;
  double t2408;
  double t2416;
  double t2422;
  double t2424;
  double t2425;
  double t2426;
  double t2436;
  double t2438;
  double t2442;
  double t2492;
  double t2493;
  double t2496;
  double t2484;
  double t2486;
  double t2487;
  double t2502;
  double t2504;
  double t2506;
  double t2519;
  double t2520;
  double t2521;
  double t2525;
  double t2526;
  double t2527;
  double t2531;
  double t2532;
  double t2534;
  double t2536;
  double t2539;
  double t2540;
  double t2542;
  double t2544;
  double t2546;
  double t2553;
  double t2554;
  double t2555;
  double t2582;
  double t2586;
  double t2589;
  double t2610;
  double t2619;
  double t2622;
  double t2628;
  double t2629;
  double t2630;
  double t2635;
  double t2638;
  double t2641;
  double t2645;
  double t2646;
  double t2647;
  double t2649;
  double t2650;
  double t2651;
  double t2655;
  double t2656;
  double t2657;
  double t2660;
  double t2666;
  double t2671;
  double t2676;
  double t2679;
  double t2680;
  double t2685;
  double t2686;
  double t2687;
  double t2693;
  double t2694;
  double t2695;
  double t1279;
  double t1282;
  double t1291;
  double t1298;
  double t1303;
  double t1306;
  t57 = Cos(var1[3]);
  t17 = Cos(var1[5]);
  t58 = Sin(var1[4]);
  t24 = Sin(var1[3]);
  t59 = Sin(var1[5]);
  t34 = t17*t24;
  t64 = t57*t58*t59;
  t66 = t34 + t64;
  t98 = Cos(var1[6]);
  t115 = Cos(var1[4]);
  t121 = Sin(var1[6]);
  t145 = Cos(var1[7]);
  t153 = -1.*t145;
  t157 = 1. + t153;
  t167 = Sin(var1[7]);
  t131 = t98*t66;
  t133 = t57*t115*t121;
  t144 = t131 + t133;
  t188 = -1.*t57*t17*t58;
  t191 = t24*t59;
  t193 = t188 + t191;
  t261 = Cos(var1[8]);
  t265 = -1.*t261;
  t266 = 1. + t265;
  t270 = Sin(var1[8]);
  t242 = t145*t193;
  t246 = t144*t167;
  t248 = t242 + t246;
  t284 = t57*t115*t98;
  t296 = -1.*t66*t121;
  t298 = t284 + t296;
  t317 = Cos(var1[9]);
  t319 = -1.*t317;
  t325 = 1. + t319;
  t330 = Sin(var1[9]);
  t340 = t261*t248;
  t342 = t298*t270;
  t348 = t340 + t342;
  t375 = t261*t298;
  t376 = -1.*t248*t270;
  t378 = t375 + t376;
  t389 = Cos(var1[10]);
  t396 = -1.*t389;
  t397 = 1. + t396;
  t405 = Sin(var1[10]);
  t420 = -1.*t330*t348;
  t426 = t317*t378;
  t429 = t420 + t426;
  t451 = t317*t348;
  t453 = t330*t378;
  t454 = t451 + t453;
  t458 = Cos(var1[11]);
  t461 = -1.*t458;
  t462 = 1. + t461;
  t476 = Sin(var1[11]);
  t491 = t405*t429;
  t493 = t389*t454;
  t494 = t491 + t493;
  t511 = t389*t429;
  t512 = -1.*t405*t454;
  t513 = t511 + t512;
  t515 = Cos(var1[13]);
  t519 = -1.*t515;
  t530 = 1. + t519;
  t537 = Sin(var1[13]);
  t545 = -1.*t476*t494;
  t546 = t458*t513;
  t549 = t545 + t546;
  t563 = t458*t494;
  t569 = t476*t513;
  t571 = t563 + t569;
  t614 = Sin(var1[14]);
  t629 = Cos(var1[14]);
  t623 = 0.135*t57*t115*t614;
  t630 = -1.*t629;
  t633 = 1. + t630;
  t634 = -0.135*t633*t66;
  t674 = Cos(var1[15]);
  t678 = -1.*t674;
  t682 = 1. + t678;
  t691 = Sin(var1[15]);
  t635 = t57*t115*t614;
  t636 = t629*t66;
  t639 = t635 + t636;
  t645 = t629*t57*t115;
  t652 = -1.*t614*t66;
  t655 = t645 + t652;
  t688 = -0.049*t682;
  t692 = -0.135*t691;
  t694 = t688 + t692;
  t695 = t694*t193;
  t699 = -0.135*t682;
  t705 = 0.049*t691;
  t713 = t699 + t705;
  t714 = t713*t639;
  t717 = -1.*t691*t193;
  t724 = t674*t639;
  t730 = t717 + t724;
  t759 = Cos(var1[16]);
  t769 = -1.*t759;
  t771 = 1. + t769;
  t775 = Sin(var1[16]);
  t734 = t674*t193;
  t737 = t691*t639;
  t738 = t734 + t737;
  t774 = -0.09*t771;
  t778 = 0.049*t775;
  t786 = t774 + t778;
  t787 = t786*t655;
  t794 = -0.049*t771;
  t798 = -0.09*t775;
  t802 = t794 + t798;
  t805 = t802*t738;
  t809 = t775*t655;
  t812 = t759*t738;
  t816 = t809 + t812;
  t849 = Cos(var1[17]);
  t853 = -1.*t849;
  t854 = 1. + t853;
  t858 = Sin(var1[17]);
  t821 = t759*t655;
  t824 = -1.*t775*t738;
  t825 = t821 + t824;
  t855 = -0.049*t854;
  t860 = -0.21*t858;
  t861 = t855 + t860;
  t862 = t861*t816;
  t865 = -0.21*t854;
  t869 = 0.049*t858;
  t870 = t865 + t869;
  t872 = t870*t825;
  t874 = -1.*t858*t816;
  t877 = t849*t825;
  t878 = t874 + t877;
  t885 = t849*t816;
  t886 = t858*t825;
  t888 = t885 + t886;
  t913 = -1.*var1[17];
  t915 = 0.226893 + t913;
  t917 = Cos(t915);
  t921 = -1.*t917;
  t925 = 1. + t921;
  t932 = Sin(t915);
  t978 = Cos(var1[20]);
  t980 = -1.*t978;
  t986 = 1. + t980;
  t990 = Sin(var1[20]);
  t928 = -0.70544*t925;
  t937 = -0.01841*t932;
  t940 = t928 + t937;
  t942 = t940*t878;
  t944 = 0.01841*t925;
  t948 = -0.70544*t932;
  t951 = t944 + t948;
  t958 = t951*t888;
  t989 = 0.07769774964800001*t986;
  t960 = t932*t878;
  t962 = t917*t888;
  t963 = t960 + t962;
  t1027 = -0.0004284921280000001*t986;
  t999 = 0.005481192614*t986;
  t967 = t917*t878;
  t968 = -1.*t932*t888;
  t971 = t967 + t968;
  t1063 = -0.077936*t990;
  t1055 = -0.996943*t990;
  t996 = -0.005498*t990;
  t1079 = -0.005481192614*t986;
  t1000 = 0.077936*t990;
  t1144 = -0.07769774964800001*t986;
  t1021 = 0.005498*t990;
  t1090 = 0.0004284921280000001*t986;
  t1032 = 0.996943*t990;
  t1218 = Cos(var1[21]);
  t1222 = -1.*t1218;
  t1230 = 1. + t1222;
  t1234 = Sin(var1[21]);
  t624 = -0.0233*t193;
  t102 = -1.*t98;
  t107 = 1. + t102;
  t1317 = 0.135*t107*t66;
  t1323 = -0.135*t57*t115*t121;
  t159 = 0.135*t157;
  t169 = 0.049*t167;
  t172 = t159 + t169;
  t194 = -0.049*t157;
  t198 = 0.135*t167;
  t208 = t194 + t198;
  t214 = t145*t144;
  t215 = -1.*t193*t167;
  t217 = t214 + t215;
  t1354 = t144*t172;
  t1357 = t193*t208;
  t268 = -0.049*t266;
  t271 = -0.09*t270;
  t275 = t268 + t271;
  t301 = -0.09*t266;
  t304 = 0.049*t270;
  t309 = t301 + t304;
  t1386 = t248*t275;
  t1394 = t298*t309;
  t327 = -0.049*t325;
  t332 = -0.21*t330;
  t339 = t327 + t332;
  t359 = -0.21*t325;
  t366 = 0.049*t330;
  t373 = t359 + t366;
  t1410 = t339*t348;
  t1411 = t373*t378;
  t402 = -0.27068*t397;
  t408 = 0.00159*t405;
  t417 = t402 + t408;
  t441 = -0.00159*t397;
  t446 = -0.27068*t405;
  t449 = t441 + t446;
  t1422 = t417*t429;
  t1429 = t449*t454;
  t467 = 0.01841*t462;
  t478 = -0.70544*t476;
  t490 = t467 + t478;
  t496 = -0.70544*t462;
  t503 = -0.01841*t476;
  t506 = t496 + t503;
  t1471 = Cos(var1[12]);
  t1473 = -1.*t1471;
  t1475 = 1. + t1473;
  t1497 = Sin(var1[12]);
  t1445 = t490*t494;
  t1447 = t506*t513;
  t1477 = -0.005481192614*t1475;
  t1514 = -0.07769774964800001*t1475;
  t1568 = -0.0004284921280000001*t1475;
  t1617 = -0.005498*t1497;
  t1626 = 0.996943*t1497;
  t1577 = 0.077936*t1497;
  t1652 = 0.0004284921280000001*t1475;
  t1569 = -0.996943*t1497;
  t1667 = 0.005481192614*t1475;
  t1501 = -0.077936*t1497;
  t1634 = 0.07769774964800001*t1475;
  t1520 = 0.005498*t1497;
  t532 = -1.11344*t530;
  t539 = 0.02159*t537;
  t544 = t532 + t539;
  t553 = -0.02159*t530;
  t557 = -1.11344*t537;
  t561 = t553 + t557;
  t578 = t537*t549;
  t579 = t515*t571;
  t580 = t578 + t579;
  t585 = t515*t549;
  t587 = -1.*t537*t571;
  t588 = t585 + t587;
  t1743 = t629*t24;
  t1744 = t635 + t1743;
  t1746 = -1.*t614*t24;
  t1747 = t645 + t1746;
  t1752 = t691*t1744;
  t1754 = -1.*t674*t57*t58;
  t1756 = t1752 + t1754;
  t1777 = t775*t1747;
  t1785 = t759*t1756;
  t1793 = t1777 + t1785;
  t1807 = t759*t1747;
  t1811 = -1.*t775*t1756;
  t1819 = t1807 + t1811;
  t1231 = -0.02159*t1230;
  t1237 = -1.11344*t1234;
  t1238 = t1231 + t1237;
  t1823 = -1.*t858*t1793;
  t1829 = t849*t1819;
  t1833 = t1823 + t1829;
  t1835 = t849*t1793;
  t1836 = t858*t1819;
  t1838 = t1835 + t1836;
  t1243 = -1.11344*t1230;
  t1250 = 0.02159*t1234;
  t1259 = t1243 + t1250;
  t1845 = t932*t1833;
  t1846 = t917*t1838;
  t1851 = t1845 + t1846;
  t1854 = t917*t1833;
  t1857 = -1.*t932*t1838;
  t1858 = t1854 + t1857;
  t123 = 0.135*t57*t115*t121;
  t1903 = t98*t24;
  t1904 = t1903 + t133;
  t1919 = -1.*t57*t145*t58;
  t1927 = t1904*t167;
  t1932 = t1919 + t1927;
  t1935 = -1.*t24*t121;
  t1939 = t284 + t1935;
  t1946 = t261*t1932;
  t1947 = t1939*t270;
  t1948 = t1946 + t1947;
  t1961 = t261*t1939;
  t1967 = -1.*t1932*t270;
  t1970 = t1961 + t1967;
  t1975 = -1.*t330*t1948;
  t1977 = t317*t1970;
  t1980 = t1975 + t1977;
  t1985 = t317*t1948;
  t1986 = t330*t1970;
  t1987 = t1985 + t1986;
  t1989 = t405*t1980;
  t1990 = t389*t1987;
  t1994 = t1989 + t1990;
  t2013 = t389*t1980;
  t2014 = -1.*t405*t1987;
  t2015 = t2013 + t2014;
  t2027 = -1.*t476*t1994;
  t2028 = t458*t2015;
  t2029 = t2027 + t2028;
  t2044 = t458*t1994;
  t2047 = t476*t2015;
  t2053 = t2044 + t2047;
  t2108 = t674*t115;
  t2114 = t614*t691*t58;
  t2117 = t2108 + t2114;
  t2122 = t629*t775*t58;
  t2130 = t759*t2117;
  t2131 = t2122 + t2130;
  t2143 = t629*t759*t58;
  t2147 = -1.*t775*t2117;
  t2151 = t2143 + t2147;
  t2163 = -1.*t858*t2131;
  t2179 = t849*t2151;
  t2184 = t2163 + t2179;
  t2193 = t849*t2131;
  t2201 = t858*t2151;
  t2205 = t2193 + t2201;
  t2218 = t932*t2184;
  t2222 = t917*t2205;
  t2225 = t2218 + t2222;
  t2232 = t917*t2184;
  t2235 = -1.*t932*t2205;
  t2239 = t2232 + t2235;
  t2298 = t115*t145;
  t2310 = t58*t121*t167;
  t2313 = t2298 + t2310;
  t2321 = t261*t2313;
  t2327 = t98*t58*t270;
  t2329 = t2321 + t2327;
  t2337 = t98*t261*t58;
  t2341 = -1.*t2313*t270;
  t2343 = t2337 + t2341;
  t2353 = -1.*t330*t2329;
  t2363 = t317*t2343;
  t2370 = t2353 + t2363;
  t2379 = t317*t2329;
  t2384 = t330*t2343;
  t2387 = t2379 + t2384;
  t2391 = t405*t2370;
  t2394 = t389*t2387;
  t2401 = t2391 + t2394;
  t2408 = t389*t2370;
  t2416 = -1.*t405*t2387;
  t2422 = t2408 + t2416;
  t2424 = -1.*t476*t2401;
  t2425 = t458*t2422;
  t2426 = t2424 + t2425;
  t2436 = t458*t2401;
  t2438 = t476*t2422;
  t2442 = t2436 + t2438;
  t2492 = t629*t57;
  t2493 = -1.*t115*t614*t24;
  t2496 = t2492 + t2493;
  t2484 = -1.*t57*t614;
  t2486 = -1.*t629*t115*t24;
  t2487 = t2484 + t2486;
  t2502 = t691*t2496;
  t2504 = t674*t24*t58;
  t2506 = t2502 + t2504;
  t2519 = t775*t2487;
  t2520 = t759*t2506;
  t2521 = t2519 + t2520;
  t2525 = t759*t2487;
  t2526 = -1.*t775*t2506;
  t2527 = t2525 + t2526;
  t2531 = -1.*t858*t2521;
  t2532 = t849*t2527;
  t2534 = t2531 + t2532;
  t2536 = t849*t2521;
  t2539 = t858*t2527;
  t2540 = t2536 + t2539;
  t2542 = t932*t2534;
  t2544 = t917*t2540;
  t2546 = t2542 + t2544;
  t2553 = t917*t2534;
  t2554 = -1.*t932*t2540;
  t2555 = t2553 + t2554;
  t2582 = t57*t98;
  t2586 = -1.*t115*t24*t121;
  t2589 = t2582 + t2586;
  t2610 = t145*t24*t58;
  t2619 = t2589*t167;
  t2622 = t2610 + t2619;
  t2628 = -1.*t115*t98*t24;
  t2629 = -1.*t57*t121;
  t2630 = t2628 + t2629;
  t2635 = t261*t2622;
  t2638 = t2630*t270;
  t2641 = t2635 + t2638;
  t2645 = t261*t2630;
  t2646 = -1.*t2622*t270;
  t2647 = t2645 + t2646;
  t2649 = -1.*t330*t2641;
  t2650 = t317*t2647;
  t2651 = t2649 + t2650;
  t2655 = t317*t2641;
  t2656 = t330*t2647;
  t2657 = t2655 + t2656;
  t2660 = t405*t2651;
  t2666 = t389*t2657;
  t2671 = t2660 + t2666;
  t2676 = t389*t2651;
  t2679 = -1.*t405*t2657;
  t2680 = t2676 + t2679;
  t2685 = -1.*t476*t2671;
  t2686 = t458*t2680;
  t2687 = t2685 + t2686;
  t2693 = t458*t2671;
  t2694 = t476*t2680;
  t2695 = t2693 + t2694;
  t1279 = -1.*t1234*t963;
  t1282 = t1218*t971;
  t1291 = t1279 + t1282;
  t1298 = t1218*t963;
  t1303 = t1234*t971;
  t1306 = t1298 + t1303;
  p_output1[0]=t66;
  p_output1[1]=t17*t57*t58 - 1.*t24*t59;
  p_output1[2]=var1[7];
  p_output1[3]=t123 - 1.*t144*t172 - 1.*t193*t208 - 0.1305*t217 - 1.*t248*t275 - 1.*t298*t309 - 1.*t339*t348 - 1.*t373*t378 - 1.*t417*t429 - 1.*t449*t454 - 1.*t490*t494 - 1.*t506*t513 - 1.*t544*t549 - 1.*t561*t571 + 0.02159*t580 + 1.11344*t588 - 0.135*t107*t66 - 1.*var1[2] + 0.0288377642750394*(1.316608*(t1317 + t1323 + t1354 + t1357 + 0.135*t217 - 0.049*t248 - 0.0343*t298 + var1[2]) + 5.79228*(t1317 + t1323 + t1354 + t1357 + t1386 + t1394 + 0.17081*t217 - 0.04895*t348 - 0.14946*t378 + var1[2]) + 1.03008*(t1317 + t1323 + t1354 + t1357 + t1386 + t1394 + t1410 + t1411 + 0.132168*t217 - 0.255862*t429 - 0.007761*t454 + var1[2]) + 0.763*(t1317 + t1323 + t1354 + t1357 + t1386 + t1394 + t1410 + t1411 + t1422 + t1429 + 0.130288*t217 - 0.000421*t494 - 0.45406*t513 + var1[2]) + 1.03*(t1317 + t1323 + t1354 + t1357 + t1386 + t1394 + t1410 + t1411 + t1422 + t1429 + t1445 + t1447 + 0.127241*t217 - 0.826587*t549 - 0.004179*t571 + var1[2]) + 0.1498*(t1317 + t1323 + t1354 + t1357 + t1386 + t1394 + t1410 + t1411 + t1422 + t1429 + t1445 + t1447 + 0.13064*t217 + t544*t549 + t561*t571 + 0.00589*t580 - 1.11818*t588 + var1[2]) + 1.965608*(t1317 + t1323 + 0.1351*t144 + 0.01793*t298 + t624 + var1[2]) + 1.965608*(t623 + t624 + t634 - 0.1351*t639 + 0.01793*t655 + var1[2]) + 10.33*(0.05066*t193 + 0.02841*t115*t57 + 0.000346*t66 + var1[2]) + 1.316608*(t623 + t634 - 0.0343*t655 + t695 + t714 - 0.135*t730 - 0.049*t738 + var1[2]) + 5.79228*(t623 + t634 + t695 + t714 - 0.17081*t730 + t787 + t805 - 0.04895*t816 - 0.14946*t825 + var1[2]) + 1.03008*(t623 + t634 + t695 + t714 - 0.132168*t730 + t787 + t805 + t862 + t872 - 0.255862*t878 - 0.007761*t888 + var1[2]) + 0.763*(t623 + t634 + t695 + t714 - 0.130288*t730 + t787 + t805 + t862 + t872 - 0.45406*t878 - 0.000421*t888 + var1[2]) + 1.03*(t623 + t634 + t695 + t714 - 0.127241*t730 + t787 + t805 + t862 + t872 + t942 + t958 - 0.004179*t963 - 0.826587*t971 + var1[2]) + 0.1498*(-1.11818*t1291 + 0.00589*t1306 + t623 + t634 + t695 + t714 - 0.13064*t730 + t787 + t805 + t862 + t872 + t942 + t958 + t1238*t963 + t1259*t971 + var1[2]) + 0.126*(t1317 + t1323 + t1354 + t1357 + t1386 + t1394 + t1410 + t1411 + t1422 + t1429 + t1445 + t1447 + 0.01889*((t1617 + t1634)*t217 + (t1626 + t1652)*t549 + (1. - 0.993925573253*t1475)*t571) + 0.126739*((1. - 0.006104248100000001*t1475)*t217 + (t1501 + t1667)*t549 + (t1520 + t1634)*t571) - 0.617968*((t1577 + t1667)*t217 + (1. - 0.999969365345*t1475)*t549 + (t1569 + t1652)*t571) + var1[2] + t217*(0.000033783761634830594*t1475 - 0.6934341012630001*(t1477 + t1501) - 0.021877537552*(t1514 + t1520) - 2.1934241414728571e-7*var1[12]) + t571*(-0.021744644052735636*t1475 + 0.005534467322*(t1514 + t1617) - 0.6934341012630001*(t1568 + t1626) - 1.7147089040178687e-8*var1[12]) + t549*(-0.6934128581485427*t1475 - 0.021877537552*(t1568 + t1569) + 0.005534467322*(t1477 + t1577) - 1.2096424700126054e-9*var1[12])) + 0.126*(t623 + t634 + t695 + t714 + t787 + t805 + t862 + t872 + t942 + t958 - 0.617968*((t1063 + t1079)*t730 + (t1055 + t1090)*t963 + t971*(1. - 0.999969365345*t986)) + 0.01889*((t1021 + t1144)*t730 + (t1032 + t1090)*t971 + t963*(1. - 0.993925573253*t986)) - 0.126739*((t1000 + t1079)*t971 + t730*(1. - 0.006104248100000001*t986) + t963*(t1144 + t996)) + var1[2] + t963*(-0.6934341012630001*(t1027 + t1032) - 0.021744644052735636*t986 - 0.005534467322*(t1021 + t989) - 1.7147089040178687e-8*var1[20]) + t971*(-0.021877537552*(t1027 + t1055) - 0.6934128581485427*t986 - 0.005534467322*(t1063 + t999) - 1.2096424700126054e-9*var1[20]) + t730*(-0.000033783761634830594*t986 - 0.021877537552*(t989 + t996) - 0.6934341012630001*(t1000 + t999) + 2.1934241414728571e-7*var1[20])));
  p_output1[4]=t123 + t1238*t1851 + t1259*t1858 - 1.11344*(-1.*t1234*t1851 + t1218*t1858) - 0.02159*(t1218*t1851 + t1234*t1858) - 1.*t172*t1904 - 0.135*t107*t24 - 1.*t1932*t275 - 1.*t1939*t309 - 1.*t1948*t339 - 1.*t1970*t373 - 1.*t1980*t417 - 1.*t1987*t449 - 1.*t1994*t490 - 1.*t2015*t506 + 0.02159*(t2053*t515 + t2029*t537) + 1.11344*(t2029*t515 - 1.*t2053*t537) - 1.*t2029*t544 - 1.*t2053*t561 + t208*t57*t58 - 0.1305*(t145*t1904 + t167*t57*t58) + t623 - 0.135*t24*t633 - 0.1305*(t1744*t674 + t57*t58*t691) - 1.*t57*t58*t694 + t1744*t713 + t1747*t786 + t1756*t802 + t1793*t861 + t1819*t870 + t1833*t940 + t1838*t951;
  p_output1[5]=-1.*t115*t208 + t1238*t2225 + t1259*t2239 - 1.11344*(-1.*t1234*t2225 + t1218*t2239) - 0.02159*(t1218*t2225 + t1234*t2239) - 1.*t2313*t275 - 1.*t2329*t339 - 1.*t2343*t373 - 1.*t2370*t417 - 1.*t2387*t449 - 1.*t2401*t490 - 1.*t2422*t506 + 0.02159*(t2442*t515 + t2426*t537) + 1.11344*(t2426*t515 - 1.*t2442*t537) - 1.*t2426*t544 - 1.*t2442*t561 + 0.135*t121*t58 - 1.*t121*t172*t58 - 0.1305*(-1.*t115*t167 + t121*t145*t58) + 0.135*t58*t614 - 0.1305*(t58*t614*t674 - 1.*t115*t691) + t115*t694 + t58*t614*t713 + t58*t629*t786 + t2117*t802 + t2131*t861 + t2151*t870 + t2184*t940 + t2205*t951 - 1.*t309*t58*t98;
  p_output1[6]=-0.135*t115*t121*t24 + t1238*t2546 + t1259*t2555 - 1.11344*(-1.*t1234*t2546 + t1218*t2555) - 0.02159*(t1218*t2546 + t1234*t2555) - 1.*t172*t2589 - 1.*t2622*t275 - 1.*t2630*t309 - 1.*t2641*t339 - 1.*t2647*t373 - 1.*t2651*t417 - 1.*t2657*t449 - 1.*t2671*t490 - 1.*t2680*t506 + 0.02159*(t2695*t515 + t2687*t537) + 1.11344*(t2687*t515 - 1.*t2695*t537) - 1.*t2687*t544 - 1.*t2695*t561 - 0.135*t107*t57 - 1.*t208*t24*t58 - 0.1305*(t145*t2589 - 1.*t167*t24*t58) - 0.135*t115*t24*t614 - 0.135*t57*t633 - 0.1305*(t2496*t674 - 1.*t24*t58*t691) + t24*t58*t694 + t2496*t713 + t2487*t786 + t2506*t802 + t2521*t861 + t2527*t870 + t2534*t940 + t2540*t951;
  p_output1[7]=var1[15];
  p_output1[8]=7.142857142857142*(0. - 0.10724599999999995*t1291 - 0.08999*t1306);
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

void yaLeftStance_new_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




