#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
            "AUX_95th_Tank_Unit_HAGM",
            "AUX_95th_Tank_Unit_HAGM_Tan"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_vehicles_shared"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgVehicles {
    class 3AS_HAGM_Tan;
    class 3AS_HAGM_CIS;

    class AUX_95th_Tank_Unit_HAGM: 3AS_HAGM_CIS {
        displayName="HAG-M";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Artillery";
        crew="AUX_95th_Droid_B1_Unit_Crew";
    };
    
    class AUX_95th_Tank_Unit_HAGM_Tan: 3AS_HAGM_Tan {
        displayName="HAG-M (Tan)";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Artillery";
        crew="AUX_95th_Droid_B1_Unit_Crew";
    };
};

#include "CfgEventHandlers.hpp"