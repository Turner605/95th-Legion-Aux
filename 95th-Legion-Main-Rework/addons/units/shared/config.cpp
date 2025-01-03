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
};

class CfgVehicles {     
	class SWLB_clone_holo_P2;

	class AUX_95th_Clone_Decoy_Hologram: SWLB_clone_holo_P2 {
		displayName="Decoy Hologram";
		faction="AUX_95th_Faction_Misc";
		editorSubcategory="AUX_95th_Holograms";
		scope=2; 
		scopecurator=2;
		magazines[]={};
		respawnMagazines[]={};
	};
};

#include "CfgEventHandlers.hpp"