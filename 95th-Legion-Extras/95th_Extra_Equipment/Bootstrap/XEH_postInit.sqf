["ace_firedPlayer", {
	params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];
    
    // Flashbang event handler
    if (_weapon == "Throw") then {
        switch (_magazine) do {
            case "95th_Concussion_Grenade": { 
                [_projectile] spawn ninefiveth_fnc_flashThrown;
            };
        };
    };
}] call CBA_fnc_addEventHandler;
