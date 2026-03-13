#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_Extras_main"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgFunctions {
    class AUX_95th_Extras {
        class Misc {
			file = "\z\AUX_95th_Extras\addons\misc\functions";
            class lockMapDoors {};
        };
    };
};

#include "CfgEventHandlers.hpp"