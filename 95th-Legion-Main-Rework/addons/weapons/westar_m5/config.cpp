#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {"AUX_95th_WestarM5","AUX_95th_WestarM5_GL","AUX_95th_Optic_Scope_WestarM5"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_weapons_shared", "3AS_Weapons"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgRecoils {
	class recoil_default;
	class AUX_95th_recoil_Westar_M5: recoil_default {
		muzzleInner[] = {0,0,0.1,0.1};
		permanent = 0.1;
		muzzleOuter[] = {0.3,0.8,0.4,0.3};
		kickBack[] = {0.03,0.06};
		temporary = 0.01;
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons {
	class Rifle;
	class Rifle_Base_F: Rifle {
		class WeaponSlotsInfo;
		class GunParticles;
	};

	class AUX_95th_Stun_Muzzle_Rifle;

	class UGL_F;
	class AUX_95th_WestarM5_Base_F: Rifle_Base_F {
		author = "95th Legion";
		magazines[] = {"AUX_95th_Universal_Rifle_Mag","AUX_95th_Universal_Sniper_Mag"};
		reloadAction = "GestureReloadMX";
		magazineReloadSwitchPhase = 0.4;
		discreteDistanceInitIndex = 0;
		recoil = "AUX_95th_recoil_Westar_M5";
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		inertia = 0.5;
		dexterity = 1.5;
		initSpeed = -1;
		maxZeroing = 100;
		class GunParticles: GunParticles {
			class SecondEffect {
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class CowsSlot: CowsSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"AUX_95th_Optic_Scope_WestarM5","SEA_Optic_Holo_Two_Blue","SEA_Optic_Holo_Two_Red","SEA_Optic_Holo_Two_Yellow","SEA_Optic_Holo_Two_Green","SEA_Optic_Holo_One_Blue","SEA_Optic_Holo_One_Green","SEA_Optic_Holo_One_Red","SEA_Optic_Holo_One_Yellow"};
			};
			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"acc_flashlight","acc_pointer_IR"};
			};
			class UnderBarrelSlot: UnderBarrelSlot {
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {};
			};
		};
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		distanceZoomMin = 400;
		distanceZoomMax = 400;
		descriptionShort = "Westar-M5, 3rd Army Studios";
		handAnim[] = {"OFP2_ManSkeleton","\z\AUX_95th\addons\weapons\westar_m5\anim\WestarM5_handanim.rtm"};
		selectionFireAnim = "zasleh";
		fireLightDiffuse[] = {7,110,176};
		fireLightIntensity = 0.02;
		flash = "gunfire";
		flashSize = 0.1;
		muzzles[] = {"this","Stun"};
		modes[] = {"Single","FullAuto"};
		class Stun: AUX_95th_Stun_Muzzle_Rifle{};
		class Single: Mode_SemiAuto {
			reloadTime = 0.1;
			dispersion = 0.00052;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
			soundContinuous = 0;
			soundBurst = 0;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType {
				soundSetShot[] = {"AUX_95th_Westar_Shot_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = {"AUX_95th_Westar_Shot_SoundSet"};
			};
		};
		class Burst: Mode_Burst {
			reloadTime = 0.05;
			dispersion = 0.00079;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.1;
			soundContinuous = 0;
			soundBurst = 0;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType {
				soundSetShot[] = {"AUX_95th_Westar_Shot_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = {""};
			};
		};
		class FullAuto: Mode_FullAuto {
			reloadTime = 0.08;
			dispersion = 0.00079;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType {
				soundSetShot[] = {"AUX_95th_Westar_Shot_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = {"AUX_95th_Westar_Shot_SoundSet"};
			};
		};
		class Burst_medium: Burst {
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
		};
		class single_medium_optics1: Single {
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 5;
			minRangeProbab = 0.2;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics2: single_medium_optics1 {
			requiredOpticType = 2;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class AUX_95th_WestarM5_GL_F: UGL_F {
			displayName = "[95th] WestarM5-GL";
			descriptionShort = "GL for the WestarM5 Platform";
			useModelOptics = 0;
			useExternalOptic = 0;
			magazines[] = {"3AS_6Rnd_HE_Grenade_shell"};
			magazineWell[] = {};
			cameraDir = "OP_look";
			discreteDistance[] = {50,75,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[] = {"OP_eye_50","OP_eye_75","OP_eye_100","OP_eye_150","OP_eye_200","OP_eye_250","OP_eye_300","OP_eye_350","OP_eye_400"};
			discreteDistanceInitIndex = 1;
			reloadAction = "GestureReloadMXUGL";
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",1,1,10};
		};
		aiDispersionCoefY = 6;
		aiDispersionCoefX = 4;
		caseless[] = {"",1,1,1};
		soundBullet[] = {"caseless",1};
		drySound[] = {"\z\AUX_95th\addons\weapons\shared\sounds\weapon_dry.wss",2,1,20};
		reloadMagazineSound[] = {"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",1,1,30};
	};

	class AUX_95th_WestarM5: AUX_95th_WestarM5_Base_F {
		DSS_DamageSystem_Power=12;
		scope = 2;
		displayName = "[95th] Westar-M5 Rifle";
		model = "3AS\3AS_Weapons\WestarM5\3AS_Westar_M5_F.p3d";
		picture = "\z\AUX_95th\addons\weapons\westar_m5\data\ui\3as_westar.paa";
		weaponInfoType = "RscWeaponZeroing";
		modelOptics = "3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
		class OpticsModes {
			class Ironsights {
				opticsID = 1;
				useModelOptics = 0;
				opticsFlare = "true";
				opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
				opticsDisablePeripherialVision = 0.67;
				opticsZoomMin = 0.375;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				visionMode[] = {};
				distanceZoomMin = 100;
				distanceZoomMax = 100;
			};
			class Scope: Ironsights {
				opticsID = 2;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
				opticsDisablePeripherialVision = 0.67;
				opticsZoomMin = 0.122173;
				opticsZoomMax = 0.122173;
				opticsZoomInit = 0.122173;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal","NVG"};
				opticsFlare = "true";
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				cameraDir = "";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 60;
		};
		ace_overheating_mrbs = 3000;
		ace_overheating_slowdownFactor = 1;
		ace_overheating_allowSwapBarrel = 0;
		ace_overheating_dispersion = 0.75;
	};

	class AUX_95th_WestarM5_GL: AUX_95th_WestarM5_Base_F {
		DSS_DamageSystem_Power=12;
		scope = 2;
		displayName = "[95th] Westar-M5 GL Rifle";
		model = "3AS\3AS_Weapons\WestarM5\3AS_Westar_M5_GL.p3d";
		picture = "\z\AUX_95th\addons\weapons\westar_m5\data\ui\3as_westargl.paa";
		weaponInfoType = "RscWeaponZeroing";
		modelOptics = "3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
		muzzles[] = {"this","AUX_95th_WestarM5_GL_F"};
		class OpticsModes {
			class Ironsights {
				opticsID = 1;
				useModelOptics = 0;
				opticsFlare = "true";
				opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
				opticsDisablePeripherialVision = 0.67;
				opticsZoomMin = 0.375;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				visionMode[] = {};
				distanceZoomMin = 100;
				distanceZoomMax = 100;
			};
			class Scope: Ironsights {
				opticsID = 2;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
				opticsDisablePeripherialVision = 0.67;
				opticsZoomMin = 0.122173;
				opticsZoomMax = 0.122173;
				opticsZoomInit = 0.122173;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal","NVG"};
				opticsFlare = "true";
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				cameraDir = "";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class CowsSlot: CowsSlot {
				compatibleItems[] = {"SEA_Optic_Holo_Two_Blue","SEA_Optic_Holo_Two_Red","SEA_Optic_Holo_Two_Yellow","SEA_Optic_Holo_Two_Green","SEA_Optic_Holo_One_Blue","SEA_Optic_Holo_One_Green","SEA_Optic_Holo_One_Red","SEA_Optic_Holo_One_Yellow"};
			};
			mass = 80;
		};
		ace_overheating_mrbs = 3000;
		ace_overheating_slowdownFactor = 1;
		ace_overheating_allowSwapBarrel = 0;
		ace_overheating_dispersion = 0.75;
	};
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class AUX_95th_Optic_Scope_WestarM5: ItemCore {
		scope = 2;
		displayName = "3AS Long Optic";
		picture = "\z\AUX_95th\addons\weapons\westar_m5\data\ui\Westar_Scope.paa";
		model = "\3AS\3AS_Weapons\WestarM5\3AS_Westar_Scope_F.p3d";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F {
			mass = 7;
			modelOptics = "\3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
			class OpticsModes {
				class AUX_95th_Scope_Optics {
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = 0.0138;
					opticsZoomMax = 0.0416;
					opticsZoomInit = 0.0416;
					discreteDistance[] = {100,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 1000;
					nFovLimit = 0.07;
					discreteFov[] = {0.0416,0.0138};
					discreteInitIndex = 0;
					modelOptics[] = {"\3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d"};
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal","NVG"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
				class AUX_95th_OverSights_Optic: AUX_95th_Scope_Optics {
					opticsID = 2;
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					discretefov[] = {};
				};
			};
		};
	};
};

#include "CfgEventHandlers.hpp"