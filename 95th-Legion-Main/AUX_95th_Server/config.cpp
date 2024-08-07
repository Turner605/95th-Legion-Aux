class CfgPatches {
	class AUX_95th_Server {
        author="95th Aux Team";
        name="95th Legion Server";
		requiredAddons[]= {
			"A3_Data_F",
			"A3_UI_F",
			"A3_Ui_F_Oldman",
			"A3_UI_F_AOW",
			"3AS_Main",
			"3AS_Main_Intro"
		};
		units[] = {};
	};
};

class RscPicture;
class RscStructuredText;
class RscControlsGroup;
class RscActiveText;
class RscActivepicture;
class RscText;
class RscProgress;
class RscVignette;
class RscControlsGroupNoScrollbars;
class controls;
class CA_Vignette;
class RscControlsGroupNoHScrollbars;
class RscStandardDisplay;
class RscTitle;
class RscPictureKeepAspect;
class RscButtonMenu;
class RscButton;
class RscVideo: RscPicture {
	autoplay = 1;
	loops = 1;
};
class HScrollbar;
class ScrollBar;
class Attributes;
class ctrlStaticPicture;
class RscActivePictureKeepAspect;
class RscButtonMenuMain;

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
			class controls {
				class LoadingPic: RscPicture {
					idc = 1; x = "SafeZoneX"; y = "SafeZoneY"; h = "SafeZoneH"; w = "SafeZoneW";
					text = "\AUX_95th_Server\data\backgroundOne.paa"; 
				};
			};
		};

		class Loading_West1: LoadingOne {
			class controls {
				class LoadingPic {
					idc = 1; x = "SafeZoneX"; y = "SafeZoneY"; h = "SafeZoneH"; w = "SafeZoneW";
					text = "\AUX_95th_Server\data\backgroundTwo.paa"; 
				};
			};
		};

		class Loading_West2: LoadingOne {
			class controls {
				class LoadingPic {
					idc = 1; x = "SafeZoneX"; y = "SafeZoneY"; h = "SafeZoneH"; w = "SafeZoneW";
					text = "\AUX_95th_Server\data\backgroundThree.paa"; 
				};
			};
		};

		class Loading_East1: LoadingOne {
			class controls {
				class LoadingPic {
					idc = 1; x = "SafeZoneX"; y = "SafeZoneY"; h = "SafeZoneH"; w = "SafeZoneW";
					text = "\AUX_95th_Server\data\backgroundOne.paa"; 
				};
			};
		};

		class Loading_East2: LoadingOne {
			class controls {
				class LoadingPic {
					idc = 1; x = "SafeZoneX"; y = "SafeZoneY"; h = "SafeZoneH"; w = "SafeZoneW";
					text = "\AUX_95th_Server\data\backgroundTwo.paa"; 
				};
			};
		};
	};
};

class RscDisplayLoadCustom: RscStandardDisplay {
	class controlsBackground {
		class LoadingPic: RscPicture {
			idc = 1; x = "SafeZoneX"; y = "SafeZoneY"; h = "SafeZoneH"; w = "SafeZoneW";
			text = "\AUX_95th_Server\data\backgroundThree.paa"; 
		};
	};
};

class RscDisplayLoadMission: RscStandardDisplay {
	class controlsBackground {
		class LoadingPic: RscPicture {
			idc = 1; x = "SafeZoneX"; y = "SafeZoneY"; h = "SafeZoneH"; w = "SafeZoneW";
			text = "\AUX_95th_Server\data\backgroundTwo.paa"; 
		};
	};
};

class RscDisplayStart: RscStandardDisplay {
	class controls {
		class LoadingPic: RscPicture {
			idc = 1; x = "SafeZoneX"; y = "SafeZoneY"; h = "SafeZoneH"; w = "SafeZoneW";
			text = "\AUX_95th_Server\data\backgroundOne.paa"; 
		};
	};
};

