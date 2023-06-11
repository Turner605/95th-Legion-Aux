class CfgPatches 
{
    class 95th_P1_Base_Units
    {
        author="95th Aux Team";
		scope=0;
		scopecurator=0;
        name="95th Legion Base";
        requiredAddons[] = {
			"JLTS_characters_CloneArmor",
			"SEA_JLTS_ExtendedArsenal"
		};
		units[] = {
			"95th_Unit_Base",
			"95th_P1_Airborne_Unit_Base",
			"95th_P1_ARF_Unit_Base",
			"95th_P1_Pilot_Unit_Base",
			"95th_P1_ARC_Unit_Base",
			"95th_P1_Unit_Base"
		};
    };
}; 

class cfgFactionClasses 
{ 
    class 95th_Legion_Faction_Clones
    { 
        displayName = "95th Legion Clones"; 
		scope=2; 
		scopecurator=2;
        priority = 1;
        side = 1;
    };  

    class 95th_Legion_Faction_Misc 
    {
        displayName = "95th Legion Misc"; 
		scope=2;
		scopecurator=2;
        priority = 1;
        side = 1;
    };
};

class CfgEditorSubcategories
{
	class 95th_Base{displayName="Base (Do Not Use)";};
};

class CfgVehicles 
{
	class JLTS_Clone_P2_DC15A;
	class 95th_Unit_Base : JLTS_Clone_P2_DC15A
	{
		displayName="[95th] Unit Base";
		scope=0; 
		scopecurator=0;
		faction="95th_Legion_Faction_Clones";
		editorSubcategory="95th_Base";
		editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_DC15A.jpg"; //TODO: CHANGE TO P1
		icon="JLTS_iconManHeavy"; // TODO: CHANGE TO BASIC ICON
		linkedItems[]={"95th_P1_Helmet_Trooper","95th_Vest_Trooper","JLTS_Clone_radio","ItemGPS","ItemMap","ItemWatch","ItemCompass"};
		respawnLinkedItems[]={"95th_P1_Helmet_Trooper","95th_Vest_Trooper","JLTS_Clone_radio","ItemGPS","ItemMap","ItemWatch","ItemCompass"};
		weapons[]={"JLTS_DC15A_plastic", "JLTS_DC17SA", "Throw", "Put"};
		respawnWeapons[]={"JLTS_DC15A_plastic", "JLTS_DC17SA", "Throw", "Put"};
		magazines[]=
		{
			"JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag",
			"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag",
			"Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"
		};
		respawnMagazines[]=
		{
			"JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag",
			"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag",
			"Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"
		};
		uniformClass="95th_P1_Uniform_Base";
		model="\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		hiddenSelections[]={"camo1","camo2","camo3","insignia"};
		hiddenSelectionsTextures[]=
		{
			"\95th_Uniforms\Data\95th_Uniform_Trooper_Upper.paa",
			"\95th_Uniforms\Data\95th_Uniform_Trooper_Lower.paa",
			"\MRC\JLTS\characters\CloneArmor\data\Clone_armor_recon_co.paa"
		};
	};

	class 95th_Misc_Unit_Base : 95th_Unit_Base{
		faction="95th_Legion_Faction_Misc";
	};

	class 95th_P1_ARC_Unit_Base : 95th_Unit_Base
	{
		displayName="[95th] ARC";
		editorSubcategory="95th_ARC";
		editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_AB.jpg"; //TODO: CHANGE
		weapons[]={"JLTS_DC15S","JLTS_DC17SA","Throw","Put"}; // TODO: CHANGE GUN
		respawnWeapons[]={"JLTS_DC15S","JLTS_DC17SA","Throw","Put"};
		magazines[]=
		{
			"JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag",
			"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag",
			"Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"
		};
		respawnMagazines[]=
		{
			"JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag",
			"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag",
			"Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"
		};
	};



};

class cfgWeapons 
{ 
	class InventoryItem_Base_F;
    class ItemCore;
    class UniformItem;
    class Uniform_Base: ItemCore
    {
        class ItemInfo;
    };
    
    class U_I_CombatUniform;

	// ########################### HELMETS ###########################

	class JLTS_CloneHelmetARC;
	class 95th_P1_ARC_Helmet_Base: JLTS_CloneHelmetARC
	{
		displayName="[95th] ARC Helmet Base";
		author="95th Aux Team";
		scope = 0;
    	scopeArsenal = 0;
		hiddenSelections[]={"Camo1","camo2","Visor"};
	};

	class SEA_Helmet_SpecOps_SR_Base;
	class 95th_P1_SpecOps_Helmet_Base: SEA_Helmet_SpecOps_SR_Base
	{
		displayName="[95th] P1 SpecOps Helmet Base";
		author="95th Aux Team";
		scope = 0;
    	scopeArsenal = 0;
		hiddenSelections[]={"Camo1","Camo2","Visor"};
	};

	class SEA_Helmet_Engineer_Base;
	class 95th_P1_Engineer_Helmet_Base: SEA_Helmet_Engineer_Base
	{
		displayName="[95th] P1 Engineer Helmet Base";
		author="95th Aux Team";
		scope = 0;
    	scopeArsenal = 0;
		hiddenSelections[]={"Camo1","Visor"};
	};

	class SEA_Helmet_Hazard_Base;
	class 95th_P1_Hazard_Helmet_Base: SEA_Helmet_Hazard_Base
	{
		displayName="[95th] P1 Hazard Helmet Base";
		author="95th Aux Team";
		scope = 0;
    	scopeArsenal = 0;
		hiddenSelections[]={"Camo1","Camo2","Visor"};
	};

	class 3AS_H_ColdAssault_Helmet;
	class 95th_P1_ColdAssault_Helmet_Base: 3AS_H_ColdAssault_Helmet {
		displayName="[95th] P1 Cold Assault Base";
		author="95th Aux Team";
		scope = 0;
    	scopeArsenal = 0;
	};
}; 