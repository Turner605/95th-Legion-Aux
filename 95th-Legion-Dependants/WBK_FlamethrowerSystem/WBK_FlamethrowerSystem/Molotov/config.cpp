////////////////////////////////////////////////////////////////////
//DeRap: Molotov\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Wed Mar 12 00:37:21 2025 : 'file' last modified on Tue Mar 11 19:00:44 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Grenade_PS
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.01;
		requiredAddons[] = {"A3_characters_F","A3_Data_F"};
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class WBK_MolotovCoctail_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"WBK_MolotovCoctail_close","WBK_MolotovCoctail_far"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class WBK_Inciendiyery_SoundSet: WBK_MolotovCoctail_SoundSet
	{
		soundShaders[] = {"WBK_Inc_close","WBK_Inc_Far"};
	};
};
class CfgSoundShaders
{
	class WBK_MolotovCoctail_close
	{
		samples[] = {{"\WBK_FlamethrowerSystem\Molotov\molotov_explode_close_1",1},{"\WBK_FlamethrowerSystem\Molotov\molotov_explode_close_2",1},{"\WBK_FlamethrowerSystem\Molotov\molotov_explode_close_3",1}};
		volume = 1.1;
		range = 70;
		rangeCurve[] = {{0,1},{60,1},{70,1},{250,0}};
	};
	class WBK_MolotovCoctail_far
	{
		samples[] = {{"\WBK_FlamethrowerSystem\Molotov\molotov_explode_dist",1}};
		volume = 1.1;
		range = 250;
		rangeCurve[] = {{0,0},{60,0.5},{70,1},{250,1}};
	};
	class WBK_Inc_close
	{
		samples[] = {{"\WBK_FlamethrowerSystem\Molotov\Inc_close",1}};
		volume = 1.1;
		range = 70;
		rangeCurve[] = {{0,1},{60,1},{70,1},{250,0}};
	};
	class WBK_Inc_Far
	{
		samples[] = {{"\WBK_FlamethrowerSystem\Molotov\Inc_dist",1}};
		volume = 1.1;
		range = 250;
		rangeCurve[] = {{0,0},{60,0.5},{70,1},{250,1}};
	};
};
class CfgAmmo
{
	class SmokeShell;
	class ATLAS3_st_grenade: SmokeShell
	{
		explosionSoundEffect = "DefaultExplosion";
		timeToLive = 900;
		grenadeFireSound[] = {};
		grenadeBurningSound[] = {};
		model = "\WBK_FlamethrowerSystem\Molotov\Molotov.p3d";
		simulation = "shotGrenade";
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		deflecting = 5;
		airFriction = -0.001;
		whistleDist = 16;
		typicalSpeed = 26;
		explosionTime = 0;
		fuseDistance = 0.5;
		directionalExplosion = 0;
		deflectionSlowDown = 0.8;
		simulationStep = 0.05;
		SoundSetExplosion[] = {"WBK_MolotovCoctail_SoundSet"};
	};
	class ATLAS3_st_grenade_inc: ATLAS3_st_grenade
	{
		model = "\A3\Weapons_f\ammo\smokegrenade_red";
		explosionTime = 3;
		SoundSetExplosion[] = {"WBK_Inciendiyery_SoundSet"};
	};
};
class cfgMagazines
{
	class Default;
	class CA_Magazine: Default{};
	class HandGrenade: CA_Magazine{};
	class GrenadeMolotovPSRUS: HandGrenade
	{
		author = "PhoenixSystems";
		model = "\WBK_FlamethrowerSystem\Molotov\Molotov.p3d";
		displayName = "Molotov";
		picture = "\WBK_FlamethrowerSystem\Molotov\data\Molotov.paa";
		displayNameShort = "Molotov";
		ammo = "ATLAS3_st_grenade";
		nameSoundWeapon = "Chemlight";
		nameSound = "Chemlight";
		simulation = "shotShell";
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		deflecting = 5;
		airFriction = -0.001;
		whistleDist = 16;
		typicalSpeed = 26;
		explosionTime = 0;
		fuseDistance = 0.5;
		directionalExplosion = 0;
		deflectionSlowDown = 0.8;
		simulationStep = 0.05;
	};
	class GrenadeInsiendPSENG: HandGrenade
	{
		author = "PhoenixSystems";
		model = "\A3\Weapons_f\ammo\smokegrenade_red";
		displayName = "Incendiary Grenade";
		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_red_ca.paa";
		displayNameShort = "Incendiary Grenade";
		ammo = "ATLAS3_st_grenade_inc";
		nameSoundWeapon = "Chemlight";
		nameSound = "Chemlight";
		simulation = "shotShell";
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		deflecting = 5;
		airFriction = -0.001;
		whistleDist = 16;
		typicalSpeed = 26;
		explosionTime = 0;
		fuseDistance = 0.5;
		directionalExplosion = 0;
		deflectionSlowDown = 0.8;
		simulationStep = 0.05;
	};
};
class CfgWeapons
{
	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		muzzles[] += {"GrenadePS_Muzzle","GrenadePS_MuzzleInc"};
		class HandGrenadeMuzzle;
		class GrenadePS_Muzzle: HandGrenadeMuzzle
		{
			displayName = "Molotov";
			magazines[] = {"GrenadeMolotovPSRUS"};
		};
		class GrenadePS_MuzzleInc: HandGrenadeMuzzle
		{
			displayName = "Incendiary";
			magazines[] = {"GrenadeInsiendPSENG"};
		};
	};
};
class cfgMods
{
	author = "WebKnight";
	timepacked = "1741726844";
};
