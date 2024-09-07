params ["_unit"];

"ace_gestures_point" call ace_gestures_fnc_playSignal; 

private _placementPos = _unit modelToWorld [0,2,0.2];
private _direction = getDir _unit;

private _turret = createVehicle ["3AS_BlasterTurret", _placementPos, [], 0, "CAN_COLLIDE"];
_turret setDir _direction;
createVehicleCrew _turret; 
_unit setVariable ["NFL_Turret", _turret, true];
_unit setVariable ["NFL_Turret_Is_On_Cooldown", true, true];

[{
	params["_unit"];
	_unit setVariable ["NFL_Turret_Is_On_Cooldown", false, true];
}, [_unit], NFL_Turret_Cooldown] call CBA_fnc_waitAndExecute;

[{!alive (_this select 0)}, {
	params["_turret", "_unit"];

	if(!(_unit getVariable "NFL_Turret_Is_On_Cooldown")) then {
		_unit setVariable ["NFL_Turret_Is_In_Progress", false, true];
	};
}, [_turret, _unit]] call CBA_fnc_waitUntilAndExecute;