class Extended_PreInit_EventHandlers {
    class ADDON {
        init=QUOTE(call compile preprocessFileLineNumbers '\z\AUX_95th\addons\vehicles\VEHICLE_NAME\XEH_preInit.sqf');
        serverInit=QUOTE(call compile preprocessFileLineNumbers '\z\AUX_95th\addons\vehicles\VEHICLE_NAME\XEH_preInit_server.sqf');
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init=QUOTE(call compile preprocessFileLineNumbers '\z\AUX_95th\addons\vehicles\VEHICLE_NAME\XEH_postInit.sqf');
        clientInit=QUOTE(call compile preprocessFileLineNumbers '\z\AUX_95th\addons\vehicles\VEHICLE_NAME\XEH_postInit_client.sqf');
    };
};

class Extended_InitPost_EventHandlers {	
	class AUX_95th_TX_130_Shield {class AUX_95th_TX_130_Shield_Init {onRespawn="true";serverInit="[_this select 0] call AUX_95th_fnc_handleTXShieldInit;";};};
	class AUX_95th_Command_Outpost {class AUX_95th_Command_Outpost_Init {serverInit="[_this select 0] call AUX_95th_fnc_handleCommandOutpostInit;";};};
};

class Extended_init_EventHandlers {
	class AUX_95th_ATRT {class AUX_95th_ATRT_Init {init = "(_this) spawn AUX_95th_fnc_handleATRTInit;";};};
};

class Extended_Deleted_EventHandlers {
	class AUX_95th_Command_Outpost {AUX_95th_Command_Outpost_Init = "(_this param [0,_this]) call tfar_antennas_fnc_deleteRadioTower";};
};