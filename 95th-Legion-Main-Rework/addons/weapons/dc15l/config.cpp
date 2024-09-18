#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {};
		weapons[] = {"AUX_95th_DC15L","3AS_Bipod_DC15L_f"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_weapons_shared"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgRecoils {
	class recoil_default;
	class AUX_95th_recoil_DC15L: recoil_default {
		muzzleInner[] = {0,0,0.1,0.1};
		permanent = 0.1;
		muzzleOuter[] = {0.3,0.8,0.4,0.2};
		kickBack[] = {0.02,0.04};
		temporary = 0.01;
	};
};

class CfgMagazines {
	class 100Rnd_65x39_caseless_mag;
	class AUX_95th_DC15L_mag: 100Rnd_65x39_caseless_mag {
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		model = "\MRC\JLTS\weapons\z6\z6_mag.p3d";
		author = "95th Legion";
		scope = 2;
		displayName = "DC15L Energy Cell";
		displayNameShort = "$STR_JLTS_snames_EnergyCellStandard";
		descriptionShort = "Standard charge cell used by the DC-15L platform.";
		picture = "\AUX_95th_Weapons_Z6\Data\ui\z6_mag_ui_ca.paa";
		ammo = "AUX_95th_Heavy_Blue_Ammo";
		// ammo = "3AS_EC40_BluePlasma";
		count = 200;
		mass = 23;
		initSpeed = 417;
		tracersEvery = 1;
		lastRoundsTracer = 200;
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

	class AUX_95th_DC15L_Base_F: Rifle_Base_F {
		author = "$STR_3as_Studio";
		magazines[] = {"AUX_95th_Universal_Heavy_Mag"};
		reloadAction = "GestureReloadMX";
		magazineReloadSwitchPhase = 0.4;
		discreteDistanceInitIndex = 0;
		recoil = "AUX_95th_recoil_DC15L";
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
				compatibleItems[] = {"SEA_Optic_Holo_Two_Blue","SEA_Optic_Holo_Two_Red","SEA_Optic_Holo_Two_Yellow","SEA_Optic_Holo_Two_Green","SEA_Optic_Holo_One_Blue","SEA_Optic_Holo_One_Green","SEA_Optic_Holo_One_Red","SEA_Optic_Holo_One_Yellow"};
			};
			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"acc_flashlight","acc_pointer_IR"};
			};
			class UnderBarrelSlot: UnderBarrelSlot {
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"3AS_Bipod_DC15L_f"};
			};
		};
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		distanceZoomMin = 400;
		distanceZoomMax = 400;
		descriptionShort = "DC-15L, 3rd Army Studios";
		handAnim[] = {"OFP2_ManSkeleton","\z\AUX_95th\addons\weapons\dc15l\anim\DC15L_handanim.rtm"};
		selectionFireAnim = "zasleh";
		fireLightDiffuse[] = {7,110,176};
		fireLightIntensity = 0.02;
		flash = "gunfire";
		flashSize = 0.1;
		modes[] = {"FullAuto"};
		muzzles[] = {"this","Stun"};
		class Stun: AUX_95th_Stun_Muzzle_Rifle{};
		class FullAuto: Mode_FullAuto {
			reloadTime = 0.1;
			dispersion = 0.00079;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			soundContinuous = 0;
			soundBurst = 0;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType {
				soundSetShot[] = {"AUX_95th_Heavy_Shot_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = {""};
			};
		};
		aiDispersionCoefY = 6;
		aiDispersionCoefX = 4;
		caseless[] = {"",1,1,1};
		soundBullet[] = {"caseless",1};
		drySound[] = {"\z\AUX_95th\addons\weapons\shared\sounds\weapon_dry.wss",2,1,20};
		reloadMagazineSound[] = {"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",1,1,30};
	};

	class AUX_95th_DC15L: AUX_95th_DC15L_Base_F {
		DSS_DamageSystem_Power=15;
		scope = 2;
		displayName = "[95th] DC-15L Rifle";
		model = "3AS\3AS_Weapons\DC15L\3AS_DC15L_f.p3d";
		picture = "\z\AUX_95th\addons\weapons\dc15l\data\UI\3as_dc15l.paa";
		weaponInfoType = "RscWeaponZeroing";
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
		ace_overheating_allowSwapBarrel = 1;
		ace_overheating_dispersion = 0.75;
	};

	class ItemCore;
	class InventoryUnderItem_Base_F;
	class AUX_95th_Bipod_DC15L_f: ItemCore {
		scope = 2;
		displayName = "3AS DC15L Bipod";
		picture = "";
		model = "3AS\3AS_Weapons\DC15L\3AS_DC15L_Bipod.p3d";
		class ItemInfo: InventoryUnderItem_Base_F {
			deployedPivot = "bipod";
			hasBipod = 1;
			mass = 10;
			soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down","db-3",1,20};
			soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up","db-3",1,20};
		};
		inertia = 0.2;
	};
};

#include "CfgEventHandlers.hpp"