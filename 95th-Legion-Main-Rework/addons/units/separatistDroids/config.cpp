#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
			"AUX_95th_Droid_B1_Unit_AA", "AUX_95th_Droid_B1_Unit_AT", "AUX_95th_Droid_B1_Unit_AutoRifleman",
			"AUX_95th_Droid_B1_Unit_Commander", "AUX_95th_Droid_B1_Unit_Rifleman", "AUX_95th_Droid_B1_Unit_Shotgun",
			"AUX_95th_Droid_B1_Unit_Sniper", "AUX_95th_Droid_B1_Unit_Crew",

            "AUX_95th_Droid_BX_Unit_Rifleman", "AUX_95th_Droid_BX_Unit_Commander", "AUX_95th_Droid_BX_Unit_Guard",
			"AUX_95th_Droid_BX_Unit_Diplomat", "AUX_95th_Droid_BX_Unit_Shotgun", "AUX_95th_Droid_BX_Unit_Sniper",
			"AUX_95th_CIS_Disguised_Trooper",
			"AUX_95th_CIS_TS_F", "AUX_95th_CIS_TS_Green", "AUX_95th_CIS_TS_Red",
			"AUX_95th_Droid_B1_Shield"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "AUX_95th_main", 
            "AUX_95th_units_shared",
			"JLTS_characters_DroidUnits"
        };
        authors[] = {"Turner"};
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

class CfgSounds {
	class longfall_land_01 {
		name = "longfall_land_01";
		sound[] = {"\z\AUX_95th\addons\units\separatistDroids\sounds\longfall_land_01.wav",3.1622777,1};
		titles[] = {};
	};
	class longfall_land_02 {
		name = "longfall_land_02";
		sound[] = {"\z\AUX_95th\addons\units\separatistDroids\sounds\longfall_land_02.wav",3.1622777,1};
		titles[] = {};
	};
    class longfall_land_03 {
		name = "longfall_land_03";
		sound[] = {"\z\AUX_95th\addons\units\separatistDroids\sounds\longfall_land_03.wav",3.1622777,1};
		titles[] = {};
	};
};

class CfgMovesBasic {
	class Default;
	class StandBase;
	class BlendAnims;
	class Actions {
		class Default;
		class NoActions;

		class Acts_CarFixingWheel_actions;
		class WBK_HL_Assasin_Moveset_LandHeavy: Acts_CarFixingWheel_actions {Default = "AssasinLand_Heavy";};
		class WBK_HL_Assasin_Moveset_LandLight: Acts_CarFixingWheel_actions {Default = "AssasinLand_Light";};
		class WBK_HL_Assasin_Moveset_LandHeavy_PIST: Acts_CarFixingWheel_actions {Default = "AssasinLand_Light_PIST";};
		class WBK_HL_Assasin_Moveset_Jump_MainWeapon: Acts_CarFixingWheel_actions {Default = "Assasin_Jump_MainWeap";};
		class WBK_HL_Assasin_Moveset_Jump_Unarmed: Acts_CarFixingWheel_actions {Default = "Assasin_Jump_Unarmed";};
		class WBK_HL_Assasin_Moveset_Attack_Unarmed: Acts_CarFixingWheel_actions {Default = "Assasin_udar_Unarmed";};
		class WBK_HL_Assasin_Moveset_Attack_MainWeapon: Acts_CarFixingWheel_actions {Default = "Assasin_udar_Main";};
	};
};

class CfgMovesMaleSdr: CfgMovesBasic {
	skeletonName = "OFP2_ManSkeleton";
	gestures = "CfgGesturesMale";
	class States {
		class HubShootingRangeKneel_move1;
		class AssasinLand_Heavy: HubShootingRangeKneel_move1 {
			duty = 0.7;
			boundingSphere = 4;
			soundOverride = "sprint";
			soundEnabled = 1;
			soundEdge[] = {0.14,0.2};
			actions = "WBK_HL_Assasin_Moveset_LandHeavy";
			file = "\z\AUX_95th\addons\units\separatistDroids\animations\Assasin_landing_Heavy.rtm";
			stamina = -0.1;
			speed = -1.5;
			looped = 0;
			minPlayTime = 1;
			relSpeedMin = 0.6;
			relSpeedMax = 1;
			showHandGun = 0;
			mask = "BodyFull";
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {0};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
			weaponIK = 1;
			enableOptics = 0;
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			leaning = "empty";
			aimingBody = "empty";
			aiming = "empty";
			limitGunMovement = 9.1;
			headBobMode = 2;
			headBobStrength = 0.531343;
			forceAim = 1;
			head = "headNo";
			canPullTrigger = 0;
			enableDirectControl = 0;
			weaponLowered = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			ConnectTo[] = {};
			connectFrom[] = {};
			interpolateFrom[] = {};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon",0.9};
		};

		class AssasinLand_Light: AssasinLand_Heavy {
			actions = "WBK_HL_Assasin_Moveset_LandLight";
			file = "\z\AUX_95th\addons\units\separatistDroids\animations\Assasin_landing_Light.rtm";
			speed = -0.9;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {0};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {0};
			rightHandIKEnd = 0;
			weaponIK = 0;
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.9};
		};

