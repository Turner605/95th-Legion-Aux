#include "script_component.hpp"

if(AUX_95th_Default_Kits_Enabled) then {
    [] call AUX_95th_Extras_fnc_addDefaultClasses;
};

["ace_arsenal_displayClosed", {
    if(AUX_95th_Enable_Kit_Checker) then {
        [player] call AUX_95th_Extras_fnc_checkKit;
    };
}] call CBA_fnc_addEventHandler;