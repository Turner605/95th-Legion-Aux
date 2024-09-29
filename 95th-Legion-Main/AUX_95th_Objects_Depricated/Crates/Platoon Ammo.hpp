class AUX_95th_Crate_Platoon_Ammo : 3AS_Supply_Large_Ammo_Prop {
	displayName="[95th] Platoon Ammo Crate";
	author="95th Aux Team";
	editorCategory="AUX_95th_Objects";
	editorSubcategory="AUX_95th_Crates";
	maximumLoad=2000;

	ace_cargo_size = 4;
	ace_cargo_canLoad = 1;
	ace_cargo_noRename = 1;
	ace_cargo_blockUnloadCarry = 1;

	ace_dragging_canDrag = 1;
	ace_dragging_ignoreWeight = 1;

	ace_dragging_canCarry = 1;
	ace_dragging_ignoreWeightCarry = 1;

	#include "\AUX_95th_Vehicles_Depricated\Shared\Inventory Shared.hpp"

	//class TransportItems {}; //TODO
};