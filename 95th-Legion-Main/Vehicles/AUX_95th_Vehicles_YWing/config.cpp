class CfgPatches {
	class AUX_95th_Vehicles_YWing {
		author = "95th Legion";
		name = "AUX 95th Vehicles Y-Wing";
		requiredAddons[] = {"3AS_BTLB_Bomber"};
		weapons[] = {};
		units[] = {"AUX_95th_YWing"};
		magazines[] = {};
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

class CfgVehicles {
	class Air;
	class Plane: Air {
		class HitPoints;
		class NewTurret;
	};

	class Plane_Base_F: Plane {
		class AnimationSources;
		class HitPoints: HitPoints {
			class HitHull;
		};
		class Components;
		class Eventhandlers;
		class ViewPilot;
	};

	class Plane_Fighter_03_base_F: Plane_Base_F {
		class Turrets{};
		class HitPoints: HitPoints {
			class HitHull: HitHull{};
			class HitEngine: HitHull{};
			class HitAvionics: HitHull{};
			class HitFuel: HitHull{};
			class HitLAileron: HitHull{};
			class HitRAileron: HitLAileron{};
			class HitLCRudder: HitHull{};
			class HitLCElevator: HitHull{};
			class HitRElevator: HitHull{};
		};
		class AnimationSources: AnimationSources{};
		class Components: Components{};
		class UserActions;
	};

	class Plane_Fighter_03_dynamicLoadout_base_F: Plane_Fighter_03_base_F {
		class Components: Components {
			class TransportPylonsComponent;
		};
	};

	class BTL_Base: Plane_Fighter_03_dynamicLoadout_base_F {};

	class 3AS_BTLB_Bomber: BTL_Base {};

	class AUX_95th_YWing: 3AS_BTLB_Bomber {
		author = "95th Aux Team";
		tas_can_impulse=0;
		ls_hasImpulse = 1;
		ls_impulsor_boostSpeed_1 = 400;
		ls_impulsor_boostSpeed_2 = 800;
		crew = "AUX_95th_Generic_Unit_P1_Basic_Rifleman";
		typicalCargo[] = {"AUX_95th_Generic_Unit_P1_Basic_Rifleman"};
		faction="AUX_95th_Legion_Faction_Vehicles";
		editorSubcategory="AUX_95th_Legion_Vehicles_Category_Air_Fighters";
		displayName = "BTL-Y Wing";
		hiddenselectionstextures[] = {
			"\AUX_95th_Vehicles_YWing\Data\Default\Chasis.paa",
			"\AUX_95th_Vehicles_YWing\Data\Default\Detail.paa",
			"3as\3AS_btlb\data\interior_co.paa"
		};
		availableForSupportTypes[] = {"CAS_Bombing"};
		class TextureSources {
			class Default {
				displayName = "Default";
				author = "95th Aux Team";
				textures[] = {"\AUX_95th_Vehicles_YWing\Data\Default\Chasis.paa","\AUX_95th_Vehicles_YWing\Data\Default\Detail.paa","3as\3AS_btlb\data\interior_co.paa"};
				factions[] = {"AUX_95th_Legion_Faction_Vehicles"};
			};
		};
	};
};

class Extended_init_EventHandlers {
	class AUX_95th_YWing {class AUX_95th_YWing_Init {init = "(_this) spawn AUX_95th_fnc_handleAirVehicleInit;";};};
};
