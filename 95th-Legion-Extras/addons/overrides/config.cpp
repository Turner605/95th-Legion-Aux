#include "script_component.hpp"

// Needs to have the correct required addons

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "AUX_95th_Extras_main",
            "3AS_AAT",
            "ls_vehicles_ground",
            "3AS_Characters_Droids"
        };
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgFunctions {
    class AUX_95th_Extras {
        class Overrides {
			file = "\z\AUX_95th_Extras\addons\overrides\functions";
            class removeStamina {};
        };
    };
};

class CfgVehicles {
    // Vics
    class 3AS_CIS_AAT_F;
    class 3AS_AAT: 3AS_CIS_AAT_F { scope = 0; };

    class ls_ground_aat_base;
    class ls_ground_aat: ls_ground_aat_base { scope = 0; };

    class 3AS_SAC_Base_F;
    class 3AS_SAC_F: 3AS_SAC_Base_F { scope = 0; };

    class 3AS_PAC_Base_F;
    class 3AS_PAC_F: 3AS_PAC_Base_F { scope = 0; };

    class 3AS_Fliknot_Base_F;
    class 3AS_Fliknot_F: 3AS_Fliknot_Base_F { scope = 0; };
    class 3AS_Fliknot_Brown: 3AS_Fliknot_Base_F { scope = 0; };
    
    class ScavBase;
    class 3as_CIS_ScavDroid: ScavBase { scope = 0; };

    class JLTS_UAV_prowler_base;
    class JLTS_UAV_prowler_cis: JLTS_UAV_prowler_base { scope = 0; };

    class lsd_agtRaptor_base;
    class lsd_ground_agtRaptor: lsd_agtRaptor_base { scope = 0; };
    
    class 3AS_CIS_N99_F;
    class 3AS_N99: 3AS_CIS_N99_F { scope = 0; };
    class 3AS_N99_Canister: 3AS_CIS_N99_F { scope = 0; };

    class 3AS_Advanced_DSD_Base;
    class 3AS_Advanced_DSD: 3AS_Advanced_DSD_Base { scope = 0; };

    class 3AS_CIS_GAT_base_F;
    class 3AS_GAT: 3AS_CIS_GAT_base_F { scope = 0; };

    class 3AS_GAT_Light_base_F;
    class 3AS_GAT_Light: 3AS_GAT_Light_base_F { scope = 0; };

    class 3AS_MTT_01_Base;
    class 3AS_MTT: 3AS_MTT_01_Base { scope = 0; };

    class ls_ground_mtt_base;
    class ls_ground_mtt_cisBlue: ls_ground_mtt_base { scope = 0; };
    class ls_ground_mtt_federation: ls_ground_mtt_cisBlue { scope = 0; };

    class 3AS_Hailfire_Base;
    class 3AS_Hailfire_SAM: 3AS_Hailfire_Base { scope = 0; };
    class 3AS_Hailfire_AT: 3AS_Hailfire_Base { scope = 0; };
    class 3AS_Hailfire_Rocket: 3AS_Hailfire_Base { scope = 0; };

    class Tank_F;
    class ls_ground_bawhag_base;
    class 3AS_HAGM_Tan: Tank_F { scope = 0; };
    class 3AS_HAGM_CIS: 3AS_HAGM_Tan { scope = 0; };
    class ls_ground_bawhag: ls_ground_bawhag_base { scope = 0; };

    class JLTS_UGV_MSE6;
    class JLTS_UGV_MSE6_CIS: JLTS_UGV_MSE6 { scope = 0; };

    // B1 Droids
    class O_Soldier_F;
    class JLTS_Droid_B1_E5: O_Soldier_F { scope = 1; };
    class JLTS_Droid_B1_SBB3: JLTS_Droid_B1_E5 { scope = 1; };
    class TAS_Droid_B1_E5: JLTS_Droid_B1_E5 { scope = 1; };
    class JLTS_Droid_B1_Rocket: JLTS_Droid_B1_E5 { scope = 1; };
    class JLTS_Droid_B1_Prototype: JLTS_Droid_B1_E5 { scope = 1; };
    class JLTS_Droid_B1_Security: JLTS_Droid_B1_E5 { scope = 1; };

