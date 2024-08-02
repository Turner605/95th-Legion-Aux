class AUX_95th_AirUtil_Fighter : 3AS_Small_Terminal_Black_Prop {
	displayName="Fighter Terminal";
	editorCategory="AUX_95th_Objects";
	editorSubcategory="AUX_95th_Air_Utilities";
	class UserActions {
		class SpawnZ95 {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Spawn [95th] Z95";
			statement = "[this, player, 'AUX_95th_Z95'] spawn AUX_95th_fnc_handleAirSpawned;"; 
		};
		class SpawnV19 {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Spawn [95th] V19";
			statement = "[this, player, 'AUX_95th_V19'] spawn AUX_95th_fnc_handleAirSpawned;"; 
		};
		class SpawnYWing {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Spawn [95th] Y-Wing";
			statement = "[this, player, 'AUX_95th_YWing'] spawn AUX_95th_fnc_handleAirSpawned;"; 
		};
		class SpawnARC170 {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Spawn [95th] ARC-170";
			statement = "[this, player, 'AUX_95th_ARC170'] spawn AUX_95th_fnc_handleAirSpawned;"; 
		};
		class SpawnDelta7 {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Spawn [3AS] Delta 7";
			statement = "[this, player, '3AS_Delta7_Orange'] spawn AUX_95th_fnc_handleAirSpawned;"; 
		};
	};
};