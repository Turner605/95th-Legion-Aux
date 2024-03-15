[
    "AUX_95th_Droid_Unit_B1_MaxHits", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    ["B1 Max Hit Count", "The amount of hits a B1 can take to the body before dying"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["95th Aux Mod", "Droids"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [1, 20, 3, 0, false], // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;