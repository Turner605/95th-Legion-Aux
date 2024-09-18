#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {};
		weapons[] = {"AUX_95th_DP23","AUX_95th_DP23_fried","AUX_95th_DP23_shield","AUX_95th_DP23_shield_fried"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "AUX_95th_main",
            "AUX_95th_weapons_shared",
            "A3_data_F",
            "A3_anims_F",
            "A3_weapons_F",
            "A3_characters_F"
        };
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgMagazines {
	class 30Rnd_65x39_caseless_mag;
	class CA_Magazine;
	class AUX_95th_DP23_mag: 30Rnd_65x39_caseless_mag {
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		author = "95th Legion";
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\z\AUX_95th\addons\weapons\dp23\data\ui\DP23_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DP23\DP23_mag.p3d";
		count = 20;
		displayName = "$STR_JLTS_names_DP23_mag";
		displayNameShort = "$STR_JLTS_snames_EnergyCellLow";
		descriptionShort = "$STR_JLTS_descs_DP23_mag";
		ammo = "AUX_95th_Shotgun_Blue_Ammo";
		tracersEvery = 1;
	};
};

class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgRecoils {
	class AUX_95th_recoil_DP23 {
		muzzleOuter[] = {0,0.5,0.3,0.2};
		muzzleInner[] = {0,0,0.1,0.1};
		kickBack[] = {0.03,0.06};
		permanent = 0.2;
		temporary = 0.3;
	};
};

class CfgWeapons {
	class Rifle_Base_F;
	class arifle_MX_Base_F: Rifle_Base_F {
		class WeaponSlotsInfo;
		class GunParticles;
	};

	class AUX_95th_Stun_Muzzle_Rifle;

	class UGL_F;
	class AUX_95th_DP23: arifle_MX_Base_F {
		DSS_DamageSystem_Power=10;
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "AUX_95th_DP23_fried";
		JLTS_repairTime = 25;
		JLTS_canHaveShield = 1;
		JLTS_shieldedWeapon = "AUX_95th_DP23_shield";
		author = "95th Legion";
		fireSpreadAngle = 1;
		scope = 2;
		displayName = "[95th] DP23";
		descriptionShort = "$STR_JLTS_descs_BlasterScatter";
		picture = "z\AUX_95th\addons\weapons\dp23\data\ui\DP23_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DP23\DP23.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"z\AUX_95th\addons\weapons\dp23\data\DP23_co.paa"};
		handAnim[] = {"OFP2_ManSkeleton","\z\AUX_95th\addons\weapons\dp23\anims\DP23_handanim.rtm"};
		magazines[] = {"AUX_95th_Universal_Shotgun_Mag"};
		magazineWell[] = {};
		modes[] = {"Single"};
		recoil = "AUX_95th_recoil_DP23";
		fireLightDiffuse[] = {0,0,1};
		drySound[] = {"z\AUX_95th\addons\weapons\shared\sounds\weapon_dry.wss",5,1,10};
		muzzles[] = {"this","Stun"};
		class Stun: AUX_95th_Stun_Muzzle_Rifle{};
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
				begin1[] = {"\z\AUX_95th\addons\weapons\dp23\sounds\dp23_fire.wss",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.3;
			dispersion = 0.00073;
			minRange = 1;
			minRangeProbab = 0.5;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 60;
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
				begin1[] = {"\z\AUX_95th\addons\weapons\dp23\sounds\dp23_fire.wss",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.096;
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
				begin1[] = {"\z\AUX_95th\addons\weapons\dp23\sounds\dp23_fire.wss",1,1,1800};
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
				begin1[] = {"\z\AUX_95th\addons\weapons\dp23\sounds\dp23_fire.wss",1,1,1800};
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
				begin1[] = {"\z\AUX_95th\addons\weapons\dp23\sounds\dp23_fire.wss",1,1,1800};
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
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 85;
			class CowsSlot: CowsSlot {
				compatibleItems[] = {"SEA_Optic_Holo_Two_Blue","SEA_Optic_Holo_Two_Red","SEA_Optic_Holo_Two_Yellow","SEA_Optic_Holo_Two_Green","SEA_Optic_Holo_One_Blue","SEA_Optic_Holo_One_Green","SEA_Optic_Holo_One_Red","SEA_Optic_Holo_One_Yellow"};
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

	class AUX_95th_DP23_fried: AUX_95th_DP23 {
		JLTS_isFried = 1;
		JLTS_shieldedWeapon = "AUX_95th_DP23_shield_fried";
		baseWeapon = "AUX_95th_DP23_fried";
		displayName = "$STR_JLTS_names_DP23Fried";
		descriptionShort = "$STR_JLTS_descs_BlasterFried";
		scope = 1;
		picture = "z\AUX_95th\addons\weapons\dp23\data\ui\DP23_fried_ui_ca.paa";
		muzzles[] = {"this"};
		magazines[] = {};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
		class Stun: Stun {
			displayName = "$STR_JLTS_names_StunModeFried";
			magazines[] = {};
			drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
		};
	};

	class AUX_95th_DP23_shield: AUX_95th_DP23 {
		displayName = "$STR_JLTS_names_DP23Shield";
		baseWeapon = "AUX_95th_DP23_shield";
		scope = 1;
		JLTS_isShielded = 1;
		JLTS_baseWeapon = "AUX_95th_DP23";
		JLTS_friedItem = "AUX_95th_DP23_shield_fried";
		model = "\MRC\JLTS\weapons\DP23\DP23_shielded.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"z\AUX_95th\addons\weapons\dp23\data\DP23_co.paa","\MRC\JLTS\weapons\Shield\data\shield_co.paa"};
		handAnim[] = {"OFP2_ManSkeleton","\z\AUX_95th\addons\weapons\dp23\anims\DP23_shielded_handanim.rtm"};
		inertia = 0.8;
		recoil = "recoil_pdw";
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 110;
			class UnderBarrelSlot: UnderBarrelSlot {
				compatibleItems[] = {"JLTS_riot_shield_attachment","JLTS_riot_shield_212_attachment","JLTS_riot_shield_501_attachment","JLTS_riot_shield_101_attachment","JLTS_riot_shield_CG_attachment","JLTS_riot_shield_GD_attachment","JLTS_riot_shield_droid_attachment"};
			};
		};
	};
	class AUX_95th_DP23_shield_fried: AUX_95th_DP23_shield {
		JLTS_baseWeapon = "AUX_95th_DP23_fried";
		JLTS_isFried = 1;
		baseWeapon = "AUX_95th_DP23_shield_fried";
		displayName = "$STR_JLTS_names_DP23ShieldFried";
		descriptionShort = "$STR_JLTS_descs_BlasterFried";
		scope = 1;
		picture = "z\AUX_95th\addons\weapons\dp23\data\ui\DP23_fried_ui_ca.paa";
		magazines[] = {};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
		class Stun: Stun {
			displayName = "$STR_JLTS_names_StunModeFried";
			magazines[] = {};
			drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
		};
	};
};

#include "CfgEventHandlers.hpp"