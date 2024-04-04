#include "Macros\P1 Basic.hpp"
#include "Macros\P1 MC.hpp"
#include "Macros\P1 Cold Assault.hpp"
#include "Macros\Commando.hpp"

class CfgPatches {
	class AUX_95th_Characters {
        author="95th Aux Team";
        name="95th Legion Characters";
		requiredAddons[]= {};
		units[] = {
			"AUX_95th_Unit_P1_Basic_Trooper",
			"AUX_95th_Unit_P1_Basic_Medic",
			"AUX_95th_Unit_P1_Basic_Senior",
			"AUX_95th_Unit_P1_Basic_Veteran",
			"AUX_95th_Unit_P1_Basic_Sergeant",
			"AUX_95th_Unit_P1_Basic_Lieutenant",

			"AUX_95th_Unit_P1_Basic_Volt",
			"AUX_95th_Unit_P1_Basic_Jinter",
			"AUX_95th_Unit_P1_Basic_Bretek",
			"AUX_95th_Unit_P1_Basic_Commie",
			"AUX_95th_Unit_P1_Basic_Smaug",
			"AUX_95th_Unit_P1_Basic_Smokery",
			"AUX_95th_Unit_P1_Basic_Manila",
			"AUX_95th_Unit_P1_Basic_Havoc",
			"AUX_95th_Unit_P1_Basic_MadHatter",
			"AUX_95th_Unit_P1_Basic_Cheezy",
			"AUX_95th_Unit_P1_Basic_Revan",
			"AUX_95th_Unit_P1_Basic_Sand",
			"AUX_95th_Unit_P1_Basic_Kev",
			"AUX_95th_Unit_P1_Basic_Sythe",
			"AUX_95th_Unit_P1_Basic_Splash",
			"AUX_95th_Unit_P1_Basic_Solvest",

			"AUX_95th_Unit_P1_Cold_Assault_Trooper",
			"AUX_95th_Unit_Commando_Trooper",

			"AUX_95th_Generic_Unit_P1_Basic_Rifleman",
			"AUX_95th_Generic_Unit_P1_Basic_Pilot",
			"AUX_95th_Generic_Unit_P1_Basic_ARF",
			"AUX_95th_Generic_Unit_P1_Basic_Airborne",
			"AUX_95th_Generic_Unit_P1_Basic_SpecOps",
			"AUX_95th_Generic_Unit_P1_Basic_Engineer",
			"AUX_95th_Generic_Unit_P1_Basic_Hazard"
		};
	};
};

class XtdGearModels {
	class CfgWeapons {
		class AUX_95th_Uniform_Squad_Basic {
			label = "Basic Uniforms";
			#include "XtdGearModels\Shared.hpp"

			class Player {
				alwaysSelectable = 0;
				labels = "Player";
				values[] = {"Trooper","Shiny", "Medic", "Senior", "Veteran", "Sergeant", "Lieutenant"};
				class Trooper { label = "Trooper"; description = "Trooper Uniform"; };
				class Shiny { label = "Shiny"; description = "Shiny Uniform"; };
				class Medic { label = "Medic"; description = "Medic Uniform"; };
				class Senior { label = "Senior"; description = "Senior Uniform"; };
				class Veteran { label = "Veteran"; description = "Veteran Uniform"; };
				class Sergeant { label = "Sergeant"; description = "Sergeant Uniform"; };
				class Lieutenant { label = "Lieutenant"; description = "Lieutenant Uniform"; };
			};
		};

		class AUX_95th_Uniform_Squad_Zeus {
			label = "Zeus Uniforms";
			#include "XtdGearModels\Shared.hpp"

			class Player {
				alwaysSelectable = 0;
				labels = "Player";
				values[] = {"Turner","Splash", "Commie", "Solvest"};
				class Turner { label = "Turner"; description = "Turner's Uniform"; };
				class Splash { label = "Splash"; description = "Splash's Uniform"; };
				class Commie { label = "Commie"; description = "Commie's Uniform"; };
				class Solvest { label = "Solvest"; description = "Solvest's Uniform"; };
			};
		};

		class AUX_95th_Uniform_Squad_Zero {
			label = "1-0 Anooba";
			#include "XtdGearModels\Shared.hpp"

			class Player {
				alwaysSelectable = 0;
				labels = "Player";
				values[] = {"Havoc","Sythe", "Cheezy"};
				class Havoc { label = "Havoc"; description = "Havoc's Uniform"; };
				class Sythe { label = "Sythe"; description = "Sythe's Uniform"; };
				class Cheezy { label = "Cheezy"; description = "Cheezy's Uniform"; };
			};
		};

		class AUX_95th_Uniform_Squad_One {
			label = "1-1 Ackley";
			#include "XtdGearModels\Shared.hpp"

			class Player {
				alwaysSelectable = 0;
				labels = "Player";
				values[] = {"Volt","Sand", "Manila", "Osprey", "Chimera", "King"};
				class Volt { label = "Volt"; description = "Volt's Uniform"; };
				class Sand { label = "Sand"; description = "Sand's Uniform"; };
				class Manila { label = "Manila"; description = "Manila's Uniform"; };
				class Osprey { label = "Osprey"; description = "Osprey's Uniform"; };
				class Chimera { label = "Chimera"; description = "Chimera's Uniform"; };
				class King { label = "King"; description = "King's Uniform"; };
			};
		};

		class AUX_95th_Uniform_Squad_Two {
			label = "1-2 Reek";
			#include "XtdGearModels\Shared.hpp"

