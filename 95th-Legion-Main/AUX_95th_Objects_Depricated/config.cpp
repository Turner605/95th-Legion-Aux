class CfgPatches {
	class AUX_95th_Objects_Depricated {
        author="95th Aux Team";
        name="AUX 95th Objects";
		requiredAddons[]={"3AS_Prop_Crates","AUX_95th_Ace"};
		units[]={
			"AUX_95th_Ground_Factory", "AUX_95th_Droid_Factory_Terminal", "AUX_95th_Factory_Proxy", "AUX_95th_Flak_Factory",
			"AUX_95th_Misc_Motion_Sensor", "AUX_95th_Misc_Radio_Extender", "AUX_95th_Misc_Shield_Generator", "AUX_95th_Misc_Reinsert_Requester",
			"AUX_95th_Crate_Platoon_Ammo", "AUX_95th_Crate_Platoon_Medical", "AUX_95th_Crate_Platoon_Explosives", "AUX_95th_Crate_Vehicle_Ammo", "AUX_95th_Crate_Vehicle_Fuel",
			"AUX_95th_Crate_Full_Arsenal", "AUX_95th_Crate_Restricted_Arsenal", "AUX_95th_Crate_Inverted_Arsenal",
			"AUX_95th_Misc_Crate_Pad", "AUX_95th_Misc_Medical_Terminal", "AUX_95th_Misc_Permission_Terminal",
			"AUX_95th_Venator_Briefing_Room", "AUX_95th_Medical_Shield", "AUX_95th_Shield_Small", "AUX_95th_Shield_Test", "AUX_95th_Acclimator_Hollow",
			"AUX_95th_Fortify_Ramp", "AUX_95th_Fortify_Barricade", "AUX_95th_Fortify_Wall", "AUX_95th_Fortify_Bunker", "AUX_95th_Fortify_Turret",
			"AUX_95th_Misc_Arsenal_Full", "AUX_95th_Misc_Arsenal_Restricted", "AUX_95th_Venator_Briefing_Room",
			"AUX_95th_WBK_Combine_WalhammerShield_actual", "AUX_95th_Misc_Airborne_Terminal", "AUX_95th_Misc_2DFCK"
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
	class AUX_95th_Ships{displayName="Ships";};
	class AUX_95th_Fortify{displayName="Fortify";};

	class AUX_95th_Ground_Factories{displayName="Ground Factories";};
	class AUX_95th_Shared_Factories{displayName="Shared";};
};

class CBA_Extended_EventHandlers_base;

class CfgVehicles {
	#include "Definitions.hpp"

	// Droid Factories
	#include "Droid Factories\Ground Factory.hpp"
	#include "Droid Factories\Factory Terminal.hpp"
	#include "Droid Factories\Factory Proxy.hpp"
	#include "Droid Factories\Flak Factory.hpp"

	// Resupply Crates
	#include "Crates\Full Arsenal.hpp"
	#include "Crates\Inverted Arsenal.hpp"
	#include "Crates\Platoon Ammo.hpp"
	#include "Crates\Platoon Explosives.hpp"
	#include "Crates\Platoon Medical.hpp"
	#include "Crates\Restricted Arsenal.hpp"
	#include "Crates\Vehicle Ammo.hpp"
	#include "Crates\Vehicle Fuel.hpp"

	// Fortify
	#include "Fortify\Barricade.hpp"
	#include "Fortify\Bunker.hpp"
	#include "Fortify\Ramp.hpp"
	#include "Fortify\Turret.hpp"
	#include "Fortify\Wall.hpp"

	// Misc
	#include "Misc\Arsenal Full.hpp"
	#include "Misc\Arsenal Restricted.hpp"
	#include "Misc\Crate Pad.hpp"
	#include "Misc\Motion Sensor.hpp"
	#include "Misc\Radio Extender.hpp"
	#include "Misc\Reinsert Requester.hpp"
	#include "Misc\Shield Generator.hpp"
	#include "Misc\2D Field Commander Kit.hpp"

	// Misc Terminals
	#include "Misc Terminals\Medical Terminal.hpp"
	#include "Misc Terminals\Permission Terminal.hpp"
	#include "Misc Terminals\Airborne Terminal.hpp"

	// Shield
	#include "Shields\Medical Shield.hpp"
	#include "Shields\Planetary Shield Small.hpp"
	#include "Shields\Personal Shield.hpp"

	// Ships
	#include "Ships\Acclimator Hollow.hpp"

	// Venator
	#include "Venator\Briefing Room.hpp"
};

class CfgFunctions { class AUX_95th { class Objects {
	class motionSensorInit {file = "\AUX_95th_Objects_Depricated\Init\motionSensorInit.sqf";};
	class ShieldGeneratorInit {file = "\AUX_95th_Objects_Depricated\Init\shieldGeneratorInit.sqf";};
	class reinsertRequesterInit {file = "\AUX_95th_Objects_Depricated\Init\reinsertRequesterInit.sqf";};
	class invertedArsenalInit {file = "\AUX_95th_Objects_Depricated\Init\invertedArsenalInit.sqf";};
	class droidFactoryTerminalInit {file = "\AUX_95th_Objects_Depricated\Init\droidFactoryTerminalInit.sqf";};
	class droidFactoryInit {file = "\AUX_95th_Objects_Depricated\Init\droidFactoryInit.sqf";};
	class droidFlakFactoryInit {file = "\AUX_95th_Objects_Depricated\Init\droidFlakFactoryInit.sqf";};
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
	class AUX_95th_Crate_Full_Arsenal {class AUX_95th_Crate_Full_Arsenal_Init {init = "[_this select 0, true] call ace_arsenal_fnc_initBox;";};};
	class AUX_95th_Crate_Restricted_Arsenal {class AUX_95th_Crate_Restricted_Arsenal_Init {init = "[_this select 0, AUX_95th_Arsenal_Whitelisted_All] call ace_arsenal_fnc_initBox;";};};
	class AUX_95th_Crate_Inverted_Arsenal {class AUX_95th_Crate_Inverted_Arsenal_Init {init = "[_this select 0] call AUX_95th_fnc_invertedArsenalInit;";};};
	class AUX_95th_Misc_Arsenal_Full {class AUX_95th_Misc_Arsenal_Full_Init {init = "[_this select 0, true] call ace_arsenal_fnc_initBox;";};};
	class AUX_95th_Misc_Arsenal_Restricted {class AUX_95th_Misc_Arsenal_Restricted_Init {init = "[_this select 0, AUX_95th_Arsenal_Whitelisted_All] call ace_arsenal_fnc_initBox;";};};
	class AUX_95th_Droid_Factory_Terminal {class AUX_95th_Droid_Factory_Terminal_Init {init = "[_this select 0] call AUX_95th_fnc_droidFactoryTerminalInit;";};};
	class AUX_95th_Ground_Factory {class AUX_95th_Ground_Factory_Init {init = "[_this select 0] call AUX_95th_fnc_droidFactoryInit;";};};
	class AUX_95th_Flak_Factory {class AUX_95th_Flak_Factory_Init {init = "[_this select 0] call AUX_95th_fnc_droidFlakFactoryInit;";};};
};

class Extended_Deleted_EventHandlers {
	class AUX_95th_Misc_Radio_Extender {AUX_95th_Misc_Motion_Sensor_Init = "(_this param [0,_this]) call tfar_antennas_fnc_deleteRadioTower";};
};