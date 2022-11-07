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
	class 95th_Vest_Trooper: JLTS_CloneVestHolster
	{
		author="95th Aux";
		displayName="Clone Trooper Vest";
		// hiddenSelectionsTextures[]=
		// {
		// 	""
		// };
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor2\CloneVestHolster.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=6;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=6;
					passThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=4;
					passThrough=0.30000001;
				};
			};
		};
	};

	class JLTS_CloneVestKama;
	class 95th_Vest_Veteran: JLTS_CloneVestKama
	{
		author="95th Aux";
		displayName="Clone Veteran Vest";
		// hiddenSelectionsTextures[]=
		// {
		// 	""
		// };
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestKama.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=6;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=6;
					passThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=4;
					passThrough=0.30000001;
				};
			};
		};
	};

	class JLTS_CloneVestReconOfficer;
	class 95th_Vest_Sergeant: JLTS_CloneVestReconOfficer
	{
		author="95th Aux";
		displayName="Clone Sergeant Vest";
		// hiddenSelectionsTextures[]=
		// {
		// 	""
		// };
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=6;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=6;
					passThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=4;
					passThrough=0.30000001;
				};
			};
		};
	};

	class JLTS_CloneVestOfficer;
	class 95th_Vest_Captain: JLTS_CloneVestOfficer
	{
		author="95th Aux";
		displayName="Clone Captain Vest";
		// hiddenSelectionsTextures[]=
		// {
		// 	""
		// };
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=6;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=6;
					passThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=4;
					passThrough=0.30000001;
				};
			};
		};
	};

	class JLTS_CloneVestCommander;
	class 95th_Vest_Lieutenant: JLTS_CloneVestCommander
	{
		author="95th Aux";
		displayName="Clone Lieutenant Vest";
		// hiddenSelectionsTextures[]=
		// {
		// 	""
		// };
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=6;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=6;
					passThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=4;
					passThrough=0.30000001;
				};
			};
		};
	};
}; 