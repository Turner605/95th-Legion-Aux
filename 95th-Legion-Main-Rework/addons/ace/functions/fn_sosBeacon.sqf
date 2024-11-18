params ["_unit"];

private _playerID = getPlayerUID _unit;
private _daytime = [dayTime] call BIS_fnc_timeToString;

deleteMarker _playerID;

createMarker [_playerID, _unit];
_playerID setMarkerTypeLocal "hd_flag";
_playerID setMarkerTextLocal "SOS Beacon: " + _daytime;
_playerID setMarkerColor "ColorBlack";

[[_playerID], {
	params ["_playerID"];

    systemChat "SOS Beacon Activated";
}] remoteExec ["call", 0, true];


private _airborneGroup = missionNamespace getVariable "AUX_95th_Airborne_Group";

if (!(isNil "_airborneGroup")) then {
    [[_name], {
        params ["_name"];
        1 cutText ["<t color='#ffffff' size='1'>SOS Beacon Acivated" + ".</t>", "PLAIN", 2, true, true, true];
    }] remoteExec ["call", _airborneGroup];
};

[{
    params ["_playerID"];

    deleteMarker _playerID;
}, [_playerID], 240 ] call CBA_fnc_waitAndExecute;
