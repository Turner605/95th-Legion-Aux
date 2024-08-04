class CfgPatches {
	class AUX_95th_Vehicles_Shared {
		author = "95th Legion";
		name = "AUX 95th Vehicles Shared";
		requiredAddons[] = {};
		weapons[] = {};
		units[] = {};
		magazines[] = {};
	};
};

class CfgEditorCategories{
	class AUX_95th_Civi_Faction_Vehicles{displayName = "[95th] Vehicles";};
};

class CfgEditorSubcategories {
	class AUX_95th_Civi_Vehicles_Category_Industrial{displayName="Industrial";};
};

class CfgFunctions { class AUX_95th { class Vehicles_Shared {
	class handleAirVehicleInit {file = "\AUX_95th_Vehicles_Shared\Functions\handleAirVehicleInit.sqf";};
	class handleRhoCrateInit {file = "\AUX_95th_Vehicles_Shared\Functions\handleRhoCrateInit.sqf";};
};};};