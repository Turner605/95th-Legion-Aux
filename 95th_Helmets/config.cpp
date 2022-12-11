class CfgPatches
{
	class 95th_Legion_Helmets
	{
        author="95th Aux Team";
        name="95th Legion Helmets";
		requiredAddons[]=
		{
			"JLTS_characters_CloneArmor"
			//3as dependancy
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
		displayname="Phase 1 Trooper RangeFinder";
		model="\3AS\3AS_Characters\Clones\Headgear\3as_P1_RangeFinder.p3d";
		picture="\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
		identityTypes[]={};
		mass=4;
	};
	class 95th_Phase1_Lamps: None
	{
		author="95th Aux";
		displayname="Phase 1 Trooper Headlamps";
		model="\3AS\3AS_Characters\Clones\Headgear\3as_P1_lamps.p3d";
		picture="\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
		identityTypes[]={};
		mass=4;
	};
	class 95th_Phase1_MacroBinocular: 95th_Phase1_RangeFinder
	{
		author="95th Aux";
		displayname="Phase 1 Trooper Macrobinocular";
		model="\3AS\3AS_Characters\Clones\Headgear\3as_P1_MacroBino.p3d";
		picture="\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
		identityTypes[]={};
		mass=4;
	};
	class 95th_Phase1_Sergeant_Visor: 95th_Phase1_RangeFinder
	{
		author="95th Aux";
		displayname="Phase 1 Sergeant Visor";
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
		displayname="Phase 1 Lieutenant visor";
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

class cfgWeapons 
{ 
    //************************************************************************************************************************************************************************************************
    //*****             Base Helmets                *********************************************************************************************************************************************************
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
			"\95th_Helmets\Data\95th_Helmet_Trooper.paa"
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

	class 3as_P1_Pilot_helmet;
	class 95th_Helmet_Phase1_Pilot: 3as_P1_Pilot_helmet
	{
		author="95th Aux";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Clone Pilot Helmet";
		picture="3AS\3AS_Characters\Clones\Headgear\ui\p2pilot_ui_ca.paa";
		model="\3AS\3AS_Characters\Clones\Headgear\3AS_P1_Pilot.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\95th_Helmets\Data\95th_Helmet_Pilot.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel="\3AS\3AS_Characters\Clones\Headgear\3AS_P1_Pilot.p3d";
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

	class 95th_Helmet_Phase1_Test: 95th_Helmet_Phase1
	{
		author="95th Aux";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Clone Test Helmet";
		picture="3AS\3AS_Characters\Clones\Headgear\ui\phase1_ui_ca.paa";
		model="\3AS\3AS_Characters\Clones\Headgear\3AS_Clone_Standard_P1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\95th_Helmets\Data\95th_Helmet_Trooper.paa"
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

	//************************************************************************************************************************************************************************************************
    //*****             Custom Helmets                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    
	class 95th_Helmet_Custom_Turner: 95th_Helmet_Phase1
	{
		author="95th Aux";
		displayName="Custom Helmet - Turner";
		picture="3AS\3AS_Characters\Clones\Headgear\ui\phase1_ui_ca.paa";
		model="\3AS\3AS_Characters\Clones\Headgear\3AS_Clone_Standard_P1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\95th_Helmets\Data\95th_Helmet_Trooper.paa"
		};
	};

}; 