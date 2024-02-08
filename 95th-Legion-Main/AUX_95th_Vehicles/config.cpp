class CfgPatches {
	class AUX_95th_Vehicles {
        author="95th Aux Team";
        name="AUX 95th Vehicles";
		requiredAddons[]={
			"3AS_Prop_Crates"
		};
		#include "UnitExports.hpp"
	};
};

class CfgFactionClasses { 
    class AUX_95th_Legion_Faction_Vehicles { 
        displayName = "[95th] Vehicles"; 
		scope=2; 
		scopecurator=2;
        priority = 1;
        side = 1;
    };  
};

class CfgEditorSubcategories {
	class AUX_95th_Legion_Vehicles_Category_Static{displayName="Static";};
};

class CfgVehicles {
	#include "Definitions.hpp"

	// Static Vehicles
	#include "Static Vehicles\Command Outpost.hpp"
};

// class CfgFunctions { class AUX_95th { class Vehicles {

// };};};

// class Extended_PostInit_EventHandlers {
// 	class AUX_95th_Objects_PostInit {init="call compile preprocessFileLineNumbers '\AUX_95th_Objects\Init\XEH_postInit.sqf'";};
// };

// class Extended_PreInit_EventHandlers {
// 	class AUX_95th_Objects_PreInit {init="call compile preprocessFileLineNumbers '\AUX_95th_Objects\Init\XEH_preInit.sqf'";};
// };

// class Extended_InitPost_EventHandlers {
// 	class AUX_95th_Misc_Motion_Sensor {class AUX_95th_Misc_Motion_Sensor_Init {init = "[_this select 0] call AUX_95th_fnc_motionSensorInit;";};};
// };