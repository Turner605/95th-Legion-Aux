#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {"AUX_95th_Bantha", "AUX_95th_Bantha_UAV_Test"};
        weapons[] = {};
		magazines[] = {"AUX_95th_Bantha_Rocket_Magazine"};
		ammo[] = {"AUX_95th_Bantha_Rocket_Ammo"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_vehicles_shared", "QS_Bantha_F"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgAmmo {
	class QS_PG_AT_Blue;

	class AUX_95th_Bantha_Rocket_Ammo: QS_PG_AT_Blue {};
};

class CfgMagazines {
	class QS_24Rnd_PG_Blue_M;
	class AUX_95th_Bantha_Rocket_Magazine: QS_24Rnd_PG_Blue_M {
		count = 4;
		ammo = "AUX_95th_Bantha_Rocket_Ammo";
		displayName = "PG Plasma (4rnd Blue)";
	};
};

class CfgWeapons {
	class QS_Rocket_SDR_F;
	class AUX_95th_Bantha_Rocket: QS_Rocket_SDR_F {
		displayName = "Missiles SDR";
		magazines[] = {"AUX_95th_Bantha_Rocket_Magazine"};
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
class Optics_Commander_01: Optics_Armored {
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_APC_01: Optics_Armored {
	class Wide;
	class Medium;
	class Narrow;
};

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
			class CopilotTurret;

			class MainTurret: NewTurret {
				class ViewOptics;
				class Turrets {
					class CommanderOptics;
				};
			};
		};
		class CargoTurret;
	};

	class QS_Bantha_B: Wheeled_APC_F{};

	class QS_Bantha_F: QS_Bantha_B{};

	class QS_Bantha: QS_Bantha_F {};

