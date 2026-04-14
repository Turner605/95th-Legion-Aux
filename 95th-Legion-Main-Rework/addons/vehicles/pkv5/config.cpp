#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {"AUX_95th_PKV5"};
        weapons[] = {};
		magazines[] = {};
		ammo[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_vehicles_shared", "ls_vehicles_pkv5"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgVehicles {
	class LandVehicle;

	class Tank: LandVehicle {
		class HitPoints;
	};

	class Tank_F: Tank {
		class ViewOptics;
		class HitPoints: HitPoints {
			class HitHull;
			class HitEngine;
		};

		class Turrets {
			class MainTurret;
		};
		
		class CommanderOptics;
		class CargoTurret;
		class ViewCargo;
	};

	class ls_vehicle_pkv5_base: Tank_F {};
	class ls_vehicle_pkv5: ls_vehicle_pkv5_base {};

	class AUX_95th_PKV5: ls_vehicle_pkv5 {

		textures[] = {
			"\ls\core\addons\vehicles_pkv5\data\republic\camo1_co.paa",
			"\ls\core\addons\vehicles_pkv5\data\republic\camo2_cannon_co.paa"
		};

        side=1;
        scope=2;
        faction="AUX_95th_Legion_Faction_Vehicles";
		editorCategory="AUX_95th_Legion_Faction_Vehicles";
		editorSubcategory="AUX_95th_Legion_Vehicles_Category_Ground_Heavy";
		crew = "AUX_95th_Unit_P1_Basic_Trooper";
		displayName = "PKV5";
		hiddenSelectionsTextures[] = {
            "\z\AUX_95th\addons\vehicles\pkv5\data\Default\camo1_co.paa",
            "\z\AUX_95th\addons\vehicles\pkv5\data\Default\camo2_cannon_co.paa"
        };
		class TextureSources {
			class Default {
				displayName = "Default";
				textures[] = {
					"\z\AUX_95th\addons\vehicles\pkv5\data\Default\camo1_co.paa",
					"\z\AUX_95th\addons\vehicles\pkv5\data\Default\camo2_cannon_co.paa"
                };
				factions[] = {"AUX_95th_Legion_Faction_Vehicles"};
			};
		};
	};
};

#include "CfgEventHandlers.hpp"