class CfgPatches {
	class AUX_95th_Weapons_DC15A {
		author = "95th Legion";
		name = "AUX 95th Weapons DC15A";
		requiredAddons[] = {"A3_data_F","A3_anims_F","A3_weapons_F","A3_characters_F","JLTS_weapons_Reloads"};
		weapons[] = {"AUX_95th_DC15A","AUX_95th_DC15A_plastic","AUX_95th_DC15A_fried","AUX_95th_DC15A_plastic_fried","AUX_95th_DC15A_ugl","AUX_95th_DC15A_ugl_plastic","AUX_95th_DC15A_ugl_fried","AUX_95th_DC15A_ugl_plastic_fried"};
		units[] = {};
		magazines[] = {};
	};
};

class CfgMagazines {
	class 30Rnd_65x39_caseless_mag;
	class CA_Magazine;
	class AUX_95th_DC15A_mag: 30Rnd_65x39_caseless_mag {
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		author = "95th Legion";
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "AUX_95th_DC15A\Data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count = 60;
		displayName = "$STR_JLTS_names_DC15A_mag";
		displayNameShort = "$STR_JLTS_snames_EnergyCellStandard";
		descriptionShort = "$STR_JLTS_descs_DC15A_mag";
		ammo = "AUX_95th_Rifle_Blue_Ammo";
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
	class Rifle_Base_F;
	class arifle_MX_Base_F: Rifle_Base_F {
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;

	class AUX_95th_Stun_Muzzle;

	class AUX_95th_DC15A: arifle_MX_Base_F {
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "AUX_95th_DC15A_fried";
		JLTS_repairTime = 33;
		author = "95th Legion";
		scope = 2;
		displayName = "$STR_JLTS_names_DC15A";
		descriptionShort = "$STR_JLTS_descs_BlasterRifle";
		picture = "AUX_95th_DC15A\Data\ui\DC15A_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A.p3d";
		hiddenSelections[] = {"camo1","illum"};
		hiddenSelectionsTextures[] = {"AUX_95th_DC15A\Data\DC15A_co.paa"};
		hiddenSelectionsMaterials[] = {"","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		handAnim[] = {"OFP2_ManSkeleton","\AUX_95th_DC15A\Anims\DC15A_handanim.rtm"};
		reloadAction = "GestureReload_JLTS_DC15A";
		magazines[] = {"JLTS_DC15A_mag","AUX_95th_Universal_Rifle_Mag"};
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
				begin1[] = {"AUX_95th_DC15A\Sounds\dc15a_fire",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.096;
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
				begin1[] = {"AUX_95th_DC15A\Sounds\dc15a_fire",1,1,1800};
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
				begin1[] = {"AUX_95th_DC15A\Sounds\dc15a_fire",1,1,1800};
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
				begin1[] = {"AUX_95th_DC15A\Sounds\dc15a_fire",1,1,1800};
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
				begin1[] = {"AUX_95th_DC15A\Sounds\dc15a_fire",1,1,1800};
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
		irLaserPos = "laser pos";
		irLaserEnd = "laser dir";
		irDistance = 5;
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 97;
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] = {};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] = {};
			};
		};
		class GunParticles {
			class FirstEffect
			{
				directionName = "Konec hlavne";
				effectName = "RifleAssaultCloud";
				positionName = "Usti hlavne";
			};
		};
	};

