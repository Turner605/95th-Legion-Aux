class CfgPatches {
	class AUX_95th_Objects {
        author="95th Aux Team";
        name="AUX 95th Objects";
		requiredAddons[]={
			// TODO
		};
		units[]={
			"AUX_95th_AirUtil_Pad", "AUX_95th_AirUtil_Transport", "AUX_95th_AirUtil_Fighter", "AUX_95th_AirUtil_Service",
			"AUX_95th_GroundUtil_Pad", "AUX_95th_GroundUtil_Vehicles", "AUX_95th_GroundUtil_Service", "AUX_95th_GroundUtil_Refit"
		};
	};
};

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
};