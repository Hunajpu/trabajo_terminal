function [T, A] = paramsdh2homoMatrix(a,d, alpha, theta)
% Autor: Rodrigo Luna
%paramsdh2homoMatrix This function uses the Denavid-Hartenverg
%parameters to return the equivalent homogenous matrixes. Then the
%transformation matrix T is calculated for the links
% a, d, alpha and theta should be 1xn arrays, with corresponding
% symbolic values.

numLinks = length(a);

A = zeros(4,4,numLinks, 'sym');
T = zeros(4,4,numLinks, 'sym');

for i = 1:1:numLinks
    A(:,:,i) = [cospi(theta(i)), -1*sinpi(theta(i))*cospi(alpha(i)), sinpi(theta(i))*sinpi(alpha(i)), a(i)*cospi(theta(i));sinpi(theta(i)), cospi(theta(i))*cospi(alpha(i)), -1*cospi(theta(i))*sinpi(alpha(i)), a(i)*sinpi(theta(i)); 0, sinpi(alpha(i)), cospi(alpha(i)), d(i); 0, 0, 0, 1];
    if i==1
        T(:,:,i) = A(:,:,i);
    else
        T(:,:,i) = T(:,:,i-1)*A(:,:,i);
    end
    
end

T = simplify(T);
A = simplify(A);
end