	class AUX_95th_Bantha: QS_Bantha {
		displayName = "Bantha";
		author = "95th Aux Team";
		tas_canBlift=1;
		tas_liftVars = "[[[[0,-4,-4]]], [0.1], [-0.5]]";
		faction="AUX_95th_Legion_Faction_Vehicles";
		editorCategory="AUX_95th_Legion_Faction_Vehicles";
		editorSubcategory="AUX_95th_Legion_Vehicles_Category_Ground_Light";
		#include "\z\AUX_95th\addons\vehicles\shared\sharedInventory.hpp"

		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = {"QS_APC_40mm_G","AUX_95th_Bantha_Rocket"};
				magazines[] = {"QS_50_200rnd_HE_blue_M","QS_50_200rnd_HE_blue_M","QS_50_200rnd_HE_blue_M","AUX_95th_Bantha_Rocket_Magazine","AUX_95th_Bantha_Rocket_Magazine"};
				memoryPointGun[] = {"z_gunL_muzzle","z_gunR_muzzle"};
				soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",0.56234133,1,30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",0.56234133,1,30};
			};
		};

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
				armor = 1.5;
				material = -1;
				passThrough = 0.2;
				minimalHit = 0.1;
				explosionShielding = 0.4;
				radius = 0.3;
			};

			class HitFuel: HitFuel {
				armor = 1.5;
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
			"\z\AUX_95th\addons\vehicles\bantha\data\Default\Main_CO.paa",
			"\z\AUX_95th\addons\vehicles\bantha\data\Default\Side_CO.paa",
			"\z\AUX_95th\addons\vehicles\bantha\data\Default\Turret_CO.paa",
			"\z\AUX_95th\addons\vehicles\bantha\data\Default\Transmission_CO.paa",
			"\z\AUX_95th\addons\vehicles\bantha\data\Default\Wheels_CO.paa",
			"\z\AUX_95th\addons\vehicles\bantha\data\Default\Internal_CO.paa"
		};
		hiddenSelectionsMaterials[] = {
			"\z\AUX_95th\addons\vehicles\bantha\Main.rvmat",
			"\z\AUX_95th\addons\vehicles\bantha\Side.rvmat",
			"\z\AUX_95th\addons\vehicles\bantha\Turret.rvmat",
			"",
			"\z\AUX_95th\addons\vehicles\bantha\Wheels.rvmat"
		};


		class TextureSources {
			class Default {
				displayName = "Default";
				author = "95th Aux Team";
				textures[] = {
					"\z\AUX_95th\addons\vehicles\bantha\data\Default\Main_CO.paa",
					"\z\AUX_95th\addons\vehicles\bantha\data\Default\Side_CO.paa",
					"\z\AUX_95th\addons\vehicles\bantha\data\Default\Turret_CO.paa",
					"\z\AUX_95th\addons\vehicles\bantha\data\Default\Transmission_CO.paa",
					"\z\AUX_95th\addons\vehicles\bantha\data\Default\Wheels_CO.paa",
					"\z\AUX_95th\addons\vehicles\bantha\data\Default\Internal_CO.paa"
				};
				factions[] = {"AUX_95th_Legion_Faction_Vehicles"};
				material[] = {
					"\z\AUX_95th\addons\vehicles\bantha\Main.rvmat",
					"\z\AUX_95th\addons\vehicles\bantha\Side.rvmat",
					"\z\AUX_95th\addons\vehicles\bantha\Turret.rvmat",
					"",
					"\z\AUX_95th\addons\vehicles\bantha\Wheels.rvmat"
				};
			};
		};
	};

	// class UGV_01_rcws_base_F;
	// class AUX_95th_UGV_Test: UGV_01_rcws_base_F {
	// 	scope=2;
	// 	displayName = "UGV (TEST)";
	// 	editorCategory="AUX_95th_Legion_Faction_Vehicles";
	// 	editorSubcategory="AUX_95th_Legion_Vehicles_Category_Ground_Light";

    //     class Turrets: Turrets {
    //         class MainTurret: MainTurret {
    //             dontCreateAI = 1;
    //             gunnerForceOptics = 0;
    //             hideWeaponsGunner = 0;
    //         };
    //         class CargoTurret_01: CargoTurret_01 {};
    //     };
    // };

	class AUX_95th_Bantha_UAV_Test: AUX_95th_Bantha {
		displayName = "Bantha (UGV TEST)";
		isUav = 1;
		vehicleClass = "Autonomous";
		crew = "B_UAV_AI";
		typicalCargo[] = {"B_UAV_AI"};
		// cargoIsCodriver[] = {0,1,0};
		unitInfoType = "RscOptics_AV_pilot";
		unitInfoTypeRTD = "RscOptics_AV_pilot";
		uavCameraDriverPos = "driverview";
		uavCameraDriverDir = "Light_L_end";
		uavCameraGunnerPos = "gunnerview";
		uavCameraGunnerDir = "Light_L_end";

		class Turrets: Turrets {

			// class UAVTurret: CopilotTurret {
			// 	viewGunnerInExternal = 0;
			// 	forceHideGunner = 1;
			// 	castGunnerShadow = 0;
			// 	gunnerForceOptics = 1;
			// };

			// class CargoTurret_01: CargoTurret {
			// 	gunnerAction = "commander_apcwheeled1_out";
			// 	gunnerCompartments = "Compartment8";
			// 	memoryPointsGetInGunner = "pos driver";
			// 	memoryPointsGetInGunnerDir = "pos driver dir";
			// 	gunnerName = "Driver";
			// 	dontCreateAI = 1;
			// 	proxyIndex = 1;
			// 	maxElev = 15;
			// 	minElev = -87;
			// 	maxTurn = 105;
			// 	minTurn = -60;
			// 	isPersonTurret = 1;
			// 	ejectDeadGunner = 0;
			// 	enabledByAnimationSource = "";
			// 	isCopilot = 1;
			// };

			class MainTurret: MainTurret {
				weapons[] = {"QS_APC_40mm_G","AUX_95th_Bantha_Rocket"};
				magazines[] = {"QS_50_200rnd_HE_blue_M","QS_50_200rnd_HE_blue_M","QS_50_200rnd_HE_blue_M","AUX_95th_Bantha_Rocket_Magazine","AUX_95th_Bantha_Rocket_Magazine"};
				memoryPointGun[] = {"z_gunL_muzzle","z_gunR_muzzle"};
				soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",0.56234133,1,30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",0.56234133,1,30};

				body = "mainTurret";
				gun = "mainGun";
				commanding = 1;
				minElev = -8;
				initElev = 0;
				maxElev = 60;
				minCamElev = -90;
				maxCamElev = 90;
				gunnerAction = "mbt1_slot2_out";
				gunnerInAction = "mbt1_slot2_in";
				getInAction = "GetInHigh";
				getOutAction = "GetOutHigh";
				viewGunnerInExternal = 1;
				castGunnerShadow = 1;
				stabilizedInAxes = 3;
				startEngine = 0;
				gunnerForceOptics = 1;
				inGunnerMayFire = 1;
				outGunnerMayFire = 0;
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex = 2;
				memoryPointGunnerOptics = "gunnerview";
				selectionFireAnim = "zasleh2";
				personTurretAction = "vehicle_turnout_0";
				minOutElev = -30;
				maxOutElev = 60;
				initOutElev = 0;
				minOutTurn = -160;
				maxOutTurn = 160;
				initOutTurn = 0;
				dontCreateAI = 1;

				class ViewOptics: RCWSOptics {
					visionMode[] = {"Normal","TI"};
				};
				class OpticsIn: Optics_Gunner_APC_01 {
					class Wide: Wide{};
					class Medium: Medium{};
					class Narrow: Narrow{};
				};
				turretInfoType = "RscOptics_APC_Wheeled_01_gunner";
				showCrewAim = 2;
				class HitPoints {
					class HitTurret {
						armor = 1.2;
						material = -1;
						name = "hit_main_turret_point";
						visual = "hit_main_turret_point";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.2;
						radius = 0.25;
						isTurret = 1;
					};
					class HitGun {
						armor = 0.90000004;
						material = -1;
						name = "hit_main_gun_point";
						visual = "hit_main_gun_point";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.4;
						radius = 0.25;
						isTurret = 1;
					};
				};

				class ViewGunner;
				class Turrets: Turrets {
					class CommanderOptics: CommanderOptics {
						dontCreateAI = 1;
						memoryPointGunnerOutOptics = "commanderview";
						memoryPointGunnerOptics = "commanderview";
						gunBeg = "Usti hlavne3";
						gunEnd = "Konec hlavne3";
						memoryPointGun = "usti hlavne3";
						selectionFireAnim = "zasleh2";
						minElev = -17;
						maxElev = 60;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						minCamElev = -90;
						maxCamElev = 90;
						weapons[] = {"SmokeLauncher","QS_127_APC_G","Laserdesignator_vehicle"};
						magazines[] = {"SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag","QS_127_99_500rnd_blue_M","QS_127_99_500rnd_blue_M","Laserbatteries"};
						soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",1,1,30};
						soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",1,1,30};
						canHideGunner = -1;
						inGunnerMayFire = 1;
						outGunnerMayFire = 0;
						viewGunnerInExternal = 1;
						viewGunnerShadow = 1;
						forceHideGunner = 1;
						gunnerOutForceOptics = 0;
						gunnerOutOpticsShowCursor = 0;
						gunnerAction = "commander_apcwheeled1_out";
						gunnerInAction = "commander_apcwheeled1_in";
						gunnerGetInAction = "GetInAMV_cargo";
						gunnerGetOutAction = "GetOutLow";
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel = "";
						gunnerOpticsEffect[] = {};
						personTurretAction = "vehicle_turnout_0";
						minOutElev = -10;
						maxOutElev = 15;
						initOutElev = 0;
						minOutTurn = -45;
						maxOutTurn = 90;
						initOutTurn = 0;
						class ViewGunner: ViewGunner {
							initAngleX = -5;
							initAngleY = 0;
							initFov = 0.9;
							minFov = 0.25;
							maxFov = 1.25;
							minAngleX = -65;
							maxAngleX = 85;
							minAngleY = -150;
							maxAngleY = 150;
							minMoveX = -0.075;
							maxMoveX = 0.075;
							minMoveY = -0.075;
							maxMoveY = 0.075;
							minMoveZ = -0.075;
							maxMoveZ = 0.1;
						};
						class ViewOptics: ViewOptics {
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.31;
							minFov = 0.035;
							maxFov = 0.31;
							visionMode[] = {"Normal","TI"};
							thermalMode[] = {2,3};
						};
						class OpticsIn: Optics_Commander_01 {
							class Wide: Wide{};
							class Medium: Medium{};
							class Narrow: Narrow{};
						};
						turretInfoType = "RscOptics_MBT_01_commander";
						showCrewAim = 1;
						startEngine = 0;
						class HitPoints {
							class HitComTurret {
								armor = 0.5;
								material = -1;
								name = "hit_com_turret_point";
								visual = "hit_com_turret_point";
								passThrough = 0;
								minimalHit = 0.1;
								explosionShielding = 0.4;
								radius = 0.25;
								isTurret = 1;
							};
							class HitComGun {
								armor = 0.5;
								material = -1;
								name = "hit_com_gun_point";
								visual = "hit_com_gun_point";
								passThrough = 0;
								minimalHit = 0.1;
								radius = 0.15;
								isGun = 1;
							};
						};
						stabilizedInAxes = 3;
						maxHorizontalRotSpeed = 1.8;
						maxVerticalRotSpeed = 1.8;
						gunnerHasFlares = 1;
					};
				};
			};
		};
	};
};

#include "CfgEventHandlers.hpp"