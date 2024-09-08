#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {"AUX_95th_Vehicles_Bulldozer"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_vehicles_shared", "A3_Soft_F"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgVehicles {
	class C_IDAP_UGV_01_F;

	class AUX_95th_Vehicles_Bulldozer: C_IDAP_UGV_01_F {
		displayName = "Bulldozer";
		author = "95th Aux Team";
		editorCategory="AUX_95th_Legion_Faction_Vehicles";
		editorSubcategory="AUX_95th_Civi_Vehicles_Category_Industrial";
	};
};

class CfgFunctions {
    class AUX_95th {
        class Vehicles_Bulldozer {
			file = "\z\AUX_95th\addons\vehicles\bulldozer\functions";
            class handleBulldozerInit {};
        };
    };
};

class Extended_InitPost_EventHandlers {	
	class AUX_95th_Vehicles_Bulldozer {class AUX_95th_Vehicles_Bulldozer_Init {init="[_this select 0] call AUX_95th_fnc_handleBulldozerInit;";};};
};

#include "CfgEventHandlers.hpp"