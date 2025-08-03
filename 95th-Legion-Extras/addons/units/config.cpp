#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "AUX_95th_Droid_B1_Rocket_E5", "AUX_95th_Droid_B1_Rocket_SBB3", "AUX_95th_Droid_B1_Rocket_Sniper",
            "AUX_95th_Droid_B1_Rocket_AR", "AUX_95th_Droid_B1_Rocket_Commander", "AUX_95th_Droid_B1_Rocket_AA",
            "AUX_95th_Droid_B1_Rocket_AT",

			"AUX_95th_CIS_Disguised_Trooper",

			"AUX_95th_Droid_B1_Unit_Diplomat", "AUX_95th_Droid_B1_Unit_Firefighter", "AUX_95th_Droid_B1_Unit_Medic", 
            "AUX_95th_Droid_B1_Unit_Police", "AUX_95th_Droid_B1_Shield", "AUX_95th_Droid_B1_Turret", "AUX_95th_Droid_B1_Mortar"
        };
        weapons[] = {
			"AUX_95th_E5_shield_attached"
		};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "AUX_95th_Extras_main",
            "AUX_95th_Extras_overrides"
        };
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

#include "CfgSounds.hpp"
#include "CfgMovesBasic.hpp"
#include "CfgMovesMaleSdr.hpp"

class CfgFunctions {
    class AUX_95th_Extras {
		class Units_Init {
			file = "\z\AUX_95th_Extras\addons\units\functions\init";
            class B1Init {};
            class b2Init {};
            class radarJammerInit {};
        };

        class Units_Droids_Commando {
			file = "\z\AUX_95th_Extras\addons\units\functions\commando";
            class checkCanJump {};
            class checkIsInHouse {};
            class handleCommandoFallDamage {};
            class handleCommandoJump {};
        };

		class Units_Droids_B1 {
			file = "\z\AUX_95th_Extras\addons\units\functions\B1";
            class handleB1ShieldInit {};
            class handleB1TurretInit {};
            class handleB1MortarInit {};
            class handleB1RocketFallDamage {};
        };
    };
};

class CfgGroups {
	class East {
		class AUX_95th_Separatist_Army  {
			name = "[95th] Separatist Army";
            #include "./groups/standardB1s.hpp"
            #include "./groups/rocketB1s.hpp"
		};
	};
};

class CBA_Extended_EventHandlers_base;

class CfgVehicles {
    class JLTS_Droid_B1_E5;
    class JLTS_Droid_B1_Security;
    class JLTS_Droid_B1_SBB3;
    class JLTS_Droid_B1_Crew;
    class JLTS_Droid_B1_Sniper;
    class JLTS_Droid_B1_AR;
    class JLTS_Droid_B1_Commander;
    class JLTS_Droid_B1_Marine;
    class JLTS_Droid_B1_AT;
    class JLTS_Droid_B1_Pilot;
	// class JLTS_Droid_B1_Rocket;
	// class JLTS_Droid_B1_Prototype;

	// class JLTS_B1_backpack;



	// // B1's
	// #include "Units\specialB1s.hpp"
	#include "Units\rocketB1s.hpp"

    class AUX_95th_Unit_P1_Basic_Trooper;
    class AUX_95th_CIS_Disguised_Trooper: AUX_95th_Unit_P1_Basic_Trooper {
        displayName = "Disguised";
        side = 0;
        scope=2; 
        scopecurator=2;

        faction="AUX_95th_Separatist_Army";
        editorCategory="AUX_95th_Separatist_Army";
        editorSubcategory="AUX_95th_Category_Droids_Commando";

        uniformClass="AUX_95th_Uniform_P1_Basic_Trooper";

        DSS_DamageSystem_Active=1;
        DSS_DamageSystem_Resistance=0.5;
        DSS_DamageSystem_Headshot_Multiplier=2;
        DSS_Is_Disguised_As_Bluefor=1;
        AUX_95th_Has_Commando_Jump=1;
        DSS_EMP_Protection_Value=1;
        impactEffectsBlood = "ImpactMetal";
        impactEffectsNoBlood = "ImpactPlastic";
        canBleed = 0;

