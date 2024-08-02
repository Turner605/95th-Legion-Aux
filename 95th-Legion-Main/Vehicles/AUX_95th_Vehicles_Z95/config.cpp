class CfgPatches {
	class AUX_95th_Vehicles_Z95 {
		author = "95th Legion";
		name = "AUX 95th Vehicles Z-95";
		requiredAddons[] = {"3AS_Z95_base"};
		weapons[] = {};
		units[] = {"AUX_95th_Z95"};
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
	class Plane;
	class Plane_Base_F: Plane {
		class HitPoints;
	};

	class VTOL_Base_F: Plane_Base_F {
		class AnimationSources;
		class EventHandlers;
		class NewTurret;
		class CargoTurret;
		class Components;
		class HitPoints: HitPoints {
			class HitHull;
		};
		class ViewPilot;
	};

	class 3AS_Z95_VTOL_Base_F: VTOL_Base_F {

		class Damage {};

		class HitPoints: HitPoints {
			class HitHull: HitHull {};
			class HitEngine: HitHull {};
			class HitEngine2: HitHull {};
			class HitAvionics: HitHull {};
			class HitFuel: HitHull {};
		};
		
		class Components: Components {
			class TransportPylonsComponent {
				UIPicture = "3AS\3AS_z95\data\plane_z95_pylon_ca.paa";
				class pylons {
					class pylons1 {
						hardpoints[] = {"B_BIM9X_RAIL"};
						attachment = "PylonRack_Missile_BIM9X_x1";
						priority = 10;
						maxweight = 300;
						UIposition[] = {0.6,0.45};
					};
					class pylons2: pylons1 {
						UIposition[] = {0.05,0.45};
						mirroredMissilePos = 1;
					};
					class pylons3: pylons1 {
						hardpoints[] = {"B_BIM9X_RAIL","B_BIM9X_DUAL_RAIL","B_AMRAAM_D_RAIL","B_AMRAAM_D_DUAL_RAIL","B_AGM65_RAIL","ARC_AGM_PYLON"};
						attachment = "3AS_PylonRack_ARC_6Rnd_Missile_AGM";
						priority = 9;
						maxweight = 2500;
						UIposition[] = {0.55,0.35};
					};
					class pylons4: pylons3 {
						UIposition[] = {0.1,0.35};
						mirroredMissilePos = 3;
					};
					class pylons5: pylons1 {
						hardpoints[] = {"B_BIM9X_RAIL","B_BIM9X_DUAL_RAIL","B_AMRAAM_D_RAIL","B_AMRAAM_D_DUAL_RAIL","B_AGM65_RAIL","B_AGM65_DUAL_RAIL","B_HARM_RAIL","ARC_AGM_PYLON"};
						attachment = "PylonRack_Missile_AMRAAM_D_x1";
						priority = 7;
						maxweight = 5000;
						UIposition[] = {0.5,0.25};
					};
					class pylons6: pylons5 {
						UIposition[] = {0.15,0.25};
						mirroredMissilePos = 5;
					};
					class Pylons7 {
						hardpoints[] = {"z95_CANON_PYLON"};
						priority = 5;
						attachment = "3AS_PylonWeapon_Z95_240Rnd_Heavy_Shells";
						maxweight = 4000;
						UIposition[] = {0.325,0.15};
					};
				};

				class presets {
					class empty {
						displayName = "$STR_empty";
						attachment[] = {};
					};
					class Default {
						displayName = "$STR_vehicle_default";
						attachment[] = {"PylonRack_Missile_BIM9X_x1","PylonRack_Missile_BIM9X_x1","3AS_PylonRack_ARC_6Rnd_Missile_AGM","3AS_PylonRack_ARC_6Rnd_Missile_AGM","PylonRack_Missile_AMRAAM_D_x1","PylonRack_Missile_AMRAAM_D_x1","3AS_PylonWeapon_Z95_240Rnd_Heavy_Shells"};
					};
					class AA {
						displayName = "$STR_A3_cfgmagazines_titan_aa_dns";
						attachment[] = {"PylonRack_Missile_BIM9X_x1","PylonRack_Missile_BIM9X_x1","PylonRack_Missile_AMRAAM_D_x2","PylonRack_Missile_AMRAAM_D_x2","PylonRack_Missile_AMRAAM_D_x2","PylonRack_Missile_AMRAAM_D_x2","3AS_PylonWeapon_Z95_240Rnd_Heavy_Shells"};
					};
					class CAS {
						displayName = "$STR_A3_CAS_PRESET_DISPLAYNAME";
						attachment[] = {"3AS_PylonRack_ARC_6Rnd_Missile_AGM","3AS_PylonRack_ARC_6Rnd_Missile_AGM","3AS_PylonRack_ARC_6Rnd_Missile_AGM","3AS_PylonRack_ARC_6Rnd_Missile_AGM","3AS_PylonRack_ARC_6Rnd_Missile_AGM","3AS_PylonRack_ARC_6Rnd_Missile_AGM","3AS_PylonWeapon_Z95_240Rnd_Heavy_Shells"};
					};
				};
			};
		};
	};

	class 3AS_Z95_VTOL_Base: 3AS_Z95_VTOL_Base_F {
		class Library {};
	};

	class 3AS_Z95_VTOL_Dynamic_Base_F: 3AS_Z95_VTOL_Base {
		class AnimationSources: AnimationSources {
			class HideWeapons {};
		};
		class Components: Components{};
	};

	class 3AS_Z95_Republic: 3AS_Z95_VTOL_Dynamic_Base_F {};
	
	class AUX_95th_Z95: 3AS_Z95_Republic {
		author = "95th Aux Team";
		tas_can_impulse=0;
		ls_hasImpulse = 1;
		ls_impulsor_boostSpeed_1 = 400;
		ls_impulsor_boostSpeed_2 = 800;
		displayName = "Z-95 HeadHunter";
		crew = "AUX_95th_Generic_Unit_P1_Basic_Rifleman";
		typicalCargo[] = {"AUX_95th_Generic_Unit_P1_Basic_Rifleman"};
		faction="AUX_95th_Legion_Faction_Vehicles";
		editorSubcategory="AUX_95th_Legion_Vehicles_Category_Air_Fighters";
		hiddenselectionstextures[] = {
			"\AUX_95th_Vehicles_Z95\Data\Default\Body.paa",
			"\AUX_95th_Vehicles_Z95\Data\Default\Cockpit.paa",
			"3AS\3AS_Z95\data\glass\glass_ca"
		};
		availableForSupportTypes[] = {"CAS_Bombing"};
		class TextureSources {
			class Default {
				displayName = "Default";
				author = "95th Aux Team";
				textures[] = {"\AUX_95th_Vehicles_Z95\Data\Default\Body.paa","\AUX_95th_Vehicles_Z95\Data\Default\Cockpit.paa"};
				factions[] = {"AUX_95th_Legion_Faction_Vehicles"};
			};
		};
	};
};

class Extended_init_EventHandlers {
	class AUX_95th_Z95 {class AUX_95th_Z95_Init {init = "(_this) spawn AUX_95th_fnc_handleAirVehicleInit;";};};
};
