ur3 = loadrobot("UniversalUR3");
ur3.DataFormat = 'row';
ur3.Gravity = [0 0 -9.81];
q = [0 pi/2 0 0 pi/2 0];

qddot = forwardDynamics(ur3, q, [],[], []);
qdot = 0*qddot;

show(ur3, q);

for t=0.1:0.001:10
    
    show(ur3,q);
    drawnow;
    pause(0.5);
    qdot = t*qddot;
    q = t*qdot;
    qddot = forwardDynamics(ur3, q, qdot, [], fext);
    
end