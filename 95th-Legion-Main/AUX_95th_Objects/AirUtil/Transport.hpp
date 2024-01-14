class AUX_95th_AirUtil_Transport : 3AS_TERMINAL_2_PROP {
	displayName="Air Transport Terminal";
	editorCategory="AUX_95th_Objects";
	editorSubcategory="AUX_95th_Air_Utilities";
	class UserActions {
		class SpawnMrk1LAAT {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Spawn [95th] LAAT Mrk1 (Turrets)";
			statement = "[this, player, '95th_LAAT_Mrk1'] spawn NFA_fnc_handleAirSpawned;"; 
		};
		class SpawnMrk2LAAT {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Spawn [95th] LAAT Mrk2";
			statement = "[this, player, '95th_LAAT_Mrk2'] spawn NFA_fnc_handleAirSpawned;"; 
		};
		class SpawnMrk2LAATLights {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Spawn [95th] LAAT Mrk2 (Lights)";
			statement = "[this, player, '95th_LAAT_Mrk2Lights'] spawn NFA_fnc_handleAirSpawned;"; 
		};
		class SpawnLAATC {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Spawn [3AS] LAAT/C";
			statement = "[this, player, '3as_LAATC'] spawn NFA_fnc_handleAirSpawned;"; 
		};
		class SpawnLAATLE {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Spawn [3AS] LAAT/LE";
			statement = "[this, player, '3AS_Patrol_LAAT_Republic'] spawn NFA_fnc_handleAirSpawned;"; 
		};
	};
};