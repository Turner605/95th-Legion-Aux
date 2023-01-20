class CfgPatches
{
	class 95th_P1_Facewear
	{
        author="95th Aux Team";
        name="95th Legion P1 Facewear";
		requiredAddons[]=
		{
			"JLTS_characters_CloneArmor",
			"3as_JLTS_Uniforms",
			"SEA_JLTS_ExtendedArsenal"
		};
		units[] = {};
	};
};

class CfgWeapons
{
	class SEA_CloneNVG_TI;
	class SEA_P1_Rangefinder;
	class NVGoggles;

	class 95th_P1_Nightvision_Macrobinoculars: SEA_CloneNVG_TI
	{
		author="95th Aux Team";
		displayName="[95th] Macrobinoculars";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0,1};
	};

	class 95th_P1_Nightvision_Rangefinder: SEA_P1_Rangefinder
	{
		author="95th Aux Team";
		displayName="[95th] Rangefinder";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0,1};
	};

	class 95th_P1_Nightvision_Invisible: SEA_CloneNVG_TI
	{
		author="95th Aux Team";
		model=""
		hiddenSelectionsTextures[]={""};
		displayName="[95th] Helmet Upgrade";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0,1};
	};

	class 95th_P1_Nightvision_Sergeant: NVGoggles
	{
		author="95th Aux Team";
		displayname="[95th] Sergeant Visor";
		modelOptics="\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
		model="\3AS\3AS_Characters\Clones\Headgear\3as_P1_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_Characters\Clones\Headgear\Attachments\data\visor_co.paa",
			"",
			""
		};
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_ui_ca.paa";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0,1};
		class ItemInfo
		{
			type=616;
			uniformModel="\3AS\3AS_Characters\Clones\Headgear\3as_P1_visor.p3d";
			modelOff="\3AS\3AS_Characters\Clones\Headgear\3as_P1_visor.p3d";
			modelOptics="\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
			mass=20;
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
		};
	};

	class 95th_P1_Nightvision_Captain: 95th_P1_Nightvision_Sergeant
	{
		author="95th Aux Team";
		displayname="[95th] Captain Visor";
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_Characters\Clones\Headgear\Attachments\data\visor_co.paa",
			"3AS\3AS_Characters\Clones\Headgear\Attachments\data\accesories_co.paa",
			"3AS\3AS_Characters\Clones\Headgear\Attachments\data\accesories_co.paa"
		};
	};

	class 95th_P1_Nightvision_Lieutenant: 95th_P1_Nightvision_Sergeant
	{
		author="95th Aux Team";
		displayname="[95th] Lieutenant Visor";
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_Characters\Clones\Headgear\Attachments\data\visor_co.paa",
			"3AS\3AS_Characters\Clones\Headgear\Attachments\data\accesories_co.paa",
			"3AS\3AS_Characters\Clones\Headgear\Attachments\data\accesories_co.paa"
		};
	};


};