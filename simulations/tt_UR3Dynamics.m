%% Trabajo terminal. Modelado UR3 con links 4,5 y 6 fijos y con eje lineal.
clc;
% Parámetros D-H
a = [0, 0, -0.24355, -0.2132];
alpha = [-1/2, 1/2, 0, 0]; % 1 = pi
d = [sym('q1'), 0.15185, 0, 0];
theta = [0, sym('q2'), sym('q3'), sym('q4')];

T = paramsdh2homoMatrix(a, d, alpha, theta)

%% Jacobiano
numLinks = 4;

Jv = zeros(3,numLinks,numLinks, 'sym');
Jw = zeros(3,numLinks,numLinks, 'sym');

z = [0 0 sin(sym('q2')) sin(sym('q2')); 0 1 0 0; 1 0 cos(sym('q2')) cos(sym('q2'))];
O = [[0;0;0], T(1:3,4,1), T(1:3,4,2), T(1:3,4,3), T(1:3,4,4)];

Jv_total = [z(:,1), cross(z(:,2), O(:,5)-O(:,3)), cross(z(:,3), O(:,5)-O(:,4)), [0;0;0]];
Jw_total = [[0;0;0], z(:,2), z(:,3), z(:,4)];

J = [Jv_total; Jw_total];

for j = 1:numLinks
    Jv(:,1:j,j) = J(1:3, 1:j);
    Jw(:,1:j,j) = J(4:6, 1:j);
end

%% Matriz de Inercia
R = zeros(3,3,numLinks,'sym');
for k = 1:numLinks
    R(:,:,k) = T(1:3,1:3,k);
end

m = [1, 1.98, 3.4445, 1.437];

I(:,:,1) = [sym('I1x'),0,0;0,sym('I1y'),0;0,0,sym('I1z')];
I(:,:,2) = [sym('I2x'),0,0;0,sym('I2y'),0;0,0,sym('I2z')];
I(:,:,3) = [sym('I3x'),0,0;0,sym('I3y'),0;0,0,sym('I3z')];
I(:,:,4) = [sym('I4x'),0,0;0,sym('I4y'),0;0,0,sym('I4z')];

D = zeros(3,'sym');
for i=1:numLinks
    D = m(i)*Jv(:,:,i).'*Jv(:,:,i) + Jw(:,:,i).'*R(:,:,i)*I(:,:,i)*R(:,:,i).'*Jw(:,:,i);
end
D = simplify(D);
%% Símbolos de Christoffel

C = zeros(numLinks,numLinks,numLinks, 'sym');
C_q = zeros(numLinks, 'sym');
q = [sym('q1'), sym('q2'), sym('q3'), sym('q4')];
q_p = [sym('q1_p'), sym('q2_p'), sym('q3_p'), sym('q4_p')];
for k=1:numLinks
    for j=1:numLinks
        for i=1:numLinks
            C(i,j,k) = (diff(D(k,j),q(i))+diff(D(k,i),q(j))-diff(D(i,j),q(k)));
        end
    end
end
for k=1:numLinks
    for j=1:numLinks
        for i=1:numLinks
            C_q(k,j) = C_q(k,j)+C(i,j,k)*q_p(i);
        end
    end
end
C_q = simplify(C_q);

%% Vector de gravedad
g = [0; 0; 8.3346*cos(sym('q3')); 0.7795*cos(sym('q4'))];