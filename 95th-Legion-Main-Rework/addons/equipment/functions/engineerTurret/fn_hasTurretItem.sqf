params ["_unit"];

private _hasTurretDevice = false;

{
	if (getNumber(configFile >> "CfgWeapons" >> _x >> "AUX_95th_IsTurretDevice") == 1) then {
		if (!captive _unit) then {
			_hasTurretDevice = true;
		};
	};
} forEach items _unit;

if (true) exitWith { _hasTurretDevice; };