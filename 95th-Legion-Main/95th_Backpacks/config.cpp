#include "Macros\Backpacks.hpp"

class CfgPatches {
	class 95th_Legion_Backpacks {
        author="95th Aux Team";
        name="95th Legion Backpacks";
		requiredAddons[]= {
			"JLTS_characters_CloneArmor",
			"WBK_PhoenixTreal_FlamethrowerMOD",
			"3as_Backpacks"
		};
		units[] = {};
	};
};

class XtdGearModels {
	class CfgVehicles {

		//###############################Backpacks###############################
		class 95th_Backpacks {
			label = "";
			author = "95th Aux Team";
			options[] = {"Role", "Visibility", "Type", "Size"};
			class Role {
				labels = "Role";
				alwaysSelectable = 1;
				values[] = {"Trooper", "Heavy", "Medic", "RTO", "Ordnance"};
				class Trooper { label = "Trooper"; description = "Trooper Belt Bag"; };
				class Heavy { label = "Heavy"; description = "Heavy Backpack"; };
				class Medic { label = "Medic"; description = "Medic Backpack"; };
				class RTO { label = "RTO"; description = "RTO Backpack"; };
				class Ordnance { label = "Ordnance"; description = "Ordnance Backpack"; };
			};

			class Visibility {
				labels = "Visibility";
				values[] = {"Shown", "Hidden"};
				class Shown { label = "Shown"; description = "Visible Backpack"; };
				class Hidden { label = "Hidden"; description = "Invisible Backpack"; };
			};

			class Type {
				labels = "Type";
				values[] = {"Normal", "RTO"};
				class Normal { label = "Normal"; description = "Normal Backpack"; };
				class RTO { label = "RTO"; description = "RTO Backpack"; };
			};

			class Size {
				labels = "Size";
				values[] = {"Normal", "Mini"};
				class Normal { label = "Normal"; description = "Normal Backpack"; };
				class Mini { label = "Mini"; description = "Mini Backpack"; };
			};
		};

		class 95th_Custom_Backpacks {
			label = "";
			author = "95th Aux Team";
			options[] = {"Role", "Visibility", "Type", "Size"};
			class Role {
				labels = "Role";
				alwaysSelectable = 1;
				values[] = {"Turner", "Stitch", "Pendragon", "Gridlock", "Titan", "Bretek", "Smaug", "Gear", "Galvin", "Kev", "Blue"};
				class Turner { label = "Turner"; description = "Turners Backpack"; };
				class Stitch { label = "Stitch"; description = "Stitch's Backpack"; };
				class Pendragon { label = "Pendragon"; description = "Pendragon's Backpack"; };
				class Gridlock { label = "Gridlock"; description = "Gridlock's Backpack"; };
				class Titan { label = "Titan"; description = "Titan's Backpack"; };
				class Bretek { label = "Bretek"; description = "Bretek's Backpack"; };
				class Smaug { label = "Smaug"; description = "Smaug's Backpack"; };
				class Gear { label = "Gear"; description = "Gear's Backpack"; };
				class Galvin { label = "Galvin"; description = "Galvin's Backpack"; };
				class Kev { label = "Kev"; description = "Kev's Backpack"; };
				class Blue { label = "Blue"; description = "Blue's Backpack"; };
			};

			class Visibility {
				labels = "Visibility";
				values[] = {"Shown", "Hidden"};
				class Shown { label = "Shown"; description = "Visible Backpack"; };
				class Hidden { label = "Hidden"; description = "Invisible Backpack"; };
			};

			class Type {
				labels = "Type";
				values[] = {"Normal", "RTO"};
				class Normal { label = "Normal"; description = "Normal Backpack"; };
				class RTO { label = "RTO"; description = "RTO Backpack"; };
			};

			class Size {
				labels = "Size";
				values[] = {"Normal", "Mini"};
				class Normal { label = "Normal"; description = "Normal Backpack"; };
				class Mini { label = "Mini"; description = "Mini Backpack"; };
			};
		};


		//###############################Jetpacks###############################
		class 95th_Jetpacks {
			label = "";
			author = "95th Aux Team";
			options[] = {"Variant", "Role"};

			class Variant {
				labels = "Variant";
				alwaysSelectable = 1;
				values[] = {"JT12", "MC"};
				class JT12 { label = "JT12"; description = "JT12 Variant"; };
				class MC { label = "MC"; description = "Marshal Commander Variant"; };
			};

			class Role {
				labels = "Role";
				values[] = {"Trooper", "Medic"};
				class Trooper { label = "Trooper"; description = "Trooper Jetpack"; };
				class Medic { label = "Medic"; description = "Medic Jetpack"; };
			};
		};

		class 95th_Custom_Jetpacks {
			label = "";
			author = "95th Aux Team";
			options[] = {"Variant", "Role"};

			class Variant {
				labels = "Variant";
				alwaysSelectable = 1;
				values[] = {"JT12", "MC"};
				class JT12 { label = "JT12"; description = "JT12 Variant"; };
				class MC { label = "MC"; description = "Marshal Commander Variant"; };
			};

			class Role {
				labels = "Role";
				values[] = {"Turner", "Stitch"};
				class Turner { label = "Turner"; description = "Turner Jetpack"; };
				class Stitch { label = "Stitch"; description = "Stitch Jetpack"; };
			};
		};
	};
};

class CfgVehicles {
	class JLTS_Clone_backpack;

    class AUX_95th_Backpack_Depricated : JLTS_Clone_backpack {
		scope=2;
        author="95th Aux Team";
        displayName="DEPRICATED"; 
	    maximumLoad=500;
        hiddenSelectionsTextures[]={
            "\z\AUX_95th\addons\players\shared\data\MissingTexture.paa"
        };
    };

