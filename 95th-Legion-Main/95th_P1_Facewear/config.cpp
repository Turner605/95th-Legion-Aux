#include "Macros\Nightvision.hpp"

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
			options[] = {"Colour"};
			class Colour {
				labels = "Colour";
				values[] = {"Gray", "White", "Brown", "Biege"};
				class Gray { label = "Gray"; description = "Gray Rangefinder"; };
				class White { label = "White"; description = "White Rangefinder"; };
				class Brown { label = "Brown"; description = "Brown Rangefinder"; };
				class Biege { label = "Biege"; description = "Biege Rangefinder"; };
			};
		};

		class 95th_NVG_Visor {
			label = "";
			author = "95th Aux Team";
			options[] = {"Colour"};
			class Colour {
				labels = "Colour";
				values[] = {"Gray", "White", "Brown", "Biege"};
				class Gray { label = "Gray"; description = "Gray Visor"; };
				class White { label = "White"; description = "White Visor"; };
				class Brown { label = "Brown"; description = "Brown Visor"; };
				class Biege { label = "Biege"; description = "Biege Visor"; };
			};
		};

		class 95th_NVG_Sergeant {
			label = "";
			author = "95th Aux Team";
			options[] = {"Colour"};
			class Colour {
				labels = "Colour";
				values[] = {"Gray", "White", "Brown", "Biege"};
				class Gray { label = "Gray"; description = "Gray Visor"; };
				class White { label = "White"; description = "White Visor"; };
				class Brown { label = "Brown"; description = "Brown Visor"; };
				class Biege { label = "Biege"; description = "Biege Visor"; };
			};
		};

		class 95th_NVG_Lieutenant {
			label = "";
			author = "95th Aux Team";
			options[] = {"Colour"};
			class Colour {
				labels = "Colour";
				values[] = {"Gray", "White", "Brown", "Biege"};
				class Gray { label = "Gray"; description = "Gray Visor"; };
				class White { label = "White"; description = "White Visor"; };
				class Brown { label = "Brown"; description = "Brown Visor"; };
				class Biege { label = "Biege"; description = "Biege Visor"; };
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

	NEW_95th_NIGHTVISION_VISOR(Gray)};
	NEW_95th_NIGHTVISION_VISOR(White)};
	NEW_95th_NIGHTVISION_VISOR(Brown)};
	NEW_95th_NIGHTVISION_VISOR(Biege)};

	NEW_95th_NIGHTVISION_SERGEANT(Gray)};
	NEW_95th_NIGHTVISION_SERGEANT(White)};
	NEW_95th_NIGHTVISION_SERGEANT(Brown)};
	NEW_95th_NIGHTVISION_SERGEANT(Biege)};

	NEW_95th_NIGHTVISION_LIEUTENANT(Gray)};
	NEW_95th_NIGHTVISION_LIEUTENANT(White)};
	NEW_95th_NIGHTVISION_LIEUTENANT(Brown)};
	NEW_95th_NIGHTVISION_LIEUTENANT(Biege)};
};

class CfgGlasses {
	class None;

	class 95th_Base_Facewear : None {
		scope=0;
		identityTypes[]={};
		mass=4;
		picture="\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
	};

	class 95th_P1_Facewear_RangeFinder: None {
		scope=2;
		identityTypes[]={};
		author="95th Aux";
		displayname="[95th] Phase 1 Trooper RangeFinder";
		model="\3AS\3AS_Characters\Clones\Headgear\3as_P1_RangeFinder.p3d";
		picture="\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
	};

	class 95th_P1_Facewear_Lamps: None {
		scope=2;
		identityTypes[]={};
		author="95th Aux";
		displayname="[95th] Phase 1 Trooper Headlamps";
		model="\3AS\3AS_Characters\Clones\Headgear\3as_P1_lamps.p3d";
		picture="\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
	};

	class 95th_P1_Visor_Sergeant: None {
		scope=2;
		identityTypes[]={};
		author="95th Aux";
		displayname="[95th] Phase 1 Sergeant Visor";
		model="\3AS\3AS_Characters\Clones\Headgear\3as_P1_visor.p3d";
		hiddenSelections[]={"camo", "camo1", "camo2"};
		hiddenSelectionsTextures[]={"3AS\3AS_Characters\Clones\Headgear\Attachments\data\visor_co.paa", "", ""};
		picture="\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
	};

	class 95th_P1_Visor_Command: 95th_P1_Visor_Sergeant {
		author="95th Aux Team";
		displayname="[95th] Phase 1 Command Visor";
		hiddenSelectionsTextures[]={
			"3AS\3AS_Characters\Clones\Headgear\Attachments\data\visor_co.paa",
			"3AS\3AS_Characters\Clones\Headgear\Attachments\data\accesories_co.paa",
			"3AS\3AS_Characters\Clones\Headgear\Attachments\data\accesories_co.paa"
		};
		picture="\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
	};
};