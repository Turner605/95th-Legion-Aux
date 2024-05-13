class CfgPatches {
	class AUX_95th_Legion_Modules {
        author="95th Aux Team";
        name="95th Legion Modules";
		requiredAddons[]={};
		units[] = {};
	};
};

class CfgFunctions { class AUX_95th { class Modules {
	class jetDroidInsertion {file = "\AUX_95th_Modules\Scripts\jetDroidInsertion.sqf";};
	class isCloseToGround {file = "\AUX_95th_Modules\Scripts\isCloseToGround.sqf";};
};};};

class Extended_PostInit_EventHandlers {
	class AUX_95th_Modules_PostInit {init="call compile preprocessFileLineNumbers '\AUX_95th_Modules\Init\XEH_postInit.sqf'";};
};