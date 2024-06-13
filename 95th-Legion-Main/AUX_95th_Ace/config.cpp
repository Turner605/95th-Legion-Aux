class CfgPatches {
	class AUX_95th_Ace {
        author="95th Aux Team";
        name="95th Legion ACE";
		requiredAddons[]= {
			"ace_main",
            "cba_settings"
		};
		units[] = {};
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
	#include "FortifyPresets\Small.hpp"
	#include "FortifyPresets\Testing.hpp"
};

class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class AUX_95th_SOS_Beacon {
				displayName = "SOS";
				icon = "\AUX_95th_Ace\Data\SOS.paa";
				condition = "(markerType (getPlayerUID _player) == '')";
				statement = "[_player] call AUX_95th_fnc_sosBeacon";
			};

            class AUX_95th_Remove_SOS_Beacon {
				displayName = "Cancel SOS";
				icon = "\AUX_95th_Ace\Data\SOS.paa";
				condition = "(markerType (getPlayerUID _player) != '')";
				statement = "deleteMarker (getPlayerUID _player)";
			};
		};
	};
};

class CfgFunctions { class AUX_95th { class Ace {
	class setupFortify {file = "\AUX_95th_Ace\Scripts\setupFortify.sqf";};
	class addDefaultClasses {file = "\AUX_95th_Ace\Scripts\addDefaultClasses.sqf";};
	class checkKit {file = "\AUX_95th_Ace\Scripts\KitChecker\checkKit.sqf";};
	class checkWeapons {file = "\AUX_95th_Ace\Scripts\KitChecker\checkWeapons.sqf";};
	class checkThrowables {file = "\AUX_95th_Ace\Scripts\KitChecker\checkThrowables.sqf";};
	class sosBeacon {file = "\AUX_95th_Ace\Scripts\sosBeacon.sqf";};
};};};

class Extended_PreInit_EventHandlers {
	class 95th_Ace_PreInit {
		init="call compile preprocessFileLineNumbers '\AUX_95th_Ace\Bootstrap\XEH_preInit.sqf'";
	};
};

class Extended_PostInit_EventHandlers {
	class 95th_Ace_PostInit {
		init="call compile preprocessFileLineNumbers '\AUX_95th_Ace\Bootstrap\XEH_postInit.sqf'";
	};
};