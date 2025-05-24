#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {};
		weapons[] = {"AUX_95th_DC15S_Standard", "AUX_95th_DC15S_Stun"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_weapons_shared"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class 3AS_MuzzleSlot_DC15S;
class 3AS_CowsSlot_DC15S;
class Mode_FullAuto;
class Mode_SemiAuto;

class CfgWeapons {
	class AUX_95th_Stun_Muzzle_Rifle;

	class Rifle;
	class Rifle_Base_F: Rifle {
		class WeaponSlotsInfo;
		class GunParticles;
	};

	class UGL_F;

	class 3AS_DC15S_Base_F: Rifle_Base_F {
		class Library {};
		class GunParticles: GunParticles{};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 50;
			class MuzzleSlot: 3AS_MuzzleSlot_DC15S {};
			class CowsSlot: 3AS_CowsSlot_DC15S {};
		};

		class FullAuto: Mode_FullAuto {
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType {};
			class SilencedSound: BaseSoundModeType {};
		};

		class Single: Mode_SemiAuto {
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType {};
			class SilencedSound: BaseSoundModeType {};
		};

		class single_medium_optics1: Single {};
		class single_far_optics2: Single {};
		class GL_1GL_F: UGL_F {};

		class OpticsModes {
			class Ironsights {};
		};
	};

	class 3AS_DC15S_F: 3AS_DC15S_Base_F {};

	class 3AS_DC15S_GL: 3AS_DC15S_Base_F {};

	class AUX_95th_DC15S_Base: 3AS_DC15S_F {
		displayName = "DC15S";
		baseWeapon = "AUX_95th_DC15S_Test";
		scope = 1;

		magazines[] = {"AUX_95th_Universal_Rifle_Mag"};
		magazineWell[] = {};

		AUX_95th_NextWeaponmode = "AUX_95th_DC15S_Test_Stun";
		AUX_95th_NextWeaponmuzzle = "Stun";
	};

	class AUX_95th_DC15S_Standard: AUX_95th_DC15S_Base {
		displayName = "DC15S";
		baseWeapon = "AUX_95th_DC15S_Standard";
		scope = 2;

		AUX_95th_NextWeaponmode = "AUX_95th_DC15S_Stun";
		AUX_95th_NextWeaponmuzzle = "Stun";

		muzzles[] = {"Standard"};
		class Standard: 3AS_DC15S_F {};
		class Stun: AUX_95th_Stun_Muzzle_Rifle{};
	};

	class AUX_95th_DC15S_Stun: AUX_95th_DC15S_Standard {
		displayName = "DC15S";
		baseWeapon = "AUX_95th_DC15S_Stun";
		scope = 1;

		AUX_95th_NextWeaponmode = "AUX_95th_DC15S_Standard";
		AUX_95th_NextWeaponmuzzle = "Standard";

		muzzles[] = {"Stun"};
	};
};

#include "CfgEventHandlers.hpp"
