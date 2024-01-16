
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

["NF_player_connect", "onPlayerConnected", {
    NFA_Player_Connected_At = time; 
}] call BIS_fnc_addStackedEventHandler;

["NF_player_disconnect", "onPlayerDisconnected", {
    private _currentPlaytimeList = missionNamespace getVariable "NFA_Play_Time_List";
    private _playerTimeListMap;
    
    private _playTime = time - NFA_Player_Connected_At;

    if(isNil _currentPlaytimeList) then {
        _playerTimeListMap = createHashMap;
        _playerTimeListMap set [_uid, _playTime];
	}else{
        _playerTimeListMap set [_uid, _playTime];
    };

    missionNamespace setVariable ["NFA_Play_Time_List", _playerTimeListMap, true];
}] call BIS_fnc_addStackedEventHandler;

// addMissionEventHandler ["HandleDisconnect", {
// 	params ["_unit", "_id", "_uid", "_name"];
// 	["knd_Headlamp_Disconnect",[_unit]] call CBA_fnc_globalEvent;	   
// }];