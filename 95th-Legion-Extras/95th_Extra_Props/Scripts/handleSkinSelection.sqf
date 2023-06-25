params ["_spawnedVehicle", "_player"];

private _playerID = getPlayerUID _player;

switch (_playerID) do {
	case "76561198051916304": { [_spawnedVehicle, "Jinter", []] call BIS_fnc_initVehicle; };
	case "76561198820607430": { [_spawnedVehicle, "Chip", []] call BIS_fnc_initVehicle; };
};