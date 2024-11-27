params ["_unit"];

private _weaponClass = (currentWeapon _unit);
private _isShielded = [configFile >> "CfgWeapons" >> _weaponClass, "JLTS_isShielded", 0] call BIS_fnc_returnConfigEntry;

if(_isShielded == 0)exitWith{};

playSound3D ['z\DSS\addons\grenades\Sounds\Flashbang\DSS_Flashbang_Detonated.wav', _unit, false, getPosASL _unit, 3, 1, 100]; 
[(_unit modelToWorld [0,0.1,0.3])] call DSS_fnc_handleFlashDetonate;