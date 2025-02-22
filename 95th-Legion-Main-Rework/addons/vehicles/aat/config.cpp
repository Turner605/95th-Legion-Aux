#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
            "AUX_95th_Tank_Unit_AAT",
			"AUX_95th_Tank_Unit_AAT_Winter",
			"AUX_95th_Tank_Unit_AAT_Desert",
			"AUX_95th_Tank_Unit_AAT_Arid",
			"AUX_95th_Tank_Unit_AAT_Heavy"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_vehicles_shared"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgVehicles {
    class 3AS_AAT;
    class 3AS_AAT_Winter;
    class 3AS_AAT_Desert;
    class 3AS_AAT_Arid;
    class 3AS_AAT_Red;
    
    class AUX_95th_Tank_Unit_AAT: 3AS_AAT {
        displayName = "AAT";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Tanks";
        crew="AUX_95th_Droid_B1_Unit_Crew";
    };
    
    class AUX_95th_Tank_Unit_AAT_Winter: 3AS_AAT_Winter {
        displayName = "AAT (Winter)";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Tanks";
        crew="AUX_95th_Droid_B1_Unit_Crew";
    };
    
    class AUX_95th_Tank_Unit_AAT_Desert: 3AS_AAT_Desert {
        displayName="AAT (Desert)";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Tanks";
        crew="AUX_95th_Droid_B1_Unit_Crew";
    };
    
    class AUX_95th_Tank_Unit_AAT_Arid: 3AS_AAT_Arid {
        displayName="AAT (Arid)";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Tanks";
        crew="AUX_95th_Droid_B1_Unit_Crew";
    };
    
    // class AUX_95th_Tank_Unit_AAT_Green: 3AS_AAT_Green {
    //  scope=2;
    // 	displayName="AAT (SPECIAL TODO)";
    // 	editorCategory="AUX_95th_CIS_Forces";
    // 	editorSubcategory="AUX_95th_CIS_Forces_Tanks";
    // 	faction="AUX_95th_CIS";
    // };
    
    class AUX_95th_Tank_Unit_AAT_Heavy: 3AS_AAT_Red {
        displayName="AAT (Heavy)";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Tanks";
        crew="AUX_95th_Droid_B1_Unit_Crew";
    };
    
};

#include "CfgEventHandlers.hpp"