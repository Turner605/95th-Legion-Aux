#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
            "AUX_95th_Fliknot_F",
            "AUX_95th_Fliknot_Brown"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_vehicles_shared"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgVehicles {
    class 3AS_Fliknot_F;
    class 3AS_Fliknot_Brown;

    class AUX_95th_Fliknot_F: 3AS_Fliknot_F {
        displayName = "Fliknot Speeder";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Cars";
    };

    class AUX_95th_Fliknot_Brown: 3AS_Fliknot_Brown {
        displayName = "Fliknot Speeder (Brown)";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Cars";
    };
};

#include "CfgEventHandlers.hpp"