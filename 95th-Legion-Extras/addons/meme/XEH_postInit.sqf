#include "script_component.hpp"

if (!hasInterface) exitWith {};

AUX_95th_Extras_Jumpscare_Video = "\z\AUX_95th_Extras\addons\meme\data\video\fnaf_foxy.ogv";
AUX_95th_Extras_Jumpscare_Video_Is_Playing = false;
AUX_95th_Extras_Jumpscare_Video_Chance = 10000;

[{
    if (isGamePaused) exitWith {};

    private _random = floor (random (AUX_95th_Extras_Jumpscare_Video_Chance + 1));
    systemChat str _random;
    if (    
        (!AUX_95th_Extras_Jumpscare_Video_Is_Playing) && 
        (_random == AUX_95th_Extras_Jumpscare_Video_Chance) &&
        AUX_95th_Enable_Jumpscare
    ) then {
        AUX_95th_Extras_Jumpscare_Video call BIS_fnc_playVideo;
        AUX_95th_Extras_Jumpscare_Video_Is_Playing = true;
    };
}, 1] call CBA_fnc_addPerFrameHandler;

[missionNamespace, "BIS_fnc_playVideo_stopped", {
    AUX_95th_Extras_Jumpscare_Video_Is_Playing = false;
}] call BIS_fnc_addScriptedEventHandler;