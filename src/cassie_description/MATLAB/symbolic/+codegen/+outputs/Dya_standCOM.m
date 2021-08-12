%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Dya_standCOM
% 
% This file is automatically converted to matlab format from C code.
% Source symbolic expressions exported from FROST:
% 	 https://github.com/ayonga/frost-dev
% 
% Author: Jenna Reher (jreher@caltech.edu)
% Automatically generated on: February 02, 2021 T 01:46
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function out = Dya_standCOM(var1)

  out = zeros(6, 44);

  p_output1 = zeros(264,1);


  p_output1(1)=1;
  p_output1(8)=1;
  p_output1(15)=1;
  p_output1(22)=1;
  p_output1(29)=1;
  p_output1(36)=1;
  out = reshape(p_output1, 6, 44);
end