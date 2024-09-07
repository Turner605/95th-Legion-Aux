#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {"AUX_95th_Vehicles_Excavator"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_vehicles_shared", "A3_Soft_F"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgVehicles {
	class C_IDAP_UGV_01_F;

	class AUX_95th_Vehicles_Excavator: C_IDAP_UGV_01_F {
		displayName = "Excavator";
		author = "95th Aux Team";
		editorCategory="AUX_95th_Legion_Faction_Vehicles";
		editorSubcategory="AUX_95th_Civi_Vehicles_Category_Industrial";
	};
};

class CfgFunctions {
    class AUX_95th {
        class Vehicles {
			file = "\z\AUX_95th\addons\vehicles\excavator\functions";
            class handleExcavatorInit {};
        };
    };
};

class Extended_InitPost_EventHandlers {	
	class AUX_95th_Vehicles_Excavator {class AUX_95th_Vehicles_Excavator_Init {init="[_this select 0] call AUX_95th_fnc_handleExcavatorInit;";};};
};

#include "CfgEventHandlers.hpp"