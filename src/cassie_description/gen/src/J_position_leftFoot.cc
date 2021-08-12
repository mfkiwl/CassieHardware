/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:02 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "J_position_leftFoot.hh"
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
  double t115;
  double t346;
  double t876;
  double t1074;
  double t1110;
  double t1239;
  double t1320;
  double t1325;
  double t1334;
  double t1360;
  double t1367;
  double t1381;
  double t1421;
  double t1447;
  double t1476;
  double t1580;
  double t1611;
  double t1627;
  double t1629;
  double t1631;
  double t1632;
  double t1638;
  double t1647;
  double t1648;
  double t1652;
  double t1681;
  double t1686;
  double t1691;
  double t1704;
  double t1711;
  double t1759;
  double t1788;
  double t1808;
  double t1810;
  double t1816;
  double t1866;
  double t1874;
  double t1882;
  double t1889;
  double t1892;
  double t1894;
  double t1898;
  double t1911;
  double t1913;
  double t1915;
  double t1945;
  double t1947;
  double t1951;
  double t380;
  double t716;
  double t784;
  double t923;
  double t951;
  double t1285;
  double t1321;
  double t1323;
  double t1327;
  double t1330;
  double t1331;
  double t1370;
  double t1408;
  double t1411;
  double t1524;
  double t1531;
  double t1550;
  double t1633;
  double t1644;
  double t1645;
  double t2016;
  double t2017;
  double t2018;
  double t2032;
  double t2033;
  double t2034;
  double t1657;
  double t1659;
  double t1669;
  double t1787;
  double t1795;
  double t1796;
  double t2037;
  double t2038;
  double t2039;
  double t2041;
  double t2042;
  double t2043;
  double t1839;
  double t1847;
  double t1853;
  double t1895;
  double t1902;
  double t1905;
  double t2054;
  double t2059;
  double t2060;
  double t2064;
  double t2065;
  double t2070;
  double t1926;
  double t1931;
  double t1936;
  double t2079;
  double t2083;
  double t2090;
  double t2106;
  double t2117;
  double t2120;
  double t2207;
  double t2208;
  double t2210;
  double t2214;
  double t2215;
  double t2216;
  double t2218;
  double t2222;
  double t2223;
  double t2227;
  double t2229;
  double t2230;
  double t2232;
  double t2233;
  double t2234;
  double t2240;
  double t2241;
  double t2242;
  double t2325;
  double t2328;
  double t2329;
  double t2335;
  double t2336;
  double t2341;
  double t2351;
  double t2362;
  double t2364;
  double t2368;
  double t2375;
  double t2379;
  double t2403;
  double t2409;
  double t2412;
  double t2423;
  double t2430;
  double t2432;
  double t2293;
  double t2294;
  double t2295;
  double t2461;
  double t2462;
  double t2465;
  double t2468;
  double t2469;
  double t2471;
  double t2473;
  double t2474;
  double t2475;
  double t2478;
  double t2481;
  double t2482;
  double t2486;
  double t2489;
  double t2490;
  double t2514;
  double t2517;
  double t2518;
  double t2573;
  double t2580;
  double t2584;
  double t2591;
  double t2599;
  double t2600;
  double t2604;
  double t2606;
  double t2609;
  double t2612;
  double t2613;
  double t2615;
  double t2619;
  double t2620;
  double t2621;
  double t2626;
  double t2628;
  double t2630;
  double t2567;
  double t2568;
  double t2570;
  double t2651;
  double t2653;
  double t2654;
  double t2661;
  double t2670;
  double t2675;
  double t2676;
  double t2677;
  double t2683;
  double t2684;
  double t2685;
  double t2687;
  double t2700;
  double t2701;
  double t2710;
  double t2711;
  double t2714;
  double t2718;
  double t2720;
  double t2721;
  double t2645;
  double t2647;
  double t2758;
  double t2759;
  double t2764;
  double t2768;
  double t2769;
  double t2770;
  double t2774;
  double t2778;
  double t2783;
  double t2784;
  double t2785;
  double t2788;
  double t2792;
  double t2796;
  double t2801;
  double t2804;
  double t2808;
  double t2813;
  double t2815;
  double t2816;
  double t2589;
  double t2602;
  double t2611;
  double t2617;
  double t2622;
  double t2632;
  double t2633;
  double t2634;
  double t2635;
  double t2637;
  double t2638;
  double t2641;
  double t2642;
  double t2643;
  double t2837;
  double t2839;
  double t2840;
  double t2843;
  double t2845;
  double t2852;
  double t2855;
  double t2858;
  double t2861;
  double t2862;
  double t2864;
  double t2866;
  double t2868;
  double t2871;
  double t2872;
  double t2874;
  double t2875;
  double t2876;
  double t2903;
  double t2910;
  double t2911;
  double t2916;
  double t2917;
  double t2919;
  double t2920;
  double t2925;
  double t2926;
  double t2930;
  double t2936;
  double t2937;
  double t2938;
  double t2940;
  double t2941;
  double t2943;
  double t2945;
  double t2948;
  double t2950;
  double t2988;
  double t2989;
  double t2990;
  double t2993;
  double t2995;
  double t2997;
  double t2998;
  double t3001;
  double t3004;
  double t3005;
  double t3007;
  double t3008;
  double t3010;
  double t2978;
  double t2980;
  double t2984;
  double t2985;
  double t2987;
  double t3028;
  double t3030;
  double t3034;
  double t3035;
  double t3037;
  double t3040;
  double t3041;
  double t3066;
  double t3067;
  double t3074;
  double t3077;
  double t3080;
  double t3083;
  double t3086;
  double t3090;
  double t3091;
  double t3094;
  double t3100;
  double t3101;
  double t3105;
  double t3134;
  double t3136;
  double t3137;
  double t3145;
  double t3146;
  double t3150;
  double t3153;
  double t3127;
  double t3130;
  double t3131;
  double t3139;
  double t3140;
  double t3169;
  double t3171;
  double t2137;
  double t3198;
  double t3199;
  double t3202;
  double t3212;
  double t3214;
  double t3217;
  double t3218;
  double t3155;
  double t3252;
  double t3254;
  double t3255;
  double t3159;
  double t3243;
  double t3244;
  double t3246;
  double t3248;
  double t3249;
  double t3173;
  double t2152;
  double t2160;
  double t3224;
  double t3277;
  double t3278;
  double t3279;
  double t3232;
  t115 = Sin(var1[6]);
  t346 = Cos(var1[7]);
  t876 = Sin(var1[7]);
  t1074 = Cos(var1[8]);
  t1110 = -1.*t1074;
  t1239 = 1. + t1110;
  t1320 = Sin(var1[8]);
  t1325 = Cos(var1[6]);
  t1334 = Cos(var1[9]);
  t1360 = -1.*t1334;
  t1367 = 1. + t1360;
  t1381 = Sin(var1[9]);
  t1421 = -1.*t1074*t115*t876;
  t1447 = -1.*t1325*t1320;
  t1476 = t1421 + t1447;
  t1580 = -1.*t1325*t1074;
  t1611 = t115*t876*t1320;
  t1627 = t1580 + t1611;
  t1629 = Cos(var1[10]);
  t1631 = -1.*t1629;
  t1632 = 1. + t1631;
  t1638 = Sin(var1[10]);
  t1647 = -1.*t1381*t1476;
  t1648 = t1334*t1627;
  t1652 = t1647 + t1648;
  t1681 = t1334*t1476;
  t1686 = t1381*t1627;
  t1691 = t1681 + t1686;
  t1704 = Cos(var1[11]);
  t1711 = -1.*t1704;
  t1759 = 1. + t1711;
  t1788 = Sin(var1[11]);
  t1808 = t1638*t1652;
  t1810 = t1629*t1691;
  t1816 = t1808 + t1810;
  t1866 = t1629*t1652;
  t1874 = -1.*t1638*t1691;
  t1882 = t1866 + t1874;
  t1889 = Cos(var1[13]);
  t1892 = -1.*t1889;
  t1894 = 1. + t1892;
  t1898 = Sin(var1[13]);
  t1911 = -1.*t1788*t1816;
  t1913 = t1704*t1882;
  t1915 = t1911 + t1913;
  t1945 = t1704*t1816;
  t1947 = t1788*t1882;
  t1951 = t1945 + t1947;
  t380 = -1.*t346;
  t716 = 1. + t380;
  t784 = 0.135*t716;
  t923 = 0.049*t876;
  t951 = t784 + t923;
  t1285 = -0.049*t1239;
  t1321 = -0.09*t1320;
  t1323 = t1285 + t1321;
  t1327 = -0.09*t1239;
  t1330 = 0.049*t1320;
  t1331 = t1327 + t1330;
  t1370 = -0.049*t1367;
  t1408 = -0.21*t1381;
  t1411 = t1370 + t1408;
  t1524 = -0.21*t1367;
  t1531 = 0.049*t1381;
  t1550 = t1524 + t1531;
  t1633 = -0.27068*t1632;
  t1644 = 0.00159*t1638;
  t1645 = t1633 + t1644;
  t2016 = t1325*t1074*t876;
  t2017 = -1.*t115*t1320;
  t2018 = t2016 + t2017;
  t2032 = -1.*t1074*t115;
  t2033 = -1.*t1325*t876*t1320;
  t2034 = t2032 + t2033;
  t1657 = -0.00159*t1632;
  t1659 = -0.27068*t1638;
  t1669 = t1657 + t1659;
  t1787 = 0.01841*t1759;
  t1795 = -0.70544*t1788;
  t1796 = t1787 + t1795;
  t2037 = -1.*t1381*t2018;
  t2038 = t1334*t2034;
  t2039 = t2037 + t2038;
  t2041 = t1334*t2018;
  t2042 = t1381*t2034;
  t2043 = t2041 + t2042;
  t1839 = -0.70544*t1759;
  t1847 = -0.01841*t1788;
  t1853 = t1839 + t1847;
  t1895 = -1.11344*t1894;
  t1902 = 0.02159*t1898;
  t1905 = t1895 + t1902;
  t2054 = t1638*t2039;
  t2059 = t1629*t2043;
  t2060 = t2054 + t2059;
  t2064 = t1629*t2039;
  t2065 = -1.*t1638*t2043;
  t2070 = t2064 + t2065;
  t1926 = -0.02159*t1894;
  t1931 = -1.11344*t1898;
  t1936 = t1926 + t1931;
  t2079 = -1.*t1788*t2060;
  t2083 = t1704*t2070;
  t2090 = t2079 + t2083;
  t2106 = t1704*t2060;
  t2117 = t1788*t2070;
  t2120 = t2106 + t2117;
  t2207 = t1074*t1381*t876;
  t2208 = t1334*t876*t1320;
  t2210 = t2207 + t2208;
  t2214 = -1.*t1334*t1074*t876;
  t2215 = t1381*t876*t1320;
  t2216 = t2214 + t2215;
  t2218 = t1638*t2210;
  t2222 = t1629*t2216;
  t2223 = t2218 + t2222;
  t2227 = t1629*t2210;
  t2229 = -1.*t1638*t2216;
  t2230 = t2227 + t2229;
  t2232 = -1.*t1788*t2223;
  t2233 = t1704*t2230;
  t2234 = t2232 + t2233;
  t2240 = t1704*t2223;
  t2241 = t1788*t2230;
  t2242 = t2240 + t2241;
  t2325 = -1.*t1325*t346*t1074*t1381;
  t2328 = -1.*t1334*t1325*t346*t1320;
  t2329 = t2325 + t2328;
  t2335 = t1334*t1325*t346*t1074;
  t2336 = -1.*t1325*t346*t1381*t1320;
  t2341 = t2335 + t2336;
  t2351 = t1638*t2329;
  t2362 = t1629*t2341;
  t2364 = t2351 + t2362;
  t2368 = t1629*t2329;
  t2375 = -1.*t1638*t2341;
  t2379 = t2368 + t2375;
  t2403 = -1.*t1788*t2364;
  t2409 = t1704*t2379;
  t2412 = t2403 + t2409;
  t2423 = t1704*t2364;
  t2430 = t1788*t2379;
  t2432 = t2423 + t2430;
  t2293 = 0.049*t346;
  t2294 = 0.135*t876;
  t2295 = t2293 + t2294;
  t2461 = -1.*t346*t1074*t1381*t115;
  t2462 = -1.*t1334*t346*t115*t1320;
  t2465 = t2461 + t2462;
  t2468 = t1334*t346*t1074*t115;
  t2469 = -1.*t346*t1381*t115*t1320;
  t2471 = t2468 + t2469;
  t2473 = t1638*t2465;
  t2474 = t1629*t2471;
  t2475 = t2473 + t2474;
  t2478 = t1629*t2465;
  t2481 = -1.*t1638*t2471;
  t2482 = t2478 + t2481;
  t2486 = -1.*t1788*t2475;
  t2489 = t1704*t2482;
  t2490 = t2486 + t2489;
  t2514 = t1704*t2475;
  t2517 = t1788*t2482;
  t2518 = t2514 + t2517;
  t2573 = -1.*t346*t1074*t1381;
  t2580 = -1.*t1334*t346*t1320;
  t2584 = t2573 + t2580;
  t2591 = -1.*t1334*t346*t1074;
  t2599 = t346*t1381*t1320;
  t2600 = t2591 + t2599;
  t2604 = -1.*t1638*t2584;
  t2606 = t1629*t2600;
  t2609 = t2604 + t2606;
  t2612 = t1629*t2584;
  t2613 = t1638*t2600;
  t2615 = t2612 + t2613;
  t2619 = t1788*t2609;
  t2620 = t1704*t2615;
  t2621 = t2619 + t2620;
  t2626 = t1704*t2609;
  t2628 = -1.*t1788*t2615;
  t2630 = t2626 + t2628;
  t2567 = -0.09*t1074;
  t2568 = -0.049*t1320;
  t2570 = t2567 + t2568;
  t2651 = -1.*t1325*t1074*t876;
  t2653 = t115*t1320;
  t2654 = t2651 + t2653;
  t2661 = t1381*t2654;
  t2670 = t2661 + t2038;
  t2675 = t1334*t2654;
  t2676 = -1.*t1381*t2034;
  t2677 = t2675 + t2676;
  t2683 = -1.*t1638*t2670;
  t2684 = t1629*t2677;
  t2685 = t2683 + t2684;
  t2687 = t1629*t2670;
  t2700 = t1638*t2677;
  t2701 = t2687 + t2700;
  t2710 = t1788*t2685;
  t2711 = t1704*t2701;
  t2714 = t2710 + t2711;
  t2718 = t1704*t2685;
  t2720 = -1.*t1788*t2701;
  t2721 = t2718 + t2720;
  t2645 = 0.049*t1074;
  t2647 = t2645 + t1321;
  t2758 = t1325*t1074;
  t2759 = -1.*t115*t876*t1320;
  t2764 = t2758 + t2759;
  t2768 = t1381*t1476;
  t2769 = t1334*t2764;
  t2770 = t2768 + t2769;
  t2774 = -1.*t1381*t2764;
  t2778 = t1681 + t2774;
  t2783 = -1.*t1638*t2770;
  t2784 = t1629*t2778;
  t2785 = t2783 + t2784;
  t2788 = t1629*t2770;
  t2792 = t1638*t2778;
  t2796 = t2788 + t2792;
  t2801 = t1788*t2785;
  t2804 = t1704*t2796;
  t2808 = t2801 + t2804;
  t2813 = t1704*t2785;
  t2815 = -1.*t1788*t2796;
  t2816 = t2813 + t2815;
  t2589 = t1669*t2584;
  t2602 = t1645*t2600;
  t2611 = t1853*t2609;
  t2617 = t1796*t2615;
  t2622 = t1936*t2621;
  t2632 = t1905*t2630;
  t2633 = -1.*t1898*t2621;
  t2634 = t1889*t2630;
  t2635 = t2633 + t2634;
  t2637 = -1.13106*t2635;
  t2638 = t1889*t2621;
  t2641 = t1898*t2630;
  t2642 = t2638 + t2641;
  t2643 = 0.0306*t2642;
  t2837 = -0.21*t1334;
  t2839 = -0.049*t1381;
  t2840 = t2837 + t2839;
  t2843 = 0.049*t1334;
  t2845 = t2843 + t1408;
  t2852 = -1.*t1334*t2018;
  t2855 = t2852 + t2676;
  t2858 = -1.*t1638*t2039;
  t2861 = t1629*t2855;
  t2862 = t2858 + t2861;
  t2864 = t1638*t2855;
  t2866 = t2064 + t2864;
  t2868 = t1788*t2862;
  t2871 = t1704*t2866;
  t2872 = t2868 + t2871;
  t2874 = t1704*t2862;
  t2875 = -1.*t1788*t2866;
  t2876 = t2874 + t2875;
  t2903 = t1074*t115*t876;
  t2910 = t1325*t1320;
  t2911 = t2903 + t2910;
  t2916 = -1.*t1381*t2911;
  t2917 = t2916 + t2769;
  t2919 = -1.*t1334*t2911;
  t2920 = t2919 + t2774;
  t2925 = -1.*t1638*t2917;
  t2926 = t1629*t2920;
  t2930 = t2925 + t2926;
  t2936 = t1629*t2917;
  t2937 = t1638*t2920;
  t2938 = t2936 + t2937;
  t2940 = t1788*t2930;
  t2941 = t1704*t2938;
  t2943 = t2940 + t2941;
  t2945 = t1704*t2930;
  t2948 = -1.*t1788*t2938;
  t2950 = t2945 + t2948;
  t2988 = t1334*t346*t1074;
  t2989 = -1.*t346*t1381*t1320;
  t2990 = t2988 + t2989;
  t2993 = -1.*t1629*t2990;
  t2995 = t2604 + t2993;
  t2997 = -1.*t1638*t2990;
  t2998 = t2612 + t2997;
  t3001 = t1788*t2995;
  t3004 = t1704*t2998;
  t3005 = t3001 + t3004;
  t3007 = t1704*t2995;
  t3008 = -1.*t1788*t2998;
  t3010 = t3007 + t3008;
  t2978 = 0.00159*t1629;
  t2980 = t2978 + t1659;
  t2984 = -0.27068*t1629;
  t2985 = -0.00159*t1638;
  t2987 = t2984 + t2985;
  t3028 = -1.*t1629*t2043;
  t3030 = t2858 + t3028;
  t3034 = t1788*t3030;
  t3035 = t3034 + t2083;
  t3037 = t1704*t3030;
  t3040 = -1.*t1788*t2070;
  t3041 = t3037 + t3040;
  t3066 = t1334*t2911;
  t3067 = t1381*t2764;
  t3074 = t3066 + t3067;
  t3077 = -1.*t1629*t3074;
  t3080 = t2925 + t3077;
  t3083 = -1.*t1638*t3074;
  t3086 = t2936 + t3083;
  t3090 = t1788*t3080;
  t3091 = t1704*t3086;
  t3094 = t3090 + t3091;
  t3100 = t1704*t3080;
  t3101 = -1.*t1788*t3086;
  t3105 = t3100 + t3101;
  t3134 = t1638*t2584;
  t3136 = t1629*t2990;
  t3137 = t3134 + t3136;
  t3145 = -1.*t1788*t3137;
  t3146 = t3145 + t3004;
  t3150 = -1.*t1704*t3137;
  t3153 = t3150 + t3008;
  t3127 = -0.70544*t1704;
  t3130 = 0.01841*t1788;
  t3131 = t3127 + t3130;
  t3139 = -0.01841*t1704;
  t3140 = t3139 + t1795;
  t3169 = -1.*t1704*t2060;
  t3171 = t3169 + t3040;
  t2137 = t1889*t2090;
  t3198 = t1638*t2917;
  t3199 = t1629*t3074;
  t3202 = t3198 + t3199;
  t3212 = -1.*t1788*t3202;
  t3214 = t3212 + t3091;
  t3217 = -1.*t1704*t3202;
  t3218 = t3217 + t3101;
  t3155 = -1.*t1898*t3146;
  t3252 = t1704*t3137;
  t3254 = t1788*t2998;
  t3255 = t3252 + t3254;
  t3159 = t1889*t3146;
  t3243 = 0.02159*t1889;
  t3244 = t3243 + t1931;
  t3246 = -1.11344*t1889;
  t3248 = -0.02159*t1898;
  t3249 = t3246 + t3248;
  t3173 = -1.*t1898*t2090;
  t2152 = -1.*t1898*t2120;
  t2160 = t2137 + t2152;
  t3224 = -1.*t1898*t3214;
  t3277 = t1704*t3202;
  t3278 = t1788*t3086;
  t3279 = t3277 + t3278;
  t3232 = t1889*t3214;
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
  p_output1[19]=0.135*t115 - 1.*t1325*t1331 + t1411*t1476 + t1550*t1627 + t1645*t1652 + t1669*t1691 + t1796*t1816 + t1853*t1882 + t1905*t1915 + t1936*t1951 + 0.0306*(t1898*t1915 + t1889*t1951) - 1.13106*(t1889*t1915 - 1.*t1898*t1951) - 0.1305*t115*t346 - 1.*t115*t1323*t876 - 1.*t115*t951;
  p_output1[20]=-0.135*t1325 - 1.*t115*t1331 + t1411*t2018 + t1550*t2034 + t1645*t2039 + t1669*t2043 + t1796*t2060 + t1853*t2070 + t1905*t2090 + t1936*t2120 + 0.0306*(t1898*t2090 + t1889*t2120) - 1.13106*t2160 + 0.1305*t1325*t346 + t1323*t1325*t876 + t1325*t951;
  p_output1[21]=t1645*t2210 + t1669*t2216 + t1796*t2223 + t1853*t2230 + t1905*t2234 + t1936*t2242 + 0.0306*(t1898*t2234 + t1889*t2242) - 1.13106*(t1889*t2234 - 1.*t1898*t2242) + 0.0045*t346 - 0.049*t876 - 1.*t1323*t876 - 1.*t1074*t1411*t876 + t1320*t1550*t876;
  p_output1[22]=t1325*t2295 + t1645*t2329 + t1669*t2341 + t1796*t2364 + t1853*t2379 + t1905*t2412 + t1936*t2432 + 0.0306*(t1898*t2412 + t1889*t2432) - 1.13106*(t1889*t2412 - 1.*t1898*t2432) + t1323*t1325*t346 + t1074*t1325*t1411*t346 - 1.*t1320*t1325*t1550*t346 - 0.1305*t1325*t876;
  p_output1[23]=t115*t2295 + t1645*t2465 + t1669*t2471 + t1796*t2475 + t1853*t2482 + t1905*t2490 + t1936*t2518 + 0.0306*(t1898*t2490 + t1889*t2518) - 1.13106*(t1889*t2490 - 1.*t1898*t2518) + t115*t1323*t346 + t1074*t115*t1411*t346 - 1.*t115*t1320*t1550*t346 - 0.1305*t115*t876;
  p_output1[24]=t2589 + t2602 + t2611 + t2617 + t2622 + t2632 + t2637 + t2643 - 1.*t1320*t1411*t346 - 1.*t1074*t1550*t346 + t2570*t346;
  p_output1[25]=t1411*t2034 - 1.*t115*t2647 + t1550*t2654 + t1669*t2670 + t1645*t2677 + t1853*t2685 + t1796*t2701 + t1936*t2714 + t1905*t2721 - 1.13106*(-1.*t1898*t2714 + t1889*t2721) + 0.0306*(t1889*t2714 + t1898*t2721) + t1325*t2570*t876;
  p_output1[26]=t1476*t1550 + t1325*t2647 + t1411*t2764 + t1669*t2770 + t1645*t2778 + t1853*t2785 + t1796*t2796 + t1936*t2808 + t1905*t2816 - 1.13106*(-1.*t1898*t2808 + t1889*t2816) + 0.0306*(t1889*t2808 + t1898*t2816) + t115*t2570*t876;
  p_output1[27]=t2589 + t2602 + t2611 + t2617 + t2622 + t2632 + t2637 + t2643 + t1074*t2840*t346 - 1.*t1320*t2845*t346;
  p_output1[28]=t1669*t2039 + t2018*t2840 + t2034*t2845 + t1645*t2855 + t1853*t2862 + t1796*t2866 + t1936*t2872 + t1905*t2876 - 1.13106*(-1.*t1898*t2872 + t1889*t2876) + 0.0306*(t1889*t2872 + t1898*t2876);
  p_output1[29]=t2764*t2845 + t2840*t2911 + t1669*t2917 + t1645*t2920 + t1853*t2930 + t1796*t2938 + t1936*t2943 + t1905*t2950 - 1.13106*(-1.*t1898*t2943 + t1889*t2950) + 0.0306*(t1889*t2943 + t1898*t2950);
  p_output1[30]=t2584*t2980 + t2987*t2990 + t1853*t2995 + t1796*t2998 + t1936*t3005 + t1905*t3010 - 1.13106*(-1.*t1898*t3005 + t1889*t3010) + 0.0306*(t1889*t3005 + t1898*t3010);
  p_output1[31]=t1796*t2070 + t2039*t2980 + t2043*t2987 + t1853*t3030 + t1936*t3035 + t1905*t3041 - 1.13106*(-1.*t1898*t3035 + t1889*t3041) + 0.0306*(t1889*t3035 + t1898*t3041);
  p_output1[32]=t2917*t2980 + t2987*t3074 + t1853*t3080 + t1796*t3086 + t1936*t3094 + t1905*t3105 - 1.13106*(-1.*t1898*t3094 + t1889*t3105) + 0.0306*(t1889*t3094 + t1898*t3105);
  p_output1[33]=t3131*t3137 + t2998*t3140 + t1936*t3146 + t1905*t3153 - 1.13106*(t1889*t3153 + t3155) + 0.0306*(t1898*t3153 + t3159);
  p_output1[34]=t1936*t2090 + t2060*t3131 + t2070*t3140 + t1905*t3171 + 0.0306*(t2137 + t1898*t3171) - 1.13106*(t1889*t3171 + t3173);
  p_output1[35]=t3086*t3140 + t3131*t3202 + t1936*t3214 + t1905*t3218 - 1.13106*(t1889*t3218 + t3224) + 0.0306*(t1898*t3218 + t3232);
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=t3146*t3244 + t3249*t3255 - 1.13106*(t3155 - 1.*t1889*t3255) + 0.0306*(t3159 - 1.*t1898*t3255);
  p_output1[40]=0.0306*t2160 - 1.13106*(-1.*t1889*t2120 + t3173) + t2090*t3244 + t2120*t3249;
  p_output1[41]=t3214*t3244 + t3249*t3279 - 1.13106*(t3224 - 1.*t1889*t3279) + 0.0306*(t3232 - 1.*t1898*t3279);
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
  p_output1[65]=0;
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

void J_position_leftFoot_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




