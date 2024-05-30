class CfgPatches {
	class AUX_95th_Weapons_DC15C {
		author = "95th Legion";
		name = "AUX 95th Weapons DC15C";
		requiredAddons[] = {"3AS_Weapons"};
		units[] = {};
		weapons[] = {"AUX_95th_DC15C","AUX_95th_DC15C_GL","AUX_95th_optic_acog_DC15C","AUX_95th_optic_reflex_DC15C"};
	};
};

class CfgRecoils {
	class recoil_default;
	class AUX_95th_recoil_DC15C: recoil_default {
		muzzleInner[] = {0,0,0.1,0.1};
		permanent = 0.1;
		muzzleOuter[] = {0.5,1,0.6,0.4};
		kickBack[] = {0.04,0.05};
		temporary = 0.01;
	};
};

class CfgMagazines {
	class 30Rnd_65x39_caseless_mag;
	class AUX_95th_DC15S_mag: 30Rnd_65x39_caseless_mag {
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		author = "95th Legion";
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "AUX_95th_Weapons_DC15C\Data\ui\dc15c_mag.paa";
		model = "\MRC\JLTS\weapons\DC15S\DC15S_mag.p3d";
		count = 80;
		displayName = "DC15S Mag";
		displayNameShort = "Standard Energy";
		descriptionShort = "DC15S Magazine";
		ammo = "AUX_95th_Rifle_Blue_Ammo";
		tracersEvery = 1;
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

	class AUX_95th_Stun_Muzzle;
	
	class UGL_F;
	class AUX_95th_DC15C_Base_F: Rifle_Base_F {
		author = "95th Legion";
		magazines[] = {"AUX_95th_Universal_Rifle_Mag"};
		reloadAction = "GestureReloadMX";
		magazineReloadSwitchPhase = 0.4;
		discreteDistanceInitIndex = 0;
		recoil = "AUX_95th_recoil_DC15C";
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		inertia = 0.4;
		dexterity = 1.6;
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
				compatibleItems[] = {"AUX_95th_optic_acog_DC15C","AUX_95th_optic_reflex_DC15C","SEA_Optic_Holo_Two_Blue","SEA_Optic_Holo_Two_Red","SEA_Optic_Holo_Two_Yellow","SEA_Optic_Holo_Two_Green","SEA_Optic_Holo_One_Blue","SEA_Optic_Holo_One_Green","SEA_Optic_Holo_One_Red","SEA_Optic_Holo_One_Yellow"};
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
		descriptionShort = "DC-15C, 3rd Army Studios";
		handAnim[] = {"OFP2_ManSkeleton","\AUX_95th_Weapons_DC15C\Anim\DC15C_handanim.rtm"};
		selectionFireAnim = "zasleh";
		fireLightDiffuse[] = {7,110,176};
		fireLightIntensity = 0.02;
		flash = "gunfire";
		flashSize = 0.1;
		modes[] = {"FullAuto","Single"};
		muzzles[] = {"this","Stun"};
		class Stun: AUX_95th_Stun_Muzzle{};
		class FullAuto: Mode_FullAuto {
			reloadTime = 0.12;
			dispersion = 0.00106;
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
				soundSetShot[] = {"AUX_95th_Rifle_Shot_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = {""};
			};
		};
		class Single: Mode_SemiAuto {
			reloadTime = 0.12;
			dispersion = 0.00106;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.1;
			soundContinuous = 0;
			soundBurst = 0;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType {
				soundSetShot[] = {"AUX_95th_Rifle_Shot_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = {"AUX_95th_Rifle_Shot_SoundSet"};
			};
		};
		class AUX_95th_15CGL: UGL_F {
			displayName = "3AS DC15C GL";
			descriptionShort = "DC15CGL";
			useModelOptics = 0;
			useExternalOptic = 0;
			magazines[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_UGL_FlareWhite_F","3Rnd_UGL_FlareGreen_F","3Rnd_UGL_FlareRed_F","3Rnd_UGL_FlareYellow_F","3Rnd_UGL_FlareCIR_F","3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell","3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell"};
			magazineWell[] = {"UGL_40x36","3UGL_40x36"};
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
		drySound[] = {"\AUX_95th_Weapons_Shared\Sounds\weapon_dry.wss",2,1,20};
		reloadMagazineSound[] = {"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",1,1,30};
		ace_overheating_mrbs = 3000;
		ace_overheating_slowdownFactor = 1;
		ace_overheating_allowSwapBarrel = 0;
		ace_overheating_dispersion = 0.75;
	};

	class AUX_95th_DC15C: AUX_95th_DC15C_Base_F {
		scope = 2;
		displayName = "[95th] DC-15C";
		model = "3AS\3AS_Weapons\DC15C\3AS_DC15C_f";
		picture = "\AUX_95th_Weapons_DC15C\Data\ui\dc15c.paa";
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
	};

	class AUX_95th_DC15C_GL: AUX_95th_DC15C_Base_F {
		scope = 2;
		displayName = "[95th] DC-15C GL Rifle";
		model = "3AS\3AS_Weapons\DC15C\3AS_DC15C_GL.p3d";
		picture = "\AUX_95th_Weapons_DC15C\Data\ui\dc15cgl.paa";
		weaponInfoType = "RscWeaponZeroing";
		modelOptics = "3AS\3AS_Weapons\Data\A3_2d_optic.p3d";
		muzzles[] = {"this","AUX_95th_15CGL"};
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Machineguns\LMG_03\Data\Anim\LIM.rtm"};
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
	};

	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class AUX_95th_optic_acog_DC15C: ItemCore {
		scope = 2;
		displayName = "3AS ACOG Optic";
		picture = "\AUX_95th_Weapons_DC15C\Data\ui\ACOG_Scope.paa";
		model = "\3AS\3AS_Weapons\DC15C\3AS_DC15C_ACOG_Sight_f.p3d";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F {
			mass = 7;
			modelOptics = "\3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
			class OpticsModes {
				class AUX_95th_DC15C_Optic {
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = 0.0555;
					opticsZoomMax = 0.13;
					opticsZoomInit = 0.13;
					discreteDistance[] = {100,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 1000;
					nFovLimit = 0.07;
					discreteFov[] = {0.13,0.0555};
					discreteInitIndex = 0;
					modelOptics[] = {"\3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d"};
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal","NVG"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
				class IronOnTopOfMyOptics: AUX_95th_DC15C_Optic {
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

	class AUX_95th_optic_reflex_DC15C: ItemCore {
		scope = 2;
		displayName = "3AS Reflex Optic";
		picture = "\AUX_95th_Weapons_DC15C\Data\ui\Reflex_Scope.paa";
		model = "\3AS\3AS_Weapons\DC15C\3AS_DC15C_Reflex_f.p3d";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F {
			mass = 6;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes {
				class aco {
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"OpticsBlur1"};
				};
			};
		};
	};
};
