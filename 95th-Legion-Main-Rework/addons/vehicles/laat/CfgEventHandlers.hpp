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

class Extended_init_EventHandlers {
    class AUX_95th_LAAT_Mrk1 {class AUX_95th_LAAT_Mrk1_Init {init = "(_this) spawn AUX_95th_fnc_handleLAATInit;";};};
    class AUX_95th_LAAT_Mrk2 {class AUX_95th_LAAT_Mrk2_Init {init = "(_this) spawn AUX_95th_fnc_handleLAATInit;";};};
    class AUX_95th_LAAT_Mrk2_Lights {class AUX_95th_LAAT_Mrk2_Lights_Init {init = "(_this) spawn AUX_95th_fnc_handleLAATInit;";};};
};
