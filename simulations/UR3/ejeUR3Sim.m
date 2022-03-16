%% Dinámica del Eje Lineal con manipulador UR3
clear all
%clc
% Usando toolbox de Peter Corke

% Valores dinámicos para el UR3
m = [0, 1.98, 3.4445, 1.437];

I(:,:,2) = [3.02e-3,0,0;0,3.02e-3,0;0,0,5.56e-3];
I(:,:,1) = [0,0,0;0,0,0;0,0,0];
I(:,:,3) = [13.93e-3,0,0;0,13.93e-3,0;0,0,9.68e-3];
I(:,:,4) = [9.12e-3,0,0;0,9.12e-3,0;0,0,4.04e-3];

r(1,:) = [0 0 0];
r(2,:) = [0 -0.02 0];
r(3,:) = [0.13 0 0.1157];
r(4,:) = [0.05 0 0.0238];

% Links con parámetros de D-H
L1 = Prismatic('alpha',-1.5708, 'm', m(1), 'r', r(1,:), 'I', I(:,:,1), 'Jm', 0.0002, 'B', 0.00148, 'G', 1000);
L2 = Revolute('d',0.15185, 'alpha', 1.5708, 'm', m(2), 'r', r(2,:), 'I', I(:,:,2), 'Jm', 0.0002, 'B', 0.00148, 'G', 10);
L3 = Revolute('a',-0.24355, 'm', m(3), 'r', r(3,:), 'I', I(:,:,3), 'Jm', 0.0002, 'B', 0.00148, 'G', 10);
L4 = Revolute('a', -0.2132, 'm', m(4), 'r', r(4,:), 'I', I(:,:,4), 'Jm', 0.0002, 'B', 0.00148, 'G', 10);

robot = SerialLink([L1 L2 L3 L4]);
robot.qlim(1, :) = [0 10];
robot.base = SE3.Rx(pi/2);
robot.name = 'UR3conEjeLineal';

%% Dinámica directa
qz = [0 0 0 0];
qn = [0.4 0 pi/2 0];
qr = [0.4 0 pi/2 0];

[Q2, Q3] = meshgrid(-pi:0.1:pi, -pi:0.1:pi);
for i = 1:numcols(Q2)
    for j = 1:numcols(Q3)
        [Q, Wb] = robot.rne([0, Q2(i,j), Q3(i,j), 0], qz, qz);
        g2(i,j) = Wb(1);
        g3(i,j) = Wb(2);
    end
end
surfl(Q2,Q3,g2);
figure
surfl(Q2,Q3,g3);