        allowedFacewear[] = {
            "Facewear_Empty_HUD_ARFAntenna_95th", 0.2,
            "Facewear_Empty_HUD_Headlamps_95th", 1,
            "Facewear_Empty_Headlamp_95th", 1,
            "Facewear_Poncho_Empty_Green_95th", 0.1,
            "Facewear_Scarf_Empty_Brown_95th", 0.1,
            "Facewear_Scarf_Empty_Black_95th", 0.1,
            "", 1
        };
        headgearList[] = {
            "AUX_95th_Helmet_P1_Basic_Trooper", 0.9,
            "AUX_95th_Helmet_P2_Airborne_Trooper", 0,
            "AUX_95th_Helmet_P1_ARF_Trooper", 0.6,
            "AUX_95th_Helmet_P1_Engineer_Trooper", 0.6,
            "AUX_95th_Helmet_P1_SpecOps_Trooper", 0.6
        };

        class EventHandlers {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
            init = "if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; };";
        };

        linkedItems[]={"AUX_95th_Helmet_P1_Basic_Trooper","95th_Basic_Vest_Rifleman","JLTS_Clone_radio","ItemGPS","ItemMap","ItemWatch","ItemCompass"};
        respawnLinkedItems[]={"AUX_95th_Helmet_P1_Basic_Trooper","95th_Basic_Vest_Rifleman","JLTS_Clone_radio","ItemGPS","ItemMap","ItemWatch","ItemCompass"};
        nakedUniform = "lsd_cis_bxDroid_uniform";
        identityTypes[] = {"ls_head_bxDroid"};
    };

	// class 3AS_U_CIS_Heavy;
	// class AUX_95th_Human_Unit_Riot: 3AS_U_CIS_Heavy {
	// 	scope=2;
	// 	DSS_DamageSystem_Active=1;
	// 	DSS_DamageSystem_Resistance=0.15;
	// 	DSS_DamageSystem_Headshot_Multiplier=4;
	// 	displayName="Riot (E-5S)";
    //     faction="AUX_95th_Separatist_Army";
    //     editorCategory="AUX_95th_Separatist_Army";
    //     editorSubcategory="AUX_95th_Category_Humans";
	// 	AUX_95th_Can_Use_Shield=1;
	// };
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

	class AUX_95th_Droid_B1_Uniform_Diplomat: JLTS_DroidB1 {
		displayName="B1 Diplomat Uniform";
        faction="AUX_95th_Separatist_Army";
        editorCategory="AUX_95th_Separatist_Army";
        editorSubcategory="AUX_95th_Category_Droids_B1";
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
        editorSubcategory="AUX_95th_Category_Droids_B1";
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
        editorSubcategory="AUX_95th_Category_Droids_B1";
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
        editorSubcategory="AUX_95th_Category_Droids_B1";
		class ItemInfo: UniformItem {
			uniformClass="AUX_95th_Droid_B1_Unit_Police";
			uniformModel="-";
			containerClass="Supply150";
			mass=40;
		};
	};

	// class U_I_CombatUniform;
	// class ls_redforUniform_base: U_I_CombatUniform {
	// 	class ItemInfo;
	// };

	// class lsd_cis_b2Droid_uniform: ls_redforUniform_base {};

	// class AUX_95th_Droid_B2_Uniform: lsd_cis_b2Droid_uniform {
	// 	JLTS_hasStunProtection=1;
	// 	scope = 2;
	// 	displayName = "B2 Droid Chassis";
	// 	class ItemInfo: ItemInfo {
	// 		uniformModel = "-";
	// 		uniformClass = "lsd_cis_b2Droid_base";
	// 		containerClass = "Supply150";
	// 		mass = 40;
	// 	};
	// };
};

class ACE_Medical_Injuries {
	class damageTypes {
		class woundHandlers;
		class falling {
			class woundHandlers: woundHandlers {
				AUX_95th_Droid_Unit_Commando_Handler = "{ call AUX_95th_Extras_fnc_handleCommandoFallDamage }";
				AUX_95th_Droid_Unit_B1_Rocket_Handler = "{ call AUX_95th_Extras_fnc_handleB1RocketFallDamage }";
			};
		};

		class collision {
			class woundHandlers: woundHandlers {
				AUX_95th_Droid_Unit_B1_Rocket_Handler = "{ call AUX_95th_Extras_fnc_handleB1RocketFallDamage }";
			};
		};
	};
};

class CfgUserActions {
	class AUX_95th_Commando_Jump {
		displayName = "Commando Jump"; tooltip = "Jump with the BX Commandos";
		onActivate = "[player] spawn AUX_95th_Extras_fnc_handleCommandoJump"; modifierBlocking = 1;
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