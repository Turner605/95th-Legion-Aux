class CfgPatches {
	class AUX_95th_Weapons_DW32S {
		author = "95th Legion";
		name = "AUX 95th Weapons DW32S";
		requiredAddons[] = {"A3_data_F","A3_anims_F","A3_weapons_F","A3_characters_F"};
		weapons[] = {"AUX_95th_DW32S"};
		units[] = {};
		magazines[] = {};
	};
};

class CfgMagazines {
	class 30Rnd_65x39_caseless_mag;
	class AUX_95th_DW32S_mag: 30Rnd_65x39_caseless_mag {
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 1;
		author = "95th Legion";
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\AUX_95th_DW32S\Data\ui\DW32S_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DW32S\DW32S_mag.p3d";
		count = 20;
		displayName = "$STR_JLTS_names_DW32S_mag";
		displayNameShort = "$STR_JLTS_snames_EnergyCellStandard";
		descriptionShort = "$STR_JLTS_descs_DW32S_mag";
		ammo = "AUX_95th_Rifle_Blue_Ammo";
		tracersEvery = 1;
	};
};

class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons {
	class Rifle_Base_F;
	class arifle_MX_Base_F: Rifle_Base_F {
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;

	class AUX_95th_Stun_Muzzle;

	class AUX_95th_DW32S: arifle_MX_Base_F {
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 1;
		JLTS_friedItem = "";
		author = "95th Legion";
		scope = 2;
		displayName = "$STR_JLTS_names_DW32S";
		descriptionShort = "$STR_JLTS_descs_BlasterRifleScoped";
		picture = "\AUX_95th_DW32S\Data\ui\DW32S_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DW32S\DW32S.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\AUX_95th_DW32S\Data\DW32S_co.paa"};
		handAnim[] = {"OFP2_ManSkeleton","\AUX_95th_DW32S\Anims\DW32S_handanim.rtm"};
		magazines[] = {"AUX_95th_Universal_Sniper_Mag"};
		magazineWell[] = {};
		modes[] = {"Single"};
		fireLightDiffuse[] = {0,0,1};
		drySound[] = {"AUX_95th_Shared\Sounds\weapon_dry.wss",5,1,10};
		muzzles[] = {"this","Stun"};
		class Stun: AUX_95th_Stun_Muzzle{};
		distanceZoomMin = 400;
		distanceZoomMax = 400;
		class Single: Mode_SemiAuto {
			sounds[] = {"StandardSound"};
			class BaseSoundModeType {
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType {
				weaponSoundEffect = "";
				begin1[] = {"AUX_95th_DW32S\Sounds\dw32s_fire",1,1.1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.1;
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			dispersion = 0.00087;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class FullAuto: Mode_FullAuto {
			sounds[] = {"StandardSound"};
			class BaseSoundModeType {
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType {
				weaponSoundEffect = "";
				begin1[] = {"AUX_95th_DW32S\Sounds\dw32s_fire",1,1.1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.096;
			dispersion = 0.00087;
			recoil = "recoil_auto_mx";
			recoilProne = "recoil_auto_prone_mx";
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
		};
		class fullauto_medium: FullAuto {
			sounds[] = {"StandardSound"};
			class BaseSoundModeType {
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType {
				weaponSoundEffect = "";
				begin1[] = {"AUX_95th_DW32S\Sounds\dw32s_fire",1,1.1,1800};
				soundBegin[] = {"begin1",1};
			};
			showToPlayer = 0;
			burst = 3;
			aiBurstTerminable = 1;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1: Single {
			sounds[] = {"StandardSound"};
			class BaseSoundModeType {
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType {
				weaponSoundEffect = "";
				begin1[] = {"AUX_95th_DW32S\Sounds\dw32s_fire",1,1.1,1800};
				soundBegin[] = {"begin1",1};
			};
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2: single_medium_optics1 {
			sounds[] = {"StandardSound"};
			class BaseSoundModeType {
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType {
				weaponSoundEffect = "";
				begin1[] = {"AUX_95th_DW32S\Sounds\dw32s_fire",1,1.1,1800};
				soundBegin[] = {"begin1",1};
			};
			requiredOpticType = 2;
			showToPlayer = 0;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 700;
		};
		weaponInfoType = "RscOptics_nightstalker";
		modelOptics = "\a3\weapons_f\acc\reticle_nightstalker_f.p3d";
		class OpticsModes {
			class NCTALKEP {
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				opticsZoomMin = 0.025;
				opticsZoomMax = 0.0625;
				opticsZoomInit = 0.0625;
				discreteDistance[] = {200};
				discreteDistanceInitIndex = 0;
				distanceZoomMin = 100;
				distanceZoomMax = 1000;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal","NVG","Ti"};
				thermalMode[] = {5,6};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				cameraDir = "";
			};
			class Iron: NCTALKEP {
				opticsID = 2;
				useModelOptics = 0;
				opticsPPEffects[] = {"",""};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				discreteDistance[] = {200};
				discreteDistanceInitIndex = 0;
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.25;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				visionMode[] = {};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 68;
			class CowsSlot: CowsSlot {
				compatibleItems[] = {};
			};
			class MuzzleSlot: MuzzleSlot {
				compatibleItems[] = {};
			};
			class PointerSlot: PointerSlot {
				compatibleItems[] = {};
			};
			class UnderBarrelSlot: UnderBarrelSlot {
				compatibleItems[] = {};
			};
		};
		class GunParticles {
			class FirstEffect {
				directionName = "Konec hlavne";
				effectName = "RifleAssaultCloud";
				positionName = "Usti hlavne";
			};
		};
	};
};