#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "AUX_95th_main",
            "ace_main",
            "cba_settings"
        };
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class ACEX_Fortify_Presets {
	#include "fortifyPresets\Small.hpp"
	#include "fortifyPresets\Testing.hpp"
};

class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class AUX_95th_SOS_Beacon {
				displayName = "SOS";
				icon = "\z\AUX_95th\addons\ace\data\SOS.paa";
				condition = "(markerType (getPlayerUID _player) == '')";
				statement = "[_player] call AUX_95th_fnc_sosBeacon";
			};

            class AUX_95th_Remove_SOS_Beacon {
				displayName = "Cancel SOS";
				icon = "\z\AUX_95th\addons\ace\data\SOS.paa";
				condition = "(markerType (getPlayerUID _player) != '')";
				statement = "deleteMarker (getPlayerUID _player)";
			};
		};
	};
};

class CfgFunctions {
    class AUX_95th {
        class Ace {
			file = "\z\AUX_95th\addons\ace\functions";
            class setupFortify {};
            class sosBeacon {};
            class checkVersion {};
        };
    };
};

#include "CfgEventHandlers.hpp"