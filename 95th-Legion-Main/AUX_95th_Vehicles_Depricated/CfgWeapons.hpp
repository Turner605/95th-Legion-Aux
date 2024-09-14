class CfgWeapons {
	class HE;
	class ParticleBeamCannon_F;

	class 95th_LAAT_Light_Cannon: ParticleBeamCannon_F {
		class HE: HE {
			displayName="Light Particle Cannon";
			magazines[]= {"95th_LAAT_Light_Cannon_Magazine"};
			magazineReloadTime=10;
		};
	};

	class 95th_LAAT_Heavy_Cannon: ParticleBeamCannon_F {
		class HE: HE {
			displayName="Heavy Particle Cannon";
			magazines[]= {"Laser_Battery"};
			magazineReloadTime=10;
		};
	};

	class rockets_Skyfire;
	class 95th_LAAT_Hydras: rockets_Skyfire {
		displayName="Hydra IR Rockets";
		canLock=2;
		magazines[]= {"NFL_32Rnd_Proton_Missiles"};
		magazineReloadTime=10;
	};

	class weapon_GBU12Launcher;
	class NFL_LAAT_Resupply_Launcher: weapon_GBU12Launcher {
		displayName = "Resupply Launcher";
		magazines[] = {
			"NFL_LAAT_Resupply_Launcher_Magazine_Ammo", 
			"NFL_LAAT_Resupply_Launcher_Magazine_Medical", 
			"NFL_LAAT_Resupply_Launcher_Magazine_Explosives",
			"NFL_LAAT_Resupply_Launcher_Magazine_VehicleAmmo", 
			"NFL_LAAT_Resupply_Launcher_Magazine_VehicleFuel", 
		};
		model = "a3\weapons_f\empty.p3d";
	};
};