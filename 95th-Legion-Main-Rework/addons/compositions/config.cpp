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
	class AUX_95th_Legion_Compositions_GAR {
		displayName = "[95th] GAR";
	};

	class AUX_95th_Legion_Compositions_CIS {
		displayName = "[95th] CIS";
	};
};

class CfgEditorSubcategories {
	class AUX_95th_Legion_Compositions_FOBs {displayName = "FOBs";};
	class AUX_95th_Legion_Compositions_Checkpoints {displayName = "Checkpoints";};
	class AUX_95th_Legion_Compositions_AA {displayName = "AA";};
};

class Cfg3DEN {
	class Compositions {
		class AUX_95th_FOB_Blackweb {
			path = "z\AUX_95th\addons\compositions\gar\fob blackweb";
			side = 1; // 0 opfor, 1 blufor, 2 indfor, 3 civ, 8 Empty/Props
			editorCategory = "AUX_95th_Legion_Compositions_GAR";
			editorSubcategory = "AUX_95th_Legion_Compositions_FOBs";
			displayName = "FOB Blackweb";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};

		class AUX_95th_Opfor_Checkpoint_A {
			path = "z\AUX_95th\addons\compositions\cis\checkpoint_1";
			side = 0; // 0 opfor, 1 blufor, 2 indfor, 3 civ, 8 Empty/Props
			editorCategory = "AUX_95th_Legion_Compositions_CIS";
			editorSubcategory = "AUX_95th_Legion_Compositions_Checkpoints";
			displayName = "Checkpoint Alpha";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};

		class AUX_95th_Opfor_AA_Shielded_A {
			path = "z\AUX_95th\addons\compositions\cis\aa_shielded_1";
			side = 0; // 0 opfor, 1 blufor, 2 indfor, 3 civ, 8 Empty/Props
			editorCategory = "AUX_95th_Legion_Compositions_CIS";
			editorSubcategory = "AUX_95th_Legion_Compositions_AA";
			displayName = "AA (Shielded) Alpha";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};
	};
};

#include "CfgEventHandlers.hpp"