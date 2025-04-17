params ["_keyToGet"];

private _fileName = "_AUX_95th_Server_Variables.fxt";

[_fileName] call dss_fnc_open; 
[_fileName] call dss_fnc_read;

private _readVal = [_fileName, _keyToGet] call dss_fnc_get;

[_fileName] call dss_fnc_close; 

_readVal