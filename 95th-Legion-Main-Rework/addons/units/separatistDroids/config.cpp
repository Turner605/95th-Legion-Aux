#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
			"AUX_95th_Droid_B1_Unit_AA", "AUX_95th_Droid_B1_Unit_AT", "AUX_95th_Droid_B1_Unit_AutoRifleman",
			"AUX_95th_Droid_B1_Unit_Commander", "AUX_95th_Droid_B1_Unit_Rifleman", "AUX_95th_Droid_B1_Unit_Shotgun",
			"AUX_95th_Droid_B1_Unit_Sniper", "AUX_95th_Droid_B1_Unit_Crew", "AUX_95th_Droid_B1_Unit_Pilot",
			"AUX_95th_Droid_B1_Unit_Diplomat", "AUX_95th_Droid_B1_Unit_Firefighter", 
			"AUX_95th_Droid_B1_Unit_Medic", "AUX_95th_Droid_B1_Unit_Police", 
			
			"AUX_95th_Droid_B1_Random", "AUX_95th_Droid_B1_Random_Standard_Launchers", "AUX_95th_Droid_B1_Random_Specialists",
			
			"AUX_95th_Droid_B1_Rocket_Unit_Rifleman", "AUX_95th_Droid_B1_Rocket_Unit_AT",

			"AUX_95th_Droid_B2_Unit_Blaster", "AUX_95th_Droid_B2_Unit_GL", "AUX_95th_Droid_B2_Unit_Shotgun",

            "AUX_95th_Droid_BX_Unit_Rifleman", "AUX_95th_Droid_BX_Unit_Commander", "AUX_95th_Droid_BX_Unit_Guard",
			"AUX_95th_Droid_BX_Unit_Diplomat", "AUX_95th_Droid_BX_Unit_Shotgun", "AUX_95th_Droid_BX_Unit_Sniper",
			"AUX_95th_CIS_Disguised_Trooper",
			"AUX_95th_CIS_TS_F", "AUX_95th_CIS_TS_Green", "AUX_95th_CIS_TS_Red",
			"AUX_95th_Droid_B1_Shield", "AUX_95th_Droid_B1_Turret", "AUX_95th_Droid_B1_Mortar",

			"AUX_95th_Human_Unit_Riot"
        };
        weapons[] = {
			"AUX_95th_E5_shield_attached"
		};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "AUX_95th_main", 
            "AUX_95th_units_shared",
			"JLTS_characters_DroidUnits",
			"AUX_95th_voicelines"
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
		class Units_SeparatistDroids {
			file = "\z\AUX_95th\addons\units\separatistDroids\functions\init";
            class B1Init {};
            class radarJammerInit {};
        };

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
            class handleB1TurretInit {};
            class handleB1MortarInit {};
            class handleB1RocketFallDamage {};
            class spawnRandomB1 {};
        };

		class SeparatistDroidsB2 {
			file = "\z\AUX_95th\addons\units\separatistDroids\functions\B2";
            class b2Init {};
        };
    };
};

class CfgEditorSubcategories {
	class AUX_95th_Faction_SeparatistDroids_Category_Ground_Infantry{displayName="DEPRICATED";};
	class AUX_95th_Faction_SeparatistDroids_Category_Ground_Commandos{displayName="DEPRICATED";};
	class AUX_95th_Faction_SeparatistDroids_Category_Ground_TSeries{displayName="DEPRICATED";};
	class AUX_95th_Faction_SeparatistDroids_Category_Ground_B1_Battledroids{displayName="DEPRICATED";};
	class AUX_95th_Faction_SeparatistDroids_Category_Ground_Humans{displayName="DEPRICATED";};
	class AUX_95th_Faction_SeparatistDroids_Category_Ground_B1_Battledroids_Rocket{displayName="DEPRICATED";};
	class AUX_95th_Faction_SeparatistDroids_Category_Ground_B2_Battledroids{displayName="DEPRICATED";};
};

class CfgGroups {
	class East {
		class AUX_95th_Separatist_Army  {
			name = "[95th] Separatist Army";
			class AUX_95th_Faction_SeparatistDroids_B1 {
				name = "B1 Battledroids (Standard)";

				class AUX_95th_Groups_Droid_B1_Rocket_FireTeam {
					side = 0;
					faction = "AUX_95th_Separatist_Army";
					name="B1 Rocket Fire Team";
					class Unit0 {side = 0; vehicle = "AUX_95th_Droid_B1_Rocket_Unit_Rifleman"; rank = "SERGEANT"; position[] = {0,0,0};};
					class Unit1 {side = 0; vehicle = "AUX_95th_Droid_B1_Rocket_Unit_Rifleman"; rank = "PRIVATE"; position[] = {5,-5,0};};
					class Unit2{side = 0; vehicle = "AUX_95th_Droid_B1_Rocket_Unit_Rifleman"; rank = "PRIVATE"; position[] = {-5,-5,0};};
					class Unit3{side = 0; vehicle = "AUX_95th_Droid_B1_Rocket_Unit_Rifleman"; rank = "PRIVATE"; position[] = {10,-10,0};};
				};

