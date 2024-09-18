#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgEditorCategories {
	class AUX_95th_Legion_Compositions_Blufor {
		displayName = "[95th] Blufor";
	};
};

class CfgEditorSubcategories {
	class AUX_95th_Legion_Compositions_Blufor_Bases {
		displayName = "Bases";
	};
};

class Cfg3DEN {
	class Compositions {
		class AUX_95th_FOB_Blackweb {
			path = "z\AUX_95th\addons\compositions\blufor\fob blackweb";
			side = 1; // 0 opfor, 1 blufor, 2 indfor, 3 civ, 8 Empty/Props
			editorCategory = "AUX_95th_Legion_Compositions_Blufor";
			editorSubcategory = "AUX_95th_Legion_Compositions_Blufor_Bases";
			displayName = "FOB Blackweb";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};
	};
};

#include "CfgEventHandlers.hpp"