#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {"AUX_95th_T20"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "AUX_95th_main",
            "AUX_95th_weapons_shared",
            "A3_data_F","A3_anims_F",
            "A3_weapons_F",
            "A3_characters_F",
			"SFA_Weapons_N"
        };
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgMagazines {
	class 100Rnd_65x39_caseless_mag;
	class AUX_95th_T20_mag: 100Rnd_65x39_caseless_mag {
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
class Mode_SemiAuto;

class CfgWeapons {
	class Rifle_Long_Base_F;
	class SFA_rifle_base: Rifle_Long_Base_F {
		class WeaponSlotsInfo;
	};

	class SFA_T20_rifle: SFA_rifle_base {};

	class AUX_95th_T20: SFA_T20_rifle {
		DSS_DamageSystem_Power=40;
		author = "95th Legion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[95th] T20";
		magazines[] = {"AUX_95th_Universal_Heavy_Mag"};
		magazineWell[] = {};
		drySound[] = {"\z\AUX_95th\addons\weapons\shared\Sounds\weapon_dry.wss",5,1,10};
		canShootInWater = 1;
		descriptionShort = "Refurbished rifle from the old republic Era";
		modes[] = {"Single","close","short","medium"};
		class Single: Mode_SemiAuto {
			sounds[] = {"StandardSound"};
			class BaseSoundModeType {
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType {
				soundSetShot[] = {"T20_Shot_SoundSet"};
			};
			reloadTime = 0.3;
			dispersion = 0.00301;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		class close: Single
		{
			showToPlayer = 0;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 400;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
			minRange = 300;
			minRangeProbab = 0.2;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 900;
			minRange = 400;
			minRangeProbab = 0.2;
			midRange = 700;
			midRangeProbab = 0.7;
			maxRange = 900;
			maxRangeProbab = 0.2;
		};
		inertia = 1.4;
		dexterity = 1.7;
		initSpeed = -1;
		recoil = "SFA_Rifle_recoil";
		maxRecoilSway = 0.015;
		swayDecaySpeed = 1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {"SEA_Optic_Holo_Two_Blue","SEA_Optic_Holo_Two_Red","SEA_Optic_Holo_Two_Yellow","SEA_Optic_Holo_Two_Green","SEA_Optic_Holo_One_Blue","SEA_Optic_Holo_One_Green","SEA_Optic_Holo_One_Red","SEA_Optic_Holo_One_Yellow"};
			};
		};
		class FlashLight {
			color[] = {180,160,130};
			ambient[] = {0.9,0.8,0.7};
			intensity = 100;
			size = 1;
			innerAngle = 5;
			outerAngle = 100;
			coneFadeCoef = 10;
			position = "flash dir";
			direction = "flash";
			useFlare = 1;
			flareSize = 1.5;
			flareMaxDistance = 100;
			dayLight = 1;
			class Attenuation
			{
				start = 0;
				constant = 0.5;
				linear = 0.1;
				quadratic = 0.2;
				hardLimitStart = 27;
				hardLimitEnd = 34;
			};
			scale[] = {0};
		};
	};
};

#include "CfgEventHandlers.hpp"