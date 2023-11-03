#include "Macros\Nightvision.hpp"
#include "Macros\Facewear.hpp"

class CfgPatches {
	class 95th_P1_Facewear {
        author="95th Aux Team";
        name="95th Legion P1 Facewear";
		requiredAddons[]= {
			"JLTS_characters_CloneArmor",
			"3as_JLTS_Uniforms",
			"SEA_JLTS_ExtendedArsenal",
			"PhoenixCore"
		};
		units[] = {};
	};
};

class XtdGearModels {
	class CfgWeapons {
		//############################################################### Rangefinders ###############################################################
		class 95th_NVG_Rangefinder {
			label = "";
			author = "95th Aux Team";
			options[] = {"Colour", "Overlay"};
			class Colour {
				labels = "Colour";
				values[] = {"Gray", "White", "Brown", "Biege"};
				class Gray { label = "Gray"; description = "Gray Rangefinder"; };
				class White { label = "White"; description = "White Rangefinder"; };
				class Brown { label = "Brown"; description = "Brown Rangefinder"; };
				class Biege { label = "Biege"; description = "Biege Rangefinder"; };
			};

			class Overlay {
				labels = "Overlay";
				values[] = {"Visible", "Empty"};
				class Overlay { label = "Brown"; description = "Brown Rangefinder"; };
				class Empty { label = "Empty"; description = "Empty"; };
			};
		};

		class 95th_NVG_Visor {
			label = "";
			author = "95th Aux Team";
			options[] = {"Colour", "Overlay"};
			class Colour {
				labels = "Colour";
				values[] = {"Gray", "White", "Brown"};
				class Gray { label = "Gray"; description = "Gray Visor"; };
				class White { label = "White"; description = "White Visor"; };
				class Brown { label = "Brown"; description = "Brown Visor"; };
			};

			class Overlay {
				labels = "Overlay";
				values[] = {"Visible", "Empty"};
				class Overlay { label = "Brown"; description = "Brown Rangefinder"; };
				class Empty { label = "Empty"; description = "Empty"; };
			};
		};

		class 95th_NVG_Sergeant {
			label = "";
			author = "95th Aux Team";
			options[] = {"Colour", "Overlay"};
			class Colour {
				labels = "Colour";
				values[] = {"Gray", "White", "Brown"};
				class Gray { label = "Gray"; description = "Gray Visor"; };
				class White { label = "White"; description = "White Visor"; };
				class Brown { label = "Brown"; description = "Brown Visor"; };
			};

			class Overlay {
				labels = "Overlay";
				values[] = {"Visible", "Empty"};
				class Overlay { label = "Brown"; description = "Brown Rangefinder"; };
				class Empty { label = "Empty"; description = "Empty"; };
			};
		};

		class 95th_NVG_Lieutenant {
			label = "";
			author = "95th Aux Team";
			options[] = {"Colour", "Overlay"};
			class Colour {
				labels = "Colour";
				values[] = {"Gray", "White", "Brown"};
				class Gray { label = "Gray"; description = "Gray Visor"; };
				class White { label = "White"; description = "White Visor"; };
				class Brown { label = "Brown"; description = "Brown Visor"; };
			};

			class Overlay {
				labels = "Overlay";
				values[] = {"Visible", "Empty"};
				class Overlay { label = "Brown"; description = "Brown Rangefinder"; };
				class Empty { label = "Empty"; description = "Empty"; };
			};
		};
	};

	class CfgGlasses{
		class 95th_Facewear_Misc {
			label = "";
			author = "95th Aux Team";
			alwaysSelectable = 1;
			options[] = {"Type", "Interior"};
			class Type {
				labels = "Type";
				values[] = {"ARFAntenna", "Headlamps", "Headlamp"};
				class ARFAntenna { label = "ARF Antenna"; description = "ARF Antenna"; };
				class Headlamps { label = "Headlamps"; description = "Headlamps (Dual)"; };
				class Headlamp { label = "Headlamp"; description = "Headlamp (Single)"; };
			};

