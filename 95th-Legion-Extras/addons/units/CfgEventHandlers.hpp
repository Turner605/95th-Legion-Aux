class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preStart));
    };
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
        serverInit = QUOTE(call COMPILE_FILE(XEH_preInit_server));
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_postInit));
        clientInit = QUOTE(call COMPILE_FILE(XEH_postInit_client));
    };
};

class Extended_InitPost_EventHandlers {	
    class AUX_95th_Droid_Radar_Jammer_Turret {class AUX_95th_Droid_Radar_Jammer_Turret_Init {onRespawn="true"; serverInit="[_this select 0, 6000] call AUX_95th_Extras_fnc_radarJammerInit;";};};
    class AUX_95th_Droid_Radar_Jammer_Turret_3K {class AUX_95th_Droid_Radar_Jammer_Turret_3K_Init {onRespawn="true"; serverInit="[_this select 0, 3000] call AUX_95th_Extras_fnc_radarJammerInit;";};};
	
    class AUX_95th_Droid_B1_Shield {class AUX_95th_Droid_B1_Shield_Init {init="[_this select 0] call AUX_95th_Extras_fnc_handleB1ShieldInit;";};};
	class AUX_95th_Droid_B1_Turret {class AUX_95th_Droid_B1_Turret_Init {init="[_this select 0] call AUX_95th_Extras_fnc_handleB1TurretInit;";};};
	class AUX_95th_Droid_B1_Mortar {class AUX_95th_Droid_B1_Mortar_Init {init="[_this select 0] call AUX_95th_Extras_fnc_handleB1MortarInit;";};};
};