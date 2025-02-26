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
	class AUX_95th_Droid_B1_Shield {class AUX_95th_Droid_B1_Shield_Init {init="[_this select 0] call AUX_95th_fnc_handleB1ShieldInit;";};};
	class AUX_95th_Droid_B1_Turret {class AUX_95th_Droid_B1_Turret_Init {init="[_this select 0] call AUX_95th_fnc_handleB1TurretInit;";};};
};