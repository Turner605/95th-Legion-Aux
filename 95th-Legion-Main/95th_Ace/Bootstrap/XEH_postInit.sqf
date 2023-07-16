["acex_fortify_objectPlaced", {
    params ["_unit", "_side", "_objectPlaced"];

}] call CBA_fnc_addEventHandler;

["acex_fortify_objectDeleted", {
    params ["_unit", "_side", "_objectDeleted"];

}] call CBA_fnc_addEventHandler;

["ace_unconscious", {
    params ["_unit", "_enable"];
    if (_unit isNotEqualTo player) exitWith {};
    if ((_enable) && (enable_spectator_95th)) then {
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