    class O_officer_F;
    class JLTS_Droid_B1_Commander: O_officer_F { scope = 1; };
    class JLTS_Droid_B1_OOM9: JLTS_Droid_B1_Commander { scope = 1; };

    class JLTS_Droid_B1_UAV_prowler: O_Soldier_F { scope = 1; };

    class TAS_Droid_B1_Prototype: JLTS_Droid_B1_Prototype { scope = 1; };

    class O_Soldier_LAT_F;
    class JLTS_Droid_B1_AT: O_Soldier_LAT_F { scope = 1; };
    class TAS_Droid_B1_AT: JLTS_Droid_B1_AT { scope = 1; };

    class O_crew_F;
    class JLTS_Droid_B1_Crew: O_crew_F { scope = 1; };
    class TAS_Droid_B1_Crew: JLTS_Droid_B1_Crew { scope = 1; };

    class O_sniper_F;
    class JLTS_Droid_B1_Sniper: O_sniper_F { scope = 1; };

    class O_Soldier_AR_F;
    class JLTS_Droid_B1_AR: O_Soldier_AR_F { scope = 1; };
    class TAS_Droid_B1_AR: JLTS_Droid_B1_AR { scope = 1; };

    class O_helipilot_F;
    class JLTS_Droid_B1_Pilot: O_helipilot_F { scope = 1; };

    class O_Soldier_AT_F;
    class JLTS_Droid_B1_Marine: O_Soldier_AT_F { scope = 1; };

    class TAS_Droid_B1_Commander: JLTS_Droid_B1_Commander { scope = 1; };
    class TAS_Droid_B1_Rocket: JLTS_Droid_B1_Rocket { scope = 1; };
    class TAS_Droid_B1_SBB3: JLTS_Droid_B1_SBB3 { scope = 1; };
    class TAS_Droid_B1_Security: JLTS_Droid_B1_Security { scope = 1; };
    class TAS_Droid_B1_Sniper: JLTS_Droid_B1_Sniper { scope = 1; };
    class TAS_Droid_B1_Marine: JLTS_Droid_B1_Marine { scope = 1; };
    class TAS_Droid_B1_Pilot: JLTS_Droid_B1_Pilot { scope = 1; };
    class TAS_Droid_B1_UAV_prowler: JLTS_Droid_B1_UAV_prowler { scope = 1; };
    
    class 3AS_CIS_B2_Base;
    class 3AS_CIS_B2_F: 3AS_CIS_B2_Base { scope = 1; };

    class TAS_Droid_B1_OOM9: JLTS_Droid_B1_OOM9 { scope = 1; };

    // T-Series Theres an issue I cant be arsed figuring out
    class 3AS_CIS_TS_Base;
    class 3AS_CIS_TS_F: 3AS_CIS_TS_Base { scope = 1; };
    class 3AS_CIS_TS_Green: 3AS_CIS_TS_Base { scope = 1; };
    class 3AS_CIS_TS_Red: 3AS_CIS_TS_Base { scope = 1; };
    class 3AS_CIS_TS_TV24: 3AS_CIS_TS_Base { scope = 1; };

    // Air (Gunships)
    class 3AS_HMP_Base;
    class 3AS_HMP_Gunship: 3AS_HMP_Base { scope = 0; };
    class 3AS_HMP_Transport: 3AS_HMP_Base { scope = 0; };

    class 3AS_MAF_Base_F;
    class 3AS_MAF_Gunship_F: 3AS_MAF_Base_F { scope = 0; };
    class 3AS_MAF_Transport_F: 3AS_MAF_Base_F { scope = 0; };

    class ls_hmp_base;
    class ls_cis_hmp: ls_hmp_base { scope = 0; };
    class ls_cis_hmp_transport: ls_hmp_base { scope = 0; };