				class AUX_95th_Groups_Droid_B1_FireTeam {
					side = 0;
					faction = "AUX_95th_Separatist_Army";
					name="B1 Fire Team";
					class Unit0 {side = 0; vehicle = "AUX_95th_Droid_B1_Unit_Rifleman"; rank = "SERGEANT"; position[] = {0,0,0};};
					class Unit1 {side = 0; vehicle = "AUX_95th_Droid_B1_Unit_Rifleman"; rank = "PRIVATE"; position[] = {5,-5,0};};
					class Unit2 {side = 0; vehicle = "AUX_95th_Droid_B1_Unit_Rifleman"; rank = "PRIVATE"; position[] = {-5,-5,0};};
					class Unit3 {side = 0; vehicle = "AUX_95th_Droid_B1_Unit_AutoRifleman"; rank = "PRIVATE"; position[] = {10,-10,0};};
				};

				class AUX_95th_Groups_Droid_B1_SniperTeam {
					side = 0;
					faction = "AUX_95th_Separatist_Army";
					name="B1 Sniper Team";
					class Unit0 {side = 0; vehicle = "AUX_95th_Droid_B1_Unit_Sniper"; rank = "SERGEANT"; position[] = {0,0,0};};
					class Unit1 {side = 0; vehicle = "AUX_95th_Droid_B1_Unit_Rifleman"; rank = "PRIVATE"; position[] = {5,-5,0};};
				};
				
				class AUX_95th_Groups_Droid_B1_AssaultTeam_AT {
					side = 0;
					faction = "AUX_95th_Separatist_Army";
					name="B1 Assault Team (AT/AA)";
					class Unit0 {side = 0; vehicle = "AUX_95th_Droid_B1_Unit_Commander"; rank = "SERGEANT"; position[] = {0,0,0};};
					class Unit1 {side = 0; vehicle = "AUX_95th_Droid_B1_Unit_Rifleman"; rank = "PRIVATE"; position[] = {5,0,0};};
					class Unit2 {side = 0; vehicle = "AUX_95th_Droid_B1_Unit_AA"; rank = "PRIVATE"; position[] = {5,5,0};};
					class Unit3 {side = 0; vehicle = "AUX_95th_Droid_B1_Unit_AT"; rank = "PRIVATE"; position[] = {0,5,0};};
					class Unit4 {side = 0; vehicle = "AUX_95th_Droid_B1_Unit_AutoRifleman"; rank = "PRIVATE"; position[] = {-5,0,0};};
					class Unit5 {side = 0; vehicle = "AUX_95th_Droid_B1_Unit_Shotgun"; rank = "PRIVATE"; position[] = {-5,-5,0};};
					class Unit6 {side = 0; vehicle = "AUX_95th_Droid_B1_Unit_Sniper"; rank = "PRIVATE"; position[] = {10,0,0};};
					class Unit7 {side = 0; vehicle = "AUX_95th_Droid_B1_Unit_Rifleman"; rank = "PRIVATE"; position[] = {10,5,0};};
				};

				// class AUX_95th_Groups_Droid_B1_Specialist_AssaultTeam_Random {
				// 	side = 0;
				// 	faction = "AUX_95th_Separatist_Army";
				// 	name="Random B1 Specialist Assault Team";
				// 	class Unit0 {side = 0; vehicle = "AUX_95th_Droid_B1_Unit_Commander"; rank = "SERGEANT"; position[] = {0,0,0};};
				// 	class Unit1 {side = 0; vehicle = "AUX_95th_Droid_B1_Random"; rank = "PRIVATE"; position[] = {5,-5,0};};
				// 	class Unit2 {side = 0; vehicle = "AUX_95th_Droid_B1_Random"; rank = "PRIVATE"; position[] = {-5,-5,0};};
				// 	class Unit3 {side = 0; vehicle = "AUX_95th_Droid_B1_Random_Specialists"; rank = "PRIVATE"; position[] = {-5,-5,0};};
				// 	class Unit4 {side = 0; vehicle = "AUX_95th_Droid_B1_Random"; rank = "PRIVATE"; position[] = {10,-5,0};};
				// 	class Unit5 {side = 0; vehicle = "AUX_95th_Droid_B1_Random"; rank = "PRIVATE"; position[] = {-10,-10,0};};
				// 	class Unit6 {side = 0; vehicle = "AUX_95th_Droid_B1_Random"; rank = "PRIVATE"; position[] = {-10,-5,0};};
				// 	class Unit7 {side = 0; vehicle = "AUX_95th_Droid_B1_Random"; rank = "PRIVATE"; position[] = {10,10,0};};
				// };


			};
		};
	};
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
	class JLTS_Droid_B1_Pilot;

    class lsd_cis_bxdroid_specops;
	class lsd_cis_b2_standard;
	class AUX_95th_Unit_P1_Basic_Trooper;

	class 3AS_CIS_TS_F;
	class 3AS_CIS_TS_Green;
	class 3AS_CIS_TS_Red;

