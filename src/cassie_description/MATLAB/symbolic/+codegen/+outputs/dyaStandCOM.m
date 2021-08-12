%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% dyaStandCOM
% 
% This file is automatically converted to matlab format from C code.
% Source symbolic expressions exported from FROST:
% 	 https://github.com/ayonga/frost-dev
% 
% Author: Jenna Reher (jreher@caltech.edu)
% Automatically generated on: February 02, 2021 T 01:46
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function out = dyaStandCOM(var1,var2)

  out = zeros(6, 1);

  p_output1 = zeros(6,1);


  p_output1(1)=var2(1);
  p_output1(2)=var2(2);
  p_output1(3)=var2(3);
  p_output1(4)=var2(4);
  p_output1(5)=var2(5);
  p_output1(6)=var2(6);
  out = reshape(p_output1, 6, 1);
end