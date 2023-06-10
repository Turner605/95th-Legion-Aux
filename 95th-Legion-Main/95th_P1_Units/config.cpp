#include "Macros\Rifleman Units.hpp"
#include "Macros\MC Units.hpp"

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

			"95th_MC_Unit_Zeus",
			"95th_MC_Unit_Turner"
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
				values[] = {"Trooper","Medic","Senior","Veteran","Sergeant","Captain","Lieutenant"};
				class Trooper { label = "Trooper"; description = "Default Uniform"; };
				class Medic { label = "Medic"; description = "Medic Uniform"; };
				class Senior { label = "Senior"; description = "Senior Uniform"; };
				class Veteran { label = "Veteran"; description = "Veteran Uniform"; };
				class Sergeant { label = "Sergeant"; description = "Sergeant Uniform"; };
				class Captain { label = "Captain"; description = "Captain Uniform"; };
				class Lieutenant { label = "Lieutenant"; description = "Lieutenant Uniform"; };
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

		class 95th_P1_Helmet {
			label = "";
			author = "95th Aux Team";
			options[] = {"Type"};
			class Type {
				alwaysSelectable = 1;
				labels = "Type";
				values[] = {"Trooper","Medic","Senior","Veteran","Outcast","Turner","Splash","Volt","Biedronka","Manila","Sand","Havoc"};
				class Trooper { label = "Trooper"; description = "Trooper Helmet"; };
				class Medic { label = "Medic"; description = "Medic Helmet"; };
				class Senior { label = "Senior"; description = "Senior Helmet"; };
				class Veteran { label = "Veteran"; description = "Veteran Helmet"; };
				class Outcast { label = "Outcast"; description = "Outcasts Helmet"; };
				class Turner { label = "Turner"; description = "Turners Helmet"; };
				class Splash { label = "Splash"; description = "Splashs Helmet"; };
				class Volt { label = "Volt"; description = "Volts Helmet"; };
				class Biedronka { label = "Biedronka"; description = "Biedronka Helmet"; };
				class Manila { label = "Manila"; description = "Manila Helmet"; };
				class Sand { label = "Sand"; description = "Sands Helmet"; };
				class Havoc { label = "Havoc"; description = "Havocs Helmet"; };
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

	class SEA_Helmet_P1_Base;

//############################################################### Uniforms ###############################################################
	NEW_95TH_P1_UNIFORM(Trooper,Trooper)};
	NEW_95TH_P1_UNIFORM(Medic,Medic)};
	NEW_95TH_P1_UNIFORM(Senior,Senior)};
	NEW_95TH_P1_UNIFORM(Veteran,Veteran)};
	NEW_95TH_P1_UNIFORM(Sergeant,Sergeant)};
	NEW_95TH_P1_UNIFORM(Captain,Captain)};
	NEW_95TH_P1_UNIFORM(Lieutenant,Lieutenant)};

	NEW_95TH_MC_UNIFORM(Zeus,Zeus)};
	NEW_95TH_MC_UNIFORM(Turner,Turner)};

//############################################################### Helmets ###############################################################
	NEW_95TH_P1_HELMET(Trooper)};
	NEW_95TH_P1_HELMET(Medic)};
	NEW_95TH_P1_HELMET(Senior)};
	NEW_95TH_P1_HELMET(Veteran)};
	NEW_95TH_P1_HELMET(Outcast)};
	NEW_95TH_P1_HELMET(Turner)};
	NEW_95TH_P1_HELMET(Splash)};
	NEW_95TH_P1_HELMET(Volt)};
	NEW_95TH_P1_HELMET(Biedronka)};
	NEW_95TH_P1_HELMET(Manila)};
	NEW_95TH_P1_HELMET(Sand)};
	NEW_95TH_P1_HELMET(Havoc)};
};  

class CfgVehicles {
	class JLTS_Clone_P2_DC15A;

//############################################################### Units ###############################################################
	// Uniform Class Name, Helmet Name, Vest Name
	NEW_95TH_RIFLEMAN_UNIT(Trooper,Trooper,Trooper)};
	NEW_95TH_RIFLEMAN_UNIT(Medic,Trooper,Trooper)};
	NEW_95TH_RIFLEMAN_UNIT(Senior,Senior,Trooper)};
	NEW_95TH_RIFLEMAN_UNIT(Veteran,Veteran,Veteran)};
	NEW_95TH_RIFLEMAN_UNIT(Sergeant,Veteran,Sergeant)};
	NEW_95TH_RIFLEMAN_UNIT(Captain,Veteran,Captain)};
	NEW_95TH_RIFLEMAN_UNIT(Lieutenant,Veteran,Lieutenant)};

	// Uniform Class Name, Helmet Name, Vest Name
	NEW_95TH_MC_UNIT(Zeus,Veteran,Zeus)};
	NEW_95TH_MC_UNIT(Turner,Turner,Zeus)};
};