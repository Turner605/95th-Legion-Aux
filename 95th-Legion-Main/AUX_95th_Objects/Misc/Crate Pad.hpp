class AUX_95th_Misc_Crate_Pad : 3as_FOB_turret_base_prop {
	scope = 2;
	displayName="Crate Pad";
	editorCategory="AUX_95th_Objects";
	editorSubcategory="AUX_95th_Misc";
	class UserActions {
		class SpawnAmmoCrate {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Spawn Platoon Ammo Crate";
			statement = "[this, 'AUX_95th_Crate_Platoon_Ammo'] spawn AUX_95th_fnc_handleCrateSpawned;"; 
		};
		class SpawnMedicalCrate {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Spawn Platoon Medical Crate";
			statement = "[this, 'AUX_95th_Crate_Platoon_Medical'] spawn AUX_95th_fnc_handleCrateSpawned;"; 
		};
		class SpawnExplosivesCrate {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Spawn Platoon Explosives Crate";
			statement = "[this, 'AUX_95th_Crate_Platoon_Explosives'] spawn AUX_95th_fnc_handleCrateSpawned;"; 
		};
		class SpawnVehicleAmmoCrate {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Spawn Vehicle Ammo Crate";
			statement = "[this, 'AUX_95th_Crate_Vehicle_Ammo'] spawn AUX_95th_fnc_handleCrateSpawned;"; 
		};
		class SpawnVehicleFuelCrate {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Spawn Vehicle Fuel Crate";
			statement = "[this, 'AUX_95th_Crate_Vehicle_Fuel'] spawn AUX_95th_fnc_handleCrateSpawned;"; 
		};
	};
};