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
            class cisQuickGarrison {};
            class jetDroidInsertion {};
            class droidPodInsertion {};
            class isCloseToGround {};
            class broadcastOrder66 {};
            class reanimateDroid {};
        };
    };
};

class CfgSounds {
	class executeOrder66 {
		name = "executeOrder66";
		sound[] = {"\z\AUX_95th\addons\modules\sounds\order66.wav",5,1};
		titles[] = {};
	};
};

#include "CfgEventHandlers.hpp"