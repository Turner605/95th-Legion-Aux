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

class XtdGearModels {
	class CfgWeapons {
		class AUX_95th_Helmet_Squad_Basic {
			label = "Basic Helmets";
			#include "XtdGearModels\Shared.hpp"

			class Player {
				alwaysSelectable = 0;
				labels = "Player";
				values[] = {"Trooper","Shiny", "Medic", "Senior", "Veteran"};
				class Trooper { label = "Trooper"; description = "Trooper Helmet"; };
				class Shiny { label = "Shiny"; description = "Shiny Helmet"; };
				class Medic { label = "Medic"; description = "Medic Helmet"; };
				class Senior { label = "Senior"; description = "Senior Helmet"; };
				class Veteran { label = "Veteran"; description = "Veteran Helmet"; };
			};
		};

		class AUX_95th_Helmet_Squad_Zeus {
			label = "Zeus Helmets";
			#include "XtdGearModels\Shared.hpp"

			class Player {
				alwaysSelectable = 0;
				labels = "Player";
				values[] = {"Turner","Splash", "Commie", "Solvest"};
				class Turner { label = "Turner"; description = "Turner's Helmet"; };
				class Splash { label = "Splash"; description = "Splash's Helmet"; };
				class Commie { label = "Commie"; description = "Commie's Helmet"; };
				class Solvest { label = "Solvest"; description = "Solvest's Helmet"; };
			};
		};

		class AUX_95th_Helmet_Squad_Zero {
			label = "1-0 Anooba";
			#include "XtdGearModels\Shared.hpp"

			class Player {
				alwaysSelectable = 0;
				labels = "Player";
				values[] = {"Havoc","Sythe", "Cheezy"};
				class Havoc { label = "Havoc"; description = "Havoc's Helmet"; };
				class Sythe { label = "Sythe"; description = "Sythe's Helmet"; };
				class Cheezy { label = "Cheezy"; description = "Cheezy's Helmet"; };
			};
		};

		class AUX_95th_Helmet_Squad_One {
			label = "1-1 Ackley";
			#include "XtdGearModels\Shared.hpp"

			class Player {
				alwaysSelectable = 0;
				labels = "Player";
				values[] = {"Volt","Sand", "Manila", "Osprey", "Chimera", "King"};
				class Volt { label = "Volt"; description = "Volt's Helmet"; };
				class Sand { label = "Sand"; description = "Sand's Helmet"; };
				class Manila { label = "Manila"; description = "Manila's Helmet"; };
				class Osprey { label = "Osprey"; description = "Osprey's Helmet"; };
				class Chimera { label = "Chimera"; description = "Chimera's Helmet"; };
				class King { label = "King"; description = "King's Helmet"; };
			};
		};

		class AUX_95th_Helmet_Squad_Two {
			label = "1-2 Reek";
			#include "XtdGearModels\Shared.hpp"

			class Player {
				alwaysSelectable = 0;
				labels = "Player";
				values[] = {"Hypo", "Neary", "Smokery","Kev", "Titan", "Smaug"};
				class Hypo { label = "Hypo"; description = "Hypo's Helmet"; };
				class Neary { label = "Neary"; description = "Neary's Helmet"; };
				class Smokery { label = "Smokery"; description = "Smokery's Helmet"; };
				class Kev { label = "Kev"; description = "Kev's Helmet"; };
				class Titan { label = "Titan"; description = "Titan's Helmet"; };
				class Smaug { label = "Smaug"; description = "Smaug's Helmet"; };
			};
		};

		class AUX_95th_Helmet_Squad_Three {
			label = "1-3 Krayt";
			#include "XtdGearModels\Shared.hpp"

			class Player {
				alwaysSelectable = 0;
				labels = "Player";
				values[] = {"Foley", "Prophet", "Mobius", "Taylor", "Stitch"};
				class Foley { label = "Foley"; description = "Foley's Helmet"; };
				class Prophet { label = "Prophet"; description = "Prophet's Helmet"; };
				class Mobius { label = "Mobius"; description = "Mobius' Helmet"; };
				class Taylor { label = "Taylor"; description = "Taylor's Helmet"; };
				class Stitch { label = "Stitch"; description = "Stitch's Helmet"; };
			};
		};

		class AUX_95th_Helmet_Squad_Four {
			label = "1-4 Sarlacc";
			#include "XtdGearModels\Shared.hpp"

			class Player {
				alwaysSelectable = 0;
				labels = "Player";
				values[] = {"Bretek", "Dilanza", "Third", "MadHatter", "Ratler"};
				class Bretek { label = "Bretek"; description = "Bretek's Helmet"; };
				class Dilanza { label = "Dilanza"; description = "Dilanza's Helmet"; };
				class Third { label = "Third"; description = "Third's Helmet"; };
				class MadHatter { label = "Mad Hatter"; description = "Mad Hatter's Helmet"; };
				class Ratler { label = "Ratler"; description = "Ratler's Helmet"; };
			};
		};

		class AUX_95th_Helmet_Squad_Five {
			label = "5-0 Zillo";
			#include "XtdGearModels\Shared.hpp"

			class Player {
				alwaysSelectable = 0;
				labels = "Player";
				values[] = {"Kong", "Revan", "Hazard"};
				class Kong { label = "Kong"; description = "Kong's Helmet"; };
				class Revan { label = "Revan"; description = "Revan's Helmet"; };
				class Hazard { label = "Hazard"; description = "Hazard's Helmet"; };
			};
		};

		class AUX_95th_Helmet_Squad_Six {
			label = "6-0 Mynock";
			#include "XtdGearModels\Shared.hpp"

			class Player {
				alwaysSelectable = 0;
				labels = "Player";
				values[] = {"Outcast", "Edge"};
				class Outcast { label = "Outcast"; description = "Outcast's Helmet"; };
				class Edge { label = "Edge"; description = "Edge's Helmet"; };
			};
		};

		class AUX_95th_Helmet_Squad_Fallen {
			label = "The Fallen";
			#include "XtdGearModels\Shared.hpp"

			class Player {
				alwaysSelectable = 0;
				labels = "Player";
				values[] = {"Ghost", "Som", "Jinter"};
				class Ghost { label = "Ghost"; description = "Ghost's Helmet"; };
				class Som { label = "Som"; description = "Som's Helmet"; };
				class Jinter { label = "Jinter"; description = "Jinter's Helmet"; };
			};
		};

		class AUX_95th_Helmet_Squad_Unassigned {
			label = "Unassigned";
			#include "XtdGearModels\Shared.hpp"

			class Player {
				alwaysSelectable = 0;
				labels = "Player";
				values[] = {"Biedronka"};
				class Biedronka { label = "Biedronka"; description = "Biedronka Helmet"; };
			};
		};
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