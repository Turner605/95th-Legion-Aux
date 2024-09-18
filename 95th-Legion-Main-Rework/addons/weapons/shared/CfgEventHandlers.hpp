class Extended_PreInit_EventHandlers {
    class ADDON {
        init="call compile preprocessFileLineNumbers '\z\AUX_95th\addons\weapons\shared\XEH_preInit.sqf'";
        serverInit="call compile preprocessFileLineNumbers '\z\AUX_95th\addons\weapons\shared\XEH_preInit_server.sqf'";
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init="call compile preprocessFileLineNumbers '\z\AUX_95th\addons\weapons\shared\XEH_postInit.sqf'";
        clientInit="call compile preprocessFileLineNumbers '\z\AUX_95th\addons\weapons\shared\XEH_postInit_client.sqf'";
    };
};
