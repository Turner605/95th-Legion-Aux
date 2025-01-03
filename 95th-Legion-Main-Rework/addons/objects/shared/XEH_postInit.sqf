#include "script_component.hpp"

player addEventHandler["Respawn", {
	params ["_unit", "_corpse"];

    [_unit] spawn {
        params ["_unit"];
        _unit setVariable ["IsOnAirRespawnCooldown", true, true];
        private _airRespawnCooldown = time + 60;
        waitUntil {time >= _airRespawnCooldown};
        _unit setVariable ["IsOnAirRespawnCooldown", false, true];
    }
}];