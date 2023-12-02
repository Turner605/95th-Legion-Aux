#include "Macros\LAAT Texture.hpp"
#include "Macros\LAAT Shared.hpp"

class CfgPatches {
	class 95th_Legion_Vehicles {
        author="95th Aux Team";
		scope=2;
		scopecurator=2;
        name="95th Legion Vehicles";
		requiredAddons[]= { "3AS_SaberTank", "3AS_LAAT" };
		units[]={
			"95th_LAAT_Mrk1",
			"95th_LAAT_Mrk2",
			"95th_LAAT_Mrk2Lights",

			"95th_TX_130",
			"95th_TX_130_Shield",

			"95th_RX200",
			"AUX_95th_Command_Outpost"
		};
		magazines[]={
			"95th_LAAT_Light_Cannon_Magazine"
		};
		ammo[]={
			"95th_LAAT_Light_Cannon_Ammo"
		};
	};
};

class ViewOptics;
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class Optics_Armored;
class Optics_Gunner_APC_01: Optics_Armored { class Wide; class Medium; class Narrow; };
class DefaultVehicleSystemsDisplayManagerLeft { class components; };
class DefaultVehicleSystemsDisplayManagerRight { class components; };
class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft { class components; };
class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight { class components; };
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft { class components; };
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight { class components; };
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft { class components; };
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight { class components; };
class GunParticles;

class CfgLights {
	class NFL_Proton_Rocket_Light {
		diffuse[] = {1,0.25,0.75};
		color[] = {1,0.6,0.3};
		ambient[] = {0,0,0};
		brightness = "2 * fireIntensity";
		size = 1;
		intensity = 1000;
		drawLight = 0;
		blinking = 0;
		class Attenuation {
			start = 0;
			constant = 0;
			linear = 0;
			quadratic = 1;
			hardLimitStart = 100;
			hardLimitEnd = 200;
		};
	};
};

class CfgCloudlets {
	class Default {
		interval = "0.5 * interval + 0.5";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 1;
		angle = 0;
		angleVar = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1;
		volume = 1;
		rubbing = 0.05;
		size[] = {1,1};
		color[] = {{1,1,1,1}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 0;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};

