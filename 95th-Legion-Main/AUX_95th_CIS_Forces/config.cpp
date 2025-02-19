// Potential Special Units:
// Shield Droid (Moving unit with an attached squad type shield)


// TODO:
// JLTS_UAV_prowler_cis

// JLTS_Droid_B1_Prototype ???
#include "Macros\Commando Units.hpp"
#include "Macros\B1 Units.hpp"

class CfgPatches {
	class AUX_95th_CIS_Forces {
        author="95th Aux Team";
        name="AUX 95th Droid Units";
		requiredAddons[]={"A3_Characters_F", "JLTS_characters_DroidUnits", "AUX_95th_voicelines"};
		units[]={
			"AUX_95th_Air_Unit_Tri_Fighter",

			"AUX_95th_Droid_B1_Unit_AA",
			"AUX_95th_Droid_B1_Unit_AT",
			"AUX_95th_Droid_B1_Unit_AutoRifleman",
			"AUX_95th_Droid_B1_Unit_Commander",
			"AUX_95th_Droid_B1_Unit_Rifleman",
			"AUX_95th_Droid_B1_Unit_Shotgun",
			"AUX_95th_Droid_B1_Unit_Sniper",
			"AUX_95th_Droid_B1_Unit_Crew",

			"AUX_95th_Droid_B1_Rocket_Unit_Rifleman",
			"AUX_95th_Droid_B1_Rocket_Unit_AT",

			"AUX_95th_Droid_B2_Unit_Blaster",
			"AUX_95th_Droid_B2_Unit_GL",
			"AUX_95th_Droid_B2_Unit_Shotgun",

			"AUX_95th_Human_Unit_Riot",

			"AUX_95th_Tank_Unit_N99",
			"AUX_95th_Tank_Unit_DSD",
			"AUX_95th_Tank_Unit_MTT",
			"AUX_95th_Tank_Unit_Hailfire_AT",
			"AUX_95th_Tank_Unit_Hailfire_SAM",
			"AUX_95th_Tank_Unit_Artillery",
			"AUX_95th_Tank_Unit_GAT",
			"AUX_95th_Tank_Unit_GAT_Light",

			"AUX_95th_Independent_B1_Unit_Diplomat", 
			"AUX_95th_Independent_B1_Unit_Firefighter", 
			"AUX_95th_Independent_B1_Unit_Medic", 
			"AUX_95th_Independent_B1_Unit_Police"
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
	class AUX_95th_CIS_Forces_Air_Units { displayName="Air Units"; };
	class AUX_95th_CIS_Forces_Droids_BX{displayName="BX Commandos";};
	class AUX_95th_CIS_Forces_Droids_B1{displayName="B1 Battledroids (Standard)";};
	class AUX_95th_CIS_Forces_Droids_B1_Rocket{displayName="B1 Battledroids (Rocket)";};
	class AUX_95th_CIS_Forces_Droids_B2{displayName="B2 Battledroids";};
	class AUX_95th_CIS_Forces_Droids_Turrets{displayName="Turrets";};
	class AUX_95th_CIS_Forces_Droids_Commando { displayName="Commandos"; };
	class AUX_95th_CIS_Forces_Humans { displayName="Humans"; };
	class AUX_95th_CIS_Forces_Tanks { displayName="Tanks"; };
	class AUX_95th_CIS_Forces_CivilServices { displayName="Civil Services"; };
};

class CBA_Extended_EventHandlers_base;

class CfgWeapons {
    class ItemCore;
    class UniformItem;
    class Uniform_Base: ItemCore { class ItemInfo; };

	class JLTS_DroidB1;

	class JLTS_E5_shield;
	class JLTS_E5_shield_attached : JLTS_E5_shield {
		scope = 1;
		class LinkedItems {
			class LinkedItemsUnder {
				slot = "UnderBarrelSlot";
				item = "JLTS_riot_shield_droid_attachment";
			};
		};
	};

	//############################################################### B1 Uniforms ###############################################################
	NEW_95TH_INDEPENDENT_B1_UNIFORM(Diplomat);
	NEW_95TH_INDEPENDENT_B1_UNIFORM(Firefighter);
	NEW_95TH_INDEPENDENT_B1_UNIFORM(Medic);
	NEW_95TH_INDEPENDENT_B1_UNIFORM(Police);
};

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
	#include "Units\B1 Rocket\AT.hpp"

	// B2 Units
	#include "Units\B2\Blaster.hpp"
	#include "Units\B2\GL.hpp"
	#include "Units\B2\Shotgun.hpp"

	// Humans
	#include "Units\Humans\Riot.hpp"

	// Tanks
	#include "Units\Tanks\Hailfire.hpp"

