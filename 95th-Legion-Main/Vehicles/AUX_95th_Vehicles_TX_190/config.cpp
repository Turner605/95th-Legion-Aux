class CfgPatches {
	class AUX_95th_Vehicles_TX_190 {
		author = "95th Legion";
		name = "AUX 95th Vehicles TX-190";
		requiredAddons[] = {
            "A3_Armor_F_Beta",
			"A3_Data_F",
			"A3_Weapons_F_Gamma",
            "CCS_HV_Tank"
        };
		weapons[] = {};
		units[] = {"AUX_95th_TX_190"};
		magazines[] = {};
	};
};

class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_01: Optics_Armored {
	class Wide;
	class Medium;
	class Narrow;
};

class Optics_Gunner_AAA_01: Optics_Armored {
	class Wide;
	class Medium;
	class Narrow;
};

class CfgVehicles {
	class LandVehicle;
	class Tank: LandVehicle {
		class NewTurret;
		class Sounds;
		class HitPoints;
		class CommanderOptics;
	};
	class Tank_F: Tank {
		class Turrets {
			class MainTurret: NewTurret {
				class Turrets {
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints {
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds {
			class Engine;
			class Movement;
		};
	};
	class APC_Tracked_01_base_F: Tank_F {};
	class B_APC_Tracked_01_base_F: APC_Tracked_01_base_F {};
	class B_APC_Tracked_01_rcws_F: B_APC_Tracked_01_base_F {};
	class CCS_HV_Tank_01: B_APC_Tracked_01_rcws_F {};
	
    class AUX_95th_TX_190: CCS_HV_Tank_01 {
        displayname = "TX-190";
        author="95th Aux Team";
        faction="AUX_95th_Legion_Faction_Vehicles";
        editorSubcategory="AUX_95th_Legion_Vehicles_Category_Ground_Heavy";
        crew = "AUX_95th_Generic_Unit_P1_Basic_Rifleman";

        textureList[]= {
			"Default", 1
		};

		hiddenSelectionsTextures[]= {"\AUX_95th_Vehicles_TX_190\Data\Default.paa"};

        class TextureSources {
			class Default {
				displayName="Default";
				author="95th Aux Team";
				textures[]= {"\AUX_95th_Vehicles_TX_190\Data\Default.paa"};
				factions[]={"AUX_95th_Legion_Faction_Vehicles"};
			};
		};
    };
};