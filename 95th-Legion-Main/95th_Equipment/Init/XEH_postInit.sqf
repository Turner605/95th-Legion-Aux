["ace_firedPlayer", {
    params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];

    [{(vectorMagnitude (velocity (_this select 6))) < 0.3}, {
        params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];

        // HANDLER: Medical Shield
        private _isMedicalShield = [configFile >> "CfgMagazines" >> _magazine, "NFL_Is_Medical_Shield", 0] call BIS_fnc_returnConfigEntry;

        if (_isMedicalShield == 1) then {
            [_projectile, _unit] spawn NFA_fnc_handleMedicalShield;
        };

    }, [_unit, _weapon, _muzzle, _mode, _ammo, _magazine, _projectile]] call CBA_fnc_waitUntilAndExecute;
}] call CBA_fnc_addEventHandler;