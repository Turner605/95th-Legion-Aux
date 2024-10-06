#include "script_component.hpp"

class CfgPatches {
    class AUX_95th_units_shared {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			"AUX_95th_main"
		};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"