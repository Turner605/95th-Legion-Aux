class CfgPatches {
	class 95th_P1_Facewear {
        author="95th Aux Team";
        name="95th Legion P1 Facewear";
		requiredAddons[]= {
			"JLTS_characters_CloneArmor",
			"3as_JLTS_Uniforms",
			"SEA_JLTS_ExtendedArsenal"
		};
		units[] = {};
	};
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
		author="95th Aux";
		displayname="[95th] Phase 1 Trooper RangeFinder";
		model="\3AS\3AS_Characters\Clones\Headgear\3as_P1_RangeFinder.p3d";
	};

	class 95th_P1_Facewear_Lamps: None {
		scope=2;
		author="95th Aux";
		displayname="[95th] Phase 1 Trooper Headlamps";
		model="\3AS\3AS_Characters\Clones\Headgear\3as_P1_lamps.p3d";
	};

	class 95th_P1_Visor_Sergeant: None {
		scope=2;
		author="95th Aux";
		displayname="[95th] Phase 1 Sergeant Visor";
		model="\3AS\3AS_Characters\Clones\Headgear\3as_P1_visor.p3d";
		hiddenSelections[]={"camo", "camo1", "camo2"};
		hiddenSelectionsTextures[]={"3AS\3AS_Characters\Clones\Headgear\Attachments\data\visor_co.paa", "", ""};
	};

	class 95th_P1_Visor_Command: 95th_P1_Visor_Sergeant {
		author="95th Aux Team";
		displayname="[95th] Phase 1 Command Visor";
		hiddenSelectionsTextures[]={
			"3AS\3AS_Characters\Clones\Headgear\Attachments\data\visor_co.paa",
			"3AS\3AS_Characters\Clones\Headgear\Attachments\data\accesories_co.paa",
			"3AS\3AS_Characters\Clones\Headgear\Attachments\data\accesories_co.paa"
		};
	};
};

class CfgWeapons {
	class SEA_CloneNVG_TI;
	class SEA_P1_Rangefinder;
	class NVGoggles;

	class 95th_P1_Nightvision_Macrobinoculars: SEA_CloneNVG_TI {
		author="95th Aux Team";
		displayName="[95th] Macrobinoculars";
		visionMode[]= {"Normal", "NVG", "TI"};
		thermalMode[]={0,1};
	};

	class 95th_P1_Nightvision_Rangefinder: SEA_P1_Rangefinder {
		author="95th Aux Team";
		displayName="[95th] Rangefinder";
		visionMode[]={"Normal", "NVG", "TI"};
		thermalMode[]={0,1};
	};

	class 95th_P1_Nightvision_Invisible: SEA_CloneNVG_TI {
		author="95th Aux Team";
		model=""
		hiddenSelectionsTextures[]={""};
		displayName="[95th] Helmet Upgrade";
		visionMode[]={"Normal", "NVG", "TI"};
		thermalMode[]={0,1};
	};
};