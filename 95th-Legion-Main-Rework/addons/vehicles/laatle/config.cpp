#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {"AUX_95th_LAAT_LE"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_vehicles_shared", "3AS_LAAT_LE"};
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
	class components {
		class MinimapDisplay;
	};
};

class DefaultVehicleSystemsDisplayManagerRight {
	class components {
		class MinimapDisplay;
	};
};

class CfgVehicles {
	class Wreck_base_F;
	class Air;
	class Helicopter: Air {
		class Turrets;
		class HitPoints;
	};

	class Helicopter_Base_F: Helicopter {
		class HitPoints: HitPoints {
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitMissiles;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitWinch;
		};

		class Turrets: Turrets {
			class MainTurret;
		};

		class AnimationSources;
		class EventHandlers;
		class ViewOptics;
		class ViewPilot;
		class Components;
	};

	class Heli_Attack_01_base_F: Helicopter_Base_F {
		class Turrets: Turrets {
			class CopilotTurret;
			class MainTurret;
		};

		class HitPoints: HitPoints {
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
		};

		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class components;
		class RotorLibHelicopterProperties;
	};

	class 3AS_Patrol_LAAT_Base: Heli_Attack_01_base_F {};

	class AUX_95th_LAAT_LE: 3AS_Patrol_LAAT_Base {
		author = "95th Legion";
		crew = "AUX_95th_Unit_P1_Basic_Trooper";
		displayname = "LAAT/LE";
		faction = "AUX_95th_Legion_Faction_Vehicles";
        editorSubcategory="AUX_95th_Legion_Vehicles_Category_Air_Gunships";
		typicalcargo[] = {"AUX_95th_Unit_P1_Basic_Trooper"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"3AS\3as_LAAT\LAAT_LE\data\republicpatrol01_CO.paa"};
        scope = 2;
		side = 1;
	};
};

#include "CfgEventHandlers.hpp"