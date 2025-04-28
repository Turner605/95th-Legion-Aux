params ["_player"];

private _playerName = (name _player) regexReplace ['"/g', ""];

[
    "Personal Arsenal Used", 
    "Arsenal Opened",
    "10038562",
    _playerName
] spawn AUX_95th_fnc_sendAuditLog;

[_player, _player, true] call ace_arsenal_fnc_openBox;