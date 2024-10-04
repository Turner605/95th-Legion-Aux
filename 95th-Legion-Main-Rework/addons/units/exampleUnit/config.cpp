#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_units_shared"};
        authors[] = {"Turner"};
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};



#include "CfgEventHandlers.hpp"