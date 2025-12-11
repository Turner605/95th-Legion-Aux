params ["_dropPos", "_unitSide", "_mode", "_squadType", "_includeRockets", "_includeB2", "_shielded", "_smokescreen", "_spawnerPod"];

[{
    params["_dropPos", "_unitSide", "_mode", "_squadType", "_includeRockets", "_includeB2", "_shielded", "_smokescreen", "_spawnerPod"];

    _spawnerPod allowDamage true;

    private _singleUse = false;
    private _spawnerPos = (getPosATL _spawnerPod);

    if(_squadType == 1) then {
        _singleUse = true;
    };

    if(_shielded) then {
        private _shield = _spawnerPod getVariable "AUX_95th_Droid_Pod_Shield";
        _shield hideObjectGlobal false;
    };

    if(_singleUse) then {
        private _spawnArray = ["ls_droid_bx_captain", "ls_droid_bx", "ls_droid_bx", "ls_droid_bx"];

        _group = [_spawnerPos, _unitSide, _spawnArray ,[],[],[],[],[],180] call BIS_fnc_spawnGroup;
        private _spawnedUnits = units _group;

        switch (_mode) do {
            case 1: {[_group, 500] spawn lambs_wp_fnc_taskRush;};
            case 2: {[_spawnerPos, nil, _spawnedUnits, 100, 2, false, false] call ace_ai_fnc_garrison;};
            case 3: {[_spawnerPos, nil, _spawnedUnits, 100, 2, false, true] call ace_ai_fnc_garrison;};
        };

        [{params ["_spawnerPod"]; deleteVehicle _spawnerPod;}, [_spawnerPod], 10] call CBA_fnc_waitAndExecute;
    } else {
        private _frameHandler = [{
            (_this select 0) params ["_unitSide", "_mode", "_squadType", "_spawnerPos", "_includeRockets", "_includeB2"];
            
            private _spawnArray = ["JLTS_Droid_B1_E5", "JLTS_Droid_B1_E5", "JLTS_Droid_B1_SBB3", "JLTS_Droid_B1_AR"];

            if(_includeRockets && (round (random 5) == 1)) then {
                _spawnArray pushBack (["JLTS_Droid_B1_AT", "JLTS_Droid_B1_Marine"] selectRandomWeighted [1,1])
            };

            if(_includeB2 && (round (random 5) == 1)) then {
                _spawnArray pushBack "ls_droid_b2";
            };

            _group = [_spawnerPos, _unitSide, _spawnArray ,[],[],[],[],[],180] call BIS_fnc_spawnGroup;
            private _spawnedUnits = units _group;

            switch (_mode) do {
                case 1: {[_group, 500] spawn lambs_wp_fnc_taskRush;};
                case 2: {[_spawnerPos, nil, _spawnedUnits, 100, 2, false, false] call ace_ai_fnc_garrison;};
                case 3: {[_spawnerPos, nil, _spawnedUnits, 100, 2, false, true] call ace_ai_fnc_garrison;};
            };
        }, 45, [_unitSide, _mode, _squadType, _spawnerPos, _includeRockets, _includeB2]] call CBA_fnc_addPerFrameHandler;

        _spawnerPod setVariable ["AUX_95th_Droid_Pod_FrameHandler", _frameHandler, true];
    };

}, [_dropPos, _unitSide, _mode, _squadType, _includeRockets, _includeB2, _shielded, _smokescreen, _spawnerPod], 1] call CBA_fnc_waitAndExecute;
