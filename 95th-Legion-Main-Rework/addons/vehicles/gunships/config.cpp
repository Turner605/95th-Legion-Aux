#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
            "AUX_95th_Air_Unit_Gunship",
            "AUX_95th_Air_Unit_Gunship_Transport",
            "AUX_95th_Air_Unit_MAF",
            "AUX_95th_Air_Unit_MAF_Transport"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_vehicles_shared"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgVehicles {
    class ls_cis_hmp;
    class ls_cis_hmp_transport;
    class 3AS_MAF_Gunship_F;
    class 3AS_MAF_Transport_F;

    class AUX_95th_Air_Unit_Gunship: ls_cis_hmp {
        displayName = "Gunship";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Helicopters";
        crew="AUX_95th_Droid_B1_Unit_Crew";
    };
    
    class AUX_95th_Air_Unit_Gunship_Transport: ls_cis_hmp_transport {
        displayName = "Gunship (Transport)";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Helicopters";
        crew="AUX_95th_Droid_B1_Unit_Crew";
    };

    class AUX_95th_Air_Unit_MAF: 3AS_MAF_Gunship_F {
        displayName = "MAF";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Helicopters";
        crew="AUX_95th_Droid_B1_Unit_Crew";
    };
    
    class AUX_95th_Air_Unit_MAF_Transport: 3AS_MAF_Transport_F {
        displayName = "MAF (Transport)";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Helicopters";
        crew="AUX_95th_Droid_B1_Unit_Crew";
    };
};

#include "CfgEventHandlers.hpp"