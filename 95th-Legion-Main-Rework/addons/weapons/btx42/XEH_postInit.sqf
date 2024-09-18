#include "script_component.hpp"

["ace_firedPlayer", {
	params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];

    if (_magazine == "AUX_95th_BX42_Pyro") then {

        [_projectile] spawn {
            params ["_projectile"];

            [_projectile] spawn flameMolotovEH; 
            //[_projectile] spawn flameIncindieryUGLEH; 
        };    
    };
}] call CBA_fnc_addEventHandler;