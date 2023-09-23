["ace_firedPlayer", {
	params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];

    if (_magazine == "95th_Pyro_Grenade") then {

        [_projectile] spawn {
            params ["_projectile"];

            [_projectile] spawn flameIncindieryEH;
        };    
    };
}] call CBA_fnc_addEventHandler;