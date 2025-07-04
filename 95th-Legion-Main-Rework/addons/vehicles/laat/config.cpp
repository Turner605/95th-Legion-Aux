#include "script_component.hpp"
#include "Macros\LAAT Texture.hpp"
#include "Macros\LAAT Shared.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
            "AUX_95th_LAAT_Mrk1",
			"AUX_95th_LAAT_Mrk2",
			"AUX_95th_LAAT_Mrk2_Lights"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_vehicles_shared", "3AS_LAAT"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
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

class ls_impulsor_base;

class CfgVehicles {

    class Air;
	class Helicopter: Air {
		class ACE_SelfActions;
		class Turrets;
		class HitPoints;
	};

	class Helicopter_Base_F: Helicopter {
		class HitPoints: HitPoints {
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitMissiles;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitWinch;
		};
		class Turrets: Turrets {
			class MainTurret;
		};
		class AnimationSources;
		class EventHandlers;
		class ViewOptics;
		class ViewPilot;
		class Components;
	};

	class Helicopter_Base_H: Helicopter_Base_F {
		class Turrets: Turrets {
			class MainTurret: MainTurret{};
			class CopilotTurret: MainTurret{};
		};
		class AnimationSources: AnimationSources{};
	};

	class 3AS_laat_Base: Helicopter_Base_H {};
	class 3as_LAAT_Mk1: 3AS_laat_Base {};
	class 3as_LAAT_Mk2: 3AS_laat_Base {};
	class 3AS_LAAT_LampBase: 3AS_laat_Base{};
	class 3AS_LAAT_Mk2Lights: 3AS_LAAT_LampBase{};

    class AUX_95th_LAAT_Mrk1: 3as_LAAT_Mk1 {
        displayname="LAAT/I Mk.1";
        hiddenSelectionsTextures[]={
            "\z\AUX_95th\addons\vehicles\laat\data\Default\Hull.paa",  
            "\z\AUX_95th\addons\vehicles\laat\data\Default\Wings.paa",
            "\z\AUX_95th\addons\vehicles\laat\data\Default\Weapons.paa",
            "\z\AUX_95th\addons\vehicles\laat\data\Default\Weapon_Details.paa",
            "\z\AUX_95th\addons\vehicles\laat\data\Default\Interior.paa"
        };
        class TextureSources {
			textureList[] = {"Default",1,"AUX_95th_76561198051916304",0,"AUX_95th_76561198820607430",0,"AUX_95th_76561198060130630",0};
			NEW_95TH_LAAT_TEXTURE(Default)
			NEW_95TH_LAAT_TEXTURE(AUX_95th_76561198051916304)
			NEW_95TH_LAAT_TEXTURE(AUX_95th_76561198820607430)
			NEW_95TH_LAAT_TEXTURE(AUX_95th_76561198060130630)
		};
        NEW_SHARED_LAAT_CONFIG()
        #include "\z\AUX_95th\addons\main\inventories\vehicleInventory.hpp"
    };

    class AUX_95th_LAAT_Mrk2_Lights: 3AS_LAAT_Mk2Lights {
        displayname="LAAT/I Mk.2 (Lights)";
        hiddenSelectionsTextures[]={
            "\z\AUX_95th\addons\vehicles\laat\data\Default\Hull.paa",
            "\z\AUX_95th\addons\vehicles\laat\data\Default\Wings.paa",
            "\z\AUX_95th\addons\vehicles\laat\data\Default\Weapons.paa",
            "\z\AUX_95th\addons\vehicles\laat\data\Default\Weapon_Details.paa",
            "\z\AUX_95th\addons\vehicles\laat\data\Default\Interior.paa"
        };
        class TextureSources {
			textureList[] = {"Default",1,"AUX_95th_76561198051916304",0,"AUX_95th_76561198820607430",0,"AUX_95th_76561198060130630",0};
			NEW_95TH_LAAT_TEXTURE(Default)
			NEW_95TH_LAAT_TEXTURE(AUX_95th_76561198051916304)
			NEW_95TH_LAAT_TEXTURE(AUX_95th_76561198820607430)
			NEW_95TH_LAAT_TEXTURE(AUX_95th_76561198060130630)
		};
        NEW_SHARED_LAAT_CONFIG()
        #include "\z\AUX_95th\addons\main\inventories\vehicleInventory.hpp"
    };

    class AUX_95th_LAAT_Mrk2: 3as_LAAT_Mk2 {
        displayname="LAAT/I Mk.2";
        hiddenSelectionsTextures[]={
            "\z\AUX_95th\addons\vehicles\laat\data\Default\Hull.paa",
            "\z\AUX_95th\addons\vehicles\laat\data\Default\Wings.paa",
            "\z\AUX_95th\addons\vehicles\laat\data\Default\Weapons.paa",
            "\z\AUX_95th\addons\vehicles\laat\data\Default\Weapon_Details.paa",
            "\z\AUX_95th\addons\vehicles\laat\data\Default\Interior.paa"
        };
        class TextureSources {
			textureList[] = {"Default",1,"AUX_95th_76561198051916304",0,"AUX_95th_76561198820607430",0,"AUX_95th_76561198060130630",0};
			NEW_95TH_LAAT_TEXTURE(Default)
			NEW_95TH_LAAT_TEXTURE(AUX_95th_76561198051916304)
			NEW_95TH_LAAT_TEXTURE(AUX_95th_76561198820607430)
			NEW_95TH_LAAT_TEXTURE(AUX_95th_76561198060130630)
		};
        NEW_SHARED_LAAT_CONFIG()
        #include "\z\AUX_95th\addons\main\inventories\vehicleInventory.hpp"
    };
};

#include "CfgEventHandlers.hpp"