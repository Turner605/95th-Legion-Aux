#include "script_component.hpp"

["ace_firedPlayer", {
    params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];

    if(AUX_95th_AuditLogging_Grenades_Thrown) then {
        if(_weapon == "Throw") then {
            private _grenadeType = [configFile >> "CfgMagazines" >> _magazine, "displayName", "Unknown"] call BIS_fnc_returnConfigEntry;
            private _playerName = (name _unit) regexReplace ['"/g', ""];

            [
                "Grenade Thrown", 
                "Grenade Type: "+_grenadeType,
                "16383844",
                _playerName
            ] spawn AUX_95th_fnc_sendAuditLog;
        };
    };

}] call CBA_fnc_addEventHandler;