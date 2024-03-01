#include "Macros\P1Basic.hpp"
#include "Macros\Airborne.hpp"
#include "Macros\ARF.hpp"
#include "Macros\Engineer.hpp"

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
		class AUX_95th_Helmet {
			label = "";
			author = "95th Aux Team";
			options[] = {"Type", "Squad", "Player"};

			class Type {
				alwaysSelectable = 1;
				labels = "Type";
				values[] = {"P1Basic","Airborne","ARF","Engineer"};
				class P1Basic { label = "P1 Basic"; description = "Basic P1 Helmet"; };
				class Airborne { label = "Airborne"; description = "Airborne Helmet"; };
				class ARF { label = "ARF"; description = "ARF Helmet"; };
				class Engineer { label = "Engineer"; description = "Engineer Helmet"; };
			};

			class Squad {
				alwaysSelectable = 1;
				labels = "Squad";
				values[] = {"Basic", "One", "Two", "Three", "Four", "Five", "Six", "Unassigned", "Fallen"};
				class Basic { label = "Basic"; description = "Default Helmets"; };
				class Zeus { label = "Zeus"; description = "Zeus Helmets"; };
				class Zero { label = "1-0"; description = "1-0 Anooba"; };
				class One { label = "1-1"; description = "1-1 Ackley"; };
				class Two { label = "1-2"; description = "1-2 Reek"; };
				class Three { label = "1-3"; description = "1-3 Krayt"; };
				class Four { label = "1-4"; description = "1-4 Sarlacc"; };
				class Five { label = "5-0"; description = "5-0 Zillo"; };
				class Six { label = "6-0"; description = "6-0 Mynock"; };
				class Unassigned { label = "Unassigned"; description = "Unassigned"; };
				class Fallen { label = "Fallen"; description = "The Fallen"; };
			};

			class Player {
				alwaysSelectable = 0;
				labels = "Player";
				values[] = {"Trooper","Shiny","Medic","Senior","Veteran","Outcast","Turner","Splash","Volt","Biedronka","Manila","Sand","Havoc","Bretek","Neary","Smaug","Commie","Hypo","Ghost","Prophet","Smokery","Som","Solvest","Ratler","MadHatter", "Third", "Stitch", "Taylor", "Hazard", "Foley", "Chimera"};
				class Trooper { label = "Trooper"; description = "Trooper Helmet"; };
				class Shiny { label = "Shiny"; description = "Shiny Helmet"; };
				class Medic { label = "Medic"; description = "Medic Helmet"; };
				class Senior { label = "Senior"; description = "Senior Helmet"; };
				class Veteran { label = "Veteran"; description = "Veteran Helmet"; };
				class Outcast { label = "Outcast"; description = "Outcast's Helmet"; };
				class Turner { label = "Turner"; description = "Turner's Helmet"; };
				class Splash { label = "Splash"; description = "Splash's Helmet"; };
				class Volt { label = "Volt"; description = "Volt's Helmet"; };
				class Biedronka { label = "Biedronka"; description = "Biedronka Helmet"; };
				class Manila { label = "Manila"; description = "Manila's Helmet"; };
				class Sand { label = "Sand"; description = "Sand's Helmet"; };
				class Havoc { label = "Havoc"; description = "Havoc's Helmet"; };
				class Bretek { label = "Bretek"; description = "Bretek's Helmet"; };
				class Neary { label = "Neary"; description = "Neary's Helmet"; };
				class Smaug { label = "Smaug"; description = "Smaug's Helmet"; };
				class Commie { label = "Commie"; description = "Commie's Helmet"; };
				class Hypo { label = "Hypo"; description = "Hypo's Helmet"; };
				class Ghost { label = "Ghost"; description = "Ghost's Helmet"; };
				class Prophet { label = "Prophet"; description = "Prophet's Helmet"; };
				class Smokery { label = "Smokery"; description = "Smokery's Helmet"; };
				class Som { label = "Som"; description = "Som's Helmet"; };
				class Solvest { label = "Solvest"; description = "Solvest's Helmet"; };
				class Ratler { label = "Ratler"; description = "Ratler's Helmet"; };
				class MadHatter { label = "Mad Hatter"; description = "Mad Hatter's Helmet"; };
				class Third { label = "Third"; description = "Third's Helmet"; };
				class Stitch { label = "Stitch"; description = "Stitch's Helmet"; };
				class Taylor { label = "Taylor"; description = "Taylor's Helmet"; };
				class Hazard { label = "Hazard"; description = "Hazard's Helmet"; };
				class Foley { label = "Foley"; description = "Foley's Helmet"; };
				class Chimera { label = "Chimera"; description = "Chimera's Helmet"; };
			};
		};
	};
};

class CfgWeapons { 
	#include "Definitions.hpp"

	#include "Config\P1Basic.hpp"
	#include "Config\Airborne.hpp"
	#include "Config\ARF.hpp"
	#include "Config\Engineer.hpp"
}; 