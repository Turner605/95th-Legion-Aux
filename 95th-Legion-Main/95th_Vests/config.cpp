#include "Macros\Basic Vests.hpp"

class CfgPatches {
	class 95th_Legion_Vests {
        author="95th Aux Team";
        name="95th Legion Vests";
		requiredAddons[]= {
			"JLTS_characters_CloneArmor"
		};
		units[] = {};
	};
};

class XtdGearModels {
	class CfgWeapons {
		class 95th_Basic_Vests {
			label = "";
			author = "95th Aux Team";
			options[] = {"Type"};
			class Type {
				alwaysSelectable = 1;
				labels = "Type";
				values[] = {"Rifleman" ,"Pilot", "Grenadier", "Jet", "Medic", "AT", "Heavy"};
				class Rifleman { label = "Rifleman"; description = "Rifleman Vest"; };
				class Pilot { label = "Pilot"; description = "Pilot Vest"; };
				class Grenadier { label = "Grenadier"; description = "Grenadier Vest"; };
				class Jet { label = "Jet"; description = "Jet Trooper Vest"; };

				class AT { label = "Jet"; description = "AT Trooper Vest"; };
				class Heavy { label = "Heavy"; description = "Heavy Trooper Vest"; };
			};
		};

		class 95th_Commando_Vests {
			label = "";
			author = "95th Aux Team";
			options[] = {"Type"};
			class Type {
				alwaysSelectable = 1;
				labels = "Type";
				values[] = {"Medic","Demo"};
				class Medic { label = "Medic"; description = "Medic Vest"; };
				class Demo { label = "Demo"; description = "Demo Vest"; };
			};
		};
	};
};

class cfgWeapons { 
	class JLTS_CloneVestHolster;
	class JLTS_CloneVestAirborne;
	// class JLTS_CloneVestReconOfficer;
	// class JLTS_CloneVestOfficer;
	// class JLTS_CloneVestOfficer2;
	// class JLTS_CloneVestSuspender;
	// class JLTS_CloneVestRecon;

	class VestItem;
	class ItemInfo;

	NEW_95TH_BASIC_VEST_ARMOUR_OVERRIDEN(Rifleman,JLTS_CloneVestHolster)};
	NEW_95TH_BASIC_VEST_ARMOUR_OVERRIDEN(Pilot,JLTS_CloneVestHolster)};
	NEW_95TH_BASIC_VEST_ARMOUR_OVERRIDEN(Grenadier,JLTS_CloneVestHolster)};
	NEW_95TH_BASIC_VEST_ARMOUR_OVERRIDEN(Jet,JLTS_CloneVestHolster)};

	NEW_95TH_BASIC_VEST_NO_BOTTOM(Medic,JLTS_CloneVestAirborne)};
	NEW_95TH_BASIC_VEST_NO_BOTTOM(AT,JLTS_CloneVestAirborne)};
	NEW_95TH_BASIC_VEST_NO_BOTTOM(Heavy,JLTS_CloneVestAirborne)};

	// Make sure the units are backwards compat if possible
	// Split into Officer(?) vests?

	// JLTS_CloneVestHolster:
	// Rifleman
	// Pilot
	// Grenadier?
	// Jet


	//JLTS_CloneVestAirborne:
	// Medic
	// AT/AA
	// Heavy


	// JLTS_CloneVestReconOfficer:
	// NCO


	// JLTS_CloneVestOfficer:
	// Platoon


	// JLTS_CloneVestOfficer2:
	// Zeus


	// JLTS_CloneVestSuspender:
	// Engineer
	// Crewman


	// JLTS_CloneVestRecon:
	// Marksman
	// Riot
	// Flame
	// Stealth
	// Tech


    //************************************************************************************************************************************************************************************************
    //*****             OLD Vests                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
	class 95th_Vest_Trooper: JLTS_CloneVestHolster
	{
		author="95th Aux";
		displayName="[95th] Clone Trooper Vest";
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
		displayName="[95th] Clone Veteran Vest";
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
		displayName="[95th] Clone NCO Vest";
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
		displayName="[95th] Clone Platoon Vest";
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
		displayName="[95th] Clone Command Vest";
		hiddenSelectionsTextures[]=
		{
			"\95th_Vests\Data\95th_Vest_Lieutenant.paa"
		};
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

	class JLTS_CloneVestARC;
	class 95th_Vest_ARC: JLTS_CloneVestARC
	{
		author="95th Aux";
		scope=2;
		displayName="[95th] Clone ARC Trooper Vest";
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

	class JLTS_CloneVestOfficer2;
	class 95th_Vest_Zeus: JLTS_CloneVestOfficer2
	{
		author="95th Aux";
		scope=2;
		displayName="[95th] Clone Zeus Vest";
		hiddenSelectionsTextures[]={"\95th_Vests\Data\95th_Vest_Zeus.paa"};
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer2.p3d";
			containerClass="Supply100";
			hiddenSelections[]={"camo1"};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest{HitpointName="HitChest";armor=9;PassThrough=0.30000001;};
				class Legs{hitpointName="HitLegs";armor=9;passThrough=0.30000001;};
				class Arms{hitpointName="HitArms";armor=4;passThrough=0.30000001;};
			};
		};
	};

	class 3AS_V_Katarn_Vest_Demo;
	class 95th_Katarn_Vest_Demo: 3AS_V_Katarn_Vest_Demo {
		displayName = "[95th] Commando Vest";
		hiddenSelectionsTextures[]={"\95th_Vests\Data\Commandos\Vest_Demo.paa"};
		class XtdGearInfo {
			model = "95th_Commando_Vests";
			Type = "Demo";
		};
	};

	class 3AS_V_Katarn_Vest_Tech;
	class 95th_Katarn_Vest_Tech: 3AS_V_Katarn_Vest_Tech {
		displayName = "[95th] Commando Vest";
		hiddenSelectionsTextures[]={"\95th_Vests\Data\Commandos\Vest_Medic.paa"};
		class XtdGearInfo {
			model = "95th_Commando_Vests";
			Type = "Medic";
		};
	};
}; 