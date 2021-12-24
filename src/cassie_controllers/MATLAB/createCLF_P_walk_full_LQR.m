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
Q(1,1) = 4600; % Roll
Q(2,2) = 3640; % Pitch
Q(3,3) = 390;  % Stance yaw
Q(4,4) = 9150*0.5; % Stance leg length
Q(5,5) = 7150*1.2; % Swing leg length
Q(6,6) = 4056; % Swing leg angle
Q(7,7) = 1872; % Swing leg roll
Q(8,8) = 520*1;  % Swing leg yaw
Q(9,9) = 520*2;  % Swing foot pitch
% Q(1:9,1:9) = Q(1:9,1:9) * 1.3; 

Q(10,10) = 16.0;  % Roll
Q(11,11) = 7.3;  % Pitch
Q(12,12) = 1.6;  % Stance yaw
Q(13,13) = 112*0.5; % Stance leg length
Q(14,14) = 96*1.2;  % Swing leg length
Q(15,15) = 28.8;  % Swing leg angle
Q(16,16) = 18;  % Swing leg roll
Q(17,17) = 15;  % Swing leg yaw
Q(18,18) = 12*2;  % Swing foot pitch
% Q(10:18,10:18) = Q(10:18,10:18) / 3 * 1.2; 

R = eye(ny);
R(1,1) = 0.8;
R(2,2) = 1;
R(3,3) = 1.4;
R(4,4) = 0.7;
R(5,5) = 0.8;
R(6,6) = 1;
R(7,7) = 1.0;
R(8,8) = 1.4;
R(9,9) = 1;

%% Compute
[P,~,~] = care(F,G,Q,R);

dP = diag(P);
dPstr = num2str(dP(1));
for i = 2:length(dP)
    dPstr = strcat(dPstr, ', ', string(sprintfc('%8f', dP(i))));%num2str(dP(i)));
end
disp(strcat('Pdiag: ''[', dPstr, ']'''));

dPo = diag(P(1:ny,ny+1:end));
dPostr = num2str(dPo(1));
for j = 2:length(dPo)
    dPostr = strcat(dPostr, ', ', string(sprintfc('%8f', dPo(j))));%num2str
end
disp(strcat('Poffdiag: ''[', dPostr, ']'''));

gam = min(eig(Q))/ max(eig(P))
