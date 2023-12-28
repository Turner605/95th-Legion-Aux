params ["_unit"];

// Workflow:
// - If turret not deployed - deploy
// - If Turret deployed - destroy turret - start cooldown

//TODO:
// - Replace with cooldown timer variable

if(!([_unit] call NFA_fnc_hasTurretItem)) exitWith {};

if(_unit getVariable "NFL_Turret_Is_In_Progress") exitWith {
	hint "Recalling Turret";
    deleteVehicle (_unit getVariable "NFL_Turret");

	_unit setVariable ["NFL_Turret_Is_In_Progress", false, true];
	_unit setVariable ["NFL_Turret_Is_On_Cooldown", true, true];

	[{
		params["_unit"];
		_unit setVariable ["NFL_Turret_Is_On_Cooldown", false, true];
	}, [_unit], NFL_Turret_Cooldown] call CBA_fnc_waitAndExecute;
};

if(_unit getVariable "NFL_Turret_Is_On_Cooldown") exitWith {hint "Turret Deployment Is On Cooldown";};

private _oldTurret = (_unit getVariable "NFL_Turret");
if(!isNull _oldTurret) exitWith {deleteVehicle _oldTurret};

private _turretName = (_unit getVariable "NFL_Turret_Selected");
_unit setVariable ["NFL_Turret_Is_In_Progress", true, true];

switch (_turretName) do {
	case "Normal": {[_unit] call NFA_fnc_deployNormalTurret};
	case "Auto": {[_unit] call NFA_fnc_deployAutoTurret};
	default {hint "No Option Selected";};
};