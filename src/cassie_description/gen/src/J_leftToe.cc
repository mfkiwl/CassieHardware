/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:03 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "J_leftToe.hh"
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
  double t335;
  double t621;
  double t1156;
  double t1838;
  double t1977;
  double t2003;
  double t2102;
  double t2256;
  double t2286;
  double t2287;
  double t2302;
  double t2307;
  double t2366;
  double t2374;
  double t2434;
  double t2483;
  double t2507;
  double t2519;
  double t2546;
  double t2562;
  double t2644;
  double t2649;
  double t2658;
  double t2674;
  double t2678;
  double t2728;
  double t2729;
  double t2733;
  double t2755;
  double t2779;
  double t2810;
  double t2833;
  double t2857;
  double t2863;
  double t2867;
  double t2884;
  double t2886;
  double t2887;
  double t2889;
  double t2895;
  double t2897;
  double t2901;
  double t2918;
  double t2921;
  double t2931;
  double t2954;
  double t2957;
  double t2958;
  double t1023;
  double t1048;
  double t1055;
  double t1372;
  double t1497;
  double t2014;
  double t2144;
  double t2148;
  double t2257;
  double t2262;
  double t2270;
  double t2303;
  double t2332;
  double t2347;
  double t2445;
  double t2453;
  double t2459;
  double t2648;
  double t2656;
  double t2657;
  double t3016;
  double t3017;
  double t3018;
  double t3020;
  double t3021;
  double t3023;
  double t2705;
  double t2715;
  double t2725;
  double t2823;
  double t2847;
  double t2851;
  double t3025;
  double t3026;
  double t3027;
  double t3033;
  double t3036;
  double t3043;
  double t2877;
  double t2880;
  double t2882;
  double t2900;
  double t2912;
  double t2915;
  double t3047;
  double t3051;
  double t3053;
  double t3055;
  double t3056;
  double t3058;
  double t2944;
  double t2949;
  double t2951;
  double t3063;
  double t3069;
  double t3076;
  double t3087;
  double t3098;
  double t3106;
  double t3157;
  double t3158;
  double t3162;
  double t3164;
  double t3165;
  double t3166;
  double t3168;
  double t3172;
  double t3174;
  double t3178;
  double t3179;
  double t3182;
  double t3195;
  double t3203;
  double t3204;
  double t3222;
  double t3223;
  double t3225;
  double t3269;
  double t3272;
  double t3273;
  double t3275;
  double t3276;
  double t3281;
  double t3283;
  double t3284;
  double t3285;
  double t3287;
  double t3288;
  double t3292;
  double t3296;
  double t3299;
  double t3302;
  double t3307;
  double t3312;
  double t3316;
  double t3259;
  double t3262;
  double t3263;
  double t3346;
  double t3347;
  double t3348;
  double t3351;
  double t3352;
  double t3353;
  double t3355;
  double t3356;
  double t3357;
  double t3359;
  double t3362;
  double t3363;
  double t3365;
  double t3366;
  double t3367;
  double t3369;
  double t3371;
  double t3372;
  double t3408;
  double t3409;
  double t3410;
  double t3413;
  double t3414;
  double t3415;
  double t3417;
  double t3418;
  double t3419;
  double t3421;
  double t3424;
  double t3425;
  double t3427;
  double t3429;
  double t3430;
  double t3434;
  double t3436;
  double t3437;
  double t3396;
  double t3399;
  double t3401;
  double t3464;
  double t3466;
  double t3467;
  double t3470;
  double t3471;
  double t3476;
  double t3477;
  double t3478;
  double t3480;
  double t3481;
  double t3486;
  double t3488;
  double t3492;
  double t3493;
  double t3496;
  double t3497;
  double t3498;
  double t3500;
  double t3501;
  double t3506;
  double t3458;
  double t3460;
  double t3526;
  double t3527;
  double t3528;
  double t3530;
  double t3531;
  double t3533;
  double t3537;
  double t3538;
  double t3540;
  double t3541;
  double t3542;
  double t3547;
  double t3548;
  double t3549;
  double t3551;
  double t3552;
  double t3553;
  double t3557;
  double t3560;
  double t3561;
  double t3411;
  double t3416;
  double t3420;
  double t3426;
  double t3431;
  double t3439;
  double t3441;
  double t3444;
  double t3445;
  double t3447;
  double t3448;
  double t3449;
  double t3452;
  double t3454;
  double t3576;
  double t3577;
  double t3580;
  double t3583;
  double t3584;
  double t3592;
  double t3593;
  double t3595;
  double t3600;
  double t3601;
  double t3603;
  double t3605;
  double t3611;
  double t3613;
  double t3614;
  double t3616;
  double t3617;
  double t3620;
  double t3635;
  double t3636;
  double t3638;
  double t3641;
  double t3642;
  double t3644;
  double t3645;
  double t3650;
  double t3651;
  double t3653;
  double t3655;
  double t3658;
  double t3659;
  double t3661;
  double t3662;
  double t3663;
  double t3665;
  double t3668;
  double t3670;
  double t3697;
  double t3699;
  double t3700;
  double t3702;
  double t3703;
  double t3705;
  double t3708;
  double t3711;
  double t3712;
  double t3715;
  double t3718;
  double t3719;
  double t3720;
  double t3690;
  double t3691;
  double t3693;
  double t3694;
  double t3695;
  double t3742;
  double t3743;
  double t3747;
  double t3748;
  double t3752;
  double t3753;
  double t3754;
  double t3769;
  double t3770;
  double t3775;
  double t3777;
  double t3778;
  double t3780;
  double t3781;
  double t3784;
  double t3785;
  double t3786;
  double t3788;
  double t3789;
  double t3790;
  double t3810;
  double t3811;
  double t3812;
  double t3818;
  double t3820;
  double t3822;
  double t3826;
  double t3805;
  double t3807;
  double t3808;
  double t3815;
  double t3816;
  double t3854;
  double t3855;
  double t3117;
  double t3870;
  double t3871;
  double t3873;
  double t3880;
  double t3881;
  double t3883;
  double t3884;
  double t3828;
  double t3910;
  double t3911;
  double t3912;
  double t3839;
  double t3900;
  double t3901;
  double t3905;
  double t3908;
  double t3909;
  double t3859;
  double t3120;
  double t3121;
  double t3889;
  double t3934;
  double t3935;
  double t3938;
  double t3893;
  t335 = Sin(var1[6]);
  t621 = Cos(var1[7]);
  t1156 = Sin(var1[7]);
  t1838 = Cos(var1[8]);
  t1977 = -1.*t1838;
  t2003 = 1. + t1977;
  t2102 = Sin(var1[8]);
  t2256 = Cos(var1[6]);
  t2286 = Cos(var1[9]);
  t2287 = -1.*t2286;
  t2302 = 1. + t2287;
  t2307 = Sin(var1[9]);
  t2366 = -1.*t1838*t335*t1156;
  t2374 = -1.*t2256*t2102;
  t2434 = t2366 + t2374;
  t2483 = -1.*t2256*t1838;
  t2507 = t335*t1156*t2102;
  t2519 = t2483 + t2507;
  t2546 = Cos(var1[10]);
  t2562 = -1.*t2546;
  t2644 = 1. + t2562;
  t2649 = Sin(var1[10]);
  t2658 = -1.*t2307*t2434;
  t2674 = t2286*t2519;
  t2678 = t2658 + t2674;
  t2728 = t2286*t2434;
  t2729 = t2307*t2519;
  t2733 = t2728 + t2729;
  t2755 = Cos(var1[11]);
  t2779 = -1.*t2755;
  t2810 = 1. + t2779;
  t2833 = Sin(var1[11]);
  t2857 = t2649*t2678;
  t2863 = t2546*t2733;
  t2867 = t2857 + t2863;
  t2884 = t2546*t2678;
  t2886 = -1.*t2649*t2733;
  t2887 = t2884 + t2886;
  t2889 = Cos(var1[13]);
  t2895 = -1.*t2889;
  t2897 = 1. + t2895;
  t2901 = Sin(var1[13]);
  t2918 = -1.*t2833*t2867;
  t2921 = t2755*t2887;
  t2931 = t2918 + t2921;
  t2954 = t2755*t2867;
  t2957 = t2833*t2887;
  t2958 = t2954 + t2957;
  t1023 = -1.*t621;
  t1048 = 1. + t1023;
  t1055 = 0.135*t1048;
  t1372 = 0.049*t1156;
  t1497 = t1055 + t1372;
  t2014 = -0.049*t2003;
  t2144 = -0.09*t2102;
  t2148 = t2014 + t2144;
  t2257 = -0.09*t2003;
  t2262 = 0.049*t2102;
  t2270 = t2257 + t2262;
  t2303 = -0.049*t2302;
  t2332 = -0.21*t2307;
  t2347 = t2303 + t2332;
  t2445 = -0.21*t2302;
  t2453 = 0.049*t2307;
  t2459 = t2445 + t2453;
  t2648 = -0.27068*t2644;
  t2656 = 0.00159*t2649;
  t2657 = t2648 + t2656;
  t3016 = t2256*t1838*t1156;
  t3017 = -1.*t335*t2102;
  t3018 = t3016 + t3017;
  t3020 = -1.*t1838*t335;
  t3021 = -1.*t2256*t1156*t2102;
  t3023 = t3020 + t3021;
  t2705 = -0.00159*t2644;
  t2715 = -0.27068*t2649;
  t2725 = t2705 + t2715;
  t2823 = 0.01841*t2810;
  t2847 = -0.70544*t2833;
  t2851 = t2823 + t2847;
  t3025 = -1.*t2307*t3018;
  t3026 = t2286*t3023;
  t3027 = t3025 + t3026;
  t3033 = t2286*t3018;
  t3036 = t2307*t3023;
  t3043 = t3033 + t3036;
  t2877 = -0.70544*t2810;
  t2880 = -0.01841*t2833;
  t2882 = t2877 + t2880;
  t2900 = -1.11344*t2897;
  t2912 = 0.02159*t2901;
  t2915 = t2900 + t2912;
  t3047 = t2649*t3027;
  t3051 = t2546*t3043;
  t3053 = t3047 + t3051;
  t3055 = t2546*t3027;
  t3056 = -1.*t2649*t3043;
  t3058 = t3055 + t3056;
  t2944 = -0.02159*t2897;
  t2949 = -1.11344*t2901;
  t2951 = t2944 + t2949;
  t3063 = -1.*t2833*t3053;
  t3069 = t2755*t3058;
  t3076 = t3063 + t3069;
  t3087 = t2755*t3053;
  t3098 = t2833*t3058;
  t3106 = t3087 + t3098;
  t3157 = t1838*t2307*t1156;
  t3158 = t2286*t1156*t2102;
  t3162 = t3157 + t3158;
  t3164 = -1.*t2286*t1838*t1156;
  t3165 = t2307*t1156*t2102;
  t3166 = t3164 + t3165;
  t3168 = t2649*t3162;
  t3172 = t2546*t3166;
  t3174 = t3168 + t3172;
  t3178 = t2546*t3162;
  t3179 = -1.*t2649*t3166;
  t3182 = t3178 + t3179;
  t3195 = -1.*t2833*t3174;
  t3203 = t2755*t3182;
  t3204 = t3195 + t3203;
  t3222 = t2755*t3174;
  t3223 = t2833*t3182;
  t3225 = t3222 + t3223;
  t3269 = -1.*t2256*t621*t1838*t2307;
  t3272 = -1.*t2286*t2256*t621*t2102;
  t3273 = t3269 + t3272;
  t3275 = t2286*t2256*t621*t1838;
  t3276 = -1.*t2256*t621*t2307*t2102;
  t3281 = t3275 + t3276;
  t3283 = t2649*t3273;
  t3284 = t2546*t3281;
  t3285 = t3283 + t3284;
  t3287 = t2546*t3273;
  t3288 = -1.*t2649*t3281;
  t3292 = t3287 + t3288;
  t3296 = -1.*t2833*t3285;
  t3299 = t2755*t3292;
  t3302 = t3296 + t3299;
  t3307 = t2755*t3285;
  t3312 = t2833*t3292;
  t3316 = t3307 + t3312;
  t3259 = 0.049*t621;
  t3262 = 0.135*t1156;
  t3263 = t3259 + t3262;
  t3346 = -1.*t621*t1838*t2307*t335;
  t3347 = -1.*t2286*t621*t335*t2102;
  t3348 = t3346 + t3347;
  t3351 = t2286*t621*t1838*t335;
  t3352 = -1.*t621*t2307*t335*t2102;
  t3353 = t3351 + t3352;
  t3355 = t2649*t3348;
  t3356 = t2546*t3353;
  t3357 = t3355 + t3356;
  t3359 = t2546*t3348;
  t3362 = -1.*t2649*t3353;
  t3363 = t3359 + t3362;
  t3365 = -1.*t2833*t3357;
  t3366 = t2755*t3363;
  t3367 = t3365 + t3366;
  t3369 = t2755*t3357;
  t3371 = t2833*t3363;
  t3372 = t3369 + t3371;
  t3408 = -1.*t621*t1838*t2307;
  t3409 = -1.*t2286*t621*t2102;
  t3410 = t3408 + t3409;
  t3413 = -1.*t2286*t621*t1838;
  t3414 = t621*t2307*t2102;
  t3415 = t3413 + t3414;
  t3417 = -1.*t2649*t3410;
  t3418 = t2546*t3415;
  t3419 = t3417 + t3418;
  t3421 = t2546*t3410;
  t3424 = t2649*t3415;
  t3425 = t3421 + t3424;
  t3427 = t2833*t3419;
  t3429 = t2755*t3425;
  t3430 = t3427 + t3429;
  t3434 = t2755*t3419;
  t3436 = -1.*t2833*t3425;
  t3437 = t3434 + t3436;
  t3396 = -0.09*t1838;
  t3399 = -0.049*t2102;
  t3401 = t3396 + t3399;
  t3464 = -1.*t2256*t1838*t1156;
  t3466 = t335*t2102;
  t3467 = t3464 + t3466;
  t3470 = t2307*t3467;
  t3471 = t3470 + t3026;
  t3476 = t2286*t3467;
  t3477 = -1.*t2307*t3023;
  t3478 = t3476 + t3477;
  t3480 = -1.*t2649*t3471;
  t3481 = t2546*t3478;
  t3486 = t3480 + t3481;
  t3488 = t2546*t3471;
  t3492 = t2649*t3478;
  t3493 = t3488 + t3492;
  t3496 = t2833*t3486;
  t3497 = t2755*t3493;
  t3498 = t3496 + t3497;
  t3500 = t2755*t3486;
  t3501 = -1.*t2833*t3493;
  t3506 = t3500 + t3501;
  t3458 = 0.049*t1838;
  t3460 = t3458 + t2144;
  t3526 = t2256*t1838;
  t3527 = -1.*t335*t1156*t2102;
  t3528 = t3526 + t3527;
  t3530 = t2307*t2434;
  t3531 = t2286*t3528;
  t3533 = t3530 + t3531;
  t3537 = -1.*t2307*t3528;
  t3538 = t2728 + t3537;
  t3540 = -1.*t2649*t3533;
  t3541 = t2546*t3538;
  t3542 = t3540 + t3541;
  t3547 = t2546*t3533;
  t3548 = t2649*t3538;
  t3549 = t3547 + t3548;
  t3551 = t2833*t3542;
  t3552 = t2755*t3549;
  t3553 = t3551 + t3552;
  t3557 = t2755*t3542;
  t3560 = -1.*t2833*t3549;
  t3561 = t3557 + t3560;
  t3411 = t2725*t3410;
  t3416 = t2657*t3415;
  t3420 = t2882*t3419;
  t3426 = t2851*t3425;
  t3431 = t2951*t3430;
  t3439 = t2915*t3437;
  t3441 = -1.*t2901*t3430;
  t3444 = t2889*t3437;
  t3445 = t3441 + t3444;
  t3447 = -1.11344*t3445;
  t3448 = t2889*t3430;
  t3449 = t2901*t3437;
  t3452 = t3448 + t3449;
  t3454 = -0.02159*t3452;
  t3576 = -0.21*t2286;
  t3577 = -0.049*t2307;
  t3580 = t3576 + t3577;
  t3583 = 0.049*t2286;
  t3584 = t3583 + t2332;
  t3592 = -1.*t2286*t3018;
  t3593 = t3592 + t3477;
  t3595 = -1.*t2649*t3027;
  t3600 = t2546*t3593;
  t3601 = t3595 + t3600;
  t3603 = t2649*t3593;
  t3605 = t3055 + t3603;
  t3611 = t2833*t3601;
  t3613 = t2755*t3605;
  t3614 = t3611 + t3613;
  t3616 = t2755*t3601;
  t3617 = -1.*t2833*t3605;
  t3620 = t3616 + t3617;
  t3635 = t1838*t335*t1156;
  t3636 = t2256*t2102;
  t3638 = t3635 + t3636;
  t3641 = -1.*t2307*t3638;
  t3642 = t3641 + t3531;
  t3644 = -1.*t2286*t3638;
  t3645 = t3644 + t3537;
  t3650 = -1.*t2649*t3642;
  t3651 = t2546*t3645;
  t3653 = t3650 + t3651;
  t3655 = t2546*t3642;
  t3658 = t2649*t3645;
  t3659 = t3655 + t3658;
  t3661 = t2833*t3653;
  t3662 = t2755*t3659;
  t3663 = t3661 + t3662;
  t3665 = t2755*t3653;
  t3668 = -1.*t2833*t3659;
  t3670 = t3665 + t3668;
  t3697 = t2286*t621*t1838;
  t3699 = -1.*t621*t2307*t2102;
  t3700 = t3697 + t3699;
  t3702 = -1.*t2546*t3700;
  t3703 = t3417 + t3702;
  t3705 = -1.*t2649*t3700;
  t3708 = t3421 + t3705;
  t3711 = t2833*t3703;
  t3712 = t2755*t3708;
  t3715 = t3711 + t3712;
  t3718 = t2755*t3703;
  t3719 = -1.*t2833*t3708;
  t3720 = t3718 + t3719;
  t3690 = 0.00159*t2546;
  t3691 = t3690 + t2715;
  t3693 = -0.27068*t2546;
  t3694 = -0.00159*t2649;
  t3695 = t3693 + t3694;
  t3742 = -1.*t2546*t3043;
  t3743 = t3595 + t3742;
  t3747 = t2833*t3743;
  t3748 = t3747 + t3069;
  t3752 = t2755*t3743;
  t3753 = -1.*t2833*t3058;
  t3754 = t3752 + t3753;
  t3769 = t2286*t3638;
  t3770 = t2307*t3528;
  t3775 = t3769 + t3770;
  t3777 = -1.*t2546*t3775;
  t3778 = t3650 + t3777;
  t3780 = -1.*t2649*t3775;
  t3781 = t3655 + t3780;
  t3784 = t2833*t3778;
  t3785 = t2755*t3781;
  t3786 = t3784 + t3785;
  t3788 = t2755*t3778;
  t3789 = -1.*t2833*t3781;
  t3790 = t3788 + t3789;
  t3810 = t2649*t3410;
  t3811 = t2546*t3700;
  t3812 = t3810 + t3811;
  t3818 = -1.*t2833*t3812;
  t3820 = t3818 + t3712;
  t3822 = -1.*t2755*t3812;
  t3826 = t3822 + t3719;
  t3805 = -0.70544*t2755;
  t3807 = 0.01841*t2833;
  t3808 = t3805 + t3807;
  t3815 = -0.01841*t2755;
  t3816 = t3815 + t2847;
  t3854 = -1.*t2755*t3053;
  t3855 = t3854 + t3753;
  t3117 = t2889*t3076;
  t3870 = t2649*t3642;
  t3871 = t2546*t3775;
  t3873 = t3870 + t3871;
  t3880 = -1.*t2833*t3873;
  t3881 = t3880 + t3785;
  t3883 = -1.*t2755*t3873;
  t3884 = t3883 + t3789;
  t3828 = -1.*t2901*t3820;
  t3910 = t2755*t3812;
  t3911 = t2833*t3708;
  t3912 = t3910 + t3911;
  t3839 = t2889*t3820;
  t3900 = 0.02159*t2889;
  t3901 = t3900 + t2949;
  t3905 = -1.11344*t2889;
  t3908 = -0.02159*t2901;
  t3909 = t3905 + t3908;
  t3859 = -1.*t2901*t3076;
  t3120 = -1.*t2901*t3106;
  t3121 = t3117 + t3120;
  t3889 = -1.*t2901*t3881;
  t3934 = t2755*t3873;
  t3935 = t2833*t3781;
  t3938 = t3934 + t3935;
  t3893 = t2889*t3881;
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
  p_output1[19]=-1.*t2256*t2270 + t2347*t2434 + t2459*t2519 + t2657*t2678 + t2725*t2733 + t2851*t2867 + t2882*t2887 + t2915*t2931 + t2951*t2958 - 0.02159*(t2901*t2931 + t2889*t2958) - 1.11344*(t2889*t2931 - 1.*t2901*t2958) + 0.135*t335 - 1.*t1497*t335 - 1.*t1156*t2148*t335 - 0.1305*t335*t621;
  p_output1[20]=-0.135*t2256 + t1497*t2256 + t1156*t2148*t2256 + t2347*t3018 + t2459*t3023 + t2657*t3027 + t2725*t3043 + t2851*t3053 + t2882*t3058 + t2915*t3076 + t2951*t3106 - 0.02159*(t2901*t3076 + t2889*t3106) - 1.11344*t3121 - 1.*t2270*t335 + 0.1305*t2256*t621;
  p_output1[21]=-0.049*t1156 - 1.*t1156*t2148 - 1.*t1156*t1838*t2347 + t1156*t2102*t2459 + t2657*t3162 + t2725*t3166 + t2851*t3174 + t2882*t3182 + t2915*t3204 + t2951*t3225 - 0.02159*(t2901*t3204 + t2889*t3225) - 1.11344*(t2889*t3204 - 1.*t2901*t3225) + 0.0045*t621;
  p_output1[22]=-0.1305*t1156*t2256 + t2256*t3263 + t2657*t3273 + t2725*t3281 + t2851*t3285 + t2882*t3292 + t2915*t3302 + t2951*t3316 - 0.02159*(t2901*t3302 + t2889*t3316) - 1.11344*(t2889*t3302 - 1.*t2901*t3316) + t2148*t2256*t621 + t1838*t2256*t2347*t621 - 1.*t2102*t2256*t2459*t621;
  p_output1[23]=t2657*t3348 - 0.1305*t1156*t335 + t3263*t335 + t2725*t3353 + t2851*t3357 + t2882*t3363 + t2915*t3367 + t2951*t3372 - 0.02159*(t2901*t3367 + t2889*t3372) - 1.11344*(t2889*t3367 - 1.*t2901*t3372) + t2148*t335*t621 + t1838*t2347*t335*t621 - 1.*t2102*t2459*t335*t621;
  p_output1[24]=t3411 + t3416 + t3420 + t3426 + t3431 + t3439 + t3447 + t3454 - 1.*t2102*t2347*t621 - 1.*t1838*t2459*t621 + t3401*t621;
  p_output1[25]=t2347*t3023 + t1156*t2256*t3401 - 1.*t335*t3460 + t2459*t3467 + t2725*t3471 + t2657*t3478 + t2882*t3486 + t2851*t3493 + t2951*t3498 + t2915*t3506 - 1.11344*(-1.*t2901*t3498 + t2889*t3506) - 0.02159*(t2889*t3498 + t2901*t3506);
  p_output1[26]=t2434*t2459 + t1156*t335*t3401 + t2256*t3460 + t2347*t3528 + t2725*t3533 + t2657*t3538 + t2882*t3542 + t2851*t3549 + t2951*t3553 + t2915*t3561 - 1.11344*(-1.*t2901*t3553 + t2889*t3561) - 0.02159*(t2889*t3553 + t2901*t3561);
  p_output1[27]=t3411 + t3416 + t3420 + t3426 + t3431 + t3439 + t3447 + t3454 + t1838*t3580*t621 - 1.*t2102*t3584*t621;
  p_output1[28]=t2725*t3027 + t3018*t3580 + t3023*t3584 + t2657*t3593 + t2882*t3601 + t2851*t3605 + t2951*t3614 + t2915*t3620 - 1.11344*(-1.*t2901*t3614 + t2889*t3620) - 0.02159*(t2889*t3614 + t2901*t3620);
  p_output1[29]=t3528*t3584 + t3580*t3638 + t2725*t3642 + t2657*t3645 + t2882*t3653 + t2851*t3659 + t2951*t3663 + t2915*t3670 - 1.11344*(-1.*t2901*t3663 + t2889*t3670) - 0.02159*(t2889*t3663 + t2901*t3670);
  p_output1[30]=t3410*t3691 + t3695*t3700 + t2882*t3703 + t2851*t3708 + t2951*t3715 + t2915*t3720 - 1.11344*(-1.*t2901*t3715 + t2889*t3720) - 0.02159*(t2889*t3715 + t2901*t3720);
  p_output1[31]=t2851*t3058 + t3027*t3691 + t3043*t3695 + t2882*t3743 + t2951*t3748 + t2915*t3754 - 1.11344*(-1.*t2901*t3748 + t2889*t3754) - 0.02159*(t2889*t3748 + t2901*t3754);
  p_output1[32]=t3642*t3691 + t3695*t3775 + t2882*t3778 + t2851*t3781 + t2951*t3786 + t2915*t3790 - 1.11344*(-1.*t2901*t3786 + t2889*t3790) - 0.02159*(t2889*t3786 + t2901*t3790);
  p_output1[33]=t3808*t3812 + t3708*t3816 + t2951*t3820 + t2915*t3826 - 1.11344*(t2889*t3826 + t3828) - 0.02159*(t2901*t3826 + t3839);
  p_output1[34]=t2951*t3076 + t3053*t3808 + t3058*t3816 + t2915*t3855 - 0.02159*(t3117 + t2901*t3855) - 1.11344*(t2889*t3855 + t3859);
  p_output1[35]=t3781*t3816 + t3808*t3873 + t2951*t3881 + t2915*t3884 - 1.11344*(t2889*t3884 + t3889) - 0.02159*(t2901*t3884 + t3893);
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=t3820*t3901 + t3909*t3912 - 1.11344*(t3828 - 1.*t2889*t3912) - 0.02159*(t3839 - 1.*t2901*t3912);
  p_output1[40]=-0.02159*t3121 - 1.11344*(-1.*t2889*t3106 + t3859) + t3076*t3901 + t3106*t3909;
  p_output1[41]=t3881*t3901 + t3909*t3938 - 1.11344*(t3889 - 1.*t2889*t3938) - 0.02159*(t3893 - 1.*t2901*t3938);
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

void J_leftToe_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




