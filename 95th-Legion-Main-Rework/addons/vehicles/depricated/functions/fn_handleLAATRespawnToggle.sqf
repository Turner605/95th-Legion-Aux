params ["_laat", "_player"];
private _respawnArray = _laat getVariable "NFL_Respawn_Beacon";

if (!(isNil "_respawnArray")) then {
	if (count _respawnArray == 0) then {
		"Mobile Respawn Enabled" remoteExec ["hint", _player];
		_laat setVariable ["NFL_Respawn_Beacon", [west, _laat, "LAAT"] call BIS_fnc_addRespawnPosition];
	} else {
		"Mobile Respawn Disabled" remoteExec ["hint", _player];
		_respawnArray call BIS_fnc_removeRespawnPosition;
		_laat setVariable ["NFL_Respawn_Beacon", []];
	};
}else{
	"Mobile Respawn Enabled" remoteExec ["hint", _player];
	_laat setVariable ["NFL_Respawn_Beacon", [west, _laat, "LAAT"] call BIS_fnc_addRespawnPosition];
};