params ["_unit", "_allDamages", "_typeOfDamage"];
 
if(!(["AUX_95th_Droid_B1", (typeOf _unit)] call BIS_fnc_inString)) exitWith {[_unit, _allDamages, _typeOfDamage]};

private _hitCount = _unit getVariable "AUX_95th_Hit_Count";
private _maxHitCount = AUX_95th_Droid_Unit_B1_MaxHits;

// Check if headshot
if (((_allDamages select 0) select 1) == "Head") exitWith {
	_unit setDamage 1;
	[];
};

// Check if hits not defined
if (isNil "_hitCount") exitWith {
	_unit setVariable ["AUX_95th_Hit_Count", 1];
	[];
};

// Check if hit count is not at max
if ((_hitCount+1) != _maxHitCount) exitWith {
	_hitCount = _hitCount + 1;
	_unit setVariable ["AUX_95th_Hit_Count", _hitCount];
	[];
};

// Hit count is at max
_unit setDamage 1;

[[_shooter], {
	params ["_shooter"];

	_shooter addPlayerScores [1, 0, 0, 0, 0];
}] remoteExec ["call", 0, true];

[_unit, _allDamages, _typeOfDamage];