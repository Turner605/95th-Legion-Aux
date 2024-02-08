class AUX_95th_GroundUtil_Vehicles : 3AS_Terminal_1_Prop {
	displayName="Ground Vehicle Terminal";
	editorCategory="AUX_95th_Objects";
	editorSubcategory="AUX_95th_Ground_Utilities";
	class UserActions {
		class SpawnFirehawke {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Spawn [95th] Firehawke";
			statement = "[this, player, 'AUX_95th_Firehawke'] spawn AUX_95th_fnc_handleGroundSpawned;"; 
		};
		class SpawnTX130 {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Spawn [95th] TX-130";
			statement = "[this, player, 'AUX_95th_TX_130'] spawn AUX_95th_fnc_handleGroundSpawned;"; 
		};
		class SpawnTX130Shield {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Spawn [95th] TX-130 (Shield)";
			statement = "[this, player, 'AUX_95th_TX_130_Shield'] spawn AUX_95th_fnc_handleGroundSpawned;"; 
		};
		// class SpawnTX130Strafing {
		// 	priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
		// 	displayName = "Spawn [3AS] TX-130 (Strafing)";
		// 	statement = "[this, player, '3as_saber_m1_strafe'] spawn AUX_95th_fnc_handleGroundSpawned;"; 
		// };
		class Spawn95thRX200 {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Spawn [95th] RX-200";
			statement = "[this, player, 'AUX_95th_RX200'] spawn AUX_95th_fnc_handleGroundSpawned;"; 
		};
		class Spawn3ASATTE {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Spawn [3AS] AT-TE";
			statement = "[this, player, '3as_ATTE_Base'] spawn AUX_95th_fnc_handleGroundSpawned;"; 
		};
		class SpawnSwampSpeeder {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Spawn [95th] Swamp Speeder";
			statement = "[this, player, 'AUX_95th_Swamp_Speeder'] spawn AUX_95th_fnc_handleGroundSpawned;"; 
		};
		class SpawnSwampSpeederTransport {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Spawn [95th] Swamp Speeder (Transport)";
			statement = "[this, player, 'AUX_95th_Swamp_Speeder_Transport'] spawn AUX_95th_fnc_handleGroundSpawned;"; 
		};
		class SpawnCommandOutpost {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Spawn [95th] Command Post";
			statement = "[this, player, 'AUX_95th_Command_Outpost'] spawn AUX_95th_fnc_handleGroundSpawned;"; 
		};
		class LoadATRT {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Load AT-RT Into LAAT";
			statement = "[this] spawn AUX_95th_fnc_handleLoadATRT;"; 
		};
	};
};