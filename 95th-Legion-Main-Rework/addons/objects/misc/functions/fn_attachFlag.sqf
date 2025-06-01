params ["_player", "_flagName"];

[_player] call AUX_95th_fnc_removeFlag;

private _flag = "FlagPole_F" createVehicle [0,0,0];
_flag hideObjectGlobal true;

_flag setFlagTexture "\z\AUX_95th\addons\objects\misc\data\" + _flagName + ".paa"; 
_flag setFlagSide west;
_flag setFlagOwner _player;
 
_player setVariable ["AUX_95th_Attached_Flag", _flag];