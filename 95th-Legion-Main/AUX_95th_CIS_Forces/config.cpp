// Potential Special Units:
// Shield Droid (Moving unit with an attached squad type shield)


// TODO:
// ls_turret_pirate_autoturret
// ls_turret_pirate_autoturretCQC
// JLTS_UST_turret_CIS
// JLTS_UAV_prowler_cis

// JLTS_Droid_B1_Prototype ???


class CfgPatches {
	class AUX_95th_CIS_Forces {
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
			"AUX_95th_Droid_B1_Unit_Sniper",
			"AUX_95th_Droid_B1_Unit_Crew",

			"AUX_95th_Droid_B1_Rocket_Unit_Rifleman",

			"AUX_95th_Droid_B2_Unit_Blaster",
			"AUX_95th_Droid_B2_Unit_GL",
			"AUX_95th_Droid_B2_Unit_Shotgun"
		};
	};
};

class CfgFactionClasses {
    class AUX_95th_CIS {displayName = "[95th] CIS Forces"; priority = 1;};  
    class AUX_95th_CIS_Humanitarian {displayName = "[95th] CIS Humanitarian"; priority = 1;};  
};

class CfgEditorCategories {
	class AUX_95th_CIS_Forces{displayName = "[95th] CIS Forces";};
};

class CfgEditorSubcategories {
	class AUX_95th_CIS_Forces_Droids_B1{displayName="B1 Battledroids (Standard)";};
	class AUX_95th_CIS_Forces_Droids_B1_Rocket{displayName="B1 Battledroids (Rocket)";};
	class AUX_95th_CIS_Forces_Droids_B2{displayName="B2 Battledroids";};
	class AUX_95th_CIS_Forces_Droids_Commando { displayName="Commandos"; };
	class AUX_95th_CIS_Forces_Humans { displayName="Humans"; };
	class AUX_95th_CIS_Forces_CivilServices { displayName="Civil Services"; };
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
	#include "Units\B1\Crew.hpp"

	// B1 Rocket Units
	#include "Units\B1 Rocket\Rifleman.hpp"

	// B2 Units
	#include "Units\B2\Blaster.hpp"
	#include "Units\B2\GL.hpp"
	#include "Units\B2\Shotgun.hpp"
};

class CfgGroups {
	class East {
		class AUX_95th_CIS_Forces  {
			name = "[95th] CIS Forces";
			class AUX_95th_CIS_Forces_Droids_B1 {
				name = "B1 Battledroids (Standard)";
				#include "Groups\B1 Fire Team.hpp"
				#include "Groups\B1 Assault Teams.hpp"
			};

			class AUX_95th_CIS_Forces_Droids_B1_Rocket {
				name = "B1 Battledroids (Rocket)";
				#include "Groups\B1 Rocket\Fire Team.hpp"
			};
		};
	};
};

class CfgFunctions { class AUX_95th { class CIS_Forces {
	class handleB1Damage {file = "\AUX_95th_CIS_Forces\Scripts\handleB1Damage.sqf";};
};};};

class Extended_PostInit_EventHandlers {
	class AUX_95th_CIS_Forces_PostInit {init="call compile preprocessFileLineNumbers '\AUX_95th_CIS_Forces\Init\XEH_postInit.sqf'";};
};

class Extended_PreInit_EventHandlers {
	class AUX_95th_CIS_Forces_PreInit {init="call compile preprocessFileLineNumbers '\AUX_95th_CIS_Forces\Init\XEH_preInit.sqf'";};
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