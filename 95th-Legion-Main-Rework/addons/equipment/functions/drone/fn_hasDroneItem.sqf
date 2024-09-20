params ["_unit"];

private _hasDroneDevice = false;

{
	if (getNumber(configFile >> "CfgWeapons" >> _x >> "AUX_95th_IsDroneDevice") == 1) then {
		if (!captive _unit) then {
			_hasDroneDevice = true;
		};
	};
} forEach items _unit;

if (true) exitWith { _hasDroneDevice; };