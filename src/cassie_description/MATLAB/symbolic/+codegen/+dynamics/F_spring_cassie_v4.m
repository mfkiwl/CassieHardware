%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% F_spring_cassie_v4
% 
% This file is automatically converted to matlab format from C code.
% Source symbolic expressions exported from FROST:
% 	 https://github.com/ayonga/frost-dev
% 
% Author: Jenna Reher (jreher@caltech.edu)
% Automatically generated on: February 02, 2021 T 01:46
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function out = F_spring_cassie_v4(var1,var2)

  out = zeros(22, 1);

  p_output1 = zeros(22,1);


  p_output1(11)=-2300*var1(11) - 4.6*var2(11);
  p_output1(13)=-2000*var1(13) - 4*var2(13);
  p_output1(19)=-2300*var1(19) - 4.6*var2(19);
  p_output1(21)=-2000*var1(21) - 4*var2(21);
  out = reshape(p_output1, 22, 1);
end