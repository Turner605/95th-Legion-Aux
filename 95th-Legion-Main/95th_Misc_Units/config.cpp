class CfgPatches  {
    class 95th_Misc_Units {
        author="95th Aux Team";
		scope=2;
		scopecurator=2;
        name="95th Legion Misc";
        requiredAddons[] = {
			"A3_Characters_F", 
			"JLTS_characters_CloneArmor",
			"AUX_95th_Characters"
		};
		units[] = {
			"AUX_95th_Jedi_Dave",
			"AUX_95th_Clone_Decoy_Hologram"
		};
    };
}; 

class CfgFactionClasses { 
    class AUX_95th_Legion_Faction_Misc { 
        displayName = "[95th] Misc"; 
		scope=2; 
		scopecurator=2;
        priority = 1;
        side = 1;
    };  
};

class CfgEditorSubcategories{
	class AUX_95th_Jedi{displayName="Jedi";};
	class AUX_95th_Holograms{displayName="Holograms";};
};

class CfgVehicles {     
	class JLTS_Clone_P2_DC15A;
	class SWLB_clone_holo_P2;

	class AUX_95th_Misc_Unit_Base : JLTS_Clone_P2_DC15A {
		displayName="[95th] Misc Unit Base";
		scope=0; 
		scopecurator=0;
		faction="AUX_95th_Legion_Faction_Misc";
		editorSubcategory="AUX_95th_Jedi";
	};

	class AUX_95th_Jedi_Dave: AUX_95th_Misc_Unit_Base {
		displayName="Jedi Dave";
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

	class AUX_95th_Clone_Decoy_Hologram: SWLB_clone_holo_P2 {
		displayName="Decoy Hologram";
		faction="AUX_95th_Legion_Faction_Misc";
		editorSubcategory="AUX_95th_Holograms";
		scope=2; 
		scopecurator=2;
		magazines[]={};
		respawnMagazines[]={};
	};

};