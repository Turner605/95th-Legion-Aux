#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {"AUX_95th_Rover_EOD"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_vehicles_shared"};
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
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class CfgDustEffectsTankSmall;
class CfgVehicles {
	class LandVehicle;
	class Car: LandVehicle {
		class NewTurret;
	};

	class Car_F: Car {
		class ViewOptics;
		class HitPoints {
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
		class NewTurret;
		class Turrets {
			class MainTurret: NewTurret {
				class ViewOptics;
			};
		};
		class EventHandlers;
		class AnimationSources;
	};

	class Tank: LandVehicle {
		class NewTurret;
		class Sounds;
		class HitPoints;
	};

	class Tank_F: Tank {
		class Turrets {
			class MainTurret: NewTurret {
				class ViewGunner;
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
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds {
			class Engine;
			class Movement;
		};
		class EventHandlers;
		class Components;
	};

	class UGV_02_Base_F: Tank_F {
		class SpeechVariants {
			class Default {};
		};

		class Library {};

		class DustEffects: CfgDustEffectsTankSmall{};

		class complexGearbox {};

		class Wheels {
			class L2 {};
			class L3: L2 {};
			class L4: L2 {};
			class L1: L2 {};
			class L5: L1 {};
			class R2: L2 {};
			class R3: R2 {};
			class R4: R2 {};
			class R1: R2 {};
			class R5: R1 {};
		};

		class Components: Components {
			class AITankSteeringComponent {};
		};

		class CamShake {};

		class AnimationSources {
			class science_drone {};
			class demining_drone {};
			class ew_drone {};
			class antenna_1_hide {};
			class Arm_forward {};
			class Beam_Length {};
			class Detector1Light1_Green {};
			class Detector1Light1_Red {};
			class Detector1Light2_Green {};
			class Detector1Light2_Red {};
			class Detector2Aux_hide {};
			class Detector2Speaker_Off {};
			class Detector2Speaker_On {};
			class ChemDetectorLight {};
			class ChemDetectorLevel1 {};
			class ChemDetectorLevel2 {};
			class ChemDetectorLevel3 {};
			class BiopsyCapacity {};
			class Tracks_L_Hit {};
			class Tracks_R_Hit {};
			class muzzleFlash_rot {};
			class beam_reload {};
			class beam_reloadMagazine {};
			class beam_ammo {};
			class arm_reload {};
		};
        
		class UVAnimations {
			class LaserBeam {};
			class LaserBeam2: LaserBeam {};
		};

		class ViewOptics: ViewOptics {};
		class ViewPilot: ViewPilot {};
		class Reflectors {
			class Light_1 {
				class Attenuation {};
			};

			class Light_2: Light_1 {};
			class Light_3: Light_1 {};
			class Light_4: Light_1 {};
		};

		class HitPoints: HitPoints {
			class HitHull {};
			class HitEngine {};
			class HitLightFront {};
			class HitLightBack {};
			class HitBattery_L {
				class DestructionEffects {
					class Explo {};
					class Explo2 {};
					class Sound: Explo {};
				};
			};

			class HitBattery_R {
				class DestructionEffects {
					class Explo {};
					class Explo2 {};
					class Sound: Explo {};
				};
			};

			class HitFuel {};
			class HitLTrack {};
			class HitRTrack {};
		};

		class Turrets: Turrets {
			class MainTurret: MainTurret {
				class Turrets{};
				class ViewOptics: ViewOptics {};

				class OpticsIn {
					class CameraArm: ViewOptics {};
					class CameraArmZoom: CameraArm {};
					class CameraBottom: ViewOptics {};
					class CameraClaw: ViewOptics {};
				};

				class Hitpoints {
					class HitTurret {};
					class HitGun {
						class DestructionEffects {
							class Explo {};
							class Explo2 {};
							class Sound: Explo {};
						};
					};
				};

				class Reflectors {
					class Arm_Lamp {
						class Attenuation {};
					};

					class Arm_Lamp_Flare: Arm_Lamp {
						class Attenuation {};
					};
				};

				class Components {
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
						class Components {
							class EmptyDisplay {};
							class MinimapDisplay {};
							class UAVDisplay {};
						};
					};
                    
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
						class Components {
							class EmptyDisplay {};
							class MinimapDisplay {};
							class UAVDisplay {};
						};
					};
				};
			};
		};

		class Damage {};

		class DestructionEffects {
			class FireSparksBig1 {};
			class SparksBig1 {};
		};

		class UserActions {
			class Light_On {};
			class Light_Off: Light_On {};
			class PressXToFlipTheThing {};
		};

		class Attributes {
			class PlateNumber {};
			class LightControls{};
		};

		class Exhausts {
			class Exhaust1 {};
		};

		class Sounds {
			class Engine {};
		};

		class VehicleTransport {
			class Cargo {};
		};

		class PlateInfos {};
		class EventHandlers: EventHandlers {};
	};

	class UGV_02_Science_Base_F: UGV_02_Base_F {
		class AnimationSources: AnimationSources {
			class science_drone {};
			class demining_drone {};
			class ew_drone {};
		};

		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
	};

	class UGV_02_EW_Base_F: UGV_02_Base_F {
		class AnimationSources: AnimationSources {
			class science_drone {};
			class demining_drone {};
			class ew_drone {};
		};
	};

	class UGV_02_Demining_Base_F: UGV_02_Base_F {
		class AnimationSources: AnimationSources {
			class science_drone {};
			class demining_drone {};
		};

		class Turrets: Turrets {
			class MainTurret: MainTurret {
				class OpticsIn {
					class CameraArm: ViewOptics {};
					class CameraArmZoom: CameraArm {};
					class CameraBottom: ViewOptics {};
					class CameraClaw: ViewOptics {};
				};

				class Components {
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
						defaultDisplay = "MineDetectorDisplay";
						class Components {
							class EmptyDisplay {};
							class MinimapDisplay {};
							class MineDetectorDisplay {};
							class VehiclePrimaryGunnerDisplay {};
							class VehicleDriverDisplay {};
						};
					};

					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
						class Components {
							class EmptyDisplay {};
							class MinimapDisplay {};
							class MineDetectorDisplay {};
							class VehiclePrimaryGunnerDisplay {};
							class VehicleDriverDisplay {};
						};
					};
				};
			};
		};

		class Components: Components {
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
				class Components {
					class EmptyDisplay {};
					class MinimapDisplay {};
					class MineDetectorDisplay {};
					class UAVDisplay {};
				};
			};

			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
				class Components {
					class EmptyDisplay {};
					class MinimapDisplay {};
					class MineDetectorDisplay {};
					class UAVDisplay {};
				};
			};
		};
	};

	class C_IDAP_UGV_02_Demining_F: UGV_02_Demining_Base_F {
		class SimpleObject {};
		class assembleInfo {};
	};

	class AUX_95th_Rover_EOD: C_IDAP_UGV_02_Demining_F {
		displayName = "Rover";
		scope = 2;
		side = 1;
		faction="AUX_95th_Legion_Faction_Vehicles";
		editorSubcategory="AUX_95th_Legion_Vehicles_Category_Ground_Drones";

		hiddenSelectionsTextures[] = {
			"\z\AUX_95th\addons\vehicles\rover\data\Body.paa",
			"\z\AUX_95th\addons\vehicles\rover\data\Tracks.paa",
			"\z\AUX_95th\addons\vehicles\rover\data\Text.paa"
		};

		class assembleInfo {};
	};
};

#include "CfgEventHandlers.hpp"