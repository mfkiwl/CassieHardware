%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Be_cassie_v4
% 
% This file is automatically converted to matlab format from C code.
% Source symbolic expressions exported from FROST:
% 	 https://github.com/ayonga/frost-dev
% 
% Author: Jenna Reher (jreher@caltech.edu)
% Automatically generated on: February 02, 2021 T 01:46
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function out = Be_cassie_v4(var1)

  out = zeros(22, 10);

  p_output1 = zeros(220,1);


  p_output1(7)=25;
  p_output1(30)=25;
  p_output1(53)=16;
  p_output1(76)=16;
  p_output1(102)=50;
  p_output1(125)=25;
  p_output1(148)=25;
  p_output1(171)=16;
  p_output1(194)=16;
  p_output1(220)=50;
  out = reshape(p_output1, 22, 10);
end