	class AUX_95th_DC15A_ugl: AUX_95th_DC15A {
		JLTS_friedItem = "AUX_95th_DC15A_UGL_fried";
		JLTS_repairTime = 35;
		displayName = "$STR_JLTS_names_DC15AUGL";
		picture = "AUX_95th_DC15A\Data\ui\DC15A_ugl_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_ugl.p3d";
		hiddenSelections[] = {"camo1","camo2","illum"};
		hiddenSelectionsTextures[] = {"AUX_95th_DC15A\Data\DC15A_co.paa","AUX_95th_DC15A\Data\DC15A_ugl_co.paa"};
		hiddenSelectionsMaterials[] = {"","","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		muzzles[] = {"this","EGLM"};
		class EGLM: UGL_F {
			displayName = "$STR_JLTS_names_GL";
			descriptionShort = "$STR_JLTS_names_UGL";
			useModelOptics = 0;
			useExternalOptic = 0;
			cameraDir = "OP_look";
			discreteDistance[] = {100,200,300,400};
			discreteDistanceCameraPoint[] = {"OP_eye","OP_eye2","OP_eye3","OP_eye4"};
			discreteDistanceInitIndex = 0;
		};
		irLaserPos = "";
		irLaserEnd = "";
		irDistance = 0;
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 110;
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] = {};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] = {};
			};
		};
	};

	class AUX_95th_DC15A_plastic: AUX_95th_DC15A {
		JLTS_friedItem = "AUX_95th_DC15A_plastic_fried";
		displayName = "$STR_JLTS_names_DC15APlastic";
		picture = "AUX_95th_DC15A\Data\ui\DC15A_plastic_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_plastic.p3d";
		hiddenSelectionsTextures[] = {"AUX_95th_DC15A\Data\DC15A_plastic_co.paa"};
	};

	class AUX_95th_DC15A_ugl_plastic: AUX_95th_DC15A_ugl {
		JLTS_friedItem = "AUX_95th_DC15A_ugl_plastic_fried";
		displayName = "$STR_JLTS_names_DC15AUGLPlastic";
		picture = "AUX_95th_DC15A\Data\ui\DC15A_ugl_plastic_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_ugl_plastic.p3d";
		hiddenSelectionsTextures[] = {"AUX_95th_DC15A\Data\DC15A_plastic_co.paa","AUX_95th_DC15A\Data\DC15A_ugl_co.paa"};
	};

	class AUX_95th_DC15A_fried: AUX_95th_DC15A {
		baseWeapon = "AUX_95th_DC15A_fried";
		displayName = "$STR_JLTS_names_DC15AFried";
		descriptionShort = "$STR_JLTS_descs_BlasterFried";
		scope = 1;
		picture = "AUX_95th_DC15A\Data\ui\DC15A_fried_ui_ca.paa";
		magazines[] = {};
		JLTS_isFried = 1;
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
		class Stun: Stun {
			displayName = "$STR_JLTS_names_StunModeFried";
			magazines[] = {};
			drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
		};
	};

	class AUX_95th_DC15A_plastic_fried: AUX_95th_DC15A_plastic {
		baseWeapon = "AUX_95th_DC15A_plastic_fried";
		displayName = "$STR_JLTS_names_DC15APlasticFried";
		descriptionShort = "$STR_JLTS_descs_BlasterFried";
		scope = 1;
		picture = "AUX_95th_DC15A\Data\ui\DC15A_plastic_fried_ui_ca.paa";
		magazines[] = {};
		JLTS_isFried = 1;
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
		class Stun: Stun {
			displayName = "$STR_JLTS_names_StunModeFried";
			magazines[] = {};
			drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
		};
	};

	class AUX_95th_DC15A_UGL_fried: AUX_95th_DC15A_ugl {
		baseWeapon = "AUX_95th_DC15A_UGL_fried";
		displayName = "$STR_JLTS_names_DC15AUGLFried";
		descriptionShort = "$STR_JLTS_descs_BlasterFried";
		scope = 1;
		picture = "AUX_95th_DC15A\Data\ui\DC15A_UGL_fried_ui_ca.paa";
		muzzles[] = {"this"};
		magazines[] = {};
		JLTS_isFried = 1;
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
	};

	class AUX_95th_DC15A_ugl_plastic_fried: AUX_95th_DC15A_ugl_plastic {
		baseWeapon = "AUX_95th_DC15A_ugl_plastic_fried";
		displayName = "$STR_JLTS_names_DC15AUGLPlasticFried";
		descriptionShort = "$STR_JLTS_descs_BlasterFried";
		scope = 1;
		picture = "AUX_95th_DC15A\Data\ui\DC15A_UGL_plastic_fried_ui_ca.paa";
		muzzles[] = {"this"};
		magazines[] = {};
		JLTS_isFried = 1;
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
	};
};