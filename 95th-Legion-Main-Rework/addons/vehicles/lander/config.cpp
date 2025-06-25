#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {"AUX_95th_Vehicles_Lander"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_vehicles_shared"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgVehicles {
	class 3AS_Aegis_Shuttle_F;

	class AUX_95th_Vehicles_Lander: 3AS_Aegis_Shuttle_F {
		displayName = "Lander";
		author = "95th Aux Team";
        faction="AUX_95th_Separatist_Army";
        editorCategory="AUX_95th_Separatist_Army";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Helicopters";
        crew="AUX_95th_Droid_B1_Unit_Crew";
		side=0;
	};
};

class CfgFunctions {
    class AUX_95th {
        class Vehicles_Lander {
			file = "\z\AUX_95th\addons\vehicles\lander\functions";
            class handleLanderInit {};
        };
    };
};

class Extended_InitPost_EventHandlers {	
	class AUX_95th_Vehicles_Lander {class AUX_95th_Vehicles_Lander_Init {init="[_this select 0] call AUX_95th_fnc_handleLanderInit;";};};
};

#include "CfgEventHandlers.hpp"