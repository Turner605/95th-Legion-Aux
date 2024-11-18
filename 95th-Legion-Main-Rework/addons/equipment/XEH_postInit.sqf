#include "script_component.hpp"

["ace_firedPlayer", {
    params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];

    [{(vectorMagnitude (velocity (_this select 6))) < 0.3}, {
        params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];

        // HANDLER: Medical Shield
        private _isMedicalShield = [configFile >> "CfgMagazines" >> _magazine, "NFL_Is_Medical_Shield", 0] call BIS_fnc_returnConfigEntry;

        if (_isMedicalShield == 1) then {
            [_projectile, _unit] spawn AUX_95th_fnc_handleMedicalShield;
        };

    }, [_unit, _weapon, _muzzle, _mode, _ammo, _magazine, _projectile]] call CBA_fnc_waitUntilAndExecute;
}] call CBA_fnc_addEventHandler;

player addEventHandler["Respawn", {
	params ["_unit", "_corpse"];

    // Delete the old deployed turret

	// Reset misc
    deleteVehicle (_unit getVariable "NFL_Turret");
    deleteVehicle (_unit getVariable "NFL_Drone");

	_unit setVariable ["NFL_Turret_Selected", 'Normal'];
    _unit setVariable ["NFL_Turret", objNull, true];
	_unit setVariable ["NFL_Turret_Is_In_Progress", false, true];
	_unit setVariable ["NFL_Turret_Is_On_Cooldown", false, true];

	_unit setVariable ["NFL_Drone_Selected", 'Spotter'];
    _unit setVariable ["NFL_Drone", objNull, true];
	_unit setVariable ["NFL_Drone_Is_In_Progress", false, true];
	_unit setVariable ["NFL_Drone_Is_On_Cooldown", false, true];
}];

["ace_firedPlayer", {
	params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];

    if (_magazine == "95th_Pyro_Grenade") then {

        [_projectile] spawn {
            params ["_projectile"];

            [_projectile] spawn flameIncindieryEH;
        };    
    };
}] call CBA_fnc_addEventHandler;