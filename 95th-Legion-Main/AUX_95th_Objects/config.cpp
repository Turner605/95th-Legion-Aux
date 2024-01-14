class CfgPatches {
	class AUX_95th_Objects {
        author="95th Aux Team";
        name="AUX 95th Objects";
		requiredAddons[]={
			// TODO
		};
		units[]={
			"AUX_95th_AirUtil_Pad", "AUX_95th_AirUtil_Transport", "AUX_95th_AirUtil_Fighter", "AUX_95th_AirUtil_Service",
			"AUX_95th_GroundUtil_Pad", "AUX_95th_GroundUtil_Vehicles", "AUX_95th_GroundUtil_Service", "AUX_95th_GroundUtil_Refit",
			"AUX_95th_Misc_Motion_Sensor", "AUX_95th_Misc_Radio_Extender", "AUX_95th_Misc_Shield_Generator"
		};
	};
};

class CfgEditorCategories{
	class AUX_95th_Objects{displayName = "[95th] Objects";};
};

class CfgEditorSubcategories{
	class AUX_95th_Air_Utilities{displayName="Air Utilities";};
	class AUX_95th_Ground_Utilities{displayName="Ground Utilities";};
	class AUX_95th_Misc{displayName="Misc Objects";};
};

class CBA_Extended_EventHandlers_base;

class CfgVehicles {
	#include "Definitions.hpp"

	// Air Util
	#include "AirUtil\Pad.hpp"
	#include "AirUtil\Transport.hpp"
	#include "AirUtil\Fighter.hpp"
	#include "AirUtil\Service.hpp"

	// Ground Util
	#include "GroundUtil\Pad.hpp"
	#include "GroundUtil\Vehicles.hpp"
	#include "GroundUtil\Service.hpp"
	#include "GroundUtil\Refit.hpp"

	// Misc
	#include "Misc\Motion Sensor.hpp"
	#include "Misc\Radio Extender.hpp"
	#include "Misc\Shield Generator.hpp"
};

class CfgFunctions { class NFA { class Objects {
	class motionSensorInit {file = "\AUX_95th_Objects\Init\motionSensorInit.sqf";};
	class ShieldGeneratorInit {file = "\AUX_95th_Objects\Init\shieldGeneratorInit.sqf";};
};};};

class Extended_InitPost_EventHandlers {
	class AUX_95th_Misc_Motion_Sensor {class AUX_95th_Misc_Motion_Sensor_Init {clientInit = "[_this select 0] call NFA_fnc_motionSensorInit;";};};
	class AUX_95th_Misc_Shield_Generator {class AUX_95th_Misc_Shield_Generator_Init {clientInit = "[_this select 0] call NFA_fnc_shieldGeneratorInit;";};};
	class AUX_95th_Misc_Radio_Extender {class AUX_95th_Misc_Radio_Extender_Init {clientInit = "[_this select 0,50000] call tfar_antennas_fnc_initRadioTower";};};
};

class Extended_Deleted_EventHandlers {
	class AUX_95th_Misc_Radio_Extender {AUX_95th_Misc_Motion_Sensor_Init = "(_this param [0,_this]) call tfar_antennas_fnc_deleteRadioTower";};
};