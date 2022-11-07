class CfgPatches 
{ 
    class My_Mod_Config 
    { 
        units[] = {"Custom_Uniform_Mod";}; 
        author="95th Aux Team";
        weapons[] = {}; 
        requiredVersion = 0.1; 
        requiredAddons[] = {"A3_Characters_F"}; 
    }; 
}; 

//************************************************************************************************************************************************************************************************
//*****        Factions                  *********************************************************************************************************************************************************
//************************************************************************************************************************************************************************************************
class cfgFactionClasses 
{ 
    class 95th_Legion 
    { 
        displayName = "95th Legion"; 
        priority = 1; // Position in list. 
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon = ""; //Custom Icon 
    };  
};

class UniformSlotInfo 
{ 
    slotType = 0; 
    linkProxy = "-"; 
}; 

class CfgVehicles 
{     
    //************************************************************************************************************************************************************************************************
    //*****             Units                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    class 95th_Unit; 
    class JLTS_Clone_P2_DC15A;
    
	class 95th_Trooper_Base: JLTS_Clone_P2_DC15A
	{
		displayName="95th Trooper";
		faction="95th_Legion";
		editorSubcategory="JLTS_clones_white"; //TODO: Change?
		editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_DC15AUGL.jpg";
		icon="JLTS_iconManHeavy";
		weapons[]=
		{
			"JLTS_DC15A_UGL_plastic",
			"JLTS_DC17SA",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_DC15A_UGL_plastic",
			"JLTS_DC17SA",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		uniformClass="95th_Uniform_Base";
		model="\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			// "\95th_Uniforms\Data\Clone_armorTEST1_co",
			// "\95th_Uniforms\Data\Clone_armorTEST1_co",
			// "\95th_Uniforms\Data\Clone_armorTEST1_co",
			"\MRC\JLTS\characters\CloneArmor\data\Clone_armor1_co.paa",
			"\MRC\JLTS\characters\CloneArmor\data\Clone_armor2_co.paa",
			"\MRC\JLTS\characters\CloneArmor\data\Clone_armor_recon_co.paa"
		};
	};

	class 95th_Trooper_Sergeant: 95th_Trooper_Base
	{
		displayName="95th Sergeant";
		editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_DC15AUGL.jpg";
		icon="JLTS_iconManHeavy";
		uniformClass="95th_Uniform_Sergeant";
		model="\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			// "\95th_Uniforms\Data\Clone_armorTEST1_co",
			// "\95th_Uniforms\Data\Clone_armorTEST1_co",
			// "\95th_Uniforms\Data\Clone_armorTEST1_co",
			"\MRC\JLTS\characters\CloneArmor\data\Clone_armor1_co.paa",
			"\MRC\JLTS\characters\CloneArmor\data\Clone_armor2_co.paa",
			"\MRC\JLTS\characters\CloneArmor\data\Clone_armor_recon_co.paa"
		};
	};
};

class cfgWeapons 
{ 
    //********************************************************************************************************************************************************************************************
    //*****            Uniforms              *****************************************************************************************************************************************************
    //********************************************************************************************************************************************************************************************
    class InventoryItem_Base_F;
    class ItemCore;
    class UniformItem;
    class Uniform_Base: ItemCore
    {
        class ItemInfo;
    };
    
    class U_I_CombatUniform;

	class 95th_Uniform_Base: U_I_CombatUniform
	{
		author="95th Aux";
		scope=2;
		displayName="95th Trooper Uniform";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="95th_Trooper_Base";
			containerClass="Supply150";
			mass=40;
		};
	};

	class 95th_Uniform_Sergeant: 95th_Uniform_Base
	{
		displayName="95th Sergeant Uniform";
		class ItemInfo: UniformItem
		{
			uniformClass="95th_Trooper_Sergeant";
		};
	}
}; 