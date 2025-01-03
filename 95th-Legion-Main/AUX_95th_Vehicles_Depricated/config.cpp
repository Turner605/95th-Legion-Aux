class CfgPatches {
	class AUX_95th_Vehicles_Depricated {
        author="95th Aux Team";
        name="AUX 95th Vehicles";
		requiredAddons[]={"3AS_Prop_Crates", "3AS_SaberTank"};
		units[] = {
			"AUX_95th_Command_Outpost",
			"AUX_95th_Swamp_Speeder",
			"AUX_95th_Swamp_Speeder_Transport",
			"AUX_95th_TX_130",
			"AUX_95th_TX_130_Shield",
			"AUX_95th_RX200",
			"AUX_95th_ATTE",
			"AUX_95th_ATRT"
		};
	};
};

#include "Definitions.hpp"

#include "CfgVehicles.hpp"

class CfgFunctions { class AUX_95th { class Vehicles {
	class handleCommandOutpostInit {file = "\AUX_95th_Vehicles_Depricated\Init\handleCommandOutpostInit.sqf";};
	class handleTXShieldInit {file = "\AUX_95th_Vehicles_Depricated\Init\handleTXShieldInit.sqf";};
	class handleATRTInit {file = "\AUX_95th_Vehicles_Depricated\Init\handleATRTInit.sqf";};

	class handleToggleTXShield {file = "\AUX_95th_Vehicles_Depricated\Scripts\TXShield\handleToggleTXShield.sqf";};
	class handleTXRemoved {file = "\AUX_95th_Vehicles_Depricated\Scripts\TXShield\handleTXRemoved.sqf";};
	class handleTXShieldDamage {file = "\AUX_95th_Vehicles_Depricated\Scripts\TXShield\handleTXShieldDamage.sqf";};
	class TXShieldOffAnimation {file = "\AUX_95th_Vehicles_Depricated\Scripts\TXShield\TXShieldOffAnimation.sqf";};

	class handleLoadResupplyBomb {file = "\AUX_95th_Vehicles_Depricated\Scripts\Resupply Bomb\handleLoadResupplyBomb.sqf";};
	class handleResupplyBombDetonated {file = "\AUX_95th_Vehicles_Depricated\Scripts\Resupply Bomb\handleResupplyBombDetonated.sqf";};
	class checkIsNearResupplyPad {file = "\AUX_95th_Vehicles_Depricated\Scripts\Resupply Bomb\checkIsNearResupplyPad.sqf";};
};};};

class Extended_InitPost_EventHandlers {	
	class AUX_95th_TX_130_Shield {class AUX_95th_TX_130_Shield_Init {onRespawn="true";serverInit="[_this select 0] call AUX_95th_fnc_handleTXShieldInit;";};};
	class AUX_95th_Command_Outpost {class AUX_95th_Command_Outpost_Init {serverInit="[_this select 0] call AUX_95th_fnc_handleCommandOutpostInit;";};};
};

class Extended_init_EventHandlers {
	class AUX_95th_ATRT {class AUX_95th_ATRT_Init {init = "(_this) spawn AUX_95th_fnc_handleATRTInit;";};};
};

class Extended_Deleted_EventHandlers {
	class AUX_95th_Command_Outpost {AUX_95th_Command_Outpost_Init = "(_this param [0,_this]) call tfar_antennas_fnc_deleteRadioTower";};
};