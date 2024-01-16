
[
    "AUX_95th_Spectator_Enabled", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    "Enable Spectator Cam On Death", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "95th Aux Mod", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [false, true, false], // data for this setting: [min, max, default, number of shown trailing decimals]
    0, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "AUX_95th_Fortify_Forceload_Enabled", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    "Forecload the 95th Small preset for fortify", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "95th Aux Mod", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [true, false, true], // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "AUX_95th_Default_Kits_Enabled", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    "Enable The Arsenal Default Kits", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "95th Aux Mod", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [false, true, true], // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

["NF_player_connect", "onPlayerConnected", {
    params ["_id", "_uid", "_name"];

    private _connectedTimeList = missionNamespace getVariable "AUX_95th_ConnectedTime_List";

    if (isNil "_connectedTimeList") then {_connectedTimeList = createHashMap;};

    _connectedTimeList set [_uid, time];

    missionNamespace setVariable ["AUX_95th_ConnectedTime_List", _connectedTimeList, true];
}] call BIS_fnc_addStackedEventHandler;

["NF_player_disconnect", "onPlayerDisconnected", {
    params ["_id", "_uid", "_name"];

    private _playtimeList = missionNamespace getVariable "AUX_95th_PlayTime_List";
    private _connectedTimeList = missionNamespace getVariable "AUX_95th_ConnectedTime_List";

    if (isNil "_playtimeList") then {_playtimeList = createHashMap;};

    private _previousPlayTime = (_playtimeList getOrDefault [_uid, 0]);
    private _connectedTime = (_connectedTimeList get _uid);
    private _sessionTime = (time - _connectedTime);

    private _totalTime = (_sessionTime + _previousPlayTime);

    _playtimeList set [_uid, _totalTime];

    missionNamespace setVariable ["AUX_95th_PlayTime_List", _playtimeList, true];
}] call BIS_fnc_addStackedEventHandler;

// addMissionEventHandler ["HandleDisconnect", {
// 	params ["_unit", "_id", "_uid", "_name"];
// 	["knd_Headlamp_Disconnect",[_unit]] call CBA_fnc_globalEvent;	   
// }];