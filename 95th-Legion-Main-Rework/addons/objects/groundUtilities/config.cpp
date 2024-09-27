#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
            "AUX_95th_GroundUtil_Vehicles_Heavy", 
            "AUX_95th_GroundUtil_Vehicles_Light", 
            "AUX_95th_GroundUtil_Pad", 
            "AUX_95th_GroundUtil_Refit", 
            "AUX_95th_GroundUtil_Service", 
            "AUX_95th_GroundUtil_Vehicles_Support"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_objects_shared"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgVehicles {
    class 3AS_Small_Terminal_Black_Prop;
    class 3AS_Terminal_2_Prop;
    class 3AS_Terminal_1_Prop;
    class 3AS_Pad_GAR_Prop;
    class 3AS_workbench_s;
    class 3AS_workbench_r1;

    class AUX_95th_GroundUtil_Vehicles_Heavy : 3AS_Small_Terminal_Black_Prop {
        displayName="Heavy Vehicle Terminal";
        editorCategory="AUX_95th_Objects_GAR";
        editorSubcategory="AUX_95th_Objects_GAR_Ground";
        class UserActions {
            class Spawn95thRX200 {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Spawn [95th] RX-200";
                statement = "[this, player, 'AUX_95th_RX200'] spawn AUX_95th_fnc_handleGroundSpawned;"; 
            };
            class SpawnFirehawke {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Spawn [95th] Firehawke";
                statement = "[this, player, 'AUX_95th_Firehawke'] spawn AUX_95th_fnc_handleGroundSpawned;"; 
            };
            class SpawnTX130 {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Spawn [95th] TX-130";
                statement = "[this, player, 'AUX_95th_TX_130'] spawn AUX_95th_fnc_handleGroundSpawned;"; 
            };
            class SpawnTX130Shield {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Spawn [95th] TX-130 (Shield)";
                statement = "[this, player, 'AUX_95th_TX_130_Shield'] spawn AUX_95th_fnc_handleGroundSpawned;"; 
            };
            // class SpawnTX130Strafing {
            // 	priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
            // 	displayName = "Spawn [3AS] TX-130 (Strafing)";
            // 	statement = "[this, player, '3as_saber_m1_strafe'] spawn AUX_95th_fnc_handleGroundSpawned;"; 
            // };
            class Spawn3ASATTE {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Spawn [95th] AT-TE";
                statement = "[this, player, 'AUX_95th_ATTE'] spawn AUX_95th_fnc_handleGroundSpawned;"; 
            };
        };
    };

    class AUX_95th_GroundUtil_Vehicles_Light : 3AS_Terminal_2_Prop {
        displayName="Light Vehicle Terminal";
        editorCategory="AUX_95th_Objects_GAR";
        editorSubcategory="AUX_95th_Objects_GAR_Ground";
        class UserActions {
            class SpawnSwampSpeeder {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Spawn [95th] Swamp Speeder";
                statement = "[this, player, 'AUX_95th_Swamp_Speeder'] spawn AUX_95th_fnc_handleGroundSpawned;"; 
            };
            class SpawnSwampSpeederTransport {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Spawn [95th] Swamp Speeder (Transport)";
                statement = "[this, player, 'AUX_95th_Swamp_Speeder_Transport'] spawn AUX_95th_fnc_handleGroundSpawned;"; 
            };
            class SpawnBantha {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Spawn [95th] Bantha";
                statement = "[this, player, 'AUX_95th_Bantha'] spawn AUX_95th_fnc_handleGroundSpawned;"; 
            };
            class SpawnBanthaUgv {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Spawn [95th] Bantha (UGV)";
                statement = "[this, player, 'AUX_95th_Bantha_UAV_Test'] spawn AUX_95th_fnc_handleGroundSpawned;"; 
            };
            class SpawnMAVr {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Spawn [95th] MAVr";
                statement = "[this, player, 'AUX_95th_MAVr'] spawn AUX_95th_fnc_handleGroundSpawned;"; 
            };
        };
    };

    class AUX_95th_GroundUtil_Pad : 3AS_Pad_GAR_Prop {
        displayName="Ground Pad";
        editorCategory="AUX_95th_Objects_GAR";
        editorSubcategory="AUX_95th_Objects_GAR_Ground";
    };

    class AUX_95th_GroundUtil_Refit : 3AS_workbench_s {
        displayName="Ground Refit Terminal";
        editorCategory="AUX_95th_Objects_GAR";
        editorSubcategory="AUX_95th_Objects_GAR_Ground";
    };

    class AUX_95th_GroundUtil_Service : 3AS_workbench_r1 {
        displayName="Ground Service Terminal";
        editorCategory="AUX_95th_Objects_GAR";
        editorSubcategory="AUX_95th_Objects_GAR_Ground";
        class UserActions {
            class ServiceGroundVehicle {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Service Ground Vehicle";
                statement = "[this, ['Car', 'Tank']] spawn AUX_95th_fnc_handleGroundVehicleServiced;"; 
            };
            class EditPylons {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Edit Pylons";
                statement = "[this, player, ['Car', 'Tank']] spawn AUX_95th_fnc_handlePylonEdit;"; 
            };
        };
    };

    class AUX_95th_GroundUtil_Vehicles_Support : 3AS_Terminal_1_Prop {
        displayName="Support Vehicle Terminal";
        editorCategory="AUX_95th_Objects_GAR";
        editorSubcategory="AUX_95th_Objects_GAR_Ground";
        class UserActions {
            class SpawnCommandOutpost {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Spawn [95th] Command Post";
                statement = "[this, player, 'AUX_95th_Command_Outpost'] spawn AUX_95th_fnc_handleGroundSpawned;"; 
            };
            class SpawnGroundRhoCrate {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Spawn Rho Ground Crate";
                statement = "[this, player, 'AUX_95th_Rho_Crate_Ground_Deployment'] spawn AUX_95th_fnc_handleGroundSpawned;"; 
            };
            class SpawnAirRhoCrate {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Spawn Rho Air Crate";
                statement = "[this, player, 'AUX_95th_Rho_Crate_Air_Deployment'] spawn AUX_95th_fnc_handleGroundSpawned;"; 
            };
            class SpawnDefenceRhoCrate {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Spawn Rho Defence Crate";
                statement = "[this, player, 'AUX_95th_Rho_Crate_Defence_Deployment'] spawn AUX_95th_fnc_handleGroundSpawned;"; 
            };
            class SpawnUtilityRhoCrate {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Spawn Rho Utility Crate";
                statement = "[this, player, 'AUX_95th_Rho_Crate_Utility_Deployment'] spawn AUX_95th_fnc_handleGroundSpawned;"; 
            };
            class LoadATRT {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Load AT-RT Into LAAT";
                statement = "[this] spawn AUX_95th_fnc_handleLoadATRT;"; 
            };
        };
    };
};

#include "CfgEventHandlers.hpp"