class AUX_95th_AirUtil_Fighter : 3AS_Small_Terminal_Black_Prop {
	displayName="Fighter Terminal";
	editorCategory="AUX_95th_Objects";
	editorSubcategory="AUX_95th_Air_Utilities";
	class UserActions {
		class SpawnZ95 {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Spawn [3AS] Z95";
			statement = "[this, player, '3AS_Z95_Orange'] spawn AUX_95th_fnc_handleAirSpawned;"; 
		};
		class SpawnV19 {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Spawn [3AS] V19";
			statement = "[this, player, '3as_V19_base'] spawn AUX_95th_fnc_handleAirSpawned;"; 
		};
		class SpawnYWing {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Spawn [3AS] Y-Wing";
			statement = "[this, player, '3AS_BTLB_Bomber'] spawn AUX_95th_fnc_handleAirSpawned;"; 
		};
		class SpawnDelta7 {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Spawn [3AS] Delta 7";
			statement = "[this, player, '3AS_Delta7_Orange'] spawn AUX_95th_fnc_handleAirSpawned;"; 
		};
	};
};