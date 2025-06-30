params ["_position", "_unitSide", "_warning", "_squadType", "_mode", "_singleUse", "_shielded", "_smokescreen"];

private _delayTime = 1;

if(_warning) then {_delayTime = 10};

private _warningSmoke = createVehicle ["SmokeShellOrange", _position, [], 0, "NONE"]; 

[{
    params["_position", "_unitSide", "_warning", "_squadType", "_mode", "_singleUse", "_shielded", "_smokescreen", "_warningSmoke"];

    _dropPos = [
        (_position select 0),
        (_position select 1),
        300
    ];

    private _spawnArray = [];
    private _podType = "";

    switch (_squadType) do {
        case 0: {
            _spawnArray = ["JLTS_Droid_B1_E5", "JLTS_Droid_B1_E5", "JLTS_Droid_B1_SBB3", "JLTS_Droid_B1_AR"];
            if (round (random 1) == 1) then {_spawnArray pushBack "JLTS_Droid_B1_AT"} else {_spawnArray pushBack "JLTS_Droid_B1_Marine"};
            _podType = "ls_droidDispenser";
        };
        
        case 1: {
            _spawnArray = ["JLTS_Droid_B1_E5", "JLTS_Droid_B1_E5", "JLTS_Droid_B1_SBB3", "ls_droid_b2"];
            if (round (random 1) == 1) then {_spawnArray pushBack "JLTS_Droid_B1_AT"} else {_spawnArray pushBack "JLTS_Droid_B1_Marine"};
            _podType = "3AS_Droid_Dispenser_F";
        };
        
        case 2: {
            _spawnArray = ["ls_droid_bx_captain", "ls_droid_bx", "ls_droid_bx", "ls_droid_bx"];
            _podType = "3AS_Droid_Dispenser_F";
        };
    };

    private _spawnedVehicle = createVehicle[_podType, _dropPos, [], 0, "CAN_COLLIDE"];

    _spawnedVehicle allowDamage false;

    [{
        params["_position", "_unitSide", "_warning", "_squadType", "_mode", "_singleUse", "_shielded", "_smokescreen", "_warningSmoke", "_spawnArray", "_spawnedVehicle"];

        [{(velocity (_this select 10) select 2) > -1}, {
            params["_position", "_unitSide", "_warning", "_squadType", "_mode", "_singleUse", "_shielded", "_smokescreen", "_warningSmoke", "_spawnArray", "_spawnedVehicle"];

            private _spawnerPos = getPosATL _spawnedVehicle;

            _attachPoint = createVehicle ["Land_HelipadEmpty_F", _spawnerPos, [], 0, "CAN_COLLIDE"];
            [_spawnedVehicle, _attachPoint] call BIS_fnc_attachToRelative;

            _explosion = createVehicle ["R_MRAAWS_HE_F", _spawnerPos, [], 0, "NONE"];
            _explosion setDamage 1;

            // TODO: crater if on terrain

            [{
                params["_unitSide", "_mode", "_singleUse", "_shielded", "_smokescreen", "_warningSmoke", "_spawnArray", "_spawnedVehicle", "_attachPoint", "_spawnerPos"];

                _spawnedVehicle allowDamage true;

                if(_singleUse) then {
                    _group = [_spawnerPos, _unitSide, _spawnArray ,[],[],[],[],[],180] call BIS_fnc_spawnGroup;
                    private _spawnedUnits = units _group;

                    switch (_mode) do {
                        case 1: {[_group, 500] spawn lambs_wp_fnc_taskRush;};
                        case 2: {[_spawnerPos, nil, _spawnedUnits, 100, 2, false, false] call ace_ai_fnc_garrison;};
                        case 3: {[_spawnerPos, nil, _spawnedUnits, 100, 2, false, true] call ace_ai_fnc_garrison;};
                    };
                } else {
                    private _frameHandler = [{
                        (_this select 0) params ["_unitSide", "_mode", "_spawnArray", "_spawnerPos"];

                        _group = [_spawnerPos, _unitSide, _spawnArray ,[],[],[],[],[],180] call BIS_fnc_spawnGroup;
                        private _spawnedUnits = units _group;

                        switch (_mode) do {
                            case 1: {[_group, 500] spawn lambs_wp_fnc_taskRush;};
                            case 2: {[_spawnerPos, nil, _spawnedUnits, 100, 2, false, false] call ace_ai_fnc_garrison;};
                            case 3: {[_spawnerPos, nil, _spawnedUnits, 100, 2, false, true] call ace_ai_fnc_garrison;};
                        };
                    }, 45, [_unitSide, _mode, _spawnArray, _spawnerPos]] call CBA_fnc_addPerFrameHandler;

                    [{!alive (_this select 0)}, {
                        params["_spawnedVehicle", "_frameHandler", "_warningSmoke", "_attachPoint"];
                        [_frameHandler] call CBA_fnc_removePerFrameHandler;
                        deleteVehicle _warningSmoke;
                        detach _spawnedVehicle;
                        deleteVehicle _attachPoint;
                    }, [_spawnedVehicle, _frameHandler, _warningSmoke, _attachPoint]] call CBA_fnc_waitUntilAndExecute;
                };

            }, [_unitSide, _mode, _singleUse, _shielded, _smokescreen, _warningSmoke, _spawnArray, _spawnedVehicle, _attachPoint, _spawnerPos], 1] call CBA_fnc_waitAndExecute;
        }, [_position, _unitSide, _warning, _squadType, _mode, _singleUse, _shielded, _smokescreen, _warningSmoke, _spawnArray, _spawnedVehicle]] call CBA_fnc_waitUntilAndExecute;
    }, [_position, _unitSide, _warning, _squadType, _mode, _singleUse, _shielded, _smokescreen, _warningSmoke, _spawnArray, _spawnedVehicle], 3] call CBA_fnc_waitAndExecute;
}, [_position, _unitSide, _warning, _squadType, _mode, _singleUse, _shielded, _smokescreen, _warningSmoke], _delayTime] call CBA_fnc_waitAndExecute;

// maybe an override string for custom spawns?

//TODO:
// - crater if on terrain
// - Shield
// - Smoke screen