#include "Macros\Rifleman Units.hpp"
#include "Macros\Commando Units.hpp"
#include "Macros\MC Units.hpp"
#include "Macros\Pilot Units.hpp"
#include "Macros\Airborne Units.hpp"
#include "Macros\ARF Units.hpp"
#include "Macros\ARC Units.hpp"
#include "Macros\SpecOps Units.hpp"
#include "Macros\ColdAssault Units.hpp"
#include "Macros\Engineer Units.hpp"
#include "Macros\Hazard Units.hpp"

class CfgPatches {
    class 95th_P1_Units {
        author="95th Aux Team";
		scope=0;
		scopecurator=0;
        name="95th Legion Units";
        requiredAddons[] = {
			"JLTS_characters_CloneArmor",
			"SEA_JLTS_ExtendedArsenal"
		};
		units[] = {
			"95th_Rifleman_Unit_Trooper",
			"95th_Rifleman_Unit_Medic",
			"95th_Rifleman_Unit_Senior",
			"95th_Rifleman_Unit_Veteran",
			"95th_Rifleman_Unit_Sergeant",
			"95th_Rifleman_Unit_Captain",
			"95th_Rifleman_Unit_Lieutenant",
			"95th_Rifleman_Unit_Volt",
			"95th_Rifleman_Unit_Bretek",
			"95th_Rifleman_Unit_Commie",

			"95th_MC_Unit_Zeus",
			"95th_MC_Unit_Turner",

			"95th_Pilot_Unit_Trooper",
			"95th_Pilot_Unit_Jinter",
			"95th_Pilot_Unit_Outcast",

			"95th_Airborne_Unit_Trooper",
			"95th_Airborne_Unit_Sergeant",
			"95th_Airborne_Unit_Captain",
			"95th_Airborne_Unit_Lieutenant",

			"95th_ARF_Unit_Trooper",
			"95th_ARF_Unit_Sergeant",
			"95th_ARF_Unit_Captain",
			"95th_ARF_Unit_Lieutenant",

			"95th_ColdAssault_Unit_Trooper",
			"95th_Engineer_Unit_Trooper",
			"95th_Hazard_Unit_Trooper",
			"95th_SpecOps_Unit_Trooper"
		};
    };
};

class cfgFactionClasses {
    class 95th_Legion_Faction_Clones {
        displayName = "[95th] Clones";
		scope=2;
		scopecurator=2;
        priority = 1;
        side = 1;
    };

    class 95th_Legion_Faction_Misc  {
        displayName = "[95th] Misc";
		scope=2;
		scopecurator=2;
        priority = 1;
        side = 1;
    };
};

class CfgEditorSubcategories {
	class 95th_Rifleman{displayName="Rifleman";};
	class 95th_MC{displayName="Commanders";};
	class 95th_Pilots{displayName="Pilots";};
	class 95th_Airborne{displayName="Airborne";};
	class 95th_ARF{displayName="ARF";};
	class 95th_ARC{displayName="ARC";};
	class 95th_ColdAssault{displayName="Cold Assault";};
	class 95th_Engineer{displayName="Engineer";};
	class 95th_Hazard{displayName="Hazard";};
	class 95th_SpecOps{displayName="Spec Ops";};
	class 95th_Commando{displayName="Commandos";};
};

class XtdGearModels {
	class CfgWeapons {
		class 95th_P1_Basic_Uniform {
			label = "";
			author = "95th Aux Team";
			options[] = {"Type"};
			class Type {
				alwaysSelectable = 1;
				labels = "Type";
				values[] = {"Trooper","Shiny","Medic","Senior","Veteran","Sergeant","Captain","Lieutenant"};
				class Trooper { label = "Trooper"; description = "Default Uniform"; };
				class Shiny { label = "Shiny"; description = "Shiny Uniform"; };
				class Medic { label = "Medic"; description = "Medic Uniform"; };
				class Senior { label = "Senior"; description = "Senior Uniform"; };
				class Veteran { label = "Veteran"; description = "Veteran Uniform"; };
				class Sergeant { label = "Sergeant"; description = "Sergeant Uniform"; };
				class Captain { label = "Captain"; description = "Captain Uniform"; };
				class Lieutenant { label = "Lieutenant"; description = "Lieutenant Uniform"; };
			};
		};

