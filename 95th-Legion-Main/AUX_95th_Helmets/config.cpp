#include "Macros\P1 Basic.hpp"
#include "Macros\Airborne.hpp"
#include "Macros\ARF.hpp"
#include "Macros\Engineer.hpp"
#include "Macros\P1 Pilot.hpp"

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
			options[] = {"Type", "Player"};

			class Type {
				alwaysSelectable = 1;
				labels = "Type";
				values[] = {"P1Basic","Airborne","ARF","Engineer","P1Pilot"};
				class P1Basic { label = "P1 Basic"; description = "Basic P1 Helmet"; };
				class Airborne { label = "Airborne"; description = "Airborne Helmet"; };
				class ARF { label = "ARF"; description = "ARF Helmet"; };
				class Engineer { label = "Engineer"; description = "Engineer Helmet"; };
				class P1Pilot { label = "P1 Pilot"; description = "P1 Pilot Helmet"; };
			};

			class Player {
				alwaysSelectable = 0;
				labels = "Player";
				values[] = {"Trooper","Shiny","Medic","Senior","Veteran","Outcast","Turner","Splash","Volt",
				"Biedronka","Manila","Sand","Havoc","Bretek","Neary","Smaug","Commie","Hypo","Ghost","Prophet",
				"Smokery","Som","Solvest","Ratler","MadHatter", "Third", "Stitch", "Taylor", "Hazard", "Foley",
				 "Chimera", "Dilanza", "Osprey", "Sythe", "Cheezy", "Mobius", "Revan", "Kong"};
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
				class Dilanza { label = "Dilanza"; description = "Dilanza's Helmet"; };
				class Osprey { label = "Osprey"; description = "Osprey's Helmet"; };
				class Sythe { label = "Sythe"; description = "Sythe's Helmet"; };
				class Cheezy { label = "Cheezy"; description = "Cheezy's Helmet"; };
				class Mobius { label = "Mobius"; description = "Mobius' Helmet"; };
				class Revan { label = "Revan"; description = "Revan's Helmet"; };
				class Kong { label = "Kong"; description = "Kong's Helmet"; };
				class Jinter { label = "Jinter"; description = "Jinter's Helmet"; };
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
}; 