			class Interior {
				labels = "Interior";
				values[] = {"HUD", "Empty"};
				class HUD { label = "HUD"; description = "Internal HUD"; };
				class Empty { label = "Empty"; description = "No HUD"; };
			};
		};

		class 95th_Facewear_Scarfs {
			label = "";
			author = "95th Aux Team";
			alwaysSelectable = 1;
			options[] = {"Colour"};
			class Colour {
				labels = "Colour";
				values[] = {"Black", "White", "Brown"};
				class Black { label = "Black"; description = "Black Scarf"; };
				class White { label = "White"; description = "White Scarf"; };
				class Brown { label = "Brown"; description = "Brown Scarf"; };
			};
		};

		class 95th_Facewear_Ponchos {
			label = "";
			author = "95th Aux Team";
			alwaysSelectable = 1;
			options[] = {"Colour"};
			class Colour {
				labels = "Colour";
				values[] = {"Green"};
				class Green { label = "Green"; description = "Green Poncho"; };
			};
		};
	};
};

class CfgWeapons {
	class SEA_CloneNVG_TI;
	class SEA_P1_Rangefinder;
	class PhoenixCore_NVG_CloneNVG;
	class JLTS_PA_Core_P1_CloneCC;
	class JLTS_PA_Core_P1_CloneMC;
	class lsd_gar_medicalScanner_nvg;

	class 95th_P1_Nightvision_Invisible: SEA_CloneNVG_TI {
		displayName="[95th] Helmet Upgrade";
		author="95th Aux Team";
		model=""
		hiddenSelectionsTextures[]={""};
		visionMode[]={"Normal", "NVG", "TI"};
		thermalMode[]={0,1};
	};

	NEW_95th_NIGHTVISION_RANGEFINDER(Gray)};
	NEW_95th_NIGHTVISION_RANGEFINDER(White)};
	NEW_95th_NIGHTVISION_RANGEFINDER(Brown)};
	NEW_95th_NIGHTVISION_RANGEFINDER(Biege)};

	NEW_95th_NIGHTVISION_RANGEFINDER_OVERLAY(Gray)};
	NEW_95th_NIGHTVISION_RANGEFINDER_OVERLAY(White)};
	NEW_95th_NIGHTVISION_RANGEFINDER_OVERLAY(Brown)};
	NEW_95th_NIGHTVISION_RANGEFINDER_OVERLAY(Biege)};

	NEW_95th_NIGHTVISION_VISOR(Gray)};
	NEW_95th_NIGHTVISION_VISOR(White)};
	NEW_95th_NIGHTVISION_VISOR(Brown)};

	NEW_95th_NIGHTVISION_VISOR_OVERLAY(Gray)};
	NEW_95th_NIGHTVISION_VISOR_OVERLAY(White)};
	NEW_95th_NIGHTVISION_VISOR_OVERLAY(Brown)};

	NEW_95th_NIGHTVISION_SERGEANT(Gray)};
	NEW_95th_NIGHTVISION_SERGEANT(White)};
	NEW_95th_NIGHTVISION_SERGEANT(Brown)};
	NEW_95th_NIGHTVISION_SERGEANT(Biege)};

	NEW_95th_NIGHTVISION_SERGEANT_OVERLAY(Gray)};
	NEW_95th_NIGHTVISION_SERGEANT_OVERLAY(White)};
	NEW_95th_NIGHTVISION_SERGEANT_OVERLAY(Brown)};
	NEW_95th_NIGHTVISION_SERGEANT_OVERLAY(Biege)};

	NEW_95th_NIGHTVISION_LIEUTENANT(Gray)};
	NEW_95th_NIGHTVISION_LIEUTENANT(White)};
	NEW_95th_NIGHTVISION_LIEUTENANT(Brown)};
	NEW_95th_NIGHTVISION_LIEUTENANT(Biege)};

	NEW_95th_NIGHTVISION_LIEUTENANT_OVERLAY(Gray)};
	NEW_95th_NIGHTVISION_LIEUTENANT_OVERLAY(White)};
	NEW_95th_NIGHTVISION_LIEUTENANT_OVERLAY(Brown)};
	NEW_95th_NIGHTVISION_LIEUTENANT_OVERLAY(Biege)};



	
};

