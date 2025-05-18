#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {};
		weapons[] = {"AUX_95th_DC15X","AUX_95th_DC15X_fried","AUX_95th_DC15X_scope","AUX_95th_DC15X_Scoped"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_weapons_shared"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgRecoils {
	class recoil_default;
	class AUX_95th_recoil_DC15X: recoil_default {
		muzzleInner[] = {0,0,0.1,0.1};
		permanent = 0.1;
		muzzleOuter[] = {0.5,1,0.6,0.4};
		kickBack[] = {0.08,0.1};
		temporary = 0.01;
	};
};

class 3AS_MuzzleSlot_DC15X;
class 3AS_CowsSlot_DC15X;
class 3AS_UnderBarrelSlot_DC15X;
class Mode_SemiAuto;

class CfgWeapons {
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class 3AS_optic_DC15X_F: ItemCore {
		class ItemInfo: InventoryOpticsItem_Base_F {
			class OpticsModes {
				class Snip {};
			};
		};
	};

	class AUX_95th_optic_DC15X_F: 3AS_optic_DC15X_F {
		author = "95th Aux Team";
		class ItemInfo: ItemInfo {
			class OpticsModes: OpticsModes {
				class Snip: Snip {
					visionMode[] = {"Normal","NVG","TI"};
				};
			};
		};
	};

	class Rifle;
	class Rifle_Base_F: Rifle {
		class WeaponSlotsInfo;
		class GunParticles;
	};

	class 3AS_DC15X_Base_F: Rifle_Base_F {
		class Library {};
		class GunParticles: GunParticles{};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 297;
			class MuzzleSlot: 3AS_MuzzleSlot_DC15X {};
			class CowsSlot: 3AS_CowsSlot_DC15X {};
			class UnderBarrelSlot: 3AS_UnderBarrelSlot_DC15X {};
		};
		class Single: Mode_SemiAuto {
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType {};
			class SilencedSound: BaseSoundModeType {};
		};
		class far_optic1: Single {};
		class medium_optic2: Single {};
		class far_optic2: far_optic1 {};
		class OpticsModes {
			class Ironsights {};
		};
	};

	class 3AS_DC15X_F: 3AS_DC15X_Base_F {
		class LinkedItems {
			class LinkedItemsOptic {};
			class LinkedItemsUnderBarrel {};
		};
	};

	class AUX_95th_DC15X: 3AS_DC15X_F {
		displayName = "[95th] DC15X";
		author = "95th Aux Team";
		recoil = "AUX_95th_recoil_DC15X";
		baseWeapon = "AUX_95th_DC15X";
		scope = 2;
		drySound[] = {"z\AUX_95th\addons\weapons\shared\sounds\weapon_dry.wss",5,1,10};
		DSS_DamageSystem_Power=20;
		magazines[] = {"AUX_95th_Universal_Sniper_Mag"};
		magazineWell[] = {};

		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "AUX_95th_optic_DC15X_F";
		};

		class Single: Single {
			sounds[] = {"StandardSound", "SilencedSound"};
			reloadTime = 0.5;
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			dispersion = 0.00025;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;

			class StandardSound: StandardSound {
				soundSetShot[] = {"AUX_95th_Westar_Shot_SoundSet"};
			};
			class SilencedSound: SilencedSound {
				soundSetShot[] = {"AUX_95th_Westar_Shot_SoundSet"};
			};
		};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			class CowsSlot: CowsSlot {
				compatibleItems[] = {"3AS_optic_DC15L_F","AUX_95th_optic_DC15X_F","SEA_Optic_Holo_Two_Blue","SEA_Optic_Holo_Two_Red","SEA_Optic_Holo_Two_Yellow","SEA_Optic_Holo_Two_Green","SEA_Optic_Holo_One_Blue","SEA_Optic_Holo_One_Green","SEA_Optic_Holo_One_Red","SEA_Optic_Holo_One_Yellow"};
			};
		};
	};
};

#include "CfgEventHandlers.hpp"