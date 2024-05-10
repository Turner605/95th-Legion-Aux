class AUX_95th_TX_130 : 3as_saber_m1 {
	author="95th Aux Team"; 
	displayname="TX-130";
	crew = "AUX_95th_Generic_Unit_P1_Basic_Rifleman"; 
	faction="AUX_95th_Legion_Faction_Vehicles";
	editorSubcategory="AUX_95th_Legion_Vehicles_Category_Ground_Heavy";
	hiddenSelectionsTextures[]={
		"\AUX_95th_Vehicles\Data\Saber\Hull.paa", 
		"\AUX_95th_Vehicles\Data\Saber\Weapons.paa"
	};
	class ACE_Cargo {class Cargo {class track {type = "ACE_Track"; amount = 2;};};}; 
	ace_cargo_space = 26;
	#include "\AUX_95th_Vehicles\Shared\Inventory Shared.hpp"
};