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
Q = eye(2*ny);

% Tune Q
% Current best
Q(1,1) = 2500; % Roll
Q(2,2) = 2000; % Pitch
Q(3,3) = 750;  % Stance yaw
Q(4,4) = 2400; % Stance leg length
Q(5,5) = 2400; % Swing leg length
Q(6,6) = 3000; % Swing leg angle
Q(7,7) = 2500; % Swing leg roll
Q(8,8) = 750;  % Swing leg yaw
Q(9,9) = 250;  % Swing foot pitch

Q(10,10) = 30;  % Roll
Q(11,11) = 20;  % Pitch
Q(12,12) = 10;  % Stance yaw
Q(13,13) = 40; % Stance leg length
Q(14,14) = 40;  % Swing leg length
Q(15,15) = 40;  % Swing leg angle
Q(16,16) = 30;  % Swing leg roll
Q(17,17) = 20;  % Swing leg yaw
Q(18,18) = 10;  % Swing foot pitch


%% Compute
[P,~,~] = care(F,G,Q);
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
