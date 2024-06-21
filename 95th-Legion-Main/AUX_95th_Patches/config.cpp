class CfgPatches {
	class AUX_95th_Patches {
        author="95th Aux Team";
        name="95th Legion Patches";
		requiredAddons[]= {
			"ace_main",
            "cba_settings",
			"WBK_PhoenixTreal_FlamethrowerMOD"
		};
		units[] = {};
	};
};

class Extended_PreInit_EventHandlers {
	class AUX_95th_Patches_PreInit {
		init="call compile preprocessFileLineNumbers '\AUX_95th_Patches\Init\XEH_preInit.sqf'";
	};
};

class Extended_PostInit_EventHandlers {
	class AUX_95th_Patches_PostInit {
		init="call compile preprocessFileLineNumbers '\AUX_95th_Patches\Init\XEH_postInit.sqf'";
	};
};