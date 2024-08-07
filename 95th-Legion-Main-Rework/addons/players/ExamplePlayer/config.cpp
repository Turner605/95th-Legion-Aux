#include "script_component.hpp"

class CfgPatches {
    class AUX_95th_players_examplePlayer {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_players_shared"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgWeapons {
    #include "\z\AUX_95th\addons\players\shared\helmets.hpp"
};

#include "CfgEventHandlers.hpp"

// Helmets
// Backpacks
// Uniforms
