#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
            "AUX_95th_Crate_Platoon_Ammo", "AUX_95th_Crate_Platoon_Medical", "AUX_95th_Crate_Platoon_Explosives", "AUX_95th_Crate_Vehicle_Ammo",
            "AUX_95th_Crate_Vehicle_Fuel", "AUX_95th_Crate_Full_Arsenal", "AUX_95th_Crate_Restricted_Arsenal", "AUX_95th_Crate_Inverted_Arsenal"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_objects_shared", "3AS_Prop_Crates", "AUX_95th_Ace"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgVehicles {
    class 3AS_Supply_Large_Ammo_Prop;
    class 3AS_Supply_Large_Medical_Prop;
    class 3AS_Supply_Large_Black_Prop;
    class 3AS_Supply_Large_Blue_Prop;
    class 3AS_Supply_Large_Red_Prop;
    class 3AS_Supply_Large_Prop;

    class AUX_95th_Crate_Full_Arsenal: 3AS_Supply_Large_Prop {
        displayName="Arsenal (Full)";
        editorCategory="AUX_95th_Objects_GAR";
        editorSubcategory="AUX_95th_Objects_GAR_Crates";
        maximumLoad=2000;

        ace_cargo_size = 4;
        ace_cargo_canLoad = 1;
        ace_cargo_noRename = 1;
        ace_cargo_blockUnloadCarry = 1;

        ace_dragging_canDrag = 1;
        ace_dragging_ignoreWeight = 1;

        ace_dragging_canCarry = 1;
        ace_dragging_ignoreWeightCarry = 1;
    };

    class AUX_95th_Crate_Inverted_Arsenal: 3AS_Supply_Large_Prop {
        displayName="Arsenal (Inverted)";
        editorCategory="AUX_95th_Objects_GAR";
        editorSubcategory="AUX_95th_Objects_GAR_Crates";
        maximumLoad=2000;

        ace_cargo_size = 4;
        ace_cargo_canLoad = 1;
        ace_cargo_noRename = 1;
        ace_cargo_blockUnloadCarry = 1;

        ace_dragging_canDrag = 1;
        ace_dragging_ignoreWeight = 1;

        ace_dragging_canCarry = 1;
        ace_dragging_ignoreWeightCarry = 1;
    };

    class AUX_95th_Crate_Platoon_Ammo : 3AS_Supply_Large_Ammo_Prop {
        displayName="[95th] Platoon Ammo Crate";
        author="95th Aux Team";
        editorCategory="AUX_95th_Objects_GAR";
        editorSubcategory="AUX_95th_Objects_GAR_Crates";
        maximumLoad=2000;

        ace_cargo_size = 4;
        ace_cargo_canLoad = 1;
        ace_cargo_noRename = 1;
        ace_cargo_blockUnloadCarry = 1;

        ace_dragging_canDrag = 1;
        ace_dragging_ignoreWeight = 1;

        ace_dragging_canCarry = 1;
        ace_dragging_ignoreWeightCarry = 1;

		#include "\z\AUX_95th\addons\main\inventories\weaponInventory.hpp"
    };

    class AUX_95th_Crate_Platoon_Explosives : 3AS_Supply_Large_Black_Prop {
        displayName="[95th] Platoon Explosives Crate";
        author="95th Aux Team";
        editorCategory="AUX_95th_Objects_GAR";
        editorSubcategory="AUX_95th_Objects_GAR_Crates";
        maximumLoad=2000;

        ace_cargo_size = 4;
        ace_cargo_canLoad = 1;
        ace_cargo_noRename = 1;
        ace_cargo_blockUnloadCarry = 1;

        ace_dragging_canDrag = 1;
        ace_dragging_ignoreWeight = 1;

        ace_dragging_canCarry = 1;
        ace_dragging_ignoreWeightCarry = 1;
    };

    class AUX_95th_Crate_Platoon_Medical : 3AS_Supply_Large_Medical_Prop {
        displayName="[95th] Platoon Medical Crate";
        author="95th Aux Team";
        editorCategory="AUX_95th_Objects_GAR";
        editorSubcategory="AUX_95th_Objects_GAR_Crates";
        maximumLoad=2000;

        ace_cargo_size = 4;
        ace_cargo_canLoad = 1;
        ace_cargo_noRename = 1;
        ace_cargo_blockUnloadCarry = 1;

        ace_dragging_canDrag = 1;
        ace_dragging_ignoreWeight = 1;

        ace_dragging_canCarry = 1;
        ace_dragging_ignoreWeightCarry = 1;

		#include "\z\AUX_95th\addons\main\inventories\medicalInventory.hpp"
    };

    class AUX_95th_Crate_Restricted_Arsenal: 3AS_Supply_Large_Prop {
        displayName="Arsenal (Restricted)";
        editorCategory="AUX_95th_Objects_GAR";
        editorSubcategory="AUX_95th_Objects_GAR_Crates";
        maximumLoad=2000;

        ace_cargo_size = 4;
        ace_cargo_canLoad = 1;
        ace_cargo_noRename = 1;
        ace_cargo_blockUnloadCarry = 1;

        ace_dragging_canDrag = 1;
        ace_dragging_ignoreWeight = 1;

        ace_dragging_canCarry = 1;
        ace_dragging_ignoreWeightCarry = 1;
    };

    class AUX_95th_Crate_Vehicle_Ammo : 3AS_Supply_Large_Blue_Prop {
        displayName="[95th] Vehicle Ammo Crate";
        author="95th Aux Team";
        editorCategory="AUX_95th_Objects_GAR";
        editorSubcategory="AUX_95th_Objects_GAR_Crates";
        ace_rearm_defaultSupply = 1200;
        maximumLoad=0;

        ace_cargo_size = 4;
        ace_cargo_canLoad = 1;
        ace_cargo_noRename = 1;
        ace_cargo_blockUnloadCarry = 1;

        ace_dragging_canDrag = 1;
        ace_dragging_ignoreWeight = 1;

        ace_dragging_canCarry = 1;
        ace_dragging_ignoreWeightCarry = 1;
    };

    class AUX_95th_Crate_Vehicle_Fuel : 3AS_Supply_Large_Red_Prop {
        displayName="[95th] Vehicle Fuel Crate";
        author="95th Aux Team";
        editorCategory="AUX_95th_Objects_GAR";
        editorSubcategory="AUX_95th_Objects_GAR_Crates";
        ace_refuel_fuelCargo = 3000;
        ace_refuel_hooks[] = {{0,0,0},{0,0,0}};
        maximumLoad=0;

        ace_cargo_size = 4;
        ace_cargo_canLoad = 1;
        ace_cargo_noRename = 1;
        ace_cargo_blockUnloadCarry = 1;

        ace_dragging_canDrag = 1;
        ace_dragging_ignoreWeight = 1;

        ace_dragging_canCarry = 1;
        ace_dragging_ignoreWeightCarry = 1;
    };
};

class Extended_InitPost_EventHandlers {
	class AUX_95th_Crate_Full_Arsenal {class AUX_95th_Crate_Full_Arsenal_Init {init = "[_this select 0, true] call ace_arsenal_fnc_initBox;";};};
	class AUX_95th_Crate_Restricted_Arsenal {class AUX_95th_Crate_Restricted_Arsenal_Init {init = "[_this select 0, AUX_95th_Arsenal_Whitelisted_All] call ace_arsenal_fnc_initBox;";};};
	class AUX_95th_Crate_Inverted_Arsenal {class AUX_95th_Crate_Inverted_Arsenal_Init {init = "[_this select 0] call AUX_95th_fnc_invertedArsenalInit;";};};
};

#include "CfgEventHandlers.hpp"