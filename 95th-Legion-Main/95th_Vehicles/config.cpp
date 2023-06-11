#include "Macros\LAAT Texture.hpp"

class CfgPatches
{
	class 95th_Legion_Vehicles
	{
        author="95th Aux Team";
		scope=2;
		scopecurator=2;
        name="95th Legion Vehicles";
		requiredAddons[]=
		{
			"3AS_SaberTank",
			"3AS_LAAT"
		};

		units[]={
			"95th_LAAT_Mrk1",
			"95th_LAAT_Mrk2",
			"95th_LAAT_Mrk2Lights",
			"95th_TX_130",
			"95th_RX200",
			"95th_Outpost_Crate"
		};

		magazines[]={
			"95th_LAAT_Light_Cannon_Magazine"
		};

		ammo[]={
			"95th_LAAT_Light_Cannon_Ammo"
		};
	};
};

class CfgAmmo {
	class laserAmmo;
	class 95th_LAAT_Light_Cannon_Ammo: laserAmmo {
		explosive=0.10000001;
		caliber=2.4000001;
		indirecthit=10;
		indirectHitRange=1;
		model = "\3AS\3AS_Weapons\Data\tracer_blue.p3d";
	};
};

class CfgMagazines {
	class Laser_Battery;
	class 95th_LAAT_Light_Cannon_Magazine: Laser_Battery {
		ammo="95th_LAAT_Light_Cannon_Ammo";
		model = "\3AS\3AS_Weapons\Data\tracer_blue.p3d";
	};
};

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
};

class CfgVehicles {
//############################################################### LAATs ###############################################################
	class 3as_LAAT_Mk1;
	class 95th_LAAT_Mrk1: 3as_LAAT_Mk1 {
		displayname="[95th] LAAT/I Mk.1";
		author="95th Aux Team";
		faction="95th_Legion_Faction_Clones";
		ace_cargo_space = 26;
        crew = "95th_P1_Pilot_Unit_Trooper";
		hiddenSelectionsTextures[]={"\95th_Vehicles\Data\LAAT\Default\Hull.paa","\95th_Vehicles\Data\LAAT\Default\Wings.paa","\95th_Vehicles\Data\LAAT\Default\Weapons.paa","\95th_Vehicles\Data\LAAT\Default\Weapon_Details.paa","\95th_Vehicles\Data\LAAT\Default\Interior.paa"};
		weapons[]={"95th_LAAT_Light_Cannon","95th_LAAT_Heavy_Cannon","3as_LAAT_Missile_AGM","3as_LAAT_Missile_AA","CMFlareLauncher"};
		magazines[]={
			"3as_PylonMissile_LAAT_8Rnd_Missile_AA",
			"3as_LAAT_8Rnd_Missile_AGM",
			"240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine",
			"Laser_Battery","Laser_Battery",
			"95th_LAAT_Light_Cannon_Magazine","95th_LAAT_Light_Cannon_Magazine","95th_LAAT_Light_Cannon_Magazine"
		};
		class TextureSources {
			textureList[] = {"Default",1,"Jinter",0};

