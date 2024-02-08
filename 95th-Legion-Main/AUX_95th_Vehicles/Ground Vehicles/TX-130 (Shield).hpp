class AUX_95th_TX_130_Shield : 3as_saber_m1Recon {
	author="95th Aux Team"; 
	displayname="TX-130 (Shield)";
	crew = "95th_Rifleman_Unit_Trooper"; 
	faction="AUX_95th_Legion_Faction_Vehicles";
	editorSubcategory="AUX_95th_Legion_Vehicles_Category_Ground_Heavy";
	hiddenSelectionsTextures[]={
		"\AUX_95th_Vehicles\Data\Saber\Hull.paa", 
		"\AUX_95th_Vehicles\Data\Saber\Weapons.paa"
	};
	class ACE_Cargo {class Cargo {class track {type = "ACE_Track"; amount = 2;};};}; 
	ace_cargo_space = 26;
	class UserActions {
		class ToggleTXShield {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Toggle Shield";
			statement = "[this, player] spawn AUX_95th_fnc_handleToggleTXShield;"; 
		};
	};
	#include "\AUX_95th_Vehicles\Shared\Inventory Shared.hpp"
};