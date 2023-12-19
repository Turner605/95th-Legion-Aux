class CfgPatches {
	class AUX_95th_Weapons {
        author="95th Aux Team";
        name="95th Legion Weapons";
		requiredAddons[]={
			"WBK_PhoenixTreal_FlamethrowerMOD", 
			"ls_weapons"
		};
		weapons[] = {
			"AUX_95th_JLTS_DP23",
			"AUX_95th_JLTS_DC15X", "AUX_95th_JLTS_DC15X_scope"
		};
		units[]={};
	};
};

// Checklist:
// - Main blaster
// - Stuns
// - Scopes

//TODO:
// DC15A
// DC15S
// DW32S
// DC15X
// DP23
// DC17A (Pistol)

class CfgAmmo {
	class JLTS_bullet_scatter_blue;
	class AUX_95th_JLTS_bullet_scatter_blue: JLTS_bullet_scatter_blue {
		simulation = "shotSpread";
	};
};

class cfgMagazines {
	class M2_Fuel_Tank;
	class 95th_FlameThrower_Fuel: M2_Fuel_Tank {
		descriptionShort="Fuel for the 95th Flamethrower";
		author="95th Aux Team";
		scope=2;
		mass=60;
		displayName="[95th] BX-42 Fuel";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		ammo="Flamethrower_Fuel";
	};

	class JLTS_DP23_mag;
	class AUX_95th_JLTS_DP23_mag: JLTS_DP23_mag {
		author = "95th Aux Team";
		displayName = "[95th] DP23 Mag";
		displayNameShort = "$STR_JLTS_snames_EnergyCellLow";
		descriptionShort = "$STR_JLTS_descs_DP23_mag";
		ammo = "AUX_95th_JLTS_bullet_scatter_blue";
	};

	class JLTS_DC15X_mag;
	class AUX_95th_JLTS_DC15X_mag: JLTS_DC15X_mag {
		displayName = "[95th] DC15X Mag";
		author = "95th Aux Team";
		count = 15;
	};
};

class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons {
	class arifle_MX_Base_F;
	class JLTS_DP23: arifle_MX_Base_F {
		class WeaponSlotsInfo;
	};

	class AUX_95th_JLTS_DP23: JLTS_DP23 {
		displayName = "[95th] DP-23";
		JLTS_friedItem = "AUX_95th_JLTS_DP23_fried";
		JLTS_canHaveShield = 1;
		JLTS_shieldedWeapon = "AUX_95th_JLTS_DP23_shield";
		author = "95th Aux mod";
		fireSpreadAngle = 1;
		magazines[] = {"AUX_95th_JLTS_DP23_mag"};
		class Single: Mode_SemiAuto {
			sounds[] = {"StandardSound"};
			class BaseSoundModeType {weaponSoundEffect = ""; closure1[] = {}; closure2[] = {}; soundClosure[] = {};};
			class StandardSound: BaseSoundModeType {weaponSoundEffect = ""; begin1[] = {"\MRC\JLTS\weapons\DP23\sounds\dp23_fire.wss",1,1,1800}; soundBegin[] = {"begin1",1};};
			reloadTime = 0.1; dispersion = 0.00073;
			minRange = 1; minRangeProbab = 0.5;
			midRange = 30; midRangeProbab = 0.7;
			maxRange = 60; maxRangeProbab = 0.3;
		};
	};

	class AUX_95th_JLTS_DP23_fried: AUX_95th_JLTS_DP23 {
		JLTS_isFried = 1;
		JLTS_shieldedWeapon = "AUX_95th_JLTS_DP23_shield_fried";
		baseWeapon = "AUX_95th_JLTS_DP23_fried";
		displayName = "$STR_JLTS_names_DP23Fried";
		descriptionShort = "$STR_JLTS_descs_BlasterFried";
		scope = 1;
		picture = "\MRC\JLTS\weapons\DP23\data\ui\DP23_fried_ui_ca.paa";
		muzzles[] = {"this"}; magazines[] = {};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
	};

