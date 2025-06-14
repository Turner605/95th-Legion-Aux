#include "script_component.hpp"

class CfgPatches {
    class AUX_95th_weapons_shared {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			"AUX_95th_main",
            "A3_data_F",
            "A3_anims_F",
            "A3_weapons_F",
            "A3_characters_F",
            "JLTS_weapons_Reloads",
            "ace_arsenal",
			"JLTS_weapons_Core",
			"3AS_Weapons"
		};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgFunctions {
    class AUX_95th {
        class Weapons_Shared {
			file = "\z\AUX_95th\addons\weapons\shared\functions";
            class handleATPyro {};
            class handleWeaponmodeSwapped {};
        };
    };
};

class CfgUserActions {
	class AUX_95th_Swap_Weaponmode {
		displayName = "Swap Weapon Mode";
		tooltip = "Swap Weapon Mode";
		onActivate = "player call AUX_95th_fnc_handleWeaponmodeSwapped";
		modifierBlocking = 1;
	};
};

class CfgDefaultKeysPresets {
	class Arma2 {
		class Mappings {
			AUX_95th_Swap_Weaponmode[] = {0x1D130021};
		};
	};
};

class UserActionGroups {
	class AUX_95th_Weapons {
		name = "95th - Weapons";
		isAddon = 1;
		group[] = {"AUX_95th_Swap_Weaponmode"};
	};
};

class CfgAmmo {
	class BulletBase;
	class B_9x21_Ball: BulletBase {
		class HitEffects;
	};

	class B_338_Ball: BulletBase {
		class HitEffects;
	};

	class B_408_Ball: BulletBase {
		class HitEffects;
	};

