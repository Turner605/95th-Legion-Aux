params ["_title", "_description", "_colour", "_playerName"];

[_title, _description, _colour, _playerName] remoteExec ["AUX_95TH_SERVER_fnc_sendAuditLog", 2];