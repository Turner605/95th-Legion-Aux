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
	class AUX_95th_Crate_Full_Arsenal {class AUX_95th_Crate_Full_Arsenal_Init {init = "[_this select 0, true] call ace_arsenal_fnc_initBox;";};};
	class AUX_95th_Crate_Restricted_Arsenal {class AUX_95th_Crate_Restricted_Arsenal_Init {init = "[_this select 0, AUX_95th_Arsenal_Whitelisted_All] call ace_arsenal_fnc_initBox;";};};
	class AUX_95th_Crate_Inverted_Arsenal {class AUX_95th_Crate_Inverted_Arsenal_Init {init = "[_this select 0] call AUX_95th_fnc_invertedArsenalInit;";};};
    class AUX_95th_Misc_Arsenal_Full {class AUX_95th_Misc_Arsenal_Full_Init {init = "[_this select 0, true] call ace_arsenal_fnc_initBox;";};};
	class AUX_95th_Misc_Arsenal_Restricted {class AUX_95th_Misc_Arsenal_Restricted_Init {init = "[_this select 0, AUX_95th_Arsenal_Whitelisted_All] call ace_arsenal_fnc_initBox;";};};
};
