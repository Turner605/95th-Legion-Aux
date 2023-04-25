class CfgPatches
{
	class 95th_P1_Facewear
	{
        author="95th Aux Team";
        name="95th Legion P1 Facewear";
		requiredAddons[]=
		{
			"JLTS_characters_CloneArmor",
			"3as_JLTS_Uniforms"
		};
		units[] = {};
	};
};

class CfgGlasses
{
	class None;
	class 95th_P1_Facewear_RangeFinder: None
	{
		author="95th Aux";
		displayname="[95th] Phase 1 Trooper RangeFinder";
		model="\3AS\3AS_Characters\Clones\Headgear\3as_P1_RangeFinder.p3d";
		picture="\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
		identityTypes[]={};
		mass=4;
	};
	class 95th_P1_Facewear_Lamps: None
	{
		author="95th Aux";
		displayname="[95th] Phase 1 Trooper Headlamps";
		model="\3AS\3AS_Characters\Clones\Headgear\3as_P1_lamps.p3d";
		picture="\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
		identityTypes[]={};
		mass=4;
	};
	class 95th_P1_Visor_Sergeant: None
	{
		author="95th Aux";
		displayname="[95th] Phase 1 Sergeant Visor";
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
		picture="\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
		identityTypes[]={};
		mass=4;
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
	class 95th_P1_Visor_Command: 95th_P1_Visor_Sergeant
	{
		author="95th Aux Team";
		displayname="[95th] Phase 1 Command Visor";
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_Characters\Clones\Headgear\Attachments\data\visor_co.paa",
			"3AS\3AS_Characters\Clones\Headgear\Attachments\data\accesories_co.paa",
			"3AS\3AS_Characters\Clones\Headgear\Attachments\data\accesories_co.paa"
		};
	};
};