#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {};
		weapons[] = {"AUX_95th_BX42"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "AUX_95th_main",
            "AUX_95th_weapons_shared",
            "WBK_PhoenixTreal_FlamethrowerMOD"
        };
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgAmmo {
	class BulletBase;
	class B_65x39_Caseless: BulletBase {
		class HitEffects;
	};

	class 3AS_R_Mk40_AT;

	class AUX_95th_BX42_Rocket_HE_Ammo:	3AS_R_Mk40_AT {

	};
};

class CfgMagazines {
	class M2_Fuel_Tank;
	class 16Rnd_9x21_Mag;
	class 3AS_6Rnd_RocketGrenades_HE;
	class 3AS_6Rnd_HE_Grenade_shell;

	class AUX_95th_BX42_Pyro_AP: 3AS_6Rnd_HE_Grenade_shell {
		mass=60;
		count = 3;
		displayName="[95th] BX-42 Pyro Rounds (AP)";
		displayNameShort = "AP Pyro Rounds";
		deleteIfEmpty = 1;
	};

	class AUX_95th_BX42_Pyro_AT: 3AS_6Rnd_HE_Grenade_shell {
		mass=40;
		count = 1;
		displayName="[95th] BX-42 Pyro Rounds (AT)";
		displayNameShort = "AT Pyro Rounds";
		deleteIfEmpty = 1;
	};

	class AUX_95th_BX42_Fuel: M2_Fuel_Tank {
		descriptionShort="Fuel for the 95th Flamethrower";
		author="95th Aux Team";
		scope=2;
		mass=60;
		displayName="[95th] BX-42 Fuel";
		picture = "\3AS\3AS_Weapons\Data\UI\3as_ammo_flamer.paa";
		ammo="Flamethrower_Fuel";
	};
};

class Mode_SemiAuto;
class CfgWeapons {
	class Rifle;
	class Rifle_Base_F: Rifle {
		class WeaponSlotsInfo;
		class GunParticles;
	};

	class 41_Flammenwerfer_02_F;
	class WeaponSlotsInfo;
	class UGL_F;

	class AUX_95th_BX42_GL_Muzzle: UGL_F {
		WBK_BurnEm_IsNotFlamethrower = 1;
		muzzlePos = "Usti hlavne";
		muzzleEnd = "Konec hlavne";
		displayName = "Pyro Launcher";
		descriptionShort = "Pyro Launcher";
		reloadTime = 2;
		magazineReloadTime = 2;
		useModelOptics = 0;
		useExternalOptic = 0;
		magazines[] = {"AUX_95th_BX42_Pyro_AP", "AUX_95th_BX42_Pyro_AT"};
		magazineWell[] = {};
		cameraDir = "OP_look";
		discreteDistance[] = {50,75,100,150,200,250,300,350,400};
		discreteDistanceCameraPoint[] = {"OP_eye_50","OP_eye_75","OP_eye_100","OP_eye_150","OP_eye_200","OP_eye_250","OP_eye_300","OP_eye_350","OP_eye_400"};
		discreteDistanceInitIndex = 1;
		reloadAction = "GestureReloadMXUGL";
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",1,1,10};
	};

	class arifle_MSBS65_UBS_sand_F;

	class arifle_MSBS65_UBS_sand_F_flame : arifle_MSBS65_UBS_sand_F {
		class UBS_F;
	};

	class AUX_95th_BX42: arifle_MSBS65_UBS_sand_F_flame {
		baseWeapon = "AUX_95th_BX42_Test";
		displayName="[95th] BX-42 Flamethrower";
		author="95th Aux Team";
		muzzles[] = {"Launcher","UBS_F"};
		class Launcher: AUX_95th_BX42_GL_Muzzle{};
		handAnim[]= {"OFP2_ManSkeleton", "3AS\3AS_Weapons\Data\Anim\BX42.rtm" };
		model="\3AS\3AS_Weapons\X42\BX42.p3d";
		picture="\3AS\3AS_Weapons\X42\Data\BTX42_ui_ca.paa";
		WBK_BurnEm_RequiredBackpack = "AUX_95th_BX42_Backpack";

		class UBS_F: UBS_F {
			recoil = "recoil_default";
			recoilProne = "assaultRifleBase";
			modes[] = {"FullAuto","fullauto_medium"};
			magazines[] = {"AUX_95th_BX42_Fuel"};
			magazineWell[] = {};
			displayName = "Flamethrower";
			WBK_BurnEm_IsFlamethrower = "True";
			WBK_BurnEm_FlamethrowerSoundArray="['underbarrelflame_start','underbarrelflame_loop',4.8,'underbarrelflame_stop']";
			WBK_BurnEm_FlamethrowerParticlePos = "[[-0.73,0.35,-0.3],'leftHand']";
			WBK_BurnEm_FlamethrowerDistance = 20;
		};
	};
};

#include "CfgEventHandlers.hpp"