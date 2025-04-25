#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "AUX_95th_main",
            "A3_Data_F",
			"A3_UI_F",
			"A3_Ui_F_Oldman",
			"A3_UI_F_AOW",
			"3AS_Main",
			"3AS_Main_Intro"
        };
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class RscPicture;
class RscText;
class RscControlsGroupNoHScrollbars;
class RscActivepicture;
class RscControlsGroupNoScrollbars;
class controls;
class RscStandardDisplay;

class CfgMainMenuSpotlight {
	class Bootcamp {condition = "false";};
	class EastWind {condition = "false";};
	class ApexProtocol {condition = "false";};
	class Orange_Campaign {condition = "false";};
	class Orange_CampaignGerman {condition = "false";};
	class Orange_Showcase_IDAP {condition = "false";};
	class Orange_Showcase_LoW {condition = "false";};
	class Tacops_Campaign_01 {condition = "false";};
	class Tacops_Campaign_02 {condition = "false";};
	class Tacops_Campaign_03 {condition = "false";};
	class Tanks_Campaign_01 {condition = "false";};
	class Contact_Campaign {condition = "false";};
	class OldMan {condition = "false";};
	class SP_FD14 {condition = "false";};
	class AoW_Showcase_AoW {condition = "false";};
	class AoW_Showcase_Future {condition = "false";};
	class AoW_Showcase_AoW_Future {condition = "false";};
};

class RscDisplayLoading {
	class Variants {

		class LoadingOne {
			idd = 250;
			class controls { class LoadingPic: RscPicture {
				idc = 1; x = "SafeZoneX"; y = "SafeZoneY"; h = "SafeZoneH"; w = "SafeZoneW";
				text = "\z\AUX_95th\addons\menu\data\backgroundOne.paa"; 
			}; };
		};

		class Loading_West1: LoadingOne {
			class controls { class LoadingPic {
				idc = 1; x = "SafeZoneX"; y = "SafeZoneY"; h = "SafeZoneH"; w = "SafeZoneW";
				text = "\z\AUX_95th\addons\menu\data\backgroundTwo.paa"; 
			}; };
		};

		class Loading_West2: LoadingOne {
			class controls { class LoadingPic {
				idc = 1; x = "SafeZoneX"; y = "SafeZoneY"; h = "SafeZoneH"; w = "SafeZoneW";
				text = "\z\AUX_95th\addons\menu\data\backgroundThree.paa"; 
			}; };
		};

		class Loading_East1: LoadingOne {
			class controls { class LoadingPic {
				idc = 1; x = "SafeZoneX"; y = "SafeZoneY"; h = "SafeZoneH"; w = "SafeZoneW";
				text = "\z\AUX_95th\addons\menu\data\backgroundFour.paa"; 
			}; };
		};

		class Loading_East2: LoadingOne {
			class controls { class LoadingPic {
				idc = 1; x = "SafeZoneX"; y = "SafeZoneY"; h = "SafeZoneH"; w = "SafeZoneW";
				text = "\z\AUX_95th\addons\menu\data\backgroundFive.paa"; 
			}; };
		};
	};
};

class RscDisplayMain: RscStandardDisplay {
	enableDisplay = 1;
	text = "\z\AUX_95th\addons\menu\data\backgroundSix.paa"; 

	// Main Menu background
	class controlsBackground {
		class LoadingPic: RscPicture {
			idc = 1; x = "SafeZoneX"; y = "SafeZoneY"; h = "SafeZoneH"; w = "SafeZoneW";
			text = "\z\AUX_95th\addons\menu\data\backgroundMenu.paa"; 
		};
	};

	class controls {

		// 95th Server Join Button
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
            };
        };

		// 95th Logo
        class logo:RscActivepicture {text="\z\AUX_95th\addons\menu\data\MainScreenBanner.paa"; url=""; tooltip="95th Legion"; onButtonClick=""; onload="";};
        class logoApex:logo {show=0; onload=""; text="";};
        class infomods:RscControlsGroupNoHScrollbars {show=0;};
        class infoDLCsOwned:infomods {show=0;};
        class infoDLCs:infoDLCsOwned {show=0;};
        class infoNews:infomods {show=0;};
        class infoVersion:infoNews {show=0;};

		// Spotlight removal
		delete Spotlight1;
		delete Spotlight2;
		delete Spotlight3;
		delete BackgroundSpotlight;
		delete BackgroundSpotlightRight;
		delete BackgroundSpotlightLeft;
	};
};

class RscMainMenuSpotlight: RscControlsGroupNoScrollbars {show = 0; onLoad = "";};

class RscDisplayLoadCustom: RscStandardDisplay {
	class controlsBackground {
		class LoadingPic: RscPicture {
			idc = 1; x = "SafeZoneX"; y = "SafeZoneY"; h = "SafeZoneH"; w = "SafeZoneW";
			text = "\z\AUX_95th\addons\menu\data\backgroundOne.paa"; 
		};
	};
};

class RscDisplayLoadMission: RscStandardDisplay {
	class controlsBackground {
		class LoadingPic: RscPicture {
			idc = 1; x = "SafeZoneX"; y = "SafeZoneY"; h = "SafeZoneH"; w = "SafeZoneW";
			text = "\z\AUX_95th\addons\menu\data\backgroundTwo.paa"; 
		};
	};
};

class RscDisplayStart: RscStandardDisplay {
	class controls {
		class LoadingPic: RscPicture {
			idc = 1; x = "SafeZoneX"; y = "SafeZoneY"; h = "SafeZoneH"; w = "SafeZoneW";
			text = "\z\AUX_95th\addons\menu\data\backgroundThree.paa"; 
		};
	};
};

class RscDisplayMPPlayers;
class RscDisplayClientWait: RscDisplayMPPlayers {
	class LoadingPic: RscPicture {
		idc = 1; x = "SafeZoneX"; y = "SafeZoneY"; h = "SafeZoneH"; w = "SafeZoneW";
		text = "\z\AUX_95th\addons\menu\data\backgroundFour.paa"; 
	};
};

class RscDisplayClient: RscStandardDisplay {
	class controlsBackground {
		class LoadingPic: RscPicture {
			idc = 1; x = "SafeZoneX"; y = "SafeZoneY"; h = "SafeZoneH"; w = "SafeZoneW";
			text = "\z\AUX_95th\addons\menu\data\backgroundFive.paa"; 
		};
	};
};

#include "CfgEventHandlers.hpp"