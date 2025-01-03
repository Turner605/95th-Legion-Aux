class Extended_PreInit_EventHandlers {
    class ADDON {
        init=QUOTE(call compile preprocessFileLineNumbers '\z\AUX_95th\addons\objects\OBJECT_NAME\XEH_preInit.sqf');
        serverInit=QUOTE(call compile preprocessFileLineNumbers '\z\AUX_95th\addons\objects\OBJECT_NAME\XEH_preInit_server.sqf');
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init=QUOTE(call compile preprocessFileLineNumbers '\z\AUX_95th\addons\objects\OBJECT_NAME\XEH_postInit.sqf');
        clientInit=QUOTE(call compile preprocessFileLineNumbers '\z\AUX_95th\addons\objects\OBJECT_NAME\XEH_postInit_client.sqf');
    };
};

class Extended_InitPost_EventHandlers {
	class AUX_95th_Droid_Factory_Terminal {class AUX_95th_Droid_Factory_Terminal_Init {init = "[_this select 0] call AUX_95th_fnc_droidFactoryTerminalInit;";};};
	class AUX_95th_Ground_Factory {class AUX_95th_Ground_Factory_Init {init = "[_this select 0] call AUX_95th_fnc_droidFactoryInit;";};};
	class AUX_95th_Flak_Factory {class AUX_95th_Flak_Factory_Init {init = "[_this select 0] call AUX_95th_fnc_droidFlakFactoryInit;";};};
};
