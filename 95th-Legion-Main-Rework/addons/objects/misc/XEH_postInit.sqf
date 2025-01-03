#include "script_component.hpp"

player addEventHandler["Respawn", {
	params ["_unit", "_corpse"];

    ["95th_Spoke", "OnSpeak", {
        params ["_unit", "_volume"];
        if(TF_speak_volume_level == "yelling") then {
            [_unit] spawn AUX_95th_fnc_checkPlayerInBriefing;
        }
    }, _unit] call TFAR_fnc_addEventHandler;

    ["95th_Changed_Volume", "OnSpeakVolume", {
        params ["_unit", "_distance"];
        if(_distance > 30) then {
            [_unit] spawn AUX_95th_fnc_checkPlayerInBriefing;
        }
    }, _unit] call TFAR_fnc_addEventHandler;
}];