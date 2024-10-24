#include "script_component.hpp"

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

// ATSS (Anti Turner Salute System)
player addEventHandler ["AnimChanged", {
    params ["_unit", "_anim"];

    if (!(isNull cursorObject)) then {
        if(isPlayer cursorObject) then {
            private _playerId = getPlayerUID cursorObject;

            if(_playerId == "76561198065789267") then {
                if("salute" in (animationState _unit)) then {
                    systemChat "No Saluting";

                    // private ["_camera"];
                    // _camera = "Camera" camCreate [10,10,10];
                    // _camera cameraEffect ["INTERNAL", "BACK"];

                    // _camera camPreparePos [10,10,10];
                    // _camera camPrepareTarget [10,10,1000];
                    // _camera camPrepareFOV 0.7;
                    // _camera camCommitPrepared 0;

                    // sleep 0.1;

                    // private ["_video"];

                    // _video = ["z\AUX_95th\addons\ace\data\nuh_uh.ogv"] spawn BIS_fnc_playVideo;

                    // waitUntil {scriptDone _video};

                    // sleep 0.1;

                    // _camera cameraEffect ["TERMINATE", "BACK"];
                    // camDestroy _camera;

                    _unit setDamage 1;
                };
            };
        };
    };
}];

[] call AUX_95th_checkVersion;