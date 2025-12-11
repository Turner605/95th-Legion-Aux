params ["_dropPos", "_unitSide", "_mode", "_squadType", "_includeRockets", "_includeB2", "_shielded", "_smokescreen", "_spawnerPod"];

private _attachPoint = _spawnerPod getVariable "AUX_95th_Droid_Pod_AttachPoint";
[_spawnerPod, _attachPoint] call BIS_fnc_attachToRelative;

[_dropPos, _unitSide, _mode, _squadType, _includeRockets, _includeB2, _shielded, _smokescreen, _spawnerPod] call AUX_95th_fnc_handleDroidPodSpawning;