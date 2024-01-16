class CfgPatches {
	class AUX_95th_Ace {
        author="95th Aux Team";
        name="95th Legion ACE";
		requiredAddons[]= {
			"ace_main",
            "cba_settings"
		};
		units[] = {};
	};
};

class ACEX_Fortify_Presets {
	#include "FortifyPresets\Small.hpp"
	#include "FortifyPresets\Testing.hpp"
};

class CfgFunctions { class AUX_95th { class Ace {
	class setupFortify {file = "\AUX_95th_Ace\Scripts\setupFortify.sqf";};
};};};

class Extended_PreInit_EventHandlers {
	class 95th_Ace_PreInit {
		init="call compile preprocessFileLineNumbers '\AUX_95th_Ace\Bootstrap\XEH_preInit.sqf'";
	};
};

class Extended_PostInit_EventHandlers {
	class 95th_Ace_PostInit {
		init="call compile preprocessFileLineNumbers '\AUX_95th_Ace\Bootstrap\XEH_postInit.sqf'";
	};
};