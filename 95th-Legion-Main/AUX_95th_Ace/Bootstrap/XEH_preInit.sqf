[
    "AUX_95th_Enable_Kit_Checker", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    "Enable The Arsenal Kit Checker", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "95th Aux Mod", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [false, true, false], // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

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

AUX_95th_Arsenal_Class_Items = [
	["AUX_95th_DC15X","JLTS_DW32S"], // 0 - Marksman
	["JLTS_riot_shield_item"], // 1 - Riot
	["NFL_Disc_Shield","3AS_DC15L_F","JLTS_Z6"], // 2 - Heavy
	["95th_Backpack_EOD"], // 3 - Engineer
	["95th_Backpack_Medic"], // 4 - Medic
	["3AS_PLX1_F","3AS_RPS6_HP"], // 5 - AT
	[], // 6 - Crewman
	[], // 7 - Pilot
	["3AS_DC15C_F","3AS_DC15C_GL"], // 8 - NCO
	["AUX_95th_BX42"], // 9 - Flame
	["95th_JumpPack"], // 10 - Jet
	["DSS_Cloaking_Device"], // 11 - Stealth
	["JLTS_DC15A_ugl_plastic","JLTS_DC15A_ugl","3AS_WestarM5_GL"], // 12 - Grenadier
	["DSS_Hacking_Device"], // 13 - Tech
	["DSS_Support_Device"] // 14 - Support
];

AUX_95th_Arsenal_Whitelisted_Items = [
    "AUX_95th_DC15L","AUX_95th_BX42","AUX_95th_DC15A_plastic","AUX_95th_DC15A","AUX_95th_DC15A_ugl_plastic", "AUX_95th_DC15A_ugl",
    "AUX_95th_DC15S","AUX_95th_DC15X","AUX_95th_DP23","AUX_95th_DW32S","AUX_95th_Z6","3AS_DC15C_F","3AS_DC15C_GL","3AS_DC17M_F",
    "3AS_MPL_F","3AS_RepublicDatapadRifle","3AS_Valken38X_F","3AS_WestarM5_GL","3AS_WestarM5_F",

    "AUX_95th_DC17SA","ACE_VMH3","ACE_VMM3","ACE_Flashlight_Maglite_ML300L","hgun_esd_01_F","Weap_melee_knife","Knife_m3","Police_Bat",
    "Shovel_Russian","Shovel_Russian_Rotated","UNSC_Knife","UNSC_Knife_reversed","SW_clone_knife","WBK_SciFi_Sword_1","IMS_HL_StunBaton",
    "3AS_DC17STest_F","3AS_RepublicDatapadPistol",

    "3AS_PLX1_F","3AS_RPS6_Base","3AS_RPS6_HP","3AS_RPS6_Guided"
];