

[
    "NFL_Enable_TX_Debug", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    ["TX Shield Debug", "TX Shield Debug"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["95th Aux Mod", "TX Shield"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [false, true, false], // data for this setting: [min, max, default, number of shown trailing decimals]
    0, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;