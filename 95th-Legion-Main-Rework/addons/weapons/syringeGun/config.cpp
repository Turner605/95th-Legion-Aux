#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {};
		weapons[] = {"AUX_95th_Syringe_Gun"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_weapons_shared"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgAmmo {
	class BulletBase;
	class B_9x21_Ball: BulletBase {
		class HitEffects;
	};

	class AUX_95th_Syringe_Ammo: B_9x21_Ball {
		author = "95th Aux Team";
		model = "\MRC\JLTS\contraband\Drugs\stimulant.p3d";
		maxSpeed = 1;
		effectFly = ""; // 3AS_PlasmaBolt_Blue_Fly
		tracerScale = 0.8;
		cartridge = "";
		lightcolor[] = {0,0,0};
		flaresize = 0.0001;
		effectflare = "FlareShell";
		tracerstarttime = 0.05;
		tracerendtime = 10;
		initTime = 0;
		nvgonly = 0;
		airlock = 1;
		irtarget = 1;
		brightness = 1000;
		timetolive = 2;
		airfriction = 0;
		coefgravity = 0;
		deflecting = 0;

		soundSetBulletFly[] = {"JLTS_plasma_bullet_flyby_soundSet"};
		supersoniccracknear[] = {};
		supersoniccrackfar[] = {};
		soundSetSonicCrack[] = {};

		bulletFly1[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_flyby\plasma_flyby_1",2.2387211,1,100};
		bulletFly2[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_flyby\plasma_flyby_2",2.2387211,1,100};
		bulletFly3[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_flyby\plasma_flyby_3",2.2387211,1,100};
		bulletFly4[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_flyby\plasma_flyby_4",2.2387211,1,100};
		bulletFly5[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_flyby\plasma_flyby_5",2.2387211,1,100};
		bulletFly[] = {"bulletFly1",0.2,"bulletFly2",0.2,"bulletFly3",0.2,"bulletFly4",0.2,"bulletFly5",0.2};
	
		soundHitBody1[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\body\body_1",2,1,75};
		soundHitBody2[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\body\body_2",2,1,75};
		soundHitBody3[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\body\body_3",2,1,75};
		soundHitBody4[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\body\body_4",2,1,75};
		soundHitBody5[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\body\body_5",2,1,75};
		soundHitBody6[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\body\body_6",2,1,75};
		soundHitBody7[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\body\body_7",2,1,75};
		soundHitBody8[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\body\body_8",2,1,75};
		soundHitBody9[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\body\body_9",2,1,75};
		soundHitBody10[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\body\body_10",2,1,75};
		hitMan[] = {"soundHitBody1",0.1,"soundHitBody2",0.1,"soundHitBody3",0.1,"soundHitBody4",0.1,"soundHitBody5",0.1,"soundHitBody6",0.1,"soundHitBody7",0.1,"soundHitBody8",0.1,"soundHitBody9",0.1,"soundHitBody10",0.1};
		hitFoliage[] = {"soundHitBody1",0.1,"soundHitBody2",0.1,"soundHitBody3",0.1,"soundHitBody4",0.1,"soundHitBody5",0.1,"soundHitBody6",0.1,"soundHitBody7",0.1,"soundHitBody8",0.1,"soundHitBody9",0.1,"soundHitBody10",0.1};
		
		soundConcrete1[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\stone\stone_1",2,1,75};
		soundConcrete2[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\stone\stone_2",2,1,75};
		soundConcrete3[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\stone\stone_3",2,1,75};
		soundConcrete4[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\stone\stone_4",2,1,75};
		soundConcrete5[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\stone\stone_5",2,1,75};
		soundConcrete6[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\stone\stone_6",2,1,75};
		soundConcrete7[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\stone\stone_7",2,1,75};
		soundConcrete8[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\stone\stone_8",2,1,75};
		hitConcrete[] = {"soundConcrete1",0.125,"soundConcrete2",0.125,"soundConcrete3",0.125,"soundConcrete4",0.125,"soundConcrete5",0.125,"soundConcrete6",0.125,"soundConcrete7",0.125,"soundConcrete8",0.125};
		hitBuilding[] = {"soundConcrete1",0.125,"soundConcrete2",0.125,"soundConcrete3",0.125,"soundConcrete4",0.125,"soundConcrete5",0.125,"soundConcrete6",0.125,"soundConcrete7",0.125,"soundConcrete8",0.125};
		
		soundDefault1[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\default\default_1",2,1,75};
		soundDefault2[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\default\default_2",2,1,75};
		soundDefault3[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\default\default_3",2,1,75};
		soundDefault4[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\default\default_4",2,1,75};
		soundDefault5[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\default\default_5",2,1,75};
		soundDefault6[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\default\default_6",2,1,75};
		soundDefault7[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\default\default_7",2,1,75};
		soundDefault8[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\default\default_8",2,1,75};
		hitDefault[] = {"soundDefault1",0.125,"soundDefault2",0.125,"soundDefault3",0.125,"soundDefault4",0.125,"soundDefault5",0.125,"soundDefault6",0.125,"soundDefault7",0.125,"soundDefault8",0.125};
		hitPlastic[] = {"soundDefault1",0.125,"soundDefault2",0.125,"soundDefault3",0.125,"soundDefault4",0.125,"soundDefault5",0.125,"soundDefault6",0.125,"soundDefault7",0.125,"soundDefault8",0.125};
		hitRubber[] = {"soundDefault1",0.125,"soundDefault2",0.125,"soundDefault3",0.125,"soundDefault4",0.125,"soundDefault5",0.125,"soundDefault6",0.125,"soundDefault7",0.125,"soundDefault8",0.125};
		hitTyre[] = {"soundDefault1",0.125,"soundDefault2",0.125,"soundDefault3",0.125,"soundDefault4",0.125,"soundDefault5",0.125,"soundDefault6",0.125,"soundDefault7",0.125,"soundDefault8",0.125};

		soundHit1[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\dirt\dirt_1",2,1,75};
		soundHit2[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\dirt\dirt_2",2,1,75};
		soundHit3[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\dirt\dirt_3",2,1,75};
		soundHit4[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\dirt\dirt_4",2,1,75};
		soundHit5[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\dirt\dirt_5",2,1,75};
		hitGround[] = {"soundHit1",0.2,"soundHit2",0.2,"soundHit3",0.2,"soundHit4",0.2,"soundHit5",0.2};
		hitGroundHard[] = {"soundHit1",0.2,"soundHit2",0.2,"soundHit3",0.2,"soundHit4",0.2,"soundHit5",0.2};
		hitGroundSoft[] = {"soundHit1",0.2,"soundHit2",0.2,"soundHit3",0.2,"soundHit4",0.2,"soundHit5",0.2};
		
		soundMetal1[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\metal\metal_1",2,1,75};
		soundMetal2[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\metal\metal_2",2,1,75};
		soundMetal3[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\metal\metal_3",2,1,75};
		soundMetal4[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\metal\metal_4",2,1,75};
		soundMetal5[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\metal\metal_5",2,1,75};
		soundMetal6[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\metal\metal_6",2,1,75};
		soundMetal7[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\metal\metal_7",2,1,75};
		soundMetal8[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\metal\metal_8",2,1,75};
		soundMetal9[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\metal\metal_9",2,1,75};
		soundMetal10[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\metal\metal_10",2,1,75};
		hitIron[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
		hitMetal[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
		hitMetalInt[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
		hitMetalPlate[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
		hitArmor[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
		hitArmorInt[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
	
		soundWater1[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\water\water_1",2,1,75};
		soundWater2[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\water\water_2",2,1,75};
		soundWater3[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\water\water_3",2,1,75};
		hitWater[] = {"soundWater1",0.33,"soundWater2",0.33,"soundWater3",0.33};
		
		soundWood1[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\wood\wood_1",2,1,75};
		soundWood2[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\wood\wood_2",2,1,75};
		soundWood3[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\wood\wood_3",2,1,75};
		soundWood4[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\wood\wood_4",2,1,75};
		soundWood5[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\wood\wood_5",2,1,75};
		soundWood6[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\wood\wood_6",2,1,75};
		soundWood7[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\wood\wood_7",2,1,75};
		soundWood8[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\wood\wood_8",2,1,75};
		soundWood9[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\wood\wood_9",2,1,75};
		hitWood[] = {"soundWood1",0.11,"soundWood2",0.11,"soundWood3",0.11,"soundWood4",0.11,"soundWood5",0.11,"soundWood6",0.11,"soundWood7",0.11,"soundWood8",0.11,"soundWood9",0.11};
				
		class HitEffects: HitEffects {
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "JLTS_ImpactPlasma";
			hitGlassArmored = "JLTS_ImpactPlasma";
			hitWood = "JLTS_ImpactPlasma";
			hitMetal = "JLTS_ImpactPlasma";
			hitMetalPlate = "JLTS_ImpactPlasma";
			hitBuilding = "JLTS_ImpactPlasma";
			hitPlastic = "JLTS_ImpactPlasma";
			hitRubber = "JLTS_ImpactPlasma";
			hitTyre = "JLTS_ImpactPlasma";
			hitConcrete = "JLTS_ImpactPlasma";
			hitMan = "ImpactEffectsBlood";
			hitGroundSoft = "ImpactEffectsSmall";
			hitGroundRed = "ImpactEffectsRed";
			hitGroundHard = "ImpactEffectsHardGround";
			hitWater = "ImpactEffectsWater";
			hitVirtual = "ImpactMetal";
			default_mat = "ImpactMetal";
			hitHay = "ImpactHay";
		};
	};
};

class CfgMagazines {
	class 16Rnd_9x21_Mag;
	class AUX_95th_Syringe_Mag_Stim: 16Rnd_9x21_Mag {
		author = "95th Legion";
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		displayName = "Stim Dart";
		displayNameShort = "Stim Dart";
		model = "\MRC\JLTS\contraband\Drugs\stimulant.p3d";
		picture = "\z\AUX_95th\addons\weapons\dc17sa\data\ui\DC17SA_mag_ui_ca.paa";
		count = 20;
		ammo = "AUX_95th_Syringe_Ammo";
		descriptionShort = "Battle Stimulant";
		tracersEvery = 1;
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;

class CfgWeapons {
	class Pistol;
	class Pistol_Base_F: Pistol {
		class WeaponSlotsInfo;
		class GunParticles;
	};
	
	class 3AS_A180_Base_F: Pistol_Base_F {
		class Single: Mode_SemiAuto {
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType {};
			class SilencedSound: BaseSoundModeType {};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class CowsSlot: CowsSlot {};
			class MuzzleSlot: MuzzleSlot {};
			class PointerSlot: PointerSlot {};
			class UnderBarrelSlot: UnderBarrelSlot {};
		};
	};

	class 3AS_A180_F: 3AS_A180_Base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {};
	};

	class AUX_95th_Syringe_Gun: 3AS_A180_F {
		displayName = "[95th] Syringe Gun";
		descriptionShort = "A medical weapon";
		baseWeapon = "AUX_95th_Syringe_Gun";
		author = "95th Legion";
		scope = 2;
		DSS_DamageSystem_Power=0;
		hiddenSelections[] = {"camo1","illum"};
		hiddenSelectionsTextures[] = {"\z\AUX_95th\addons\weapons\dc17sa\data\DC17SA_co.paa"};
		magazines[] = {"AUX_95th_Syringe_Mag_Stim"};
		magazineWell[] = {};
		drySound[] = {"z\AUX_95th\addons\weapons\shared\sounds\weapon_dry.wss",5,1,10};
		muzzles[] = {"this"};

		class Single: Mode_SemiAuto {
			sounds[] = {"StandardSound", "SilencedSound"};

			class StandardSound: StandardSound {
				soundSetShot[] = {"AUX_95th_Heavy_Shot_SoundSet"};
			};

			class SilencedSound: SilencedSound {
				soundSetShot[] = {"AUX_95th_Heavy_Shot_SoundSet"};
			};
		};
	};
};

#include "CfgEventHandlers.hpp"