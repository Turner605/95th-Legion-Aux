#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
            "AUX_95th_Air_Unit_Vulture",
            "AUX_95th_Air_Unit_Vulture_Brown",
            "AUX_95th_Air_Unit_Vulture_Tan",
            "AUX_95th_Air_Unit_Vulture_AA",
            "AUX_95th_Air_Unit_Vulture_AA_Brown",
            "AUX_95th_Air_Unit_Vulture_AA_Tan",
            "AUX_95th_Air_Unit_Vulture_CAS",
            "AUX_95th_Air_Unit_Vulture_CAS_Brown",
            "AUX_95th_Air_Unit_Vulture_CAS_Tan"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_vehicles_shared"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgVehicles {
    class 3AS_CIS_Vulture_F;
    class 3AS_CIS_Vulture_Brown;
    class 3AS_CIS_Vulture_Tan;

    class 3AS_CIS_Vulture_AA_F;
    class 3AS_CIS_Vulture_AA_Brown;
    class 3AS_CIS_Vulture_AA_Tan;

    class 3AS_CIS_Vulture_CAS_F;
    class 3AS_CIS_Vulture_CAS_Tan;
    class 3AS_CIS_Vulture_CAS_Brown;

    class AUX_95th_Air_Unit_Vulture: 3AS_CIS_Vulture_F {
        displayName = "Vulture";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Planes";
        crew="AUX_95th_Droid_B1_Unit_Crew";
    };

    class AUX_95th_Air_Unit_Vulture_Brown: 3AS_CIS_Vulture_Brown {
        displayName = "Vulture (Brown)";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Planes";
        crew="AUX_95th_Droid_B1_Unit_Crew";
    };

    class AUX_95th_Air_Unit_Vulture_Tan: 3AS_CIS_Vulture_Tan {
        displayName = "Vulture (Tan)";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Planes";
        crew="AUX_95th_Droid_B1_Unit_Crew";
    };

    class AUX_95th_Air_Unit_Vulture_AA: 3AS_CIS_Vulture_AA_F {
        displayName = "Vulture AA";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Planes";
        crew="AUX_95th_Droid_B1_Unit_Crew";
    };
    
    class AUX_95th_Air_Unit_Vulture_AA_Brown: 3AS_CIS_Vulture_AA_Brown {
        displayName = "Vulture AA (Brown)";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Planes";
        crew="AUX_95th_Droid_B1_Unit_Crew";
    };

    class AUX_95th_Air_Unit_Vulture_AA_Tan: 3AS_CIS_Vulture_AA_Tan {
        displayName = "Vulture AA (Tan)";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Planes";
        crew="AUX_95th_Droid_B1_Unit_Crew";
    };

    class AUX_95th_Air_Unit_Vulture_CAS: 3AS_CIS_Vulture_CAS_F {
        displayName = "Vulture CAS";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Planes";
        crew="AUX_95th_Droid_B1_Unit_Crew";
    };
    
    class AUX_95th_Air_Unit_Vulture_CAS_Brown: 3AS_CIS_Vulture_CAS_Tan {
        displayName = "Vulture CAS (Brown)";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Planes";
        crew="AUX_95th_Droid_B1_Unit_Crew";
    };

    class AUX_95th_Air_Unit_Vulture_CAS_Tan: 3AS_CIS_Vulture_CAS_Brown {
        displayName = "Vulture CAS (Tan)";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Planes";
        crew="AUX_95th_Droid_B1_Unit_Crew";
    };
};

#include "CfgEventHandlers.hpp"