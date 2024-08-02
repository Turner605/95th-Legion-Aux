class AUX_95th_GroundUtil_Vehicles_Light : 3AS_Terminal_2_Prop {
	displayName="Light Vehicle Terminal";
	editorCategory="AUX_95th_Objects";
	editorSubcategory="AUX_95th_Ground_Utilities";
	class UserActions {
		class Spawn95thRX200 {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Spawn [95th] RX-200";
			statement = "[this, player, 'AUX_95th_RX200'] spawn AUX_95th_fnc_handleGroundSpawned;"; 
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
		class SpawnBantha {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Spawn [95th] Bantha";
			statement = "[this, player, 'AUX_95th_Bantha'] spawn AUX_95th_fnc_handleGroundSpawned;"; 
		};
	};
};