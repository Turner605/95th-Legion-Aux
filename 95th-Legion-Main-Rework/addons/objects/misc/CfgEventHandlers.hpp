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
	class AUX_95th_Misc_Motion_Sensor {class AUX_95th_Misc_Motion_Sensor_Init {init = "[_this select 0] call AUX_95th_fnc_motionSensorInit;";};};
	class AUX_95th_Misc_Shield_Generator {class AUX_95th_Misc_Shield_Generator_Init {init = "[_this select 0] call AUX_95th_fnc_shieldGeneratorInit;";};};
	class AUX_95th_Misc_Reinsert_Requester {class AUX_95th_Misc_Reinsert_Requester_Init {init = "[_this select 0] call AUX_95th_fnc_reinsertRequesterInit;";};};
	class AUX_95th_Misc_Radio_Extender {class AUX_95th_Misc_Radio_Extender_Init {init = "[_this select 0,50000] call tfar_antennas_fnc_initRadioTower";};};
};

class Extended_Deleted_EventHandlers {
	class AUX_95th_Misc_Radio_Extender {AUX_95th_Misc_Motion_Sensor_Init = "(_this param [0,_this]) call tfar_antennas_fnc_deleteRadioTower";};
};