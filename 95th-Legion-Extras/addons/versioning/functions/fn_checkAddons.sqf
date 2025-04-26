if (!isMultiplayer) exitWith {};
if (isServer) exitWith {};
if ([] call BIS_fnc_admin == 2) exitWith {};

[{!isNil {AUX_95th_Extras_Version}}, {
    private _serverMods = [
        '1224892496', '1355481562', '1360626473', '1393068220',
        '1638341685', '1732309539', '1779063631', '1804716719',
        '1858075458', '1916062371', '1940589429', '1981964169',
        '2020940806', '2058554822', '2162749089', '2198339170',
        '2215872933', '2224207686', '2244165431', '2291129343',
        '2320596778', '2323185592', '2387297579', '2447965207',
        '2567352444', '2570364609', '2572487482', '2596570203',
        '2631999150', '2641295901', '2713763060', '2789152015',
        '2791403093', '2794721649', '2885476184', '2916205677',
        '2917437034', '2918542818', '2947655994', '2948206530',
        '2954535667', '2967119323', '2981582086', '3020755032',
        '3020930712', '3053169823', '3125077789', '3125283802',
        '3452896561', '450814997',  '463939057',  '570118882',
        '583496184',  '583544987',  '623475643',  '632435682',
        '708665067',  '766491311',  '769440155',  '782415569',
        '820924072',  '837729515',  '894678801',  '925018569'
    ];

    private _permittedClientsides = [
        '2480263219', // Enhanced GPS
        '2467589125', // Enhanced Map
        '2586652540', // Kill Confirmed
        '2095827925', // Brighter Flares
        '772802287', // Atlas Hitmarkers
        '825179978', // Enhanced Soundscape
        '2006076771', // Custom Third Person Camera View
        '1841047025', // Prone Launchers
        '2513044572', // Fawks' Enhanced NVGs
        '2041057379', // A3 Thermal Improvement
        '2092900437', // Ragdoll On Command
        '1317053909', // Tactical weapon swap
        '1911374016', // ACE Vehicle Medical
        '2041057379', // A3 Thermal Improvement
        '3212172319', // Turret Enhanced Plus (Marbit Edit)
        '1799993760' // Customized Thermal - Proof of Concept
    ];

    private _permittedNames = [
        "Orzel's Drive Yards",
        "@Custom Third Person Camera View",
        "@Customized Thermal - Proof of Concept"
    ];

    private _notPermittedMods = [];

    {
        _x params ["_modname", "_modDir", "_isDefault", "_isOfficial", "_origin", "_hash", "_hashShort", "_itemID"];

        if(!_isOfficial) then {
            if(!(_itemID in _serverMods)) then {
                if(!(_itemID in _permittedClientsides)) then {
                    if(!(_modname in _permittedNames)) then {
                        _notPermittedMods pushBack _modname;
                    };
                };
            };
        };
    } forEach getLoadedModsInfo;

    if((count _notPermittedMods) > 0) then {
        private _modList = format ["Mods: %1", (str _notPermittedMods)];
        private _errorMsg = "You are running mods that are not permitted, Please remove them or contact Turner for approval " + _modList;
        private _playerName = (name player);

        private _playerNameFormatted = ((_playerName regexReplace ['"/gio', '']) regexReplace ["'/gio", ""]);
        private _modListFormatted = ((_modList regexReplace ['"/gio', '']) regexReplace ["'/gio", ""]);

        if(AUX_95th_AuditLogging_Unauthorized_Mods) then {
            [
                "Unauthorized Mods Attempt", 
                _modListFormatted,
                "16383844",
                _playerNameFormatted
            ] spawn AUX_95th_fnc_sendAuditLog;
        } else {
            [[_playerName, _modList], {
                params ["_playerName", "_modList"];
                systemChat (_playerName + " Tried to connect with " + _modList);
            }] remoteExec ["call", allCurators];
        };

        if (hasInterface) then {
            ["[95th] ERROR", _errorMsg, {findDisplay 46 closeDisplay 0}] call ace_common_fnc_errorMessage;
        };
    };
}, []] call CBA_fnc_waitUntilAndExecute;
