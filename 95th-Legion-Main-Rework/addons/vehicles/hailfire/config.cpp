#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
            "AUX_95th_Tank_Unit_Hailfire_AT",
            "AUX_95th_Tank_Unit_Hailfire_SAM",
            "AUX_95th_Tank_Unit_Artillery"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_vehicles_shared"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgVehicles {
    class 3AS_Hailfire_AT;
    class 3AS_Hailfire_SAM;
    class 3AS_Hailfire_Rocket;

    class AUX_95th_Tank_Unit_Hailfire_AT: 3AS_Hailfire_AT {
        displayName="Hailfire (AT)";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Tanks";
        crew="AUX_95th_Droid_B1_Unit_Crew";
    };
    
    class AUX_95th_Tank_Unit_Hailfire_SAM: 3AS_Hailfire_SAM {
        displayName="Hailfire (AA)";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Tanks";
        crew="AUX_95th_Droid_B1_Unit_Crew";
    };
    
    class AUX_95th_Tank_Unit_Artillery: 3AS_Hailfire_Rocket {
        displayName="Hailfire (Artillery)";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Tanks";
        crew="AUX_95th_Droid_B1_Unit_Crew";
    };
};

#include "CfgEventHandlers.hpp"