		class 95th_P1_Custom_Uniform {
			label = "";
			author = "95th Aux Team";
			options[] = {"Type"};
			class Type {
				alwaysSelectable = 1;
				labels = "Type";
				values[] = {"Volt","Jinter","Bretek","Commie","Smaug","Smokery","Manila","Havoc"};
				class Volt { label = "Volt"; description = "Volt's Uniform"; };
				class Jinter { label = "Jinter"; description = "Jinter's Uniform"; };
				class Bretek { label = "Bretek"; description = "Bretek's Uniform"; };
				class Commie { label = "Commie"; description = "Commie's Uniform"; };
				class Smaug { label = "Smaug"; description = "Smaug's Uniform"; };
				class Smokery { label = "Smokery"; description = "Smokery's Uniform"; };
				class Manila { label = "Manila"; description = "Manila's Uniform"; };
				class Havoc { label = "Havoc"; description = "Havoc's Uniform"; };
			};
		};

		class 95th_MC_Uniform {
			label = "";
			author = "95th Aux Team";
			options[] = {"Type"};
			class Type {
				alwaysSelectable = 1;
				labels = "Type";
				values[] = {"Zeus", "Turner"};
				class Zeus { label = "Zeus"; description = "Default Uniform"; };
				class Turner { label = "Turner"; description = "Turners Uniform"; };
			};
		};

		class 95th_ColdAssault_Uniform {
			label = "";
			author = "95th Aux Team";
			options[] = {"Type"};
			class Type {
				alwaysSelectable = 1;
				labels = "Type";
				values[] = {"Trooper"};
				class Trooper { label = "Trooper"; description = "Default Uniform"; };
			};
		};

		class 95th_Commando_Uniform {
			label = "";
			author = "95th Aux Team";
			options[] = {"Type"};
			class Type {
				alwaysSelectable = 1;
				labels = "Type";
				values[] = {"Trooper"};
				class Trooper { label = "Trooper"; description = "Default Uniform"; };
			};
		};

		class 95th_P1_Pilot_Helmet {
			label = "";
			author = "95th Aux Team";
			options[] = {"Type"};
			class Type {
				alwaysSelectable = 1;
				labels = "Type";
				values[] = {"Trooper","Jinter","Outcast"};
				class Trooper { label = "Trooper"; description = "Trooper Helmet"; };
				class Jinter { label = "Jinter"; description = "Jinter's Helmet"; };
				class Outcast { label = "Outcast"; description = "Outcast's Helmet"; };
			};
		};

		class 95th_ARC_Helmet {
			label = "";
			author = "95th Aux Team";
			options[] = {"Type"};
			class Type {
				alwaysSelectable = 1;
				labels = "Type";
				values[] = {"Trooper"};
				class Trooper { label = "Trooper"; description = "Trooper Helmet"; };
			};
		};

		class 95th_ColdAssault_Helmet {
			label = "";
			author = "95th Aux Team";
			options[] = {"Type"};
			class Type {
				alwaysSelectable = 1;
				labels = "Type";
				values[] = {"Trooper"};
				class Trooper { label = "Trooper"; description = "Trooper Helmet"; };
			};
		};

		class 95th_Hazard_Helmet {
			label = "";
			author = "95th Aux Team";
			options[] = {"Type"};
			class Type {
				alwaysSelectable = 1;
				labels = "Type";
				values[] = {"Trooper"};
				class Trooper { label = "Trooper"; description = "Trooper Helmet"; };
			};
		};

		class 95th_SpecOps_Helmet {
			label = "";
			author = "95th Aux Team";
			options[] = {"Type"};
			class Type {
				alwaysSelectable = 1;
				labels = "Type";
				values[] = {"Trooper", "Dilanza"};
				class Trooper { label = "Trooper"; description = "Trooper Helmet"; };
			};
		};

