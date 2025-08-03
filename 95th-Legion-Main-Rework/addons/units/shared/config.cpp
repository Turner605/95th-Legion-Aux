#include "script_component.hpp"

class CfgPatches {
    class AUX_95th_units_shared {
        name = COMPONENT_NAME;
        units[] = {
			"AUX_95th_Clone_Decoy_Hologram"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			"AUX_95th_main",
            "A3_Characters_F", 
			"JLTS_characters_CloneArmor"
		};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgFactionClasses { 
    class AUX_95th_Faction_Misc {displayName = "[95th] Misc"; scope=2; scopecurator=2; priority = 1; side = 1;};  
};

class CfgEditorCategories{
	class AUX_95th_Faction_Misc {displayName = "[95th] Misc";};
};

class CfgEditorSubcategories{
	class AUX_95th_Holograms{displayName="Holograms";};
	class AUX_95th_Faction_Category_Ground_Infantry{displayName="Infantry";};
	class AUX_95th_Faction_Category_Ground_Tanks{displayName="Tanks";};
};

class CfgVehicles {     
	class AUX_95th_Unit_P1_Basic_Trooper;

	class AUX_95th_Clone_Decoy_Hologram: AUX_95th_Unit_P1_Basic_Trooper {
		backpack = "";
		displayName="Decoy Hologram";
		uniformClass="ls_gar_phase2Hologram_uniform";
		faction="AUX_95th_Faction_Misc";
		editorSubcategory="AUX_95th_Holograms";
		scope=2; 
		scopecurator=2;
		allowedFacewear[] = {"", 1};
        weapons[]={"3AS_DC15S_F", "Throw", "Put"};
        respawnWeapons[]={"3AS_DC15S_F", "Throw", "Put"};
        Items[] = {};
        RespawnItems[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
        linkedItems[] = {"ls_gar_phase1_hologram_helmet"};
        respawnLinkedItems[] = {"ls_gar_phase1_hologram_helmet"};
	};
};

#include "CfgEventHandlers.hpp"