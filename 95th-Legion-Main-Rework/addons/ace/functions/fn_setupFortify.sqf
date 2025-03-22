if (!isServer) exitWith {};

private _side = west;
private _preset = "AUX_95th_Fortify_Preset_Small";
private _budget = -1;

private _config = missionConfigFile >> "ACEX_Fortify_Presets" >> _preset;

if (!isClass _config) then {_config = configFile >> "ACEX_Fortify_Presets" >> _preset;};

private _objects = getArray (_config >> "objects");

[_side, _budget, _objects] call acex_fortify_fnc_registerObjects;