params ["_spawnedVehicle", "_vehicleClass", "_player"];

private _playerID = getPlayerUID _player;

switch (_vehicleClass) do {
	case "AUX_95th_LAAT_Mrk1"; case "AUX_95th_LAAT_Mrk2"; case "AUX_95th_LAAT_Mrk2_Lights": {
		switch (_playerID) do {
			case "76561198051916304": { [_spawnedVehicle, "Jinter", []] call BIS_fnc_initVehicle; };
			case "76561198820607430": { [_spawnedVehicle, "Chip", []] call BIS_fnc_initVehicle; };
			case "76561198060130630": { [_spawnedVehicle, "Styx", []] call BIS_fnc_initVehicle; };
		};
	};

	case "AUX_95th_ATTE": {
		switch (_playerID) do {
			case "76561198065789267": { [_spawnedVehicle, "Kong", []] call BIS_fnc_initVehicle; };
		};
	};
};