	class WBK_B2_Mod_Standart;
	class WBK_B2_Mod_GL;
	class WBK_B2_Mod_Shotgun;

	class 3AS_U_CIS_Heavy;

	class JLTS_B1_backpack;

	// B1's
	#include "Units\specialB1s.hpp"
	#include "Units\rocketB1s.hpp"
};

class CfgWeapons {
    class ItemCore;
    class UniformItem;
    class Uniform_Base: ItemCore { class ItemInfo; };

	class JLTS_DroidB1;

	class JLTS_E5_shield;
	class AUX_95th_E5_shield_attached : JLTS_E5_shield {
		scope = 2;
		class LinkedItems {
			class LinkedItemsUnder {
				slot = "UnderBarrelSlot";
				item = "JLTS_riot_shield_droid_attachment";
			};
		};
	};

	class U_I_CombatUniform;
	class ls_redforUniform_base: U_I_CombatUniform {
		class ItemInfo;
	};

	class lsd_cis_b2Droid_uniform: ls_redforUniform_base {};

	class AUX_95th_Droid_B2_Uniform: lsd_cis_b2Droid_uniform {
		JLTS_hasStunProtection=1;
		scope = 2;
		displayName = "B2 Droid Chassis";
		class ItemInfo: ItemInfo {
			uniformModel = "-";
			uniformClass = "lsd_cis_b2Droid_base";
			containerClass = "Supply150";
			mass = 40;
		};
	};

	class AUX_95th_Droid_B1_Uniform_Diplomat: JLTS_DroidB1 {
		displayName="B1 Diplomat Uniform";
		faction="AUX_95th_Separatist_Army";
		editorCategory="AUX_95th_Separatist_Army";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_B1_Battledroids";
		class ItemInfo: UniformItem {
			uniformClass="AUX_95th_Droid_B1_Unit_Diplomat";
			uniformModel="-";
			containerClass="Supply150";
			mass=40;
		};
	};

	class AUX_95th_Droid_B1_Uniform_Firefighter: JLTS_DroidB1 {
		displayName="B1 Firefighter Uniform";
		faction="AUX_95th_Separatist_Army";
		editorCategory="AUX_95th_Separatist_Army";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_B1_Battledroids";
		class ItemInfo: UniformItem {
			uniformClass="AUX_95th_Droid_B1_Unit_Firefighter";
			uniformModel="-";
			containerClass="Supply150";
			mass=40;
		};
	};

	class AUX_95th_Droid_B1_Uniform_Medic: JLTS_DroidB1 {
		displayName="B1 Medic Uniform";
		faction="AUX_95th_Separatist_Army";
		editorCategory="AUX_95th_Separatist_Army";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_B1_Battledroids";
		class ItemInfo: UniformItem {
			uniformClass="AUX_95th_Droid_B1_Unit_Medic";
			uniformModel="-";
			containerClass="Supply150";
			mass=40;
		};
	};

	class AUX_95th_Droid_B1_Uniform_Police: JLTS_DroidB1 {
		displayName="B1 Police Uniform";
		faction="AUX_95th_Separatist_Army";
		editorCategory="AUX_95th_Separatist_Army";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_B1_Battledroids";
		class ItemInfo: UniformItem {
			uniformClass="AUX_95th_Droid_B1_Unit_Police";
			uniformModel="-";
			containerClass="Supply150";
			mass=40;
		};
	};
};

class ACE_Medical_Injuries {
	class damageTypes {
		class woundHandlers;
		class falling {
			class woundHandlers: woundHandlers {
				AUX_95th_Droid_Unit_Commando_Handler = "{ call AUX_95th_fnc_handleCommandoFallDamage }";
				AUX_95th_Droid_Unit_B1_Rocket_Handler = "{ call AUX_95th_fnc_handleB1RocketFallDamage }";
			};
		};

		class collision {
			class woundHandlers: woundHandlers {
				AUX_95th_Droid_Unit_B1_Rocket_Handler = "{ call AUX_95th_fnc_handleB1RocketFallDamage }";
			};
		};
	};
};

class CfgUserActions {
	class AUX_95th_Commando_Jump {
		displayName = "Commando Jump"; tooltip = "Jump with the BX Commandos";
		onActivate = "[player] spawn AUX_95th_fnc_handleCommandoJump"; modifierBlocking = 1;
	};

	class AUX_95th_Personal_Shield {
		displayName = "Personal Shield"; tooltip = "Activate the Personal Shield";
		onActivate = "[player] spawn AUX_95th_fnc_handlePersonalShield"; modifierBlocking = 1;
	};
};

class CfgDefaultKeysPresets {
	class Arma2 {
		class Mappings {
			AUX_95th_Commando_Jump[] = {0x1D130004};
			AUX_95th_Personal_Shield[] = {0x1D130004};
		};
	};
};

class UserActionGroups {
	class AUX_95th_CIS_Units {
		name = "95th - CIS";
		isAddon = 1;
		group[] = {"AUX_95th_Commando_Jump", "AUX_95th_Personal_Shield"};
	};
};

#include "CfgEventHandlers.hpp"