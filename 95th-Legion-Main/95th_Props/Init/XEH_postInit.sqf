player addEventHandler["Respawn", {
	params ["_unit", "_corpse"];

    ["95th_Spoke", "OnSpeak", {
        params ["_unit", "_volume"];
        if(TF_speak_volume_level == "yelling") then {
            [_unit] spawn NFA_fnc_checkPlayerInBriefing;
        }
    }, _unit] call TFAR_fnc_addEventHandler;

    ["95th_Changed_Volume", "OnSpeakVolume", {
        params ["_unit", "_distance"];
        if(_distance > 30) then {
            [_unit] spawn NFA_fnc_checkPlayerInBriefing;
        }
    }, _unit] call TFAR_fnc_addEventHandler;

    [_unit] spawn {
        params ["_unit"];
        _unit setVariable ["IsOnAirRespawnCooldown", true, true];
        private _airRespawnCooldown = time + 60;
        waitUntil {time >= _airRespawnCooldown};
        _unit setVariable ["IsOnAirRespawnCooldown", false, true];
    }
}];

["ace_arsenal_displayClosed", {
    if(enable_kit_checker_95th) then {
        private _allItems = items player;
        private _primary = primaryWeapon player;
        private _secondary = handgunWeapon player;
        private _launcher = secondaryWeapon player; 

        if(!(_primary == "")) then {_allItems pushBack _primary};
        if(!(_secondary == "")) then {_allItems pushBack _secondary};
        if(!(_launcher == "")) then {_allItems pushBack _launcher};

        private _classCount = 0;

        {
            private _classItems = _x;

            {
                if(_x in _allItems) then { _classCount = _classCount+1 };
            } forEach _classItems;

        } forEach Arsenal_Class_Items_95th;

        if (_classCount > 1) then {
            2 cutText ["<t color='#ffffff' size='2'>You seem to be multi-certing.</t><br/><t color='#ffffff' size='2'>Please check your gear.</t>", "PLAIN", 1, true, true];
        };
    }
}] call CBA_fnc_addEventHandler;


if(enable_default_kits_95th) then {
    [""] call NFA_fnc_addDefaultClasses;
}