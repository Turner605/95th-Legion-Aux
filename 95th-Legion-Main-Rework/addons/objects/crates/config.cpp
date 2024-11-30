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

        #include "\z\AUX_95th\addons\vehicles\shared\sharedInventory.hpp"
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

        class TransportItems {
            class _xx_ACE_packingBandage{name="ACE_packingBandage"; count=50;};
            class _xx_ACE_elasticBandage{name="ACE_elasticBandage"; count=50;};
            class _xx_ACE_fieldDressing{name="ACE_fieldDressing"; count=50;};
            class _xx_ACE_quikclot{name="ACE_quikclot"; count=25;};
            class _xx_kat_accuvac{name="kat_accuvac"; count=15;};
            class _xx_ACE_adenosine{name="ACE_adenosine"; count=30;};
            class _xx_ACE_salineIV{name="ACE_salineIV"; count=10;};
            class _xx_ACE_salineIV_500{name="ACE_salineIV_500"; count=15;};
            class _xx_ACE_salineIV_250{name="ACE_salineIV_250"; count=20;};
            class _xx_kat_X_AED{name="kat_X_AED"; count=5;};
            class _xx_kat_Pulseoximeter{name="kat_Pulseoximeter"; count=5;};
            class _xx_ACE_tourniquet{name="ACE_tourniquet"; count=30;};
            class _xx_ACE_surgicalKit{name="ACE_surgicalKit"; count=5;};
            class _xx_ACE_splint{name="ACE_splint"; count=20;};
            class _xx_ACE_morphine{name="ACE_morphine"; count=30;};
            class _xx_kat_larynx{name="kat_larynx"; count=20;};
            class _xx_kat_guedel{name="kat_guedel"; count=20;};
            class _xx_kat_IO_FAST{name="kat_IO_FAST"; count=10;};
            class _xx_ACE_epinephrine{name="ACE_epinephrine"; count=30;};
            class _xx_kat_chestSeal{name="kat_chestSeal"; count=15;};
            class _xx_ACE_bodyBag{name="ACE_bodyBag"; count=20;};
            class _xx_kat_aatKit{name="kat_aatKit"; count=15;};
            class _xx_kat_IV_16{name="kat_IV_16"; count=15;};
            class _xx_kat_Painkiller{name="kat_Painkiller"; count=30;};
        };
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