		class 95th_Commando_Helmet {
			label = "";
			author = "95th Aux Team";
			options[] = {"Type"};
			class Type {
				alwaysSelectable = 1;
				labels = "Type";
				values[] = {"Trooper"};
				class Trooper { label = "Trooper"; description = "Trooper Helmet"; };
			};
		};
	};
};

class cfgWeapons {
	class InventoryItem_Base_F;
    class ItemCore;
    class UniformItem;
    class Uniform_Base: ItemCore { class ItemInfo; };
    class U_I_CombatUniform;

	class 3AS_U_Rep_ColdAssault_Armor;
	class 3AS_U_Rep_Katarn_Armor;

	class SEA_Helmet_P1_Base;
	class LSEA_Helmet_Pilot_P1_Base;
	class lsd_gar_airborne_new;
	class SEA_Helmet_ARF_base;
	class SEA_Helmet_ARC;
	class SEA_Helmet_SpecOps_SR_Base;
	class SEA_Helmet_Engineer_Base;
	class SEA_Helmet_Hazard_Base;
	class 3AS_H_ColdAssault_Helmet;
	class 3AS_H_Katarn_Helmet;

//############################################################### Uniforms ###############################################################
	NEW_95TH_P1_UNIFORM(Trooper,Trooper)};
	NEW_95TH_P1_UNIFORM(Shiny,Shiny)};
	NEW_95TH_P1_UNIFORM(Medic,Medic)};
	NEW_95TH_P1_UNIFORM(Senior,Senior)};
	NEW_95TH_P1_UNIFORM(Veteran,Veteran)};
	NEW_95TH_P1_UNIFORM(Sergeant,Sergeant)};
	NEW_95TH_P1_UNIFORM(Captain,Captain)};
	NEW_95TH_P1_UNIFORM(Lieutenant,Lieutenant)};

	NEW_95TH_CUSTOM_P1_UNIFORM(Volt,Volt)};
	NEW_95TH_CUSTOM_P1_UNIFORM(Jinter,Jinter)};
	NEW_95TH_CUSTOM_P1_UNIFORM(Bretek,Bretek)};
	NEW_95TH_CUSTOM_P1_UNIFORM(Commie,Commie)};
	NEW_95TH_CUSTOM_P1_UNIFORM(Smaug,Smaug)};
	NEW_95TH_CUSTOM_P1_UNIFORM(Smokery,Smokery)};
	NEW_95TH_CUSTOM_P1_UNIFORM(Manila,Manila)};
	NEW_95TH_CUSTOM_P1_UNIFORM(Havoc,Havoc)};

	NEW_95TH_MC_UNIFORM(Zeus,Zeus)};
	NEW_95TH_MC_UNIFORM(Turner,Turner)};

	NEW_95TH_COLDASSAULT_UNIFORM(Trooper,Trooper)};

	NEW_95TH_COMMANDO_UNIFORM(Trooper,Trooper)};

//############################################################### Helmets ###############################################################
	NEW_95TH_P1_PILOT_HELMET(Trooper)};
	NEW_95TH_P1_PILOT_HELMET(Jinter)};
	NEW_95TH_P1_PILOT_HELMET(Outcast)};

	NEW_95TH_ARC_HELMET(Trooper)};

	NEW_95TH_SPECOPS_HELMET(Trooper)};
	NEW_95TH_SPECOPS_HELMET(Dilanza)};

	NEW_95TH_HAZARD_HELMET(Trooper)};

	NEW_95TH_COLDASSAULT_HELMET(Trooper)};

	NEW_95TH_COMMANDO_HELMET(Trooper)};
};

class CfgVehicles {
	class JLTS_Clone_P2_DC15A;
	class 3AS_Rep_ColdAssault_base_F;
	class 3AS_Rep_Commando_F;

