class CfgPatches
{
	class 95th_Legion_Helmets
	{
        author="95th Aux Team";
        name="95th Legion Helmets";
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
		displayName="[95th] Clone Trooper Helmet";
		picture="3AS\3AS_Characters\Clones\Headgear\ui\phase1_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\95th_Helmets\Data\95th_Helmet_Trooper.paa"
		};
	};

	class JLTS_CloneHelmetARC;
	class 95th_Helmet_ARC: JLTS_CloneHelmetARC
	{
		author="95th Aux";
		scope=2;
		weaponPoolAvailable=1;
		displayName="[95th] Clone ARC Helmet";
		hiddenSelectionsTextures[]=
		{
			"\95th_Helmets\Data\95th_Helmet_ARC.paa"
		};
	};

	class 3as_P1_Pilot_helmet;
	class 95th_Helmet_Phase1_Pilot: 3as_P1_Pilot_helmet
	{
		author="95th Aux";
		scope=2;
		weaponPoolAvailable=1;
		displayName="[95th] Clone Pilot Helmet";
		picture="3AS\3AS_Characters\Clones\Headgear\ui\p2pilot_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\95th_Helmets\Data\95th_Helmet_Pilot.paa"
		};
	};

	class 3AS_ARF_Helmet;
	class 95th_ARF_Trooper_Helmet: 3AS_ARF_Helmet
	{
		author="95th Aux";
		scope=2;
		displayName="[95th] ARF Helmet";
		picture="3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\95th_Helmets\Data\95th_Helmet_ARF.paa",
			"\95th_Helmets\Data\95th_Helmet_ARF.paa"
		};
	};

	class 95th_ARF_Trooper_Test: 3AS_ARF_Helmet
	{
		author="95th Aux";
		scope=2;
		displayName="[95th] ARF Helmet Test";
		picture="3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\95th_Helmets\Data\95th_Helmet_ARF_Test.paa",
			"\95th_Helmets\Data\95th_Helmet_ARF_Test.paa"
		};
	};

	class JLTS_CloneHelmetAB;
	class 95th_Airborne_Trooper_Helmet: JLTS_CloneHelmetAB
	{
		author="95th Aux";
		displayName="[95th] Airborne Helmet"; 
		hiddenSelectionsTextures[]={"\95th_Helmets\Data\95th_Helmet_Airborne.paa"};
	};

	//************************************************************************************************************************************************************************************************
    //*****             Custom Helmets                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    
	class 95th_Helmet_Phase1_Test: 95th_Helmet_Phase1
	{
		displayName="[95th] Clone Test Helmet";
		picture="3AS\3AS_Characters\Clones\Headgear\ui\phase1_ui_ca.paa";
		hiddenSelectionsTextures[]={"\95th_Helmets\Data\HelmetRefGuide.paa"};
	};

	class 95th_Helmet_Custom_Turner: 95th_Helmet_Phase1
	{
		displayName="[95th] Custom Helmet - Turner";
		hiddenSelectionsTextures[]={"\95th_Helmets\Data\Customs\95th_Helmet_Custom_Turner.paa"};
	};

	class 95th_Helmet_Custom_Splash: 95th_Helmet_Phase1
	{
		displayName="[95th] Custom Helmet - Splash";
		hiddenSelectionsTextures[]={"\95th_Helmets\Data\Customs\SplashTest.paa"};
	};
}; 