	class AUX_95th_JLTS_DP23_shield: AUX_95th_JLTS_DP23 {
		displayName = "$STR_JLTS_names_DP23Shield";
		baseWeapon = "AUX_95th_JLTS_DP23_shield";
		scope = 1;
		JLTS_isShielded = 1;
		JLTS_baseWeapon = "AUX_95th_JLTS_DP23";
		JLTS_friedItem = "AUX_95th_JLTS_DP23_shield_fried";
		model = "\MRC\JLTS\weapons\DP23\DP23_shielded.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\DP23\data\DP23_co.paa","\95th_Equipment\Data\Shield\Default.paa"};
		handAnim[] = {"OFP2_ManSkeleton","\MRC\JLTS\weapons\DP23\anims\DP23_shielded_handanim.rtm"};
		inertia = 0.8;
		recoil = "recoil_pdw";
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 110;
			class UnderBarrelSlot: UnderBarrelSlot {
				compatibleItems[] = {"JLTS_riot_shield_attachment","JLTS_riot_shield_212_attachment","JLTS_riot_shield_501_attachment","JLTS_riot_shield_101_attachment","JLTS_riot_shield_CG_attachment","JLTS_riot_shield_GD_attachment","JLTS_riot_shield_droid_attachment"};
			};
		};
	};

	class AUX_95th_JLTS_DP23_shield_fried: AUX_95th_JLTS_DP23_shield {
		JLTS_baseWeapon = "AUX_95th_JLTS_DP23_fried";
		JLTS_isFried = 1;
		baseWeapon = "AUX_95th_JLTS_DP23_shield_fried";
		displayName = "$STR_JLTS_names_DP23ShieldFried";
		descriptionShort = "$STR_JLTS_descs_BlasterFried";
		scope = 1;
		picture = "\MRC\JLTS\weapons\DP23\data\ui\DP23_fried_ui_ca.paa";
		magazines[] = {};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
	};

	class JLTS_DC15X_scope;
	class AUX_95th_JLTS_DC15X_scope: JLTS_DC15X_scope {
		displayName = "[95th] DC15X Scope";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\DC15X\data\DC15X_scope_co.paa"};
		thermalMode[] = {0};
	};

	class JLTS_DC15X: arifle_MX_Base_F {
		class WeaponSlotsInfo;
		class GunParticles;
	};

	class AUX_95th_JLTS_DC15X: JLTS_DC15X {
		JLTS_friedItem = "AUX_95th_JLTS_DC15X_fried";
		displayName = "[95th] DC15X";
		author = "95th Aux mod";
		baseWeapon = "AUX_95th_JLTS_DC15X";
		magazines[] = {"JLTS_DC15X_mag"};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 92;
			class CowsSlot: CowsSlot {compatibleItems[] = {"AUX_95th_JLTS_DC15X_scope"}; iconPicture = "";};
			class MuzzleSlot: MuzzleSlot {compatibleItems[] = {};};
			class PointerSlot: PointerSlot {compatibleItems[] = {};};
			class UnderBarrelSlot: UnderBarrelSlot {compatibleItems[] = {};};
		};
	};

	class AUX_95th_JLTS_DC15X_fried: AUX_95th_JLTS_DC15X {
		baseWeapon = "AUX_95th_JLTS_DC15X_fried";
		displayName = "$STR_JLTS_names_DC15XFried";
		descriptionShort = "$STR_JLTS_descs_BlasterFried";
		scope = 1;
		picture = "\MRC\JLTS\weapons\DC15X\data\ui\DC15X_fried_ui_ca.paa";
		muzzles[] = {"this"};
		magazines[] = {};
		JLTS_isFried = 1;
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
	};

	class 41_Flammenwerfer_02_F;
	class WeaponSlotsInfo;
	class 95th_FlameThrower: 41_Flammenwerfer_02_F {
		displayName="[95th] BX-42 Flamethrower";
		author="95th Aux Team";
		WBK_BurnEm_IsFlamethrower = "True";
		WBK_BurnEm_RequiredBackpack = "95th_FlameThrower_Backpack";
		WBK_BurnEm_FlamethrowerSoundArray = ['flamewerfer_start','flamewerfer_looping',4.8,'flamewerfer_end'];
		WBK_BurnEm_FlamethrowerParticlePos = [[-0.73,0.35,-0.3],'leftHand'];
		WBK_BurnEm_FlamethrowerDistance = 18.5;
		scope=2;
		model="\3AS\3AS_Weapons\X42\BX42.p3d";
		picture="\3AS\3AS_Weapons\X42\Data\BTX42_ui_ca.paa";
		UiPicture="\A3\Weapons_F\data\UI\icon_regular_CA.paa";
		weaponInfoType="RscWeaponZeroing";
		magazines[]={"95th_FlameThrower_Fuel"};
		muzzles[]={"this"};
		class WeaponSlotsInfo: WeaponSlotsInfo{mass=40;};
		handAnim[]= {"OFP2_ManSkeleton", "3AS\3AS_Weapons\Data\Anim\BX42.rtm" };
	};
};