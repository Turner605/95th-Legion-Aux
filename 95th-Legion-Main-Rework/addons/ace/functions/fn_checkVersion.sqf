#include "script_component.hpp"

if (isMultiplayer) then {
    private _version = getText (configFile >> "CfgPatches" >> "AUX_95th_main" >> "versionStr");

    // don't check optional addons
    // _addons = _addons select {getNumber (configFile >> "CfgPatches" >> _x >> "ACE_isOptional") != 1};

    if (isServer) then {
        // send servers version of ACE to all clients
        GVAR(ServerVersion) = _version;
        // GVAR(ServerAddons) = _addons;
        publicVariable QGVAR(ServerVersion);
        // publicVariable QGVAR(ServerAddons);
    } else {
        // clients have to wait for the variables
        [{
            if (isNil QGVAR(ServerVersion)) exitWith {}; //  || isNil QGVAR(ServerAddons)

            (_this select 0) params ["_version", "_addons"];

            if (_version != GVAR(ServerVersion)) then {
                private _errorMsg = format ["Client/Server Version Mismatch. Server: %1, Client: %2.", GVAR(ServerVersion), _version];

                ERROR(_errorMsg);

                if (hasInterface) then {
                    ["[95th] ERROR", _errorMsg, {findDisplay 46 closeDisplay 0}] call FUNC(errorMessage);
                };
            };

            // _addons = _addons - GVAR(ServerAddons);
            // if (_addons isNotEqualTo []) then {
            //     private _errorMsg = format ["Client/Server Addon Mismatch. Client has extra addons: %1.",_addons];

            //     ERROR(_errorMsg);

            //     if (hasInterface) then {
            //         ["[ACE] ERROR", _errorMsg, {findDisplay 46 closeDisplay 0}] call FUNC(errorMessage);
            //     };
            // };

            [_this select 1] call CBA_fnc_removePerFrameHandler;
        }, 1, [_version,_addons]] call CBA_fnc_addPerFrameHandler;
    };
};