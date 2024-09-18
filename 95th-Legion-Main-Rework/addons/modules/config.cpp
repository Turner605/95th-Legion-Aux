#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgFunctions {
    class AUX_95th {
        class Modules {
			file = "\z\AUX_95th\addons\modules\functions";
            class jetDroidInsertion {};
            class droidPodInsertion {};
            class isCloseToGround {};
        };
    };
};

#include "CfgEventHandlers.hpp"