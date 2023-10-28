params ["_unit"];

"ace_gestures_point" call ace_gestures_fnc_playSignal; 

NFL_Auto_Turret_Active = 1;

private _logicCenter = createCenter sideLogic; 
private _logicGroup = createGroup _logicCenter; 
private _logic = _logicGroup createUnit ["Logic", [0,0,0], [], 0, "CAN_COLLIDE"]; 

private _loopBase = createVehicle ["ls_tracer_stun_placeable", [0,0,0], [], 0, "CAN_COLLIDE"]; 
private _loopMid = createVehicle ["ls_tracer_stun_placeable", [0,0,0], [], 0, "CAN_COLLIDE"]; 
private _loopTop = createVehicle ["ls_tracer_stun_placeable", [0,0,0], [], 0, "CAN_COLLIDE"]; 
private _turret = createVehicle ["JLTS_UST_turret_GAR", [0,0,0], [], 0, "CAN_COLLIDE"];

_logic setPos [0,0,0];
_loopBase setPos [0,0,0];
_loopMid setPos [0,0,0.3];
_loopTop setPos [0,0,0.6];
_turret setPos [0,0,1.6];

_loopBase setVectorDirAndUp [[0,0,-1], [0,1,0]]; 
_loopMid setVectorDirAndUp [[0,0,-1], [0,1,0]]; 
_loopTop setVectorDirAndUp [[0,0,-1], [0,1,0]]; 
 
[_loopBase, 0.5] remoteExec ["setObjectScale"]; 
[_loopMid, 0.4] remoteExec ["setObjectScale"]; 
[_loopTop, 0.3] remoteExec ["setObjectScale"];

[_loopBase, _logic] call BIS_fnc_attachToRelative;
[_loopMid, _logic] call BIS_fnc_attachToRelative;
[_loopTop, _logic] call BIS_fnc_attachToRelative;
[_turret, _logic] call BIS_fnc_attachToRelative;

private _placementPos = _unit modelToWorld [0,2,0];

_logic setPos _placementPos;

_turret setDamage 0;
createVehicleCrew _turret; 

// private _shield = "Shield_Deployed" createVehicle getPos _unit;
playSound3D ["3AS\3AS_Shield\shield_grenade\enable.ogg", _turret, false, getPos _turret, 5, 0.7, 25];
// _shield attachTo [_unit, [0.3, 1, -0.3], "Gun", true]; _shield setdir 0;

sleep NFL_Auto_Turret_Duration;

NFL_Auto_Turret_On_Cooldown = 1;
NFL_Auto_Turret_Active = 0;
playSound3D ["3AS\3AS_Shield\shield_grenade\disable.ogg", _turret, false, getPos _turret, 5, 0.7, 25];
sleep 0.5;
// detach _shield;
// deleteVehicle _shield;

deleteVehicle _loopBase;
deleteVehicle _loopMid;
deleteVehicle _loopTop;
deleteVehicle _turret;
deleteVehicle _logic;
deleteGroup _logicGroup;

sleep NFL_Auto_Turret_Cooldown_Duration;
NFL_Auto_Turret_On_Cooldown = 0;


//TODO:
// Allow press again to recall turret
// Activate cooldown when turret destroyed

