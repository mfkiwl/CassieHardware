/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:54 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "Dya_RightStanceActual.hh"
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
  double t216;
  double t220;
  double t233;
  double t234;
  double t340;
  double t434;
  double t658;
  double t667;
  double t700;
  double t739;
  double t918;
  double t953;
  double t1095;
  double t1141;
  double t1174;
  double t1244;
  double t1248;
  double t1253;
  double t1336;
  double t1342;
  double t1352;
  double t1393;
  double t1586;
  double t1589;
  double t1597;
  double t1775;
  double t1791;
  double t1793;
  double t520;
  double t549;
  double t628;
  double t308;
  double t344;
  double t399;
  double t1210;
  double t1228;
  double t1240;
  double t941;
  double t977;
  double t989;
  double t1639;
  double t1734;
  double t1752;
  double t2135;
  double t2136;
  double t2145;
  double t1384;
  double t1408;
  double t1567;
  double t2292;
  double t2297;
  double t2342;
  double t2375;
  double t2393;
  double t218;
  double t432;
  double t512;
  double t644;
  double t1180;
  double t1283;
  double t1603;
  double t1798;
  double t1834;
  double t1837;
  double t1847;
  double t1872;
  double t1879;
  double t1962;
  double t2001;
  double t2011;
  double t2017;
  double t2043;
  double t2047;
  double t2078;
  double t2101;
  double t2287;
  double t2291;
  double t2311;
  double t2403;
  double t2413;
  double t2419;
  double t2429;
  double t2444;
  double t2447;
  double t2452;
  double t2454;
  double t2456;
  double t2460;
  double t2576;
  double t2578;
  double t2611;
  double t2657;
  double t2667;
  double t2733;
  double t2775;
  double t2787;
  double t3030;
  double t3037;
  double t3051;
  double t3074;
  double t3087;
  double t3092;
  double t3106;
  double t3121;
  double t3136;
  double t3138;
  double t3144;
  double t2549;
  double t2559;
  double t2561;
  double t2567;
  double t3170;
  double t3191;
  double t3202;
  double t3205;
  double t3206;
  double t3208;
  double t3209;
  double t2849;
  double t2852;
  double t2859;
  double t2904;
  double t2922;
  double t2926;
  double t3167;
  double t3225;
  double t3237;
  double t3245;
  double t2021;
  double t2465;
  double t2466;
  double t2494;
  double t3518;
  double t3581;
  double t3644;
  double t3416;
  double t3421;
  double t3426;
  double t3410;
  double t3411;
  double t2568;
  double t3447;
  double t3454;
  double t3462;
  double t3435;
  double t3442;
  double t2652;
  double t4077;
  double t4111;
  double t3696;
  double t3811;
  double t3816;
  double t3873;
  double t3915;
  double t3919;
  double t3251;
  double t3269;
  double t4177;
  double t4178;
  double t4195;
  double t4222;
  double t4263;
  double t4348;
  double t4958;
  double t4962;
  double t4919;
  double t4927;
  double t4938;
  double t5054;
  double t5060;
  double t5064;
  double t4969;
  double t4970;
  double t4982;
  double t5151;
  double t5169;
  double t5174;
  double t5182;
  double t5191;
  double t5205;
  double t5241;
  double t5243;
  double t5246;
  double t5247;
  double t5248;
  double t5256;
  double t5278;
  double t5285;
  double t5290;
  double t5302;
  double t5304;
  double t5309;
  double t5323;
  double t5324;
  double t5325;
  double t5329;
  double t5340;
  double t5342;
  double t5343;
  double t5319;
  double t5321;
  double t5322;
  double t5195;
  double t5206;
  double t5211;
  double t5228;
  double t5229;
  double t5235;
  double t5296;
  double t5298;
  double t5300;
  double t5251;
  double t5262;
  double t5264;
  double t5391;
  double t5392;
  double t5396;
  double t5328;
  double t5331;
  double t5332;
  double t5347;
  double t5348;
  double t5349;
  double t5402;
  double t5404;
  double t5406;
  double t5409;
  double t5411;
  double t5157;
  double t5170;
  double t5216;
  double t5237;
  double t5294;
  double t5318;
  double t5337;
  double t5351;
  double t5356;
  double t5358;
  double t5361;
  double t5363;
  double t5364;
  double t5365;
  double t5368;
  double t5369;
  double t5370;
  double t5376;
  double t5378;
  double t5385;
  double t5388;
  double t5397;
  double t5398;
  double t5407;
  double t5413;
  double t5414;
  double t5417;
  double t5418;
  double t5420;
  double t5423;
  double t5424;
  double t5425;
  double t5434;
  double t5440;
  double t5476;
  double t5480;
  double t5481;
  double t5490;
  double t5492;
  double t5497;
  double t5499;
  double t5503;
  double t5371;
  double t5443;
  double t5444;
  double t5447;
  double t5561;
  double t5563;
  double t5566;
  double t5538;
  double t5539;
  double t5542;
  double t5543;
  double t5545;
  double t5463;
  double t5556;
  double t5557;
  double t5558;
  double t5549;
  double t5552;
  double t5486;
  double t5690;
  double t5699;
  double t5784;
  double t5785;
  double t5791;
  double t5794;
  double t5801;
  t216 = Cos(var1[8]);
  t220 = Cos(var1[9]);
  t233 = -1.*t220;
  t234 = 1. + t233;
  t340 = Sin(var1[9]);
  t434 = Sin(var1[8]);
  t658 = -1.*var1[9];
  t667 = 0.226893 + t658;
  t700 = Cos(t667);
  t739 = -1.*t700;
  t918 = 1. + t739;
  t953 = Sin(t667);
  t1095 = -1.*t216*t340;
  t1141 = -1.*t220*t434;
  t1174 = t1095 + t1141;
  t1244 = t220*t216;
  t1248 = -1.*t340*t434;
  t1253 = t1244 + t1248;
  t1336 = Cos(var1[13]);
  t1342 = -1.*t1336;
  t1352 = 1. + t1342;
  t1393 = Sin(var1[13]);
  t1586 = t953*t1174;
  t1589 = t700*t1253;
  t1597 = t1586 + t1589;
  t1775 = t700*t1174;
  t1791 = -1.*t953*t1253;
  t1793 = t1775 + t1791;
  t520 = -0.21*t234;
  t549 = 0.049*t340;
  t628 = t520 + t549;
  t308 = -0.049*t234;
  t344 = -0.21*t340;
  t399 = t308 + t344;
  t1210 = 0.01841*t918;
  t1228 = -0.70544*t953;
  t1240 = t1210 + t1228;
  t941 = -0.70544*t918;
  t977 = -0.01841*t953;
  t989 = t941 + t977;
  t1639 = -1.11344*t1352;
  t1734 = 0.02159*t1393;
  t1752 = t1639 + t1734;
  t2135 = t216*t340;
  t2136 = t220*t434;
  t2145 = t2135 + t2136;
  t1384 = -0.02159*t1352;
  t1408 = -1.11344*t1393;
  t1567 = t1384 + t1408;
  t2292 = -1.*t953*t2145;
  t2297 = t2292 + t1589;
  t2342 = t700*t2145;
  t2375 = t953*t1253;
  t2393 = t2342 + t2375;
  t218 = 0.049*t216;
  t432 = t216*t399;
  t512 = -0.09*t434;
  t644 = -1.*t628*t434;
  t1180 = t989*t1174;
  t1283 = t1240*t1253;
  t1603 = t1567*t1597;
  t1798 = t1752*t1793;
  t1834 = -1.*t1393*t1597;
  t1837 = t1336*t1793;
  t1847 = t1834 + t1837;
  t1872 = -1.11344*t1847;
  t1879 = t1336*t1597;
  t1962 = t1393*t1793;
  t2001 = t1879 + t1962;
  t2011 = -0.02159*t2001;
  t2017 = t218 + t432 + t512 + t644 + t1180 + t1283 + t1603 + t1798 + t1872 + t2011;
  t2043 = 0.09*t216;
  t2047 = t216*t628;
  t2078 = 0.049*t434;
  t2101 = t399*t434;
  t2287 = t1240*t2145;
  t2291 = t989*t1253;
  t2311 = t1752*t2297;
  t2403 = t1567*t2393;
  t2413 = t1393*t2297;
  t2419 = t1336*t2393;
  t2429 = t2413 + t2419;
  t2444 = -0.02159*t2429;
  t2447 = t1336*t2297;
  t2452 = -1.*t1393*t2393;
  t2454 = t2447 + t2452;
  t2456 = -1.11344*t2454;
  t2460 = t2043 + t2047 + t2078 + t2101 + t2287 + t2291 + t2311 + t2403 + t2444 + t2456;
  t2576 = -1.*t220*t216;
  t2578 = t340*t434;
  t2611 = t2576 + t2578;
  t2657 = -1.*t953*t1174;
  t2667 = t700*t2611;
  t2733 = t2657 + t2667;
  t2775 = t953*t2611;
  t2787 = t1775 + t2775;
  t3030 = -0.049*t216;
  t3037 = -1.*t216*t399;
  t3051 = 0.09*t434;
  t3074 = t628*t434;
  t3087 = -1.*t989*t1174;
  t3092 = -1.*t1240*t1253;
  t3106 = -1.*t1567*t1597;
  t3121 = -1.*t1752*t1793;
  t3136 = 1.11344*t1847;
  t3138 = 0.02159*t2001;
  t3144 = t3030 + t3037 + t3051 + t3074 + t3087 + t3092 + t3106 + t3121 + t3136 + t3138;
  t2549 = -0.09*t216;
  t2559 = -1.*t216*t628;
  t2561 = -0.049*t434;
  t2567 = -1.*t399*t434;
  t3170 = -1.*t1240*t2145;
  t3191 = -1.*t989*t1253;
  t3202 = -1.*t1752*t2297;
  t3205 = -1.*t1567*t2393;
  t3206 = 0.02159*t2429;
  t3208 = 1.11344*t2454;
  t3209 = t2549 + t2559 + t2561 + t2567 + t3170 + t3191 + t3202 + t3205 + t3206 + t3208;
  t2849 = t1393*t2733;
  t2852 = t1336*t2787;
  t2859 = t2849 + t2852;
  t2904 = t1336*t2733;
  t2922 = -1.*t1393*t2787;
  t2926 = t2904 + t2922;
  t3167 = Power(t3144,2);
  t3225 = Power(t3209,2);
  t3237 = t3167 + t3225;
  t3245 = 1/t3237;
  t2021 = Power(t2017,2);
  t2465 = Power(t2460,2);
  t2466 = 0.00002025 + t2021 + t2465;
  t2494 = 1/Sqrt(t2466);
  t3518 = t1775 + t2342;
  t3581 = t953*t2145;
  t3644 = t1586 + t3581;
  t3416 = -0.21*t220;
  t3421 = -0.049*t340;
  t3426 = t3416 + t3421;
  t3410 = 0.049*t220;
  t3411 = t3410 + t344;
  t2568 = t1240*t1174;
  t3447 = 0.01841*t700;
  t3454 = 0.70544*t953;
  t3462 = t3447 + t3454;
  t3435 = 0.70544*t700;
  t3442 = t3435 + t977;
  t2652 = t989*t2611;
  t4077 = t1589 + t2667;
  t4111 = t2375 + t2775;
  t3696 = t1393*t3518;
  t3811 = t1336*t3644;
  t3816 = t3696 + t3811;
  t3873 = t1336*t3518;
  t3915 = -1.*t1393*t3644;
  t3919 = t3873 + t3915;
  t3251 = -1.*t1240*t1174;
  t3269 = -1.*t989*t2611;
  t4177 = t1393*t4077;
  t4178 = t1336*t4111;
  t4195 = t4177 + t4178;
  t4222 = t1336*t4077;
  t4263 = -1.*t1393*t4111;
  t4348 = t4222 + t4263;
  t4958 = 0.02159*t1336;
  t4962 = t4958 + t1408;
  t4919 = -1.11344*t1336;
  t4927 = -0.02159*t1393;
  t4938 = t4919 + t4927;
  t5054 = -1.*t1393*t2297;
  t5060 = -1.*t1336*t2393;
  t5064 = t5054 + t5060;
  t4969 = -1.*t1336*t1597;
  t4970 = -1.*t1393*t1793;
  t4982 = t4969 + t4970;
  t5151 = Cos(var1[16]);
  t5169 = Sin(var1[16]);
  t5174 = Cos(var1[17]);
  t5182 = -1.*t5174;
  t5191 = 1. + t5182;
  t5205 = Sin(var1[17]);
  t5241 = -1.*var1[17];
  t5243 = 0.226893 + t5241;
  t5246 = Cos(t5243);
  t5247 = -1.*t5246;
  t5248 = 1. + t5247;
  t5256 = Sin(t5243);
  t5278 = -1.*t5174*t5169;
  t5285 = -1.*t5151*t5205;
  t5290 = t5278 + t5285;
  t5302 = t5151*t5174;
  t5304 = -1.*t5169*t5205;
  t5309 = t5302 + t5304;
  t5323 = Cos(var1[21]);
  t5324 = -1.*t5323;
  t5325 = 1. + t5324;
  t5329 = Sin(var1[21]);
  t5340 = t5246*t5290;
  t5342 = -1.*t5256*t5309;
  t5343 = t5340 + t5342;
  t5319 = t5256*t5290;
  t5321 = t5246*t5309;
  t5322 = t5319 + t5321;
  t5195 = -0.049*t5191;
  t5206 = -0.21*t5205;
  t5211 = t5195 + t5206;
  t5228 = -0.21*t5191;
  t5229 = 0.049*t5205;
  t5235 = t5228 + t5229;
  t5296 = 0.01841*t5248;
  t5298 = -0.70544*t5256;
  t5300 = t5296 + t5298;
  t5251 = -0.70544*t5248;
  t5262 = -0.01841*t5256;
  t5264 = t5251 + t5262;
  t5391 = t5174*t5169;
  t5392 = t5151*t5205;
  t5396 = t5391 + t5392;
  t5328 = -0.02159*t5325;
  t5331 = -1.11344*t5329;
  t5332 = t5328 + t5331;
  t5347 = -1.11344*t5325;
  t5348 = 0.02159*t5329;
  t5349 = t5347 + t5348;
  t5402 = t5246*t5396;
  t5404 = t5256*t5309;
  t5406 = t5402 + t5404;
  t5409 = -1.*t5256*t5396;
  t5411 = t5409 + t5321;
  t5157 = 0.049*t5151;
  t5170 = -0.09*t5169;
  t5216 = t5151*t5211;
  t5237 = -1.*t5169*t5235;
  t5294 = t5264*t5290;
  t5318 = t5300*t5309;
  t5337 = t5322*t5332;
  t5351 = t5343*t5349;
  t5356 = t5323*t5343;
  t5358 = -1.*t5322*t5329;
  t5361 = t5356 + t5358;
  t5363 = -1.11344*t5361;
  t5364 = t5323*t5322;
  t5365 = t5343*t5329;
  t5368 = t5364 + t5365;
  t5369 = -0.02159*t5368;
  t5370 = t5157 + t5170 + t5216 + t5237 + t5294 + t5318 + t5337 + t5351 + t5363 + t5369;
  t5376 = 0.09*t5151;
  t5378 = 0.049*t5169;
  t5385 = t5169*t5211;
  t5388 = t5151*t5235;
  t5397 = t5300*t5396;
  t5398 = t5264*t5309;
  t5407 = t5406*t5332;
  t5413 = t5411*t5349;
  t5414 = t5323*t5406;
  t5417 = t5411*t5329;
  t5418 = t5414 + t5417;
  t5420 = -0.02159*t5418;
  t5423 = t5323*t5411;
  t5424 = -1.*t5406*t5329;
  t5425 = t5423 + t5424;
  t5434 = -1.11344*t5425;
  t5440 = t5376 + t5378 + t5385 + t5388 + t5397 + t5398 + t5407 + t5413 + t5420 + t5434;
  t5476 = -1.*t5151*t5174;
  t5480 = t5169*t5205;
  t5481 = t5476 + t5480;
  t5490 = t5256*t5481;
  t5492 = t5340 + t5490;
  t5497 = -1.*t5256*t5290;
  t5499 = t5246*t5481;
  t5503 = t5497 + t5499;
  t5371 = Power(t5370,2);
  t5443 = Power(t5440,2);
  t5444 = 0.00002025 + t5371 + t5443;
  t5447 = 1/Sqrt(t5444);
  t5561 = t5256*t5396;
  t5563 = t5319 + t5561;
  t5566 = t5340 + t5402;
  t5538 = 0.049*t5174;
  t5539 = t5538 + t5206;
  t5542 = -0.21*t5174;
  t5543 = -0.049*t5205;
  t5545 = t5542 + t5543;
  t5463 = t5300*t5290;
  t5556 = 0.01841*t5246;
  t5557 = 0.70544*t5256;
  t5558 = t5556 + t5557;
  t5549 = 0.70544*t5246;
  t5552 = t5549 + t5262;
  t5486 = t5264*t5481;
  t5690 = t5404 + t5490;
  t5699 = t5321 + t5499;
  t5784 = 0.02159*t5323;
  t5785 = t5784 + t5331;
  t5791 = -1.11344*t5323;
  t5794 = -0.02159*t5329;
  t5801 = t5791 + t5794;
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
  p_output1[60]=1.;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=1.;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0.5*t2494*(2.*t2017*t2460 + 2.*t2017*(t2549 + t2559 + t2561 + t2567 + t2568 + t2652 + t1752*t2733 + t1567*t2787 - 0.02159*t2859 - 1.11344*t2926));
  p_output1[77]=t2017*t3144*t3245 + t3209*t3245*(t2043 + t2047 + t2078 + t2101 - 1.*t1752*t2733 - 1.*t1567*t2787 + 0.02159*t2859 + 1.11344*t2926 + t3251 + t3269);
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0;
  p_output1[85]=0.5*t2494*(2.*t2460*(t1180 + t1283 + t216*t3411 + t2145*t3442 + t1253*t3462 + t1752*t3518 + t1567*t3644 - 0.02159*t3816 - 1.11344*t3919 + t3426*t434) + 2.*t2017*(t2568 + t2652 + t216*t3426 + t1253*t3442 + t1174*t3462 + t1752*t4077 + t1567*t4111 - 0.02159*t4195 - 1.*t3411*t434 - 1.11344*t4348));
  p_output1[86]=t2017*t3245*(t3087 + t3092 - 1.*t216*t3411 - 1.*t2145*t3442 - 1.*t1253*t3462 - 1.*t1752*t3518 - 1.*t1567*t3644 + 0.02159*t3816 + 1.11344*t3919 - 1.*t3426*t434) + t3209*t3245*(t3251 + t3269 - 1.*t216*t3426 - 1.*t1253*t3442 - 1.*t1174*t3462 - 1.*t1752*t4077 - 1.*t1567*t4111 + 0.02159*t4195 + t3411*t434 + 1.11344*t4348);
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
  p_output1[120]=0;
  p_output1[121]=0.5*t2494*(2.*t2017*(-0.02159*t1847 + t1597*t4938 + t1793*t4962 - 1.11344*t4982) + 2.*t2460*(-0.02159*t2454 + t2393*t4938 + t2297*t4962 - 1.11344*t5064));
  p_output1[122]=t3209*t3245*(0.02159*t1847 - 1.*t1597*t4938 - 1.*t1793*t4962 + 1.11344*t4982) + t2017*t3245*(0.02159*t2454 - 1.*t2393*t4938 - 1.*t2297*t4962 + 1.11344*t5064);
  p_output1[123]=0;
  p_output1[124]=0;
  p_output1[125]=-1.;
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
  p_output1[132]=0;
  p_output1[133]=0;
  p_output1[134]=0;
  p_output1[135]=0;
  p_output1[136]=0;
  p_output1[137]=1.;
  p_output1[138]=0;
  p_output1[139]=0;
  p_output1[140]=0;
  p_output1[141]=0;
  p_output1[142]=0;
  p_output1[143]=0;
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=0.5*t5447*(2.*t5370*t5440 + 2.*t5370*(-0.09*t5151 - 0.049*t5169 - 1.*t5169*t5211 - 1.*t5151*t5235 + t5463 + t5486 + t5332*t5492 + t5349*t5503 - 1.11344*(-1.*t5329*t5492 + t5323*t5503) - 0.02159*(t5323*t5492 + t5329*t5503)));
  p_output1[148]=0;
  p_output1[149]=0;
  p_output1[150]=0;
  p_output1[151]=0;
  p_output1[152]=0;
  p_output1[153]=0;
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=0.5*t5447*(2.*t5440*(t5294 + t5318 + t5151*t5539 + t5169*t5545 + t5396*t5552 + t5309*t5558 + t5332*t5563 + t5349*t5566 - 1.11344*(-1.*t5329*t5563 + t5323*t5566) - 0.02159*(t5323*t5563 + t5329*t5566)) + 2.*t5370*(t5463 + t5486 - 1.*t5169*t5539 + t5151*t5545 + t5309*t5552 + t5290*t5558 + t5332*t5690 + t5349*t5699 - 1.11344*(-1.*t5329*t5690 + t5323*t5699) - 0.02159*(t5323*t5690 + t5329*t5699)));
  p_output1[157]=0;
  p_output1[158]=0;
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
  p_output1[192]=0.5*t5447*(2.*t5370*(-1.11344*(-1.*t5322*t5323 - 1.*t5329*t5343) - 0.02159*t5361 + t5343*t5785 + t5322*t5801) + 2.*t5440*(-1.11344*(-1.*t5323*t5406 - 1.*t5329*t5411) - 0.02159*t5425 + t5411*t5785 + t5406*t5801));
  p_output1[193]=0;
  p_output1[194]=0;
  p_output1[195]=0;
  p_output1[196]=0;
  p_output1[197]=0;
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

void Dya_RightStanceActual_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




