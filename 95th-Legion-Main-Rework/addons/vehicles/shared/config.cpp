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

class CfgFactionClasses { 
    class AUX_95th_Legion_Faction_Vehicles { 
        displayName = "[95th] Vehicles"; 
		scope=2; 
		scopecurator=2;
        priority = 1;
        side = 1;
    };  
};

class CfgEditorCategories{
	class AUX_95th_Civi_Faction_Vehicles{displayName = "[95th] Vehicles";};
	class AUX_95th_Legion_Faction_Vehicles{displayName = "[95th] Vehicles";};
};

class CfgEditorSubcategories {
	class AUX_95th_Civi_Vehicles_Category_Industrial{displayName="Industrial";};
	class AUX_95th_CIS_Air_Category_Transport { displayName="Air (Transport)"; };

	class AUX_95th_Legion_Vehicles_Category_Static{displayName="Static";};
	class AUX_95th_Legion_Vehicles_Category_Ground_Light{displayName="Ground (Light)";};
	class AUX_95th_Legion_Vehicles_Category_Ground_Heavy{displayName="Ground (Heavy)";};
	class AUX_95th_Legion_Vehicles_Category_Air_Gunships{displayName="Air (Gunships)";};
	class AUX_95th_Legion_Vehicles_Category_Air_Fighters{displayName="Air (Fighters)";};
	class AUX_95th_Legion_Vehicles_Category_Air_Logistics{displayName="Air (Logistics)";};
	class AUX_95th_Legion_Vehicles_Category_Air_Drones { displayName="Air (Drones)"; };
	class AUX_95th_Legion_Vehicles_Category_Ground_Drones { displayName="Ground (Drones)"; };

	class AUX_95th_Faction_SeparatistDroids_Category_Ground_APC{displayName="APCs";};
	class AUX_95th_Faction_SeparatistDroids_Category_Ground_Cars{displayName="Cars";};
	class AUX_95th_Faction_SeparatistDroids_Category_Ground_Factories{displayName="Factories";};
};

class CfgFunctions {
    class AUX_95th {
        class Vehicles_Shared {
			file = "\z\AUX_95th\addons\vehicles\shared\functions";
            class handleRhoCrateInit {};
            class handleAirVehicleInit {};
            class handleVehicleStrafe {};
            class handleLAATInit {};
        };
    };
};

class CfgUserActions {
	class AUX_95th_Vehicle_Strafe_Left {
		displayName = "Strafe Left"; 
        tooltip = "Strafe left when in a supported vehicle";
		onActivate = "[player, 'Left'] spawn AUX_95th_fnc_handleVehicleStrafe";
		onDeactivate = "player setVariable ['AUX_95th_Strafing_Active', false, true]; [AUX_95th_Vehicle_Strafe_Handler] call CBA_fnc_removePerFrameHandler;";
	};

    class AUX_95th_Vehicle_Strafe_Right {
		displayName = "Strafe Right"; 
        tooltip = "Strafe right when in a supported vehicle";
		onActivate = "[player, 'Right'] spawn AUX_95th_fnc_handleVehicleStrafe";
		onDeactivate = "player setVariable ['AUX_95th_Strafing_Active', false, true]; [AUX_95th_Vehicle_Strafe_Handler] call CBA_fnc_removePerFrameHandler;";
	};
};

class CfgDefaultKeysPresets {
	class Arma2 {
		class Mappings {
			AUX_95th_Vehicle_Strafe_Left[] = {0x10};
			AUX_95th_Vehicle_Strafe_Right[] = {0x12};
		};
	};
};

class UserActionGroups {
	class AUX_95th_Vehicle_Binds {
		name = "95th - Vehicles";
		isAddon = 1;
		group[] = {"AUX_95th_Vehicle_Strafe_Left", "AUX_95th_Vehicle_Strafe_Right"};
	};
};

#include "CfgEventHandlers.hpp"