		class AssasinLand_Light_PIST: AssasinLand_Light {
			actions = "WBK_HL_Assasin_Moveset_LandHeavy_PIST";
			speed = -1.35;
			weaponIK = 0;
			showHandGun = 1;
			file = "\z\AUX_95th\addons\units\separatistDroids\animations\Assasin_landing_Heavy_PIST.rtm";
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon",0.9};
		};

		class Assasin_Jump_MainWeap: AssasinLand_Heavy {
			forceAim = 0;
			headBobMode = 0;
			headBobStrength = 0;
			actions = "WBK_HL_Assasin_Moveset_Jump_MainWeapon";
			file = "\z\AUX_95th\addons\units\separatistDroids\animations\Assasin_Jump_MainWeap.rtm";
			speed = -1.5;
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
			weaponIK = 1;
			InterpolateTo[] = {"AfalPercMstpSrasWrflDnon",0.9};
		};

		class Assasin_Jump_Unarmed: Assasin_Jump_MainWeap {
			forceAim = 0;
			headBobMode = 0;
			headBobStrength = 0;
			actions = "WBK_HL_Assasin_Moveset_Jump_Unarmed";
			file = "\z\AUX_95th\addons\units\separatistDroids\animations\Assasin_Jump_Unarmed.rtm";
			speed = -1.5;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {0};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {0};
			rightHandIKEnd = 0;
			weaponIK = 0;
			InterpolateTo[] = {"AfalPercMstpSnonWnonDnon",0.9,"AfalPercMstpSrasWpstDnon",0.9};
		};
        
		class Assasin_udar_Main: AssasinLand_Heavy {
			forceAim = 0;
			headBobMode = 0;
			headBobStrength = 0;
			actions = "WBK_HL_Assasin_Moveset_Attack_MainWeapon";
			file = "\z\AUX_95th\addons\units\separatistDroids\animations\Assasin_udar_Main.rtm";
			speed = -1.2;
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
			weaponIK = 1;
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon",0.9};
		};

		class Assasin_udar_Unarmed: Assasin_Jump_MainWeap {
			forceAim = 0;
			headBobMode = 0;
			headBobStrength = 0;
			actions = "WBK_HL_Assasin_Moveset_Attack_Unarmed";
			file = "\z\AUX_95th\addons\units\separatistDroids\animations\Assasin_udar_Unarmed.rtm";
			speed = -1.2;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {0};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {0};
			rightHandIKEnd = 0;
			weaponIK = 0;
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon",0.9,"AmovPercMstpSnonWnonDnon",0.9};
		};
	};
};

class CfgFunctions {
    class AUX_95th {
        class SeparatistDroidsCommando {
			file = "\z\AUX_95th\addons\units\separatistDroids\functions\commando";
            class checkCanJump {};
            class checkIsInHouse {};
            class handleCommandoFallDamage {};
            class handleCommandoJump {};
        };

		class SeparatistDroidsB1 {
			file = "\z\AUX_95th\addons\units\separatistDroids\functions\B1";
            class handleB1ShieldInit {};
        };
    };
};

class CfgFactionClasses { 
    class AUX_95th_Faction_SeparatistDroids {displayName = "[95th] Separatist Droids"; scope=2; scopecurator=2; priority = 1; side = 1;};  
};

class CfgEditorCategories{
	class AUX_95th_Faction_SeparatistDroids{displayName = "[95th] Separatist Droids";};
};

class CfgEditorSubcategories {
	class AUX_95th_Faction_SeparatistDroids_Category_Ground_Infantry{displayName="Infantry";};
	class AUX_95th_Faction_SeparatistDroids_Category_Ground_Commandos{displayName="Commandos";};
	class AUX_95th_Faction_SeparatistDroids_Category_Ground_TSeries{displayName="T-Series";};
	class AUX_95th_Faction_SeparatistDroids_Category_Ground_B1_Battledroids{displayName="B1 Battledroids";};
};

class CBA_Extended_EventHandlers_base;

class CfgVehicles {
	class JLTS_Droid_B1_E5;
	class JLTS_Droid_B1_Commander;
	class JLTS_Droid_B1_AR;
	class JLTS_Droid_B1_AT;
	class JLTS_Droid_B1_SBB3;
	class JLTS_Droid_B1_Sniper;
	class JLTS_Droid_B1_Crew;
	class JLTS_Droid_B1_Rocket;
	class JLTS_Droid_B1_Prototype;

    class lsd_cis_bxdroid_specops;
	class AUX_95th_Unit_P1_Basic_Trooper;

	class 3AS_CIS_TS_F;
	class 3AS_CIS_TS_Green;
	class 3AS_CIS_TS_Red;

	// B1's
	#include "Units\standardB1s.hpp"
	#include "Units\specialB1s.hpp"
	
	// BX's
	#include "Units\bxs.hpp"

	// T-Series's
	#include "Units\tSeries.hpp"
};

#include "CfgEventHandlers.hpp"