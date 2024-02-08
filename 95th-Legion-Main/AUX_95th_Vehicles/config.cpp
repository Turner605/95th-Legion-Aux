class CfgPatches {
	class AUX_95th_Vehicles {
        author="95th Aux Team";
        name="AUX 95th Vehicles";
		requiredAddons[]={"3AS_Prop_Crates", "3AS_SaberTank", "3AS_LAAT"};
		#include "UnitExports.hpp"
	};
};

class CfgFactionClasses { 
    class AUX_95th_Legion_Faction_Vehicles { 
        displayName = "[95th] Vehicles"; 
		scope=2; 
		scopecurator=2;
        priority = 1;
        side = 1;
    };  
};

class CfgEditorSubcategories {
	class AUX_95th_Legion_Vehicles_Category_Static{displayName="Static";};
	class AUX_95th_Legion_Vehicles_Category_Ground_Light{displayName="Ground (Light)";};
	class AUX_95th_Legion_Vehicles_Category_Air_Gunships{displayName="Air (Gunships)";};
};

#include "Definitions.hpp"

#include "CfgVehicles.hpp"
#include "CfgLights.hpp"
#include "CfgCloudlets.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"



class CfgFunctions { class AUX_95th { class Vehicles {
	class handleCommandOutpostInit {file = "\AUX_95th_Vehicles\Init\handleCommandOutpostInit.sqf";};
	class handleLAATInit {file = "\AUX_95th_Vehicles\Init\handleLAATInit.sqf";};
};};};

class Extended_InitPost_EventHandlers {	
	// class 95th_TX_130_Shield {class 95th_TX_130_Shield_Init {onRespawn="true";serverInit="[_this select 0] call NFA_fnc_handleTXShieldInit;";};};
	class AUX_95th_Command_Outpost {class AUX_95th_Command_Outpost_Init {serverInit="[_this select 0] call AUX_95th_fnc_handleCommandOutpostInit;";};};
};

class Extended_init_EventHandlers {
	class AUX_95th_LAAT_Mrk1 {class AUX_95th_LAAT_Mrk1_Init {init = "(_this) spawn AUX_95th_fnc_handleLAATInit;";};};
	class AUX_95th_LAAT_Mrk2 {class AUX_95th_LAAT_Mrk2_Init {init = "(_this) spawn AUX_95th_fnc_handleLAATInit;";};};
	class AUX_95th_LAAT_Mrk2Lights {class AUX_95th_LAAT_Mrk2_Lights_Init {init = "(_this) spawn AUX_95th_fnc_handleLAATInit;";};};
};

class Extended_Deleted_EventHandlers {
	class AUX_95th_Command_Outpost {AUX_95th_Command_Outpost_Init = "(_this param [0,_this]) call tfar_antennas_fnc_deleteRadioTower";};
};