class CfgGlasses {
	class SWLB_CEE_Clone_Scarf;
	class PhoenixCore_Poncho;
	class ls_combatGoggles_base;

	class Facewear_HUD_Base_95th: ls_combatGoggles_base {
		displayName = "HUD Baseclass";
		author="95th Aux Team";
		model = "\A3\Weapons_f\DummyNVG";
		picture = "\SWLB_equipment\facewears\data\ui\icon_SWLB_clone_P1_HUD_ca.paa";
		hiddenSelections[] = {}; hiddenSelectionsTextures[] = {};
		ACE_Resistance = 1; ACE_Protection = 1; ACE_TintAmount = 0;
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		identityTypes[]={};
	};

	class Facewear_Empty_95th : Facewear_HUD_Base_95th {
		displayName = "P1 HUD Baseclass";
		ACE_Overlay = "";
		ACE_OverlayCracked = "";
	};

	class Facewear_HUD_P1_95th : Facewear_HUD_Base_95th {
		displayName = "P1 HUD Baseclass";
		ACE_Overlay = "\95th_P1_Facewear\Data\Facewear\P1_HUD.paa";
		ACE_OverlayCracked = "\95th_P1_Facewear\Data\Facewear\P1_HUD_Cracked.paa";
	};

	class Facewear_HUD_AB_95th : Facewear_HUD_Base_95th {
		displayName = "AB HUD Baseclass";
		ACE_Overlay = "\95th_P1_Facewear\Data\Facewear\AB_HUD.paa";
		ACE_OverlayCracked = "\95th_P1_Facewear\Data\Facewear\AB_HUD_Cracked.paa";
	};

	class Facewear_HUD_ARF_95th : Facewear_HUD_Base_95th {
		displayName = "ARF HUD Baseclass";
		ACE_Overlay = "\95th_P1_Facewear\Data\Facewear\ARF_HUD.paa";
		ACE_OverlayCracked = "\95th_P1_Facewear\Data\Facewear\ARF_HUD_Cracked.paa";
	};

	//############################################################### Misc Facewear ###############################################################
	NEW_95th_FACEWEAR_HUD(ARFAntenna,Facewear_HUD_ARF_95th,"\lsd_equipment_bluefor\facewear\gar\arfAntenna\lsd_gar_arfAntenna.p3d")};
	NEW_95th_FACEWEAR_HUD(Headlamps,Facewear_HUD_P1_95th,"\3AS\3AS_Characters\Clones\Headgear\3as_P1_lamps.p3d")};
	NEW_95th_FACEWEAR_HUD(Headlamp,Facewear_HUD_P1_95th,"\lsd_equipment_bluefor\facewear\gar\headlampSingle\lsd_gar_p1_lamp.p3d")};

	NEW_95th_FACEWEAR_EMPTY(ARFAntenna,Facewear_HUD_ARF_95th,"\lsd_equipment_bluefor\facewear\gar\arfAntenna\lsd_gar_arfAntenna.p3d")};
	NEW_95th_FACEWEAR_EMPTY(Headlamps,Facewear_HUD_P1_95th,"\3AS\3AS_Characters\Clones\Headgear\3as_P1_lamps.p3d")};
	NEW_95th_FACEWEAR_EMPTY(Headlamp,Facewear_HUD_P1_95th,"\lsd_equipment_bluefor\facewear\gar\headlampSingle\lsd_gar_p1_lamp.p3d")};


	//############################################################### Scarf Facewear ###############################################################
	NEW_95th_SCARF_EMPTY(Black)};
	NEW_95th_SCARF_EMPTY(White)};
	NEW_95th_SCARF_EMPTY(Brown)};


	//############################################################### Poncho Facewear ###############################################################
	NEW_95th_PONCHO_EMPTY(Green)};
};