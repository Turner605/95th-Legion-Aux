#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
            "AUX_95th_Misc_Airborne_Terminal", "AUX_95th_Misc_Medical_Terminal", "AUX_95th_Misc_Permission_Terminal",
            "AUX_95th_Misc_Crate_Pad"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_objects_shared"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgVehicles {
    class 3AS_HoloTable_Rectangle_Prop;
    class 3AS_Terminal_Console_Med_Prop;
    class DSS_Permissions_Droid;
    class 3as_FOB_turret_base_prop;

    class AUX_95th_Misc_Airborne_Terminal : 3AS_HoloTable_Rectangle_Prop {
        displayName="Airborne Terminal";
        editorCategory="AUX_95th_Objects_GAR";
        editorSubcategory="AUX_95th_Objects_Terminals";
        class UserActions {
            class SelectInsert {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Select Dropzone";
                statement = "[player] call AUX_95th_fnc_handleParadrop"; 
            };
            class SetupGroup {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Become Airborne Group";
                statement = "[player] call AUX_95th_fnc_becomeAirborne"; 
            };
        };
    };

    class AUX_95th_Misc_Medical_Terminal : 3AS_Terminal_Console_Med_Prop {
        displayName="Medical Terminal";
        editorCategory="AUX_95th_Objects_GAR";
        editorSubcategory="AUX_95th_Objects_Terminals";
        class UserActions {
            class HealPlayer {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Heal";
                statement = "[player] call ace_medical_treatment_fnc_fullHealLocal"; 
            };
        };
    };

    class AUX_95th_Misc_Permission_Terminal : DSS_Permissions_Droid {
        model="optre_bw_buildings\reserchbase\doorconsole\doorconsole.p3d";
        displayName="Permission Terminal";
        editorCategory="AUX_95th_Objects_GAR";
        editorSubcategory="AUX_95th_Objects_Terminals";
        hiddenSelections[] = {"Screens","Lightbar"};
        hiddenSelectionsTextures[] = {
            "\z\AUX_95th\addons\objects\terminals\data\Permissions.paa", 
            "#(argb,8,8,3)color(1,0,0,1.0,co)"
        };
    };

    class AUX_95th_Misc_Crate_Pad : 3as_FOB_turret_base_prop {
        scope = 2;
        scopeCurator = 2;
        displayName="Crate Pad";
        editorCategory="AUX_95th_Objects_GAR";
        editorSubcategory="AUX_95th_Objects_Terminals";
        class UserActions {
            class SpawnAmmoCrate {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Spawn Platoon Ammo Crate";
                statement = "[this, 'AUX_95th_Crate_Platoon_Ammo'] spawn AUX_95th_fnc_handleCrateSpawned;"; 
            };
            class SpawnMedicalCrate {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Spawn Platoon Medical Crate";
                statement = "[this, 'AUX_95th_Crate_Platoon_Medical'] spawn AUX_95th_fnc_handleCrateSpawned;"; 
            };
            class SpawnExplosivesCrate {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Spawn Platoon Explosives Crate";
                statement = "[this, 'AUX_95th_Crate_Platoon_Explosives'] spawn AUX_95th_fnc_handleCrateSpawned;"; 
            };
            class SpawnVehicleAmmoCrate {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Spawn Vehicle Ammo Crate";
                statement = "[this, 'AUX_95th_Crate_Vehicle_Ammo'] spawn AUX_95th_fnc_handleCrateSpawned;"; 
            };
            class SpawnVehicleFuelCrate {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Spawn Vehicle Fuel Crate";
                statement = "[this, 'AUX_95th_Crate_Vehicle_Fuel'] spawn AUX_95th_fnc_handleCrateSpawned;"; 
            };
            class SpawnArsenalCrate {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Spawn Arsenal Crate";
                statement = "[this, 'AUX_95th_Crate_Restricted_Arsenal'] spawn AUX_95th_fnc_handleCrateSpawned;"; 
            };
        };
    };
};


#include "CfgEventHandlers.hpp"