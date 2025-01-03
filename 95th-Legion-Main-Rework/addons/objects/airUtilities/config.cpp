#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
            "AUX_95th_AirUtil_Pad",
            "AUX_95th_AirUtil_Service",
            "AUX_95th_AirUtil_Fighter",
            "AUX_95th_AirUtil_Transport"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_objects_shared"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgVehicles {
    class 3AS_Pad_Square_Prop;
    class 3AS_Small_Terminal_Black_Prop;
    class 3AS_workbench_r1;
    class 3AS_TERMINAL_2_PROP;

    class AUX_95th_AirUtil_Pad : 3AS_Pad_Square_Prop {
        displayName="Landing Pad";
        editorCategory="AUX_95th_Objects_GAR";
        editorSubcategory="AUX_95th_Objects_Air";
    };

    class AUX_95th_AirUtil_Service : 3AS_workbench_r1 {
        displayName="Air Service Terminal";
        editorCategory="AUX_95th_Objects_GAR";
        editorSubcategory="AUX_95th_Objects_Air";
        class UserActions {
            class ServiceAirVehicle {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Service Air Vehicle";
                statement = "[this, ['Helicopter', 'Plane']] spawn AUX_95th_fnc_handleAirVehicleServiced;"; 
            };
            class EditPylons {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Edit Pylons";
                statement = "[this, player, ['Helicopter', 'Plane']] spawn AUX_95th_fnc_handlePylonEdit;"; 
            };
        };
    };

    class AUX_95th_AirUtil_Fighter : 3AS_Small_Terminal_Black_Prop {
        displayName="Fighter Terminal";
        editorCategory="AUX_95th_Objects_GAR";
        editorSubcategory="AUX_95th_Objects_Air";
        class UserActions {
            class SpawnZ95 {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Spawn [95th] Z95";
                statement = "[this, player, 'AUX_95th_Z95'] spawn AUX_95th_fnc_handleAirSpawned;"; 
            };
            class SpawnV19 {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Spawn [95th] V19";
                statement = "[this, player, 'AUX_95th_V19'] spawn AUX_95th_fnc_handleAirSpawned;"; 
            };
            class SpawnYWing {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Spawn [95th] Y-Wing";
                statement = "[this, player, 'AUX_95th_YWing'] spawn AUX_95th_fnc_handleAirSpawned;"; 
            };
            class SpawnARC170 {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Spawn [95th] ARC-170";
                statement = "[this, player, 'AUX_95th_ARC170'] spawn AUX_95th_fnc_handleAirSpawned;"; 
            };
            class SpawnDelta7 {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Spawn [3AS] Delta 7";
                statement = "[this, player, '3AS_Delta7_Orange'] spawn AUX_95th_fnc_handleAirSpawned;"; 
            };
        };
    };

    class AUX_95th_AirUtil_Transport : 3AS_TERMINAL_2_PROP {
        displayName="Air Transport Terminal";
        editorCategory="AUX_95th_Objects_GAR";
        editorSubcategory="AUX_95th_Objects_Air";
        class UserActions {
            class SpawnMrk1LAAT {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Spawn [95th] LAAT Mrk1 (Turrets)";
                statement = "[this, player, 'AUX_95th_LAAT_Mrk1'] spawn AUX_95th_fnc_handleAirSpawned;"; 
            };
            class SpawnMrk2LAAT {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Spawn [95th] LAAT Mrk2";
                statement = "[this, player, 'AUX_95th_LAAT_Mrk2'] spawn AUX_95th_fnc_handleAirSpawned;"; 
            };
            class SpawnMrk2LAATLights {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Spawn [95th] LAAT Mrk2 (Lights)";
                statement = "[this, player, 'AUX_95th_LAAT_Mrk2_Lights'] spawn AUX_95th_fnc_handleAirSpawned;"; 
            };
            class SpawnLAATC {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Spawn [95th] LAAT/C";
                statement = "[this, player, 'AUX_95th_LAAT_C'] spawn AUX_95th_fnc_handleAirSpawned;"; 
            };
            class SpawnLAATLE {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Spawn [3AS] LAAT/LE";
                statement = "[this, player, 'AUX_95th_LAAT_LE'] spawn AUX_95th_fnc_handleAirSpawned;"; 
            };
            class SpawnRho {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Spawn [95th] Rho Shuttle";
                statement = "[this, player, 'AUX_95th_Rho'] spawn AUX_95th_fnc_handleAirSpawned;"; 
            };
        };
    };
};


#include "CfgEventHandlers.hpp"