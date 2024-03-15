// Potential Special Units:
// Shield Droid (Moving unit with an attached squad type shield)

class CfgPatches {
	class AUX_95th_Droid_Units {
        author="95th Aux Team";
        name="AUX 95th Droid Units";
		requiredAddons[]={"JLTS_characters_DroidUnits"};
		units[]={
			"AUX_95th_Droid_B1_Unit_AA",
			"AUX_95th_Droid_B1_Unit_AT",
			"AUX_95th_Droid_B1_Unit_AutoRifleman",
			"AUX_95th_Droid_B1_Unit_Commander",
			"AUX_95th_Droid_B1_Unit_Rifleman",
			"AUX_95th_Droid_B1_Unit_Shotgun",
			"AUX_95th_Droid_B1_Unit_Sniper"
		};
	};
};

class CfgFactionClasses {
    class AUX_95th_CIS {displayName = "[95th] CIS Forces"; priority = 1;};  
};

class CfgEditorCategories{
	class AUX_95th_Droid_Units{displayName = "[95th] CIS Forces";};
};

class CfgEditorSubcategories{
	class AUX_95th_Droid_Units_B1{displayName="B1 Battledroids";};
};

class CBA_Extended_EventHandlers_base;

class CfgVehicles {
	#include "Definitions.hpp"

	// B1 Units
	#include "Units\B1\AA.hpp"
	#include "Units\B1\AT.hpp"
	#include "Units\B1\AutoRifleman.hpp"
	#include "Units\B1\Commander.hpp"
	#include "Units\B1\Rifleman.hpp"
	#include "Units\B1\Shotgun.hpp"
	#include "Units\B1\Sniper.hpp"
};

class CfgGroups {
	class East {
		class AUX_95th_Droid_Units  {
			name = "[95th] CIS Forces";
			class AUX_95th_Droid_Units_B1 {
				name = "B1 Battledroids";
				#include "Groups\B1 Fire Team.hpp"
				#include "Groups\B1 Assault Teams.hpp"
			};
		};
	};
};

class CfgFunctions { class AUX_95th { class Objects {
	class handleB1Damage {file = "\AUX_95th_Droid_Units\Scripts\handleB1Damage.sqf";};
};};};

class Extended_PostInit_EventHandlers {
	class AUX_95th_Droid_Units_PostInit {init="call compile preprocessFileLineNumbers '\AUX_95th_Droid_Units\Init\XEH_postInit.sqf'";};
};

class Extended_PreInit_EventHandlers {
	class AUX_95th_Droid_Units_PreInit {init="call compile preprocessFileLineNumbers '\AUX_95th_Droid_Units\Init\XEH_preInit.sqf'";};
};

class ACE_Medical_Injuries {
	class damageTypes {
		class woundHandlers;
		class bullet {
			class woundHandlers: woundHandlers {
				AUX_95th_Droid_Unit_Handler = "{ call AUX_95th_fnc_handleB1Damage }";
			};
		};
	};
};