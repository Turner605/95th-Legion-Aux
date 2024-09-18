#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {"AUX_95th_Z6","AUX_95th_Z6_fried"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "AUX_95th_main",
            "AUX_95th_weapons_shared",
            "A3_data_F","A3_anims_F",
            "A3_weapons_F",
            "A3_characters_F"
        };
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgRecoils {
	class recoil_default;
	class AUX_95th_recoil_Z6: recoil_default {
		muzzleOuter[] = {0.4,-0.6,0.6,0.6};
		kickBack[] = {0.06,0.09};
		temporary = 0.005;
	};
};

class CfgMagazines {
	class 100Rnd_65x39_caseless_mag;
	class AUX_95th_Z6_mag: 100Rnd_65x39_caseless_mag {
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		author = "95th Legion";
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\z\AUX_95th\addons\weapons\z6\data\ui\z6_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\z6\z6_mag.p3d";
		count = 300;
		displayName = "$STR_JLTS_names_Z6_mag";
		displayNameShort = "$STR_JLTS_snames_EnergyCellStandard";
		descriptionShort = "$STR_JLTS_descs_Z6_mag";
		ammo = "AUX_95th_Heavy_Blue_Ammo";
		tracersEvery = 1;
		initSpeed = 920;
		mass = 9;
	};
};

class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons {
	class Rifle_Long_Base_F;
	class LMG_Mk200_F: Rifle_Long_Base_F {
		class GunParticles;
		class GunClouds;
		class WeaponSlotsInfo;
	};

	class UGL_F;
	class AUX_95th_Z6: LMG_Mk200_F {
		DSS_DamageSystem_Power=15;
		WBK_UseHeavyWeaponFramework = "true";
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "AUX_95th_Z6_fried";
		JLTS_repairTime = 40;
		author = "95th Legion";
		scope = 2;
		baseWeapon = "AUX_95th_Z6";
		displayName = "[95th] Z6";
		descriptionShort = "$STR_JLTS_descs_BlasterRotaryCannon";
		picture = "\z\AUX_95th\addons\weapons\z6\data\ui\Z6_ui_ca.paa";
		model = "\MRC\JLTS\weapons\Z6\Z6.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\z\AUX_95th\addons\weapons\z6\data\Z6_1_co.paa","\z\AUX_95th\addons\weapons\z6\data\Z6_2_co.paa"};
		recoil = "AUX_95th_recoil_Z6";
		maxZeroing = 1200;
		handAnim[] = {"OFP2_ManSkeleton","\z\AUX_95th\addons\weapons\z6\anims\Z6_handanim.rtm"};
		magazines[] = {"AUX_95th_Universal_Heavy_Mag"};
		magazineWell[] = {};
		fireLightDiffuse[] = {0,0,1};
		drySound[] = {"\z\AUX_95th\addons\weapons\shared\Sounds\weapon_dry.wss",5,1,10};
		modes[] = {"manual","close","short","medium","far_optic1","far_optic2"};
		class manual: Mode_FullAuto {
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType {
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType {
				soundSetShot[] = {"AUX_95th_Heavy_Shot_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = {""};
			};
			reloadTime = 0.075;
			dispersion = 0.00102;
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
		};
		class close: manual {
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close {
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close {
			burst = 7;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class far_optic1: medium {
			requiredOpticType = 1;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 1000;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.4;
			maxRange = 650;
			maxRangeProbab = 0.01;
		};
		class far_optic2: far_optic1 {
			burst = 3;
			requiredOpticType = 2;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 900;
			maxRangeProbab = 0.01;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 900;
		};
		aiDispersionCoefY = 24;
		aiDispersionCoefX = 21;
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 264;
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

	class AUX_95th_Z6_fried: AUX_95th_Z6 {
		baseWeapon = "AUX_95th_Z6_fried";
		displayName = "$STR_JLTS_names_Z6Fried";
		descriptionShort = "$STR_JLTS_descs_BlasterFried";
		scope = 1;
		picture = "\z\AUX_95th\addons\weapons\z6\data\ui\Z6_fried_ui_ca.paa";
		muzzles[] = {"this"};
		magazines[] = {};
		JLTS_isFried = 1;
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
	};
};

#include "CfgEventHandlers.hpp"