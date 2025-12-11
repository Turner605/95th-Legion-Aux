params [
    "_modulePosition",
    "_unitSide",
    "_method",
    "_mode",
    "_squadType",
    "_includeRockets",
    "_includeB2",
    "_warning",
    "_shielded",
    "_smokescreen"
];

private _dropPos = _modulePosition;
if(_method == 0) then {_dropPos = [(_modulePosition select 0), (_modulePosition select 1), (_modulePosition select 2)+300]};

private _delayTime = 1;
if(_warning) then {_delayTime = 10};

private _warningSmoke = createVehicle ["SmokeShellOrange", _modulePosition, [], 0, "NONE"]; 

[{
    params["_dropPos", "_unitSide", "_method", "_mode", "_squadType", "_includeRockets", "_includeB2", "_shielded", "_smokescreen", "_warningSmoke"];

    private _podType = "ls_droidDispenser";
    if(_squadType == 1) then {_podType = "3AS_Droid_Dispenser_F";};

    private _spawnerPod = createVehicle[_podType, _dropPos, [], 0, "CAN_COLLIDE"];
    private _podPos = getPosATL _spawnerPod;

    _spawnerPod allowDamage false;

    private _attachPoint = createVehicle ["Land_HelipadEmpty_F", _podPos, [], 0, "CAN_COLLIDE"];

    private _shield = createVehicle ["AUX_95th_Shield_Small", _podPos, [], 0, "CAN_COLLIDE"];
    [_shield, _spawnerPod] call BIS_fnc_attachToRelative;
    _shield hideObjectGlobal true;

    _spawnerPod setVariable ["AUX_95th_Droid_Pod_WarningSmoke", _warningSmoke, true];
    _spawnerPod setVariable ["AUX_95th_Droid_Pod_AttachPoint", _attachPoint, true];
    _spawnerPod setVariable ["AUX_95th_Droid_Pod_Shield", _shield, true];

    _spawnedPod addEventHandler ["Killed", {
        params ["_spawnerPod"];

        private _warningSmoke = _spawnerPod getVariable "AUX_95th_Droid_Pod_WarningSmoke";
        private _attachPoint = _spawnerPod getVariable "AUX_95th_Droid_Pod_AttachPoint";
        private _shield = _spawnerPod getVariable "AUX_95th_Droid_Pod_Shield";
        private _frameHandler = _spawnerPod getVariable "AUX_95th_Droid_Pod_FrameHandler";

        deleteVehicle _warningSmoke;
        deleteVehicle _attachPoint;
        deleteVehicle _shield;
        [_frameHandler] call CBA_fnc_removePerFrameHandler;
    }];

    _spawnerPod addEventHandler ["Deleted", {
        params ["_spawnerPod"];

        private _warningSmoke = _spawnerPod getVariable "AUX_95th_Droid_Pod_WarningSmoke";
        private _attachPoint = _spawnerPod getVariable "AUX_95th_Droid_Pod_AttachPoint";
        private _shield = _spawnerPod getVariable "AUX_95th_Droid_Pod_Shield";
        private _frameHandler = _spawnerPod getVariable "AUX_95th_Droid_Pod_FrameHandler";

        deleteVehicle _warningSmoke;
        deleteVehicle _attachPoint;
        deleteVehicle _shield;
        [_frameHandler] call CBA_fnc_removePerFrameHandler;
    }];

    if(_method == 0) then {
        [{
            params ["_dropPos", "_unitSide", "_mode", "_squadType", "_includeRockets", "_includeB2", "_shielded", "_smokescreen", "_spawnerPod"];

            [_dropPos, _unitSide, _mode, _squadType, _includeRockets, _includeB2, _shielded, _smokescreen, _spawnerPod] call AUX_95th_fnc_handleDroidPodDrop;
        }, [_dropPos, _unitSide, _mode, _squadType, _includeRockets, _includeB2, _shielded, _smokescreen, _spawnerPod], 3] call CBA_fnc_waitAndExecute;
    } else {
        [_dropPos, _unitSide, _mode, _squadType, _includeRockets, _includeB2, _shielded, _smokescreen, _spawnerPod] call AUX_95th_fnc_handleDroidPodPlace;
    }

}, [_dropPos, _unitSide, _method, _mode, _squadType, _includeRockets, _includeB2, _shielded, _smokescreen, _warningSmoke], _delayTime] call CBA_fnc_waitAndExecute;

//TODO:
// - crater if on terrain