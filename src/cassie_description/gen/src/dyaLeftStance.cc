/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:52 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "dyaLeftStance.hh"
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
  double t64;
  double t120;
  double t175;
  double t197;
  double t277;
  double t605;
  double t846;
  double t861;
  double t862;
  double t893;
  double t943;
  double t974;
  double t1011;
  double t1015;
  double t1072;
  double t1143;
  double t1147;
  double t1148;
  double t1196;
  double t1198;
  double t1217;
  double t1242;
  double t1259;
  double t1264;
  double t1270;
  double t1289;
  double t1301;
  double t1307;
  double t685;
  double t736;
  double t774;
  double t199;
  double t506;
  double t568;
  double t1079;
  double t1081;
  double t1105;
  double t945;
  double t977;
  double t998;
  double t1282;
  double t1285;
  double t1287;
  double t1622;
  double t1645;
  double t1656;
  double t1221;
  double t1245;
  double t1257;
  double t1683;
  double t1688;
  double t1696;
  double t1701;
  double t1706;
  double t1323;
  double t1324;
  double t1332;
  double t118;
  double t589;
  double t606;
  double t818;
  double t1073;
  double t1154;
  double t1276;
  double t1313;
  double t1334;
  double t1364;
  double t1413;
  double t1427;
  double t1445;
  double t1455;
  double t1540;
  double t1554;
  double t1617;
  double t1619;
  double t1671;
  double t1680;
  double t1694;
  double t1709;
  double t1710;
  double t1713;
  double t1714;
  double t1715;
  double t1723;
  double t1726;
  double t1737;
  double t1739;
  double t1749;
  double t1805;
  double t1811;
  double t1786;
  double t1789;
  double t1790;
  double t1515;
  double t1774;
  double t1777;
  double t1778;
  double t1866;
  double t1867;
  double t1868;
  double t1880;
  double t1896;
  double t1902;
  double t1917;
  double t1919;
  double t2041;
  double t2050;
  double t2052;
  double t1996;
  double t1999;
  double t2000;
  double t1983;
  double t1986;
  double t1864;
  double t2022;
  double t2023;
  double t2030;
  double t2012;
  double t2015;
  double t1874;
  double t2124;
  double t2127;
  double t2179;
  double t2184;
  double t2189;
  double t2190;
  double t2194;
  double t2202;
  double t2220;
  double t2222;
  double t2225;
  double t2226;
  double t2229;
  double t2232;
  double t2239;
  double t2241;
  double t2244;
  double t2255;
  double t2261;
  double t2262;
  double t2283;
  double t2289;
  double t2293;
  double t2296;
  double t2311;
  double t2313;
  double t2314;
  double t2268;
  double t2273;
  double t2276;
  double t2201;
  double t2204;
  double t2205;
  double t2211;
  double t2214;
  double t2216;
  double t2247;
  double t2253;
  double t2254;
  double t2231;
  double t2235;
  double t2236;
  double t2372;
  double t2375;
  double t2380;
  double t2295;
  double t2299;
  double t2305;
  double t2315;
  double t2316;
  double t2318;
  double t2387;
  double t2388;
  double t2391;
  double t2400;
  double t2401;
  double t2321;
  double t2322;
  double t2325;
  double t2180;
  double t2188;
  double t2206;
  double t2217;
  double t2246;
  double t2267;
  double t2308;
  double t2320;
  double t2326;
  double t2329;
  double t2337;
  double t2339;
  double t2343;
  double t2347;
  double t2352;
  double t2355;
  double t2358;
  double t2361;
  double t2383;
  double t2384;
  double t2396;
  double t2402;
  double t2403;
  double t2407;
  double t2408;
  double t2410;
  double t2412;
  double t2414;
  double t2417;
  double t2421;
  double t2422;
  double t2428;
  double t2431;
  double t2433;
  double t2435;
  double t2436;
  double t2350;
  double t2423;
  double t2426;
  double t2427;
  double t2474;
  double t2475;
  double t2477;
  double t2481;
  double t2482;
  double t2487;
  double t2488;
  double t2491;
  double t2558;
  double t2560;
  double t2564;
  double t2529;
  double t2530;
  double t2535;
  double t2536;
  double t2540;
  double t2473;
  double t2547;
  double t2551;
  double t2553;
  double t2542;
  double t2543;
  double t2480;
  double t2593;
  double t2598;
  double t2450;
  double t2451;
  double t2453;
  double t2467;
  double t2468;
  double t2470;
  double t2472;
  double t2441;
  double t2442;
  double t2443;
  double t2687;
  double t2689;
  double t2690;
  double t2693;
  double t2696;
  double t2700;
  double t2701;
  double t2650;
  double t2653;
  double t2655;
  double t2656;
  double t2659;
  double t2670;
  double t2672;
  double t2676;
  double t2677;
  double t2679;
  double t2681;
  double t2685;
  double t2707;
  double t2710;
  double t2716;
  double t2496;
  double t2497;
  double t2501;
  double t2505;
  double t2506;
  double t2508;
  double t2570;
  double t2571;
  double t2572;
  double t2577;
  double t2580;
  double t2582;
  double t2741;
  double t2743;
  double t2600;
  double t2602;
  double t2609;
  double t2616;
  double t2618;
  double t2622;
  double t2822;
  double t2821;
  double t2828;
  double t2829;
  double t2831;
  double t2835;
  double t2836;
  double t2840;
  double t2841;
  double t2827;
  double t2843;
  double t2848;
  double t2850;
  double t2853;
  double t2855;
  double t2849;
  double t2856;
  double t2858;
  double t2863;
  double t2865;
  double t2866;
  double t2862;
  double t2868;
  double t2872;
  double t2877;
  double t2878;
  double t2879;
  double t2924;
  double t2927;
  double t2931;
  double t2907;
  double t2916;
  double t2919;
  double t2923;
  double t2934;
  double t2935;
  double t2939;
  double t2941;
  double t2943;
  double t2950;
  double t2952;
  double t2955;
  double t2936;
  double t2945;
  double t2946;
  double t2981;
  double t2982;
  double t2984;
  double t2969;
  double t2970;
  double t2974;
  double t2976;
  double t2986;
  double t2990;
  double t2998;
  double t3001;
  double t3008;
  double t3015;
  double t3018;
  double t3028;
  double t2993;
  double t3009;
  double t3010;
  double t3060;
  double t3061;
  double t3065;
  double t3068;
  double t3069;
  double t3070;
  double t3066;
  double t3071;
  double t3077;
  double t3083;
  double t3088;
  double t3089;
  double t3081;
  double t3091;
  double t3094;
  double t3098;
  double t3099;
  double t3100;
  double t3129;
  double t3134;
  double t3135;
  double t3122;
  double t3141;
  double t3150;
  double t3155;
  double t3156;
  double t3168;
  double t3152;
  double t3180;
  double t3181;
  double t3186;
  double t3192;
  double t3193;
  double t3183;
  double t3197;
  double t3198;
  double t3202;
  double t3213;
  double t3216;
  double t2947;
  double t2956;
  double t2958;
  double t2959;
  double t2961;
  double t2963;
  double t2964;
  double t2966;
  double t2968;
  double t3201;
  double t3221;
  double t3224;
  double t3226;
  double t3230;
  double t3233;
  double t3234;
  double t3239;
  double t3243;
  double t3247;
  double t2875;
  double t2880;
  double t2890;
  double t2893;
  double t2894;
  double t2903;
  double t3250;
  double t3284;
  double t3289;
  double t3310;
  double t3274;
  double t3276;
  double t3278;
  double t3280;
  double t3311;
  double t3325;
  double t3334;
  double t3337;
  double t3340;
  double t3347;
  double t3350;
  double t3358;
  double t3333;
  double t3341;
  double t3343;
  double t3251;
  double t3254;
  double t3255;
  double t3257;
  double t3263;
  double t3265;
  double t3266;
  double t2892;
  double t2905;
  double t2906;
  double t3392;
  double t3393;
  double t3398;
  double t3418;
  double t3419;
  double t3423;
  double t3438;
  double t3443;
  double t3445;
  double t3399;
  double t3428;
  double t3431;
  double t3476;
  double t3487;
  double t3493;
  double t3497;
  double t3505;
  double t3507;
  double t3512;
  double t3515;
  double t3520;
  double t3510;
  double t3523;
  double t3525;
  double t3529;
  double t3535;
  double t3536;
  double t3252;
  double t3566;
  double t3568;
  double t3569;
  double t3570;
  double t3571;
  double t3575;
  double t3577;
  double t3581;
  double t3582;
  double t3576;
  double t3586;
  double t3587;
  double t3597;
  double t3598;
  double t3604;
  double t3381;
  double t3645;
  double t3648;
  double t3649;
  double t3652;
  double t3655;
  double t3664;
  double t3668;
  double t3671;
  double t3684;
  double t3685;
  double t3691;
  double t3662;
  double t3672;
  double t3681;
  double t3720;
  double t3722;
  double t3724;
  double t3726;
  double t3729;
  double t3732;
  double t3733;
  double t3734;
  double t3730;
  double t3736;
  double t3739;
  double t3746;
  double t3749;
  double t3758;
  double t3800;
  double t3808;
  double t3812;
  double t3815;
  double t3817;
  double t3825;
  double t3826;
  double t3827;
  double t3819;
  double t3829;
  double t3830;
  double t3838;
  double t3840;
  double t3841;
  double t3983;
  double t3984;
  double t3985;
  double t3986;
  double t3988;
  double t3994;
  double t3996;
  double t4000;
  double t3990;
  double t4001;
  double t4008;
  double t4012;
  double t4019;
  double t4020;
  double t4009;
  double t4027;
  double t4028;
  double t4035;
  double t4038;
  double t4040;
  double t4075;
  double t4077;
  double t4082;
  double t4086;
  double t4098;
  double t4103;
  double t4104;
  double t4136;
  double t4138;
  double t4148;
  double t4149;
  double t4140;
  double t4143;
  double t4145;
  double t4177;
  double t4180;
  double t4181;
  double t4184;
  double t4187;
  double t4189;
  double t4190;
  t64 = Cos(var1[8]);
  t120 = Cos(var1[9]);
  t175 = -1.*t120;
  t197 = 1. + t175;
  t277 = Sin(var1[9]);
  t605 = Sin(var1[8]);
  t846 = -1.*var1[9];
  t861 = 0.226893 + t846;
  t862 = Cos(t861);
  t893 = -1.*t862;
  t943 = 1. + t893;
  t974 = Sin(t861);
  t1011 = -1.*t64*t277;
  t1015 = -1.*t120*t605;
  t1072 = t1011 + t1015;
  t1143 = t120*t64;
  t1147 = -1.*t277*t605;
  t1148 = t1143 + t1147;
  t1196 = Cos(var1[13]);
  t1198 = -1.*t1196;
  t1217 = 1. + t1198;
  t1242 = Sin(var1[13]);
  t1259 = t974*t1072;
  t1264 = t862*t1148;
  t1270 = t1259 + t1264;
  t1289 = t862*t1072;
  t1301 = -1.*t974*t1148;
  t1307 = t1289 + t1301;
  t685 = -0.21*t197;
  t736 = 0.049*t277;
  t774 = t685 + t736;
  t199 = -0.049*t197;
  t506 = -0.21*t277;
  t568 = t199 + t506;
  t1079 = 0.01841*t943;
  t1081 = -0.70544*t974;
  t1105 = t1079 + t1081;
  t945 = -0.70544*t943;
  t977 = -0.01841*t974;
  t998 = t945 + t977;
  t1282 = -1.11344*t1217;
  t1285 = 0.02159*t1242;
  t1287 = t1282 + t1285;
  t1622 = t64*t277;
  t1645 = t120*t605;
  t1656 = t1622 + t1645;
  t1221 = -0.02159*t1217;
  t1245 = -1.11344*t1242;
  t1257 = t1221 + t1245;
  t1683 = -1.*t974*t1656;
  t1688 = t1683 + t1264;
  t1696 = t862*t1656;
  t1701 = t974*t1148;
  t1706 = t1696 + t1701;
  t1323 = -1.*t1242*t1270;
  t1324 = t1196*t1307;
  t1332 = t1323 + t1324;
  t118 = 0.049*t64;
  t589 = t64*t568;
  t606 = -0.09*t605;
  t818 = -1.*t774*t605;
  t1073 = t998*t1072;
  t1154 = t1105*t1148;
  t1276 = t1257*t1270;
  t1313 = t1287*t1307;
  t1334 = -1.11344*t1332;
  t1364 = t1196*t1270;
  t1413 = t1242*t1307;
  t1427 = t1364 + t1413;
  t1445 = -0.02159*t1427;
  t1455 = t118 + t589 + t606 + t818 + t1073 + t1154 + t1276 + t1313 + t1334 + t1445;
  t1540 = 0.09*t64;
  t1554 = t64*t774;
  t1617 = 0.049*t605;
  t1619 = t568*t605;
  t1671 = t1105*t1656;
  t1680 = t998*t1148;
  t1694 = t1287*t1688;
  t1709 = t1257*t1706;
  t1710 = t1242*t1688;
  t1713 = t1196*t1706;
  t1714 = t1710 + t1713;
  t1715 = -0.02159*t1714;
  t1723 = t1196*t1688;
  t1726 = -1.*t1242*t1706;
  t1737 = t1723 + t1726;
  t1739 = -1.11344*t1737;
  t1749 = t1540 + t1554 + t1617 + t1619 + t1671 + t1680 + t1694 + t1709 + t1715 + t1739;
  t1805 = 0.02159*t1196;
  t1811 = t1805 + t1245;
  t1786 = -1.11344*t1196;
  t1789 = -0.02159*t1242;
  t1790 = t1786 + t1789;
  t1515 = Power(t1455,2);
  t1774 = Power(t1749,2);
  t1777 = 0.00002025 + t1515 + t1774;
  t1778 = 1/Sqrt(t1777);
  t1866 = -1.*t120*t64;
  t1867 = t277*t605;
  t1868 = t1866 + t1867;
  t1880 = -1.*t974*t1072;
  t1896 = t862*t1868;
  t1902 = t1880 + t1896;
  t1917 = t974*t1868;
  t1919 = t1289 + t1917;
  t2041 = t1289 + t1696;
  t2050 = t974*t1656;
  t2052 = t1259 + t2050;
  t1996 = -0.21*t120;
  t1999 = -0.049*t277;
  t2000 = t1996 + t1999;
  t1983 = 0.049*t120;
  t1986 = t1983 + t506;
  t1864 = t1105*t1072;
  t2022 = 0.01841*t862;
  t2023 = 0.70544*t974;
  t2030 = t2022 + t2023;
  t2012 = 0.70544*t862;
  t2015 = t2012 + t977;
  t1874 = t998*t1868;
  t2124 = t1264 + t1896;
  t2127 = t1701 + t1917;
  t2179 = Cos(var1[16]);
  t2184 = Sin(var1[16]);
  t2189 = Cos(var1[17]);
  t2190 = -1.*t2189;
  t2194 = 1. + t2190;
  t2202 = Sin(var1[17]);
  t2220 = -1.*var1[17];
  t2222 = 0.226893 + t2220;
  t2225 = Cos(t2222);
  t2226 = -1.*t2225;
  t2229 = 1. + t2226;
  t2232 = Sin(t2222);
  t2239 = -1.*t2189*t2184;
  t2241 = -1.*t2179*t2202;
  t2244 = t2239 + t2241;
  t2255 = t2179*t2189;
  t2261 = -1.*t2184*t2202;
  t2262 = t2255 + t2261;
  t2283 = Cos(var1[21]);
  t2289 = -1.*t2283;
  t2293 = 1. + t2289;
  t2296 = Sin(var1[21]);
  t2311 = t2225*t2244;
  t2313 = -1.*t2232*t2262;
  t2314 = t2311 + t2313;
  t2268 = t2232*t2244;
  t2273 = t2225*t2262;
  t2276 = t2268 + t2273;
  t2201 = -0.049*t2194;
  t2204 = -0.21*t2202;
  t2205 = t2201 + t2204;
  t2211 = -0.21*t2194;
  t2214 = 0.049*t2202;
  t2216 = t2211 + t2214;
  t2247 = 0.01841*t2229;
  t2253 = -0.70544*t2232;
  t2254 = t2247 + t2253;
  t2231 = -0.70544*t2229;
  t2235 = -0.01841*t2232;
  t2236 = t2231 + t2235;
  t2372 = t2189*t2184;
  t2375 = t2179*t2202;
  t2380 = t2372 + t2375;
  t2295 = -0.02159*t2293;
  t2299 = -1.11344*t2296;
  t2305 = t2295 + t2299;
  t2315 = -1.11344*t2293;
  t2316 = 0.02159*t2296;
  t2318 = t2315 + t2316;
  t2387 = t2225*t2380;
  t2388 = t2232*t2262;
  t2391 = t2387 + t2388;
  t2400 = -1.*t2232*t2380;
  t2401 = t2400 + t2273;
  t2321 = t2283*t2314;
  t2322 = -1.*t2276*t2296;
  t2325 = t2321 + t2322;
  t2180 = 0.049*t2179;
  t2188 = -0.09*t2184;
  t2206 = t2179*t2205;
  t2217 = -1.*t2184*t2216;
  t2246 = t2236*t2244;
  t2267 = t2254*t2262;
  t2308 = t2276*t2305;
  t2320 = t2314*t2318;
  t2326 = -1.11344*t2325;
  t2329 = t2283*t2276;
  t2337 = t2314*t2296;
  t2339 = t2329 + t2337;
  t2343 = -0.02159*t2339;
  t2347 = t2180 + t2188 + t2206 + t2217 + t2246 + t2267 + t2308 + t2320 + t2326 + t2343;
  t2352 = 0.09*t2179;
  t2355 = 0.049*t2184;
  t2358 = t2184*t2205;
  t2361 = t2179*t2216;
  t2383 = t2254*t2380;
  t2384 = t2236*t2262;
  t2396 = t2391*t2305;
  t2402 = t2401*t2318;
  t2403 = t2283*t2391;
  t2407 = t2401*t2296;
  t2408 = t2403 + t2407;
  t2410 = -0.02159*t2408;
  t2412 = t2283*t2401;
  t2414 = -1.*t2391*t2296;
  t2417 = t2412 + t2414;
  t2421 = -1.11344*t2417;
  t2422 = t2352 + t2355 + t2358 + t2361 + t2383 + t2384 + t2396 + t2402 + t2410 + t2421;
  t2428 = 0.02159*t2283;
  t2431 = t2428 + t2299;
  t2433 = -1.11344*t2283;
  t2435 = -0.02159*t2296;
  t2436 = t2433 + t2435;
  t2350 = Power(t2347,2);
  t2423 = Power(t2422,2);
  t2426 = 0.00002025 + t2350 + t2423;
  t2427 = 1/Sqrt(t2426);
  t2474 = -1.*t2179*t2189;
  t2475 = t2184*t2202;
  t2477 = t2474 + t2475;
  t2481 = t2232*t2477;
  t2482 = t2311 + t2481;
  t2487 = -1.*t2232*t2244;
  t2488 = t2225*t2477;
  t2491 = t2487 + t2488;
  t2558 = t2232*t2380;
  t2560 = t2268 + t2558;
  t2564 = t2311 + t2387;
  t2529 = 0.049*t2189;
  t2530 = t2529 + t2204;
  t2535 = -0.21*t2189;
  t2536 = -0.049*t2202;
  t2540 = t2535 + t2536;
  t2473 = t2254*t2244;
  t2547 = 0.01841*t2225;
  t2551 = 0.70544*t2232;
  t2553 = t2547 + t2551;
  t2542 = 0.70544*t2225;
  t2543 = t2542 + t2235;
  t2480 = t2236*t2477;
  t2593 = t2388 + t2481;
  t2598 = t2273 + t2488;
  t2450 = -1.*t2283*t2391;
  t2451 = -1.*t2401*t2296;
  t2453 = t2450 + t2451;
  t2467 = -0.09*t2179;
  t2468 = -0.049*t2184;
  t2470 = -1.*t2184*t2205;
  t2472 = -1.*t2179*t2216;
  t2441 = -1.*t2283*t2276;
  t2442 = -1.*t2314*t2296;
  t2443 = t2441 + t2442;
  t2687 = -1.*t2254*t2380;
  t2689 = -1.*t2236*t2262;
  t2690 = -1.*t2391*t2305;
  t2693 = -1.*t2401*t2318;
  t2696 = 0.02159*t2408;
  t2700 = 1.11344*t2417;
  t2701 = t2467 + t2468 + t2470 + t2472 + t2687 + t2689 + t2690 + t2693 + t2696 + t2700;
  t2650 = -0.049*t2179;
  t2653 = 0.09*t2184;
  t2655 = -1.*t2179*t2205;
  t2656 = t2184*t2216;
  t2659 = -1.*t2236*t2244;
  t2670 = -1.*t2254*t2262;
  t2672 = -1.*t2276*t2305;
  t2676 = -1.*t2314*t2318;
  t2677 = 1.11344*t2325;
  t2679 = 0.02159*t2339;
  t2681 = t2650 + t2653 + t2655 + t2656 + t2659 + t2670 + t2672 + t2676 + t2677 + t2679;
  t2685 = Power(t2681,2);
  t2707 = Power(t2701,2);
  t2710 = t2685 + t2707;
  t2716 = 1/t2710;
  t2496 = t2283*t2482;
  t2497 = t2491*t2296;
  t2501 = t2496 + t2497;
  t2505 = t2283*t2491;
  t2506 = -1.*t2482*t2296;
  t2508 = t2505 + t2506;
  t2570 = t2283*t2560;
  t2571 = t2564*t2296;
  t2572 = t2570 + t2571;
  t2577 = t2283*t2564;
  t2580 = -1.*t2560*t2296;
  t2582 = t2577 + t2580;
  t2741 = -1.*t2254*t2244;
  t2743 = -1.*t2236*t2477;
  t2600 = t2283*t2593;
  t2602 = t2598*t2296;
  t2609 = t2600 + t2602;
  t2616 = t2283*t2598;
  t2618 = -1.*t2593*t2296;
  t2622 = t2616 + t2618;
  t2822 = Cos(var1[4]);
  t2821 = Cos(var1[14]);
  t2828 = Sin(var1[14]);
  t2829 = Sin(var1[15]);
  t2831 = t2822*t2828*t2829;
  t2835 = Cos(var1[15]);
  t2836 = Sin(var1[4]);
  t2840 = -1.*t2835*t2836;
  t2841 = t2831 + t2840;
  t2827 = t2821*t2822*t2184;
  t2843 = t2179*t2841;
  t2848 = t2827 + t2843;
  t2850 = t2821*t2179*t2822;
  t2853 = -1.*t2184*t2841;
  t2855 = t2850 + t2853;
  t2849 = -1.*t2202*t2848;
  t2856 = t2189*t2855;
  t2858 = t2849 + t2856;
  t2863 = t2189*t2848;
  t2865 = t2202*t2855;
  t2866 = t2863 + t2865;
  t2862 = t2232*t2858;
  t2868 = t2225*t2866;
  t2872 = t2862 + t2868;
  t2877 = t2225*t2858;
  t2878 = -1.*t2232*t2866;
  t2879 = t2877 + t2878;
  t2924 = t2821*t2179*t2829;
  t2927 = -1.*t2828*t2184;
  t2931 = t2924 + t2927;
  t2907 = -1.*t2179*t2828;
  t2916 = -1.*t2821*t2829*t2184;
  t2919 = t2907 + t2916;
  t2923 = t2189*t2919;
  t2934 = -1.*t2931*t2202;
  t2935 = t2923 + t2934;
  t2939 = t2189*t2931;
  t2941 = t2919*t2202;
  t2943 = t2939 + t2941;
  t2950 = t2232*t2935;
  t2952 = t2225*t2943;
  t2955 = t2950 + t2952;
  t2936 = t2225*t2935;
  t2945 = -1.*t2232*t2943;
  t2946 = t2936 + t2945;
  t2981 = -1.*t2179*t2828*t2829;
  t2982 = -1.*t2821*t2184;
  t2984 = t2981 + t2982;
  t2969 = -1.*t2821*t2179;
  t2970 = t2828*t2829*t2184;
  t2974 = t2969 + t2970;
  t2976 = t2189*t2974;
  t2986 = -1.*t2984*t2202;
  t2990 = t2976 + t2986;
  t2998 = t2189*t2984;
  t3001 = t2974*t2202;
  t3008 = t2998 + t3001;
  t3015 = t2232*t2990;
  t3018 = t2225*t3008;
  t3028 = t3015 + t3018;
  t2993 = t2225*t2990;
  t3009 = -1.*t2232*t3008;
  t3010 = t2993 + t3009;
  t3060 = t2821*t2179*t2829*t2836;
  t3061 = -1.*t2828*t2184*t2836;
  t3065 = t3060 + t3061;
  t3068 = -1.*t2179*t2828*t2836;
  t3069 = -1.*t2821*t2829*t2184*t2836;
  t3070 = t3068 + t3069;
  t3066 = -1.*t2202*t3065;
  t3071 = t2189*t3070;
  t3077 = t3066 + t3071;
  t3083 = t2189*t3065;
  t3088 = t2202*t3070;
  t3089 = t3083 + t3088;
  t3081 = t2232*t3077;
  t3091 = t2225*t3089;
  t3094 = t3081 + t3091;
  t3098 = t2225*t3077;
  t3099 = -1.*t2232*t3089;
  t3100 = t3098 + t3099;
  t3129 = t2835*t2822;
  t3134 = t2828*t2829*t2836;
  t3135 = t3129 + t3134;
  t3122 = t2821*t2184*t2836;
  t3141 = t2179*t3135;
  t3150 = t3122 + t3141;
  t3155 = t2821*t2179*t2836;
  t3156 = -1.*t2184*t3135;
  t3168 = t3155 + t3156;
  t3152 = -1.*t2202*t3150;
  t3180 = t2189*t3168;
  t3181 = t3152 + t3180;
  t3186 = t2189*t3150;
  t3192 = t2202*t3168;
  t3193 = t3186 + t3192;
  t3183 = t2232*t3181;
  t3197 = t2225*t3193;
  t3198 = t3183 + t3197;
  t3202 = t2225*t3181;
  t3213 = -1.*t2232*t3193;
  t3216 = t3202 + t3213;
  t2947 = t2283*t2946;
  t2956 = -1.*t2955*t2296;
  t2958 = t2947 + t2956;
  t2959 = 0.766044*t2958;
  t2961 = t2283*t2955;
  t2963 = t2946*t2296;
  t2964 = t2961 + t2963;
  t2966 = 0.642788*t2964;
  t2968 = t2959 + t2966;
  t3201 = -1.*t2296*t3198;
  t3221 = t2283*t3216;
  t3224 = t3201 + t3221;
  t3226 = 0.766044*t3224;
  t3230 = t2283*t3198;
  t3233 = t2296*t3216;
  t3234 = t3230 + t3233;
  t3239 = 0.642788*t3234;
  t3243 = t3226 + t3239;
  t3247 = Power(t2968,2);
  t2875 = -1.*t2296*t2872;
  t2880 = t2283*t2879;
  t2890 = t2875 + t2880;
  t2893 = t2283*t2872;
  t2894 = t2296*t2879;
  t2903 = t2893 + t2894;
  t3250 = Power(t3243,2);
  t3284 = t2821*t2179*t2822*t2829;
  t3289 = -1.*t2822*t2828*t2184;
  t3310 = t3284 + t3289;
  t3274 = -1.*t2179*t2822*t2828;
  t3276 = -1.*t2821*t2822*t2829*t2184;
  t3278 = t3274 + t3276;
  t3280 = t2189*t3278;
  t3311 = -1.*t3310*t2202;
  t3325 = t3280 + t3311;
  t3334 = t2189*t3310;
  t3337 = t3278*t2202;
  t3340 = t3334 + t3337;
  t3347 = t2232*t3325;
  t3350 = t2225*t3340;
  t3358 = t3347 + t3350;
  t3333 = t2225*t3325;
  t3341 = -1.*t2232*t3340;
  t3343 = t3333 + t3341;
  t3251 = t3247 + t3250;
  t3254 = -0.766044*t2890;
  t3255 = -0.642788*t2903;
  t3257 = t3254 + t3255;
  t3263 = Power(t3257,2);
  t3265 = t3247 + t3263 + t3250;
  t3266 = 1/t3265;
  t2892 = 0.766044*t2890;
  t2905 = 0.642788*t2903;
  t2906 = t2892 + t2905;
  t3392 = -1.*t2821*t2835*t2189*t2184;
  t3393 = -1.*t2821*t2835*t2179*t2202;
  t3398 = t3392 + t3393;
  t3418 = t2821*t2835*t2179*t2189;
  t3419 = -1.*t2821*t2835*t2184*t2202;
  t3423 = t3418 + t3419;
  t3438 = t2232*t3398;
  t3443 = t2225*t3423;
  t3445 = t3438 + t3443;
  t3399 = t2225*t3398;
  t3428 = -1.*t2232*t3423;
  t3431 = t3399 + t3428;
  t3476 = -1.*t2822*t2829;
  t3487 = t2835*t2828*t2836;
  t3493 = t3476 + t3487;
  t3497 = -1.*t2189*t2184*t3493;
  t3505 = -1.*t2179*t2202*t3493;
  t3507 = t3497 + t3505;
  t3512 = t2179*t2189*t3493;
  t3515 = -1.*t2184*t2202*t3493;
  t3520 = t3512 + t3515;
  t3510 = t2232*t3507;
  t3523 = t2225*t3520;
  t3525 = t3510 + t3523;
  t3529 = t2225*t3507;
  t3535 = -1.*t2232*t3520;
  t3536 = t3529 + t3535;
  t3252 = 1/Sqrt(t3251);
  t3566 = t2835*t2822*t2828;
  t3568 = t2829*t2836;
  t3569 = t3566 + t3568;
  t3570 = -1.*t2189*t2184*t3569;
  t3571 = -1.*t2179*t2202*t3569;
  t3575 = t3570 + t3571;
  t3577 = t2179*t2189*t3569;
  t3581 = -1.*t2184*t2202*t3569;
  t3582 = t3577 + t3581;
  t3576 = t2232*t3575;
  t3586 = t2225*t3582;
  t3587 = t3576 + t3586;
  t3597 = t2225*t3575;
  t3598 = -1.*t2232*t3582;
  t3604 = t3597 + t3598;
  t3381 = Sqrt(t3251);
  t3645 = -1.*t2821*t2179*t2829;
  t3648 = t2828*t2184;
  t3649 = t3645 + t3648;
  t3652 = t3649*t2202;
  t3655 = t2923 + t3652;
  t3664 = t2189*t3649;
  t3668 = -1.*t2919*t2202;
  t3671 = t3664 + t3668;
  t3684 = -1.*t2232*t3655;
  t3685 = t2225*t3671;
  t3691 = t3684 + t3685;
  t3662 = t2225*t3655;
  t3672 = t2232*t3671;
  t3681 = t3662 + t3672;
  t3720 = -1.*t2821*t2184*t2836;
  t3722 = -1.*t2179*t3135;
  t3724 = t3720 + t3722;
  t3726 = t2202*t3724;
  t3729 = t3726 + t3180;
  t3732 = t2189*t3724;
  t3733 = -1.*t2202*t3168;
  t3734 = t3732 + t3733;
  t3730 = -1.*t2232*t3729;
  t3736 = t2225*t3734;
  t3739 = t3730 + t3736;
  t3746 = t2225*t3729;
  t3749 = t2232*t3734;
  t3758 = t3746 + t3749;
  t3800 = -1.*t2821*t2822*t2184;
  t3808 = -1.*t2179*t2841;
  t3812 = t3800 + t3808;
  t3815 = t2202*t3812;
  t3817 = t3815 + t2856;
  t3825 = t2189*t3812;
  t3826 = -1.*t2202*t2855;
  t3827 = t3825 + t3826;
  t3819 = -1.*t2232*t3817;
  t3829 = t2225*t3827;
  t3830 = t3819 + t3829;
  t3838 = t2225*t3817;
  t3840 = t2232*t3827;
  t3841 = t3838 + t3840;
  t3983 = -1.*t2835*t2822;
  t3984 = -1.*t2828*t2829*t2836;
  t3985 = t3983 + t3984;
  t3986 = t2179*t3985;
  t3988 = t3720 + t3986;
  t3994 = -1.*t2821*t2179*t2836;
  t3996 = -1.*t2184*t3985;
  t4000 = t3994 + t3996;
  t3990 = -1.*t2202*t3988;
  t4001 = t2189*t4000;
  t4008 = t3990 + t4001;
  t4012 = t2189*t3988;
  t4019 = t2202*t4000;
  t4020 = t4012 + t4019;
  t4009 = t2232*t4008;
  t4027 = t2225*t4020;
  t4028 = t4009 + t4027;
  t4035 = t2225*t4008;
  t4038 = -1.*t2232*t4020;
  t4040 = t4035 + t4038;
  t4075 = -1.*t2189*t2848;
  t4077 = t4075 + t3826;
  t4082 = t2225*t4077;
  t4086 = t4082 + t2868;
  t4098 = t2232*t4077;
  t4103 = t2232*t2866;
  t4104 = t4098 + t4103;
  t4136 = -1.*t2189*t2931;
  t4138 = t4136 + t3668;
  t4148 = t2225*t4138;
  t4149 = t4148 + t2952;
  t4140 = t2232*t4138;
  t4143 = t2232*t2943;
  t4145 = t4140 + t4143;
  t4177 = -1.*t2189*t3150;
  t4180 = t4177 + t3733;
  t4181 = t2225*t4180;
  t4184 = t4181 + t3197;
  t4187 = t2232*t4180;
  t4189 = t2232*t3193;
  t4190 = t4187 + t4189;
  p_output1[0]=var2[3];
  p_output1[1]=var2[4];
  p_output1[2]=var2[7];
  p_output1[3]=0.5*t1778*(2.*t1455*t1749 + 2.*t1455*(t1864 + t1874 + t1287*t1902 + t1257*t1919 - 0.02159*(t1242*t1902 + t1196*t1919) - 1.11344*(t1196*t1902 - 1.*t1242*t1919) - 0.049*t605 - 1.*t568*t605 - 0.09*t64 - 1.*t64*t774))*var2[8] + 0.5*t1778*(2.*t1749*(t1073 + t1154 + t1656*t2015 + t1148*t2030 + t1287*t2041 + t1257*t2052 - 0.02159*(t1242*t2041 + t1196*t2052) - 1.11344*(t1196*t2041 - 1.*t1242*t2052) + t2000*t605 + t1986*t64) + 2.*t1455*(t1864 + t1874 + t1148*t2015 + t1072*t2030 + t1287*t2124 + t1257*t2127 - 0.02159*(t1242*t2124 + t1196*t2127) - 1.11344*(t1196*t2124 - 1.*t1242*t2127) - 1.*t1986*t605 + t2000*t64))*var2[9] + 0.5*t1778*(2.*t1455*(-1.11344*(-1.*t1196*t1270 - 1.*t1242*t1307) - 0.02159*t1332 + t1270*t1790 + t1307*t1811) + 2.*t1749*(-1.11344*(-1.*t1242*t1688 - 1.*t1196*t1706) - 0.02159*t1737 + t1706*t1790 + t1688*t1811))*var2[13];
  p_output1[4]=0.5*t2427*(2.*t2347*t2422 + 2.*t2347*(t2467 + t2468 + t2470 + t2472 + t2473 + t2480 + t2305*t2482 + t2318*t2491 - 0.02159*t2501 - 1.11344*t2508))*var2[16] + 0.5*t2427*(2.*t2422*(t2246 + t2267 + t2179*t2530 + t2184*t2540 + t2380*t2543 + t2262*t2553 + t2305*t2560 + t2318*t2564 - 0.02159*t2572 - 1.11344*t2582) + 2.*t2347*(t2473 + t2480 - 1.*t2184*t2530 + t2179*t2540 + t2262*t2543 + t2244*t2553 + t2305*t2593 + t2318*t2598 - 0.02159*t2609 - 1.11344*t2622))*var2[17] + 0.5*t2427*(2.*t2347*(-0.02159*t2325 + t2314*t2431 + t2276*t2436 - 1.11344*t2443) + 2.*t2422*(-0.02159*t2417 + t2401*t2431 + t2391*t2436 - 1.11344*t2453))*var2[21];
  p_output1[5]=(t2347*t2681*t2716 + t2701*t2716*(t2352 + t2355 + t2358 + t2361 - 1.*t2305*t2482 - 1.*t2318*t2491 + 0.02159*t2501 + 1.11344*t2508 + t2741 + t2743))*var2[16] + (t2347*(-1.*t2179*t2530 - 1.*t2184*t2540 - 1.*t2380*t2543 - 1.*t2262*t2553 - 1.*t2305*t2560 - 1.*t2318*t2564 + 0.02159*t2572 + 1.11344*t2582 + t2659 + t2670)*t2716 + t2701*t2716*(t2184*t2530 - 1.*t2179*t2540 - 1.*t2262*t2543 - 1.*t2244*t2553 - 1.*t2305*t2593 - 1.*t2318*t2598 + 0.02159*t2609 + 1.11344*t2622 + t2741 + t2743))*var2[17] + (t2347*(0.02159*t2417 - 1.*t2401*t2431 - 1.*t2391*t2436 + 1.11344*t2453)*t2716 + (0.02159*t2325 - 1.*t2314*t2431 - 1.*t2276*t2436 + 1.11344*t2443)*t2701*t2716)*var2[21];
  p_output1[6]=var2[14];
  p_output1[7]=var2[15];
  p_output1[8]=(Power(t2906,2)*t3243*t3252*t3266 + t3266*t3381*(-0.766044*(-1.*t2296*t4028 + t2283*t4040) - 0.642788*(t2283*t4028 + t2296*t4040)))*var2[4] + (0.5*t2906*(2.*t2968*(0.642788*(t2296*t3010 + t2283*t3028) + 0.766044*(t2283*t3010 - 1.*t2296*t3028)) + 2.*(0.766044*(-1.*t2296*t3094 + t2283*t3100) + 0.642788*(t2283*t3094 + t2296*t3100))*t3243)*t3252*t3266 + t3266*(-0.642788*(t2296*t3343 + t2283*t3358) - 0.766044*(t2283*t3343 - 1.*t2296*t3358))*t3381)*var2[14] + (0.5*t2906*t3252*t3266*(2.*t2968*(0.642788*(t2296*t3431 + t2283*t3445) + 0.766044*(t2283*t3431 - 1.*t2296*t3445)) + 2.*t3243*(0.766044*(-1.*t2296*t3525 + t2283*t3536) + 0.642788*(t2283*t3525 + t2296*t3536))) + t3266*t3381*(-0.766044*(-1.*t2296*t3587 + t2283*t3604) - 0.642788*(t2283*t3587 + t2296*t3604)))*var2[15] + (0.5*t2906*t3252*t3266*(2.*t2968*(0.766044*(-1.*t2296*t3681 + t2283*t3691) + 0.642788*(t2283*t3681 + t2296*t3691)) + 2.*t3243*(0.642788*(t2296*t3739 + t2283*t3758) + 0.766044*(t2283*t3739 - 1.*t2296*t3758))) + t3266*t3381*(-0.642788*(t2296*t3830 + t2283*t3841) - 0.766044*(t2283*t3830 - 1.*t2296*t3841)))*var2[16] + (t3266*t3381*(-0.642788*(t2296*t4086 + t2283*t4104) - 0.766044*(t2283*t4086 - 1.*t2296*t4104)) + 0.5*t2906*t3252*t3266*(2.*t2968*(0.766044*(-1.*t2296*t4145 + t2283*t4149) + 0.642788*(t2283*t4145 + t2296*t4149)) + 2.*t3243*(0.642788*(t2296*t4184 + t2283*t4190) + 0.766044*(t2283*t4184 - 1.*t2296*t4190))))*var2[17] + (0.5*t2906*(2.*(0.766044*(-1.*t2296*t2946 - 1.*t2283*t2955) + 0.642788*t2958)*t2968 + 2.*(0.766044*(-1.*t2283*t3198 - 1.*t2296*t3216) + 0.642788*t3224)*t3243)*t3252*t3266 + (-0.766044*(-1.*t2283*t2872 - 1.*t2296*t2879) - 0.642788*t2890)*t3266*t3381)*var2[21];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void dyaLeftStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}




