["ace_firedPlayer", {
	params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];
    
    if (_weapon == "Throw") then {
        switch (_magazine) do {
            case "95th_Droidpod_Signal_Grenade": {
                [{
                    _this params ["_projectile"];

                    _pos = getPos _projectile;
                    _bombPos = [_pos select 0, _pos select 1, 0];
                    
                    bomb="R_80mm_HE" createVehicle (_bombPos);

                    [{
                        _this params ["_projectile"];

                        _pos = getPos _projectile;
                        _deployPos = [_pos select 0, _pos select 1, (_pos select 2) + 2];

                        _dispensor =  createVehicle ["3as_droid_container", _deployPos, [], 0, "CAN_COLLIDE"];
                        _group = [[0,0,0], east, ["JLTS_Droid_B1_E5", "JLTS_Droid_B1_E5", "JLTS_Droid_B1_E5", "JLTS_Droid_B1_E5"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;

                        {_x moveInCargo _dispensor} forEach Units _group
                    }, [_projectile], 0.5] call CBA_fnc_waitAndExecute;

                }, [_projectile], 15] call CBA_fnc_waitAndExecute;
            };
        };
    };
}] call CBA_fnc_addEventHandler;