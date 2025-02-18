#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
            "AUX_95th_CIS_ScavDroid",
            "AUX_95th_UAV_prowler_cis",
            "AUX_95th_ground_agtRaptor"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_vehicles_shared"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgVehicles {
    class 3as_CIS_ScavDroid;

    class AUX_95th_CIS_ScavDroid: 3as_CIS_ScavDroid {
        displayName = "Scavenger";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Drones";
    };

    class JLTS_UAV_prowler_cis;

    class AUX_95th_UAV_prowler_cis: JLTS_UAV_prowler_cis {
        displayName = "Prowler 1000";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Drones";
    };

    class lsd_ground_agtRaptor;
    
    class AUX_95th_ground_agtRaptor: lsd_ground_agtRaptor {
        displayName = "Raptor";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Drones";
    };
};

#include "CfgEventHandlers.hpp"