["acex_fortify_objectPlaced", {
    params ["_unit", "_side", "_objectPlaced"];

}] call CBA_fnc_addEventHandler;

["acex_fortify_objectDeleted", {
    params ["_unit", "_side", "_objectDeleted"];

}] call CBA_fnc_addEventHandler;

["ace_unconscious", {
    params ["_unit", "_enable"];
    if (_unit isNotEqualTo player) exitWith {};
    if ((_enable) && (AUX_95th_Spectator_Enabled)) then {
        _unit setVariable ["ace_medical_feedback_effectUnconsciousTimeout", 10e10];
        [{
            if (!(player getVariable ["ace_isunconscious", false]) || {!alive player}) exitWith {};
            [[2], [0,1]] call ace_spectator_fnc_updateCameraModes;
            [true, true, false] call ace_spectator_fnc_setSpectator;
            [{
                hint "You are unconscious!";
            }, nil, 0.5] call CBA_fnc_waitAndExecute;
        }, nil, 5] call CBA_fnc_waitAndExecute;
    } else {
        [false] call ace_spectator_fnc_setSpectator;
    };
}] call CBA_fnc_addEventHandler;

player addEventHandler["Respawn", {
	params ["_unit", "_corpse"];

    [false] call ace_spectator_fnc_setSpectator;
}];

if(AUX_95th_Fortify_Forceload_Enabled) then {
    [] call AUX_95th_fnc_setupFortify;
};

if(AUX_95th_Default_Kits_Enabled) then {
    [] call AUX_95th_fnc_addDefaultClasses;
};

["ace_arsenal_displayClosed", {
    if(AUX_95th_Enable_Kit_Checker) then {
        [player] call AUX_95th_fnc_checkKit;
    };
}] call CBA_fnc_addEventHandler;

// ATSS (Anti Turner Salute System)
player addEventHandler ["AnimChanged", {
    params ["_unit", "_anim"];

    if (!(isNull cursorObject)) then {
        if(isPlayer cursorObject) then {
            private _playerId = getPlayerUID cursorObject;

            if(_playerId == "76561198065789267") then {
                if((animationState _unit) == "amovpercmstpsnonwnondnon_salutein") then {
                    systemChat "No Saluting";
                    _unit setDamage 1;
                };
            };
        };
    };
}];