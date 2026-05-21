#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {"AUX_95th_LAS_F", "AUX_95th_LAS_Z6_F"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_vehicles_shared"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class ls_impulsor_base;

class CfgVehicles {
	class 3AS_Rep_LAS_F;
	class 3AS_Rep_LAS_Z6_F;

	class AUX_95th_LAS_F: 3AS_Rep_LAS_F {
		author = "95th Aux Team";
		tas_can_impulse=0;
		class ls_impulsor: ls_impulsor_base {
			enabled = 1;
			speed = 400;
			fuelDrain = 0.0001;
			overchargeSpeed = 800;
			overchargeCooldown = 60;
        };
		crew = "AUX_95th_Unit_P1_Basic_Trooper";
		typicalCargo[] = {"AUX_95th_Unit_P1_Basic_Trooper"};
		faction="AUX_95th_Legion_Faction_Vehicles";
		editorSubcategory="AUX_95th_Legion_Vehicles_Category_Air_Fighters";
		displayName = "LAS (Transport)";
		hiddenSelectionsTextures[] = {
			"\z\AUX_95th\addons\vehicles\las\data\Default\Exterior.paa",
			"\z\AUX_95th\addons\vehicles\las\data\Default\Interior.paa",
			"\z\AUX_95th\addons\vehicles\las\data\Default\Wings.paa"
		};
		class TextureSources {
			class Default {
				displayName = "Default";
				author = "95th Aux Team";
				textures[] = {
					"\z\AUX_95th\addons\vehicles\las\data\Default\Exterior.paa",
					"\z\AUX_95th\addons\vehicles\las\data\Default\Interior.paa",
					"\z\AUX_95th\addons\vehicles\las\data\Default\Wings.paa"
				};
				factions[] = {"AUX_95th_Legion_Faction_Vehicles"};
			};
		};
	};

	class AUX_95th_LAS_Z6_F: 3AS_Rep_LAS_Z6_F {
		author = "95th Aux Team";
		tas_can_impulse=0;
		class ls_impulsor: ls_impulsor_base {
			enabled = 1;
			speed = 400;
			fuelDrain = 0.0001;
			overchargeSpeed = 800;
			overchargeCooldown = 60;
        };
		crew = "AUX_95th_Unit_P1_Basic_Trooper";
		typicalCargo[] = {"AUX_95th_Unit_P1_Basic_Trooper"};
		faction="AUX_95th_Legion_Faction_Vehicles";
		editorSubcategory="AUX_95th_Legion_Vehicles_Category_Air_Fighters";
		displayName = "LAS (Side Gunners)";
		hiddenselectionstextures[] = {
			"\z\AUX_95th\addons\vehicles\las\data\Default\Exterior.paa",
			"\z\AUX_95th\addons\vehicles\las\data\Default\Interior.paa",
			"\z\AUX_95th\addons\vehicles\las\data\Default\Wings.paa"
		};
		class TextureSources {
			class Default {
				displayName = "Default";
				author = "95th Aux Team";
				textures[] = {
					"\z\AUX_95th\addons\vehicles\las\data\Default\Exterior.paa",
					"\z\AUX_95th\addons\vehicles\las\data\Default\Interior.paa",
					"\z\AUX_95th\addons\vehicles\las\data\Default\Wings.paa"
				};
				factions[] = {"AUX_95th_Legion_Faction_Vehicles"};
			};
		};
	};
};

class Extended_init_EventHandlers {
	class AUX_95th_LAS_F {class AUX_95th_LAS_F_Init {init = "(_this) spawn AUX_95th_fnc_handleAirVehicleInit;";};};
	class AUX_95th_LAS_Z6_F {class AUX_95th_LAS_Z6_F_Init {init = "(_this) spawn AUX_95th_fnc_handleAirVehicleInit;";};};
};


#include "CfgEventHandlers.hpp"