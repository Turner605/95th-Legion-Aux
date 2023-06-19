[
    "NFL_Disc_Shield_Duration", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    ["Heavy Disc Shield Duration", "Heavy Disc Shield Duration"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["95th Aux Mod", "Heavy Disc Shield"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [1, 120, 30, 0, false], // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "NFL_Disc_Shield_Cooldown_Duration", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    ["Heavy Disc Shield Cooldown", "Heavy Disc Shield Cooldown"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["95th Aux Mod", "Heavy Disc Shield"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [1, 360, 120, 0, false], // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;