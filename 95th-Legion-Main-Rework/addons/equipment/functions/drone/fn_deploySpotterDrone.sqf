params ["_unit"];

"ace_gestures_point" call ace_gestures_fnc_playSignal; 

private _placementPos = _unit modelToWorld [0,2,0.2];
private _direction = getDir _unit;

private _drone = createVehicle ["AUX_95th_Prowler_Spotter", _placementPos, [], 0, "CAN_COLLIDE"];
createVehicleCrew _drone; 

(group _drone) setGroupId [(name _unit) + " - Spotter"];

_drone setDir _direction;
_unit setVariable ["NFL_Drone", _drone, true];
_unit setVariable ["NFL_Drone_Is_On_Cooldown", true, true];

[{
	params["_unit"];
	_unit setVariable ["NFL_Drone_Is_On_Cooldown", false, true];
}, [_unit], NFL_Drone_Cooldown] call CBA_fnc_waitAndExecute;

[{!alive (_this select 0)}, {
	params["_drone", "_unit"];

	if(!(_unit getVariable "NFL_Drone_Is_On_Cooldown")) then {
		_unit setVariable ["NFL_Drone_Is_In_Progress", false, true];
	};
}, [_drone, _unit]] call CBA_fnc_waitUntilAndExecute;