class RscDisplayMPPlayers;
class RscDisplayClientWait: RscDisplayMPPlayers {
	class LoadingPic: RscPicture {
		idc = 1; x = "SafeZoneX"; y = "SafeZoneY"; h = "SafeZoneH"; w = "SafeZoneW";
		text = "\AUX_95th_Server\data\backgroundThree.paa"; 
	};
};

class RscDisplayClient: RscStandardDisplay {
	class controlsBackground {
		class LoadingPic: RscPicture {
			idc = 1; x = "SafeZoneX"; y = "SafeZoneY"; h = "SafeZoneH"; w = "SafeZoneW";
			text = "\AUX_95th_Server\data\backgroundTwo.paa"; 
		};
	};
};

class RscDisplayMain: RscStandardDisplay {
	enableDisplay = 1;
	text = "\AUX_95th_Server\data\backgroundOne.paa"; 
	class controlsBackground {
		class LoadingPic: RscPicture {
			idc = 1; x = "SafeZoneX"; y = "SafeZoneY"; h = "SafeZoneH"; w = "SafeZoneW";
			text = "\AUX_95th_Server\data\backgroundFour.paa"; 
		};
	};

	class controls {
        // class BackgroundSpotlight:Rscpicture {show=0; onload="";};
        // class BackgroundSpotlightLeft:BackgroundSpotlight {show=0; onload="";};
        // class BackgroundSpotlightRight:BackgroundSpotlightLeft {show=0; onload="";};
        // class Spotlight1:RscMainMenuSpotlight {idc=1021; show=0; onload="";};
        // class Spotlight2:Rsctext {idc=1020; show=0; onload="";};
        // class Spotlight3:RscMainMenuSpotlight {idc=1022; show=0; onload="";};
        // class SpotlightPrev:RscActivepictureKeepAspect {idc=1060; show=0; onload="";};
        // class SpotlightNext:SpotlightPrev {show=0; onload="";};
        class logo:RscActivepicture {text="\AUX_95th_Server\data\MainScreenBanner.paa"; url=""; tooltip="95th Legion"; onButtonClick=""; onload="";};
        class logoApex:logo {show=0; onload=""; text="";};
        class infomods:RscControlsgroupNoHScrollbars {show=0;};
        class infoDLCsOwned:infomods {show=1;};
        class infoDLCs:infoDLCsOwned {show=1;};
        class infoNews:infomods {show=1;};
        class infoVersion:infoNews {show=0;};

		delete Spotlight1;
		delete Spotlight3;
		delete BackgroundSpotlightRight;
		delete BackgroundSpotlightLeft;
		class SpotlightBase: RscControlsGroupNoScrollbars {
			show = 0;
			x = "0.5 - (1.5 *  10) *  (pixelW * pixelGridNoUIScale * 2) -  (2 * pixelW)";
			y = "0.5 - ( 10 / 2) *  (pixelH * pixelGridNoUIScale * 2)";
			w = "10 *  (pixelW * pixelGridNoUIScale * 2)";
			h = "10 *  (pixelH * pixelGridNoUIScale * 2)";
			class Controls {
				class GroupPicture: RscControlsGroupNoScrollbars {
					x = 0;
					y = 0;
					w = "10 *  (pixelW * pixelGridNoUIScale * 2)";
					h = "10 *  (pixelH * pixelGridNoUIScale * 2)";
					class Controls {
						class Picture: RscPictureKeepAspect {
							idc = 1023;
							text = "#(argb,8,8,3)color(1,0,1,1)";
							x = 0;
							y = 0;
							w = "10 *  (pixelW * pixelGridNoUIScale * 2)";
							h = "10 *  (pixelH * pixelGridNoUIScale * 2)";
						};
						class Video: RscVideo {
							idc = 1024;
							show = 0;
							x = 0;
							y = 0;
							w = "10 *  (pixelW * pixelGridNoUIScale * 2)";
							h = "10 *  (pixelH * pixelGridNoUIScale * 2)";
						};
					};
				};
				class GroupHover: RscControlsGroupNoScrollbars {
					idc = 1025;
					fade = 1;
					x = 0;
					y = 0;
					w = "10 *  (pixelW * pixelGridNoUIScale * 2)";
					h = "10 *  (pixelH * pixelGridNoUIScale * 2)";
					class Controls {
						class Overlay: RscPicture {
							text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\hover_ca.paa";
							colorText[] = {0,0,0,0.5};
							x = 0;
							y = 0;
							w = "10 *  (pixelW * pixelGridNoUIScale * 2)";
							h = "10 *  (pixelH * pixelGridNoUIScale * 2)";
						};
						class LineLeft: RscText {
							colorBackground[] = {1,1,1,1};
							x = 0;
							y = 0;
							w = "pixelW";
							h = "10 *  (pixelH * pixelGridNoUIScale * 2)";
						};
						class LineRight: LineLeft {
							x = "10 *  (pixelW * pixelGridNoUIScale * 2) - pixelW";
						};
						class LineTop: LineLeft {
							idc = 1027;
							x = 0;
							y = 0;
							w = "10 *  (pixelW * pixelGridNoUIScale * 2)";
							h = "(pixelH * pixelGrid * 2)";
							colorText[] = {0,0,0,1};
							shadow = 0;
							style = 0;
							sizeEx = "(pixelH * pixelGrid * 2)";
							font = "PuristaLight";
							onLoad = "(_this select 0) ctrlsettext toupper ctrltext (_this select 0);";
						};
						class LineBottom: LineTop {
							y = "10 *  (pixelH * pixelGridNoUIScale * 2) - pixelH";
							h = "pixelH";
						};
					};
				};

