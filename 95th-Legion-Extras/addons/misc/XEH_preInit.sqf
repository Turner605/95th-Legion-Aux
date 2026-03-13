#include "script_component.hpp"
#include "XEH_PREP.hpp"

[
    "AUX_95th_Global_Locking_Enabled", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    "Enable Global Locking", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["95th Aux Mod", "Locking"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    false, // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "AUX_95th_Global_Locking_House_Chance",
    "SLIDER",
    "House Lock Chance",
    ["95th Aux Mod", "Locking"],
    [0.1, 1, 0.2, 1, true]
] call CBA_fnc_addSetting;

[
    "AUX_95th_Global_Locking_Door_Chance",
    "SLIDER",
    "Door Lock Chance",
    ["95th Aux Mod", "Locking"],
    [0.1, 1, 0.5, 1, true]
] call CBA_fnc_addSetting;