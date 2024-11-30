#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {"AUX_95th_Jedi_Dave", "AUX_95th_Jedi_Zoup"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_units_shared"};
        authors[] = {"Turner"};
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

class CfgFactionClasses { 
    class AUX_95th_Faction_Jedi {displayName = "[95th] Jedi"; scope=2; scopecurator=2; priority = 1; side = 1;};  
};

class CfgEditorCategories{
	class AUX_95th_Faction_Jedi{displayName = "[95th] Jedi";};
};

class CfgEditorSubcategories {
	class AUX_95th_Faction_Jedi_Category_Masters{displayName="Masters";};
};

class CfgVehicles {     
	class AUX_95th_Unit_P1_Basic_trooper;

	class AUX_95th_Jedi_Dave: AUX_95th_Unit_P1_Basic_trooper {
		displayName="Master Dave";
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
        faction="AUX_95th_Faction_Jedi";
        editorCategory="AUX_95th_Faction_Jedi";
        editorSubcategory="AUX_95th_Faction_Jedi_Category_Masters";
	};

	class AUX_95th_Jedi_Zoup: AUX_95th_Jedi_Dave {
		displayName="Master Zoup";
		scope=2; 
		scopecurator=2;
		uniformClass="SFA_Revanite_Armor"; 
		linkedItems[] = {"JLTS_clone_comlink","SFA_Kama_STND","SWLB_CEE_Clone_Scarf_White","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {"JLTS_clone_comlink","SFA_Kama_STND","SWLB_CEE_Clone_Scarf_White","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		weapons[]={"LST_Lightsaber_Thagoron_Dual","Throw","Put"};
		respawnWeapons[]={"LST_Lightsaber_Thagoron_Dual","Throw","Put"};
		identityTypes[]={"OPTRE_Jackal_02"};
		magazines[]={"WBK_Cybercrystal","WBK_Cybercrystal","WBK_Cybercrystal"};
		respawnMagazines[]={"WBK_Cybercrystal","WBK_Cybercrystal","WBK_Cybercrystal"};
        faction="AUX_95th_Faction_Jedi";
        editorCategory="AUX_95th_Faction_Jedi";
        editorSubcategory="AUX_95th_Faction_Jedi_Category_Masters";
	};
};

#include "CfgEventHandlers.hpp"