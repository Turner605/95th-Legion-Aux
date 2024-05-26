class CfgPatches {
	class AUX_95th_Weapons_DC15S {
		author = "95th Legion";
		name = "AUX 95th Weapons DC15S";
		requiredAddons[] = {"A3_data_F","A3_anims_F","A3_weapons_F","A3_characters_F"};
		weapons[] = {"AUX_95th_DC15S","AUX_95th_DC15S_fried","AUX_95th_DC15S_shield","AUX_95th_DC15S_shield_fried"};
		units[] = {};
		magazines[] = {};
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
		picture = "AUX_95th_DC15S\Data\ui\DC15S_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15S\DC15S_mag.p3d";
		count = 80;
		displayName = "$STR_JLTS_names_DC15S_mag";
		descriptionShort = "$STR_JLTS_descs_DC15S_mag";
		displayNameShort = "$STR_JLTS_snames_EnergyCellStandard";
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
		class GunParticles;
		class GunClouds;
		class WeaponSlotsInfo;
	};
	class UGL_F;

	class AUX_95th_Stun_Muzzle;

	class AUX_95th_DC15S: arifle_MX_Base_F {
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "AUX_95th_DC15S_fried";
		JLTS_repairTime = 20;
		JLTS_canHaveShield = 1;
		JLTS_shieldedWeapon = "AUX_95th_DC15S_shield";
		author = "95th Legion";
		scope = 2;
		displayName = "$STR_JLTS_names_DC15S";
		descriptionShort = "$STR_JLTS_descs_BlasterCarbine";
		picture = "AUX_95th_DC15S\Data\ui\DC15S_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15S\DC15S.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"AUX_95th_DC15S\Data\DC15S_co.paa"};
		handAnim[] = {"OFP2_ManSkeleton","\AUX_95th_DC15S\Anims\DC15S_handanim.rtm"};
		reloadAction = "GestureReload_JLTS_DC15S";
		magazines[] = {"AUX_95th_Universal_Rifle_Mag"};
		magazineWell[] = {};
		fireLightDiffuse[] = {0,0,1};
		drySound[] = {"AUX_95th_DC15S\Sounds\weapon_dry.wss",5,1,10};
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
				begin1[] = {"AUX_95th_DC15S\Sounds\dc15s_fire",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.096;
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
				begin1[] = {"AUX_95th_DC15S\Sounds\dc15s_fire",1,1,1800};
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
				begin1[] = {"AUX_95th_DC15S\Sounds\dc15s_fire",1,1,1800};
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
				begin1[] = {"AUX_95th_DC15S\Sounds\dc15s_fire",1,1,1800};
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
				begin1[] = {"AUX_95th_DC15S\Sounds\dc15s_fire",1,1,1800};
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
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 66;
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {"SEA_Optic_Holo_Two_Blue","SEA_Optic_Holo_Two_Red","SEA_Optic_Holo_Two_Yellow","SEA_Optic_Holo_Two_Green","SEA_Optic_Holo_One_Blue","SEA_Optic_Holo_One_Green","SEA_Optic_Holo_One_Red","SEA_Optic_Holo_One_Yellow"};
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
	class AUX_95th_DC15S_fried: AUX_95th_DC15S {
		JLTS_isFried = 1;
		JLTS_shieldedWeapon = "AUX_95th_DC15S_shield_fried";
		baseWeapon = "AUX_95th_DC15S_fried";
		displayName = "$STR_JLTS_names_DC15SFried";
		descriptionShort = "$STR_JLTS_descs_BlasterFried";
		scope = 1;
		picture = "AUX_95th_DC15S\Data\ui\DC15S_fried_ui_ca.paa";
		magazines[] = {};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
		class Stun: Stun {
			displayName = "$STR_JLTS_names_StunModeFried";
			magazines[] = {};
			drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
		};
	};

	class AUX_95th_DC15S_new: AUX_95th_DC15S {
		scope = 1;
		displayName = "DC-15S new";
		JLTS_hasEMPProtection = 1;
		model = "\MRC\JLTS\weapons\DC15S\DC15S_new.p3d";
		hiddenSelectionsTextures[] = {"AUX_95th_DC15S\Data\new\DC15S_co.paa"};
	};

	class AUX_95th_DC15S_shield: AUX_95th_DC15S {
		displayName = "$STR_JLTS_names_DC15SShield";
		baseWeapon = "AUX_95th_DC15S_shield";
		scope = 1;
		JLTS_isShielded = 1;
		JLTS_baseWeapon = "AUX_95th_DC15S";
		JLTS_friedItem = "AUX_95th_DC15S_shield_fried";
		model = "\MRC\JLTS\weapons\DC15S\DC15S_shielded.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"AUX_95th_DC15S\Data\DC15S_co.paa","\MRC\JLTS\weapons\Shield\data\shield_co.paa"};
		handAnim[] = {"OFP2_ManSkeleton","\AUX_95th_DC15S\Anims\DC15S_shielded_handanim.rtm"};
		reloadAction = "GestureReload";
		inertia = 0.8;
		recoil = "recoil_pdw";
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 110;
			class UnderBarrelSlot: UnderBarrelSlot {
				compatibleItems[] = {"JLTS_riot_shield_attachment","JLTS_riot_shield_212_attachment","JLTS_riot_shield_501_attachment","JLTS_riot_shield_101_attachment","JLTS_riot_shield_CG_attachment","JLTS_riot_shield_GD_attachment","JLTS_riot_shield_droid_attachment"};
			};
		};
	};

	class AUX_95th_DC15S_shield_fried: AUX_95th_DC15S_shield {
		JLTS_baseWeapon = "AUX_95th_DC15S_fried";
		JLTS_isFried = 1;
		baseWeapon = "AUX_95th_DC15S_shield_fried";
		displayName = "$STR_JLTS_names_DC15SShieldFried";
		descriptionShort = "$STR_JLTS_descs_BlasterFried";
		scope = 1;
		picture = "AUX_95th_DC15S\Data\ui\DC15S_fried_ui_ca.paa";
		magazines[] = {};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
		class Stun: Stun {
			displayName = "$STR_JLTS_names_StunModeFried";
			magazines[] = {};
			drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
		};
	};
};