	//############################################################### Units ###############################################################
	// Uniform Class Name, Helmet Name, Vest Name
	NEW_95TH_RIFLEMAN_UNIT(Trooper,Trooper,Trooper)};
	NEW_95TH_RIFLEMAN_UNIT(Shiny,Shiny,Trooper)};
	NEW_95TH_RIFLEMAN_UNIT(Medic,Trooper,Trooper)};
	NEW_95TH_RIFLEMAN_UNIT(Senior,Senior,Trooper)};
	NEW_95TH_RIFLEMAN_UNIT(Veteran,Veteran,Veteran)};
	NEW_95TH_RIFLEMAN_UNIT(Sergeant,Veteran,Sergeant)};
	NEW_95TH_RIFLEMAN_UNIT(Captain,Veteran,Captain)};
	NEW_95TH_RIFLEMAN_UNIT(Lieutenant,Veteran,Lieutenant)};
	NEW_95TH_RIFLEMAN_UNIT(Volt,Volt,Sergeant)};
	NEW_95TH_RIFLEMAN_UNIT(Jinter,Trooper,Sergeant)};
	NEW_95TH_RIFLEMAN_UNIT(Bretek,Bretek,Sergeant)};
	NEW_95TH_RIFLEMAN_UNIT(Commie,Commie,Zeus)};
	NEW_95TH_RIFLEMAN_UNIT(Smaug,Smaug,Zeus)};
	NEW_95TH_RIFLEMAN_UNIT(Smokery,Smokery,Zeus)};
	NEW_95TH_RIFLEMAN_UNIT(Manila,Manila,Zeus)};
	NEW_95TH_RIFLEMAN_UNIT(Havoc,Havoc,Zeus)};

	// Uniform Class Name, Helmet Name, Vest Name
	NEW_95TH_MC_UNIT(Zeus,Veteran,Zeus)};
	NEW_95TH_MC_UNIT(Turner,Turner,Zeus)};

	// Uniform Class Name, Helmet Name, Vest Name
	NEW_95TH_PILOT_UNIT(Trooper,Trooper,Trooper)};
	NEW_95TH_PILOT_UNIT(Senior,Trooper,Trooper)};
	NEW_95TH_PILOT_UNIT(Veteran,Trooper,Veteran)};
	NEW_95TH_PILOT_UNIT(Sergeant,Trooper,Sergeant)};

	// Uniform Class Name, Helmet Name, Vest Name
	NEW_95TH_AIRBORNE_UNIT(Trooper,Trooper,Trooper)};
	NEW_95TH_AIRBORNE_UNIT(Sergeant,Trooper,Sergeant)};
	NEW_95TH_AIRBORNE_UNIT(Captain,Trooper,Captain)};
	NEW_95TH_AIRBORNE_UNIT(Lieutenant,Trooper,Lieutenant)};

	// Uniform Class Name, Helmet Name, Vest Name
	NEW_95TH_ARF_UNIT(Trooper,Trooper,Trooper)};
	NEW_95TH_ARF_UNIT(Sergeant,Trooper,Sergeant)};
	NEW_95TH_ARF_UNIT(Captain,Trooper,Captain)};
	NEW_95TH_ARF_UNIT(Lieutenant,Trooper,Lieutenant)};

	// Uniform Class Name, Helmet Name, Vest Name
	NEW_95TH_ARC_UNIT(Trooper,Trooper,ARC)};

	// Uniform Class Name, Helmet Name, Vest Name
	NEW_95TH_SPECOPS_UNIT(Trooper,Trooper,Trooper)};

	// Uniform Class Name, Helmet Name, Vest Name
	NEW_95TH_ENGINEER_UNIT(Trooper,Trooper,Trooper)};

	// Uniform Class Name, Helmet Name, Vest Name
	NEW_95TH_HAZARD_UNIT(Trooper,Trooper,Trooper)};

	// Uniform Class Name, Helmet Name, Vest Name
	NEW_95TH_COLDASSAULT_UNIT(Trooper,Trooper,Trooper)};

	// Uniform Class Name, Helmet Name, Vest Name
	NEW_95TH_COMMANDO_UNIT(Trooper,Trooper,Trooper)};
};