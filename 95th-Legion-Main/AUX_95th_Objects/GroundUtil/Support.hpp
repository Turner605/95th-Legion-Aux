class AUX_95th_GroundUtil_Vehicles_Support : 3AS_Terminal_1_Prop {
	displayName="Support Vehicle Terminal";
	editorCategory="AUX_95th_Objects";
	editorSubcategory="AUX_95th_Ground_Utilities";
	class UserActions {
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