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
        class Ace {
			file = "\z\AUX_95th_Extras\addons\ace\functions";
            class handleOpenArsenal {};
        };
    };
};

class CfgVehicles {
    class Man;
	class LandVehicle;
	class Air;

	//-----------------------------------------------------------------Player Actions-----------------------------------------------------------------
    class CAManBase: Man {

		//-----------------------------------------------------------------Self Actions-----------------------------------------------------------------
        class ACE_SelfActions {
            class ACE_Equipment {
				class AUX_95th_Extras_Ace_Arsenal {
					displayName = "Arsenal"; condition = "true"; statement = "[_player] call AUX_95th_Extras_fnc_handleOpenArsenal";
				};
			};
		};
	};
};

#include "CfgEventHandlers.hpp"