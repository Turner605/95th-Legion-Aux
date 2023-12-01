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
			"95th_P1_Units"
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
	class JLTS_Clone_P2_DC15A;

	class 95th_Misc_Unit_Base : JLTS_Clone_P2_DC15A
	{
		displayName="[95th] Misc Unit Base";
		scope=0; 
		scopecurator=0;
		faction="95th_Legion_Faction_Misc";
		editorSubcategory="95th_Jedi";
		editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_DC15A.jpg"; //TODO: CHANGE TO P1
		icon="JLTS_iconManHeavy"; // TODO: CHANGE TO BASIC ICON
		linkedItems[]={"95th_P1_Helmet_Trooper","95th_Basic_Vest_Rifleman","JLTS_Clone_radio","ItemGPS","ItemMap","ItemWatch","ItemCompass"};
		respawnLinkedItems[]={"95th_P1_Helmet_Trooper","95th_Basic_Vest_Rifleman","JLTS_Clone_radio","ItemGPS","ItemMap","ItemWatch","ItemCompass"};
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
	};

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