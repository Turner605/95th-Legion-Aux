#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {};
		weapons[] = {"AUX_95th_DC15L"};
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

class 3AS_MuzzleSlot_DC15L;
class 3AS_CowsSlot_DC15L;
class 3AS_UnderBarrelSlot_DC15L;
class Mode_FullAuto;

class CfgWeapons {
	class Rifle;
	class Rifle_Base_F: Rifle {
		class WeaponSlotsInfo;
		class GunParticles;
	};

	class 3AS_DC15L_Base_F: Rifle_Base_F {
		class Library {};
		class GunParticles: GunParticles{};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class MuzzleSlot: 3AS_MuzzleSlot_DC15L {};
			class CowsSlot: 3AS_CowsSlot_DC15L {};
			class UnderBarrelSlot: 3AS_UnderBarrelSlot_DC15L {};
		};
		class FullAuto: Mode_FullAuto {
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType {};
			class SilencedSound: BaseSoundModeType {};
		};
		class close: FullAuto {};
		class short: close {};
		class medium: close {};
		class far_optic1: medium {};
		class far_optic2: far_optic1 {};
		class OpticsModes {
			class Ironsights {};
		};
	};

	class 3AS_DC15L_F: 3AS_DC15L_Base_F {};

	class AUX_95th_DC15L: 3AS_DC15L_F {
		displayName = "[95th] DC15L";
		baseWeapon = "AUX_95th_DC15L";
		scope = 2;
		author = "95th Aux";
		magazines[] = {"AUX_95th_Universal_Heavy_Mag"};
		magazineWell[] = {};
		recoil = "AUX_95th_recoil_DC15L";
		drySound[] = {"\z\AUX_95th\addons\weapons\shared\sounds\weapon_dry.wss",2,1,20};
		DSS_DamageSystem_Power=15;

		class FullAuto: FullAuto {
			class StandardSound: StandardSound {
				soundSetShot[] = {"AUX_95th_Heavy_Shot_SoundSet"};
			};

			class SilencedSound: SilencedSound {
				soundSetShot[] = {"AUX_95th_Heavy_Shot_SoundSet"};
			};
		};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			class CowsSlot: CowsSlot {
				compatibleItems[] = {"SEA_Optic_Holo_Two_Blue","SEA_Optic_Holo_Two_Red","SEA_Optic_Holo_Two_Yellow","SEA_Optic_Holo_Two_Green","SEA_Optic_Holo_One_Blue","SEA_Optic_Holo_One_Green","SEA_Optic_Holo_One_Red","SEA_Optic_Holo_One_Yellow"};
			};
		};
	};
};

#include "CfgEventHandlers.hpp"