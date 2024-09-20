params ["_unit"];

if(!([_unit] call AUX_95th_fnc_hasDroneItem)) exitWith {};

if(_unit getVariable "NFL_Drone_Is_In_Progress") exitWith {
	hint "Recalling Drone";
    deleteVehicle (_unit getVariable "NFL_Drone");

	_unit setVariable ["NFL_Drone_Is_In_Progress", false, true];
	_unit setVariable ["NFL_Drone_Is_On_Cooldown", true, true];

	[{
		params["_unit"];
		_unit setVariable ["NFL_Drone_Is_On_Cooldown", false, true];
	}, [_unit], NFL_Drone_Cooldown] call CBA_fnc_waitAndExecute;
};

if(_unit getVariable "NFL_Drone_Is_On_Cooldown") exitWith {hint "Drone Deployment Is On Cooldown";};

private _oldDrone = (_unit getVariable "NFL_Drone");
if(!isNull _oldDrone) exitWith {deleteVehicle _oldDrone};

private _DroneName = (_unit getVariable "NFL_Drone_Selected");
_unit setVariable ["NFL_Drone_Is_In_Progress", true, true];

switch (_DroneName) do {
	case "Spotter": {[_unit] call AUX_95th_fnc_deploySpotterDrone};
	default {hint "No Option Selected";};
};