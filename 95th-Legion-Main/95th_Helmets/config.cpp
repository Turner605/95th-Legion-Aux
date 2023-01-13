#define NEW_95TH_P1_HELMET(name) class 95th_P1_Helmet_##name## : 95th_Helmet_P1_Base {\
    scope = 2;\
    scopeArsenal = 2;\
	displayName=[95th] Clone Helmet - ##name##;\
	hiddenSelectionsTextures[]=\
	{\
		\95th_Helmets\Data\P1\95th_P1_Helmet_##name##.paa,\
		\95th_Helmets\Data\P1\95th_P1_Helmet_##name##.paa\
	};\

#define NEW_95TH_ARC_HELMET(name) class 95th_P1_ARC_Helmet_##name## : 95th_Helmet_P1_ARC_Base {\
    scope = 2;\
    scopeArsenal = 2;\
	displayName=[95th] Clone ARC Helmet - ##name##;\
	hiddenSelectionsTextures[]=\
	{\
		\95th_Helmets\Data\ARC\95th_P1_ARC_Helmet_##name##.paa,\
	};\

#define NEW_95TH_PILOT_HELMET(name) class 95th_Helmet_P1_Pilot_##name## : 95th_Helmet_P1_Pilot_Base {\
    scope = 2;\
    scopeArsenal = 2;\
	displayName=[95th] Clone Pilot Helmet - ##name##;\
	hiddenSelectionsTextures[]=\
	{\
		\95th_Helmets\Data\Pilot\95th_P1_Pilot_Helmet_##name##.paa,\
	};\

#define NEW_95TH_ARF_HELMET(name) class 95th_Helmet_P1_ARF_##name## : 95th_Helmet_P1_ARF_Base {\
    scope = 2;\
    scopeArsenal = 2;\
	displayName=[95th] Clone ARF Helmet - ##name##;\
	hiddenSelectionsTextures[]=\
	{\
		\95th_Helmets\Data\ARF\95th_P1_ARF_Helmet_##name##.paa,\
	};\

#define NEW_95TH_AIRBORNE_HELMET(name) class 95th_Helmet_P1_Airborne_##name## : 95th_Helmet_P1_Airborne_Base {\
    scope = 2;\
    scopeArsenal = 2;\
	displayName=[95th] Clone Airborne Helmet - ##name##;\
	hiddenSelectionsTextures[]=\
	{\
		\95th_Helmets\Data\Airborne\95th_P1_Airborne_Helmet_##name##.paa,\
	};\

class CfgPatches
{
	class 95th_Legion_Helmets
	{
        author="95th Aux Team";
        name="95th Legion Helmets";
		requiredAddons[]=
		{
			"JLTS_characters_CloneArmor",
			"3as_JLTS_Uniforms",
			"GD_JLTS_AUX"
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

	//************************************************************************************************************************************************************************************************
    //*****             Base Helmets                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    

	class SEA_Helmet_P1_Base;
	class 95th_Helmet_P1_Base: SEA_Helmet_P1_Base
	{
		displayName="[95th] Clone Helmet Base";
		author="95th Aux";
		picture="3AS\3AS_Characters\Clones\Headgear\ui\phase1_ui_ca.paa";
		scope = 0;
    	scopeArsenal = 0;
		hiddenSelections[]={"Camo1","Visor"};
	};

	class JLTS_CloneHelmetARC;
	class 95th_Helmet_P1_ARC_Base: JLTS_CloneHelmetARC
	{
		displayName="[95th] Clone ARC Helmet Base";
		author="95th Aux";
		scope = 0;
    	scopeArsenal = 0;
	};

	class 3as_P1_Pilot_helmet;
	class 95th_Helmet_P1_Pilot_Base: 3as_P1_Pilot_helmet
	{
		displayName="[95th] Clone Pilot Helmet Base";
		author="95th Aux";
		picture="3AS\3AS_Characters\Clones\Headgear\ui\p2pilot_ui_ca.paa";
		scope = 0;
    	scopeArsenal = 0;
	};

	class 3AS_ARF_Helmet;
	class 95th_Helmet_P1_ARF_Base: 3AS_ARF_Helmet
	{
		displayName="[95th] ARF Helmet Base";
		author="95th Aux";
		picture="3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		scope = 0;
    	scopeArsenal = 0;
	};

	class JLTS_CloneHelmetAB;
	class 95th_Helmet_P1_Airborne_Base: JLTS_CloneHelmetAB
	{
		displayName="[95th] Airborne Helmet"; 
		scope = 0;
    	scopeArsenal = 0;
	};

	//************************************************************************************************************************************************************************************************
    //*****             Usable Helmets                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    
	NEW_95TH_P1_HELMET(Trooper)};
	NEW_95TH_P1_HELMET(Splash)};
	NEW_95TH_P1_HELMET(Turner)};
	NEW_95TH_P1_HELMET(Outcast)};

	NEW_95TH_ARC_HELMET(Trooper)};
	NEW_95TH_PILOT_HELMET(Trooper)};
	NEW_95TH_ARF_HELMET(Trooper)};
	NEW_95TH_AIRBORNE_HELMET(Trooper)};
}; 