class Extended_PreInit_EventHandlers {
    class ADDON {
        init=QUOTE(call compile preprocessFileLineNumbers '\z\AUX_95th\addons\units\UNIT_NAME\XEH_preInit.sqf');
        serverInit=QUOTE(call compile preprocessFileLineNumbers '\z\AUX_95th\addons\units\UNIT_NAME\XEH_preInit_server.sqf');
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init=QUOTE(call compile preprocessFileLineNumbers '\z\AUX_95th\addons\units\UNIT_NAME\XEH_postInit.sqf');
        clientInit=QUOTE(call compile preprocessFileLineNumbers '\z\AUX_95th\addons\units\UNIT_NAME\XEH_postInit_client.sqf');
    };
};

class Extended_InitPost_EventHandlers {	
    class AUX_95th_Droid_Radar_Jammer_Turret {class AUX_95th_Droid_Radar_Jammer_Turret_Init {onRespawn="true"; serverInit="[_this select 0, 6000] call AUX_95th_fnc_radarJammerInit;";};};
    class AUX_95th_Droid_Radar_Jammer_Turret_3K {class AUX_95th_Droid_Radar_Jammer_Turret_3K_Init {onRespawn="true"; serverInit="[_this select 0, 3000] call AUX_95th_fnc_radarJammerInit;";};};
	
    class AUX_95th_Droid_B1_Shield {class AUX_95th_Droid_B1_Shield_Init {init="[_this select 0] call AUX_95th_fnc_handleB1ShieldInit;";};};
	class AUX_95th_Droid_B1_Turret {class AUX_95th_Droid_B1_Turret_Init {init="[_this select 0] call AUX_95th_fnc_handleB1TurretInit;";};};
	class AUX_95th_Droid_B1_Mortar {class AUX_95th_Droid_B1_Mortar_Init {init="[_this select 0] call AUX_95th_fnc_handleB1MortarInit;";};};

	class AUX_95th_Droid_B2_Unit_Blaster {class AUX_95th_Droid_B2_Unit_Blaster_Init {onRespawn="true"; serverInit="[_this select 0] call AUX_95th_fnc_b2Init;";};};
	class AUX_95th_Droid_B2_Unit_GL {class AUX_95th_Droid_B2_Unit_GL_Init {onRespawn="true"; serverInit="[_this select 0] call AUX_95th_fnc_b2Init;";};};
	class AUX_95th_Droid_B2_Unit_Shotgun {class AUX_95th_Droid_B2_Unit_Shotgun_Init {onRespawn="true"; serverInit="[_this select 0] call AUX_95th_fnc_b2Init;";};};
};