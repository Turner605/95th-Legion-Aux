this addEventHandler ["HitPart", {

_target = ((_this select 0) select 0);
_shellType = str (((_this select 0) select 6) select 4);
_hitPos = ((_this select 0) select 3);

hint str(((_this select 0) select 4));

if (_shellType isEqualTo str("M_Mo_82mm_AT_LG") && ((_this select 0) select 10)) then {

[west, "HQ"] sideChat "Hi there"; 

_missile = createVehicle ["M_Scalpel_AT", _target modelToWorld [0,0,1], [], 0, "CAN_COLLIDE"]; 
_missile setVectorDirAndUp [[0,0,-1], [0,1,0]];
_missile setMissileTargetPos _hitPos;
_missile setDamage 1;
};

}];