#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_Server_main"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};



#include "CfgEventHandlers.hpp"