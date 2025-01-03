class CfgPatches {
	class AUX_95th_Objects_Depricated {
        author="95th Aux Team";
        name="AUX 95th Objects";
		requiredAddons[]={"3AS_Prop_Crates","AUX_95th_Ace"};
		units[]={
			"AUX_95th_Misc_Motion_Sensor", "AUX_95th_Misc_Radio_Extender", "AUX_95th_Misc_Shield_Generator", "AUX_95th_Misc_Reinsert_Requester",
			"AUX_95th_Misc_Crate_Pad",
			"AUX_95th_Venator_Briefing_Room",
			"AUX_95th_Fortify_Ramp", "AUX_95th_Fortify_Barricade", "AUX_95th_Fortify_Wall", "AUX_95th_Fortify_Bunker", "AUX_95th_Fortify_Turret",
			"AUX_95th_Venator_Briefing_Room",
			"AUX_95th_Misc_2DFCK"
		};
	};
};

class CfgEditorCategories{
	class AUX_95th_Objects{displayName = "[95th] Objects";};
	class AUX_95th_Factories{displayName = "[95th] Factories";};
};

class CfgEditorSubcategories{
	class AUX_95th_Air_Utilities{displayName="Air Utilities";};
	class AUX_95th_Crates{displayName="Supply Crates";};
	class AUX_95th_Ground_Utilities{displayName="Ground Utilities";};
	class AUX_95th_Misc{displayName="Misc Objects";};
	class AUX_95th_Venator{displayName="Misc Objects";};
	class AUX_95th_Misc_Terminals{displayName="Misc Terminals";};
	class AUX_95th_Shields{displayName="Shields";};
	class AUX_95th_Fortify{displayName="Fortify";};
};

class CBA_Extended_EventHandlers_base;

class CfgVehicles {
	#include "Definitions.hpp"

	// Fortify
	#include "Fortify\Barricade.hpp"
	#include "Fortify\Bunker.hpp"
	#include "Fortify\Ramp.hpp"
	#include "Fortify\Turret.hpp"
	#include "Fortify\Wall.hpp"

	// Misc
	#include "Misc\Motion Sensor.hpp"
	#include "Misc\Radio Extender.hpp"
	#include "Misc\Reinsert Requester.hpp"
	#include "Misc\Shield Generator.hpp"
	#include "Misc\2D Field Commander Kit.hpp"

	// Venator
	#include "Venator\Briefing Room.hpp"
};

class CfgFunctions { class AUX_95th { class Objects {
	class motionSensorInit {file = "\AUX_95th_Objects_Depricated\Init\motionSensorInit.sqf";};
	class ShieldGeneratorInit {file = "\AUX_95th_Objects_Depricated\Init\shieldGeneratorInit.sqf";};
	class reinsertRequesterInit {file = "\AUX_95th_Objects_Depricated\Init\reinsertRequesterInit.sqf";};
	class invertedArsenalInit {file = "\AUX_95th_Objects_Depricated\Init\invertedArsenalInit.sqf";};
};};};

class Extended_PostInit_EventHandlers {
	class AUX_95th_Objects_Depricated_PostInit {init="call compile preprocessFileLineNumbers '\AUX_95th_Objects_Depricated\Init\XEH_postInit.sqf'";};
};

class Extended_PreInit_EventHandlers {
	class AUX_95th_Objects_Depricated_PreInit {init="call compile preprocessFileLineNumbers '\AUX_95th_Objects_Depricated\Init\XEH_preInit.sqf'";};
};

class Extended_InitPost_EventHandlers {
	class AUX_95th_Misc_Motion_Sensor {class AUX_95th_Misc_Motion_Sensor_Init {init = "[_this select 0] call AUX_95th_fnc_motionSensorInit;";};};
	class AUX_95th_Misc_Shield_Generator {class AUX_95th_Misc_Shield_Generator_Init {init = "[_this select 0] call AUX_95th_fnc_shieldGeneratorInit;";};};
	class AUX_95th_Misc_Reinsert_Requester {class AUX_95th_Misc_Reinsert_Requester_Init {init = "[_this select 0] call AUX_95th_fnc_reinsertRequesterInit;";};};
	class AUX_95th_Misc_Radio_Extender {class AUX_95th_Misc_Radio_Extender_Init {init = "[_this select 0,50000] call tfar_antennas_fnc_initRadioTower";};};
};

class Extended_Deleted_EventHandlers {
	class AUX_95th_Misc_Radio_Extender {AUX_95th_Misc_Motion_Sensor_Init = "(_this param [0,_this]) call tfar_antennas_fnc_deleteRadioTower";};
};