	//###############################Backpacks###############################

	NEW_95TH_BAG_BACKPACK_VISIBLE(Trooper,95th_Backpacks,"95th Backpack",150)};
	NEW_95TH_BAG_BACKPACK_INVISIBLE(Trooper,95th_Backpacks,"95th Backpack",150)};

	NEW_95TH_BACKPACK_VISIBLE(Heavy,95th_Backpacks,"95th Backpack",300)};
	NEW_95TH_BACKPACK_INVISIBLE(Heavy,95th_Backpacks,"95th Backpack",300)};
	NEW_95TH_BACKPACK_VISIBLE(Medic,95th_Backpacks,"95th Backpack",400)};
	NEW_95TH_BACKPACK_INVISIBLE(Medic,95th_Backpacks,"95th Backpack",400)};
	NEW_95TH_BACKPACK_VISIBLE(Ordnance,95th_Backpacks,"95th Backpack",400)};
	NEW_95TH_BACKPACK_INVISIBLE(Ordnance,95th_Backpacks,"95th Backpack",400)};

	NEW_95TH_RTO_BACKPACK_VISIBLE(Medic,95th_Backpacks,"95th Backpack",400)};
	NEW_95TH_RTO_BACKPACK_INVISIBLE(Medic,95th_Backpacks,"95th Backpack",400)};
	NEW_95TH_RTO_BACKPACK_VISIBLE(RTO,95th_Backpacks,"95th Backpack",150)};
	NEW_95TH_RTO_BACKPACK_INVISIBLE(RTO,95th_Backpacks,"95th Backpack",150)};
	NEW_95TH_RTO_BACKPACK_VISIBLE_MINI(RTO,95th_Backpacks,"95th Backpack",150)};

	NEW_95TH_RTO_BACKPACK_VISIBLE_MINI(Turner,95th_Custom_Backpacks,"95th Custom Backpack",400)};

	NEW_95TH_BACKPACK_VISIBLE(Stitch,95th_Custom_Backpacks,"95th Custom Backpack",400)};
	NEW_95TH_RTO_BACKPACK_VISIBLE(Stitch,95th_Custom_Backpacks,"95th Custom Backpack",400)};

	NEW_95TH_BACKPACK_VISIBLE(Pendragon,95th_Custom_Backpacks,"95th Custom Backpack",400)};
	NEW_95TH_RTO_BACKPACK_VISIBLE(Pendragon,95th_Custom_Backpacks,"95th Custom Backpack",400)};

	NEW_95TH_BACKPACK_VISIBLE(Gridlock,95th_Custom_Backpacks,"95th Custom Backpack",400)};
	NEW_95TH_RTO_BACKPACK_VISIBLE(Gridlock,95th_Custom_Backpacks,"95th Custom Backpack",400)};

	NEW_95TH_BACKPACK_VISIBLE(Titan,95th_Custom_Backpacks,"95th Custom Backpack",400)};
	NEW_95TH_RTO_BACKPACK_VISIBLE(Titan,95th_Custom_Backpacks,"95th Custom Backpack",400)};

	NEW_95TH_BACKPACK_VISIBLE(Bretek,95th_Custom_Backpacks,"95th Custom Backpack",400)};
	NEW_95TH_RTO_BACKPACK_VISIBLE(Bretek,95th_Custom_Backpacks,"95th Custom Backpack",400)};

	NEW_95TH_BACKPACK_VISIBLE(Smaug,95th_Custom_Backpacks,"95th Custom Backpack",400)};
	NEW_95TH_RTO_BACKPACK_VISIBLE(Smaug,95th_Custom_Backpacks,"95th Custom Backpack",400)};

	NEW_95TH_BACKPACK_VISIBLE(Gear,95th_Custom_Backpacks,"95th Custom Backpack",400)};
	NEW_95TH_RTO_BACKPACK_VISIBLE(Gear,95th_Custom_Backpacks,"95th Custom Backpack",400)};

	NEW_95TH_BACKPACK_VISIBLE(Galvin,95th_Custom_Backpacks,"95th Custom Backpack",400)};
	NEW_95TH_RTO_BACKPACK_VISIBLE(Galvin,95th_Custom_Backpacks,"95th Custom Backpack",400)};

	NEW_95TH_BACKPACK_VISIBLE(Kev,95th_Custom_Backpacks,"95th Custom Backpack",400)};
	NEW_95TH_RTO_BACKPACK_VISIBLE(Kev,95th_Custom_Backpacks,"95th Custom Backpack",400)};

	NEW_95TH_BACKPACK_VISIBLE(Blue,95th_Custom_Backpacks,"95th Custom Backpack",400)};
	NEW_95TH_RTO_BACKPACK_VISIBLE(Blue,95th_Custom_Backpacks,"95th Custom Backpack",400)};

	//###############################Jetpacks###############################

	NEW_95TH_JETPACK_JT12(Trooper,95th_Jetpacks,"95th Jetpacks",150)};
	NEW_95TH_JETPACK_JT12(Medic,95th_Jetpacks,"95th Jetpacks",150)};
	NEW_95TH_JETPACK_JT12(Stitch,95th_Custom_Jetpacks,"95th Custom Jetpacks",400)};

	NEW_95TH_JETPACK_MC(Trooper,95th_Jetpacks,"95th Jetpacks",150)};
	NEW_95TH_JETPACK_MC(Turner,95th_Custom_Jetpacks,"95th Custom Jetpacks",400)};


	//###############################Depricated###############################
	class 95th_Katarn_Backpack: AUX_95th_Backpack_Depricated {};
};