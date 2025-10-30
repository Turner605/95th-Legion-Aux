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
		displayName = "[95th] GAR Compositions";
	};

	class AUX_95th_Legion_Compositions_CIS {
		displayName = "[95th] CIS Compositions";
	};
};

class CfgEditorSubcategories {
	class AUX_95th_Legion_Compositions_FOBs {displayName = "FOBs";};
	class AUX_95th_Legion_Compositions_Outposts {displayName = "Outposts";};
	class AUX_95th_Legion_Compositions_Ships {displayName = "Ships";};
	class AUX_95th_Legion_Compositions_Checkpoints {displayName = "Checkpoints";};
	class AUX_95th_Legion_Compositions_AA {displayName = "AA";};
	class AUX_95th_Legion_Compositions_Misc {displayName = "Misc";};
	class AUX_95th_Legion_Compositions_Airbases {displayName = "Airbases";};
	class AUX_95th_Legion_Compositions_Artillery {displayName = "Artillery";};
};

class Cfg3DEN {
	class Compositions {

		// GAR - FOB's
		class AUX_95th_FOB_Blackweb {
			path = "z\AUX_95th\addons\compositions\gar\fob blackweb";
			side = 1; // 0 opfor, 1 blufor, 2 indfor, 3 civ, 8 Empty/Props
			editorCategory = "AUX_95th_Legion_Compositions_GAR";
			editorSubcategory = "AUX_95th_Legion_Compositions_FOBs";
			displayName = "FOB Blackweb";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};

		class AUX_95th_Acclamator {
			path = "z\AUX_95th\addons\compositions\gar\acclamator";
			side = 1; // 0 opfor, 1 blufor, 2 indfor, 3 civ, 8 Empty/Props
			editorCategory = "AUX_95th_Legion_Compositions_GAR";
			editorSubcategory = "AUX_95th_Legion_Compositions_Ships";
			displayName = "Acclamator";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};

		// CIS - Checkpoints
		class AUX_95th_Opfor_Checkpoint_1 {
			path = "z\AUX_95th\addons\compositions\cis\checkpoint_1";
			side = 0; // 0 opfor, 1 blufor, 2 indfor, 3 civ, 8 Empty/Props
			editorCategory = "AUX_95th_Legion_Compositions_CIS";
			editorSubcategory = "AUX_95th_Legion_Compositions_Checkpoints";
			displayName = "Checkpoint 1";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};

		// CIS - AA
		class AUX_95th_Opfor_AA_Shielded_1 {
			path = "z\AUX_95th\addons\compositions\cis\aa_shielded_1";
			side = 0; // 0 opfor, 1 blufor, 2 indfor, 3 civ, 8 Empty/Props
			editorCategory = "AUX_95th_Legion_Compositions_CIS";
			editorSubcategory = "AUX_95th_Legion_Compositions_AA";
			displayName = "AA (Shielded) 1";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};

		// CIS - Misc
		class AUX_95th_Opfor_Protected_Shield_Gen_1 {
			path = "z\AUX_95th\addons\compositions\cis\protected_shield_generator_1";
			side = 0; // 0 opfor, 1 blufor, 2 indfor, 3 civ, 8 Empty/Props
			editorCategory = "AUX_95th_Legion_Compositions_CIS";
			editorSubcategory = "AUX_95th_Legion_Compositions_Misc";
			displayName = "Protected Shield Generator";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};

		// CIS - Airbases
		class AUX_95th_Opfor_Airbase_1 {
			path = "z\AUX_95th\addons\compositions\cis\airbase_1";
			side = 0; // 0 opfor, 1 blufor, 2 indfor, 3 civ, 8 Empty/Props
			editorCategory = "AUX_95th_Legion_Compositions_CIS";
			editorSubcategory = "AUX_95th_Legion_Compositions_Airbases";
			displayName = "Tree Pad Airbase";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};
		
		// CIS - Artillery
		class AUX_95th_Opfor_Artillery_1 {
			path = "z\AUX_95th\addons\compositions\cis\artillery_1";
			side = 0; // 0 opfor, 1 blufor, 2 indfor, 3 civ, 8 Empty/Props
			editorCategory = "AUX_95th_Legion_Compositions_CIS";
			editorSubcategory = "AUX_95th_Legion_Compositions_Artillery";
			displayName = "Triple Platform Artillery";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};

		class AUX_95th_Opfor_Artillery_2 {
			path = "z\AUX_95th\addons\compositions\cis\artillery_2";
			side = 0; // 0 opfor, 1 blufor, 2 indfor, 3 civ, 8 Empty/Props
			editorCategory = "AUX_95th_Legion_Compositions_CIS";
			editorSubcategory = "AUX_95th_Legion_Compositions_Artillery";
			displayName = "Quad Platform Artillery";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};

		// CIS - FOB's
		class AUX_95th_Opfor_FOB_1 {
			path = "z\AUX_95th\addons\compositions\cis\fob_1";
			side = 0; // 0 opfor, 1 blufor, 2 indfor, 3 civ, 8 Empty/Props
			editorCategory = "AUX_95th_Legion_Compositions_CIS";
			editorSubcategory = "AUX_95th_Legion_Compositions_FOBs";
			displayName = "FOB 1";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};

		class AUX_95th_Opfor_FOB_5 {
			path = "z\AUX_95th\addons\compositions\cis\fob_5";
			side = 0; // 0 opfor, 1 blufor, 2 indfor, 3 civ, 8 Empty/Props
			editorCategory = "AUX_95th_Legion_Compositions_CIS";
			editorSubcategory = "AUX_95th_Legion_Compositions_FOBs";
			displayName = "FOB 5";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};
	};
};

#include "CfgEventHandlers.hpp"