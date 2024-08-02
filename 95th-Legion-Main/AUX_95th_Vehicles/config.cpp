class CfgPatches {
	class AUX_95th_Vehicles {
        author="95th Aux Team";
        name="AUX 95th Vehicles";
		requiredAddons[]={"3AS_Prop_Crates", "3AS_SaberTank", "3AS_LAAT", "CCS_Manta"};
		units[] = {
			"AUX_95th_Command_Outpost",
			"AUX_95th_Swamp_Speeder",
			"AUX_95th_Swamp_Speeder_Transport",
			"AUX_95th_LAAT_Mrk1",
			"AUX_95th_LAAT_Mrk2",
			"AUX_95th_LAAT_Mrk2_Lights",
			"AUX_95th_TX_130",
			"AUX_95th_TX_130_Shield",
			"AUX_95th_RX200",
			"AUX_95th_UGV",
			"AUX_95th_ATTE",
			"AUX_95th_LAAT_C",
			"AUX_95th_Rho",
			"AUX_95th_ATRT"
		};
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

class CfgEditorCategories{
	class AUX_95th_Legion_Faction_Vehicles{displayName = "[95th] Vehicles";};
};

class CfgEditorSubcategories {
	class AUX_95th_Legion_Vehicles_Category_Static{displayName="Static";};
	class AUX_95th_Legion_Vehicles_Category_Ground_Light{displayName="Ground (Light)";};
	class AUX_95th_Legion_Vehicles_Category_Ground_Heavy{displayName="Ground (Heavy)";};
	class AUX_95th_Legion_Vehicles_Category_Air_Gunships{displayName="Air (Gunships)";};
	class AUX_95th_Legion_Vehicles_Category_Air_Fighters{displayName="Air (Fighters)";};
	class AUX_95th_Legion_Vehicles_Category_Air_Logistics{displayName="Air (Logistics)";};
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
	class handleTXShieldInit {file = "\AUX_95th_Vehicles\Init\handleTXShieldInit.sqf";};
	class handleATRTInit {file = "\AUX_95th_Vehicles\Init\handleATRTInit.sqf";};

	class handleToggleTXShield {file = "\AUX_95th_Vehicles\Scripts\TXShield\handleToggleTXShield.sqf";};
	class handleTXRemoved {file = "\AUX_95th_Vehicles\Scripts\TXShield\handleTXRemoved.sqf";};
	class handleTXShieldDamage {file = "\AUX_95th_Vehicles\Scripts\TXShield\handleTXShieldDamage.sqf";};
	class TXShieldOffAnimation {file = "\AUX_95th_Vehicles\Scripts\TXShield\TXShieldOffAnimation.sqf";};

	class handleLoadResupplyBomb {file = "\AUX_95th_Vehicles\Scripts\Resupply Bomb\handleLoadResupplyBomb.sqf";};
	class handleResupplyBombDetonated {file = "\AUX_95th_Vehicles\Scripts\Resupply Bomb\handleResupplyBombDetonated.sqf";};
	class checkIsNearResupplyPad {file = "\AUX_95th_Vehicles\Scripts\Resupply Bomb\checkIsNearResupplyPad.sqf";};
};};};

class Extended_InitPost_EventHandlers {	
	class AUX_95th_TX_130_Shield {class AUX_95th_TX_130_Shield_Init {onRespawn="true";serverInit="[_this select 0] call AUX_95th_fnc_handleTXShieldInit;";};};
	class AUX_95th_Command_Outpost {class AUX_95th_Command_Outpost_Init {serverInit="[_this select 0] call AUX_95th_fnc_handleCommandOutpostInit;";};};
};

class Extended_init_EventHandlers {
	class AUX_95th_LAAT_Mrk1 {class AUX_95th_LAAT_Mrk1_Init {init = "(_this) spawn AUX_95th_fnc_handleLAATInit;";};};
	class AUX_95th_LAAT_Mrk2 {class AUX_95th_LAAT_Mrk2_Init {init = "(_this) spawn AUX_95th_fnc_handleLAATInit;";};};
	class AUX_95th_LAAT_Mrk2_Lights {class AUX_95th_LAAT_Mrk2_Lights_Init {init = "(_this) spawn AUX_95th_fnc_handleLAATInit;";};};
	class AUX_95th_LAAT_C {class AUX_95th_LAAT_C_Init {init = "(_this) spawn AUX_95th_fnc_handleLAATInit;";};};
	class AUX_95th_Rho {class AUX_95th_Rho_Init {init = "(_this) spawn AUX_95th_fnc_handleLAATInit;";};};
	class AUX_95th_ATRT {class AUX_95th_ATRT_Init {init = "(_this) spawn AUX_95th_fnc_handleATRTInit;";};};
};

class Extended_Deleted_EventHandlers {
	class AUX_95th_Command_Outpost {AUX_95th_Command_Outpost_Init = "(_this param [0,_this]) call tfar_antennas_fnc_deleteRadioTower";};
};