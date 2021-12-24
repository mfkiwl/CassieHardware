%% Function: createCLF_P_stand.m
%
% Description: Tune the CLF, this function prints the assosciated diagonal and off-diagonal terms of P.
% 	The resulting gains can be copy-pasted to the controller launch file.
%
% Author: Jenna Reher, (jreher@caltech.edu)
% _____________________________________________________________________

ny = 9;

% Compute eta and the Lyapunov function
F = [zeros(ny),eye(ny);
     zeros(ny),zeros(ny)];
G = [zeros(ny);eye(ny)];
Q = blkdiag(100*eye(ny), eye(ny));

Kp = diag([700, 500, 175, 400, 900, 450, 300, 300, 150]);
Kd = diag([16, 8, 4.6, 8, 16, 6, 4, 8, 4]);
A = F - G * [Kp, Kd];

%% Compute
P = lyap(A',Q);
P

dP = diag(P);
dPstr = num2str(dP(1));
for i = 2:length(dP)
    dPstr = strcat(dPstr, ', ', num2str(dP(i)));
end
disp(dPstr);

dPo = diag(P(1:ny,ny+1:end));
dPostr = num2str(dPo(1));
for j = 2:length(dPo)
    dPostr = strcat(dPostr, ', ', num2str(dPo(j)));
end
disp(dPostr);


gam = min(eig(Q))/ max(eig(P))
