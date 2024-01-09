class CfgPatches {
	class AUX_95th_Objects {
        author="95th Aux Team";
        name="AUX 95th Objects";
		requiredAddons[]={
			// TODO
		};
		units[]={
			"AUX_95th_AirUtil_Pad", "AUX_95th_AirUtil_Transport", "AUX_95th_AirUtil_Fighter", "AUX_95th_AirUtil_Service"
			// "AUX_95th_AirUtil_Pad", "AUX_95th_AirUtil_Transport", "AUX_95th_AirUtil_Fighter", "AUX_95th_AirUtil_Service", "AUX_95th_AirUtil_Refit", 
		};
	};
};

// Air - Pad - 3AS_Pad_Square_Prop
// Air - Service - 3AS_workbench_r1

// G - Pad - 3AS_Pad_GAR_Prop
// G - Spawner - 3AS_Terminal_1_Prop
// G - Service - 3AS_workbench_r1
// G - Refit - 3AS_workbench_s

class CfgVehicles {
	// Air Util
	#include "AirUtil\Definitions.hpp"
	#include "AirUtil\Pad.hpp"
	#include "AirUtil\Transport.hpp"
	#include "AirUtil\Fighter.hpp"
	#include "AirUtil\Service.hpp"

	// Ground Util
	// #include "GroundUtil\Refit.hpp"
};