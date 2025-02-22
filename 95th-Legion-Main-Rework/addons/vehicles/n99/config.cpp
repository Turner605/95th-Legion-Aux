#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
            "AUX_95th_Tank_Unit_N99",
            "AUX_95th_Tank_Unit_N99_C"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_vehicles_shared"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgVehicles {
    class 3AS_N99;
    class 3AS_N99_Canister;

    class AUX_95th_Tank_Unit_N99: 3AS_N99 {
        displayName="N99";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Tanks";
        crew="AUX_95th_Droid_B1_Unit_Crew";
    };

    class AUX_95th_Tank_Unit_N99_C: 3AS_N99_Canister {
        displayName="N99 (C)";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Tanks";
        crew="AUX_95th_Droid_B1_Unit_Crew";
    };
    
};

#include "CfgEventHandlers.hpp"