class CfgPatches
{
	class 95th_Legion_Vests
	{
        author="95th Aux Team";
        name="95th Legion Vests";
		requiredAddons[]=
		{
			"JLTS_characters_CloneArmor"
		};
		weapons[] = {};
		units[] = {};
	};
};

class cfgWeapons 
{ 
    //************************************************************************************************************************************************************************************************
    //*****             Vests                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    class VestItem; 
    class ItemCore;
    class 95th_Vest: ItemCore 
    { 
        class ItemInfo; 
    }; 

	class JLTS_CloneVestHolster;
     
	class 95th_Vest_Base: JLTS_CloneVestHolster
	{
		author="95th Aux";
		displayName="Clone Trooper Vest";
		picture="\MRC\JLTS\characters\CloneArmor2\data\ui\CloneVestHolster_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor2\CloneVestHolster.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor2\CloneVestHolster.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
			mass=80;
		};
	};
}; 