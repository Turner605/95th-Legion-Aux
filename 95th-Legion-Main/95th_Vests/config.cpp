#include "Macros\Basic Vests.hpp"
#include "Macros\Officer Vests.hpp"
#include "Macros\Special Vests.hpp"

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
				values[] = {"Rifleman" ,"Pilot", "Grenadier", "Jet", "Medic", "AT", "Heavy", "Marksman", "Riot", "Flame", "Stealth", "Tech", "Engineer", "Crewman"};
				class Rifleman { label = "Rifleman"; description = "Rifleman Vest"; };
				class Pilot { label = "Pilot"; description = "Pilot Vest"; };
				class Grenadier { label = "Grenadier"; description = "Grenadier Vest"; };
				class Jet { label = "Jet"; description = "Jet Trooper Vest"; };

				class AT { label = "AT"; description = "AT Trooper Vest"; };
				class Heavy { label = "Heavy"; description = "Heavy Trooper Vest"; };

				class Marksman { label = "Marksman"; description = "Marksman Trooper Vest"; };
				class Riot { label = "Riot"; description = "Riot Trooper Vest"; };
				class Flame { label = "Flame"; description = "Flame Trooper Vest"; };
				class Stealth { label = "Stealth"; description = "Stealth Trooper Vest"; };
				class Tech { label = "Tech"; description = "Tech Trooper Vest"; };

				class Engineer { label = "Engineer"; description = "Engineer Trooper Vest"; };
				class Crewman { label = "Crewman"; description = "Crewman Vest"; };
			};
		};

		class 95th_Officer_Vests {
			label = "";
			author = "95th Aux Team";
			options[] = {"Type"};
			class Type {
				alwaysSelectable = 1;
				labels = "Type";
				values[] = {"Sergeant", "Lieutenant", "Zeus", "Turner"};
				class Sergeant { label = "Sergeant"; description = "Sergeant Vest"; };
				class Lieutenant { label = "Lieutenant"; description = "Lieutenant Vest"; };
				class Zeus { label = "Zeus"; description = "Zeus Vest"; };
				class Turner { label = "Turner"; description = "Turner's Vest"; };
			};
		};

		class 95th_ARC_Vests {
			label = "";
			author = "95th Aux Team";
			options[] = {"Type"};
			class Type {
				alwaysSelectable = 1;
				labels = "Type";
				values[] = {"Trooper"};
				class Trooper { label = "Trooper"; description = "ARC Trooper Vest"; };
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
	class JLTS_CloneVestRecon;
	class JLTS_CloneVestSuspender;
	class JLTS_CloneVestReconOfficer;
	class JLTS_CloneVestOfficer;
	class JLTS_CloneVestOfficer2;
	class JLTS_CloneVestARC;

	class VestItem;
	class ItemInfo;

	NEW_95TH_VEST_HOLSTER_TYPE(Rifleman)};
	NEW_95TH_VEST_HOLSTER_TYPE(Pilot)};
	NEW_95TH_VEST_HOLSTER_TYPE(Grenadier)};
	NEW_95TH_VEST_HOLSTER_TYPE(Jet)};

	NEW_95TH_VEST_AIRBORNE_TYPE(Medic)};
	NEW_95TH_VEST_AIRBORNE_TYPE(AT)};
	NEW_95TH_VEST_AIRBORNE_TYPE(Heavy)};

	NEW_95TH_VEST_RECON_TYPE(Marksman)};
	NEW_95TH_VEST_RECON_TYPE(Riot)};
	NEW_95TH_VEST_RECON_TYPE(Flame)};
	NEW_95TH_VEST_RECON_TYPE(Stealth)};
	NEW_95TH_VEST_RECON_TYPE(Tech)};

	NEW_95TH_VEST_SUSPENDER_TYPE(Engineer)};
	NEW_95TH_VEST_SUSPENDER_TYPE(Crewman)};

	NEW_95TH_VEST_RECON_NCO_TYPE(Sergeant)};
	NEW_95TH_VEST_OFFICER_LIEUTENANT_TYPE(Lieutenant)};
	NEW_95TH_VEST_OFFICER_ZEUS_TYPE(Zeus)};
	NEW_95TH_VEST_OFFICER_ZEUS_TYPE(Turner)};

	NEW_95TH_VEST_ARC_TYPE(Trooper)};

	// SWAP VESTS OVER IN SPAWN PRESET BEFORE YOU REMOVE THE OLD ONES YOU IDIOT
	// SWAP VESTS OVER IN THE UNITS BEFORE YOU REMOVE THE OLD ONES YOU IDIOT
	//TODO:

	// ARC

    //************************************************************************************************************************************************************************************************
    //*****             OLD Vests                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
	class 95th_Vest_Trooper: JLTS_CloneVestHolster
	{
		author="95th Aux";
		displayName="OLD [95th] Clone Trooper Vest";
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
		displayName="OLD [95th] Clone Veteran Vest";
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

	class 95th_Vest_Sergeant: JLTS_CloneVestReconOfficer
	{
		author="95th Aux";
		displayName="OLD [95th] Clone NCO Vest";
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

	class 95th_Vest_Captain: JLTS_CloneVestOfficer
	{
		author="95th Aux";
		displayName="OLD [95th] Clone Platoon Vest";
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
		displayName="OLD [95th] Clone Command Vest";
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

	class 95th_Vest_ARC: JLTS_CloneVestARC
	{
		author="95th Aux";
		scope=2;
		displayName="OLD [95th] Clone ARC Trooper Vest";
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

	class 95th_Vest_Zeus: JLTS_CloneVestOfficer2
	{
		author="95th Aux";
		scope=2;
		displayName="OLD [95th] Clone Zeus Vest";
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