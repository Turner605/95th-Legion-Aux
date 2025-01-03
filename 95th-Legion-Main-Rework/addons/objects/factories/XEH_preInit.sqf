#include "script_component.hpp"

[
    "AUX_95th_Droid_Factory_Wave_Delay", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    ["Spawner Wave Delay", "The delay between spawner waves."], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["95th Aux Mod", "Droid Factories"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [1, 240, 60, 0, false], // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "AUX_95th_Droid_Factory_Flak_Build_Delay", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    ["Spawner Wave Delay", "The delay before a flak cannon will rebuild itself."], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["95th Aux Mod", "Droid Factories"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [1, 920, 480, 0, false], // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "AUX_95th_Droid_Factory_Ground_Range", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    ["Spawner Ground Range", "The distance to search for valid ground targets"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["95th Aux Mod", "Droid Factories"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [100, 20000, 1500, 0, false], // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "AUX_95th_Droid_Factory_Air_Range", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    ["Spawner Air Range", "The distance to search for valid air targets"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["95th Aux Mod", "Droid Factories"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [100, 100000, 20000, 0, false], // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;