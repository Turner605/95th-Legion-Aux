params ["_unit", "_allDamages", "_typeOfDamage"];

if(!(["AUX_95th_Droid_Commando_Unit", (typeOf _unit)] call BIS_fnc_inString)) exitWith {[_unit, _allDamages, _typeOfDamage]};

private _hitCount = _unit getVariable "AUX_95th_Hit_Count";
private _maxHitCount = AUX_95th_Droid_Unit_Commando_MaxHits;
private _hitsToTake = 1;

// Check if headshot
if (((_allDamages select 0) select 1) == "Head") then {_hitsToTake = (AUX_95th_Droid_Unit_Commando_MaxHits/2);};

// Check if hits not defined
if (isNil "_hitCount") exitWith {
	_unit setVariable ["AUX_95th_Hit_Count", _hitsToTake];
	[];
};

// Check if hit count is not at max
if ((_hitCount+_hitsToTake) < _maxHitCount) exitWith {
	_hitCount = _hitCount + _hitsToTake;
	_unit setVariable ["AUX_95th_Hit_Count", _hitCount];
	[];
};

// Hit count is at max
_unit setDamage 1;

[_unit, _allDamages, _typeOfDamage];