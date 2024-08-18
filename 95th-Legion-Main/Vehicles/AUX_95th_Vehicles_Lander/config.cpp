class CfgPatches {
	class AUX_95th_Vehicles_Lander {
		author = "95th Legion";
		name = "AUX 95th Vehicles Lander";
		requiredAddons[] = {"A3_Soft_F", "AUX_95th_Vehicles_Shared"};
		weapons[] = {};
		units[] = {"AUX_95th_Vehicles_Lander"};
		magazines[] = {};
	};
};

class CfgVehicles {
	class 3AS_Aegis_Shuttle_F;

	class AUX_95th_Vehicles_Lander: 3AS_Aegis_Shuttle_F {
		displayName = "Lander";
		author = "95th Aux Team";
		faction = "AUX_95th_CIS";
		editorCategory="AUX_95th_CIS_Forces";
		editorSubcategory="AUX_95th_CIS_Air_Category_Transport";
		side=0;
	};
};

class CfgFunctions { class AUX_95th { class Vehicles {
	class handleLanderInit {file = "\AUX_95th_Vehicles_Lander\Functions\handleLanderInit.sqf";};
};};};

class Extended_InitPost_EventHandlers {	
	class AUX_95th_Vehicles_Lander {class AUX_95th_Vehicles_Lander_Init {init="[_this select 0] call AUX_95th_fnc_handleLanderInit;";};};
};