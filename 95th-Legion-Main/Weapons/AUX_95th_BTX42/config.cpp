class CfgPatches {
	class AUX_95th_Weapons_BTX42 {
		author = "95th Legion";
		name = "AUX 95th Weapons BTX42";
		requiredAddons[] = {"WBK_PhoenixTreal_FlamethrowerMOD", "JLTS_weapons_Core"};
		weapons[] = {"AUX_95th_BX42"};
		units[] = {};
		magazines[] = {};
	};
};

class CfgAmmo {
	class BulletBase;
	class B_65x39_Caseless: BulletBase {
		class HitEffects;
	};

	class 3AS_R_Mk40_AT;

	class AUX_95th_BX42_Rocket_HE_Ammo:	3AS_R_Mk40_AT {

	};

	class AUX_95th_Grappler_Ammo: B_65x39_Caseless {
		author = "95th Aux Team";
		simulation = "shotShell";
		model = "\A3\weapons_f\ammo\UGL_slug";
		suppressionRadiusHit = 0;
		timeToLive = 10;
		typicalSpeed = 22;
		aiAmmoUsageFlags = "0";
		dangerRadiusHit = 0;
		deflecting = 0;
		explosionTime = -1;
		explosive = 0;
		cost = 40;
		hit = 0;
		indirectHit = 0;
		maxSpeed = 100;
		// flaresize = 5;
		// tracerscale = 0.8;
		// effectflare = "FlareShell";
		tracerstarttime = 0.05;
		tracerendtime = 10;
		nvgonly = 0;
		airlock = 1;
		irtarget = 1;
		brightness = 1000;
		initTime = 0;
		airfriction = 0;
		coefgravity = 0;

		// soundFly[] = {"x\advanced_grappling\addons\main\sounds\launch.ogg", 3, 1, 100};
		// soundHit1[] = {"x\advanced_grappling\addons\main\sounds\impact.ogg", 3, 1, 100};
		// multiSoundHit[] = {"soundHit1", 1};
	};
};

class CfgMagazines {
	class M2_Fuel_Tank;
	class 16Rnd_9x21_Mag;
	class 3AS_6Rnd_RocketGrenades_HE;

	class AUX_95th_BX42_Rocket_HE: 3AS_6Rnd_RocketGrenades_HE {
		author="95th Aux Team";
		scope=2;
		mass=60;
		displayName="[95th] BX-42 Pyro Rockets";
		displayNameShort = "[3AS] Grenades propelled by Rockets";
		descriptionShort = "$STR_A3_CfgMagazines_1Rnd_HE_Grenade_shell1";
		initSpeed = 100;
		count = 6;
		ammo = "3AS_RocketGrenade_HE";
		deleteIfEmpty = 1;
		// ammo="AUX_95th_BX42_Rocket_AT_Ammo";
	};

	class AUX_95th_BX42_Fuel: M2_Fuel_Tank {
		descriptionShort="Fuel for the 95th Flamethrower";
		author="95th Aux Team";
		scope=2;
		mass=60;
		displayName="[95th] BX-42 Fuel";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		ammo="Flamethrower_Fuel";
	};

	class AUX_95th_Grappler_Mag: 16Rnd_9x21_Mag {
		author = "95th Aux Team";
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		displayName = "Grappler Mag";
		displayNameShort = "Grappler";
		model = "\MRC\JLTS\weapons\Core\stun_mag.p3d";
		picture = "\MRC\JLTS\weapons\Core\data\ui\stun_mag_ui_ca.paa";
		count = 1;
		ammo = "AUX_95th_Grappler_Ammo";
		descriptionShort = "Grappler Ammo";
		tracersEvery = 1;
		initSpeed = 50;
	};
};

class Mode_SemiAuto;
class CfgWeapons {
	class Rifle;
	class Rifle_Base_F: Rifle {
		class WeaponSlotsInfo;
		class GunParticles;
	};

	class 41_Flammenwerfer_02_F;
	class WeaponSlotsInfo;

	class AUX_95th_BX42_Muzzle: Rifle_Base_F {
		aiDispersionCoefX = 2;
		aiDispersionCoefY = 2;
		autoFire = 0;
		ballisticsComputer = 0;
		discreteDistance[] = {50};
		discreteDistanceInitIndex = 0;
		displayName = "Launcher";
		drySound[] = {"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",5,1,10}; //TODO
		fireSpreadAngle = 0.95;
		magazines[] = {"AUX_95th_BX42_Rocket_HE"};
		magazineWell[] = {};
		requiredOpticType = 2
		maxZeroing = 50;
		reloadAction = "GestureReloadMX";
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\Reload_Mx",1,1,10}; //TODO
		modes[] = {"Single"};
		class Single: Mode_SemiAuto {
			sounds[] = {"StandardSound"};
			class BaseSoundModeType {
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType {
				weaponSoundEffect = "";
				begin1[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_01",5,1.5,1800}; //TODO
				soundBegin[] = {"begin1",1};
			};
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.5;
			dispersion = 0.0029;
			minRange = 5; minRangeProbab = 0.3;
			midRange = 25; midRangeProbab = 0.6;
			maxRange = 50; maxRangeProbab = 0.1;
			aiRateOfFire = 2; aiRateOfFireDistance = 25;
		};
	};

	class AUX_95th_BX42: 41_Flammenwerfer_02_F {
		displayName="[95th] BX-42 Flamethrower";
		author="95th Aux Team";
		WBK_BurnEm_IsFlamethrower = "True";
		WBK_BurnEm_RequiredBackpack = "AUX_95th_BX42_Backpack";
		WBK_BurnEm_FlamethrowerSoundArray = ['flamewerfer_start','flamewerfer_looping',4.8,'flamewerfer_end'];
		WBK_BurnEm_FlamethrowerParticlePos = [[-0.73,0.35,-0.3],'leftHand'];
		WBK_BurnEm_FlamethrowerDistance = 18.5;
		scope=2;
		model="\3AS\3AS_Weapons\X42\BX42.p3d";
		picture="\3AS\3AS_Weapons\X42\Data\BTX42_ui_ca.paa";
		UiPicture="\A3\Weapons_F\data\UI\icon_regular_CA.paa";
		weaponInfoType="RscWeaponZeroing";
		magazines[]={"AUX_95th_BX42_Fuel"};
		muzzles[]={"this"}; // , "Launcher"
		// class Launcher: AUX_95th_BX42_Muzzle{};
		class WeaponSlotsInfo: WeaponSlotsInfo{mass=40;};
		handAnim[]= {"OFP2_ManSkeleton", "3AS\3AS_Weapons\Data\Anim\BX42.rtm" };
	};
};
