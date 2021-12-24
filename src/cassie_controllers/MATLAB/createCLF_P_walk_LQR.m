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
Q(1,1) = 9000; % Roll
Q(2,2) = 8000; % Pitch
Q(3,3) = 5000;  % Stance yaw
Q(4,4) = 5000; % Stance leg length
Q(5,5) = 8000; % Swing leg length
Q(6,6) = 4000; % Swing leg angle
Q(7,7) = 4000; % Swing leg roll
Q(8,8) = 3000;  % Swing leg yaw
Q(9,9) = 4000;  % Swing foot pitch
Q(1:9,1:9) = Q(1:9,1:9) * 6; 

Q(10,10) = 180;  % Roll
Q(11,11) = 170;  % Pitch
Q(12,12) = 110;  % Stance yaw
Q(13,13) = 260; % Stance leg length
Q(14,14) = 410;  % Swing leg length
Q(15,15) = 120;  % Swing leg angle
Q(16,16) = 120;  % Swing leg roll
Q(17,17) = 120;  % Swing leg yaw
Q(18,18) = 110;  % Swing foot pitch

% Adding R matrix
R = eye(ny);
% R(1,1) = 0.8;
% R(2,2) = 1;
% R(3,3) = 1;
% R(4,4) = 0.1;
% R(5,5) = 0.8;
% R(6,6) = 1.2;
% R(7,7) = 0.9;
% R(8,8) = 1;
% R(9,9) = 1;

%% Compute
[P,~,~] = care(F,G,Q,R);

dP = diag(P);
dPstr = num2str(dP(1));
for i = 2:length(dP)
    dPstr = strcat(dPstr, ', ', num2str(dP(i)));
end
disp(strcat('Pdiag: ''[', dPstr, ']'''));

dPo = diag(P(1:ny,ny+1:end));
dPostr = num2str(dPo(1));
for j = 2:length(dPo)
    dPostr = strcat(dPostr, ', ', num2str(dPo(j)));
end
disp(strcat('Poffdiag: ''[', dPostr, ']'''));

gam = min(eig(Q))/ max(eig(P))
