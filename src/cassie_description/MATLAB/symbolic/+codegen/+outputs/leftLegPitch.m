%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% leftLegPitch
% 
% This file is automatically converted to matlab format from C code.
% Source symbolic expressions exported from FROST:
% 	 https://github.com/ayonga/frost-dev
% 
% Author: Jenna Reher (jreher@caltech.edu)
% Automatically generated on: February 02, 2021 T 01:46
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function out = leftLegPitch(var1)

  out = zeros(1, 1);

  p_output1 = zeros(1,1);


  t8 = cos(var1(4));
  t205 = cos(var1(7));
  t206 = sin(var1(4));
  t239 = t205*t206;
  t276 = cos(var1(5));
  t280 = sin(var1(7));
  t293 = t8*t276*t280;
  t313 = t239 + t293;
  t42 = sin(var1(5));
  t353 = cos(var1(8));
  t368 = -1.*t353;
  t372 = 1. + t368;
  t401 = sin(var1(8));
  t603 = cos(var1(9));
  t615 = -1.*t603;
  t639 = 1. + t615;
  t645 = sin(var1(9));
  t591 = -1.*t8*t353*t42;
  t594 = t313*t401;
  t601 = t591 + t594;
  t663 = t8*t276*t205;
  t669 = -1.*t206*t280;
  t680 = t663 + t669;
  t741 = cos(var1(10));
  t743 = -1.*t741;
  t754 = 1. + t743;
  t778 = sin(var1(10));
  t940 = -1.*var1(10);
  t954 = 0.226893 + t940;
  t815 = t603*t601;
  t831 = t680*t645;
  t836 = t815 + t831;
  t871 = t603*t680;
  t876 = -1.*t601*t645;
  t926 = t871 + t876;
  t956 = cos(t954);
  t968 = -1.*t956;
  t972 = 1. + t968;
  t1001 = sin(t954);
  t1076 = -1.*t778*t836;
  t1087 = t741*t926;
  t1121 = t1076 + t1087;
  t1316 = t741*t836;
  t1319 = t778*t926;
  t1341 = t1316 + t1319;
  t1378 = cos(var1(14));
  t1385 = -1.*t1378;
  t1400 = 1. + t1385;
  t1409 = sin(var1(14));
  t1430 = t1001*t1121;
  t1445 = t956*t1341;
  t1446 = t1430 + t1445;
  t1497 = t956*t1121;
  t1508 = -1.*t1001*t1341;
  t1546 = t1497 + t1508;
  t388 = 0.135*t372;
  t437 = 0.049*t401;
  t473 = t388 + t437;
  t492 = -0.049*t372;
  t538 = 0.135*t401;
  t544 = t492 + t538;
  t640 = -0.049*t639;
  t649 = -0.09*t645;
  t659 = t640 + t649;
  t709 = -0.09*t639;
  t712 = 0.049*t645;
  t721 = t709 + t712;
  t766 = -0.049*t754;
  t792 = -0.21*t778;
  t803 = t766 + t792;
  t1828 = t276*t353;
  t1831 = t42*t280*t401;
  t1840 = t1828 + t1831;
  t845 = -0.21*t754;
  t852 = 0.049*t778;
  t863 = t845 + t852;
  t985 = -0.70544*t972;
  t1065 = -0.01841*t1001;
  t1067 = t985 + t1065;
  t1921 = t603*t1840;
  t1953 = t205*t42*t645;
  t1998 = t1921 + t1953;
  t2004 = t205*t603*t42;
  t2009 = -1.*t1840*t645;
  t2012 = t2004 + t2009;
  t1245 = 0.01841*t972;
  t1251 = -0.70544*t1001;
  t1274 = t1245 + t1251;
  t1401 = -0.02159*t1400;
  t1421 = -1.11344*t1409;
  t1427 = t1401 + t1421;
  t2024 = -1.*t778*t1998;
  t2027 = t741*t2012;
  t2032 = t2024 + t2027;
  t2034 = t741*t1998;
  t2039 = t778*t2012;
  t2055 = t2034 + t2039;
  t1476 = -1.11344*t1400;
  t1494 = 0.02159*t1409;
  t1495 = t1476 + t1494;
  t2099 = t1001*t2032;
  t2115 = t956*t2055;
  t2116 = t2099 + t2115;
  t2227 = t956*t2032;
  t2248 = -1.*t1001*t2055;
  t2249 = t2227 + t2248;
  p_output1(1)=Arctan(-1.*t1067*t1121 - 1.*t1274*t1341 - 1.*t1427*t1446 - 1.*t1495*t1546 + 1.11344*(-1.*t1409*t1446 + t1378*t1546) + 0.02159*(t1378*t1446 + t1409*t1546) + 0.135*t313 - 1.*t313*t473 - 1.*t601*t659 - 1.*t680*t721 + 0.049*t42*t8 + t42*t544*t8 - 0.1305*(t313*t353 + t401*t42*t8) - 1.*t803*t836 - 1.*t863*t926,t1067*t2032 + t1274*t2055 + t1427*t2116 + t1495*t2249 - 1.11344*(-1.*t1409*t2116 + t1378*t2249) - 0.02159*(t1378*t2116 + t1409*t2249) + 0.049*t276 - 0.135*t280*t42 + 0.1305*(-1.*t276*t401 + t280*t353*t42) + t280*t42*t473 + t276*t544 + t1840*t659 + t205*t42*t721 + t1998*t803 + t2012*t863);
  out = reshape(p_output1, 1, 1);
end