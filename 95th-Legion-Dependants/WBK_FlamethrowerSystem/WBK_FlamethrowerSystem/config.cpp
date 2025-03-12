////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Wed Mar 12 00:37:21 2025 : 'file' last modified on Tue Mar 11 19:00:44 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class WBK_PhoenixTreal_FlamethrowerMOD
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.62;
		requiredAddons[] = {"CBA_Extended_EventHandlers","CBA_MAIN"};
		author[] = {};
	};
};
class cfgMagazines
{
	class 6Rnd_12Gauge_Slug;
	class WBK_6Rnd_12Gauge_Pellets_Flame: 6Rnd_12Gauge_Slug
	{
		displayName = "Flamethrower small tank";
		count = 30;
		ammo = "Flamethrower_Fuel";
		descriptionShort = "Flame";
		displayNameShort = "Flame";
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class cfgWeapons
{
	class UBS_F;
	class arifle_MSBS65_UBS_sand_F;
	class arifle_MSBS65_UBS_sand_F_flame: arifle_MSBS65_UBS_sand_F
	{
		baseWeapon = "arifle_MSBS65_UBS_sand_F_flame";
		displayName = "Promet (Flamethrower)";
		muzzles[] = {"this","UBS_F"};
		class UBS_F: UBS_F
		{
			recoil = "recoil_default";
			recoilProne = "assaultRifleBase";
			modes[] = {"FullAuto","fullauto_medium"};
			magazines[] = {"WBK_6Rnd_12Gauge_Pellets_Flame"};
			magazineWell[] = {};
			displayName = "TSP-12 Flamethrower";
			WBK_BurnEm_IsFlamethrower = "True";
			WBK_BurnEm_FlamethrowerSoundArray = "['underbarrelflame_start','underbarrelflame_loop',11.8,'underbarrelflame_stop']";
			WBK_BurnEm_FlamethrowerParticlePos = "[[-0.22,0.12,-0.05],'leftHand']";
			WBK_BurnEm_FlamethrowerDistance = 25;
			class FullAuto: Mode_FullAuto
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					closure1[] = {};
					closure2[] = {};
					soundClosure[] = {};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"M2\addons\sounds\M2_close.ogg",2.5118864,1,1400};
					begin2[] = {"M2\addons\sounds\M2_close.ogg",2.5118864,1,1400};
					begin3[] = {"M2\addons\sounds\M2_close.ogg",2.5118864,1,1400};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
					class SoundTails
					{
						class TailTrees
						{
							sound[] = {"M2\addons\sounds\M2_tail_trees.wav",1,1,1400};
							frequency = 1;
							volume = "(1-interior/1.4)*trees";
						};
						class TailForest
						{
							sound[] = {"M2\addons\sounds\M2_tail_forest.wav",1,1,1400};
							frequency = 1;
							volume = "(1-interior/1.4)*forest";
						};
						class TailInterior
						{
							sound[] = {"M2\addons\sounds\M2_tail_interior.wav",1.5848932,1,1400};
							frequency = 1;
							volume = "interior";
						};
						class TailMeadows
						{
							sound[] = {"M2\addons\sounds\M2_tail_meadows.wav",1,1,1400};
							frequency = 1;
							volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
						};
						class TailHouses
						{
							sound[] = {"M2\addons\sounds\M2_tail_houses.wav",1,1,1400};
							frequency = 1;
							volume = "(1-interior/1.4)*houses";
						};
					};
				};
				reloadTime = 0.07;
				dispersion = 0.00116;
				recoil = "recoil_burst_pdw";
				recoilProne = "recoil_burst_prone_pdw";
				minRange = 2;
				minRangeProbab = 0.9;
				midRange = 15;
				midRangeProbab = 0.7;
				maxRange = 30;
				maxRangeProbab = 0.1;
				aiRateOfFire = 1e-06;
			};
			class fullauto_medium: FullAuto
			{
				showToPlayer = 0;
				burst = 3;
				minRange = 2;
				minRangeProbab = 0.5;
				midRange = 75;
				midRangeProbab = 0.7;
				maxRange = 150;
				maxRangeProbab = 0.05;
				aiRateOfFire = 2;
				aiRateOfFireDistance = 200;
			};
		};
	};
};
class CfgSounds
{
	sounds[] = {};
	class bm_treeOnFire_1
	{
		name = "bm_treeOnFire_1";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\tree_setOnFire_1.ogg",3.1622777,1};
		titles[] = {};
	};
	class bm_treeOnFire_2
	{
		name = "bm_treeOnFire_2";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\tree_setOnFire_2.ogg",3.1622777,1};
		titles[] = {};
	};
	class bm_treeOnFire_3
	{
		name = "bm_treeOnFire_3";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\tree_setOnFire_3.ogg",3.1622777,1};
		titles[] = {};
	};
	class bm_embers
	{
		name = "bm_embers";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\embers.ogg",3.1622777,1};
		titles[] = {};
	};
	class molotov_throw_1
	{
		name = "molotov_throw_1";
		sound[] = {"\WBK_FlamethrowerSystem\Molotov\molotov_throw_1.ogg",3.1622777,1};
		titles[] = {};
	};
	class molotov_throw_2
	{
		name = "molotov_throw_2";
		sound[] = {"\WBK_FlamethrowerSystem\Molotov\molotov_throw_2.ogg",3.1622777,1};
		titles[] = {};
	};
	class molotov_throw_3
	{
		name = "molotov_throw_3";
		sound[] = {"\WBK_FlamethrowerSystem\Molotov\molotov_throw_3.ogg",3.1622777,1};
		titles[] = {};
	};
	class hit_by_flame_1
	{
		name = "hit_by_flame_1";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\hit_by_flame_1.wav",2.818383,1};
		titles[] = {};
	};
	class hit_by_flame_2
	{
		name = "hit_by_flame_2";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\hit_by_flame_2.wav",2.818383,1};
		titles[] = {};
	};
	class hit_by_flame_3
	{
		name = "hit_by_flame_3";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\hit_by_flame_3.wav",2.818383,1};
		titles[] = {};
	};
	class hit_by_flame_4
	{
		name = "hit_by_flame_4";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\hit_by_flame_4.wav",2.818383,1};
		titles[] = {};
	};
	class Bm_gas_leak
	{
		name = "Bm_gas_leak";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\gas_leak.ogg",3.1622777,1};
		titles[] = {};
	};
	class Bm_fireFadeout
	{
		name = "Bm_fireFadeout";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\flame_stop.ogg",3.1622777,1};
		titles[] = {};
	};
	class Bm_body_fireFadeout
	{
		name = "Bm_fireFadeout";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\body_burn_stop.ogg",3.1622777,1};
		titles[] = {};
	};
	class fuelTank_befexp
	{
		name = "fuelTank_befexp";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\fuelTank_befexp.ogg",3.1622777,1};
		titles[] = {};
	};
	class fuelTank_befexp_1
	{
		name = "fuelTank_befexp_1";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\fuelTank_befexp_1.wav",3.1622777,1};
		titles[] = {};
	};
	class flamethrower_start
	{
		name = "flamethrower_start";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\flamethrower_start.ogg",2.5118864,1};
		titles[] = {};
	};
	class flamethrower_end
	{
		name = "flamethrower_end";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\flamethrower_end.ogg",2.5118864,1};
		titles[] = {};
	};
	class flamethrower_looping
	{
		name = "flamethrower_looping";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\flamethrower_looping.ogg",2.818383,1};
		titles[] = {};
	};
	class underbarrelflame_start
	{
		name = "underbarrelflame_start";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\underbarrelflame_start.ogg",2.5118864,1};
		titles[] = {};
	};
	class underbarrelflame_stop
	{
		name = "underbarrelflame_stop";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\underbarrelflame_stop.ogg",2.5118864,1};
		titles[] = {};
	};
	class underbarrelflame_loop
	{
		name = "underbarrelflame_loop";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\underbarrelflame_loop.ogg",2.818383,1};
		titles[] = {};
	};
	class flamewerfer_start
	{
		name = "flamewerfer_start";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\flamewerfer_start.wav",1.5848932,1};
		titles[] = {};
	};
	class flamewerfer_end
	{
		name = "flamewerfer_end";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\flamewerfer_end.wav",1.5848932,1};
		titles[] = {};
	};
	class flamewerfer_looping
	{
		name = "flamewerfer_looping";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\flamewerfer_looping.wav",1.4962356,1};
		titles[] = {};
	};
	class igned_idle
	{
		name = "igned_idle";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\flame_loop.ogg",3.1622777,1};
		titles[] = {};
	};
	class body_igned_idle
	{
		name = "body_igned_idle";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\body_burn_loop.ogg",3.1622777,1};
		titles[] = {};
	};
	class burnttodeath_distant1
	{
		name = "burnttodeath_distant1";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\burnttodeath_distant1.ogg",3.1622777,1};
		titles[] = {};
	};
	class burnttodeath_distant2
	{
		name = "burnttodeath_distant2";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\burnttodeath_distant2.ogg",3.1622777,1};
		titles[] = {};
	};
	class burnttodeath_distant3
	{
		name = "burnttodeath_distant3";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\burnttodeath_distant3.ogg",3.1622777,1};
		titles[] = {};
	};
	class burnttodeath_distant4
	{
		name = "burnttodeath_distant4";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\burnttodeath_distant4.ogg",3.1622777,1};
		titles[] = {};
	};
	class burnttodeath_distant5
	{
		name = "burnttodeath_distant5";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\burnttodeath_distant5.ogg",3.1622777,1};
		titles[] = {};
	};
	class burnttodeath_distant6
	{
		name = "burnttodeath_distant6";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\burnttodeath_distant6.ogg",3.1622777,1};
		titles[] = {};
	};
	class burnttodeath1
	{
		name = "burnttodeath1";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\burnttodeath1.ogg",3.1622777,1};
		titles[] = {};
	};
	class burnttodeath2
	{
		name = "burnttodeath2";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\burnttodeath2.ogg",3.1622777,1};
		titles[] = {};
	};
	class burnttodeath3
	{
		name = "burnttodeath3";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\burnttodeath3.ogg",3.1622777,1};
		titles[] = {};
	};
	class burnttodeath4
	{
		name = "burnttodeath4";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\burnttodeath4.ogg",3.1622777,1};
		titles[] = {};
	};
	class burnttodeath5
	{
		name = "burnttodeath5";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\burnttodeath5.ogg",3.1622777,1};
		titles[] = {};
	};
	class burnttodeath6
	{
		name = "burnttodeath6";
		sound[] = {"\WBK_FlamethrowerSystem\flameThrowerSounds\burnttodeath6.ogg",3.1622777,1};
		titles[] = {};
	};
};
class Extended_PreInit_EventHandlers
{
	class WBK_Flamethrower_PreInit
	{
		init = "call compile preprocessFileLineNumbers '\WBK_FlamethrowerSystem\bootstrap\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class WBK_Flamethrower_PostInit
	{
		init = "call compile preprocessFileLineNumbers '\WBK_FlamethrowerSystem\bootstrap\XEH_postInit.sqf'";
	};
};
class Extended_Killed_Eventhandlers
{
	class CAManBase
	{
		class FLAME_UNIT_DEATH
		{
			killed = "[_this select 0] spawn Flame_Death_container_ArmaOne";
		};
	};
};
class Extended_Hit_Eventhandlers
{
	class CAManBase
	{
		class FLAME_UNIT_HIT
		{
			hit = "[_this select 0, _this select 1] spawn Flame_Hit_container";
		};
	};
};
class Extended_Fired_Eventhandlers
{
	class CAManBase
	{
		class Flamethrower_Fire_Class
		{
			fired = "_this spawn Flamethrower_Fired_EH;";
		};
	};
	class Air
	{
		class Flamethrower_Sog_NapalmFire
		{
			fired = "if (WBK_BurnEm_SOG_NAPALM_Trees_var) then {_this call WBK_Sog_Napalm_EnvDamage;};";
		};
	};
};
class cfgMods
{
	author = "WebKnight";
	timepacked = "1741726844";
};