	class AUX_95th_Pistol_Blue_Ammo: B_9x21_Ball {
		author = "95th Aux Team";
		model = "\3AS\3AS_Weapons\Data\tracer_blue.p3d";
		effectFly = "3AS_PlasmaBolt_Blue_Fly";
		tracerScale = 0.5;
		cartridge = "";
		lightcolor[] = {0.25,0.25,0.5};
		flaresize = 2;
		effectflare = "FlareShell";
		tracerstarttime = 0.05;
		tracerendtime = 10;
		initTime = 0;
		nvgonly = 0;
		airlock = 1;
		irtarget = 1;
		brightness = 1000;
		timetolive = 3;
		airfriction = 0;
		coefgravity = 0;
		deflecting = 0;
		bulletFly1[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_flyby\plasma_flyby_1",2.2387211,1,100};
		bulletFly2[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_flyby\plasma_flyby_2",2.2387211,1,100};
		bulletFly3[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_flyby\plasma_flyby_3",2.2387211,1,100};
		bulletFly4[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_flyby\plasma_flyby_4",2.2387211,1,100};
		bulletFly5[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_flyby\plasma_flyby_5",2.2387211,1,100};
		bulletFly[] = {"bulletFly1",0.2,"bulletFly2",0.2,"bulletFly3",0.2,"bulletFly4",0.2,"bulletFly5",0.2};
		hitArmor[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
		hitArmorInt[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
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
		soundHit1[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\dirt\dirt_1",2,1,75};
		soundHit2[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\dirt\dirt_2",2,1,75};
		soundHit3[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\dirt\dirt_3",2,1,75};
		soundHit4[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\dirt\dirt_4",2,1,75};
		soundHit5[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\dirt\dirt_5",2,1,75};
		hitGround[] = {"soundHit1",0.2,"soundHit2",0.2,"soundHit3",0.2,"soundHit4",0.2,"soundHit5",0.2};
		hitGroundHard[] = {"soundHit1",0.2,"soundHit2",0.2,"soundHit3",0.2,"soundHit4",0.2,"soundHit5",0.2};
		hitGroundSoft[] = {"soundHit1",0.2,"soundHit2",0.2,"soundHit3",0.2,"soundHit4",0.2,"soundHit5",0.2};
		hitFoliage[] = {"soundHitBody1",0.1,"soundHitBody2",0.1,"soundHitBody3",0.1,"soundHitBody4",0.1,"soundHitBody5",0.1,"soundHitBody6",0.1,"soundHitBody7",0.1,"soundHitBody8",0.1,"soundHitBody9",0.1,"soundHitBody10",0.1};
		hitIron[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
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
		hitMetal[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
		hitMetalInt[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
		hitMetalPlate[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
		hitPlastic[] = {"soundDefault1",0.125,"soundDefault2",0.125,"soundDefault3",0.125,"soundDefault4",0.125,"soundDefault5",0.125,"soundDefault6",0.125,"soundDefault7",0.125,"soundDefault8",0.125};
		hitRubber[] = {"soundDefault1",0.125,"soundDefault2",0.125,"soundDefault3",0.125,"soundDefault4",0.125,"soundDefault5",0.125,"soundDefault6",0.125,"soundDefault7",0.125,"soundDefault8",0.125};
		soundConcrete1[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\stone\stone_1",2,1,75};
		soundConcrete2[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\stone\stone_2",2,1,75};
		soundConcrete3[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\stone\stone_3",2,1,75};
		soundConcrete4[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\stone\stone_4",2,1,75};
		soundConcrete5[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\stone\stone_5",2,1,75};
		soundConcrete6[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\stone\stone_6",2,1,75};
		soundConcrete7[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\stone\stone_7",2,1,75};
		soundConcrete8[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\stone\stone_8",2,1,75};
		hitConcrete[] = {"soundConcrete1",0.125,"soundConcrete2",0.125,"soundConcrete3",0.125,"soundConcrete4",0.125,"soundConcrete5",0.125,"soundConcrete6",0.125,"soundConcrete7",0.125,"soundConcrete8",0.125};
		hitTyre[] = {"soundDefault1",0.125,"soundDefault2",0.125,"soundDefault3",0.125,"soundDefault4",0.125,"soundDefault5",0.125,"soundDefault6",0.125,"soundDefault7",0.125,"soundDefault8",0.125};
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
		supersoniccracknear[] = {};
		supersoniccrackfar[] = {};
		soundSetSonicCrack[] = {};
		soundSetBulletFly[] = {"JLTS_plasma_bullet_flyby_soundSet"};
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

	class AUX_95th_Rifle_Blue_Ammo: B_338_Ball {
		author = "95th Aux Team";
		model = "\3AS\3AS_Weapons\Data\tracer_blue.p3d";
		effectFly = "3AS_PlasmaBolt_Blue_Fly";
		tracerScale = 0.7;
		cartridge = "";
		lightcolor[] = {0.25,0.25,0.5};
		flaresize = 5;
		effectflare = "FlareShell";
		tracerstarttime = 0.05;
		tracerendtime = 10;
		initTime = 0;
		nvgonly = 0;
		airlock = 1;
		irtarget = 1;
		brightness = 1000;
		timetolive = 5;
		airfriction = 0;
		coefgravity = 0;
		deflecting = 0;
		bulletFly1[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_flyby\plasma_flyby_1",2.2387211,1,100};
		bulletFly2[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_flyby\plasma_flyby_2",2.2387211,1,100};
		bulletFly3[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_flyby\plasma_flyby_3",2.2387211,1,100};
		bulletFly4[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_flyby\plasma_flyby_4",2.2387211,1,100};
		bulletFly5[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_flyby\plasma_flyby_5",2.2387211,1,100};
		bulletFly[] = {"bulletFly1",0.2,"bulletFly2",0.2,"bulletFly3",0.2,"bulletFly4",0.2,"bulletFly5",0.2};
		hitArmor[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
		hitArmorInt[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
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
		soundHit1[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\dirt\dirt_1",2,1,75};
		soundHit2[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\dirt\dirt_2",2,1,75};
		soundHit3[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\dirt\dirt_3",2,1,75};
		soundHit4[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\dirt\dirt_4",2,1,75};
		soundHit5[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\dirt\dirt_5",2,1,75};
		hitGround[] = {"soundHit1",0.2,"soundHit2",0.2,"soundHit3",0.2,"soundHit4",0.2,"soundHit5",0.2};
		hitGroundHard[] = {"soundHit1",0.2,"soundHit2",0.2,"soundHit3",0.2,"soundHit4",0.2,"soundHit5",0.2};
		hitGroundSoft[] = {"soundHit1",0.2,"soundHit2",0.2,"soundHit3",0.2,"soundHit4",0.2,"soundHit5",0.2};
		hitFoliage[] = {"soundHitBody1",0.1,"soundHitBody2",0.1,"soundHitBody3",0.1,"soundHitBody4",0.1,"soundHitBody5",0.1,"soundHitBody6",0.1,"soundHitBody7",0.1,"soundHitBody8",0.1,"soundHitBody9",0.1,"soundHitBody10",0.1};
		hitIron[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
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
		hitMetal[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
		hitMetalInt[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
		hitMetalPlate[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
		hitPlastic[] = {"soundDefault1",0.125,"soundDefault2",0.125,"soundDefault3",0.125,"soundDefault4",0.125,"soundDefault5",0.125,"soundDefault6",0.125,"soundDefault7",0.125,"soundDefault8",0.125};
		hitRubber[] = {"soundDefault1",0.125,"soundDefault2",0.125,"soundDefault3",0.125,"soundDefault4",0.125,"soundDefault5",0.125,"soundDefault6",0.125,"soundDefault7",0.125,"soundDefault8",0.125};
		soundConcrete1[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\stone\stone_1",2,1,75};
		soundConcrete2[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\stone\stone_2",2,1,75};
		soundConcrete3[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\stone\stone_3",2,1,75};
		soundConcrete4[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\stone\stone_4",2,1,75};
		soundConcrete5[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\stone\stone_5",2,1,75};
		soundConcrete6[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\stone\stone_6",2,1,75};
		soundConcrete7[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\stone\stone_7",2,1,75};
		soundConcrete8[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\stone\stone_8",2,1,75};
		hitConcrete[] = {"soundConcrete1",0.125,"soundConcrete2",0.125,"soundConcrete3",0.125,"soundConcrete4",0.125,"soundConcrete5",0.125,"soundConcrete6",0.125,"soundConcrete7",0.125,"soundConcrete8",0.125};
		hitTyre[] = {"soundDefault1",0.125,"soundDefault2",0.125,"soundDefault3",0.125,"soundDefault4",0.125,"soundDefault5",0.125,"soundDefault6",0.125,"soundDefault7",0.125,"soundDefault8",0.125};
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
		supersoniccracknear[] = {};
		supersoniccrackfar[] = {};
		soundSetSonicCrack[] = {};
		soundSetBulletFly[] = {"JLTS_plasma_bullet_flyby_soundSet"};
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

	class AUX_95th_Heavy_Blue_Ammo: B_338_Ball {
		author = "95th Aux Team";
		model = "\3AS\3AS_Weapons\Data\tracer_blue.p3d";
		effectFly = "3AS_PlasmaBolt_Blue_Fly";
		tracerScale = 1.2;
		cartridge = "";
		lightcolor[] = {0.25,0.25,0.5};
		flaresize = 8;
		effectflare = "FlareShell";
		tracerstarttime = 0.05;
		tracerendtime = 10;
		initTime = 0;
		nvgonly = 0;
		airlock = 1;
		irtarget = 1;
		brightness = 1000;
		timetolive = 5;
		airfriction = 0;
		coefgravity = 0;
		deflecting = 0;
		bulletFly1[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_flyby\plasma_flyby_1",2.2387211,1,100};
		bulletFly2[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_flyby\plasma_flyby_2",2.2387211,1,100};
		bulletFly3[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_flyby\plasma_flyby_3",2.2387211,1,100};
		bulletFly4[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_flyby\plasma_flyby_4",2.2387211,1,100};
		bulletFly5[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_flyby\plasma_flyby_5",2.2387211,1,100};
		bulletFly[] = {"bulletFly1",0.2,"bulletFly2",0.2,"bulletFly3",0.2,"bulletFly4",0.2,"bulletFly5",0.2};
		hitArmor[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
		hitArmorInt[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
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
		soundHit1[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\dirt\dirt_1",2,1,75};
		soundHit2[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\dirt\dirt_2",2,1,75};
		soundHit3[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\dirt\dirt_3",2,1,75};
		soundHit4[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\dirt\dirt_4",2,1,75};
		soundHit5[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\dirt\dirt_5",2,1,75};
		hitGround[] = {"soundHit1",0.2,"soundHit2",0.2,"soundHit3",0.2,"soundHit4",0.2,"soundHit5",0.2};
		hitGroundHard[] = {"soundHit1",0.2,"soundHit2",0.2,"soundHit3",0.2,"soundHit4",0.2,"soundHit5",0.2};
		hitGroundSoft[] = {"soundHit1",0.2,"soundHit2",0.2,"soundHit3",0.2,"soundHit4",0.2,"soundHit5",0.2};
		hitFoliage[] = {"soundHitBody1",0.1,"soundHitBody2",0.1,"soundHitBody3",0.1,"soundHitBody4",0.1,"soundHitBody5",0.1,"soundHitBody6",0.1,"soundHitBody7",0.1,"soundHitBody8",0.1,"soundHitBody9",0.1,"soundHitBody10",0.1};
		hitIron[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
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
		hitMetal[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
		hitMetalInt[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
		hitMetalPlate[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
		hitPlastic[] = {"soundDefault1",0.125,"soundDefault2",0.125,"soundDefault3",0.125,"soundDefault4",0.125,"soundDefault5",0.125,"soundDefault6",0.125,"soundDefault7",0.125,"soundDefault8",0.125};
		hitRubber[] = {"soundDefault1",0.125,"soundDefault2",0.125,"soundDefault3",0.125,"soundDefault4",0.125,"soundDefault5",0.125,"soundDefault6",0.125,"soundDefault7",0.125,"soundDefault8",0.125};
		soundConcrete1[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\stone\stone_1",2,1,75};
		soundConcrete2[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\stone\stone_2",2,1,75};
		soundConcrete3[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\stone\stone_3",2,1,75};
		soundConcrete4[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\stone\stone_4",2,1,75};
		soundConcrete5[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\stone\stone_5",2,1,75};
		soundConcrete6[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\stone\stone_6",2,1,75};
		soundConcrete7[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\stone\stone_7",2,1,75};
		soundConcrete8[] = {"z\AUX_95th\addons\weapons\shared\sounds\plasma_hit\stone\stone_8",2,1,75};
		hitConcrete[] = {"soundConcrete1",0.125,"soundConcrete2",0.125,"soundConcrete3",0.125,"soundConcrete4",0.125,"soundConcrete5",0.125,"soundConcrete6",0.125,"soundConcrete7",0.125,"soundConcrete8",0.125};
		hitTyre[] = {"soundDefault1",0.125,"soundDefault2",0.125,"soundDefault3",0.125,"soundDefault4",0.125,"soundDefault5",0.125,"soundDefault6",0.125,"soundDefault7",0.125,"soundDefault8",0.125};
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
		supersoniccracknear[] = {};
		supersoniccrackfar[] = {};
		soundSetSonicCrack[] = {};
		soundSetBulletFly[] = {"JLTS_plasma_bullet_flyby_soundSet"};
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

	class AUX_95th_Extra_Heavy_Blue_Ammo: AUX_95th_Heavy_Blue_Ammo {
		tracerScale = 6;
		flaresize = 15;
		hit = 10;
	};

	class AUX_95th_Sniper_Blue_Ammo: B_408_Ball {
		author = "95th Legion";
		model = "\3AS\3AS_Weapons\Data\tracer_blue.p3d";
		effectFly = "3AS_PlasmaBolt_Blue_Fly";
		tracerScale = 0.9;
		cartridge = "";
		lightcolor[] = {0.25,0.25,0.5};
		flaresize = 5;
		effectflare = "FlareShell";
		tracerstarttime = 0.05;
		tracerendtime = 10;
		nvgonly = 0;
		airlock = 1;
		irtarget = 1;
		brightness = 1000;
		timetolive = 7;
		initTime = 0;
		airfriction = 0;
		coefgravity = 0;
		deflecting = 0;
		bulletFly1[] = {"MRC\JLTS\weapons\Core\sounds\plasma_flyby\plasma_flyby_1",2.2387211,1,100};
		bulletFly2[] = {"MRC\JLTS\weapons\Core\sounds\plasma_flyby\plasma_flyby_2",2.2387211,1,100};
		bulletFly3[] = {"MRC\JLTS\weapons\Core\sounds\plasma_flyby\plasma_flyby_3",2.2387211,1,100};
		bulletFly4[] = {"MRC\JLTS\weapons\Core\sounds\plasma_flyby\plasma_flyby_4",2.2387211,1,100};
		bulletFly5[] = {"MRC\JLTS\weapons\Core\sounds\plasma_flyby\plasma_flyby_5",2.2387211,1,100};
		bulletFly[] = {"bulletFly1",0.2,"bulletFly2",0.2,"bulletFly3",0.2,"bulletFly4",0.2,"bulletFly5",0.2};
		hitArmor[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
		hitArmorInt[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
		soundHitBody1[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\body\body_1",2,1,75};
		soundHitBody2[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\body\body_2",2,1,75};
		soundHitBody3[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\body\body_3",2,1,75};
		soundHitBody4[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\body\body_4",2,1,75};
		soundHitBody5[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\body\body_5",2,1,75};
		soundHitBody6[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\body\body_6",2,1,75};
		soundHitBody7[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\body\body_7",2,1,75};
		soundHitBody8[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\body\body_8",2,1,75};
		soundHitBody9[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\body\body_9",2,1,75};
		soundHitBody10[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\body\body_10",2,1,75};
		hitMan[] = {"soundHitBody1",0.1,"soundHitBody2",0.1,"soundHitBody3",0.1,"soundHitBody4",0.1,"soundHitBody5",0.1,"soundHitBody6",0.1,"soundHitBody7",0.1,"soundHitBody8",0.1,"soundHitBody9",0.1,"soundHitBody10",0.1};
		hitBuilding[] = {"soundConcrete1",0.125,"soundConcrete2",0.125,"soundConcrete3",0.125,"soundConcrete4",0.125,"soundConcrete5",0.125,"soundConcrete6",0.125,"soundConcrete7",0.125,"soundConcrete8",0.125};
		soundDefault1[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\default\default_1",2,1,75};
		soundDefault2[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\default\default_2",2,1,75};
		soundDefault3[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\default\default_3",2,1,75};
		soundDefault4[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\default\default_4",2,1,75};
		soundDefault5[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\default\default_5",2,1,75};
		soundDefault6[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\default\default_6",2,1,75};
		soundDefault7[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\default\default_7",2,1,75};
		soundDefault8[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\default\default_8",2,1,75};
		hitDefault[] = {"soundDefault1",0.125,"soundDefault2",0.125,"soundDefault3",0.125,"soundDefault4",0.125,"soundDefault5",0.125,"soundDefault6",0.125,"soundDefault7",0.125,"soundDefault8",0.125};
		soundHit1[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\dirt\dirt_1",2,1,75};
		soundHit2[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\dirt\dirt_2",2,1,75};
		soundHit3[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\dirt\dirt_3",2,1,75};
		soundHit4[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\dirt\dirt_4",2,1,75};
		soundHit5[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\dirt\dirt_5",2,1,75};
		hitGround[] = {"soundHit1",0.2,"soundHit2",0.2,"soundHit3",0.2,"soundHit4",0.2,"soundHit5",0.2};
		hitGroundHard[] = {"soundHit1",0.2,"soundHit2",0.2,"soundHit3",0.2,"soundHit4",0.2,"soundHit5",0.2};
		hitGroundSoft[] = {"soundHit1",0.2,"soundHit2",0.2,"soundHit3",0.2,"soundHit4",0.2,"soundHit5",0.2};
		hitFoliage[] = {"soundHitBody1",0.1,"soundHitBody2",0.1,"soundHitBody3",0.1,"soundHitBody4",0.1,"soundHitBody5",0.1,"soundHitBody6",0.1,"soundHitBody7",0.1,"soundHitBody8",0.1,"soundHitBody9",0.1,"soundHitBody10",0.1};
		hitIron[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
		soundMetal1[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\metal\metal_1",2,1,75};
		soundMetal2[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\metal\metal_2",2,1,75};
		soundMetal3[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\metal\metal_3",2,1,75};
		soundMetal4[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\metal\metal_4",2,1,75};
		soundMetal5[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\metal\metal_5",2,1,75};
		soundMetal6[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\metal\metal_6",2,1,75};
		soundMetal7[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\metal\metal_7",2,1,75};
		soundMetal8[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\metal\metal_8",2,1,75};
		soundMetal9[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\metal\metal_9",2,1,75};
		soundMetal10[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\metal\metal_10",2,1,75};
		hitMetal[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
		hitMetalInt[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
		hitMetalPlate[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
		hitPlastic[] = {"soundDefault1",0.125,"soundDefault2",0.125,"soundDefault3",0.125,"soundDefault4",0.125,"soundDefault5",0.125,"soundDefault6",0.125,"soundDefault7",0.125,"soundDefault8",0.125};
		hitRubber[] = {"soundDefault1",0.125,"soundDefault2",0.125,"soundDefault3",0.125,"soundDefault4",0.125,"soundDefault5",0.125,"soundDefault6",0.125,"soundDefault7",0.125,"soundDefault8",0.125};
		soundConcrete1[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\stone\stone_1",2,1,75};
		soundConcrete2[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\stone\stone_2",2,1,75};
		soundConcrete3[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\stone\stone_3",2,1,75};
		soundConcrete4[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\stone\stone_4",2,1,75};
		soundConcrete5[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\stone\stone_5",2,1,75};
		soundConcrete6[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\stone\stone_6",2,1,75};
		soundConcrete7[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\stone\stone_7",2,1,75};
		soundConcrete8[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\stone\stone_8",2,1,75};
		hitConcrete[] = {"soundConcrete1",0.125,"soundConcrete2",0.125,"soundConcrete3",0.125,"soundConcrete4",0.125,"soundConcrete5",0.125,"soundConcrete6",0.125,"soundConcrete7",0.125,"soundConcrete8",0.125};
		hitTyre[] = {"soundDefault1",0.125,"soundDefault2",0.125,"soundDefault3",0.125,"soundDefault4",0.125,"soundDefault5",0.125,"soundDefault6",0.125,"soundDefault7",0.125,"soundDefault8",0.125};
		soundWater1[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\water\water_1",2,1,75};
		soundWater2[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\water\water_2",2,1,75};
		soundWater3[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\water\water_3",2,1,75};
		hitWater[] = {"soundWater1",0.33,"soundWater2",0.33,"soundWater3",0.33};
		soundWood1[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\wood\wood_1",2,1,75};
		soundWood2[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\wood\wood_2",2,1,75};
		soundWood3[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\wood\wood_3",2,1,75};
		soundWood4[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\wood\wood_4",2,1,75};
		soundWood5[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\wood\wood_5",2,1,75};
		soundWood6[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\wood\wood_6",2,1,75};
		soundWood7[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\wood\wood_7",2,1,75};
		soundWood8[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\wood\wood_8",2,1,75};
		soundWood9[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\wood\wood_9",2,1,75};
		hitWood[] = {"soundWood1",0.11,"soundWood2",0.11,"soundWood3",0.11,"soundWood4",0.11,"soundWood5",0.11,"soundWood6",0.11,"soundWood7",0.11,"soundWood8",0.11,"soundWood9",0.11};
		supersoniccracknear[] = {};
		supersoniccrackfar[] = {};
		soundSetSonicCrack[] = {};
		soundSetBulletFly[] = {"JLTS_plasma_bullet_flyby_soundSet"};
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

	class AUX_95th_Shotgun_Blue_Ammo: AUX_95th_Pistol_Blue_Ammo {
		simulation = "shotSpread";
	};

	class AUX_95th_Stun_Ammo: AUX_95th_Pistol_Blue_Ammo {
		model = "\MRC\JLTS\weapons\Core\effects\stun.p3d";
		hit = 0.01;
		JLTS_isStunAmmo = 1;
		typicalSpeed = 30;
		timetolive = 3;
		aiAmmoUsageFlags = 0;
	};
};

class CfgMagazines {
	class 16Rnd_9x21_Mag;
	class AUX_95th_Stun_Short_Mag: 16Rnd_9x21_Mag {
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		author = "95th Aux Team";
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		displayName = "$STR_JLTS_names_StunShort_mag";
		displayNameShort = "$STR_JLTS_snames_EnergyCellStunShort";
		model = "\MRC\JLTS\weapons\Core\stun_mag.p3d";
		picture = "\z\AUX_95th\addons\weapons\shared\data\ui\Stun_Mag.paa";
		count = 10;
		ammo = "AUX_95th_Stun_Ammo";
		descriptionShort = "$STR_JLTS_descs_StunShort_mag";
		tracersEvery = 1;
		initSpeed = 50;
		JLTS_stunDuration = 5;
	};

	class AUX_95th_Stun_Long_Mag: AUX_95th_Stun_Short_Mag {
		displayName = "$STR_JLTS_names_StunLong_mag";
		displayNameShort = "$STR_JLTS_snames_EnergyCellStunLong";
		descriptionShort = "$STR_JLTS_descs_StunLong_mag";
		count = 5;
		JLTS_stunDuration = 15;
	};

	class 30Rnd_65x39_caseless_mag;
	class CA_Magazine;
	class AUX_95th_Universal_Rifle_Mag: 30Rnd_65x39_caseless_mag {
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		author = "95th Legion";
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\z\AUX_95th\addons\weapons\shared\data\ui\Rifle_Mag.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count = 60;
		displayName = "Universal Rifle Energy Cell";
		displayNameShort = "Universal Energy";
		descriptionShort = "Universal Rifle Cell";
		ammo = "AUX_95th_Rifle_Blue_Ammo";
		tracersEvery = 1;
		mass = 12;
	};

	class 100Rnd_65x39_caseless_mag;
	class AUX_95th_Universal_Heavy_Mag: 100Rnd_65x39_caseless_mag {
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		author = "95th Legion";
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\z\AUX_95th\addons\weapons\shared\data\ui\Heavy_Mag.paa";
		model = "\MRC\JLTS\weapons\z6\z6_mag.p3d";
		count = 250;
		displayName = "Universal Heavy Energy Cell";
		displayNameShort = "Universal Energy";
		descriptionShort = "Universal Heavy Cell";
		ammo = "AUX_95th_Heavy_Blue_Ammo";
		tracersEvery = 1;
		initSpeed = 920;
		mass = 18;
	};

	class AUX_95th_Universal_Sniper_Mag: 30Rnd_65x39_caseless_mag {
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		author = "95th Legion";
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\z\AUX_95th\addons\weapons\shared\data\ui\Sniper_Mag.paa";
		model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
		count = 15;
		displayName = "Universal Sniper Energy Cell";
		displayNameShort = "Universal Energy";
		descriptionShort = "Universal Sniper Cell";
		ammo = "AUX_95th_Sniper_Blue_Ammo";
		tracersEvery = 1;
		mass = 12;
	};

	class AUX_95th_Universal_Shotgun_Mag: 30Rnd_65x39_caseless_mag {
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		author = "95th Legion";
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\z\AUX_95th\addons\weapons\shared\data\ui\Shotgun_Mag.paa";
		model = "\MRC\JLTS\weapons\DP23\DP23_mag.p3d";
		count = 20;
		displayName = "Universal Shotgun Energy Cell";
		displayNameShort = "Universal Energy";
		descriptionShort = "Universal Shotgun Cell";
		ammo = "AUX_95th_Shotgun_Blue_Ammo";
		tracersEvery = 1;
		mass = 12;
	};

	class AUX_95th_Universal_Pistol_Mag: 16Rnd_9x21_Mag {
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		author = "95th Legion";
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\z\AUX_95th\addons\weapons\shared\data\ui\Pistol_Mag.paa";
		model = "\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
		count = 25;
		displayName = "Universal Pistol Mag";
		displayNameShort = "Universal Energy";
		descriptionShort = "Universal Pistol Cell";
		ammo = "AUX_95th_Pistol_Blue_Ammo";
		tracersEvery = 1;
	};
};

class ace_arsenal_stats {
	class statBase;

	class ACE_magCount {
		priority = 9;
	};

	class AUX_95th_Universal_Mag_Stat_Base: statBase {
		scope = 1;
		priority = 10;
		displayName = "Fits Into:";
		showBar = 0;
		showText = 1;
		textStatement = "if(true)exitWith{'UNDEFINED'}";
		condition = "false";
		tabs[] = { {}, {4} }; // Which arsenal tabs (Weapons, grenades etc)
	};

	class AUX_95th_Universal_Rifle_Mag_Stat: AUX_95th_Universal_Mag_Stat_Base {
		scope = 2;
		condition = "(configName (_this select 1)) == 'AUX_95th_Universal_Rifle_Mag'";
		textStatement = "if(true)exitWith{'DC15S|DC15A|DC15C|Westar'}";
	};

	class AUX_95th_Universal_Sniper_Mag_Stat: AUX_95th_Universal_Mag_Stat_Base {
		scope = 2;
		condition = "(configName (_this select 1)) == 'AUX_95th_Universal_Sniper_Mag'";
		textStatement = "if(true)exitWith{'DC15X|DW32S|Westar'}";
	};

	class AUX_95th_Universal_Shotgun_Mag_Stat: AUX_95th_Universal_Mag_Stat_Base {
		scope = 2;
		condition = "(configName (_this select 1)) == 'AUX_95th_Universal_Shotgun_Mag'";
		textStatement = "if(true)exitWith{'DP23'}";
	};

	class AUX_95th_Universal_Heavy_Mag_Stat: AUX_95th_Universal_Mag_Stat_Base {
		scope = 2;
		condition = "(configName (_this select 1)) == 'AUX_95th_Universal_Heavy_Mag'";
		textStatement = "if(true)exitWith{'Z6|DC15L'}";
	};
};

class Mode_SemiAuto;
class CfgWeapons {
	class Pistol_Base_F;
	class Rifle_Base_F;
	class AUX_95th_Stun_Muzzle_Rifle: Rifle_Base_F {
		aiDispersionCoefX = 2;
		aiDispersionCoefY = 2;
		autoFire = 0;
		ballisticsComputer = 0;
		discreteDistance[] = {50};
		discreteDistanceInitIndex = 0;
		displayName = "$STR_JLTS_names_StunMode";
		drySound[] = {"z\AUX_95th\addons\weapons\shared\sounds\weapon_dry.wss",5,1,10};
		fireSpreadAngle = 0.95;
		magazines[] = {"AUX_95th_Stun_Short_Mag","AUX_95th_Stun_Long_Mag"};
		magazineWell[] = {};
		maxZeroing = 50;
		reloadAction = "GestureReloadMX";
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\Reload_Mx",1,1,10};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto {
			sounds[] = {"StandardSound"};
			class BaseSoundModeType {
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType {
				weaponSoundEffect = "";
				begin1[] = {"z\AUX_95th\addons\weapons\shared\sounds\stun",5,1.5,1800};
				soundBegin[] = {"begin1",1};
			};
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.5;
			dispersion = 0.0029;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
	};

	class AUX_95th_Stun_Muzzle_Pistol: Pistol_Base_F {
		aiDispersionCoefX = 2;
		aiDispersionCoefY = 2;
		autoFire = 0;
		ballisticsComputer = 0;
		discreteDistance[] = {50};
		discreteDistanceInitIndex = 0;
		displayName = "$STR_JLTS_names_StunMode";
		drySound[] = {"z\AUX_95th\addons\weapons\shared\sounds\weapon_dry.wss",5,1,10};
		fireSpreadAngle = 0.95;
		magazines[] = {"AUX_95th_Stun_Short_Mag","AUX_95th_Stun_Long_Mag"};
		magazineWell[] = {};
		maxZeroing = 50;
		reloadAction = "GestureReloadMX";
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\Reload_Mx",1,1,10};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto {
			sounds[] = {"StandardSound"};
			class BaseSoundModeType {
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType {
				weaponSoundEffect = "";
				begin1[] = {"z\AUX_95th\addons\weapons\shared\sounds\stun",5,1.5,1800};
				soundBegin[] = {"begin1",1};
			};
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.5;
			dispersion = 0.0029;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
	};
};

class CfgSoundShaders {
	class AUX_95th_Heavy_Shot_SoundShader{
		samples[] = {
			{"z\AUX_95th\addons\weapons\shared\sounds\Heavy Weapons\Shot_1.ogg",1},
			{"z\AUX_95th\addons\weapons\shared\sounds\Heavy Weapons\Shot_2.ogg",1},
			{"z\AUX_95th\addons\weapons\shared\sounds\Heavy Weapons\Shot_3.ogg",1},
			{"z\AUX_95th\addons\weapons\shared\sounds\Heavy Weapons\Shot_4.ogg",1},
			{"z\AUX_95th\addons\weapons\shared\sounds\Heavy Weapons\Shot_5.ogg",1},
			{"z\AUX_95th\addons\weapons\shared\sounds\Heavy Weapons\Shot_6.ogg",1}
		};
		volume = 1;
		range = 1000;
	};

	class AUX_95th_Rifle_Shot_SoundShader {
		samples[] = {
			{"z\AUX_95th\addons\weapons\shared\sounds\Rifle Weapons\Shot_1.ogg",1},
			{"z\AUX_95th\addons\weapons\shared\sounds\Rifle Weapons\Shot_2.ogg",1},
			{"z\AUX_95th\addons\weapons\shared\sounds\Rifle Weapons\Shot_3.ogg",1},
			{"z\AUX_95th\addons\weapons\shared\sounds\Rifle Weapons\Shot_4.ogg",1}
		};
		volume = 1;
		range = 800;
	};

	class AUX_95th_Westar_Shot_SoundShader {
		samples[] = {
			{"z\AUX_95th\addons\weapons\shared\sounds\Westar\Shot_1.ogg",1},
			{"z\AUX_95th\addons\weapons\shared\sounds\Westar\Shot_2.ogg",1},
			{"z\AUX_95th\addons\weapons\shared\sounds\Westar\Shot_3.ogg",1},
			{"z\AUX_95th\addons\weapons\shared\sounds\Westar\Shot_4.ogg",1}
		};
		volume = 1;
		range = 800;
	};

	class AUX_95th_Pistol_Shot_SoundShader {
		samples[] = {
			{"z\AUX_95th\addons\weapons\shared\sounds\Pistol\Pistol.ogg",1},
			{"z\AUX_95th\addons\weapons\shared\sounds\Pistol\Pistol2.ogg",1},
			{"z\AUX_95th\addons\weapons\shared\sounds\Pistol\Pistol3.ogg",1},
			{"z\AUX_95th\addons\weapons\shared\sounds\Pistol\Pistol4.ogg",1}
		};
		volume = 2;
		range = 800;
	};
};

class CfgSoundSets {
	class AUX_95th_Rifle_Shot_SoundSet {
		soundShaders[] = {"AUX_95th_Rifle_Shot_SoundShader"};
		volumeFactor = 1.0;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};

	class AUX_95th_Heavy_Shot_SoundSet {
		soundShaders[] = {"AUX_95th_Heavy_Shot_SoundShader"};
		volumeFactor = 1.0;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};

	class AUX_95th_Westar_Shot_SoundSet {
		soundShaders[] = {"AUX_95th_Westar_Shot_SoundShader"};
		volumeFactor = 1.0;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};

	class AUX_95th_Pistol_Shot_SoundSet {
		soundShaders[] = {"AUX_95th_Pistol_Shot_SoundShader"};
		volumeFactor = 1.0;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
};

#include "XtdGearModels.hpp"

#include "CfgEventHandlers.hpp"