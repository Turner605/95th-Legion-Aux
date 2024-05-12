#include "Macros\Officers.hpp"

class CfgPatches {
	class AUX_95th_Vests {
        author="95th Aux Team";
        name="95th Legion Vests";
		requiredAddons[]= {};
		units[] = {};
	};
};

class XtdGearModels {
	class CfgWeapons {
		class AUX_95th_Kama_Vests {
			label = "";
			author = "95th Aux Team";
			options[] = {"Type"};
			class Type {
				alwaysSelectable = 1;
				labels = "Type";
				values[] = {"Trooper", "Turner", "Taun", "Hypo", "Bretek", "Volt", "Stitch", "Lisek", "Styx", "Sand"};
				class Trooper { label = "Trooper"; description = "Default Kama Vest"; };
				class Turner { label = "Turner"; description = "Turner's Vest"; };
				class Taun { label = "Taun"; description = "Taun's Vest"; };
				class Hypo { label = "Hypo"; description = "Hypo's Vest"; };
				class Bretek { label = "Bretek"; description = "Bretek's Vest"; };
				class Volt { label = "Volt"; description = "Volt's Vest"; };
				class Stitch { label = "Stitch"; description = "Stitch's Vest"; };
				class Lisek { label = "Lisek"; description = "Lisek's Vest"; };
				class Styx { label = "Styx"; description = "Styx's Vest"; };
				class Sand { label = "Sand"; description = "Sand's Vest"; };
			};
		};

		class AUX_95th_Sergeant_Vests {
			label = "";
			author = "95th Aux Team";
			options[] = {"Type"};
			class Type {
				alwaysSelectable = 1;
				labels = "Type";
				values[] = {"Trooper", "Turner", "Hypo", "Bretek", "Volt", "Sand"};
				class Trooper { label = "Trooper"; description = "Default Sergeant Vest"; };
				class Turner { label = "Turner"; description = "Turner's Vest"; };
				class Hypo { label = "Hypo"; description = "Hypo's Vest"; };
				class Bretek { label = "Bretek"; description = "Bretek's Vest"; };
				class Volt { label = "Volt"; description = "Volt's Vest"; };
				class Sand { label = "Sand"; description = "Sand's Vest"; };
			};
		};

		class AUX_95th_Lieutenant_Vests {
			label = "";
			author = "95th Aux Team";
			options[] = {"Type"};
			class Type {
				alwaysSelectable = 1;
				labels = "Type";
				values[] = {"Trooper", "Havoc", "Outcast"};
				class Trooper { label = "Trooper"; description = "Default Lieutenant Vest"; };
				class Havoc { label = "Havoc"; description = "Havoc's Vest"; };
				class Outcast { label = "Outcast"; description = "Outcast's Vest"; };
			};
		};

		class AUX_95th_CIO_Vests {
			label = "";
			author = "95th Aux Team";
			options[] = {"Type"};
			class Type {
				alwaysSelectable = 1;
				labels = "Type";
				values[] = {"Trooper", "Turner", "Outcast"};
				class Trooper { label = "Trooper"; description = "Default Zeus Vest"; };
				class Turner { label = "Turner"; description = "Turner's Vest"; };
				class Outcast { label = "Outcast"; description = "Outcast's Vest"; };
			};
		};
	};
};

class CfgWeapons {
	#include "Definitions.hpp"

	#include "Config\Officers.hpp"
};