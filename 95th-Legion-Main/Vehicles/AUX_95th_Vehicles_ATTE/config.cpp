#include "Macros\ATTE Texture.hpp"

class CfgPatches {
	class AUX_95th_Vehicles_ATTE {
		author = "95th Legion";
		name = "AUX 95th Vehicles AT-TE";
		requiredAddons[] = {
            "A3_Armor_F_Beta",
			"A3_Data_F",
			"A3_Weapons_F_Gamma",
            "CCS_HV_Tank"
        };
		weapons[] = {};
		units[] = {"AUX_95th_ATTE"};
		magazines[] = {};
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
			class MainTurretTop: Mainturret {
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
		crew = "AUX_95th_Generic_Unit_P1_Basic_Rifleman"; 
		faction="AUX_95th_Legion_Faction_Vehicles";
		editorSubcategory="AUX_95th_Legion_Vehicles_Category_Ground_Heavy";
		#include "\AUX_95th_Vehicles\Shared\Inventory Shared.hpp"
		class ACE_Cargo {class Cargo {class track {type = "ACE_Track"; amount = 2;};};}; 
		ace_cargo_space = 26;
		hiddenSelectionsTextures[]={
			"\AUX_95th_Vehicles_ATTE\Data\Default\Shell.paa", 
			"\AUX_95th_Vehicles_ATTE\Data\Default\Cockpit.paa", 
			"\AUX_95th_Vehicles_ATTE\Data\Default\Detail.paa", 
			"\AUX_95th_Vehicles_ATTE\Data\Default\Legs.paa", 
			"\AUX_95th_Vehicles_ATTE\Data\Default\Glass.paa", 
			"\AUX_95th_Vehicles_ATTE\Data\Default\Armor.paa"
		};
		class TextureSources {
			textureList[] = {"Default",1,"Kong",0};
			NEW_95TH_ATTE_TEXTURE(Default)};
			NEW_95TH_ATTE_TEXTURE(Kong)};
		};
	};
};


