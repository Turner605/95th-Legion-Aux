#include "script_component.hpp"
#include "Macros\ATTE Texture.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {"AUX_95th_ATTE"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "AUX_95th_main",
            "AUX_95th_vehicles_shared",
            "A3_Armor_F_Beta",
			"A3_Data_F",
			"A3_Weapons_F_Gamma"
        };
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgVehicles {
	class Car;
	class Car_F: Car {
		class Sounds;
		class Eventhandlers;
		class HitPoints {
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitHull;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
	};

	class Wheeled_APC_F: Car_F {
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds {
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets {
			class MainTurret: NewTurret {
				class ViewOptics;
				class ViewGunner;
				class Turrets {
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
	};

	class APC_Wheeled_01_base_F: Wheeled_APC_F {
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				class Turrets: Turrets {
					class CommanderOptics: CommanderOptics{};
				};
			};
		};
	};

	class 3AS_ATTE_Base: APC_Wheeled_01_base_F {
		class Turrets : Turrets {
			class MainTurretTop: MainTurret {
				class OpticsIn {
					class Wide;
					class Narrow : Wide{};
				};
				class HitPoints {
					class HitTurrettop;
					class HitGuntop;
				};
				class ViewGunner: ViewGunner{};
				class Turrets{};
			};
			class MainTurretFront: MainTurretTop {
				class OpticsIn {
					class Wide;
					class Narrow : Wide{};
				};
				class HitPoints {
					class HitTurretFront;
					class HitGunFront;
				};
				class ViewGunner: ViewGunner{};
				class Turrets{};
			};
			class MainTurretBack : MainTurretFront {
				class ViewGunner: ViewGunner{};
				class HitPoints {
					class HitTurretRear;
					class HitGunRear;
				};
			};
		};
	};

	class AUX_95th_ATTE : 3AS_ATTE_Base {
		displayname = "AT-TE";
		author = "95th Aux Team";
		crew = "AUX_95th_Unit_P1_Basic_Trooper";
		faction="AUX_95th_Legion_Faction_Vehicles";
		editorSubcategory="AUX_95th_Legion_Vehicles_Category_Ground_Heavy";
		#include "\z\AUX_95th\addons\vehicles\shared\sharedInventory.hpp"
		class ACE_Cargo {class Cargo {class track {type = "ACE_Track"; amount = 2;};};};
		ace_cargo_space = 26;
		hiddenSelectionsTextures[]={
			"\z\AUX_95th\addons\vehicles\atte\data\Default\Shell.paa",
			"\z\AUX_95th\addons\vehicles\atte\data\Default\Cockpit.paa",
			"\z\AUX_95th\addons\vehicles\atte\data\Default\Detail.paa",
			"\z\AUX_95th\addons\vehicles\atte\data\Default\Legs.paa",
			"\z\AUX_95th\addons\vehicles\atte\data\Default\Glass.paa",
			"\z\AUX_95th\addons\vehicles\atte\data\Default\Armor.paa"
		};
		class TextureSources {
			textureList[] = {"Default",1,"AUX_95th_76561198065789267",0, "AUX_95th_76561198048015341",1};
			NEW_95TH_ATTE_TEXTURE(Default)
			NEW_95TH_ATTE_TEXTURE(AUX_95th_76561198065789267)
			NEW_95TH_ATTE_TEXTURE(AUX_95th_76561198048015341)
		};
		class HitPoints: HitPoints {
			class HitHull: HitHull {
				armor = 2.0;
				material = -1;
				armorComponent = "hit_hull";
				name = "hit_hull_point";
				visual = "zbytek";
				passThrough = 1;
				minimalHit = 0.2;
				explosionShielding = 2;
				radius = 0.75;
			};
			class HitEngine: HitEngine {
				armor = 1.5;
				material = -1;
				armorComponent = "hit_engine";
				name = "hit_engine_point";
				passThrough = 0.2;
				minimalHit = 0.1;
				explosionShielding = 0.7;
				radius = 0.5;
			};
			class HitFuel: HitFuel {
				armor = 1.5;
				material = -1;
				armorComponent = "hit_fuel";
				name = "hit_fuel_point";
				passThrough = 0.1;
				minimalHit = 0.1;
				explosionShielding = 0.75;
				radius = 0.5;
			};
			class HitLFWheel: HitLFWheel {
				visual = "wheel_1_1_hide";
				armorComponent = "wheel_1_1_hide";
				radius = 0.25;
				armor = 2;
				minimalHit = 1.0;
				explosionShielding = 0.75;
				passThrough = 0;
			};
			class HitRFWheel: HitRFWheel {
				visual = "wheel_2_1_hide";
				armorComponent = "wheel_2_1_hide";
				radius = 0.25;
				armor = 2;
				minimalHit = 1.0;
				explosionShielding = 0.75;
				passThrough = 0;
			};
			class HitGlass1 {
				armor = 3;
				name = "Hit_Glass1_point";
				radius = 0.4;
				visual = "";
				passThrough = 0.1;
				explosionShielding = 3;
			};
			class HitGlass2 {
				armor = 3;
				name = "Hit_Glass2_point";
				radius = 0.4;
				visual = "";
				passThrough = 0.1;
				explosionShielding = 3;
			};
			class HitGlass3 {
				armor = 3;
				name = "Hit_Glass3_point";
				radius = 0.4;
				visual = "";
				passThrough = 0.1;
				explosionShielding = 3;
			};
		};
		crewExplosionProtection = 0.9995;
		crewCrashProtection = 0.0001;
		damageResistance = 0.00719;
		crewVulnerable = 1;
	};
};

#include "CfgEventHandlers.hpp"