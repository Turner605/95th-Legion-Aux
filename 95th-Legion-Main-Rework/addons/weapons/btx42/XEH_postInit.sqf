#include "script_component.hpp"

["ace_firedPlayer", {
	params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];

    if (_magazine == "AUX_95th_BX42_Pyro_AP") then {
        [_projectile] spawn {
            params ["_projectile"]; 
            [_projectile] spawn flameMolotovEH;
        };    
    };

    if (_magazine == "AUX_95th_BX42_Pyro_AT") then {
        [_projectile] spawn {
            params ["_projectile"]; 
            [_projectile] spawn flameIncindieryEH;
            [_projectile] spawn AUX_95th_fnc_handleATPyro;
        };    
    };

}] call CBA_fnc_addEventHandler;