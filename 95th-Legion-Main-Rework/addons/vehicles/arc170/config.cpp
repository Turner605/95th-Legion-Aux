#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {"AUX_95th_ARC170"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_vehicles_shared", "3AS_ARC_170"};
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

class ls_impulsor_base;

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

	class 3AS_ARC_170_Base: Plane_Fighter_03_dynamicLoadout_base_F {
		class Components: Components {
			class TransportPylonsComponent {
				UIPicture = "3as\3AS_ARC170\data\plane_ARC_pylon_ca.paa";
				class pylons {
					class pylons1 {
						hardpoints[] = {"B_BIM9X_DUAL_RAIL"};
						attachment = "PylonRack_Missile_BIM9X_x2";
						priority = 10;
						maxweight = 300;
						UIposition[] = {0.5,0.25};
					};
					class pylons2: pylons1 {
						UIposition[] = {0.15,0.25};
						mirroredMissilePos = 1;
					};
					class pylons3: pylons1 {
						hardpoints[] = {"B_AMRAAM_D_RAIL","B_AMRAAM_D_DUAL_RAIL","B_AGM65_RAIL","B_AGM65_DUAL_RAIL","ARC_AGM_PYLON","B_BOMB_PYLON"};
						attachment = "PylonMissile_1Rnd_Bomb_04_F";
						priority = 9;
						maxweight = 2500;
						UIposition[] = {0.55,0.35};
					};
					class pylons4: pylons3 {
						UIposition[] = {0.1,0.35};
						mirroredMissilePos = 3;
					};
					class pylons5: pylons1 {
						hardpoints[] = {"B_AMRAAM_D_RAIL","B_AGM65_RAIL","B_AGM65_DUAL_RAIL","B_HARM_RAIL","ARC_AGM_PYLON"};
						attachment = "PylonRack_Missile_AMRAAM_D_x1";
						priority = 7;
						maxweight = 5000;
						UIposition[] = {0.6,0.45};
					};
					class pylons6: pylons5 {
						UIposition[] = {0.05,0.45};
						mirroredMissilePos = 5;
					};
				};

				class presets {
					class empty {
						displayName = "$STR_empty";
						attachment[] = {};
					};
					class AA {
						displayName = "$STR_A3_cfgmagazines_titan_aa_dns";
						attachment[] = {"PylonRack_Missile_BIM9X_x1","PylonRack_Missile_BIM9X_x1","3AS_PylonRack_ARC_6Rnd_Missile_AGM","3AS_PylonRack_ARC_6Rnd_Missile_AGM","PylonRack_Missile_AMRAAM_D_x1","PylonRack_Missile_AMRAAM_D_x1"};
					};
					class CAS {
						displayName = "$STR_A3_CAS_PRESET_DISPLAYNAME";
						attachment[] = {"PylonRack_Missile_BIM9X_x1","PylonRack_Missile_BIM9X_x1","PylonMissile_1Rnd_Bomb_04_F","PylonMissile_1Rnd_Bomb_04_F","3AS_PylonRack_ARC_6Rnd_Missile_AGM","3AS_PylonRack_ARC_6Rnd_Missile_AGM"};
					};
				};
			};
		};
	};

	class AUX_95th_ARC170: 3AS_ARC_170_Base {
		displayName = "ARC-170";
		tas_can_impulse=0;
		class ls_impulsor: ls_impulsor_base {
			enabled = 1;
			speed = 400;
			fuelDrain = 0.0001;
			overchargeSpeed = 800;
			overchargeCooldown = 60;
        };
		scope = 2;
		scopeCurator = 2;
		side = 1;
		author = "95th Aux Team";
		crew = "AUX_95th_Unit_P1_Basic_Trooper";
		typicalCargo[] = {"AUX_95th_Unit_P1_Basic_Trooper"};
		faction="AUX_95th_Legion_Faction_Vehicles";
		editorSubcategory="AUX_95th_Legion_Vehicles_Category_Air_Fighters";
		editorPreview = "";
		hiddenselectionstextures[] = {
			"\z\AUX_95th\addons\vehicles\arc170\data\Default\Main_Frame.paa",
			"\z\AUX_95th\addons\vehicles\arc170\data\Default\Wings_Engines.paa",
			"\z\AUX_95th\addons\vehicles\arc170\data\Default\Guns.paa"
		};
		class TextureSources {
			class Default {
				displayName = "Default";
				author = "95th Aux Team";
				textures[] = {
					"\z\AUX_95th\addons\vehicles\arc170\data\Default\Main_Frame.paa",
					"\z\AUX_95th\addons\vehicles\arc170\data\Default\Wings_Engines.paa",
					"\z\AUX_95th\addons\vehicles\arc170\data\Default\Guns.paa"
				};
				factions[] = {"AUX_95th_Legion_Faction_Vehicles"};
			};
		};
	};
};

class Extended_init_EventHandlers {
	class AUX_95th_ARC170 {class AUX_95th_ARC170_Init {init = "(_this) spawn AUX_95th_fnc_handleAirVehicleInit;";};};
};

#include "CfgEventHandlers.hpp"