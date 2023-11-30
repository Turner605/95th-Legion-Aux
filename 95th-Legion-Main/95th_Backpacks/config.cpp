#include "Macros\Backpacks.hpp"

class CfgPatches {
	class 95th_Legion_Backpacks {
        author="95th Aux Team";
        name="95th Legion Backpacks";
		requiredAddons[]= {
			"JLTS_characters_CloneArmor",
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
				values[] = {"Turner"};
				class Turner { label = "Turner"; description = "Turners Backpack"; };
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
				values[] = {"Trooper"};
				class Trooper { label = "Trooper"; description = "Trooper Jetpack"; };
			};
		};
	};
};


class CfgVehicles {
	class JLTS_Clone_belt_bag;
	class JLTS_Clone_backpack;
	class JLTS_Clone_backpack_RTO;
	class JLTS_Clone_RTO_pack;
	class 3as_JT12;
	class 3AS_B_Katarn_Backpack;

	//###############################Backpacks###############################

	NEW_95TH_BAG_BACKPACK_VISIBLE(Trooper,95th_Backpacks,"95th Backpack")};
	NEW_95TH_BAG_BACKPACK_INVISIBLE(Trooper,95th_Backpacks,"95th Backpack")};

	NEW_95TH_BACKPACK_VISIBLE(Heavy,95th_Backpacks,"95th Backpack")};
	NEW_95TH_BACKPACK_INVISIBLE(Heavy,95th_Backpacks,"95th Backpack")};
	NEW_95TH_BACKPACK_VISIBLE(Medic,95th_Backpacks,"95th Backpack")};
	NEW_95TH_BACKPACK_INVISIBLE(Medic,95th_Backpacks,"95th Backpack")};
	NEW_95TH_BACKPACK_VISIBLE(Ordnance,95th_Backpacks,"95th Backpack")};
	NEW_95TH_BACKPACK_INVISIBLE(Ordnance,95th_Backpacks,"95th Backpack")};

	NEW_95TH_RTO_BACKPACK_VISIBLE(Medic,95th_Backpacks,"95th Backpack")};
	NEW_95TH_RTO_BACKPACK_INVISIBLE(Medic,95th_Backpacks,"95th Backpack")};
	NEW_95TH_RTO_BACKPACK_VISIBLE(RTO,95th_Backpacks,"95th Backpack")};
	NEW_95TH_RTO_BACKPACK_INVISIBLE(RTO,95th_Backpacks,"95th Backpack")};
	NEW_95TH_RTO_BACKPACK_VISIBLE_MINI(RTO,95th_Backpacks,"95th Backpack")};

	NEW_95TH_RTO_BACKPACK_VISIBLE_MINI(Turner,95th_Custom_Backpacks,"95th Custom Backpack")};
	

	//###############################Jetpacks###############################

	NEW_95TH_JETPACK_JT12(Trooper,95th_Jetpacks,"95th Jetpacks")};
	NEW_95TH_JETPACK_MC(Trooper,95th_Jetpacks,"95th Jetpacks")};


	//###############################Commando###############################

	class 95th_Katarn_Backpack: 3AS_B_Katarn_Backpack {
		displayName = "[95th] Commando Backpack";
		hiddenSelectionsTextures[] = {"\95th_Backpacks\Data\Commando_Backpack.paa"};
		maximumLoad = 250;

		tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=16000;
		tf_subtype="digital_lr";
	};

	//TO REMOVE LATER
	class 95th_Backpack_Trooper: AUX_95th_Bag_Backpack_Invisible_Trooper{displayName="DEPRICATED";};
	class 95th_Backpack_Heavy: AUX_95th_Bag_Backpack_Invisible_Trooper{displayName="DEPRICATED";};
	class 95th_Backpack_Medic: AUX_95th_Bag_Backpack_Invisible_Trooper{displayName="DEPRICATED";};
	class 95th_Backpack_EOD: AUX_95th_Bag_Backpack_Invisible_Trooper{displayName="DEPRICATED";};
	class 95th_Backpack_RTO: AUX_95th_Bag_Backpack_Invisible_Trooper{displayName="DEPRICATED";};
	class 95th_Backpack_Mini_RTO: AUX_95th_Bag_Backpack_Invisible_Trooper{displayName="DEPRICATED";};
	class 95th_JumpPack: AUX_95th_Bag_Backpack_Invisible_Trooper{displayName="DEPRICATED";};
	class 95th_JumpPack_MC: AUX_95th_Bag_Backpack_Invisible_Trooper{displayName="DEPRICATED";};
};