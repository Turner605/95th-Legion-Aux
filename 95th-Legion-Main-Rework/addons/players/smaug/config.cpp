#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
            QUOTE(DOUBLES(AUX_95th_Unit_P1_Basic,PLAYER_NAME)),
            QUOTE(DOUBLES(AUX_95th_Unit_P1_MC,PLAYER_NAME)),
            QUOTE(DOUBLES(AUX_95th_Unit_P1_Cold_Assault,PLAYER_NAME)),
            QUOTE(DOUBLES(AUX_95th_Unit_Commando,PLAYER_NAME))
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_players_shared"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgWeapons {
	class InventoryItem_Base_F;
    class ItemCore;
    class UniformItem;
    class Uniform_Base: ItemCore { class ItemInfo; };

    #include "\z\AUX_95th\addons\players\shared\helmets.hpp"
    #include "\z\AUX_95th\addons\players\shared\uniforms.hpp"
    #include "\z\AUX_95th\addons\players\shared\vests.hpp"
};

class CfgVehicles {
    #include "\z\AUX_95th\addons\players\shared\units.hpp"
    #include "\z\AUX_95th\addons\players\shared\backpacks.hpp"
};

#include "CfgEventHandlers.hpp"

// Helmets
// Backpacks
// Uniforms
