%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% leftLegAngleVelocity
% 
% This file is automatically converted to matlab format from C code.
% Source symbolic expressions exported from FROST:
% 	 https://github.com/ayonga/frost-dev
% 
% Author: Jenna Reher (jreher@caltech.edu)
% Automatically generated on: December 12, 2020 T 02:27
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function out = leftLegAngleVelocity(var1,var2)

  out = zeros(1, 1);

  p_output1 = zeros(1,1);


  t484 = cos(var1(9));
  t850 = cos(var1(10));
  t993 = -1.*t850;
  t1306 = 1. + t993;
  t1465 = sin(var1(10));
  t1645 = sin(var1(9));
  t2050 = -1.*var1(10);
  t2059 = 0.226893 + t2050;
  t2075 = cos(t2059);
  t2097 = -1.*t2075;
  t2109 = 1. + t2097;
  t2144 = sin(t2059);
  t2156 = -1.*t484*t1465;
  t2170 = -1.*t850*t1645;
  t2172 = t2156 + t2170;
  t2213 = t850*t484;
  t2218 = -1.*t1465*t1645;
  t2238 = t2213 + t2218;
  t2308 = cos(var1(14));
  t2312 = -1.*t2308;
  t2330 = 1. + t2312;
  t2384 = sin(var1(14));
  t2432 = t2144*t2172;
  t2441 = t2075*t2238;
  t2448 = t2432 + t2441;
  t2489 = t2075*t2172;
  t2526 = -1.*t2144*t2238;
  t2531 = t2489 + t2526;
  t2398 = -1.11344*t2384;
  t2754 = t484*t1465;
  t2781 = t850*t1645;
  t2832 = t2754 + t2781;
  t2837 = -1.*t2144*t2832;
  t2850 = t2837 + t2441;
  t2870 = t2075*t2832;
  t2871 = t2144*t2238;
  t2886 = t2870 + t2871;
  t1434 = -0.049*t1306;
  t1616 = -0.21*t1465;
  t1617 = t1434 + t1616;
  t1763 = -0.21*t1306;
  t1783 = 0.049*t1465;
  t1860 = t1763 + t1783;
  t2123 = -0.70544*t2109;
  t2147 = -0.01841*t2144;
  t2151 = t2123 + t2147;
  t2188 = 0.01841*t2109;
  t2197 = -0.70544*t2144;
  t2205 = t2188 + t2197;
  t2365 = -0.02159*t2330;
  t2406 = t2365 + t2398;
  t2477 = -1.11344*t2330;
  t2479 = 0.02159*t2384;
  t2487 = t2477 + t2479;
  t2550 = -1.*t2384*t2448;
  t2552 = t2308*t2531;
  t2557 = t2550 + t2552;
  t2579 = t2308*t2448;
  t2610 = t2384*t2531;
  t2617 = t2579 + t2610;
  t2998 = t2308*t2850;
  t3003 = -1.*t2384*t2886;
  t3016 = t2998 + t3003;
  t2854 = -1.11344*t2308;
  t2855 = -0.02159*t2384;
  t2860 = t2854 + t2855;
  t2722 = 0.02159*t2308;
  t2731 = t2722 + t2398;
  t3148 = -0.09*t484;
  t3191 = -1.*t484*t1860;
  t3250 = -0.049*t1645;
  t3268 = -1.*t1617*t1645;
  t3275 = -1.*t2205*t2832;
  t3383 = -1.*t2151*t2238;
  t3395 = -1.*t2487*t2850;
  t3402 = -1.*t2406*t2886;
  t3457 = t2384*t2850;
  t3458 = t2308*t2886;
  t3506 = t3457 + t3458;
  t3537 = 0.02159*t3506;
  t3573 = 1.11344*t3016;
  t3621 = t3148 + t3191 + t3250 + t3268 + t3275 + t3383 + t3395 + t3402 + t3537 + t3573;
  t3037 = -0.049*t484;
  t3042 = -1.*t484*t1617;
  t3048 = 0.09*t1645;
  t3049 = t1860*t1645;
  t3057 = -1.*t2151*t2172;
  t3059 = -1.*t2205*t2238;
  t3061 = -1.*t2406*t2448;
  t3082 = -1.*t2487*t2531;
  t3084 = 1.11344*t2557;
  t3103 = 0.02159*t2617;
  t3141 = t3037 + t3042 + t3048 + t3049 + t3057 + t3059 + t3061 + t3082 + t3084 + t3103;
  t3147 = power(t3141,2);
  t3633 = power(t3621,2);
  t3672 = t3147 + t3633;
  t3676 = 1/t3672;
  t548 = 0.049*t484;
  t1625 = t484*t1617;
  t1713 = -0.09*t1645;
  t1862 = -1.*t1860*t1645;
  t2187 = t2151*t2172;
  t2255 = t2205*t2238;
  t2452 = t2406*t2448;
  t2548 = t2487*t2531;
  t2576 = -1.11344*t2557;
  t2643 = -0.02159*t2617;
  t2704 = t548 + t1625 + t1713 + t1862 + t2187 + t2255 + t2452 + t2548 + t2576 + t2643;
  t3935 = -1.*t850*t484;
  t3947 = t1465*t1645;
  t3959 = t3935 + t3947;
  t3978 = -1.*t2144*t2172;
  t3983 = t2075*t3959;
  t3985 = t3978 + t3983;
  t4048 = t2144*t3959;
  t4056 = t2489 + t4048;
  t4358 = t2489 + t2870;
  t4371 = t2144*t2832;
  t4399 = t2432 + t4371;
  t4300 = -0.21*t850;
  t4302 = -0.049*t1465;
  t4305 = t4300 + t4302;
  t4172 = 0.049*t850;
  t4173 = t4172 + t1616;
  t3928 = -1.*t2205*t2172;
  t4330 = 0.01841*t2075;
  t4335 = 0.70544*t2144;
  t4336 = t4330 + t4335;
  t4316 = 0.70544*t2075;
  t4320 = t4316 + t2147;
  t3973 = -1.*t2151*t3959;
  t4726 = t2441 + t3983;
  t4744 = t2871 + t4048;
  p_output1(1)=(t2704*t3141*t3676 + t3621*t3676*(0.049*t1645 + t1617*t1645 + t3928 + t3973 - 1.*t2487*t3985 - 1.*t2406*t4056 + 0.02159*(t2384*t3985 + t2308*t4056) + 1.11344*(t2308*t3985 - 1.*t2384*t4056) + 0.09*t484 + t1860*t484))*var2(9) + (t2704*t3676*(t3057 + t3059 - 1.*t1645*t4305 - 1.*t2832*t4320 - 1.*t2238*t4336 - 1.*t2487*t4358 - 1.*t2406*t4399 + 0.02159*(t2384*t4358 + t2308*t4399) + 1.11344*(t2308*t4358 - 1.*t2384*t4399) - 1.*t4173*t484) + t3621*t3676*(t3928 + t3973 + t1645*t4173 - 1.*t2238*t4320 - 1.*t2172*t4336 - 1.*t2487*t4726 - 1.*t2406*t4744 + 0.02159*(t2384*t4726 + t2308*t4744) + 1.11344*(t2308*t4726 - 1.*t2384*t4744) - 1.*t4305*t484))*var2(10) + (t2704*(-1.*t2731*t2850 - 1.*t2860*t2886 + 1.11344*(-1.*t2384*t2850 - 1.*t2308*t2886) + 0.02159*t3016)*t3676 + (1.11344*(-1.*t2308*t2448 - 1.*t2384*t2531) + 0.02159*t2557 - 1.*t2531*t2731 - 1.*t2448*t2860)*t3621*t3676)*var2(14);
  out = reshape(p_output1, 1, 1);
end