class CfgPatches
{
	class 95th_Legion_Helmets
	{
        author="95th Aux Team";
        name="95th Legion Helmets";
		requiredAddons[]=
		{
			"JLTS_characters_CloneArmor"
		};
		weapons[] = {};
		units[] = {};
	};
};

class CfgGlasses
{
	class None;
	class 95th_Phase1_RangeFinder: None
	{
		author="95th Aux";
		displayname="Phase 1 RangeFinder";
		model="\3AS\3AS_Characters\Clones\Headgear\3as_P1_RangeFinder.p3d";
		picture="\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
		identityTypes[]={};
		mass=4;
	};
	class 95th_Phase1_Lamps: None
	{
		author="95th Aux";
		displayname="Phase 1 Headlamps";
		model="\3AS\3AS_Characters\Clones\Headgear\3as_P1_lamps.p3d";
		picture="\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
		identityTypes[]={};
		mass=4;
	};
	class 95th_Phase1_MacroBinocular: 95th_Phase1_RangeFinder
	{
		author="95th Aux";
		displayname="Phase 1 Macrobinocular";
		model="\3AS\3AS_Characters\Clones\Headgear\3as_P1_MacroBino.p3d";
		picture="\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
		identityTypes[]={};
		mass=4;
	};
	class 95th_Phase1CC_Visor: 95th_Phase1_RangeFinder
	{
		author="95th Aux";
		displayname="Phase 1 Commanders visor";
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
	class 95th_Phase1_Visor: 95th_Phase1_RangeFinder
	{
		author="95th Aux";
		displayname="Phase 1 Sun visor";
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
};

class cfgWeapons 
{ 
    //************************************************************************************************************************************************************************************************
    //*****             Helmets                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    class ItemCore;
	class HeadgearItem;
	class HitpointsProtectionInfo;
    class 95th_Helmet: ItemCore 
    { 
		class HitpointsProtectionInfo
		{
			class ItemInfo
			{
				class Head;
			}; 
		}
    }; 
	
	class 3as_P1_Base;
	class 95th_Helmet_Phase1: 3as_P1_Base
	{
		author="95th Aux";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Clone Trooper Helmet";
		picture="3AS\3AS_Characters\Clones\Headgear\ui\phase1_ui_ca.paa";
		model="\3AS\3AS_Characters\Clones\Headgear\3AS_Clone_Standard_P1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_Characters\Clones\Headgear\Textures\Phase1\Phase1_Unmarked_CO.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel="\3AS\3AS_Characters\Clones\Headgear\3AS_Clone_Standard_P1.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
}; 