#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {};
		weapons[] = {"AUX_95th_DC17SA_Dual"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_weapons_shared", "3AS_Weapons_Republic_DC17S"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgRecoils {
	class recoil_default;
	class AUX_95th_Recoil_Pistol_Dual: recoil_default {
		kickBack[] = {0.01,0.02};
		muzzleOuter[] = {0.1,0.4,0.2,0.2};
		temporary = 0.005;
	};
};

class CfgMagazines {
	class 16Rnd_9x21_Mag;
	class AUX_95th_DC17SA_Dual_Mag: 16Rnd_9x21_Mag {
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		author = "95th Legion";
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\z\AUX_95th\addons\weapons\shared\data\ui\Pistol_Mag.paa";
		model = "\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
		count = 50;
		displayName = "Dual DC17SA Mag";
		displayNameShort = "Normal Energy";
		descriptionShort = "DC17SA Dual Pistol Cells";
		ammo = "AUX_95th_Pistol_Blue_Ammo";
		tracersEvery = 1;
	};
};

class 3AS_MuzzleSlot_DC17S;
class 3AS_CowsSlot_DC17S;
class Mode_SemiAuto;

class CfgWeapons {
	// class AUX_95th_Stun_Muzzle_Pistol;

	class Pistol;
	class Pistol_Base_F: Pistol {
		class WeaponSlotsInfo;
	};

	class 3AS_DC17S_Base_F: Pistol_Base_F {
		class Single: Mode_SemiAuto {
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType {};
			class SilencedSound: BaseSoundModeType {};

		};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			class MuzzleSlot: 3AS_MuzzleSlot_DC17S {};
			class CowsSlot: 3AS_CowsSlot_DC17S {};
		};
	};

	class 3AS_DC17S_F: 3AS_DC17S_Base_F {};
	class 3AS_DC17S_W: 3AS_DC17S_F {};
	class 3AS_DC17S_Dual_F: 3AS_DC17S_Base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class MuzzleSlot;
			class CowsSlot;
			class PointerSlot;
		};
	};

	class 3AS_DC17S_Dual_W: 3AS_DC17S_Dual_F {};

	class AUX_95th_DC17SA_Dual: 3AS_DC17S_Dual_W {
		displayName = "[95th] Dual DC-17S Sidearm";
		baseWeapon = "AUX_95th_DC17SA_Dual";
		author = "95th Legion";

		cursor = "";
		cursorAim = "gl";
		swayModifier = 0.1;
		swayDecaySpeed = 2;

		recoil = "AUX_95th_Recoil_Pistol_Dual";
		drySound[] = {"z\AUX_95th\addons\weapons\shared\sounds\weapon_dry.wss",0.39810717,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07",1,1,10};
		magazines[] = {"AUX_95th_Universal_Pistol_Mag", "AUX_95th_DC17SA_Dual_Mag"};
		magazineWell[] = {};
		DSS_DamageSystem_Power=8;
		scope = 2;
		muzzles[] = {"this","Stun"};

		// class Stun: AUX_95th_Stun_Muzzle_Pistol {
		// 	reloadAction = "AUX_95th_GestureReloadDualDC17S";
		// 	reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07",1,1,10};
		// };

		class Single: Single {
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound: StandardSound {
				soundSetShot[] = {"AUX_95th_Pistol_Shot_SoundSet"};
			};
			class SilencedSound: SilencedSound {
				soundSetShot[] = {"AUX_95th_Pistol_Shot_SoundSet"};
			};
			recoil = "recoil_pistol_heavy";
			recoilProne = "recoil_prone_pistol_heavy";
		};
	};
};

#include "CfgEventHandlers.hpp"