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
    
    // 3AS Droids
    class JLTS_Droid_B1_E5;
    class TAS_Droid_B1_E5: JLTS_Droid_B1_E5 { scope = 0; };

    class JLTS_Droid_B1_AR;
    class TAS_Droid_B1_AR: JLTS_Droid_B1_AR { scope = 0; };

    class JLTS_Droid_B1_AT;
    class TAS_Droid_B1_AT: JLTS_Droid_B1_AT { scope = 0; };

    class JLTS_Droid_B1_Commander;
    class TAS_Droid_B1_Commander: JLTS_Droid_B1_Commander { scope = 0; };

    class JLTS_Droid_B1_Crew;
    class TAS_Droid_B1_Crew: JLTS_Droid_B1_Crew { scope = 0; };

    class JLTS_Droid_B1_Prototype;
    class TAS_Droid_B1_Prototype: JLTS_Droid_B1_Prototype { scope = 0; };

    class JLTS_Droid_B1_UAV_prowler;
    class TAS_Droid_B1_UAV_prowler: JLTS_Droid_B1_UAV_prowler { scope = 0; };

    class JLTS_Droid_B1_Rocket;
    class TAS_Droid_B1_Rocket: JLTS_Droid_B1_Rocket { scope = 0; };

    class JLTS_Droid_B1_SBB3;
    class TAS_Droid_B1_SBB3: JLTS_Droid_B1_SBB3 { scope = 0; };

    class JLTS_Droid_B1_Security;
    class TAS_Droid_B1_Security: JLTS_Droid_B1_Security { scope = 0; };

    class JLTS_Droid_B1_Sniper;
    class TAS_Droid_B1_Sniper: JLTS_Droid_B1_Sniper { scope = 0; };

    class 3AS_CIS_B2_Base;
    class 3AS_CIS_B2_F: 3AS_CIS_B2_Base { scope = 0; };

    class JLTS_Droid_B1_OOM9;
    class TAS_Droid_B1_OOM9: JLTS_Droid_B1_OOM9 { scope = 0; };

    class JLTS_Droid_B1_Marine;
    class TAS_Droid_B1_Marine: JLTS_Droid_B1_Marine { scope = 0; };

    class JLTS_Droid_B1_Pilot;
    class TAS_Droid_B1_Pilot: JLTS_Droid_B1_Pilot { scope = 0; };

    // T-Series Theres an issue I cant be arsed figuring out
    // class 3AS_CIS_TS_Base;
    // class 3AS_CIS_TS_F: 3AS_CIS_TS_Base { scope = 0; };
    // class 3AS_CIS_TS_Green: 3AS_CIS_TS_Base { scope = 0; };
    // class 3AS_CIS_TS_Red: 3AS_CIS_TS_Base { scope = 0; };
    // class 3AS_CIS_TS_TV24: 3AS_CIS_TS_Base { scope = 0; };


// 3AS_CIS_Vulture_F
// 3AS_CIS_Vulture_AA_F
// 3AS_CIS_Vulture_CAS_F
// 3AS_Tri_Fighter_DynamicLoadout
// lsd_largeVTOL_cisDropship
// ls_cis_hmp
// ls_cis_hmp_transport
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