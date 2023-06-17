params ["_this", "_vehicleClasses"];

private _nearestObjects = nearestObjects[_this, [], 50];
private _targetPad = 0;

{
	if((typeOf _x) == "95th_Landing_Pad") then {
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