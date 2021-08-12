%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% J_right_fixed_constraint
% 
% This file is automatically converted to matlab format from C code.
% Source symbolic expressions exported from FROST:
% 	 https://github.com/ayonga/frost-dev
% 
% Author: Jenna Reher (jreher@caltech.edu)
% Automatically generated on: February 02, 2021 T 01:46
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function out = J_right_fixed_constraint(var1)

  out = zeros(2, 22);

  p_output1 = zeros(44,1);


  p_output1(37)=1;
  p_output1(42)=1;
  out = reshape(p_output1, 2, 22);
end