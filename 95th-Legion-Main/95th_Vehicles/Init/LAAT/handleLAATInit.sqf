params ["_vehicle"];

[_vehicle] spawn ls_vehicle_fnc_ImpulsorMonitor;

_vehicle addEventHandler["Fired", {
	params ["_vehicle", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];

    if (_weapon == "NFL_LAAT_Resupply_Launcher") then {
        private _detPos = 0;

        [{
            params["_vehicle"];

            _vehicle removeWeaponTurret ["NFL_LAAT_Resupply_Launcher", [-1]];
            _vehicle removeMagazineTurret ["NFL_LAAT_Resupply_Launcher_Magazine_Ammo", [-1]];
            _vehicle removeMagazineTurret ["NFL_LAAT_Resupply_Launcher_Magazine_Medical", [-1]];
            _vehicle removeMagazineTurret ["NFL_LAAT_Resupply_Launcher_Magazine_Explosives", [-1]];
            _vehicle removeMagazineTurret ["NFL_LAAT_Resupply_Launcher_Magazine_VehicleAmmo", [-1]];
            _vehicle removeMagazineTurret ["NFL_LAAT_Resupply_Launcher_Magazine_VehicleFuel", [-1]];

        }, [_vehicle], 1] call CBA_fnc_waitAndExecute;

        while {alive _projectile} do {
            _detPos = getPosAtl _projectile;
        };

        [_detPos, _magazine] spawn NFA_fnc_handleResupplyBombDetonated;
    };
}];