params ["_vehicle"];

[_vehicle] spawn AUX_95th_fnc_toggleEmbarkLights;
[_vehicle] spawn AUX_95th_fnc_toggleEmbarkLights;

if (!isServer) exitWith {};

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

        [_vehicle, _projectile, _magazine] spawn AUX_95th_fnc_handleResupplyBombDetonated;
    };
}];

_vehicle addEventHandler ["Killed", {
	params ["_unit", "_killer"];
    private _lightAttached = _unit getVariable ["AUX_95th_Embark_Light_Attached", Objnull];
    if(!isNull _lightAttached) then {deleteVehicle _lightAttached;};
}];

_vehicle addEventHandler ["Deleted", {
	params ["_entity"];
    private _lightAttached = _entity getVariable ["AUX_95th_Embark_Light_Attached", Objnull];
    if(!isNull _lightAttached) then {deleteVehicle _lightAttached;};
}];