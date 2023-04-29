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
	
	class 95th_P1_Airborne_Unit_Base : 95th_Unit_Base
	{
		displayName="[95th] Airborne";
		editorSubcategory="95th_Airborne";
		editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_AB.jpg"; //TODO: CHANGE
		weapons[]={"JLTS_DC15S","JLTS_DC17SA","Throw","Put"};
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

	class 95th_P1_ARF_Unit_Base : 95th_Unit_Base
	{
		displayName="[95th] ARF";
		editorSubcategory="95th_ARF";
		editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_AB.jpg"; //TODO: CHANGE
		weapons[]={"JLTS_DC15S","JLTS_DC17SA","Throw","Put"};
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

	class 95th_P1_Pilot_Unit_Base : 95th_Unit_Base
	{
		displayName="[95th] Pilot";
		editorSubcategory="95th_Pilots";
		editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_AB.jpg"; //TODO: CHANGE
		weapons[]={"JLTS_DC17SA","Throw","Put"};
		respawnWeapons[]={"JLTS_DC17SA","Throw","Put"};
		magazines[]=
		{
			"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag",
			"Chemlight_green","Chemlight_green"
		};
		respawnMagazines[]=
		{
			"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag",
			"Chemlight_green","Chemlight_green"
		};
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

	class 95th_P1_Unit_Base : 95th_Unit_Base
	{
		displayName="[95th] ARC";
		editorSubcategory="95th_P1";
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

	class 95th_P1_MC_Unit_Base: 95th_Unit_Base
	{
		displayName="[95th] Commanders";
		editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_marshalcommander.jpg";
		editorSubcategory="95th_P1";
		icon="JLTS_iconManMarshalCMDR";
		uniformClass="95th_P1_MC_Uniform_Base";
		model="\MRC\JLTS\characters\CloneArmor\CloneArmorMC.p3d";
		hiddenSelections[]={"camo1","camo2","camo3"};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\CloneArmor\data\Clone_armor1_mc_co.paa",
			"\MRC\JLTS\characters\CloneArmor\data\Clone_armor2_co.paa",
			"\MRC\JLTS\characters\CloneArmor\data\Clone_rank_co.paa"
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

	// ########################### UNIFORM ###########################

	class 95th_P1_Uniform_Base: U_I_CombatUniform
	{
        author="95th Aux Team";
		scope=0; 
		scopecurator=0;
		displayName="[95th] Base Uniform";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass="95th_Unit_Base";
			uniformModel="-";
			containerClass="Supply150";
			mass=40;
		};
	};

	class 95th_P1_MC_Uniform_Base: U_I_CombatUniform
	{
        author="95th Aux Team";
		scope=0; 
		scopecurator=0;
		displayName="[95th] Base MC Uniform";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneArmorMC.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="JLTS_Clone_P2_marshalcommander";
			containerClass="Supply150";
			mass=40;
		};
	};

	// ########################### HELMETS ###########################

	class JLTS_CloneHelmetAB;
	class 95th_P1_Airborne_Helmet_Base: JLTS_CloneHelmetAB
	{
		displayName="[95th] Airborne Helmet Base"; 
		author="95th Aux Team";
		scope = 0;
    	scopeArsenal = 0;
	};

	class 3AS_ARF_Helmet;
	class 95th_P1_ARF_Helmet_Base: 3AS_ARF_Helmet
	{
		displayName="[95th] ARF Helmet Base";
		author="95th Aux Team";
		scope = 0;
    	scopeArsenal = 0;
	};

	class LSEA_Helmet_Pilot_P1_Base;
	class 95th_P1_Pilot_Helmet_Base: LSEA_Helmet_Pilot_P1_Base
	{
		displayName="[95th] Pilot Helmet Base";
		author="95th Aux Team";
		scope = 0;
    	scopeArsenal = 0;
	};

	class JLTS_CloneHelmetARC;
	class 95th_P1_ARC_Helmet_Base: JLTS_CloneHelmetARC
	{
		displayName="[95th] ARC Helmet Base";
		author="95th Aux Team";
		scope = 0;
    	scopeArsenal = 0;
		hiddenSelections[]={"Camo1","camo2","Visor"};
	};
	
	class SEA_Helmet_P1_Base;
	class 95th_P1_Helmet_Base: SEA_Helmet_P1_Base
	{
		displayName="[95th] P1 Helmet Base";
		author="95th Aux Team";
		scope = 0;
    	scopeArsenal = 0;
		hiddenSelections[]={"Camo1","Visor"};
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