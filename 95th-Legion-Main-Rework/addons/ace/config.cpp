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

class RscControlsGroupNoScrollbars;
class RscStandardDisplay;

class RscDisplayMain: RscStandardDisplay {
    class controls {
        class GroupSingleplayer: RscControlsGroupNoScrollbars {
            class Controls;
        };

        class GroupMultiplayer: GroupSingleplayer {
			h = "(6 * 	1.5) * 	(pixelH * pixelGrid * 2)";

            class Controls: Controls {
                class ServerBrowser;

                class JoinMainServer: ServerBrowser {
                    idc = -1;
                    text = "95th Main";
                    tooltip = "Connect to the 95th Main server";
                    y = "(3 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
                    onbuttonclick = "connectToServer ['135.125.189.7', 2302, '95th']";
                };

                // class JoinPrivateServer: ServerBrowser {
                //     idc = -1;
                //     text = "UAG: Private";
                //     tooltip = "Connect to the UAG Private (Ops) Server";
                //     y = "(4 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
                //     onbuttonclick = "connectToServer ['arma.uagpmc.com', 2312, 'lemon']";
                // };
            };
        };
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
            class addDefaultClasses {};
            class setupFortify {};
            class sosBeacon {};
        };

        class KitChecker {
			file = "\z\AUX_95th\addons\ace\functions\kitChecker";
            class checkKit {};
            class checkThrowables {};
            class checkWeapons {};
        };
    };
};

#include "CfgEventHandlers.hpp"