	//############################################################### B1 Units ###############################################################
	NEW_95TH_INDEPENDENT_B1_UNIT(Diplomat,Diplomat);
	NEW_95TH_INDEPENDENT_B1_UNIT(Firefighter,Firefighter);
	NEW_95TH_INDEPENDENT_B1_UNIT(Medic,Medic);
	NEW_95TH_INDEPENDENT_B1_UNIT(Police,Police);

	//############################################################### B1 Backpacks ###############################################################
	NEW_95TH_INDEPENDENT_B1_BACKPACK(Diplomat);
	NEW_95TH_INDEPENDENT_B1_BACKPACK(Firefighter);
	NEW_95TH_INDEPENDENT_B1_BACKPACK(Medic);
	NEW_95TH_INDEPENDENT_B1_BACKPACK(Police);

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
	class B2Init {file = "\AUX_95th_CIS_Forces\Init\B2Init.sqf";};

	class B1Init {file = "\AUX_95th_CIS_Forces\Init\B1Init.sqf";};

	class handleB1RocketFallDamage {file = "\AUX_95th_CIS_Forces\Scripts\B1\handleB1RocketFallDamage.sqf";};

	class checkCanShield {file = "\AUX_95th_CIS_Forces\Scripts\Personal Shield\checkCanShield.sqf";};
	class handlePersonalShield {file = "\AUX_95th_CIS_Forces\Scripts\Personal Shield\handlePersonalShield.sqf";};

	class radarJammerInit {file = "\AUX_95th_CIS_Forces\Init\radarJammerInit.sqf";};
};};};

class Extended_InitPost_EventHandlers {
	class AUX_95th_Droid_B1_Rocket_Unit_Rifleman {class AUX_95th_Droid_B1_Rocket_Unit_Rifleman_Init {onRespawn="true"; serverInit="[_this select 0] call AUX_95th_fnc_B1Init;";};};
		
	class AUX_95th_Droid_B2_Unit_Blaster {class AUX_95th_Droid_B2_Unit_Blaster_Init {onRespawn="true"; serverInit="[_this select 0] call AUX_95th_fnc_B2Init;";};};
	class AUX_95th_Droid_B2_Unit_GL {class AUX_95th_Droid_B2_Unit_GL_Init {onRespawn="true"; serverInit="[_this select 0] call AUX_95th_fnc_B2Init;";};};
	class AUX_95th_Droid_B2_Unit_Shotgun {class AUX_95th_Droid_B2_Unit_Shotgun_Init {onRespawn="true"; serverInit="[_this select 0] call AUX_95th_fnc_B2Init;";};};

	class AUX_95th_Droid_Radar_Jammer_Turret {class AUX_95th_Droid_Radar_Jammer_Turret_Init {onRespawn="true"; serverInit="[_this select 0, 6000] call AUX_95th_fnc_radarJammerInit;";};};
};

class Extended_PostInit_EventHandlers {
	class AUX_95th_CIS_Forces_PostInit {init="call compile preprocessFileLineNumbers '\AUX_95th_CIS_Forces\Init\XEH_postInit.sqf'";};
};

class Extended_PreInit_EventHandlers {
	class AUX_95th_CIS_Forces_PreInit {init="call compile preprocessFileLineNumbers '\AUX_95th_CIS_Forces\Init\XEH_preInit.sqf'";};
};

class ACE_Medical_Injuries {
	class damageTypes {
		class woundHandlers;
		class falling {
			class woundHandlers: woundHandlers {
				AUX_95th_Droid_Unit_Commando_Handler = "{ call AUX_95th_fnc_handleCommandoFallDamage }";
				AUX_95th_Droid_Unit_B1_Rocket_Handler = "{ call AUX_95th_fnc_handleB1RocketFallDamage }";
			};
		};

		class collision {
			class woundHandlers: woundHandlers {
				AUX_95th_Droid_Unit_B1_Rocket_Handler = "{ call AUX_95th_fnc_handleB1RocketFallDamage }";
			};
		};
	};
};

class CfgUserActions {
	class AUX_95th_Commando_Jump {
		displayName = "Commando Jump"; tooltip = "Jump with the BX Commandos";
		onActivate = "[player] spawn AUX_95th_fnc_handleCommandoJump"; modifierBlocking = 1;
	};

	class AUX_95th_Personal_Shield {
		displayName = "Personal Shield"; tooltip = "Activate the Personal Shield";
		onActivate = "[player] spawn AUX_95th_fnc_handlePersonalShield"; modifierBlocking = 1;
	};
};

class CfgDefaultKeysPresets {
	class Arma2 {
		class Mappings {
			AUX_95th_Commando_Jump[] = {0x1D130004};
			AUX_95th_Personal_Shield[] = {0x1D130004};
		};
	};
};

class UserActionGroups {
	class AUX_95th_CIS_Units {
		name = "95th - CIS";
		isAddon = 1;
		group[] = {"AUX_95th_Commando_Jump", "AUX_95th_Personal_Shield"};
	};
};