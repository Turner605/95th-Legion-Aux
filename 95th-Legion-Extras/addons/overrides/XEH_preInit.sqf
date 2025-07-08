#include "script_component.hpp"
ADDON = false;

#include "XEH_PREP.hpp"

[] spawn AUX_95th_Extras_fnc_removeStamina;

[
    "TAS_Lava_Enable_Handler_All_Maps",
    "CHECKBOX",
    "Enable Global Lava Damage", // Change me
    "3AS Lava", // Change me
    false, // Change me
    1,
    {}
] call CBA_fnc_addSetting;

[
    "TAS_Lava_Damage_Multiplier",
    "SLIDER",
    "Lava Damage Multiplier",
    "3AS Lava", // Change me
    [1, 10, 1, 0, false],
    1,
    {}
] call CBA_fnc_addSetting;

ADDON = true;
