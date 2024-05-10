class AUX_95th_ATTE : 3AS_ATTE_Base {
	displayname = "AT-TE";
	author = "95th Aux Team";
	crew = "AUX_95th_Generic_Unit_P1_Basic_Rifleman"; 
	faction="AUX_95th_Legion_Faction_Vehicles";
	editorSubcategory="AUX_95th_Legion_Vehicles_Category_Ground_Heavy";
	#include "\AUX_95th_Vehicles\Shared\Inventory Shared.hpp"
	class ACE_Cargo {class Cargo {class track {type = "ACE_Track"; amount = 2;};};}; 
	ace_cargo_space = 26;
	hiddenSelectionsTextures[]={
		"\AUX_95th_Vehicles\Data\ATTE\Default\Shell.paa", 
		"\AUX_95th_Vehicles\Data\ATTE\Default\Cockpit.paa", 
		"\AUX_95th_Vehicles\Data\ATTE\Default\Detail.paa", 
		"\AUX_95th_Vehicles\Data\ATTE\Default\Legs.paa", 
		"\AUX_95th_Vehicles\Data\ATTE\Default\Glass.paa", 
		"\AUX_95th_Vehicles\Data\ATTE\Default\Armor.paa"
	};
	class TextureSources {
		textureList[] = {"Default",1,"Kong",0};
		NEW_95TH_ATTE_TEXTURE(Default)};
		NEW_95TH_ATTE_TEXTURE(Kong)};
	};
};
