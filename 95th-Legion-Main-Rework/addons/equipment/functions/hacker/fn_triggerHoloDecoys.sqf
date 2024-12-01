params ["_player"];

private _side = side _player;
private _spawnArray = ["AUX_95th_Clone_Decoy_Hologram","AUX_95th_Clone_Decoy_Hologram","AUX_95th_Clone_Decoy_Hologram","AUX_95th_Clone_Decoy_Hologram"];
private _spawnPos = _player modelToWorld [0,2,0];

_group = [_spawnPos, _side, _spawnArray ,[],[],[],[],[],180] call BIS_fnc_spawnGroup;

{ _x allowDamage false; } forEach (units _group);

[_group, 500] spawn lambs_wp_fnc_taskRush;

[{
    params ["_group"];

	{ deleteVehicle _x; } forEach (units _group);
}, [_group], AUX_95th_Holo_Decoy_Duration] call CBA_fnc_waitAndExecute;