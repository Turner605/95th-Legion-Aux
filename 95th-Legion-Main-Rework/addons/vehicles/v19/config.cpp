#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {"AUX_95th_V19"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_vehicles_shared", "3as_V19_Torrent"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;

class DefaultVehicleSystemsDisplayManagerLeft {
	class components;
};

class DefaultVehicleSystemsDisplayManagerRight {
	class components;
};

class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft {
	class components;
};

class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight {
	class components;
};

class CfgVehicles {
	class thingX;
	class Motorcycle;
	class Air;
	class Plane: Air {
		class NewTurret;
		class ViewPilot;
		class HitPoints {
			class HitHull;
		};
	};

	class Plane_Base_F: Plane {
		class AnimationSources;
		class Components;
	};

	class Plane_Fighter_03_base_F: Plane_Base_F{};
	class 3as_V19_base: Plane_Fighter_03_base_F {};

	class AUX_95th_V19: 3as_V19_base {
		author = "95th Aux Team";
		tas_can_impulse=0;
		ls_hasImpulse = 1;
		ls_impulsor_boostSpeed_1 = 400;
		ls_impulsor_boostSpeed_2 = 800;
		crew = "AUX_95th_Unit_P1_Basic_Trooper";
		typicalCargo[] = {"AUX_95th_Unit_P1_Basic_Trooper"};
		faction="AUX_95th_Legion_Faction_Vehicles";
		editorSubcategory="AUX_95th_Legion_Vehicles_Category_Air_Fighters";
		displayName = "V19 Torrent";
		hiddenselections[] = {"camo1","camo2","camo3","camo4","camo5","camo6"};
		hiddenselectionstextures[] = {
			"\z\AUX_95th\addons\vehicles\v19\data\Default\Wings.paa",
			"\z\AUX_95th\addons\vehicles\v19\data\Default\Wing_Plates.paa",
			"\z\AUX_95th\addons\vehicles\v19\data\Default\Hull.paa",
			"\z\AUX_95th\addons\vehicles\v19\data\Default\Gun_Gear.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
			"\z\AUX_95th\addons\vehicles\v19\data\Default\Pizzlepit.paa",
		};
		class TextureSources {
			class Default {
				displayName = "Default";
				author = "95th Aux Team";
				textures[] = {
					"\z\AUX_95th\addons\vehicles\v19\data\Default\Wings.paa",
					"\z\AUX_95th\addons\vehicles\v19\data\Default\Wing_Plates.paa",
					"\z\AUX_95th\addons\vehicles\v19\data\Default\Hull.paa",
					"\z\AUX_95th\addons\vehicles\v19\data\Default\Gun_Gear.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
					"\z\AUX_95th\addons\vehicles\v19\data\Default\Pizzlepit.paa",
				};
				factions[] = {"AUX_95th_Legion_Faction_Vehicles"};
			};
		};
	};
};

class Extended_init_EventHandlers {
	class AUX_95th_V19 {class AUX_95th_V19_Init {init = "(_this) spawn AUX_95th_fnc_handleAirVehicleInit;";};};
};


#include "CfgEventHandlers.hpp"