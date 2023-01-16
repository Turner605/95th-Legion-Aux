class CfgPatches 
{
    class 95th_Misc_Units
    {
        author="95th Aux Team";
		scope=2;
		scopecurator=2;
        name="95th Legion Misc";
        requiredAddons[] = {
			"A3_Characters_F", 
			"JLTS_characters_CloneArmor",
			"95th_P1_Base_Units"
		};
		units[] = {
			"95th_Jedi"
		};
    };
}; 

class CfgEditorSubcategories{
	class 95th_Jedi{displayName="Jedi";};
};

class CfgVehicles 
{     
	class 95th_Misc_Unit_Base;
	class 95th_Jedi: 95th_Misc_Unit_Base
	{
		displayName="[95th] Jedi";
		editorSubcategory="95th_Jedi";
		scope=2; 
		scopecurator=2;
		uniformClass="lsd_gar_phase2Insulated_uniform"; 
		linkedItems[] = {"JLTS_clone_comlink","SWLB_CEE_Clone_Scarf_White","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {"JLTS_clone_comlink","SWLB_CEE_Clone_Scarf_White","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		weapons[]={"WBK_lightsaberOldRep_jedi","Throw","Put"};
		respawnWeapons[]={"WBK_lightsaberOldRep_jedi","Throw","Put"};
		identityTypes[]={"OPTRE_Jackal_02"};
		magazines[]={"WBK_Cybercrystal","WBK_Cybercrystal","WBK_Cybercrystal"};
		respawnMagazines[]={"WBK_Cybercrystal","WBK_Cybercrystal","WBK_Cybercrystal"};
	};
};