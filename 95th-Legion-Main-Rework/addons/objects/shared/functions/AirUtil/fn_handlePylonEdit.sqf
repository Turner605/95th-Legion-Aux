params ["_this", "_player", "_vehicleClasses"];

private _nearestObjects = nearestObjects[_this, [], 20];
private _targetPad = 0;

{
	if((typeOf _x) == "AUX_95th_AirUtil_Pad") then {
		_targetPad = _x;
	};
} forEach _nearestObjects;

if(!(isNil "_targetPad")) then {
	if(!(isNull _targetPad)) then {
		private _nearestVehicle = nearestObjects[_targetPad, _vehicleClasses, 20] select 0; 
	
		// [_nearestVehicle, true] call ace_pylons_fnc_showDialog;

		[_nearestVehicle, true] remoteExec ["ace_pylons_fnc_showDialog", _player];		
	};
};