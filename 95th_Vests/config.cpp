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
		hiddenSelectionsTextures[]=
		{
		 	"MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa",
            "\95th_Vests\Data\95th_Vest_Sergeant_Upper.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
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
		hiddenSelectionsTextures[]=
		{
		 	"\95th_Vests\Data\95th_Vest_Captain.paa"
		};
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
			hiddenSelectionsTextures[]=
			{
				"\95th_Vests\Data\95th_Vest_Lieutenant.paa"
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

	class JLTS_CloneVestARC;
	class 95th_Vest_ARC: JLTS_CloneVestARC
	{
		author="95th Aux";
		scope=2;
		displayName="Clone ARC Trooper Vest";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestARC_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestARC.p3d"; 
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\95th_Vests\Data\95th_Vest_ARC.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestARC.p3d";
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
					armor=9;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=9;
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