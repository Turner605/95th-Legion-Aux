class CfgPatches {
	class AUX_95th_Vehicles_Z95 {
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
		faction="AUX_95th_Legion_Faction_Vehicles";
		editorSubcategory="AUX_95th_Legion_Vehicles_Category_Ground_Light";
		displayName = "Bantha";
		hiddenSelections[] = {"main","side","turret","transmission","wheels","inter"};
		hiddenSelectionsTextures[] = {
			"\AUX_95th_Vehicles_Bantha\Data\Default\Main.paa",
			"\AUX_95th_Vehicles_Bantha\Data\Default\Side.paa",
			"\AUX_95th_Vehicles_Bantha\Data\Default\Turret.paa",
			"\AUX_95th_Vehicles_Bantha\Data\Default\Transmission.paa",
			"\AUX_95th_Vehicles_Bantha\Data\Default\Wheels.paa",
			"\AUX_95th_Vehicles_Bantha\Data\Default\Internal.paa",
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
					"\AUX_95th_Vehicles_Bantha\Data\Default\Internal.paa",
				};
				factions[] = {"AUX_95th_Legion_Faction_Vehicles"};
			};
		};
	};
};