params ["_pad", "_crateClass"];

private _targetPad = nearestObject [player, "AUX_95th_Misc_Crate_Pad"];

if(isNull _targetPad) exitWith {};

private _nearestVehicle = nearestObjects[_targetPad, [
	"AUX_95th_Crate_Platoon_Ammo",
	"AUX_95th_Crate_Platoon_Medical",
	"AUX_95th_Crate_Platoon_Explosives",
	"AUX_95th_Crate_Vehicle_Ammo",
	"AUX_95th_Crate_Vehicle_Fuel"
], 20] select 0; 

if(!(isNil "_nearestVehicle")) then {
	deleteVehicle _nearestVehicle;
};	

sleep 0.5;

private _padPosition = getPosATL _targetPad;
private _padX = _padPosition select 0;
private _padY = _padPosition select 1;
private _padZ = _padPosition select 2;
private _position = [_padX, _padY, _padZ + 1];

private _direction = getDir _targetPad;

private _spawnedVehicle = createVehicle[_crateClass, _position, [], 0, "CAN_COLLIDE"];

_spawnedVehicle setDir _direction;