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
			"AUX_95th_Air_Unit_Vulture",
			"AUX_95th_Air_Unit_Vulture_AA",
			"AUX_95th_Air_Unit_Vulture_CAS",
			"AUX_95th_Air_Unit_Tri_Fighter",
			"AUX_95th_Air_Unit_Dropship",
			"AUX_95th_Air_Unit_Gunship",
			"AUX_95th_Air_Unit_Gunship_Transport",

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

			"AUX_95th_Tank_Unit_AAT",
			"AUX_95th_Tank_Unit_AAT_Winter",
			"AUX_95th_Tank_Unit_AAT_Desert",
			"AUX_95th_Tank_Unit_AAT_Arid",
			"AUX_95th_Tank_Unit_AAT_Heavy",
			"AUX_95th_Tank_Unit_N99",
			"AUX_95th_Tank_Unit_DSD",
			"AUX_95th_Tank_Unit_MTT",
			"AUX_95th_Tank_Unit_Hailfire_AT",
			"AUX_95th_Tank_Unit_Hailfire_SAM",
			"AUX_95th_Tank_Unit_Artillery",
			"AUX_95th_Tank_Unit_GAT",
			"AUX_95th_Tank_Unit_GAT_Light",

			"AUX_95th_Droid_Turret_Roof_Turret",
			"AUX_95th_Droid_Turret_Roof_Turret_Shotgun",
			"AUX_95th_Droid_Turret_Ball",
			"AUX_95th_Droid_Radar_Jammer_Turret",
			"AUX_95th_Droid_Microwave_Emitter_Turret",
			"AUX_95th_Droid_Droideka_Turret",
			"AUX_95th_Droid_Droideka_Sniper_Turret",

			"AUX_95th_CIS_Disguised_Trooper",
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

	// Air Units
	#include "Units\Air Units\Gunships.hpp"
	#include "Units\Air Units\Tri Fighter.hpp"
	#include "Units\Air Units\Vultures.hpp"
	#include "Units\Air Units\Dropship.hpp"

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
	#include "Units\Tanks\AATs.hpp"
	#include "Units\Tanks\N99.hpp"
	#include "Units\Tanks\MTT.hpp"
	#include "Units\Tanks\DSD.hpp"
	#include "Units\Tanks\Hailfire.hpp"
	#include "Units\Tanks\GAT.hpp"

	// Turrets
	#include "Units\Turrets\Roof Turret Blaster.hpp"
	#include "Units\Turrets\Roof Turret Shotgun.hpp"
	#include "Units\Turrets\Turret Ball.hpp"
	#include "Units\Turrets\Radar Jammer.hpp"
	#include "Units\Turrets\Microwave Emitter.hpp"
	#include "Units\Turrets\Droideka.hpp"
	#include "Units\Turrets\Droideka Sniper.hpp"

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

	//############################################################### Commando Units ###############################################################
	class AUX_95th_CIS_Disguised_Trooper: AUX_95th_Unit_P1_Basic_Trooper {
		displayName="[95th] Disguised BX Trooper";
		author="95th Aux Team";
		DSS_Is_Disguised_As_Bluefor=1;\
		faction="AUX_95th_CIS";
		editorCategory="AUX_95th_CIS_Forces";
		editorSubcategory="AUX_95th_CIS_Forces_Droids_BX";
		uniformClass="AUX_95th_Uniform_P1_Basic_Trooper";
        side = 0;
		scope=2; 
		scopecurator=2;
		editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_AB.jpg"; //todo: change me
		linkedItems[]={"AUX_95th_Helmet_P1_Basic_Trooper","95th_Basic_Vest_Rifleman","JLTS_Clone_radio","ItemGPS","ItemMap","ItemWatch","ItemCompass"};
		respawnLinkedItems[]={"AUX_95th_Helmet_P1_Basic_Trooper","95th_Basic_Vest_Rifleman","JLTS_Clone_radio","ItemGPS","ItemMap","ItemWatch","ItemCompass"};
		nakedUniform = "lsd_cis_bxDroid_uniform";
		identityTypes[] = {"Head_LSD_BX"};
		allowedFacewear[] = {
			"Facewear_Empty_HUD_ARFAntenna_95th", 0.2,
			"Facewear_Empty_HUD_Headlamps_95th", 1,
			"Facewear_Empty_Headlamp_95th", 1,
			"Facewear_Poncho_Empty_Green_95th", 0.1,
			"Facewear_Scarf_Empty_Brown_95th", 0.1,
			"Facewear_Scarf_Empty_Black_95th", 0.1,
			"", 1
		};
		headgearList[] = {
			"AUX_95th_Helmet_P1_Basic_Trooper", 0.9,
			"AUX_95th_Helmet_P2_Airborne_Trooper", 0,
			"AUX_95th_Helmet_P1_ARF_Trooper", 0.6,
			"AUX_95th_Helmet_P1_Engineer_Trooper", 0.6,
			"AUX_95th_Helmet_P1_SpecOps_Trooper", 0.6
		};
		class EventHandlers {
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
			init = "if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; };";
		};
	};
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