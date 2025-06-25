#include "script_component.hpp"

// Needs to have the correct required addons

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

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



    

// class AUX_95th_CIS_Disguised_Trooper: AUX_95th_Unit_P1_Basic_Trooper {
//     displayName="[95th] Disguised BX Trooper";
//     author="95th Aux Team";
//     DSS_Is_Disguised_As_Bluefor=1;
//     faction="AUX_95th_Separatist_Army";
//     editorCategory="AUX_95th_Separatist_Army";
//     editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Commandos";
//     uniformClass="AUX_95th_Uniform_P1_Basic_Trooper";
//     side = 0;
//     scope=2; 
//     scopecurator=2;
//     editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_AB.jpg"; //todo: change me
//     linkedItems[]={"AUX_95th_Helmet_P1_Basic_Trooper","95th_Basic_Vest_Rifleman","JLTS_Clone_radio","ItemGPS","ItemMap","ItemWatch","ItemCompass"};
//     respawnLinkedItems[]={"AUX_95th_Helmet_P1_Basic_Trooper","95th_Basic_Vest_Rifleman","JLTS_Clone_radio","ItemGPS","ItemMap","ItemWatch","ItemCompass"};
//     nakedUniform = "lsd_cis_bxDroid_uniform";
//     identityTypes[] = {"Head_LSD_BX"};
//     allowedFacewear[] = {
//         "Facewear_Empty_HUD_ARFAntenna_95th", 0.2,
//         "Facewear_Empty_HUD_Headlamps_95th", 1,
//         "Facewear_Empty_Headlamp_95th", 1,
//         "Facewear_Poncho_Empty_Green_95th", 0.1,
//         "Facewear_Scarf_Empty_Brown_95th", 0.1,
//         "Facewear_Scarf_Empty_Black_95th", 0.1,
//         "", 1
//     };
//     headgearList[] = {
//         "AUX_95th_Helmet_P1_Basic_Trooper", 0.9,
//         "AUX_95th_Helmet_P2_Airborne_Trooper", 0,
//         "AUX_95th_Helmet_P1_ARF_Trooper", 0.6,
//         "AUX_95th_Helmet_P1_Engineer_Trooper", 0.6,
//         "AUX_95th_Helmet_P1_SpecOps_Trooper", 0.6
//     };
//     class EventHandlers {
//         class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
//         init = "if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; };";
//     };
//     impactEffectsBlood = "ImpactMetal";
//     impactEffectsNoBlood = "ImpactPlastic";
//     canBleed = 0;
// };


    // class lsd_cis_bxdroid_specops;
	// class lsd_cis_b2_standard;
	// class AUX_95th_Unit_P1_Basic_Trooper;

	// class WBK_B2_Mod_Standart;
	// class WBK_B2_Mod_GL;
	// class WBK_B2_Mod_Shotgun;

	// class 3AS_U_CIS_Heavy;

	// class JLTS_B1_backpack;

	// // B1's
	// #include "Units\specialB1s.hpp"
	// #include "Units\rocketB1s.hpp"

	// // B2's
	// #include "Units\B2s.hpp"
	
	// // BX's
	// #include "Units\bxs.hpp"

	// // T-Series's
	// #include "Units\tSeries.hpp"

	// // Humans
	// class AUX_95th_Human_Unit_Riot: 3AS_U_CIS_Heavy {
	// 	scope=2;
	// 	DSS_DamageSystem_Active=1;
	// 	DSS_DamageSystem_Resistance=0.15;
	// 	DSS_DamageSystem_Headshot_Multiplier=4;
	// 	displayName="Riot (E-5S)";
	// 	faction="AUX_95th_Separatist_Army";
	// 	editorCategory="AUX_95th_Separatist_Army";
	// 	editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Humans";
	// 	AUX_95th_Can_Use_Shield=1;
	// };
};

#include "CfgEventHandlers.hpp"