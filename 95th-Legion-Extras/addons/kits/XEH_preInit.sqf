#include "script_component.hpp"
ADDON = false;

#include "XEH_PREP.hpp"

[
    "AUX_95th_Enable_Kit_Checker", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    "Enable The Arsenal Kit Checker", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "95th Aux Mod", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    false, // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "AUX_95th_Default_Kits_Enabled", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    "Enable The Arsenal Default Kits", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "95th Aux Mod", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    true, // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[] call AUX_95th_Extras_fnc_constructRestrictedArsenal;

AUX_95th_Arsenal_Class_Items = createHashMapFromArray [
    ["Rifleman",[]],
    ["Marksman",["AUX_95th_DC15X","AUX_95th_DW32S"]],
    ["Riot",["JLTS_riot_shield_item"]],
    ["Heavy",["AUX_95th_Disc_Shield","AUX_95th_DC15L","AUX_95th_Z6", "AUX_95th_T20"]],
    ["Engineer",["ACE_Fortify", "ACE_DefusalKit", "ToolKit", "3AS_FusionCutter_F"]],
    ["Medic",["kat_accuvac", "kat_AED", "kat_X_AED", "kat_BVM", "AUX_95th_Magazine_Grenade_Medical_Shield"]],
    ["AT",["3AS_PLX1_F","3AS_RPS6_HP"]],
    ["Crewman",["ACE_Fortify", "ACE_DefusalKit", "ToolKit"]],
    ["Pilot",["ToolKit"]], 
    ["NCO",["AUX_95th_DC15C","AUX_95th_DC15C_GL"]],
    ["Flame",["AUX_95th_BX42", "AUX_95th_Disc_Shield"]],
    ["Jet",[]],
    ["Grenadier",["AUX_95th_DC15A_ugl_plastic","AUX_95th_DC15A_ugl","AUX_95th_WestarM5_GL"]],
    ["Stealth",["DSS_Cloaking_Device"]],
    ["Tech",["DSS_Hacking_Device"]],
    ["Support",["DSS_Support_Device"]],
    ["Airborne",[]],
    ["Drone Operator",["B_UavTerminal"]]
];

ADDON = true;
