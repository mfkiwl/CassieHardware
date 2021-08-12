%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% DLfya_standCOM
% 
% This file is automatically converted to matlab format from C code.
% Source symbolic expressions exported from FROST:
% 	 https://github.com/ayonga/frost-dev
% 
% Author: Jenna Reher (jreher@caltech.edu)
% Automatically generated on: February 02, 2021 T 01:46
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function out = DLfya_standCOM(var1,var2)

  out = zeros(6, 44);

  p_output1 = zeros(264,1);


  p_output1(133)=1;
  p_output1(140)=1;
  p_output1(147)=1;
  p_output1(154)=1;
  p_output1(161)=1;
  p_output1(168)=1;
  out = reshape(p_output1, 6, 44);
end