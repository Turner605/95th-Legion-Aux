params ["_spawnedVehicle", "_vehicleClass", "_player"];

private _textureSources = getArray(configFile >> "CfgVehicles" >> _vehicleClass >> "TextureSources" >> "textureList");

if ((count _textureSources) != 0) then {
	private _playerID = getPlayerUID _player;

	if("AUX_95th_"+_playerID in _textureSources) then {
		[_spawnedVehicle, "AUX_95th_"+_playerID, []] call BIS_fnc_initVehicle; 
	};
};