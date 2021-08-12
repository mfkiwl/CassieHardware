/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:53 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "J_yaRightStance.hh"
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
  double t23;
  double t121;
  double t128;
  double t155;
  double t330;
  double t428;
  double t854;
  double t889;
  double t917;
  double t944;
  double t964;
  double t1027;
  double t1189;
  double t1201;
  double t1209;
  double t1318;
  double t1328;
  double t1425;
  double t1452;
  double t1488;
  double t1499;
  double t1548;
  double t1573;
  double t1618;
  double t1671;
  double t1735;
  double t1745;
  double t1751;
  double t509;
  double t670;
  double t717;
  double t313;
  double t356;
  double t380;
  double t1279;
  double t1288;
  double t1312;
  double t968;
  double t1147;
  double t1168;
  double t1697;
  double t1701;
  double t1709;
  double t1970;
  double t1975;
  double t1976;
  double t1518;
  double t1554;
  double t1561;
  double t1993;
  double t2006;
  double t2017;
  double t2021;
  double t2029;
  double t85;
  double t397;
  double t499;
  double t797;
  double t1271;
  double t1439;
  double t1673;
  double t1759;
  double t1769;
  double t1798;
  double t1818;
  double t1836;
  double t1838;
  double t1842;
  double t1846;
  double t1849;
  double t1859;
  double t1942;
  double t1945;
  double t1964;
  double t1969;
  double t1980;
  double t1982;
  double t2008;
  double t2031;
  double t2037;
  double t2044;
  double t2054;
  double t2069;
  double t2087;
  double t2116;
  double t2126;
  double t2128;
  double t2134;
  double t2196;
  double t2210;
  double t2251;
  double t2268;
  double t2311;
  double t2321;
  double t2337;
  double t2372;
  double t2448;
  double t2449;
  double t2455;
  double t2456;
  double t2457;
  double t2458;
  double t2460;
  double t2461;
  double t2462;
  double t2463;
  double t2475;
  double t2160;
  double t2162;
  double t2163;
  double t2171;
  double t2486;
  double t2488;
  double t2520;
  double t2528;
  double t2536;
  double t2570;
  double t2619;
  double t2383;
  double t2384;
  double t2387;
  double t2396;
  double t2400;
  double t2402;
  double t2481;
  double t2636;
  double t2637;
  double t2698;
  double t1884;
  double t2146;
  double t2147;
  double t2153;
  double t3233;
  double t3251;
  double t3257;
  double t3058;
  double t3071;
  double t3086;
  double t3029;
  double t3040;
  double t2193;
  double t3183;
  double t3196;
  double t3197;
  double t3110;
  double t3175;
  double t2258;
  double t3529;
  double t3539;
  double t3269;
  double t3284;
  double t3306;
  double t3368;
  double t3375;
  double t3390;
  double t2711;
  double t2726;
  double t3559;
  double t3576;
  double t3610;
  double t3617;
  double t3633;
  double t3637;
  double t3965;
  double t3966;
  double t3913;
  double t3917;
  double t3918;
  double t4047;
  double t4055;
  double t4057;
  double t4000;
  double t4001;
  double t4003;
  double t4175;
  double t4199;
  double t4204;
  double t4208;
  double t4209;
  double t4224;
  double t4257;
  double t4258;
  double t4261;
  double t4262;
  double t4264;
  double t4270;
  double t4276;
  double t4284;
  double t4287;
  double t4301;
  double t4304;
  double t4309;
  double t4328;
  double t4330;
  double t4332;
  double t4334;
  double t4342;
  double t4343;
  double t4346;
  double t4316;
  double t4319;
  double t4321;
  double t4216;
  double t4229;
  double t4234;
  double t4241;
  double t4245;
  double t4249;
  double t4291;
  double t4296;
  double t4298;
  double t4267;
  double t4273;
  double t4274;
  double t4407;
  double t4409;
  double t4410;
  double t4333;
  double t4335;
  double t4338;
  double t4361;
  double t4362;
  double t4363;
  double t4430;
  double t4431;
  double t4432;
  double t4434;
  double t4436;
  double t4180;
  double t4201;
  double t4235;
  double t4255;
  double t4290;
  double t4314;
  double t4340;
  double t4367;
  double t4368;
  double t4369;
  double t4375;
  double t4377;
  double t4380;
  double t4381;
  double t4392;
  double t4396;
  double t4397;
  double t4400;
  double t4401;
  double t4402;
  double t4405;
  double t4415;
  double t4429;
  double t4433;
  double t4442;
  double t4447;
  double t4451;
  double t4466;
  double t4467;
  double t4468;
  double t4473;
  double t4474;
  double t4476;
  double t4477;
  double t4509;
  double t4511;
  double t4515;
  double t4520;
  double t4521;
  double t4524;
  double t4528;
  double t4531;
  double t4398;
  double t4484;
  double t4487;
  double t4489;
  double t4601;
  double t4602;
  double t4608;
  double t4556;
  double t4560;
  double t4563;
  double t4564;
  double t4570;
  double t4501;
  double t4584;
  double t4589;
  double t4592;
  double t4574;
  double t4579;
  double t4519;
  double t4646;
  double t4648;
  double t4668;
  double t4670;
  double t4674;
  double t4677;
  double t4680;
  t23 = Cos(var1[8]);
  t121 = Cos(var1[9]);
  t128 = -1.*t121;
  t155 = 1. + t128;
  t330 = Sin(var1[9]);
  t428 = Sin(var1[8]);
  t854 = -1.*var1[9];
  t889 = 0.226893 + t854;
  t917 = Cos(t889);
  t944 = -1.*t917;
  t964 = 1. + t944;
  t1027 = Sin(t889);
  t1189 = -1.*t23*t330;
  t1201 = -1.*t121*t428;
  t1209 = t1189 + t1201;
  t1318 = t121*t23;
  t1328 = -1.*t330*t428;
  t1425 = t1318 + t1328;
  t1452 = Cos(var1[13]);
  t1488 = -1.*t1452;
  t1499 = 1. + t1488;
  t1548 = Sin(var1[13]);
  t1573 = t1027*t1209;
  t1618 = t917*t1425;
  t1671 = t1573 + t1618;
  t1735 = t917*t1209;
  t1745 = -1.*t1027*t1425;
  t1751 = t1735 + t1745;
  t509 = -0.21*t155;
  t670 = 0.049*t330;
  t717 = t509 + t670;
  t313 = -0.049*t155;
  t356 = -0.21*t330;
  t380 = t313 + t356;
  t1279 = 0.01841*t964;
  t1288 = -0.70544*t1027;
  t1312 = t1279 + t1288;
  t968 = -0.70544*t964;
  t1147 = -0.01841*t1027;
  t1168 = t968 + t1147;
  t1697 = -1.11344*t1499;
  t1701 = 0.02159*t1548;
  t1709 = t1697 + t1701;
  t1970 = t23*t330;
  t1975 = t121*t428;
  t1976 = t1970 + t1975;
  t1518 = -0.02159*t1499;
  t1554 = -1.11344*t1548;
  t1561 = t1518 + t1554;
  t1993 = -1.*t1027*t1976;
  t2006 = t1993 + t1618;
  t2017 = t917*t1976;
  t2021 = t1027*t1425;
  t2029 = t2017 + t2021;
  t85 = 0.049*t23;
  t397 = t23*t380;
  t499 = -0.09*t428;
  t797 = -1.*t717*t428;
  t1271 = t1168*t1209;
  t1439 = t1312*t1425;
  t1673 = t1561*t1671;
  t1759 = t1709*t1751;
  t1769 = -1.*t1548*t1671;
  t1798 = t1452*t1751;
  t1818 = t1769 + t1798;
  t1836 = -1.11344*t1818;
  t1838 = t1452*t1671;
  t1842 = t1548*t1751;
  t1846 = t1838 + t1842;
  t1849 = -0.02159*t1846;
  t1859 = t85 + t397 + t499 + t797 + t1271 + t1439 + t1673 + t1759 + t1836 + t1849;
  t1942 = 0.09*t23;
  t1945 = t23*t717;
  t1964 = 0.049*t428;
  t1969 = t380*t428;
  t1980 = t1312*t1976;
  t1982 = t1168*t1425;
  t2008 = t1709*t2006;
  t2031 = t1561*t2029;
  t2037 = t1548*t2006;
  t2044 = t1452*t2029;
  t2054 = t2037 + t2044;
  t2069 = -0.02159*t2054;
  t2087 = t1452*t2006;
  t2116 = -1.*t1548*t2029;
  t2126 = t2087 + t2116;
  t2128 = -1.11344*t2126;
  t2134 = t1942 + t1945 + t1964 + t1969 + t1980 + t1982 + t2008 + t2031 + t2069 + t2128;
  t2196 = -1.*t121*t23;
  t2210 = t330*t428;
  t2251 = t2196 + t2210;
  t2268 = -1.*t1027*t1209;
  t2311 = t917*t2251;
  t2321 = t2268 + t2311;
  t2337 = t1027*t2251;
  t2372 = t1735 + t2337;
  t2448 = -0.049*t23;
  t2449 = -1.*t23*t380;
  t2455 = 0.09*t428;
  t2456 = t717*t428;
  t2457 = -1.*t1168*t1209;
  t2458 = -1.*t1312*t1425;
  t2460 = -1.*t1561*t1671;
  t2461 = -1.*t1709*t1751;
  t2462 = 1.11344*t1818;
  t2463 = 0.02159*t1846;
  t2475 = t2448 + t2449 + t2455 + t2456 + t2457 + t2458 + t2460 + t2461 + t2462 + t2463;
  t2160 = -0.09*t23;
  t2162 = -1.*t23*t717;
  t2163 = -0.049*t428;
  t2171 = -1.*t380*t428;
  t2486 = -1.*t1312*t1976;
  t2488 = -1.*t1168*t1425;
  t2520 = -1.*t1709*t2006;
  t2528 = -1.*t1561*t2029;
  t2536 = 0.02159*t2054;
  t2570 = 1.11344*t2126;
  t2619 = t2160 + t2162 + t2163 + t2171 + t2486 + t2488 + t2520 + t2528 + t2536 + t2570;
  t2383 = t1548*t2321;
  t2384 = t1452*t2372;
  t2387 = t2383 + t2384;
  t2396 = t1452*t2321;
  t2400 = -1.*t1548*t2372;
  t2402 = t2396 + t2400;
  t2481 = Power(t2475,2);
  t2636 = Power(t2619,2);
  t2637 = t2481 + t2636;
  t2698 = 1/t2637;
  t1884 = Power(t1859,2);
  t2146 = Power(t2134,2);
  t2147 = 0.00002025 + t1884 + t2146;
  t2153 = 1/Sqrt(t2147);
  t3233 = t1735 + t2017;
  t3251 = t1027*t1976;
  t3257 = t1573 + t3251;
  t3058 = -0.21*t121;
  t3071 = -0.049*t330;
  t3086 = t3058 + t3071;
  t3029 = 0.049*t121;
  t3040 = t3029 + t356;
  t2193 = t1312*t1209;
  t3183 = 0.01841*t917;
  t3196 = 0.70544*t1027;
  t3197 = t3183 + t3196;
  t3110 = 0.70544*t917;
  t3175 = t3110 + t1147;
  t2258 = t1168*t2251;
  t3529 = t1618 + t2311;
  t3539 = t2021 + t2337;
  t3269 = t1548*t3233;
  t3284 = t1452*t3257;
  t3306 = t3269 + t3284;
  t3368 = t1452*t3233;
  t3375 = -1.*t1548*t3257;
  t3390 = t3368 + t3375;
  t2711 = -1.*t1312*t1209;
  t2726 = -1.*t1168*t2251;
  t3559 = t1548*t3529;
  t3576 = t1452*t3539;
  t3610 = t3559 + t3576;
  t3617 = t1452*t3529;
  t3633 = -1.*t1548*t3539;
  t3637 = t3617 + t3633;
  t3965 = 0.02159*t1452;
  t3966 = t3965 + t1554;
  t3913 = -1.11344*t1452;
  t3917 = -0.02159*t1548;
  t3918 = t3913 + t3917;
  t4047 = -1.*t1548*t2006;
  t4055 = -1.*t1452*t2029;
  t4057 = t4047 + t4055;
  t4000 = -1.*t1452*t1671;
  t4001 = -1.*t1548*t1751;
  t4003 = t4000 + t4001;
  t4175 = Cos(var1[16]);
  t4199 = Sin(var1[16]);
  t4204 = Cos(var1[17]);
  t4208 = -1.*t4204;
  t4209 = 1. + t4208;
  t4224 = Sin(var1[17]);
  t4257 = -1.*var1[17];
  t4258 = 0.226893 + t4257;
  t4261 = Cos(t4258);
  t4262 = -1.*t4261;
  t4264 = 1. + t4262;
  t4270 = Sin(t4258);
  t4276 = -1.*t4204*t4199;
  t4284 = -1.*t4175*t4224;
  t4287 = t4276 + t4284;
  t4301 = t4175*t4204;
  t4304 = -1.*t4199*t4224;
  t4309 = t4301 + t4304;
  t4328 = Cos(var1[21]);
  t4330 = -1.*t4328;
  t4332 = 1. + t4330;
  t4334 = Sin(var1[21]);
  t4342 = t4261*t4287;
  t4343 = -1.*t4270*t4309;
  t4346 = t4342 + t4343;
  t4316 = t4270*t4287;
  t4319 = t4261*t4309;
  t4321 = t4316 + t4319;
  t4216 = -0.049*t4209;
  t4229 = -0.21*t4224;
  t4234 = t4216 + t4229;
  t4241 = -0.21*t4209;
  t4245 = 0.049*t4224;
  t4249 = t4241 + t4245;
  t4291 = 0.01841*t4264;
  t4296 = -0.70544*t4270;
  t4298 = t4291 + t4296;
  t4267 = -0.70544*t4264;
  t4273 = -0.01841*t4270;
  t4274 = t4267 + t4273;
  t4407 = t4204*t4199;
  t4409 = t4175*t4224;
  t4410 = t4407 + t4409;
  t4333 = -0.02159*t4332;
  t4335 = -1.11344*t4334;
  t4338 = t4333 + t4335;
  t4361 = -1.11344*t4332;
  t4362 = 0.02159*t4334;
  t4363 = t4361 + t4362;
  t4430 = t4261*t4410;
  t4431 = t4270*t4309;
  t4432 = t4430 + t4431;
  t4434 = -1.*t4270*t4410;
  t4436 = t4434 + t4319;
  t4180 = 0.049*t4175;
  t4201 = -0.09*t4199;
  t4235 = t4175*t4234;
  t4255 = -1.*t4199*t4249;
  t4290 = t4274*t4287;
  t4314 = t4298*t4309;
  t4340 = t4321*t4338;
  t4367 = t4346*t4363;
  t4368 = t4328*t4346;
  t4369 = -1.*t4321*t4334;
  t4375 = t4368 + t4369;
  t4377 = -1.11344*t4375;
  t4380 = t4328*t4321;
  t4381 = t4346*t4334;
  t4392 = t4380 + t4381;
  t4396 = -0.02159*t4392;
  t4397 = t4180 + t4201 + t4235 + t4255 + t4290 + t4314 + t4340 + t4367 + t4377 + t4396;
  t4400 = 0.09*t4175;
  t4401 = 0.049*t4199;
  t4402 = t4199*t4234;
  t4405 = t4175*t4249;
  t4415 = t4298*t4410;
  t4429 = t4274*t4309;
  t4433 = t4432*t4338;
  t4442 = t4436*t4363;
  t4447 = t4328*t4432;
  t4451 = t4436*t4334;
  t4466 = t4447 + t4451;
  t4467 = -0.02159*t4466;
  t4468 = t4328*t4436;
  t4473 = -1.*t4432*t4334;
  t4474 = t4468 + t4473;
  t4476 = -1.11344*t4474;
  t4477 = t4400 + t4401 + t4402 + t4405 + t4415 + t4429 + t4433 + t4442 + t4467 + t4476;
  t4509 = -1.*t4175*t4204;
  t4511 = t4199*t4224;
  t4515 = t4509 + t4511;
  t4520 = t4270*t4515;
  t4521 = t4342 + t4520;
  t4524 = -1.*t4270*t4287;
  t4528 = t4261*t4515;
  t4531 = t4524 + t4528;
  t4398 = Power(t4397,2);
  t4484 = Power(t4477,2);
  t4487 = 0.00002025 + t4398 + t4484;
  t4489 = 1/Sqrt(t4487);
  t4601 = t4270*t4410;
  t4602 = t4316 + t4601;
  t4608 = t4342 + t4430;
  t4556 = 0.049*t4204;
  t4560 = t4556 + t4229;
  t4563 = -0.21*t4204;
  t4564 = -0.049*t4224;
  t4570 = t4563 + t4564;
  t4501 = t4298*t4287;
  t4584 = 0.01841*t4261;
  t4589 = 0.70544*t4270;
  t4592 = t4584 + t4589;
  t4574 = 0.70544*t4261;
  t4579 = t4574 + t4273;
  t4519 = t4274*t4515;
  t4646 = t4431 + t4520;
  t4648 = t4319 + t4528;
  t4668 = 0.02159*t4328;
  t4670 = t4668 + t4335;
  t4674 = -1.11344*t4328;
  t4677 = -0.02159*t4334;
  t4680 = t4674 + t4677;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=1.;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=1.;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0.5*t2153*(2.*t1859*t2134 + 2.*t1859*(t2160 + t2162 + t2163 + t2171 + t2193 + t2258 + t1709*t2321 + t1561*t2372 - 0.02159*t2387 - 1.11344*t2402));
  p_output1[23]=t1859*t2475*t2698 + t2619*t2698*(t1942 + t1945 + t1964 + t1969 - 1.*t1709*t2321 - 1.*t1561*t2372 + 0.02159*t2387 + 1.11344*t2402 + t2711 + t2726);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0.5*t2153*(2.*t1859*(t2193 + t2258 + t23*t3086 + t1425*t3175 + t1209*t3197 + t1709*t3529 + t1561*t3539 - 0.02159*t3610 - 1.11344*t3637 - 1.*t3040*t428) + 2.*t2134*(t1271 + t1439 + t23*t3040 + t1976*t3175 + t1425*t3197 + t1709*t3233 + t1561*t3257 - 0.02159*t3306 - 1.11344*t3390 + t3086*t428));
  p_output1[32]=t2619*t2698*(t2711 + t2726 - 1.*t23*t3086 - 1.*t1425*t3175 - 1.*t1209*t3197 - 1.*t1709*t3529 - 1.*t1561*t3539 + 0.02159*t3610 + 1.11344*t3637 + t3040*t428) + t1859*t2698*(t2457 + t2458 - 1.*t23*t3040 - 1.*t1976*t3175 - 1.*t1425*t3197 - 1.*t1709*t3233 - 1.*t1561*t3257 + 0.02159*t3306 + 1.11344*t3390 - 1.*t3086*t428);
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0.5*t2153*(2.*t1859*(-0.02159*t1818 + t1671*t3918 + t1751*t3966 - 1.11344*t4003) + 2.*t2134*(-0.02159*t2126 + t2029*t3918 + t2006*t3966 - 1.11344*t4057));
  p_output1[41]=t2619*t2698*(0.02159*t1818 - 1.*t1671*t3918 - 1.*t1751*t3966 + 1.11344*t4003) + t1859*t2698*(0.02159*t2126 - 1.*t2029*t3918 - 1.*t2006*t3966 + 1.11344*t4057);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=-1.;
  p_output1[45]=-1.;
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
  p_output1[56]=1.;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=1.;
  p_output1[65]=0;
  p_output1[66]=0.5*t4489*(2.*t4397*t4477 + 2.*t4397*(-0.09*t4175 - 0.049*t4199 - 1.*t4199*t4234 - 1.*t4175*t4249 + t4501 + t4519 + t4338*t4521 + t4363*t4531 - 1.11344*(-1.*t4334*t4521 + t4328*t4531) - 0.02159*(t4328*t4521 + t4334*t4531)));
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0.5*t4489*(2.*t4477*(t4290 + t4314 + t4175*t4560 + t4199*t4570 + t4410*t4579 + t4309*t4592 + t4338*t4602 + t4363*t4608 - 1.11344*(-1.*t4334*t4602 + t4328*t4608) - 0.02159*(t4328*t4602 + t4334*t4608)) + 2.*t4397*(t4501 + t4519 - 1.*t4199*t4560 + t4175*t4570 + t4309*t4579 + t4287*t4592 + t4338*t4646 + t4363*t4648 - 1.11344*(-1.*t4334*t4646 + t4328*t4648) - 0.02159*(t4328*t4646 + t4334*t4648)));
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0.5*t4489*(2.*t4397*(-1.11344*(-1.*t4321*t4328 - 1.*t4334*t4346) - 0.02159*t4375 + t4346*t4670 + t4321*t4680) + 2.*t4477*(-1.11344*(-1.*t4328*t4432 - 1.*t4334*t4436) - 0.02159*t4474 + t4436*t4670 + t4432*t4680));
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 10, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void J_yaRightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




