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