#include "script_component.hpp"
ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

[
    "AUX_95th_Disc_Shield_Duration", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    ["Heavy Disc Shield Duration", "Heavy Disc Shield Duration"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["95th Aux Mod", "Heavy Disc Shield"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [1, 120, 30, 0, false], // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "AUX_95th_Disc_Shield_Cooldown_Duration", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    ["Heavy Disc Shield Cooldown", "Heavy Disc Shield Cooldown"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["95th Aux Mod", "Heavy Disc Shield"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [1, 360, 120, 0, false], // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "NFL_Medical_Shield_Duration", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    ["Medical Shield Duration", "Medical Shield Duration"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["95th Aux Mod", "Medical Squad Shield"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [1, 360, 120, 0, false], // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "NFL_Medical_Shield_Bandage_Rate", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    ["Medical Shield Bandage Rate", "The time in seconds between bandage application"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["95th Aux Mod", "Medical Squad Shield"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [1, 30, 3, 0, false], // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

// Can treat more than one person at once setting

[
    "NFL_Turret_Cooldown", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    ["Turret Cooldown", "Turret Deployment Cooldown"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["95th Aux Mod", "Engineer Turret"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [1, 120, 60, 0, false], // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "NFL_Drone_Cooldown", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    ["Drone Cooldown", "Drone Deployment Cooldown"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["95th Aux Mod", "Drone"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [1, 240, 180, 0, false], // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

ADDON = true;
