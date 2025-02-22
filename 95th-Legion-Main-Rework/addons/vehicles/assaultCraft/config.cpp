#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
            "AUX_95th_PAC_F",
            "AUX_95th_PAC_Brown",
            "AUX_95th_PAC_Tan",
            "AUX_95th_SAC_F",
            "AUX_95th_SAC_Brown",
            "AUX_95th_SAC_Tan",
            "AUX_95th_SAC_Repair_F",
            "AUX_95th_SAC_Repair_Brown",
            "AUX_95th_SAC_Repair_Tan"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_vehicles_shared"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgVehicles {
    class 3AS_PAC_F;
    class 3AS_PAC_Brown;
    class 3AS_PAC_Tan;

    class AUX_95th_PAC_F: 3AS_PAC_F {
        displayName = "Platoon Assault Craft";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_APC";
    };

    class AUX_95th_PAC_Brown: 3AS_PAC_Brown {
        displayName = "Platoon Assault Craft (Brown)";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_APC";
    };

    class AUX_95th_PAC_Tan: 3AS_PAC_Tan {
        displayName = "Platoon Assault Craft (Tan)";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_APC";
    };

    class 3AS_SAC_F;
    class 3AS_SAC_Brown;
    class 3AS_SAC_Tan;

    class AUX_95th_SAC_F: 3AS_SAC_F {
        displayName = "Squad Assault Craft";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_APC";
    };

    class AUX_95th_SAC_Brown: 3AS_SAC_Brown {
        displayName = "Squad Assault Craft (Brown)";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_APC";
    };

    class AUX_95th_SAC_Tan: 3AS_SAC_Tan {
        displayName = "Squad Assault Craft (Tan)";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_APC";
    };

    class 3AS_SAC_Repair_F;
    class 3AS_SAC_Repair_Brown;
    class 3AS_SAC_Repair_Tan;

    class AUX_95th_SAC_Repair_F: 3AS_SAC_Repair_F {
        displayName = "Repair Craft";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_APC";
    };

    class AUX_95th_SAC_Repair_Brown: 3AS_SAC_Repair_Brown {
        displayName = "Repair Craft (Brown)";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_APC";
    };

    class AUX_95th_SAC_Repair_Tan: 3AS_SAC_Repair_Tan {
        displayName = "Repair Craft (Tan)";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_APC";
    };
};

#include "CfgEventHandlers.hpp"