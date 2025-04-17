#include "script_component.hpp"
// needs checks for headless clients
if (!isServer) exitWith {};

private _timeJoinedMap = createHashMapFromArray [["BOOTTIME", serverTime]];
private _timePlayedMap = createHashMapFromArray [["BOOTTIME", serverTime]];

missionNamespace setVariable ["AUX_95th_Time_Joined", _timeJoinedMap, true];
missionNamespace setVariable ["AUX_95th_Time_Played", _timeJoinedMap, true];

addMissionEventHandler ["PlayerConnected", {
    params ["_id", "_uid", "_name", "_jip", "_owner", "_idstr"];

    private _timeJoinedMap = missionNamespace getVariable "AUX_95th_Time_Joined";
    _timeJoinedMap set [_uid, serverTime];
}];

addMissionEventHandler ["PlayerDisconnected", {
    params ["_id", "_uid", "_name", "_jip", "_owner", "_idstr"];

    private _timeJoinedMap = missionNamespace getVariable "AUX_95th_Time_Joined";
    private _timePlayedMap = missionNamespace getVariable "AUX_95th_Time_Played";

    private _lastTimeJoined = (_timeJoinedMap get _uid);
    private _timePlayed = (serverTime - _lastTimeJoined);

    private _priorTimePlayed = (_timePlayedMap getOrDefault [_uid, 0]);
    _timePlayedMap set [_uid, (_priorTimePlayed + _timePlayed)];
}]; 

addMissionEventHandler ["MPEnded", {
    private _timePlayedMap = missionNamespace getVariable "AUX_95th_Time_Played";

    private _playerCount = count _timePlayedMap;

    private _mappedResult = '';

    {
        private _jsonObjectString = '{' + (['\"' + _x + '\"', _y] joinString ":") + '}';

        if((_forEachIndex+1) < _playerCount) then {
            _mappedResult = _mappedResult + _jsonObjectString + ',';
        } else {
            _mappedResult = _mappedResult + _jsonObjectString;
        };

    } forEach _timePlayedMap;

    private _systemTime = systemTimeUTC;
    private _dateString = ([_systemTime select 2, _systemTime select 1, _systemTime select 0] joinString ".");
    private _contentString = '{"content": "' + _dateString + ' Attendance: ' + '[' +_mappedResult + ']' + '"}';
    private _auditLoggingWebhook = (["AuditLoggingWebhook"] call DSS_fnc_getServerVariable);

    if(_playerCount > 4) then {
        "daa" callExtension ["post", [
            "AttendanceTracking", 
            _auditLoggingWebhook,
            _contentString,
            "content-type:application/json" 
        ]];
    };
}];

// 28 players per diag_log
// diag_log ["AUX_95th_Time_Played: ", _timePlayedMap];
// private _path = "a3\functions_f_mp_mark\revive\_addaction_revive.inc";
// if (fileExists _path) then { loadFile _path } else { diag_log format ["File (%1) does not exist!", _path] };
