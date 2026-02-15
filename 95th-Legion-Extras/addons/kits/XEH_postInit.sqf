#include "script_component.hpp"

if(AUX_95th_Default_Kits_Enabled) then {
    [] call AUX_95th_Extras_fnc_addDefaultClasses;
};

["ace_arsenal_displayClosed", {
    if(AUX_95th_Enable_Kit_Checker) then {
        [player] call AUX_95th_Extras_fnc_checkKit;
    };
}] call CBA_fnc_addEventHandler;

["ace_arsenal_cargoChanged", {
    if(AUX_95th_Enable_Point_Checker) then {
        private _isOverThrowables = [player] call AUX_95th_Extras_fnc_checkPointsThrowables;

        if(_isOverThrowables) then {
            [player] call AUX_95th_Extras_fnc_displayPointMessage;
        } else {
            [player] call AUX_95th_Extras_fnc_hidePointMessage;
        }
    };

}] call CBA_fnc_addEventHandler;

// Maybe do Pools? General Equipment / Grenades / Ammo?
// Consider other events like respawn?
// Consider zeus units