	class NFL_Proton_Rocket_Particles: Default {
		interval = "0.0012";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		angleVar = 1;
		particleFSLoop = 0;
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1.1;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1;
		volume = 0.8;
		rubbing = 0.5;
		size[] = {1.5,3};
		color[] = {{0.9,0.4,0.75,0.05},{1,1,1,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		blockAIVisibility = 0;
		lifeTimeVar = 0.5;
		positionVar[] = {0.3,0.3,0.3};
		MoveVelocityVar[] = {0.4,0.4,0.4};
		rotationVelocityVar = 20;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
};

class NFL_Proton_Missile {
	class NFL_Proton_Rocket_Light { simulation = "light"; type = "NFL_Proton_Rocket_Light"; position[] = {0,0,0}; intensity = 0.01; interval = 1; lifeTime = 1; };
	class NFL_Proton_Rocket_Particles { simulation = "particles"; type = "NFL_Proton_Rocket_Particles"; position[] = {0,0,0}; intensity = 1; interval = 1; lifeTime = 1; };
};

class CfgAmmo {
	class 3AS_PlasmaBase;
	class 95th_LAAT_Light_Cannon_Ammo: 3AS_PlasmaBase {
		hit = 100; indirectHit = 100; indirectHitRange = 0.3;
		cartridge = "";
		visibleFire = 3; audibleFire = 45;
		dangerRadiusBulletClose = 8; dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6; suppressionRadiusHit = 8;
		cost = 1.2;
		airLock = 1;
		typicalSpeed = 472;
		caliber = 1.95;
		model = "\3AS\3AS_Weapons\Data\tracer_blue.p3d";
		tracerScale = 0.975;
		airFriction = -0.00018;
		effectFly = "3AS_PlasmaBolt_Blue_Fly";
		class CamShakeExplode {
			power = 2.82843;
			duration = 0.6;
			frequency = 20;
			distance = 8.48528;
		};
		class CamShakeHit {
			power = 5;
			duration = 0.2;
			frequency = 20;
			distance = 1;
		};
	};

	class SensorTemplateIR;
	class Missile_AGM_02_F;
	class Missile_AGM_01_F: Missile_AGM_02_F {
		class Components;
	};

	class NFL_Proton_Ammo: Missile_AGM_01_F {
		model = "\a3\weapons_f\Ammo\Rocket_01_F.p3d";
		craterEffects = "AAMissileCrater";
		effectsMissile = "NFL_Proton_Missile";
		explosionEffects = "AAMissileExplosion";
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.562341,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.562341,4};
		hit = 700;
		indirectHit = 85;
		indirectHitRange = 5;
		airLock = 1;
		missileLockCone = 50;
		missileKeepLockedCone = 360;
		missileLockMaxDistance = 1000;
		missileLockMinDistance = 100;
		missileLockMaxSpeed = 745;
		maneuvrability = 15;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",0.5011872,1,1700};
		class Components: Components {
			class SensorsManagerComponent {
				class Components {
					class IRSensorComponent: SensorTemplateIR {
						class AirTarget {
							minRange = 10;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget {
							minRange = 10;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 30;
						angleRangeVertical = 30;
					};
				};
			};
		};
	};

	class Bomb_04_F;
	class NFL_LAAT_Resupply_Launcher_Ammo: Bomb_04_F {
		hit = 0; indirectHit = 0; indirectHitRange = 0.01;
		craterEffects = ""; explosionEffects = ""; explosionSoundEffect = "";
		explosionTime = 3; fuseDistance = 10;
		SoundSetExplosion[] = {};
		multiSoundHit[]={};
		model = "3AS\3AS_AMMO\MODEL\EMP_BOMB.p3d";
	};
};

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

class CfgVehicles {
	//############################################################### LAATs ###############################################################
	class 3as_LAAT_Mk1;
	class 3as_LAAT_Mk2;
	class 3as_LAAT_Mk2Lights;

	class 95th_LAAT_Mrk1: 3as_LAAT_Mk1 {
		displayname="[95th] LAAT/I Mk.1";
		hiddenSelectionsTextures[]={"\95th_Vehicles\Data\LAAT\Default\Hull.paa","\95th_Vehicles\Data\LAAT\Default\Wings.paa","\95th_Vehicles\Data\LAAT\Default\Weapons.paa","\95th_Vehicles\Data\LAAT\Default\Weapon_Details.paa","\95th_Vehicles\Data\LAAT\Default\Interior.paa"};
		NEW_SHARED_LAAT_CONFIG()
	};

	class 95th_LAAT_Mrk2: 3as_LAAT_Mk2 {
		displayname="[95th] LAAT/I Mk.2";
		hiddenSelectionsTextures[]={"\95th_Vehicles\Data\LAAT\Default\Hull.paa","\95th_Vehicles\Data\LAAT\Default\Wings.paa","\95th_Vehicles\Data\LAAT\Default\Weapons.paa","\95th_Vehicles\Data\LAAT\Default\Weapon_Details.paa","\95th_Vehicles\Data\LAAT\Default\Interior.paa"};
		NEW_SHARED_LAAT_CONFIG()
	};

	class 95th_LAAT_Mrk2Lights: 3as_LAAT_Mk2Lights {
		displayname="[95th] LAAT/I Mk.2 (Lamps)";
		hiddenSelectionsTextures[]={"\95th_Vehicles\Data\LAAT\Default\Hull.paa","\95th_Vehicles\Data\LAAT\Default\Wings.paa","\95th_Vehicles\Data\LAAT\Default\Weapons.paa","\95th_Vehicles\Data\LAAT\Default\Weapon_Details.paa","\95th_Vehicles\Data\LAAT\Default\Interior.paa"};
		NEW_SHARED_LAAT_CONFIG()
	};

	//############################################################### Sabers ###############################################################
	class 3as_saber_m1;
	class 3as_saber_m1Recon;

	class 95th_TX_130 : 3as_saber_m1 {
		author="95th Aux"; displayname="95th TX-130";
        crew = "95th_Rifleman_Unit_Trooper"; faction="95th_Legion_Faction_Clones";
		hiddenSelectionsTextures[]={"\95th_Vehicles\Data\Saber\Hull.paa", "\95th_Vehicles\Data\Saber\Weapons.paa"};
		class ACE_Cargo {class Cargo {class track {type = "ACE_Track"; amount = 2;};};}; ace_cargo_space = 26;
	};

	class 95th_TX_130_Shield : 3as_saber_m1Recon {
		author="95th Aux"; displayname="95th TX-130 (Shield)";
        crew = "95th_Rifleman_Unit_Trooper"; faction="95th_Legion_Faction_Clones";
		hiddenSelectionsTextures[]={"\95th_Vehicles\Data\Saber\Hull.paa", "\95th_Vehicles\Data\Saber\Weapons.paa"};
		class ACE_Cargo {class Cargo {class track {type = "ACE_Track"; amount = 2;};};}; ace_cargo_space = 26;
		class UserActions {
			class ToggleTXShield {
				priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
				displayName = "Toggle Shield";
				statement = "[this, player] spawn NFA_fnc_handleToggleTXShield;"; 
			};
		};
	};

	//############################################################### RX200 ###############################################################
	class LandVehicle;
	class Tank_F: LandVehicle { class NewTurret; class Sounds; class HitPoints; };
	class 3AS_RX200_Base: Tank_F {
		class Turrets {
			class MainTurret: NewTurret {
				class ViewGunner;
				class Turrets { class CommanderOptics; };
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints {class HitHull; class HitFuel; class HitEngine; class HitLTrack; class HitRTrack;};
		class Sounds: Sounds {class Engine; class Movement;};
		class EventHandlers;
		class Reflectors {class Left; class Right: Left {}; class Right2: Right {}; class Left2: Left {};};
	};

	class 95th_RX200 : 3AS_RX200_Base {
		author="95th Aux";
		scopecurator=2;
		scope = 2;
        crew = "95th_Rifleman_Unit_Trooper";
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
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				class Turrets {};
				memoryPointGun="laser_l_chamber";
				gunEnd="laser_l_chamber"; gunBeg="laser_l_muzzle";
				weapons[]= { "3AS_RX_ParticleBeamCannon" };
				magazines[]= { "3AS_Laser_Battery_RX_F", "3AS_Laser_Battery_RX_F" };
				memoryPointLRocket="L raketa"; memoryPointRRocket="P raketa";
				missileBeg="missleEnd"; missileEnd="missleBeg";
				minElev=-5; maxElev=70; initElev=5;
				soundServo[]= { "A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner", 0.56234133, 1, 50 };
				soundServoVertical[]= { "A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical", 0.56234133, 1, 50 };
				startEngine=0; showCrewAim=2; stabilizedInAxes=3; maxHorizontalRotSpeed=0.55000001; maxVerticalRotSpeed=0.55000001;
				turretInfoType="RscWeaponRangeZeroing";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
				discreteDistanceInitIndex=2; memoryPointGunnerOptics="gunnerview"; 
				gunnerOutOpticsModel=""; gunnerOutOpticsEffect[]={}; gunnerOpticsEffect[]={}; gunnerForceOptics=1;
				class OpticsIn: Optics_Gunner_APC_01 {
					class Wide: Wide {gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_w_F.p3d"; gunnerOpticsEffect[]={};};
					class Medium: Medium{gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_m_F.p3d";};
					class Narrow: Narrow{gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_n_F.p3d";};
				};
				gunnerAction="mbt2_slot2a_out"; gunnerInAction="mbt2_slot2a_in"; gunnerGetInAction="GetInLow"; gunnerGetOutAction="GetOutLow"; forceHideGunner=1;
				inGunnerMayFire=1; viewGunnerInExternal=1;
				class HitPoints {
					class HitTurret { armor=0.80000001; material=-1; name="vez"; visual="vez"; passThrough=0; minimalHit=0.02; explosionShielding=0.30000001; radius=0.2; };
					class HitGun {armor=0.30000001; material=-1; name="zbran"; visual=""; passThrough=0; minimalHit=0; explosionShielding=1; radius=0.25; };
				};
				class Components {
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner {
						class Components: components {
							class SensorDisplay { componentType="SensorsDisplayComponent"; range[]={4000,300,2000,1000}; resource="RscCustomInfoSensors"; };
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner {
						defaultDisplay="SensorDisplay";
						class Components: components {
							class SensorDisplay { componentType="SensorsDisplayComponent"; range[]={4000,300,2000,1000}; resource="RscCustomInfoSensors"; };
						};
					};
				};
			};
		};
	};

	class 3AS_RTT;
	class AUX_95th_Command_Outpost: 3AS_RTT {
		displayName="[95th] Command Outpost";
		faction="95th_Legion_Faction_Clones";
        crew = "";
		tas_canBlift=1;
		tas_liftVars="[[[[0, -4, -8]]], [0.1], [-0.5]]";
	};
}; 

class CfgFunctions {
	class NFA {
		class Vehicles {
			class handleLAATRespawnToggle {file = "\95th_Vehicles\Scripts\handleLAATRespawnToggle.sqf";};
			class handleToggleTXShield {file = "\95th_Vehicles\Scripts\TXShield\handleToggleTXShield.sqf";};
			class handleTXShieldInit {file = "\95th_Vehicles\Scripts\TXShield\handleTXShieldInit.sqf";};
			class handleTXRemoved {file = "\95th_Vehicles\Scripts\TXShield\handleTXRemoved.sqf";};
			class handleTXShieldDamage {file = "\95th_Vehicles\Scripts\TXShield\handleTXShieldDamage.sqf";};
			class TXShieldOffAnimation {file = "\95th_Vehicles\Scripts\TXShield\TXShieldOffAnimation.sqf";};

			class handleLoadResupplyBomb {file = "\95th_Vehicles\Scripts\Resupply Bomb\handleLoadResupplyBomb.sqf";};
			class handleResupplyBombDetonated {file = "\95th_Vehicles\Scripts\Resupply Bomb\handleResupplyBombDetonated.sqf";};
			class checkIsNearResupplyPad {file = "\95th_Vehicles\Scripts\Resupply Bomb\checkIsNearResupplyPad.sqf";};

			class handleLAATInit {file = "\95th_Vehicles\Init\LAAT\handleLAATInit.sqf";};
			class handleCommandOutpostInit {file = "\95th_Vehicles\Init\Outpost\handleCommandOutpostInit.sqf";};
		};
	};
};

class Extended_InitPost_EventHandlers {
	class 95th_TX_130_Shield {class 95th_TX_130_Shield_Init {onRespawn="true";serverInit="[_this select 0] call NFA_fnc_handleTXShieldInit;";};};
	class AUX_95th_Command_Outpost {class AUX_95th_Command_Outpost_Init {onRespawn="true";serverInit="[_this select 0] call NFA_fnc_handleCommandOutpostInit;";};};
};

class Extended_init_EventHandlers {
	class 95th_LAAT_Mrk1 {class 95th_LAAT_Mrk1_Init {init = "(_this) spawn NFA_fnc_handleLAATInit;";};};
	class 95th_LAAT_Mrk2 {class 95th_LAAT_Mrk2_Init {init = "(_this) spawn NFA_fnc_handleLAATInit;";};};
	class 95th_LAAT_Mrk2Lights {class 95th_LAAT_Mrk2Lights_Init {init = "(_this) spawn NFA_fnc_handleLAATInit;";};};
};