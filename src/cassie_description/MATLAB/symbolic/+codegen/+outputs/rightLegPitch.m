%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% rightLegPitch
% 
% This file is automatically converted to matlab format from C code.
% Source symbolic expressions exported from FROST:
% 	 https://github.com/ayonga/frost-dev
% 
% Author: Jenna Reher (jreher@caltech.edu)
% Automatically generated on: February 02, 2021 T 01:46
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function out = rightLegPitch(var1)

  out = zeros(1, 1);

  p_output1 = zeros(1,1);


  t145 = cos(var1(4));
  t239 = cos(var1(5));
  t293 = sin(var1(15));
  t327 = t145*t239*t293;
  t367 = cos(var1(15));
  t392 = sin(var1(4));
  t489 = t367*t392;
  t547 = t327 + t489;
  t572 = cos(var1(16));
  t580 = -1.*t572;
  t581 = 1. + t580;
  t661 = sin(var1(16));
  t1114 = sin(var1(5));
  t831 = cos(var1(17));
  t837 = -1.*t831;
  t871 = 1. + t837;
  t954 = sin(var1(17));
  t1047 = t367*t145*t239;
  t1087 = -1.*t293*t392;
  t1100 = t1047 + t1087;
  t1396 = t661*t547;
  t1430 = -1.*t572*t145*t1114;
  t1445 = t1396 + t1430;
  t1668 = cos(var1(18));
  t1676 = -1.*t1668;
  t1684 = 1. + t1676;
  t1698 = sin(var1(18));
  t1900 = -1.*var1(18);
  t1921 = 0.226893 + t1900;
  t1726 = t954*t1100;
  t1758 = t831*t1445;
  t1771 = t1726 + t1758;
  t1825 = t831*t1100;
  t1828 = -1.*t954*t1445;
  t1831 = t1825 + t1828;
  t1953 = cos(t1921);
  t1999 = -1.*t1953;
  t2004 = 1. + t1999;
  t2027 = sin(t1921);
  t2039 = -1.*t1698*t1771;
  t2046 = t1668*t1831;
  t2056 = t2039 + t2046;
  t2214 = t1668*t1771;
  t2224 = t1698*t1831;
  t2227 = t2214 + t2224;
  t2306 = cos(var1(22));
  t2332 = -1.*t2306;
  t2440 = 1. + t2332;
  t2511 = sin(var1(22));
  t2556 = t2027*t2056;
  t2591 = t1953*t2227;
  t2606 = t2556 + t2591;
  t2686 = t1953*t2056;
  t2688 = -1.*t2027*t2227;
  t2693 = t2686 + t2688;
  t1129 = -0.049*t581;
  t1133 = -0.135*t661;
  t1140 = t1129 + t1133;
  t594 = -0.135*t581;
  t663 = 0.049*t661;
  t740 = t594 + t663;
  t936 = -0.09*t871;
  t981 = 0.049*t954;
  t995 = t936 + t981;
  t1316 = -0.049*t871;
  t1319 = -0.09*t954;
  t1362 = t1316 + t1319;
  t1696 = -0.049*t1684;
  t1708 = -0.21*t1698;
  t1722 = t1696 + t1708;
  t3076 = t572*t239;
  t3080 = t293*t661*t1114;
  t3083 = t3076 + t3080;
  t1806 = -0.21*t1684;
  t1810 = 0.049*t1698;
  t1815 = t1806 + t1810;
  t2016 = -0.70544*t2004;
  t2033 = -0.01841*t2027;
  t2034 = t2016 + t2033;
  t3115 = t367*t954*t1114;
  t3124 = t831*t3083;
  t3127 = t3115 + t3124;
  t3145 = t367*t831*t1114;
  t3157 = -1.*t954*t3083;
  t3196 = t3145 + t3157;
  t2099 = 0.01841*t2004;
  t2115 = -0.70544*t2027;
  t2142 = t2099 + t2115;
  t2509 = -0.02159*t2440;
  t2517 = -1.11344*t2511;
  t2518 = t2509 + t2517;
  t3274 = -1.*t1698*t3127;
  t3280 = t1668*t3196;
  t3297 = t3274 + t3280;
  t3311 = t1668*t3127;
  t3317 = t1698*t3196;
  t3327 = t3311 + t3317;
  t2640 = -1.11344*t2440;
  t2676 = 0.02159*t2511;
  t2679 = t2640 + t2676;
  t3367 = t2027*t3297;
  t3437 = t1953*t3327;
  t3449 = t3367 + t3437;
  t3561 = t1953*t3297;
  t3606 = -1.*t2027*t3327;
  t3611 = t3561 + t3606;
  p_output1(1)=Arctan(-1.*t1362*t1445 + 0.049*t1114*t145 + t1114*t1140*t145 - 1.*t1722*t1771 - 1.*t1815*t1831 - 1.*t2034*t2056 - 1.*t2142*t2227 - 1.*t2518*t2606 - 1.*t2679*t2693 + 1.11344*(-1.*t2511*t2606 + t2306*t2693) + 0.02159*(t2306*t2606 + t2511*t2693) - 0.135*t547 + 0.1305*(t547*t572 + t1114*t145*t661) - 1.*t547*t740 - 1.*t1100*t995,0.049*t239 + t1140*t239 + 0.135*t1114*t293 + t1362*t3083 + t1722*t3127 + t1815*t3196 + t2034*t3297 + t2142*t3327 + t2518*t3449 + t2679*t3611 - 1.11344*(-1.*t2511*t3449 + t2306*t3611) - 0.02159*(t2306*t3449 + t2511*t3611) - 0.1305*(t1114*t293*t572 - 1.*t239*t661) + t1114*t293*t740 + t1114*t367*t995);
  out = reshape(p_output1, 1, 1);
end