				class TextBackground: RscPicture {
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\spotlight_backgroundText_ca.paa";
					colorText[] = {0,0,0,0.5};
					x = 0;
					y = 0;
					w = "10 *  (pixelW * pixelGridNoUIScale * 2)";
					h = "10 *  (pixelH * pixelGridNoUIScale * 2)";
				};
				class Text: RscStructuredText {
					idc = 1028;
					size = "1.00 *  (pixelH * pixelGridNoUIScale * 2)";
					shadow = 2;
					x = 0;
					y = 0;
					w = "10 *  (pixelW * pixelGridNoUIScale * 2)";
					h = "10 *  (pixelH * pixelGridNoUIScale * 2)";
					class Attributes {
						align = "center";
						color = "#ffffff";
						font = "PuristaBold";
					};
				};
				class Button: RscButton {
					idc = 1026;
					colorBackground[] = {0,0,0,0};
					colorBackgroundActive[] = {0,0,0,0};
					colorFocused[] = {0,0,0,0};
					x = 0;
					y = 0;
					w = "10 *  (pixelW * pixelGridNoUIScale * 2)";
					h = "10 *  (pixelH * pixelGridNoUIScale * 2)";
				};
			};
		};

		class Spotlight2: SpotlightBase {
			idc = 1020;
			show = 1;
			x = "0.5 - (0.5 *  10) *  (pixelW * pixelGridNoUIScale * 2)";
			class Controls: Controls {
				class GroupPicture: GroupPicture {
					class Controls: Controls {
						class Picture: Picture{};
						class Video: Video{};
					};
				};
				class GroupHover: GroupHover {
					class Controls: Controls {
						class Overlay: Overlay{};
						class LineLeft: LineLeft{};
						class LineRight: LineRight{};
						class LineTop: LineTop{};
						class LineBottom: LineBottom{};
					};
				};
				class TextBackground: TextBackground{};
				class Text: Text{};
				class Button: Button{};
			};
		};
	};
};

class RscMainMenuSpotlight: RscControlsGroupNoScrollbars {show = 0; onLoad = "";};

class Extended_PreInit_EventHandlers {
	class 95th_Server_PreInit {
		init="call compile preprocessFileLineNumbers '\AUX_95th_Server\Init\XEH_preInit.sqf'";
	};
};

class Extended_PostInit_EventHandlers {
	class 95th_Server_PostInit {
		init="call compile preprocessFileLineNumbers '\AUX_95th_Server\Init\XEH_postInit.sqf'";
	};
};