#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
            "AUX_95th_Misc_Airborne_Terminal", "AUX_95th_Misc_Medical_Terminal", "AUX_95th_Misc_Permission_Terminal",
            "AUX_95th_Misc_Crate_Pad", "AUX_95th_Misc_Pod_Terminal", 
            "AUX_95th_Misc_Auto_Airspawn_Controller", "AUX_95th_Misc_Auto_Airspawn_Marker"
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
    class 3AS_HoloTable_Octagon_Prop;
    class Sign_Arrow_Cyan_F;
    class 3AS_Holotable_GAR;

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

    class AUX_95th_Misc_Pod_Terminal : 3AS_HoloTable_Octagon_Prop {
        displayName="Pod Terminal";
        editorCategory="AUX_95th_Objects_GAR";
        editorSubcategory="AUX_95th_Objects_Terminals";
        class UserActions {
            class SelectSingleInsert {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Select Solo Dropzone";
                statement = "[player, false] call AUX_95th_fnc_handlePodInsert"; 
            };
            class SelectGroupInsert {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Select Group Dropzone";
                statement = "[player, true] call AUX_95th_fnc_handlePodInsert"; 
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
        model="optre_bw_buildings\reserchbase\doorconsole\doorconsole.p3d"; // 3AS_T_Screen
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
        };
    };

    class AUX_95th_Misc_Auto_Airspawn_Marker : Sign_Arrow_Cyan_F {
        scope = 2;
        scopecurator=2;
        displayName="Auto Air Marker";
        editorCategory="AUX_95th_Objects_ZEUS";
        editorSubcategory="AUX_95th_Objects_Factories";
    };

    class AUX_95th_Misc_Auto_Airspawn_Controller : 3AS_Holotable_GAR {
        scope = 2;
        scopecurator=2;
        displayName="Auto Air Controller";
        editorCategory="AUX_95th_Objects_ZEUS";
        editorSubcategory="AUX_95th_Objects_Factories";

        class UserActions {
            class EnableAirSpawns {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = "";
                condition = "(alive this) && (!isNull (getAssignedCuratorLogic player)) && (!(this getVariable ['AUX_95th_AutoSpawnAirEnabled', false]));";
                displayName = "Enable Auto Air Spawns";
                statement = "this setVariable ['AUX_95th_AutoSpawnAirEnabled', true, true]; [this, true] call AUX_95th_fnc_handleAutoAirSpawns"; 
            };

            class DisableAirSpawns {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = "";
                condition = "(alive this) && (!isNull (getAssignedCuratorLogic player)) && ((this getVariable ['AUX_95th_AutoSpawnAirEnabled', false]));";
                displayName = "Disable Auto Air Spawns";
                statement = "this setVariable ['AUX_95th_AutoSpawnAirEnabled', false, true]; [this, false] call AUX_95th_fnc_handleAutoAirSpawns"; 
            };
        };
    };
};

#include "CfgEventHandlers.hpp"