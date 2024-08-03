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
		class SpawnGroundRhoCrate {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Spawn Rho Ground Crate";
			statement = "[this, player, 'AUX_95th_Rho_Crate_Ground_Deployment'] spawn AUX_95th_fnc_handleGroundSpawned;"; 
		};
		class SpawnAirRhoCrate {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Spawn Rho Air Crate";
			statement = "[this, player, 'AUX_95th_Rho_Crate_Air_Deployment'] spawn AUX_95th_fnc_handleGroundSpawned;"; 
		};
		class SpawnDefenceRhoCrate {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Spawn Rho Defence Crate";
			statement = "[this, player, 'AUX_95th_Rho_Crate_Defence_Deployment'] spawn AUX_95th_fnc_handleGroundSpawned;"; 
		};
		class SpawnUtilityRhoCrate {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Spawn Rho Utility Crate";
			statement = "[this, player, 'AUX_95th_Rho_Crate_Utility_Deployment'] spawn AUX_95th_fnc_handleGroundSpawned;"; 
		};
		class LoadATRT {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Load AT-RT Into LAAT";
			statement = "[this] spawn AUX_95th_fnc_handleLoadATRT;"; 
		};
	};
};