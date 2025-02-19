#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
            "AUX_95th_Air_Unit_Tri_Fighter"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_vehicles_shared"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgVehicles {
    class 3AS_Tri_Fighter_DynamicLoadout;

    class AUX_95th_Air_Unit_Tri_Fighter: 3AS_Tri_Fighter_DynamicLoadout {
        displayName="Tri Fighter";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Planes";
        crew="AUX_95th_Droid_B1_Unit_Crew";
    };
};

#include "CfgEventHandlers.hpp"