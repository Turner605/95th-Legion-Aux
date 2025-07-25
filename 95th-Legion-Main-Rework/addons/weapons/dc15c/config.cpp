#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {};
		weapons[] = {"AUX_95th_DC15C", "AUX_95th_DC15C_GL"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_weapons_shared"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgRecoils {
	class recoil_default;
	class AUX_95th_recoil_DC15C: recoil_default {
		muzzleInner[] = {0,0,0.1,0.1};
		permanent = 0.1;
		muzzleOuter[] = {0.5,1,0.6,0.4};
		kickBack[] = {0.04,0.05};
		temporary = 0.01;
	};
};

class 3AS_MuzzleSlot_DC15C;
class 3AS_CowsSlot_DC15C;
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

	class 3AS_DC15C_Base_F: Rifle_Base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class MuzzleSlot: 3AS_MuzzleSlot_DC15C {};
			class CowsSlot: 3AS_CowsSlot_DC15C {};
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

		class GL_3GL_F: UGL_F {};

		class OpticsModes {
			class Ironsights;
		};
	};

	class 3AS_DC15C_F: 3AS_DC15C_Base_F {};

	class AUX_95th_DC15C: 3AS_DC15C_F {
		DSS_DamageSystem_Power=10;
		scope = 2;
		baseWeapon = "AUX_95th_DC15C";
		displayName = "[95th] DC-15C";
		author = "95th Legion";
		magazines[] = {"AUX_95th_Universal_Rifle_Mag"};
		magazineWell[] = {};
		recoil = "AUX_95th_recoil_DC15C";
		drySound[] = {"\z\AUX_95th\addons\weapons\shared\sounds\weapon_dry.wss",2,1,20};

        class XtdGearInfo {
            model = "AUX_95th_Weapons_Primary_DC15C";
            Role = "NCO";
            Weapon = "DC15C";
            Variant = "Standalone";
            Texture = "Metal";
        };

		class WeaponSlotsInfo: WeaponSlotsInfo {
			class CowsSlot: CowsSlot {
				compatibleItems[] = {"3AS_optic_DC15C_F","SEA_Optic_Holo_Two_Blue","SEA_Optic_Holo_Two_Red","SEA_Optic_Holo_Two_Yellow","SEA_Optic_Holo_Two_Green","SEA_Optic_Holo_One_Blue","SEA_Optic_Holo_One_Green","SEA_Optic_Holo_One_Red","SEA_Optic_Holo_One_Yellow"};
			};
		};

		class FullAuto: FullAuto {
			class StandardSound: StandardSound {
				soundSetShot[] = {"AUX_95th_Rifle_Shot_SoundSet"};
			};
			class SilencedSound: SilencedSound {
				soundSetShot[] = {"AUX_95th_Rifle_Shot_SoundSet"};
			};
		};

		class Single: Single {
			class StandardSound: StandardSound {
				soundSetShot[] = {"AUX_95th_Rifle_Shot_SoundSet"};
			};
			class SilencedSound: SilencedSound {
				soundSetShot[] = {"AUX_95th_Rifle_Shot_SoundSet"};
			};
		};
	};

	class AUX_95th_DC15C_GL: AUX_95th_DC15C {
		baseWeapon = "AUX_95th_DC15C_GL";
		displayName = "[95th] DC-15C GL Rifle";
		model = "\3AS\3AS_Weapons\Republic\DC15C\3AS_DC15C_GL.p3d";
		picture = "\3AS\3AS_Weapons\Republic\DC15C\Data\UI\3as_dc15c.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		muzzles[] = {"this","GL_3GL_F"};
		handAnim[] = {"OFP2_ManSkeleton","3as\3AS_Weapons\Republic\DC15C\Data\Anim\New_DC15CGL_Handanim.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo {mass = 90;};

        class XtdGearInfo {
            model = "AUX_95th_Weapons_Primary_DC15C";
            Role = "NCO";
            Weapon = "DC15C";
            Variant = "UGL";
            Texture = "Metal";
        };
	};
};

#include "CfgEventHandlers.hpp"