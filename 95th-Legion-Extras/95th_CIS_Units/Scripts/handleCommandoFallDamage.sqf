params ["_unit", "_allDamages", "_typeOfDamage"];

private _damReturn = [_unit, _allDamages, _typeOfDamage];

{
	if (getNumber(configFile >> 'CfgVehicles' >> typeOf _unit >> 'NFL_Has_Commando_Jump') == 1) then {
        _damReturn = [];
	};
} forEach items _unit;

_damReturn;