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

class CfgGlasses
{
	class None;
	class 95th_Phase1_RangeFinder: None
	{
		author="95th Aux";
		displayname="[95th] Phase 1 Trooper RangeFinder";
		model="\3AS\3AS_Characters\Clones\Headgear\3as_P1_RangeFinder.p3d";
		picture="\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
		identityTypes[]={};
		mass=4;
	};
	class 95th_Phase1_Lamps: None
	{
		author="95th Aux";
		displayname="[95th] Phase 1 Trooper Headlamps";
		model="\3AS\3AS_Characters\Clones\Headgear\3as_P1_lamps.p3d";
		picture="\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
		identityTypes[]={};
		mass=4;
	};
	class 95th_Phase1_MacroBinocular: 95th_Phase1_RangeFinder
	{
		author="95th Aux";
		displayname="[95th] Phase 1 Trooper Macrobinocular";
		model="\3AS\3AS_Characters\Clones\Headgear\3as_P1_MacroBino.p3d";
		picture="\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
		identityTypes[]={};
		mass=4;
	};
	class 95th_Phase1_Sergeant_Visor: 95th_Phase1_RangeFinder
	{
		author="95th Aux";
		displayname="[95th] Phase 1 Sergeant Visor";
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
		model="\3AS\3AS_Characters\Clones\Headgear\3as_P1_visor.p3d";
		picture="\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
		identityTypes[]={};
		mass=4;
	};
	class 95th_Phase1_Captain_Visor: 95th_Phase1_RangeFinder
	{
		author="95th Aux";
		displayname="Phase 1 Captain visor";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_Characters\Clones\Headgear\Attachments\data\visor_co.paa",
			"3AS\3AS_Characters\Clones\Headgear\Attachments\data\accesories_co.paa",
			"3AS\3AS_Characters\Clones\Headgear\Attachments\data\accesories_co.paa"
		};
		model="\3AS\3AS_Characters\Clones\Headgear\3as_P1_visor.p3d";
		picture="\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
		identityTypes[]={};
		mass=4;
	};
	class 95th_Phase1_Lieutenant_Visor: 95th_Phase1_RangeFinder
	{
		author="95th Aux";
		displayname="[95th] Phase 1 Lieutenant visor";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_Characters\Clones\Headgear\Attachments\data\visor_co.paa",
			"3AS\3AS_Characters\Clones\Headgear\Attachments\data\accesories_co.paa",
			"3AS\3AS_Characters\Clones\Headgear\Attachments\data\accesories_co.paa"
		};
		model="\3AS\3AS_Characters\Clones\Headgear\3as_P1_visor.p3d";
		picture="\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
		identityTypes[]={};
		mass=4;
	};
};