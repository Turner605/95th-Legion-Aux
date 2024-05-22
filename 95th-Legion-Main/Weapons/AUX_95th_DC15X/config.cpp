class CfgPatches {
	class AUX_95th_Weapons_DC15X {
		author = "95th Legion";
		name = "AUX 95th Weapons DC15X";
		requiredAddons[] = {"A3_data_F","A3_anims_F","A3_weapons_F","A3_characters_F","JLTS_weapons_Reloads"};
		weapons[] = {"AUX_95th_DC15X","AUX_95th_DC15X_fried","AUX_95th_DC15X_scope","AUX_95th_DC15X_Scoped"};
		units[] = {};
		magazines[] = {};
	};
};

class CfgMagazines {
	class 30Rnd_65x39_caseless_mag;
	class CA_Magazine;
	class AUX_95th_DC15X_Mag: 30Rnd_65x39_caseless_mag {
		displayName = "[95th] DC15X Mag";
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		author = "95th Aux Team";
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\AUX_95th_DC15X\Data\ui\DC15X_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
		count = 15;
		displayNameShort = "$STR_JLTS_snames_EnergyCellHigh";
		descriptionShort = "$STR_JLTS_descs_DC15x_mag";
		ammo = "JLTS_bullet_sniper_blue"; // replace ammo = "AUX_95th_DC15X_Ammo";
		tracersEvery = 1;
	};
};

class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons {
	class optic_lrps;
	class InventoryOpticsItem_Base_F;
	class AUX_95th_DC15X_scope: optic_lrps {
		displayName = "$STR_JLTS_names_DC15X_scope";
		picture = "\AUX_95th_DC15X\Data\ui\DC15X_scope_ui_ca.paa";
		descriptionShort = "$STR_JLTS_descs_DC15X_scope";
		model = "\MRC\JLTS\weapons\DC15X\DC15X_scope.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\AUX_95th_DC15X\Data\DC15X_scope_co.paa"};
		class ItemInfo: InventoryOpticsItem_Base_F {
			mass = 16;
			opticType = 2;
			weaponInfoType = "RscWeaponRangeZeroingFOV";
			optics = 1;
			modelOptics = "\A3\Weapons_F\acc\reticle_sniper_F";
			class OpticsModes {
				class Snip {
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = 0.01;
					opticsZoomMax = 0.042;
					opticsZoomInit = 0.042;
					discreteDistance[] = {300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 300;
					distanceZoomMax = 2400;
					discretefov[] = {0.042,0.01};
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					modelOptics[] = {"\A3\Weapons_F\acc\reticle_lrps_F","\A3\Weapons_F\acc\reticle_lrps_z_F"};
					visionMode[] = {"Normal","NVG","TI"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
			};
		};
	};

	class Rifle_Base_F;
	class arifle_MX_Base_F: Rifle_Base_F {
		class WeaponSlotsInfo;
		class GunParticles;
	};

	class AUX_95th_Stun_Muzzle;

	class UGL_F;
	class AUX_95th_DC15X: arifle_MX_Base_F {
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "AUX_95th_DC15X_fried";
		JLTS_repairTime = 33;
		author = "95th Aux Team";
		scope = 2;
		displayName = "$STR_JLTS_names_DC15X";
		descriptionShort = "$STR_JLTS_descs_BlasterRifle";
		picture = "\AUX_95th_DC15X\Data\ui\DC15X_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15X\DC15X.p3d";
		baseWeapon = "AUX_95th_DC15X";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\AUX_95th_DC15X\Data\DC15X_co.paa"};
		handAnim[] = {"OFP2_ManSkeleton","\AUX_95th_DC15X\Anims\DC15X_handanim.rtm"};
		magazines[] = {"AUX_95th_DC15X_mag"};
		magazineWell[] = {};
		modes[] = {"Single"};
		fireLightDiffuse[] = {0,0,1};
		drySound[] = {"AUX_95th_Shared\Sounds\weapon_dry.wss",5,1,10};
		muzzles[] = {"this","Stun"};
		class Stun: AUX_95th_Stun_Muzzle{};
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
				begin1[] = {"AUX_95th_DC15X\Sounds\dc15x_fire",2.5,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.5;
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			dispersion = 0.00073;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 450;
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
				begin1[] = {"AUX_95th_DC15X\Sounds\dc15x_fire",2.5,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.096;
			recoil = "recoil_auto_mx";
			recoilProne = "recoil_auto_prone_mx";
			dispersion = 0.00073;
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
				begin1[] = {"AUX_95th_DC15X\Sounds\dc15x_fire",2.5,1,1800};
				soundBegin[] = {"begin1",1};
			};
			dispersion = 0.00073;
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
				begin1[] = {"AUX_95th_DC15X\Sounds\dc15x_fire",2.5,1,1800};
				soundBegin[] = {"begin1",1};
			};
			dispersion = 0.00073;
			requiredOpticType = 1;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 650;
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
				begin1[] = {"AUX_95th_DC15X\Sounds\dc15x_fire",2.5,1,1800};
				soundBegin[] = {"begin1",1};
			};
			dispersion = 0.00073;
			requiredOpticType = 2;
			minRange = 100;
			minRangeProbab = 0.2;
			midRange = 550;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = 0.05;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 800;
		};
		class Pointer {
			irLaserPos = "laser pos";
			irLaserEnd = "laser dir";
			irDistance = 5;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 92;
			class CowsSlot: CowsSlot {
				compatibleItems[] = {"AUX_95th_DC15X_scope"};
				iconPicture = "";
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

	class AUX_95th_DC15X_Scoped: AUX_95th_DC15X {
		scope = 1;
		class LinkedItems {
			class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "AUX_95th_DC15X_scope";
			};
		};
	};

	class AUX_95th_DC15X_fried: AUX_95th_DC15X {
		baseWeapon = "AUX_95th_DC15X_fried";
		displayName = "$STR_JLTS_names_DC15XFried";
		descriptionShort = "$STR_JLTS_descs_BlasterFried";
		scope = 1;
		picture = "\AUX_95th_DC15X\Data\ui\DC15X_fried_ui_ca.paa";
		muzzles[] = {"this"};
		magazines[] = {};
		JLTS_isFried = 1;
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
	};
};