    // Air (Vultures)
    class 3AS_Vulture_Base_F;
    class 3AS_CIS_Vulture_F: 3AS_Vulture_Base_F { scope = 0; };
    class 3AS_CIS_Vulture_Brown: 3AS_Vulture_Base_F { scope = 0; };
    class 3AS_CIS_Vulture_Tan: 3AS_Vulture_Base_F { scope = 0; };

    class 3AS_CIS_Vulture_AA_F: 3AS_Vulture_Base_F { scope = 0; };
    class 3AS_CIS_Vulture_AA_Brown: 3AS_CIS_Vulture_AA_F { scope = 0; };
    class 3AS_CIS_Vulture_AA_Tan: 3AS_CIS_Vulture_AA_F { scope = 0; };

    class 3AS_CIS_Vulture_CAS_F: 3AS_Vulture_Base_F { scope = 0; };
    class 3AS_CIS_Vulture_CAS_Tan: 3AS_CIS_Vulture_CAS_F { scope = 0; };
    class 3AS_CIS_Vulture_CAS_Brown: 3AS_CIS_Vulture_CAS_F { scope = 0; };

    // Air (Misc)
    class lsd_largeVTOL_base;
    class lsd_largeVTOL_federationDropship_base: lsd_largeVTOL_base { scope = 0; };
    class lsd_largeVTOL_cisDropship: lsd_largeVTOL_federationDropship_base { scope = 0; };

    class 3AS_Tri_Fighter_DynamicLoadout_Base;
    class 3AS_Tri_Fighter_DynamicLoadout: 3AS_Tri_Fighter_DynamicLoadout_Base { scope = 0; };

    // Turrets
    class 3AS_Deka_Static_Sniper_Base;
    class 3AS_Deka_Static_Sniper: 3AS_Deka_Static_Sniper_Base { scope = 0; };

    class 3AS_Deka_Static_Base;
    class 3AS_Deka_Static: 3AS_Deka_Static_Base { scope = 0; };

    class ls_turret_autoturret_base;
    class ls_turret_pirate_autoturret: ls_turret_autoturret_base { scope = 0; };

    class ls_turret_autoturret_CQC_base;
    class ls_turret_pirate_autoturretCQC: ls_turret_autoturret_CQC_base { scope = 0; };

    class JLTS_UST_turret_base;
    class JLTS_UST_turret_CIS: JLTS_UST_turret_base { scope = 0; };

    // B2's
    class lsd_cis_b2Droid_base;
    class lsd_cis_b2_standard: lsd_cis_b2Droid_base { scope = 0; };
    class WBK_B2_Mod_Standart: lsd_cis_b2_standard { scope = 0; };
    class WBK_B2_Mod_GL: WBK_B2_Mod_Standart { scope = 0; };
    class WBK_B2_Mod_Shotgun: WBK_B2_Mod_Standart { scope = 0; };

// 3AS_Tri_Fighter_DynamicLoadout
// lsd_largeVTOL_cisDropship
// JLTS_Droid_B1_AT
// JLTS_Droid_B1_AR
// JLTS_Droid_B1_Commander
// JLTS_Droid_B1_E5
// JLTS_Droid_B1_SBB3
// JLTS_Droid_B1_Sniper
// JLTS_Droid_B1_Crew
// JLTS_Droid_B1_Rocket
// WBK_B2_Mod_Standart
// WBK_B2_Mod_GL
// WBK_B2_Mod_Shotgun
// lsd_cis_bxdroid_specops

// 3AS_N99
// 3AS_Advanced_DSD
// 3AS_MTT
// 3AS_Hailfire_AT
// 3AS_Hailfire_SAM
// 3AS_Hailfire_Rocket
// 3AS_GAT
// 3AS_GAT_Light
// ls_turret_pirate_autoturret
// ls_turret_pirate_autoturretCQC
// JLTS_UST_turret_CIS
// 3AS_Deka_Static
// 3AS_Deka_Static_Sniper




};

#include "CfgEventHandlers.hpp"