params ["_target", "_player", "_bombType"];

private _weaponToAdd = "";
private _magazineToAdd = "";

switch (_bombType) do {
	case "Ammo": {_weaponToAdd = "weapon_GBU12Launcher"; _magazineToAdd = "magazine_Bomb_GBU12_x1"};
	case "Medical": {_weaponToAdd = "NFL_LAAT_Resupply_Launcher"; _magazineToAdd = "NFL_LAAT_Resupply_Launcher_Magazine"};
	case "Explosives": {};
	case "VehicleAmmo": {};
	case "VehicleFuel": {};
};

_target addWeaponTurret [_weaponToAdd, [-1]];
_target addMagazineTurret [_magazineToAdd,[-1]];