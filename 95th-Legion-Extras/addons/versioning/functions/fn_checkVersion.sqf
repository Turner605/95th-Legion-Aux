if (!isMultiplayer) exitWith {};

private _version = getText (configFile >> "CfgPatches" >> "AUX_95th_Extras_main" >> "versionStr");

if (isServer) then {
	AUX_95th_Extras_Version = _version;
    publicVariable "AUX_95th_Extras_Version";
} else {
    [{!isNil {AUX_95th_Extras_Version}}, {
        params ["_version"];

        private _serverVersion = AUX_95th_Extras_Version;

        if(!(_serverVersion == _version)) then {
            private _errorMsg = format ["Client/Server Version Mismatch. Server: %1, Client: %2. Please update 95th Extras.", _serverVersion, _version];

            if (hasInterface) then {
                ["[95th] ERROR", _errorMsg, {findDisplay 46 closeDisplay 0}] call ace_common_fnc_errorMessage;
            };
        };

        if(AUX_95th_Enable_Addon_Checker) then {
            [] call AUX_95th_Extras_fnc_checkAddons;
        };
        
    }, [_version]] call CBA_fnc_waitUntilAndExecute;
};