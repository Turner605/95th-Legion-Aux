#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "AUX_95th_Extras_main",
            "3AS_AAT",
            "ls_vehicles_ground"
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
    class 3AS_CIS_AAT_F;
    class 3AS_AAT: 3AS_CIS_AAT_F { scope = 0; };

    class ls_ground_aat_base;
    class ls_ground_aat: ls_ground_aat_base { scope = 0; };

    class 3AS_SAC_Base_F;
    class 3AS_SAC_F: 3AS_SAC_Base_F { scope = 0; };

    class 3AS_PAC_Base_F;
    class 3AS_PAC_F: 3AS_PAC_Base_F { scope = 0; };




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