			class Player {
				alwaysSelectable = 0;
				labels = "Player";
				values[] = {"Hypo", "Neary", "Smokery","Kev", "Titan", "Smaug"};
				class Hypo { label = "Hypo"; description = "Hypo's Uniform"; };
				class Neary { label = "Neary"; description = "Neary's Uniform"; };
				class Smokery { label = "Smokery"; description = "Smokery's Uniform"; };
				class Kev { label = "Kev"; description = "Kev's Uniform"; };
				class Titan { label = "Titan"; description = "Titan's Uniform"; };
				class Smaug { label = "Smaug"; description = "Smaug's Uniform"; };
			};
		};

		class AUX_95th_Uniform_Squad_Three {
			label = "1-3 Krayt";
			#include "XtdGearModels\Shared.hpp"

			class Player {
				alwaysSelectable = 0;
				labels = "Player";
				values[] = {"Foley", "Prophet", "Mobius", "Taylor", "Stitch"};
				class Foley { label = "Foley"; description = "Foley's Uniform"; };
				class Prophet { label = "Prophet"; description = "Prophet's Uniform"; };
				class Mobius { label = "Mobius"; description = "Mobius' Uniform"; };
				class Taylor { label = "Taylor"; description = "Taylor's Uniform"; };
				class Stitch { label = "Stitch"; description = "Stitch's Uniform"; };
			};
		};

		class AUX_95th_Uniform_Squad_Four {
			label = "1-4 Sarlacc";
			#include "XtdGearModels\Shared.hpp"

			class Player {
				alwaysSelectable = 0;
				labels = "Player";
				values[] = {"Bretek", "Dilanza", "Third", "MadHatter", "Ratler"};
				class Bretek { label = "Bretek"; description = "Bretek's Uniform"; };
				class Dilanza { label = "Dilanza"; description = "Dilanza's Uniform"; };
				class Third { label = "Third"; description = "Third's Uniform"; };
				class MadHatter { label = "Mad Hatter"; description = "Mad Hatter's Uniform"; };
				class Ratler { label = "Ratler"; description = "Ratler's Uniform"; };
			};
		};

		class AUX_95th_Uniform_Squad_Five {
			label = "5-0 Zillo";
			#include "XtdGearModels\Shared.hpp"

			class Player {
				alwaysSelectable = 0;
				labels = "Player";
				values[] = {"Kong", "Revan", "Hazard"};
				class Kong { label = "Kong"; description = "Kong's Uniform"; };
				class Revan { label = "Revan"; description = "Revan's Uniform"; };
				class Hazard { label = "Hazard"; description = "Hazard's Uniform"; };
			};
		};

		class AUX_95th_Uniform_Squad_Six {
			label = "6-0 Mynock";
			#include "XtdGearModels\Shared.hpp"

			class Player {
				alwaysSelectable = 0;
				labels = "Player";
				values[] = {"Outcast", "Jinter"};
				class Outcast { label = "Outcast"; description = "Outcast's Uniform"; };
			};
		};

		class AUX_95th_Uniform_Squad_Fallen {
			label = "The Fallen";
			#include "XtdGearModels\Shared.hpp"

			class Player {
				alwaysSelectable = 0;
				labels = "Player";
				values[] = {"Ghost", "Som", "Jinter"};
				class Ghost { label = "Ghost"; description = "Ghost's Uniform"; };
				class Som { label = "Som"; description = "Som's Uniform"; };
				class Jinter { label = "Jinter"; description = "Jinter's Uniform"; };
			};
		};

		class AUX_95th_Uniform_Squad_Unassigned {
			label = "Unassigned";
			#include "XtdGearModels\Shared.hpp"

			class Player {
				alwaysSelectable = 0;
				labels = "Player";
				values[] = {"Biedronka"};
				class Biedronka { label = "Biedronka"; description = "Biedronka Uniform"; };
			};
		};
	};
};

class CfgFactionClasses { 
    class AUX_95th_Legion_Faction_Clones {displayName = "[95th] Clones";  priority = 1; side = 1;};  
};

class CfgEditorSubcategories {
	class AUX_95th_Legion_Characters_Category_Squad_Zeus{displayName="Zeus Units";};
	class AUX_95th_Legion_Characters_Category_Squad_Basic{displayName="Basic Units";};
	class AUX_95th_Legion_Characters_Category_Squad_Zero{displayName="1-0 Units";};
	class AUX_95th_Legion_Characters_Category_Squad_One{displayName="1-1 Units";};
	class AUX_95th_Legion_Characters_Category_Squad_Two{displayName="1-2 Units";};
	class AUX_95th_Legion_Characters_Category_Squad_Three{displayName="1-3 Units";};
	class AUX_95th_Legion_Characters_Category_Squad_Four{displayName="1-4 Units";};
	class AUX_95th_Legion_Characters_Category_Squad_Five{displayName="5-0 Units";};
	class AUX_95th_Legion_Characters_Category_Squad_Six{displayName="6-0 Units";};
	class AUX_95th_Legion_Characters_Category_Squad_Fallen{displayName="Fallen Units";};
	class AUX_95th_Legion_Characters_Category_Squad_Unassigned{displayName="Unassigned Units";};
	class AUX_95th_Legion_Characters_Category_Squad_Generic{displayName="Generic Units";};
};

class CfgWeapons {
	class InventoryItem_Base_F;
    class ItemCore;
    class UniformItem;
    class Uniform_Base: ItemCore { class ItemInfo; };
    class U_I_CombatUniform;
	class 3AS_U_Rep_ColdAssault_Armor;
	class 3AS_U_Rep_Katarn_Armor;

	#include "Config\CfgWeapons.hpp"
};

class CfgVehicles {
	class JLTS_Clone_P2_DC15A;
	class 3AS_Rep_ColdAssault_base_F;
	class 3AS_Rep_Commando_F;

	#include "Config\CfgVehicles.hpp"
};
