class CfgMagazines {
	class Laser_Battery;
	class 95th_LAAT_Light_Cannon_Magazine: Laser_Battery {
		ammo="95th_LAAT_Light_Cannon_Ammo";
		model = "\3AS\3AS_Weapons\Data\tracer_blue.p3d";
	};
	
	class VehicleMagazine;
	class NFL_32Rnd_Proton_Missiles: VehicleMagazine {
		author = "95th Aux";
		scope = 2;
		count = 32;
		ammo = "NFL_Proton_Ammo";
		displayName = "[95th] MG7-A proton torpedo";
		displayNameShort = "MG7-A";
		descriptionShort = "Proton torpedo";
		initSpeed = 0;
		maxLeadSpeed = 55.5556;
		nameSound = "missiles";
	};

	class PylonMissile_Bomb_GBU12_x1;
	class NFL_LAAT_Resupply_Launcher_Magazine: PylonMissile_Bomb_GBU12_x1 {
		displayName = "Base Resupply Bomb";
		count = 1;
		model = "a3\weapons_f\empty.p3d";
		// hardpoints[] = {"ARC_EMP_RAIL"};
		// pylonWeapon = "3AS_ARC_EMP";
		ammo = "NFL_LAAT_Resupply_Launcher_Ammo";
		mass = 230;
	};

	class NFL_LAAT_Resupply_Launcher_Magazine_Ammo: NFL_LAAT_Resupply_Launcher_Magazine {
		displayName = "Ammo Resupply Bomb";
		model = "a3\weapons_f\empty.p3d";
		ammo = "NFL_LAAT_Resupply_Launcher_Ammo";
	};

	class NFL_LAAT_Resupply_Launcher_Magazine_Medical: NFL_LAAT_Resupply_Launcher_Magazine {
		displayName = "Medical Resupply Bomb";
		model = "a3\weapons_f\empty.p3d";
		ammo = "NFL_LAAT_Resupply_Launcher_Ammo";
	};

	class NFL_LAAT_Resupply_Launcher_Magazine_Explosives: NFL_LAAT_Resupply_Launcher_Magazine {
		displayName = "Explosives Resupply Bomb";
		model = "a3\weapons_f\empty.p3d";
		ammo = "NFL_LAAT_Resupply_Launcher_Ammo";
	};

	class NFL_LAAT_Resupply_Launcher_Magazine_VehicleAmmo: NFL_LAAT_Resupply_Launcher_Magazine {
		displayName = "Vehicle Ammo Resupply Bomb";
		model = "a3\weapons_f\empty.p3d";
		ammo = "NFL_LAAT_Resupply_Launcher_Ammo";
	};

	class NFL_LAAT_Resupply_Launcher_Magazine_VehicleFuel: NFL_LAAT_Resupply_Launcher_Magazine {
		displayName = "Vehicle Fuel Resupply Bomb";
		model = "a3\weapons_f\empty.p3d";
		ammo = "NFL_LAAT_Resupply_Launcher_Ammo";
	};
};