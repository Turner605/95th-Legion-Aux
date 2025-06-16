#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
            "AUX_95th_Droid_Turret_Roof_Turret",
			"AUX_95th_Droid_Turret_Roof_Turret_Shotgun",
			"AUX_95th_Droid_Turret_Ball",
			"AUX_95th_Droid_Radar_Jammer_Turret",
			"AUX_95th_Droid_Radar_Jammer_Turret_3K",
			"AUX_95th_Droid_Microwave_Emitter_Turret",
			"AUX_95th_Droid_Droideka_Turret",
			"AUX_95th_Droid_Droideka_Sniper_Turret",
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
    class lsd_cis_radarDish;
    class ls_turret_pirate_autoturret;
    class ls_turret_pirate_autoturretCQC;
    class JLTS_UST_turret_CIS;

    class AUX_95th_Droid_Droideka_Sniper_Turret: 3AS_Deka_Static_Sniper {
        displayName = "Droideka Sniper";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Turrets";
        DSS_isDroid=1;
    };

    class AUX_95th_Droid_Droideka_Turret: 3AS_Deka_Static {
        displayName = "Droideka";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Turrets";
        DSS_isDroid=1;
    };

    class AUX_95th_Droid_Microwave_Emitter_Turret: 3AS_DF9_Radar_Grey{
        displayName="Microwave Emitter (TODO)";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Turrets";
        crew="AUX_95th_Droid_B1_Unit_Crew";
    };
    
    class AUX_95th_Droid_Radar_Jammer_Turret: lsd_cis_radarDish{
        displayName="Radar Jammer (6k)";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Turrets";
        crew="AUX_95th_Droid_B1_Unit_Crew";
    };

    class AUX_95th_Droid_Radar_Jammer_Turret_3K: lsd_cis_radarDish{
        displayName="Radar Jammer (3k)";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Turrets";
        crew="AUX_95th_Droid_B1_Unit_Crew";
    };

    class AUX_95th_Droid_Turret_Roof_Turret : ls_turret_pirate_autoturret {
        displayName="Roof Turret";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Turrets";
    };

    class AUX_95th_Droid_Turret_Roof_Turret_Shotgun : ls_turret_pirate_autoturretCQC {
        displayName="Roof Turret (Shotgun)";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Turrets";
    };

    class AUX_95th_Droid_Turret_Ball : JLTS_UST_turret_CIS {
        displayName="Turret (Ball)";
		scope = 2;
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Turrets";
    };
};

#include "CfgEventHandlers.hpp"