%% Trabajo terminal. Modelado UR3 con links 4,5 y 6 fijos y con eje lineal.
clc;

% Variables del sistema
q = sym('q', [8 1]);
% Parámetros D-H
a = [0, 0, -0.24355, -0.2132];
alpha = [-1/2, 1/2, 0, 0]; % 1 = pi
d = [q(1), 0.15185, 0, 0];
theta = [0, q(2), q(3), q(4)];

T = paramsdh2homoMatrix(a, d, alpha, theta)

%% Jacobiano
numLinks = 4;

Jv = zeros(3,numLinks,numLinks, 'sym');
Jw = zeros(3,numLinks,numLinks, 'sym');

z = [0 0 sin(q(2)) sin(q(2)); 0 1 0 0; 1 0 cos(q(2)) cos(q(2))];
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

I(:,:,2) = [3.02e-3,0,0;0,3.02e-3,0;0,0,5.56e-3];
I(:,:,1) = [0,0,0;0,0,0;0,0,0];
I(:,:,3) = [13.93e-3,0,0;0,13.93e-3,0;0,0,9.68e-3];
I(:,:,4) = [9.12e-3,0,0;0,9.12e-3,0;0,0,4.04e-3];

D = zeros(3,'sym');
for i=1:numLinks
    D = m(i)*Jv(:,:,i).'*Jv(:,:,i) + Jw(:,:,i).'*R(:,:,i)*I(:,:,i)*R(:,:,i).'*Jw(:,:,i);
end
D = simplify(D);
%% Símbolos de Christoffel

C = zeros(numLinks,numLinks,numLinks, 'sym');
C_q = zeros(numLinks, 'sym');
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
            C_q(k,j) = C_q(k,j)+C(i,j,k)*q(i+4);
        end
    end
end
C_q = simplify(C_q);

%% Vector de gravedad
g = [0; 0; 8.3346*cos(q(3)); 0.7795*cos(q(4))];

%% Simulación de dinámica directa

