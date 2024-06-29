class CfgPatches {
	class AUX_95th_Server {
        author="95th Aux Team";
        name="95th Legion Server";
		requiredAddons[]= {
            "cba_settings"
		};
		units[] = {};
	};
};

class CfgFunctions { class AUX_95th { class Server {
	class Func {file = "\AUX_95th_Server\Scripts\Func.sqf";};
};};};

class Extended_PreInit_EventHandlers {
	class 95th_Server_PreInit {
		init="call compile preprocessFileLineNumbers '\AUX_95th_Server\Init\XEH_preInit.sqf'";
	};
};

class Extended_PostInit_EventHandlers {
	class 95th_Server_PostInit {
		init="call compile preprocessFileLineNumbers '\AUX_95th_Server\Init\XEH_postInit.sqf'";
	};
};