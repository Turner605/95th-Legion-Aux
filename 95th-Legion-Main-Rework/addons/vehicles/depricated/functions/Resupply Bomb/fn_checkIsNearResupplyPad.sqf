params ["_vehicle"];

private _isInRange = false;
private _nearestSupplyPad = nearestObject [_vehicle, "AUX_95th_Misc_Crate_Pad"];

if(isNull _nearestSupplyPad) exitWith {};

private _distance = (getPos _vehicle) distance (getPos _nearestSupplyPad);

if(_distance > 40) then {_isInRange = false} else {_isInRange = true};

_isInRange;