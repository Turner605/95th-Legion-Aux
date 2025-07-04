#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
			"AUX_95th_Droid_Radar_Jammer_Turret",
			"AUX_95th_Droid_Radar_Jammer_Turret_3K",
			"AUX_95th_Droid_Microwave_Emitter_Turret"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_vehicles_shared"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgVehicles {
    class 3AS_Deka_Static_Sniper;
    class 3AS_Deka_Static;
    class 3AS_DF9_Radar_Grey;
    class ls_vehicle_radarDish_opfor;
    class ls_turret_pirate_autoturret;
    class ls_turret_pirate_autoturretCQC;
    class JLTS_UST_turret_CIS;

    class AUX_95th_Droid_Microwave_Emitter_Turret: 3AS_DF9_Radar_Grey{
        displayName="Microwave Emitter (TODO)";
		scope = 2;
        faction="AUX_95th_Separatist_Army";
        editorCategory="AUX_95th_Separatist_Army";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Turrets";
        crew="JLTS_Droid_B1_Crew";
    };
    
    class AUX_95th_Droid_Radar_Jammer_Turret: ls_vehicle_radarDish_opfor{
        displayName="Radar Jammer (6k)";
		side = 0;
		scope = 2;
        faction="AUX_95th_Separatist_Army";
        editorCategory="AUX_95th_Separatist_Army";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Turrets";
        crew="JLTS_Droid_B1_Crew";
    };

    class AUX_95th_Droid_Radar_Jammer_Turret_3K: ls_vehicle_radarDish_opfor{
        displayName="Radar Jammer (3k)";
		side = 0;
		scope = 2;
        faction="AUX_95th_Separatist_Army";
        editorCategory="AUX_95th_Separatist_Army";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Turrets";
        crew="JLTS_Droid_B1_Crew";
    };
};

#include "CfgEventHandlers.hpp"