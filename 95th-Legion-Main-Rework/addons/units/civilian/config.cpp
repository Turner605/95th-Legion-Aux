#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
            "AUX_95th_Civilian_Droid_Sweeper_Red",
            "AUX_95th_Civilian_Droid_Sweeper_Orange",
            "AUX_95th_Civilian_Droid_Sweeper_Green",
            "AUX_95th_Civilian_Droid_Medical",
            "AUX_95th_Civilian_Droid_Gonk",
            "AUX_95th_Civilian_Droid_Mouse",
            "AUX_95th_Vehicles_C9_Cruiser",
            "AUX_95th_Vehicles_SDS_Stealth"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "AUX_95th_main", 
            "AUX_95th_units_shared" 
        };
        authors[] = {"Turner"};
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

class CfgEditorCategories{
	class AUX_95th_Faction_Tiberian_Militia{displayName = "[95th] Tiberian Militia";};
};

class CfgVehicles {
    class C_man_1;

    class AUX_95th_Civilian_Droid_Base: C_man_1 {
        displayName = "Droid Base";
        scope=1;
		author = "95th Aux Team";
        faction="AUX_95th_Civilian";
        editorCategory="AUX_95th_Civilian";
        editorSubcategory="AUX_95th_Category_Drones";
    };

    class AUX_95th_Civilian_Droid_Sweeper_Red: AUX_95th_Civilian_Droid_Base {
        displayName = "Sweeper Droid (Red)";
        scope=2;
    };

    class AUX_95th_Civilian_Droid_Sweeper_Orange: AUX_95th_Civilian_Droid_Base {
        displayName = "Sweeper Droid (Orange)";
        scope=2;
    };

    class AUX_95th_Civilian_Droid_Sweeper_Green: AUX_95th_Civilian_Droid_Base {
        displayName = "Sweeper Droid (Green)";
        scope=2;
    };

    class AUX_95th_Civilian_Droid_Medical: AUX_95th_Civilian_Droid_Base {
        displayName = "Medical Droid";
        scope=2;
    };

    class AUX_95th_Civilian_Droid_Gonk: AUX_95th_Civilian_Droid_Base {
        displayName = "Gonk Droid";
        scope=2;
    };

    class AUX_95th_Civilian_Droid_Mouse: AUX_95th_Civilian_Droid_Base {
        displayName = "Mouse Droid";
        scope=2;
    };

	class 3AS_Aegis_Shuttle_F;

    class AUX_95th_Civilian_Ship_Base: 3AS_Aegis_Shuttle_F {
        displayName = "ShipBase";
        scope=1;
		side=3;
		author = "95th Aux Team";
        faction="AUX_95th_Civilian";
        editorCategory="AUX_95th_Civilian";
        editorSubcategory="AUX_95th_Category_Ships";
        crew="ls_civilian_randomSpecies_pilot";
    };

	class AUX_95th_Vehicles_C9_Cruiser: AUX_95th_Civilian_Ship_Base {
		displayName = "C9 Cruiser (Civilian)";
        scope=2;
	};

	class AUX_95th_Vehicles_SDS_Stealth: AUX_95th_Civilian_Ship_Base {
		displayName = "SDS Stealth Ship (Civilian)";
        scope=2;
	};

};

class Extended_InitPost_EventHandlers {	
	class AUX_95th_Civilian_Droid_Sweeper_Red {class AUX_95th_Civilian_Droid_Sweeper_Red_Init {init="[_this select 0, 'ls_sweeperDroid_red', '[0.0,0.0,0]', '[[0,-4,0],[0,0,1]]'] call AUX_95th_fnc_handleFakeVehicleInit;";};};
	class AUX_95th_Civilian_Droid_Sweeper_Orange {class AUX_95th_Civilian_Droid_Sweeper_Orange_Init {init="[_this select 0, 'ls_sweeperDroid_orange', '[0.0,0.0,0]', '[[0,-4,0],[0,0,1]]'] call AUX_95th_fnc_handleFakeVehicleInit;";};};
	class AUX_95th_Civilian_Droid_Sweeper_Green {class AUX_95th_Civilian_Droid_Sweeper_Green_Init {init="[_this select 0, 'ls_sweeperDroid_green', '[0.0,0.0,0]', '[[0,-4,0],[0,0,1]]'] call AUX_95th_fnc_handleFakeVehicleInit;";};};
	
    class AUX_95th_Civilian_Droid_Medical {class AUX_95th_Civilian_Droid_Medical_Init {init="[_this select 0, 'Land_3AS_Medical_Droid', '[0.0,-0.1,1]', '[[0,-4,0],[0,0,1]]'] call AUX_95th_fnc_handleFakeVehicleInit;";};};
    class AUX_95th_Civilian_Droid_Gonk {class AUX_95th_Civilian_Droid_Gonk_Init {init="[_this select 0, '3as_GNK', '[0.0,-0.1,0.8]', '[[0,-4,0],[0,0,1]]'] call AUX_95th_fnc_handleFakeVehicleInit;";};};
    class AUX_95th_Civilian_Droid_Mouse {class AUX_95th_Civilian_Droid_Mouse_Init {init="[_this select 0, 'ls_mse6', '[0.0,0,0]', '[[0,-4,0],[0,0,1]]'] call AUX_95th_fnc_handleFakeVehicleInit;";};};
	
    class AUX_95th_Vehicles_C9_Cruiser {class AUX_95th_Vehicles_C9_Cruiser_Init {init="[_this select 0, 'ls_staticShip_c9LightCruiser', '[0.0,0.0,27]', '[[0,-4,0],[0,0,1]]'] call AUX_95th_fnc_handleFakeVehicleInit;";};};
    class AUX_95th_Vehicles_SDS_Stealth {class AUX_95th_Vehicles_SDS_Stealth_Init {init="[_this select 0, 'ls_staticShip_sdsStealthShip', '[0.0,0.0,27]', '[[0,-4,0],[0,0,1]]'] call AUX_95th_fnc_handleFakeVehicleInit;";};};
};



#include "CfgEventHandlers.hpp"