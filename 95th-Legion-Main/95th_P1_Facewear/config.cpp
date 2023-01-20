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
};