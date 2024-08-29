#include "Macros\P1 Basic.hpp"
#include "Macros\Airborne.hpp"
#include "Macros\ARF.hpp"
#include "Macros\Engineer.hpp"
#include "Macros\P1 Pilot.hpp"
#include "Macros\SpecOps.hpp"
#include "Macros\Hazard.hpp"
#include "Macros\Cold Assault.hpp"
#include "Macros\Commando.hpp"

class CfgPatches {
	class AUX_95th_Helmets {
        author="95th Aux Team";
        name="95th Legion Helmets";
		requiredAddons[]= {};
		units[] = {};
	};
};

class CfgWeapons {
	#include "Definitions.hpp"

	#include "Config\P1 Basic.hpp"
	#include "Config\Airborne.hpp"
	#include "Config\ARF.hpp"
	#include "Config\Engineer.hpp"
	#include "Config\P1 Pilot.hpp"
	#include "Config\SpecOps.hpp"
	#include "Config\Hazard.hpp"
	#include "Config\Cold Assault.hpp"
	#include "Config\Commando.hpp"
};