class CfgPatches {
	class AUX_95th_Vehicles_Bantha {
		author = "95th Legion";
		name = "AUX 95th Vehicles Bantha";
		requiredAddons[] = {"QS_Bantha_F"};
		weapons[] = {};
		units[] = {"AUX_95th_Bantha"};
		magazines[] = {};
	};
};

class DefaultEventHandlers;
class EventHandlers;
class AnimationSources;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;

class CfgVehicles {
	class Car;
	class Car_F: Car {
		class NewTurret;
		class Sounds;
		class HitPoints {
			class HitHull;
			class HitLFWheel;
			class HitLF2Wheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitBody;
			class HitFuel;
			class HitEngine;
		};
	};

	class Wheeled_APC_F: Car_F {
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
				class Turrets {
					class CommanderOptics;
				};
			};
		};
	};

	class QS_Bantha_B: Wheeled_APC_F{};

	class QS_Bantha_F: QS_Bantha_B{};

	class QS_Bantha: QS_Bantha_F {};

	class AUX_95th_Bantha: QS_Bantha {
		author = "95th Aux Team";
		crew = "AUX_95th_Generic_Unit_P1_Basic_Rifleman";
		typicalCargo[] = {"AUX_95th_Generic_Unit_P1_Basic_Rifleman"};
		tas_canBlift=1;
		tas_liftVars = "[[[[0,-4,-4]]], [0.1], [-0.5]]";
		faction="AUX_95th_Legion_Faction_Vehicles";
		editorCategory="AUX_95th_Legion_Faction_Vehicles";
		editorSubcategory="AUX_95th_Legion_Vehicles_Category_Ground_Light";
		displayName = "Bantha";

		class HitPoints: HitPoints {
			class HitHull: HitHull {
				armor = 2;
				material = -1;
				name = "hit_hull_point";
				passThrough = 0.4;
				visual = "zbytek";
				minimalHit = 0.1;
				explosionShielding = 0.5;
				radius = 0.3;
			};

			class HitEngine: HitEngine {
				armorComponent = "hit_engine";
				name = "hit_engine_point";
				armor = 2;
				material = -1;
				passThrough = 0.2;
				minimalHit = 0.1;
				explosionShielding = 0.4;
				radius = 0.3;
			};

			class HitFuel: HitFuel {
				armor = 2;
				material = -1;
				name = "hit_fuel_point";
				passThrough = 0.2;
				minimalHit = 0.1;
				explosionShielding = 0.4;
				radius = 0.3;
			};

			class HitSLAT_front_1 {
				simulation = "Armor_SLAT";
				armorComponent = "cage_front_1_geo";
				name = "cage_front_1_point";
				armor = 0.4;
				minimalHit = 0.2;
				passThrough = 0;
				visual = "-";
				explosionShielding = 0.4;
				radius = 0.25;
			};

			class HitSLAT_front_2: HitSLAT_front_1 {armorComponent = "cage_front_2_geo"; name = "cage_front_2_point";};
			class HitSLAT_front_3: HitSLAT_front_1 {armorComponent = "cage_front_3_geo";name = "cage_front_3_point";};
			class HitSLAT_front_4: HitSLAT_front_1 {armorComponent = "cage_front_4_geo";name = "cage_front_4_point";};
			class HitSLAT_front_5: HitSLAT_front_1 {armorComponent = "cage_front_5_geo"; name = "cage_front_5_point";};
			class HitSLAT_Left_1: HitSLAT_front_1 {armorComponent = "cage_left_1_geo"; name = "cage_left_1_point";};
			class HitSLAT_Left_2: HitSLAT_front_1 {armorComponent = "cage_left_2_geo"; name = "cage_left_2_point";};
			class HitSLAT_Left_3: HitSLAT_front_1 {armorComponent = "cage_left_3_geo"; name = "cage_left_3_point";};
			class HitSLAT_Left_4: HitSLAT_front_1 {armorComponent = "cage_left_4_geo"; name = "cage_left_4_point";};
			class HitSLAT_Left_5: HitSLAT_front_1 {armorComponent = "cage_left_5_geo"; name = "cage_left_5_point";};
			class HitSLAT_Left_6: HitSLAT_front_1 {armorComponent = "cage_left_6_geo"; name = "cage_left_6_point";};
			class HitSLAT_Right_1: HitSLAT_front_1 {armorComponent = "cage_Right_1_geo"; name = "cage_Right_1_point";};
			class HitSLAT_Right_2: HitSLAT_front_1 {armorComponent = "cage_Right_2_geo"; name = "cage_Right_2_point";};
			class HitSLAT_Right_3: HitSLAT_front_1 {armorComponent = "cage_Right_3_geo"; name = "cage_Right_3_point";};
			class HitSLAT_Right_4: HitSLAT_front_1 {armorComponent = "cage_Right_4_geo"; name = "cage_Right_4_point";};
			class HitSLAT_Right_5: HitSLAT_front_1 {armorComponent = "cage_Right_5_geo"; name = "cage_Right_5_point";};
			class HitSLAT_Right_6: HitSLAT_front_1 {armorComponent = "cage_Right_6_geo"; name = "cage_Right_6_point";};

			class HitLFWheel: HitLFWheel
			{
				radius = 0.33;
				visual = "wheel_1_1_hide";
				armorComponent = "wheel_1_1_hide";
				armor = 2;
				minimalHit = 0.4;
				explosionShielding = 4;
				passThrough = 0;
			};

			class HitLF2Wheel: HitLF2Wheel {
				radius = 0.33;
				visual = "wheel_1_2_hide";
				armorComponent = "wheel_1_2_hide";
				armor = 2;
				minimalHit = 0.4;
				explosionShielding = 4;
				passThrough = 0;
			};

			class HitLMWheel: HitLMWheel {
				radius = 0.33;
				visual = "wheel_1_3_hide";
				armorComponent = "wheel_1_3_hide";
				armor = 2;
				minimalHit = 0.4;
				explosionShielding = 4;
				passThrough = 0;
			};

			class HitLBWheel: HitLBWheel {
				radius = 0.33;
				visual = "wheel_1_4_hide";
				armorComponent = "wheel_1_4_hide";
				armor = 2;
				minimalHit = 0.4;
				explosionShielding = 4;
				passThrough = 0;
			};

			class HitLB2Wheel: HitLBWheel {
				radius = 0.33;
				visual = "wheel_1_5_hide";
				armorComponent = "wheel_1_5_hide";
				armor = 2;
				minimalHit = 0.4;
				explosionShielding = 4;
				passThrough = 0;
			};

			class HitRFWheel: HitRFWheel {
				radius = 0.33;
				visual = "wheel_2_1_hide";
				armorComponent = "wheel_2_1_hide";
				armor = 2;
				minimalHit = 0.4;
				explosionShielding = 4;
				passThrough = 0;
			};

			class HitRF2Wheel: HitRF2Wheel {
				radius = 0.33;
				visual = "wheel_2_2_hide";
				armorComponent = "wheel_2_2_hide";
				armor = 2;
				minimalHit = 0.4;
				explosionShielding = 4;
				passThrough = 0;
			};

			class HitRMWheel: HitRMWheel {
				radius = 0.33;
				visual = "wheel_2_3_hide";
				armorComponent = "wheel_2_3_hide";
				armor = 2;
				minimalHit = 0.4;
				explosionShielding = 4;
				passThrough = 0;
			};

			class HitRBWheel: HitRBWheel {
				radius = 0.33;
				visual = "wheel_2_4_hide";
				armorComponent = "wheel_2_4_hide";
				armor = 2;
				minimalHit = 0.5;
				explosionShielding = 4;
				passThrough = 0;
			};

			class HitRB2Wheel: HitRBWheel {
				radius = 0.33;
				visual = "wheel_2_5_hide";
				armorComponent = "wheel_2_5_hide";
				armor = 2;
				minimalHit = 0.5;
				explosionShielding = 4;
				passThrough = 0;
			};
		};

		hiddenSelections[] = {"main","side","turret","transmission","wheels","inter"};
		hiddenSelectionsTextures[] = {
			"\AUX_95th_Vehicles_Bantha\Data\Default\Main.paa",
			"\AUX_95th_Vehicles_Bantha\Data\Default\Side.paa",
			"\AUX_95th_Vehicles_Bantha\Data\Default\Turret.paa",
			"\AUX_95th_Vehicles_Bantha\Data\Default\Transmission.paa",
			"\AUX_95th_Vehicles_Bantha\Data\Default\Wheels.paa",
			"\AUX_95th_Vehicles_Bantha\Data\Default\Internal.paa"
		};

		class TextureSources {
			class Default {
				displayName = "Default";
				author = "95th Aux Team";
				textures[] = {
					"\AUX_95th_Vehicles_Bantha\Data\Default\Main.paa",
					"\AUX_95th_Vehicles_Bantha\Data\Default\Side.paa",
					"\AUX_95th_Vehicles_Bantha\Data\Default\Turret.paa",
					"\AUX_95th_Vehicles_Bantha\Data\Default\Transmission.paa",
					"\AUX_95th_Vehicles_Bantha\Data\Default\Wheels.paa",
					"\AUX_95th_Vehicles_Bantha\Data\Default\Internal.paa"
				};
				factions[] = {"AUX_95th_Legion_Faction_Vehicles"};
			};
		};
	};
};