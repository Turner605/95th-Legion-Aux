#include "script_component.hpp"

[] call AUX_95th_Extras_fnc_checkVersion;

if(AUX_95th_Enable_Addon_Checker) then {
    [] call AUX_95th_Extras_fnc_checkAddons;
};
