params ["_target", "_player", "_bombType"];

private _weaponToAdd = "NFL_LAAT_Resupply_Launcher";
private _magazineToAdd = "";

switch (_bombType) do {
	case "Ammo": {_magazineToAdd = "NFL_LAAT_Resupply_Launcher_Magazine_Ammo"};
	case "Medical": {_magazineToAdd = "NFL_LAAT_Resupply_Launcher_Magazine_Medical"};
	case "Explosives": {_magazineToAdd = "NFL_LAAT_Resupply_Launcher_Magazine_Explosives"};
	case "VehicleAmmo": {_magazineToAdd = "NFL_LAAT_Resupply_Launcher_Magazine_VehicleAmmo"};
	case "VehicleFuel": {_magazineToAdd = "NFL_LAAT_Resupply_Launcher_Magazine_VehicleFuel"};
};

_target removeWeaponTurret [_weaponToAdd, [-1]];
_target removeMagazineTurret ["NFL_LAAT_Resupply_Launcher_Magazine_Ammo", [-1]];
_target removeMagazineTurret ["NFL_LAAT_Resupply_Launcher_Magazine_Medical", [-1]];
_target removeMagazineTurret ["NFL_LAAT_Resupply_Launcher_Magazine_Explosives", [-1]];
_target removeMagazineTurret ["NFL_LAAT_Resupply_Launcher_Magazine_VehicleAmmo", [-1]];
_target removeMagazineTurret ["NFL_LAAT_Resupply_Launcher_Magazine_VehicleFuel", [-1]];

_target addWeaponTurret [_weaponToAdd, [-1]];
_target addMagazineTurret [_magazineToAdd,[-1]];