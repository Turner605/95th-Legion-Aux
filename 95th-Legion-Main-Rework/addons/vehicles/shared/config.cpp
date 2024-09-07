#include "script_component.hpp"

class CfgPatches {
    class AUX_95th_vehicles_shared {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			"AUX_95th_main",
			"JLTS_characters_CloneArmor",
			"3as_Backpacks"
		};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgEditorCategories{
	class AUX_95th_Civi_Faction_Vehicles{displayName = "[95th] Vehicles";};
};

class CfgEditorSubcategories {
	class AUX_95th_Civi_Vehicles_Category_Industrial{displayName="Industrial";};
	class AUX_95th_CIS_Air_Category_Transport { displayName="Air (Transport)"; };
};

class CfgFunctions {
    class AUX_95th {
        class players_vehicles {
			file = "\z\AUX_95th\addons\vehicles\shared\functions";
            class handleRhoCrateInit {};
            class handleAirVehicleInit {};
        };
    };
};

#include "CfgEventHandlers.hpp"