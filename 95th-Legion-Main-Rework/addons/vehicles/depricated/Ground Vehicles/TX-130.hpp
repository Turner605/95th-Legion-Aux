class AUX_95th_TX_130 : 3as_saber_m1 {
	author="95th Aux Team"; 
	displayname="TX-130";
	AUX_95th_Strafing_Available=1;
	crew = "AUX_95th_Unit_P1_Basic_Trooper"; 
	faction="AUX_95th_Legion_Faction_Vehicles";
	editorSubcategory="AUX_95th_Legion_Vehicles_Category_Ground_Heavy";
	hiddenSelectionsTextures[]={
		"\z\AUX_95th\addons\vehicles\depricated\data\Saber\Hull.paa", 
		"\z\AUX_95th\addons\vehicles\depricated\data\Saber\Weapons.paa"
	};
	class ACE_Cargo {class Cargo {class track {type = "ACE_Track"; amount = 2;};};}; 
	ace_cargo_space = 26;
	#include "\z\AUX_95th\addons\main\inventories\vehicleInventory.hpp"
};