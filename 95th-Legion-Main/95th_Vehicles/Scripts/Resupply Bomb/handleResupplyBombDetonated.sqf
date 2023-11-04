params ["_detPos", "_magazine"];

private _supplyBox = "";

switch (_magazine) do {
	case "NFL_LAAT_Resupply_Launcher_Magazine_Ammo": {_supplyBox = "95th_Supply_Large_Ammo_Prop";};
	case "NFL_LAAT_Resupply_Launcher_Magazine_Medical": {_supplyBox = "95th_Supply_Large_Medical_Prop";};
	case "NFL_LAAT_Resupply_Launcher_Magazine_Explosives": {_supplyBox = "95th_Supply_Large_Black_Prop";};
	case "NFL_LAAT_Resupply_Launcher_Magazine_VehicleAmmo": {_supplyBox = "95th_Supply_Large_Blue_Prop";};
	case "NFL_LAAT_Resupply_Launcher_Magazine_VehicleFuel": {_supplyBox = "95th_Supply_Large_Red_Prop";};
};

private _resupply = (_supplyBox createVehicle _detPos);
private _smoke = ("SmokeShellBlue" createVehicle _detPos);