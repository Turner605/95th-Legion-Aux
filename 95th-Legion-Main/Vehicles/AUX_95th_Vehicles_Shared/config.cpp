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

class CfgFunctions { class AUX_95th { class Vehicles_Shared {
	class handleAirVehicleInit {file = "\AUX_95th_Vehicles_Shared\Functions\handleAirVehicleInit.sqf";};
};};};