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

class CfgFunctions {
    class AUX_95th_Server {
        class Logging {
			file = "\z\AUX_95th_Server\addons\logging\functions";
            class setServerVariables {};
            class getServerVariable {};
        };
    };
};

#include "CfgEventHandlers.hpp"