			NEW_95TH_LAAT_TEXTURE(Default)};
			NEW_95TH_LAAT_TEXTURE(Jinter)};
		};
	};

	class 3as_LAAT_Mk2;
	class 95th_LAAT_Mrk2: 3as_LAAT_Mk2 {
		displayname="[95th] LAAT/I Mk.2";
		author="95th Aux Team";
        crew = "95th_Pilot_Unit_Trooper";
		ace_cargo_space = 26;
		faction="95th_Legion_Faction_Clones";
		hiddenSelectionsTextures[]={"\95th_Vehicles\Data\LAAT\Default\Hull.paa","\95th_Vehicles\Data\LAAT\Default\Wings.paa","\95th_Vehicles\Data\LAAT\Default\Weapons.paa","\95th_Vehicles\Data\LAAT\Default\Weapon_Details.paa","\95th_Vehicles\Data\LAAT\Default\Interior.paa"};
		weapons[]={"95th_LAAT_Light_Cannon","95th_LAAT_Heavy_Cannon","3as_LAAT_Missile_AGM","3as_LAAT_Missile_AA","CMFlareLauncher"};
		magazines[]={
			"3as_PylonMissile_LAAT_8Rnd_Missile_AA",
			"3as_LAAT_8Rnd_Missile_AGM",
			"240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine",
			"Laser_Battery","Laser_Battery",
			"95th_LAAT_Light_Cannon_Magazine","95th_LAAT_Light_Cannon_Magazine","95th_LAAT_Light_Cannon_Magazine"
		};
		class TextureSources {
			textureList[] = {"Default",1,"Jinter",0};

			NEW_95TH_LAAT_TEXTURE(Default)};
			NEW_95TH_LAAT_TEXTURE(Jinter)};
		};
	};

	class 3as_LAAT_Mk2Lights;
	class 95th_LAAT_Mrk2Lights: 3as_LAAT_Mk2Lights {
		displayname="[95th] LAAT/I Mk.2 (Lamps)";
		author="95th Aux Team";
		faction="95th_Legion_Faction_Clones";
		ace_cargo_space = 26;
        crew = "95th_P1_Pilot_Unit_Trooper";
		hiddenSelectionsTextures[]={"\95th_Vehicles\Data\LAAT\Default\Hull.paa","\95th_Vehicles\Data\LAAT\Default\Wings.paa","\95th_Vehicles\Data\LAAT\Default\Weapons.paa","\95th_Vehicles\Data\LAAT\Default\Weapon_Details.paa","\95th_Vehicles\Data\LAAT\Default\Interior.paa"};
		weapons[]={"95th_LAAT_Light_Cannon","95th_LAAT_Heavy_Cannon","3as_LAAT_Missile_AGM","3as_LAAT_Missile_AA","CMFlareLauncher"};
		magazines[]={
			"3as_PylonMissile_LAAT_8Rnd_Missile_AA",
			"3as_LAAT_8Rnd_Missile_AGM",
			"240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine",
			"Laser_Battery","Laser_Battery",
			"95th_LAAT_Light_Cannon_Magazine","95th_LAAT_Light_Cannon_Magazine","95th_LAAT_Light_Cannon_Magazine"
		};
		class TextureSources {
			textureList[] = {"Default",1,"Jinter",0};

			NEW_95TH_LAAT_TEXTURE(Default)};
			NEW_95TH_LAAT_TEXTURE(Jinter)};
		};
	};

//############################################################### Sabers ###############################################################
	class 3as_saber_m1;
	class 95th_TX_130 : 3as_saber_m1 {
		author="95th Aux";
		scopecurator=2;
		scope = 2;
        crew = "95th_P1_Unit_Trooper";
		faction="95th_Legion_Faction_Clones";
		displayname="95th TX-130";
		ace_cargo_space = 26;
		hiddenSelectionsTextures[]=
		{
			"\95th_Vehicles\Data\Saber\Hull.paa",
			"\95th_Vehicles\Data\Saber\Weapons.paa",
		};
		class ACE_Cargo {
			class Cargo {
				class track {
					type = "ACE_Track";
					amount = 2;
				};
			};
		};
	};

	class 3AS_RX200_Base;
	class 95th_RX200 : 3AS_RX200_Base
	{
		author="95th Aux";
		scopecurator=2;
		scope = 2;
        crew = "95th_P1_Unit_Trooper";
		faction="95th_Legion_Faction_Clones";
		displayname="95th RX200";
		ace_cargo_space = 26;
		tas_canBlift=1;
		tas_liftVars="[[[[0, -4, -8]]], [0.1], [-0.5]]";
		hiddenSelectionsTextures[]={"\95th_Vehicles\Data\RX200\RX200.paa"};
		class ACE_Cargo {
			class Cargo {
				class track {
					type = "ACE_Track";
					amount = 2;
				};
			};
		};
	};

	class 3AS_RTT;
	class 95th_Outpost_Crate: 3AS_RTT
	{
		displayName="Outpost Box";
		faction="95th_Legion_Faction_Clones";
        crew = "";
		tas_canBlift=1;
		tas_liftVars="[[[[0, -4, -8]]], [0.1], [-0.5]]";
	};
}; 