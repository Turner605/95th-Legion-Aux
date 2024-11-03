if (!isMultiplayer) exitWith {};

private _version = getText (configFile >> "CfgPatches" >> "AUX_95th_main" >> "versionStr");

if (isServer) then {
	AUX_95th_Extras_Version = _version;
    publicVariable "AUX_95th_Extras_Version";
} else {
    [{!isNil {AUX_95th_Extras_Version}}, {
        params ["_version"];

        private _serverVersion = AUX_95th_Extras_Version;

        if(!(_serverVersion == _version)) then {
            private _errorMsg = format ["Client/Server Version Mismatch. Server: %1, Client: %2.", _serverVersion, _version];

            if (hasInterface) then {
                ["[95th] ERROR", _errorMsg, {findDisplay 46 closeDisplay 0}] call ace_common_fnc_errorMessage;
            };
        };
    }, [_version]] call CBA_fnc_waitUntilAndExecute;
};