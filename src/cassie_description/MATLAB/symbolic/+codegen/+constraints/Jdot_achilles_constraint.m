%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Jdot_achilles_constraint
% 
% This file is automatically converted to matlab format from C code.
% Source symbolic expressions exported from FROST:
% 	 https://github.com/ayonga/frost-dev
% 
% Author: Jenna Reher (jreher@caltech.edu)
% Automatically generated on: February 02, 2021 T 01:46
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function out = Jdot_achilles_constraint(var1,var2)

  out = zeros(2, 22);

  p_output1 = zeros(44,1);


  t312 = cos(var1(10));
  t205 = cos(var1(11));
  t233 = sin(var1(10));
  t327 = sin(var1(11));
  t762 = cos(var1(12));
  t935 = sin(var1(12));
  t1395 = t312*t205;
  t1459 = -1.*t233*t327;
  t1541 = t1395 + t1459;
  t254 = -1.*t205*t233;
  t722 = -1.*t312*t327;
  t723 = t254 + t722;
  t1877 = cos(var1(13));
  t2245 = -1.*t1877;
  t2281 = 1. + t2245;
  t2414 = -1.*t762*t1541;
  t2512 = -1.*t723*t935;
  t2532 = t2414 + t2512;
  t3628 = sin(var1(13));
  t2830 = t762*t723;
  t2831 = -1.*t1541*t935;
  t3231 = t2830 + t2831;
  t3677 = -0.996943*t3628;
  t4653 = -0.0004284921280000001*t2281;
  t3253 = 0.0004284921280000001*t2281;
  t5228 = 0.996943*t3628;
  t5337 = -1.*t205;
  t5342 = 1. + t5337;
  t1124 = -0.70544*t935;
  t5425 = -1.*t762;
  t5463 = 1. + t5425;
  t2388 = -0.999969365345*t2281;
  t2397 = 1. + t2388;
  t5486 = -1.*t312*t205;
  t5489 = t233*t327;
  t5493 = t5486 + t5489;
  t3794 = t3253 + t3677;
  t5697 = t762*t5493;
  t5792 = t5697 + t2512;
  t4046 = 0.005481192614*t2281;
  t4084 = -0.077936*t3628;
  t4107 = t4046 + t4084;
  t5849 = t5493*t935;
  t5853 = t2830 + t5849;
  t4195 = 0.07769774964800001*t2281;
  t4236 = 0.005498*t3628;
  t4299 = t4195 + t4236;
  t4426 = -1.2096424700126054e-9*var1(13);
  t4559 = -0.6934128581485427*t2281;
  t4698 = t4653 + t3677;
  t4710 = -0.021877537552*t4698;
  t4725 = -0.005481192614*t2281;
  t4744 = 0.077936*t3628;
  t4790 = t4725 + t4744;
  t4818 = 0.005534467322*t4790;
  t4830 = t4426 + t4559 + t4710 + t4818;
  t5119 = -1.7147089040178687e-8*var1(13);
  t5187 = -0.021744644052735636*t2281;
  t5188 = -0.07769774964800001*t2281;
  t5216 = -0.005498*t3628;
  t5225 = t5188 + t5216;
  t5227 = 0.005534467322*t5225;
  t5233 = t4653 + t5228;
  t5234 = -0.6934341012630001*t5233;
  t5240 = t5119 + t5187 + t5227 + t5234;
  t5250 = -0.993925573253*t2281;
  t5270 = 1. + t5250;
  t5287 = t3253 + t5228;
  t763 = -0.01841*t762;
  t1134 = t763 + t1124;
  t1355 = -1.*t723*t1134;
  t1625 = -0.70544*t762;
  t1771 = 0.01841*t935;
  t1778 = t1625 + t1771;
  t1803 = -1.*t1541*t1778;
  t2548 = t2397*t2532;
  t3888 = t3231*t3794;
  t3939 = t2548 + t3888;
  t3962 = 0.588518*t3939;
  t4166 = t2532*t4107;
  t4300 = t3231*t4299;
  t4346 = t4166 + t4300;
  t4410 = -0.124503*t4346;
  t4944 = -1.*t2532*t4830;
  t5244 = -1.*t3231*t5240;
  t5278 = t5270*t3231;
  t5291 = t2532*t5287;
  t5294 = t5278 + t5291;
  t5305 = -0.045407*t5294;
  t5312 = t1355 + t1803 + t3962 + t4410 + t4944 + t5244 + t5305;
  t5356 = -0.00159*t5342;
  t5363 = -0.27068*t327;
  t5369 = t5356 + t5363;
  t5386 = -0.27068*t5342;
  t5389 = 0.00159*t327;
  t5414 = t5386 + t5389;
  t5464 = 0.01841*t5463;
  t5472 = t5464 + t1124;
  t5575 = -0.70544*t5463;
  t5576 = -0.01841*t935;
  t5611 = t5575 + t5576;
  t6064 = t205*t233;
  t6078 = t312*t327;
  t6084 = t6064 + t6078;
  t6087 = t762*t1541;
  t6113 = -1.*t6084*t935;
  t6125 = t6087 + t6113;
  t6142 = t762*t6084;
  t6150 = t1541*t935;
  t6157 = t6142 + t6150;
  t6321 = t723*t935;
  t6338 = t6087 + t6321;
  t6380 = -1.*t762*t6084;
  t6383 = t6380 + t2831;
  t6031 = -1.*t312;
  t6032 = 1. + t6031;
  t6302 = 0.21*t233;
  t6307 = -1.*t312*t5369;
  t6308 = t233*t5414;
  t6309 = -1.*t1541*t5472;
  t6314 = -1.*t723*t5611;
  t6317 = t2397*t3231;
  t6343 = t6338*t3794;
  t6345 = t6317 + t6343;
  t6346 = 0.588518*t6345;
  t6348 = t3231*t4107;
  t6350 = t6338*t4299;
  t6351 = t6348 + t6350;
  t6355 = -0.124503*t6351;
  t6358 = -1.*t3231*t4830;
  t6360 = -1.*t6338*t5240;
  t6362 = t5270*t6338;
  t6364 = t3231*t5287;
  t6366 = t6362 + t6364;
  t6367 = -0.045407*t6366;
  t6468 = -1.*t762*t723;
  t6470 = -1.*t5493*t935;
  t6496 = t6468 + t6470;
  t5476 = -1.*t723*t5472;
  t5694 = -1.*t5493*t5611;
  t5794 = t2397*t5792;
  t5857 = t5853*t3794;
  t5858 = t5794 + t5857;
  t5863 = 0.588518*t5858;
  t5864 = t5792*t4107;
  t5867 = t5853*t4299;
  t5868 = t5864 + t5867;
  t5886 = -0.124503*t5868;
  t5892 = -1.*t5792*t4830;
  t5906 = -1.*t5853*t5240;
  t5929 = t5270*t5853;
  t5941 = t5792*t5287;
  t5944 = t5929 + t5941;
  t6009 = -0.045407*t5944;
  t5318 = 0.21*t312;
  t5323 = 0.049*t233;
  t5378 = t233*t5369;
  t5417 = t312*t5414;
  t6012 = t5318 + t5323 + t5378 + t5417 + t5476 + t5694 + t5863 + t5886 + t5892 + t5906 + t6009;
  t6530 = 0.00159*t205;
  t6531 = t6530 + t5363;
  t6533 = t233*t6531;
  t6534 = -0.27068*t205;
  t6535 = -0.00159*t327;
  t6536 = t6534 + t6535;
  t6538 = -1.*t312*t6536;
  t6539 = t6533 + t6538 + t5476 + t5694 + t5863 + t5886 + t5892 + t5906 + t6009;
  t6034 = 0.21*t6032;
  t6046 = -0.049*t233;
  t6055 = -1.*t233*t5369;
  t6059 = -1.*t312*t5414;
  t6085 = -1.*t6084*t5472;
  t6086 = -1.*t1541*t5611;
  t6133 = t2397*t6125;
  t6162 = t6157*t3794;
  t6164 = t6133 + t6162;
  t6166 = 0.588518*t6164;
  t6168 = t6125*t4107;
  t6218 = t6157*t4299;
  t6232 = t6168 + t6218;
  t6236 = -0.124503*t6232;
  t6264 = -1.*t6125*t4830;
  t6274 = -1.*t6157*t5240;
  t6278 = t5270*t6157;
  t6285 = t6125*t5287;
  t6288 = t6278 + t6285;
  t6290 = -0.045407*t6288;
  t6292 = -0.09 + t6034 + t6046 + t6055 + t6059 + t6085 + t6086 + t6166 + t6236 + t6264 + t6274 + t6290;
  t6299 = -0.049*t312;
  t6372 = t6299 + t6302 + t6307 + t6308 + t6309 + t6314 + t6346 + t6355 + t6358 + t6360 + t6367;
  t6450 = 0.049*t6032;
  t6452 = -0.049 + t6450 + t6302 + t6307 + t6308 + t6309 + t6314 + t6346 + t6355 + t6358 + t6360 + t6367;
  t6557 = t6142 + t6470;
  t6560 = t6084*t935;
  t6567 = t5697 + t6560;
  t6555 = -1.*t5493*t5472;
  t6556 = -1.*t6084*t5611;
  t6559 = t2397*t6557;
  t6569 = t6567*t3794;
  t6570 = t6559 + t6569;
  t6573 = 0.588518*t6570;
  t6574 = t6557*t4107;
  t6577 = t6567*t4299;
  t6578 = t6574 + t6577;
  t6586 = -0.124503*t6578;
  t6592 = -1.*t6557*t4830;
  t6593 = -1.*t6567*t5240;
  t6594 = t5270*t6567;
  t6596 = t6557*t5287;
  t6598 = t6594 + t6596;
  t6602 = -0.045407*t6598;
  t6815 = -0.0004284921280000001*t3628;
  t6864 = 0.996943*t1877;
  t6812 = -0.996943*t1877;
  t6885 = 0.0004284921280000001*t3628;
  t6781 = -0.077936*t1877;
  t6782 = 0.005481192614*t3628;
  t6783 = t6781 + t6782;
  t6784 = t3231*t6783;
  t6786 = 0.005498*t1877;
  t6787 = 0.07769774964800001*t3628;
  t6793 = t6786 + t6787;
  t6797 = t6338*t6793;
  t6802 = t6784 + t6797;
  t6803 = -0.124503*t6802;
  t6804 = 0.077936*t1877;
  t6808 = -0.005481192614*t3628;
  t6809 = t6804 + t6808;
  t6811 = 0.005534467322*t6809;
  t6824 = t6812 + t6815;
  t6826 = -0.021877537552*t6824;
  t6830 = -0.6934128581485427*t3628;
  t6842 = -1.2096424700126054e-9 + t6811 + t6826 + t6830;
  t6854 = -1.*t3231*t6842;
  t6855 = -0.005498*t1877;
  t6856 = -0.07769774964800001*t3628;
  t6858 = t6855 + t6856;
  t6863 = 0.005534467322*t6858;
  t6868 = t6864 + t6815;
  t6869 = -0.6934341012630001*t6868;
  t6873 = -0.021744644052735636*t3628;
  t6878 = -1.7147089040178687e-8 + t6863 + t6869 + t6873;
  t6879 = -1.*t6338*t6878;
  t6886 = t6864 + t6885;
  t6887 = t3231*t6886;
  t6889 = -0.993925573253*t6338*t3628;
  t6893 = t6887 + t6889;
  t6894 = -0.045407*t6893;
  t6900 = t6812 + t6885;
  t6901 = t6338*t6900;
  t6908 = -0.999969365345*t3231*t3628;
  t6909 = t6901 + t6908;
  t6912 = 0.588518*t6909;
  t6913 = t6803 + t6854 + t6879 + t6894 + t6912;
  t6296 = 2.*t5312*t6292;
  t6542 = -1.*t312*t6531;
  t6545 = -1.*t233*t6536;
  t6546 = t6542 + t6545 + t6309 + t6314 + t6346 + t6355 + t6358 + t6360 + t6367;
  t6373 = -1.*t1541*t1134;
  t6378 = -1.*t6084*t1778;
  t6387 = t2397*t6383;
  t6391 = t6125*t3794;
  t6392 = t6387 + t6391;
  t6396 = 0.588518*t6392;
  t6398 = t6383*t4107;
  t6403 = t6125*t4299;
  t6408 = t6398 + t6403;
  t6411 = -0.124503*t6408;
  t6414 = -1.*t6383*t4830;
  t6418 = -1.*t6125*t5240;
  t6422 = t5270*t6125;
  t6423 = t6383*t5287;
  t6428 = t6422 + t6423;
  t6431 = -0.045407*t6428;
  t6434 = t6373 + t6378 + t6396 + t6411 + t6414 + t6418 + t6431;
  t6461 = -1.*t5493*t1134;
  t6466 = -1.*t723*t1778;
  t6498 = t2397*t6496;
  t6500 = t5792*t3794;
  t6503 = t6498 + t6500;
  t6504 = 0.588518*t6503;
  t6505 = t6496*t4107;
  t6507 = t5792*t4299;
  t6508 = t6505 + t6507;
  t6509 = -0.124503*t6508;
  t6513 = -1.*t6496*t4830;
  t6514 = -1.*t5792*t5240;
  t6515 = t5270*t5792;
  t6517 = t6496*t5287;
  t6518 = t6515 + t6517;
  t6522 = -0.045407*t6518;
  t6524 = t6461 + t6466 + t6504 + t6509 + t6513 + t6514 + t6522;
  t6525 = 2.*t6452*t6524;
  t6540 = 2.*t6539*t6012;
  t6541 = 2.*t6539*t6292;
  t6550 = 2.*t6546*t6372;
  t6551 = t312*t6531;
  t6553 = t233*t6536;
  t6623 = t6551 + t6553 + t6555 + t6556 + t6573 + t6586 + t6592 + t6593 + t6602;
  t6635 = 2.*t6452*t6623;
  t6685 = t6540 + t6541 + t6550 + t6635;
  t7012 = -0.00159*t205;
  t7014 = 0.27068*t327;
  t7015 = t7012 + t7014;
  t6925 = 2.*t6292*t6913;
  t6926 = t6125*t6783;
  t6927 = t6157*t6793;
  t6928 = t6926 + t6927;
  t6931 = -0.124503*t6928;
  t6932 = -1.*t6125*t6842;
  t6934 = -1.*t6157*t6878;
  t6935 = t6157*t6900;
  t6940 = -0.999969365345*t6125*t3628;
  t6952 = t6935 + t6940;
  t6956 = 0.588518*t6952;
  t6957 = t6125*t6886;
  t6958 = -0.993925573253*t6157*t3628;
  t6959 = t6957 + t6958;
  t6960 = -0.045407*t6959;
  t6962 = t6931 + t6932 + t6934 + t6956 + t6960;
  t6964 = t5792*t6783;
  t6965 = t5853*t6793;
  t6967 = t6964 + t6965;
  t6968 = -0.124503*t6967;
  t6969 = -1.*t5792*t6842;
  t6970 = -1.*t5853*t6878;
  t6973 = t5853*t6900;
  t6974 = -0.999969365345*t5792*t3628;
  t6977 = t6973 + t6974;
  t6978 = 0.588518*t6977;
  t6979 = t5792*t6886;
  t6989 = -0.993925573253*t5853*t3628;
  t6991 = t6979 + t6989;
  t6994 = -0.045407*t6991;
  t6995 = t6968 + t6969 + t6970 + t6978 + t6994;
  t6996 = 2.*t6452*t6995;
  t7052 = t2414 + t6560;
  t7046 = 0.01841*t762;
  t7047 = 0.70544*t935;
  t7050 = t7046 + t7047;
  t7116 = t6468 + t6150;
  t7000 = 2.*t5312*t6539;
  t7001 = 2.*t6546*t6434;
  t7002 = t7000 + t6296 + t7001 + t6525;
  t6027 = 2.*t5312*t6012;
  t6440 = 2.*t6372*t6434;
  t6526 = t6027 + t6296 + t6440 + t6525;
  t7149 = 2.*t5312*t6913;
  t7150 = t2532*t6783;
  t7152 = t3231*t6793;
  t7153 = t7150 + t7152;
  t7155 = -0.124503*t7153;
  t7156 = -1.*t2532*t6842;
  t7157 = -1.*t3231*t6878;
  t7158 = t3231*t6900;
  t7159 = -0.999969365345*t2532*t3628;
  t7160 = t7158 + t7159;
  t7161 = 0.588518*t7160;
  t7162 = t2532*t6886;
  t7163 = -0.993925573253*t3231*t3628;
  t7164 = t7162 + t7163;
  t7165 = -0.045407*t7164;
  t7166 = t7155 + t7156 + t7157 + t7161 + t7165;
  t7168 = 2.*t6452*t7166;
  t7171 = t6383*t6783;
  t7172 = t6125*t6793;
  t7174 = t7171 + t7172;
  t7175 = -0.124503*t7174;
  t7176 = -1.*t6383*t6842;
  t7177 = -1.*t6125*t6878;
  t7178 = t6383*t6886;
  t7180 = -0.993925573253*t6125*t3628;
  t7182 = t7178 + t7180;
  t7183 = -0.045407*t7182;
  t7184 = t6125*t6900;
  t7187 = -0.999969365345*t6383*t3628;
  t7194 = t7184 + t7187;
  t7196 = 0.588518*t7194;
  t7207 = t7175 + t7176 + t7177 + t7183 + t7196;
  t7210 = 2.*t6292*t7207;
  t7211 = 2.*t6434*t6962;
  t7214 = t7149 + t7168 + t7210 + t7211;
  t7256 = -0.0004284921280000001*t1877;
  t7243 = 0.0004284921280000001*t1877;
  t7245 = t7243 + t3677;
  t7255 = -0.021744644052735636*t1877;
  t7259 = t7256 + t3677;
  t7260 = -0.6934341012630001*t7259;
  t7263 = -0.07769774964800001*t1877;
  t7264 = t7263 + t4236;
  t7272 = 0.005534467322*t7264;
  t7274 = t7255 + t7260 + t7272;
  t7278 = 0.07769774964800001*t1877;
  t7283 = t7278 + t5216;
  t7286 = 0.005481192614*t1877;
  t7287 = t7286 + t4744;
  t7296 = -0.6934128581485427*t1877;
  t7297 = -0.005481192614*t1877;
  t7298 = t7297 + t4084;
  t7299 = 0.005534467322*t7298;
  t7300 = t7256 + t5228;
  t7301 = -0.021877537552*t7300;
  t7305 = t7296 + t7299 + t7301;
  t7308 = t7243 + t5228;
  t7026 = 2.*t6539*t6913;
  t7030 = 2.*t6546*t6962;
  t7032 = t7026 + t6925 + t7030 + t6996;
  t6919 = 2.*t6012*t6913;
  t6963 = 2.*t6372*t6962;
  t6997 = t6919 + t6925 + t6963 + t6996;
  t7381 = cos(var1(18));
  t7378 = cos(var1(19));
  t7379 = sin(var1(18));
  t7382 = sin(var1(19));
  t7385 = cos(var1(20));
  t7387 = sin(var1(20));
  t7391 = t7381*t7378;
  t7392 = -1.*t7379*t7382;
  t7393 = t7391 + t7392;
  t7380 = -1.*t7378*t7379;
  t7383 = -1.*t7381*t7382;
  t7384 = t7380 + t7383;
  t7398 = cos(var1(21));
  t7399 = -1.*t7398;
  t7400 = 1. + t7399;
  t7403 = -1.*t7385*t7393;
  t7404 = -1.*t7384*t7387;
  t7405 = t7403 + t7404;
  t7413 = sin(var1(21));
  t7414 = -0.996943*t7413;
  t7408 = t7385*t7384;
  t7409 = -1.*t7393*t7387;
  t7411 = t7408 + t7409;
  t7421 = -0.0004284921280000001*t7400;
  t7412 = 0.0004284921280000001*t7400;
  t7446 = 0.996943*t7413;
  t7461 = -1.*t7378;
  t7462 = 1. + t7461;
  t7388 = -0.70544*t7387;
  t7471 = -1.*t7385;
  t7472 = 1. + t7471;
  t7401 = -0.999969365345*t7400;
  t7402 = 1. + t7401;
  t7476 = -1.*t7381*t7378;
  t7484 = t7379*t7382;
  t7485 = t7476 + t7484;
  t7415 = t7412 + t7414;
  t7515 = t7385*t7485;
  t7517 = t7515 + t7404;
  t7419 = -1.2096424700126054e-9*var1(21);
  t7420 = -0.6934128581485427*t7400;
  t7422 = t7421 + t7414;
  t7423 = -0.021877537552*t7422;
  t7424 = 0.005481192614*t7400;
  t7425 = -0.077936*t7413;
  t7426 = t7424 + t7425;
  t7427 = -0.005534467322*t7426;
  t7428 = t7419 + t7420 + t7423 + t7427;
  t7522 = t7485*t7387;
  t7523 = t7408 + t7522;
  t7430 = -0.07769774964800001*t7400;
  t7431 = -0.005498*t7413;
  t7432 = t7430 + t7431;
  t7434 = -0.005481192614*t7400;
  t7435 = 0.077936*t7413;
  t7436 = t7434 + t7435;
  t7440 = -1.7147089040178687e-8*var1(21);
  t7441 = -0.021744644052735636*t7400;
  t7442 = 0.07769774964800001*t7400;
  t7443 = 0.005498*t7413;
  t7444 = t7442 + t7443;
  t7445 = -0.005534467322*t7444;
  t7447 = t7421 + t7446;
  t7448 = -0.6934341012630001*t7447;
  t7449 = t7440 + t7441 + t7445 + t7448;
  t7451 = -0.993925573253*t7400;
  t7452 = 1. + t7451;
  t7454 = t7412 + t7446;
  t7386 = -0.01841*t7385;
  t7389 = t7386 + t7388;
  t7390 = -1.*t7384*t7389;
  t7394 = -0.70544*t7385;
  t7395 = 0.01841*t7387;
  t7396 = t7394 + t7395;
  t7397 = -1.*t7393*t7396;
  t7407 = t7402*t7405;
  t7416 = t7411*t7415;
  t7417 = t7407 + t7416;
  t7418 = 0.588518*t7417;
  t7429 = -1.*t7405*t7428;
  t7433 = t7411*t7432;
  t7437 = t7405*t7436;
  t7438 = t7433 + t7437;
  t7439 = 0.124503*t7438;
  t7450 = -1.*t7411*t7449;
  t7453 = t7452*t7411;
  t7455 = t7405*t7454;
  t7456 = t7453 + t7455;
  t7457 = -0.045407*t7456;
  t7458 = t7390 + t7397 + t7418 + t7429 + t7439 + t7450 + t7457;
  t7463 = -0.00159*t7462;
  t7464 = -0.27068*t7382;
  t7465 = t7463 + t7464;
  t7467 = -0.27068*t7462;
  t7468 = 0.00159*t7382;
  t7469 = t7467 + t7468;
  t7473 = 0.01841*t7472;
  t7474 = t7473 + t7388;
  t7488 = -0.70544*t7472;
  t7489 = -0.01841*t7387;
  t7490 = t7488 + t7489;
  t7577 = t7378*t7379;
  t7578 = t7381*t7382;
  t7579 = t7577 + t7578;
  t7587 = t7385*t7393;
  t7588 = -1.*t7579*t7387;
  t7589 = t7587 + t7588;
  t7591 = t7385*t7579;
  t7592 = t7393*t7387;
  t7595 = t7591 + t7592;
  t7665 = t7384*t7387;
  t7666 = t7587 + t7665;
  t7726 = -1.*t7385*t7579;
  t7728 = t7726 + t7409;
  t7567 = -1.*t7381;
  t7568 = 1. + t7567;
  t7632 = 0.21*t7379;
  t7636 = -1.*t7381*t7465;
  t7637 = t7379*t7469;
  t7652 = -1.*t7393*t7474;
  t7654 = -1.*t7384*t7490;
  t7656 = t7402*t7411;
  t7670 = t7666*t7415;
  t7671 = t7656 + t7670;
  t7686 = 0.588518*t7671;
  t7687 = -1.*t7411*t7428;
  t7695 = t7666*t7432;
  t7696 = t7411*t7436;
  t7699 = t7695 + t7696;
  t7701 = 0.124503*t7699;
  t7703 = -1.*t7666*t7449;
  t7704 = t7452*t7666;
  t7705 = t7411*t7454;
  t7711 = t7704 + t7705;
  t7713 = -0.045407*t7711;
  t7757 = -1.*t7385*t7384;
  t7758 = -1.*t7485*t7387;
  t7759 = t7757 + t7758;
  t7475 = -1.*t7384*t7474;
  t7491 = -1.*t7485*t7490;
  t7519 = t7402*t7517;
  t7524 = t7523*t7415;
  t7525 = t7519 + t7524;
  t7549 = 0.588518*t7525;
  t7551 = -1.*t7517*t7428;
  t7553 = t7523*t7432;
  t7554 = t7517*t7436;
  t7556 = t7553 + t7554;
  t7557 = 0.124503*t7556;
  t7558 = -1.*t7523*t7449;
  t7559 = t7452*t7523;
  t7561 = t7517*t7454;
  t7562 = t7559 + t7561;
  t7563 = -0.045407*t7562;
  t7459 = 0.21*t7381;
  t7460 = 0.049*t7379;
  t7466 = t7379*t7465;
  t7470 = t7381*t7469;
  t7564 = t7459 + t7460 + t7466 + t7470 + t7475 + t7491 + t7549 + t7551 + t7557 + t7558 + t7563;
  t7780 = 0.00159*t7378;
  t7781 = t7780 + t7464;
  t7782 = t7379*t7781;
  t7783 = -0.27068*t7378;
  t7784 = -0.00159*t7382;
  t7785 = t7783 + t7784;
  t7786 = -1.*t7381*t7785;
  t7787 = t7782 + t7786 + t7475 + t7491 + t7549 + t7551 + t7557 + t7558 + t7563;
  t7572 = 0.21*t7568;
  t7573 = -0.049*t7379;
  t7575 = -1.*t7379*t7465;
  t7576 = -1.*t7381*t7469;
  t7580 = -1.*t7579*t7474;
  t7582 = -1.*t7393*t7490;
  t7590 = t7402*t7589;
  t7596 = t7595*t7415;
  t7599 = t7590 + t7596;
  t7600 = 0.588518*t7599;
  t7602 = -1.*t7589*t7428;
  t7603 = t7595*t7432;
  t7604 = t7589*t7436;
  t7605 = t7603 + t7604;
  t7606 = 0.124503*t7605;
  t7607 = -1.*t7595*t7449;
  t7608 = t7452*t7595;
  t7609 = t7589*t7454;
  t7611 = t7608 + t7609;
  t7613 = -0.045407*t7611;
  t7621 = -0.09 + t7572 + t7573 + t7575 + t7576 + t7580 + t7582 + t7600 + t7602 + t7606 + t7607 + t7613;
  t7631 = -0.049*t7381;
  t7714 = t7631 + t7632 + t7636 + t7637 + t7652 + t7654 + t7686 + t7687 + t7701 + t7703 + t7713;
  t7753 = 0.049*t7568;
  t7754 = -0.049 + t7753 + t7632 + t7636 + t7637 + t7652 + t7654 + t7686 + t7687 + t7701 + t7703 + t7713;
  t7798 = t7591 + t7758;
  t7800 = t7579*t7387;
  t7801 = t7515 + t7800;
  t7796 = -1.*t7485*t7474;
  t7797 = -1.*t7579*t7490;
  t7799 = t7402*t7798;
  t7802 = t7801*t7415;
  t7803 = t7799 + t7802;
  t7804 = 0.588518*t7803;
  t7805 = -1.*t7798*t7428;
  t7806 = t7801*t7432;
  t7807 = t7798*t7436;
  t7808 = t7806 + t7807;
  t7809 = 0.124503*t7808;
  t7810 = -1.*t7801*t7449;
  t7811 = t7452*t7801;
  t7812 = t7798*t7454;
  t7813 = t7811 + t7812;
  t7814 = -0.045407*t7813;
  t7870 = -0.0004284921280000001*t7413;
  t7894 = 0.996943*t7398;
  t7867 = -0.996943*t7398;
  t7913 = 0.0004284921280000001*t7413;
  t7832 = -0.005498*t7398;
  t7833 = -0.07769774964800001*t7413;
  t7834 = t7832 + t7833;
  t7835 = t7666*t7834;
  t7836 = 0.077936*t7398;
  t7841 = -0.005481192614*t7413;
  t7842 = t7836 + t7841;
  t7843 = t7411*t7842;
  t7844 = t7835 + t7843;
  t7866 = 0.124503*t7844;
  t7873 = t7867 + t7870;
  t7874 = -0.021877537552*t7873;
  t7875 = -0.077936*t7398;
  t7878 = 0.005481192614*t7413;
  t7881 = t7875 + t7878;
  t7884 = -0.005534467322*t7881;
  t7887 = -0.6934128581485427*t7413;
  t7891 = -1.2096424700126054e-9 + t7874 + t7884 + t7887;
  t7892 = -1.*t7411*t7891;
  t7895 = t7894 + t7870;
  t7896 = -0.6934341012630001*t7895;
  t7897 = 0.005498*t7398;
  t7901 = 0.07769774964800001*t7413;
  t7907 = t7897 + t7901;
  t7908 = -0.005534467322*t7907;
  t7909 = -0.021744644052735636*t7413;
  t7910 = -1.7147089040178687e-8 + t7896 + t7908 + t7909;
  t7912 = -1.*t7666*t7910;
  t7919 = t7894 + t7913;
  t7920 = t7411*t7919;
  t7921 = -0.993925573253*t7666*t7413;
  t7922 = t7920 + t7921;
  t7923 = -0.045407*t7922;
  t7924 = t7867 + t7913;
  t7925 = t7666*t7924;
  t7926 = -0.999969365345*t7411*t7413;
  t7928 = t7925 + t7926;
  t7930 = 0.588518*t7928;
  t7931 = t7866 + t7892 + t7912 + t7923 + t7930;
  t7622 = 2.*t7458*t7621;
  t7790 = -1.*t7381*t7781;
  t7791 = -1.*t7379*t7785;
  t7792 = t7790 + t7791 + t7652 + t7654 + t7686 + t7687 + t7701 + t7703 + t7713;
  t7716 = -1.*t7393*t7389;
  t7717 = -1.*t7579*t7396;
  t7729 = t7402*t7728;
  t7730 = t7589*t7415;
  t7731 = t7729 + t7730;
  t7736 = 0.588518*t7731;
  t7739 = -1.*t7728*t7428;
  t7740 = t7589*t7432;
  t7741 = t7728*t7436;
  t7742 = t7740 + t7741;
  t7743 = 0.124503*t7742;
  t7744 = -1.*t7589*t7449;
  t7745 = t7452*t7589;
  t7746 = t7728*t7454;
  t7748 = t7745 + t7746;
  t7750 = -0.045407*t7748;
  t7751 = t7716 + t7717 + t7736 + t7739 + t7743 + t7744 + t7750;
  t7755 = -1.*t7485*t7389;
  t7756 = -1.*t7384*t7396;
  t7760 = t7402*t7759;
  t7761 = t7517*t7415;
  t7762 = t7760 + t7761;
  t7763 = 0.588518*t7762;
  t7764 = -1.*t7759*t7428;
  t7765 = t7517*t7432;
  t7766 = t7759*t7436;
  t7767 = t7765 + t7766;
  t7768 = 0.124503*t7767;
  t7769 = -1.*t7517*t7449;
  t7770 = t7452*t7517;
  t7771 = t7759*t7454;
  t7772 = t7770 + t7771;
  t7774 = -0.045407*t7772;
  t7775 = t7755 + t7756 + t7763 + t7764 + t7768 + t7769 + t7774;
  t7776 = 2.*t7754*t7775;
  t7788 = 2.*t7787*t7564;
  t7789 = 2.*t7787*t7621;
  t7793 = 2.*t7792*t7714;
  t7794 = t7381*t7781;
  t7795 = t7379*t7785;
  t7815 = t7794 + t7795 + t7796 + t7797 + t7804 + t7805 + t7809 + t7810 + t7814;
  t7816 = 2.*t7754*t7815;
  t7817 = t7788 + t7789 + t7793 + t7816;
  t7976 = -0.00159*t7378;
  t7977 = 0.27068*t7382;
  t7978 = t7976 + t7977;
  t7933 = 2.*t7621*t7931;
  t7934 = t7595*t7834;
  t7935 = t7589*t7842;
  t7936 = t7934 + t7935;
  t7937 = 0.124503*t7936;
  t7938 = -1.*t7589*t7891;
  t7939 = -1.*t7595*t7910;
  t7940 = t7595*t7924;
  t7941 = -0.999969365345*t7589*t7413;
  t7942 = t7940 + t7941;
  t7943 = 0.588518*t7942;
  t7944 = t7589*t7919;
  t7945 = -0.993925573253*t7595*t7413;
  t7946 = t7944 + t7945;
  t7947 = -0.045407*t7946;
  t7948 = t7937 + t7938 + t7939 + t7943 + t7947;
  t7950 = t7523*t7834;
  t7951 = t7517*t7842;
  t7952 = t7950 + t7951;
  t7953 = 0.124503*t7952;
  t7954 = -1.*t7517*t7891;
  t7955 = -1.*t7523*t7910;
  t7956 = t7523*t7924;
  t7957 = -0.999969365345*t7517*t7413;
  t7958 = t7956 + t7957;
  t7959 = 0.588518*t7958;
  t7960 = t7517*t7919;
  t7961 = -0.993925573253*t7523*t7413;
  t7962 = t7960 + t7961;
  t7963 = -0.045407*t7962;
  t7964 = t7953 + t7954 + t7955 + t7959 + t7963;
  t7965 = 2.*t7754*t7964;
  t8000 = t7403 + t7800;
  t7996 = 0.01841*t7385;
  t7997 = 0.70544*t7387;
  t7998 = t7996 + t7997;
  t8028 = t7757 + t7592;
  t7969 = 2.*t7458*t7787;
  t7970 = 2.*t7792*t7751;
  t7971 = t7969 + t7622 + t7970 + t7776;
  t7566 = 2.*t7458*t7564;
  t7752 = 2.*t7714*t7751;
  t7777 = t7566 + t7622 + t7752 + t7776;
  t8061 = 2.*t7458*t7931;
  t8062 = t7411*t7834;
  t8064 = t7405*t7842;
  t8065 = t8062 + t8064;
  t8066 = 0.124503*t8065;
  t8067 = -1.*t7405*t7891;
  t8068 = -1.*t7411*t7910;
  t8069 = t7411*t7924;
  t8070 = -0.999969365345*t7405*t7413;
  t8071 = t8069 + t8070;
  t8072 = 0.588518*t8071;
  t8073 = t7405*t7919;
  t8074 = -0.993925573253*t7411*t7413;
  t8075 = t8073 + t8074;
  t8076 = -0.045407*t8075;
  t8077 = t8066 + t8067 + t8068 + t8072 + t8076;
  t8078 = 2.*t7754*t8077;
  t8079 = t7589*t7834;
  t8080 = t7728*t7842;
  t8081 = t8079 + t8080;
  t8082 = 0.124503*t8081;
  t8083 = -1.*t7728*t7891;
  t8090 = -1.*t7589*t7910;
  t8091 = t7728*t7919;
  t8092 = -0.993925573253*t7589*t7413;
  t8093 = t8091 + t8092;
  t8094 = -0.045407*t8093;
  t8095 = t7589*t7924;
  t8097 = -0.999969365345*t7728*t7413;
  t8106 = t8095 + t8097;
  t8117 = 0.588518*t8106;
  t8118 = t8082 + t8083 + t8090 + t8094 + t8117;
  t8120 = 2.*t7621*t8118;
  t8122 = 2.*t7751*t7948;
  t8123 = t8061 + t8078 + t8120 + t8122;
  t8137 = -0.0004284921280000001*t7398;
  t8128 = 0.0004284921280000001*t7398;
  t8129 = t8128 + t7414;
  t8133 = -0.021744644052735636*t7398;
  t8138 = t8137 + t7414;
  t8139 = -0.6934341012630001*t8138;
  t8140 = 0.07769774964800001*t7398;
  t8141 = t8140 + t7431;
  t8142 = -0.005534467322*t8141;
  t8143 = t8133 + t8139 + t8142;
  t8145 = -0.005481192614*t7398;
  t8146 = t8145 + t7425;
  t8148 = -0.07769774964800001*t7398;
  t8149 = t8148 + t7443;
  t8153 = -0.6934128581485427*t7398;
  t8154 = 0.005481192614*t7398;
  t8155 = t8154 + t7435;
  t8166 = -0.005534467322*t8155;
  t8167 = t8137 + t7446;
  t8169 = -0.021877537552*t8167;
  t8171 = t8153 + t8166 + t8169;
  t8175 = t8128 + t7446;
  t7989 = 2.*t7787*t7931;
  t7990 = 2.*t7792*t7948;
  t7991 = t7989 + t7933 + t7990 + t7965;
  t7932 = 2.*t7564*t7931;
  t7949 = 2.*t7714*t7948;
  t7966 = t7932 + t7933 + t7949 + t7965;
  p_output1(19)=(2.*power(t6012,2) + 2.*t6012*t6292 + 2.*power(t6372,2) + 2.*t6452*(-0.21*t233 + 0.049*t312 + t312*t5369 - 1.*t233*t5414 + t6555 + t6556 + t6573 + t6586 + t6592 + t6593 + t6602))*var2(10) + t6685*var2(11) + t6526*var2(12) + t6997*var2(13);
  p_output1(21)=t6685*var2(10) + (2.*power(t6539,2) + 2.*power(t6546,2) + 2.*t6292*(t5476 + t5694 + t5863 + t5886 + t5892 + t5906 + t6009 + t6538 - 1.*t233*t7015) + 2.*t6452*(t6553 + t6555 + t6556 + t6573 + t6586 + t6592 + t6593 + t6602 - 1.*t312*t7015))*var2(11) + t7002*var2(12) + t7032*var2(13);
  p_output1(23)=t6526*var2(10) + t7002*var2(11) + (2.*power(t5312,2) + 2.*power(t6434,2) + 2.*t6292*(t1803 - 1.*t5240*t6383 - 1.*t6084*t7050 - 1.*t4830*t7052 + 0.588518*(t3794*t6383 + t2397*t7052) - 0.124503*(t4299*t6383 + t4107*t7052) - 0.045407*(t5270*t6383 + t5287*t7052)) + 2.*t6452*(-1.*t2532*t5240 + t6466 - 1.*t1541*t7050 - 1.*t4830*t7116 + 0.588518*(t2532*t3794 + t2397*t7116) - 0.124503*(t2532*t4299 + t4107*t7116) - 0.045407*(t2532*t5270 + t5287*t7116)))*var2(12) + t7214*var2(13);
  p_output1(25)=t6997*var2(10) + t7032*var2(11) + t7214*var2(12) + (2.*power(2.1934241414728571e-7 + 0.0007262134395594695*t3628 + 0.588518*(t6782 + t6804) + 0.6934341012630001*(t6781 + t6808) - 0.045407*(t6787 + t6855) + 0.021877537552*(t6786 + t6856),2) + 2.*power(t6913,2) + 2.*power(t6962,2) + 2.*t6292*(-0.045407*(-0.993925573253*t1877*t6157 + t6125*t7245) - 1.*t6157*t7274 - 0.124503*(t6157*t7283 + t6125*t7287) - 1.*t6125*t7305 + 0.588518*(-0.999969365345*t1877*t6125 + t6157*t7308)) + 2.*t6452*(-0.045407*(-0.993925573253*t1877*t6338 + t3231*t7245) - 1.*t6338*t7274 - 0.124503*(t6338*t7283 + t3231*t7287) - 1.*t3231*t7305 + 0.588518*(-0.999969365345*t1877*t3231 + t6338*t7308)) + 2.*(0.0007262134395594695*t1877 + 0.021877537552*(t5216 + t7263) - 0.045407*(t4236 + t7278) + 0.588518*(t4084 + t7286) + 0.6934341012630001*(t4744 + t7297))*(0.09 - 0.124503*(1. - 0.006104248100000001*t2281) - 0.000033783761634830594*t2281 + 0.6934341012630001*(t4084 + t4725) + 0.588518*(t4046 + t4744) + 0.021877537552*(t4236 + t5188) - 0.045407*(t4195 + t5216) + 2.1934241414728571e-7*var1(13)))*var2(13);
  p_output1(36)=(2.*power(t7564,2) + 2.*t7564*t7621 + 2.*power(t7714,2) + 2.*t7754*(-0.21*t7379 + 0.049*t7381 + t7381*t7465 - 1.*t7379*t7469 + t7796 + t7797 + t7804 + t7805 + t7809 + t7810 + t7814))*var2(18) + t7817*var2(19) + t7777*var2(20) + t7966*var2(21);
  p_output1(38)=t7817*var2(18) + (2.*power(t7787,2) + 2.*power(t7792,2) + 2.*t7621*(t7475 + t7491 + t7549 + t7551 + t7557 + t7558 + t7563 + t7786 - 1.*t7379*t7978) + 2.*t7754*(t7795 + t7796 + t7797 + t7804 + t7805 + t7809 + t7810 + t7814 - 1.*t7381*t7978))*var2(19) + t7971*var2(20) + t7991*var2(21);
  p_output1(40)=t7777*var2(18) + t7971*var2(19) + (2.*power(t7458,2) + 2.*power(t7751,2) + 2.*t7621*(t7397 - 1.*t7449*t7728 - 1.*t7579*t7998 - 1.*t7428*t8000 + 0.588518*(t7415*t7728 + t7402*t8000) + 0.124503*(t7432*t7728 + t7436*t8000) - 0.045407*(t7452*t7728 + t7454*t8000)) + 2.*t7754*(-1.*t7405*t7449 + t7756 - 1.*t7393*t7998 - 1.*t7428*t8028 + 0.588518*(t7405*t7415 + t7402*t8028) + 0.124503*(t7405*t7432 + t7436*t8028) - 0.045407*(t7405*t7452 + t7454*t8028)))*var2(20) + t8123*var2(21);
  p_output1(42)=t7966*var2(18) + t7991*var2(19) + t8123*var2(20) + (2.*power(-2.1934241414728571e-7 - 0.0007262134395594695*t7413 + 0.588518*(t7841 + t7875) + 0.6934341012630001*(t7836 + t7878) - 0.045407*(t7833 + t7897) + 0.021877537552*(t7832 + t7901),2) + 2.*power(t7931,2) + 2.*power(t7948,2) + 2.*t7621*(-0.045407*(-0.993925573253*t7398*t7595 + t7589*t8129) - 1.*t7595*t8143 + 0.124503*(t7589*t8146 + t7595*t8149) - 1.*t7589*t8171 + 0.588518*(-0.999969365345*t7398*t7589 + t7595*t8175)) + 2.*t7754*(-0.045407*(-0.993925573253*t7398*t7666 + t7411*t8129) - 1.*t7666*t8143 + 0.124503*(t7411*t8146 + t7666*t8149) - 1.*t7411*t8171 + 0.588518*(-0.999969365345*t7398*t7411 + t7666*t8175)) + 2.*(-0.0007262134395594695*t7398 + 0.021877537552*(t7443 + t8140) + 0.588518*(t7435 + t8145) - 0.045407*(t7431 + t8148) + 0.6934341012630001*(t7425 + t8154))*(-0.09 + 0.124503*(1. - 0.006104248100000001*t7400) + 0.000033783761634830594*t7400 + 0.588518*(t7425 + t7434) + 0.6934341012630001*(t7424 + t7435) + 0.021877537552*(t7431 + t7442) - 0.045407*(t7430 + t7443) - 2.1934241414728571e-7*var1(21)))*var2(21);
  out = reshape(p_output1, 2, 22);
end