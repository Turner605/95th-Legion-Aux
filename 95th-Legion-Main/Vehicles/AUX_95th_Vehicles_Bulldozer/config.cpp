class CfgPatches {
	class AUX_95th_Vehicles_Bulldozer {
		author = "95th Legion";
		name = "AUX 95th Vehicles Bulldozer";
		requiredAddons[] = {"A3_Soft_F", "AUX_95th_Vehicles_Shared"};
		weapons[] = {};
		units[] = {"AUX_95th_Vehicles_Bulldozer"};
		magazines[] = {};
	};
};

class CfgVehicles {
	class C_IDAP_UGV_01_F;

	class AUX_95th_Vehicles_Bulldozer: C_IDAP_UGV_01_F {
		displayName = "Bulldozer";
		author = "95th Aux Team";
		editorCategory="AUX_95th_Legion_Faction_Vehicles";
		editorSubcategory="AUX_95th_Civi_Vehicles_Category_Industrial";
	};
};

class CfgFunctions { class AUX_95th { class Vehicles {
	class handleBulldozerInit {file = "\AUX_95th_Vehicles_Bulldozer\Functions\handleBulldozerInit.sqf";};
};};};

class Extended_InitPost_EventHandlers {	
	class AUX_95th_Vehicles_Bulldozer {class AUX_95th_Vehicles_Bulldozer_Init {init="[_this select 0] call AUX_95th_fnc_handleBulldozerInit;";};};
};