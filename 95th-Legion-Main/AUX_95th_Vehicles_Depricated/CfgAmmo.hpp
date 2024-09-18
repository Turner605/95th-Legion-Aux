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