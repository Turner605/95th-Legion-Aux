#include "script_component.hpp"

// Needs to have the correct required addons

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"