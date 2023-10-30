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

private _toDeleteVics = [_logic, _loopBase, _loopMid, _loopTop, _turret];

_logic setPos [0,0,0];
_loopBase setPos [0,0,0];
_loopMid setPos [0,0,0.3];
_loopTop setPos [0,0,0.6];
_turret setPos [0,0,1.6];

_loopBase setVectorDirAndUp [[0,0,-1], [0,1,0]]; 
_loopMid setVectorDirAndUp [[0,0,-1], [0,1,0]]; 
_loopTop setVectorDirAndUp [[0,0,-1], [0,1,0]]; 
 
[_loopBase, _logic] call BIS_fnc_attachToRelative;
[_loopMid, _logic] call BIS_fnc_attachToRelative;
[_loopTop, _logic] call BIS_fnc_attachToRelative;
[_turret, _logic] call BIS_fnc_attachToRelative;

[_loopBase, 0.5] remoteExec ["setObjectScale"]; 
[_loopMid, 0.4] remoteExec ["setObjectScale"]; 
[_loopTop, 0.3] remoteExec ["setObjectScale"];

private _placementPos = _unit modelToWorld [0,2,0];

_logic setPos _placementPos;

_turret setDamage 0;
createVehicleCrew _turret; 

[{
	params["_turret", "_logic", "_unit", "_toDeleteVics", "_logicGroup"];
	if(alive _turret) then {[_unit, _toDeleteVics, _logicGroup] call NFA_fnc_handleAutoTurretEnd}
}, [_turret, _unit, _toDeleteVics, _logicGroup], NFL_Auto_Turret_Duration] call CBA_fnc_waitAndExecute;

[{!alive (_this select 0)}, {
	params["_turret", "_loopBase", "_unit", "_toDeleteVics", "_logicGroup"];
	if(alive _loopBase) then {[_unit, _toDeleteVics, _logicGroup] call NFA_fnc_handleAutoTurretEnd}
}, [_turret, _loopBase, _unit, _toDeleteVics, _logicGroup]] call CBA_fnc_waitUntilAndExecute;