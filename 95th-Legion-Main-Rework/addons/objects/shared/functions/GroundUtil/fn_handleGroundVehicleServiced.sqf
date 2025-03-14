params ["_pad", "_vehicleClasses"];

private _nearestObjects = nearestObjects[_pad, [], 20];
private _targetPad = 0;

{
	if((typeOf _x) == "AUX_95th_GroundUtil_Pad") then {
		_targetPad = _x;
	};
} forEach _nearestObjects;

if(!(isNil "_targetPad")) then {
	if(!(isNull _targetPad)) then {
		private _nearestVehicle = nearestObjects[_targetPad, _vehicleClasses, 20] select 0; 
	
		_nearestVehicle setFuel 1;
		_nearestVehicle setDamage 0;
		_nearestVehicle setVehicleAmmo 1;
	};
};