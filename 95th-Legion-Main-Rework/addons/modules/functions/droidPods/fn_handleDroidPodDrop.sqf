params ["_dropPos", "_unitSide", "_mode", "_squadType", "_includeRockets", "_includeB2", "_shielded", "_smokescreen", "_spawnerPod"];

[{(velocity (_this select 8) select 2) > -1}, {
    params ["_dropPos", "_unitSide", "_mode", "_squadType", "_includeRockets", "_includeB2", "_shielded", "_smokescreen", "_spawnerPod"];

    private _attachPoint = _spawnerPod getVariable "AUX_95th_Droid_Pod_AttachPoint";
    [_spawnerPod, _attachPoint] call BIS_fnc_attachToRelative;

    _explosion = createVehicle ["R_MRAAWS_HE_F", (getPosATL _spawnerPod), [], 0, "NONE"];
    _explosion setDamage 1;

    // TODO: spawn crater if on terrain

    [_dropPos, _unitSide, _mode, _squadType, _includeRockets, _includeB2, _shielded, _smokescreen, _spawnerPod] call AUX_95th_fnc_handleDroidPodSpawning;
}, [_dropPos, _unitSide, _mode, _squadType, _includeRockets, _includeB2, _shielded, _smokescreen, _spawnerPod]] call CBA_fnc_waitUntilAndExecute;

