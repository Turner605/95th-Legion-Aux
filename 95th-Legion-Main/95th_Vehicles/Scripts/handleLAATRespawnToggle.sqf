params ["_this", "_player"];
private _respawnArray = _this getVariable "NFL_Respawn_Beacon";

if (!(isnil "_respawnArray")) then {
	if (count _respawnArray == 0) then {
		"Mobile Respawn Enabled" remoteExec ["hint", _player];
		_this setVariable ["NFL_Respawn_Beacon", [west, _this, "LAAT"] call BIS_fnc_addRespawnPosition];
	} else {
		"Mobile Respawn Disabled" remoteExec ["hint", _player];
		_respawnArray call BIS_fnc_removeRespawnPosition;
		_this setVariable ["NFL_Respawn_Beacon", []];
	};
}else{
	"Mobile Respawn Enabled" remoteExec ["hint", _player];
	_this setVariable ["NFL_Respawn_Beacon", [west, _this, "LAAT"] call BIS_fnc_addRespawnPosition];
};