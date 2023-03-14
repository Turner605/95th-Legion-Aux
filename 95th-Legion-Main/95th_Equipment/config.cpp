class CfgPatches
{
	class 95th_Legion_Equipment
	{
        author="95th Aux Team";
        name="95th Legion Equipment";
		requiredAddons[]={
			"WBK_PhoenixTreal_FlamethrowerMOD",
			"SUP_flash",
			"ls_weapons"
		};
		units[] = {};
	};
};

class CfgAmmo
{
	class SUPER_flash_ammo;
	class 95th_Concussion_Ammo: SUPER_flash_ammo {
		model="3as\3AS_Equipment\model\3AS_Thermaldet.p3d";  
	};

	class ATLAS3_st_grenade_inc;
	class 95th_Pyro_Ammo: ATLAS3_st_grenade_inc {
		model="3as\3AS_Equipment\model\3AS_Thermaldet.p3d";  
	};

	class ls_ammo_classC_thermalDet;
	class 95th_Thermal_T1_Ammo: ls_ammo_classC_thermalDet {
		model="3as\3AS_Equipment\model\3AS_Thermaldet.p3d";  
	};

	class 95th_Car_Ammo: 95th_Thermal_T1_Ammo {
		model="a3\soft_f_gamma\hatchback_01\hatchback_01_f.p3d";  
	};

	class 95th_Warning_Ammo: 95th_Thermal_T1_Ammo {
		model="ca\signs_e\signt\signt_warningrocks.p3d";  
	};
};

class cfgMagazines {
	class GrenadeInsiendPSENG;
	class 95th_Pyro_Grenade: GrenadeInsiendPSENG {
		author="95th Aux Team";
		model="3as\3AS_Equipment\model\3AS_Thermaldet.p3d";  
		displayName="Pyro Grenade";
		displayNameShort="Pyro";
		descriptionShort="Type: Offensive Flame Grenade<br />Rounds: 1<br />Used in: Hand";
		picture="\95th_Equipment\Data\Grenades\PyroGrenade.paa";
		ammo = "95th_Pyro_Ammo";
	};

	class SUPER_flash;
	class 95th_Concussion_Grenade: SUPER_flash {
		author="95th Aux Team";
		model="3as\3AS_Equipment\model\3AS_Thermaldet.p3d";
		displayName="Concussion Grenade";
		displayNameShort="Concussion";
		descriptionShort="Type: Defensive Stun Grenade<br />Rounds: 1<br />Used in: Hand";
		picture="\95th_Equipment\Data\Grenades\Concussion.paa";
		ammo = "95th_Concussion_Ammo";
	};

	class ls_mag_classC_thermalDet;
	class 95th_Thermal_T1_Grenade: ls_mag_classC_thermalDet {
		author="95th Aux Team";
		model="3as\3AS_Equipment\model\3AS_Thermaldet.p3d";
		displayName="Thermal Detonator [T1]";
		displayNameShort="T1 Thermal Det";
		descriptionShort="Type: Offensive Explosive Grenade<br />Rounds: 1<br />Used in: Hand";
		picture="\95th_Equipment\Data\Grenades\ThermalDet.paa";
		ammo="95th_Thermal_T1_Ammo";
	};

	class 95th_Car: 95th_Thermal_T1_Grenade{
		model="a3\soft_f_gamma\hatchback_01\hatchback_01_f.p3d";
		ammo="95th_Car_Ammo";
		displayName="Car";
	}

	class 95th_Warning: 95th_Thermal_T1_Grenade{
		model="ca\signs_e\signt\signt_warningrocks.p3d";
		ammo="95th_Warning_Ammo";
		displayName="Warning";
	}
}

class CfgWeapons
{
	class GrenadeLauncher;
	class Throw: GrenadeLauncher {
		class ThrowMuzzle;

		muzzles[]+={"95th_Pyro_Muzzle", "95th_Concussion_Muzzle", "95th_Thermal_T1_Muzzle", "95th_Car_Muzzle", "95th_Warning_Muzzle"};

		class 95th_Pyro_Muzzle: ThrowMuzzle {
			magazines[]= {"95th_Pyro_Grenade"};
		};

		class 95th_Concussion_Muzzle: ThrowMuzzle {
			magazines[] = {"95th_Concussion_Grenade"};
		};

		class 95th_Thermal_T1_Muzzle: ThrowMuzzle {
			magazines[]={"95th_Thermal_T1_Grenade"};
		};

		class 95th_Car_Muzzle: ThrowMuzzle {
			magazines[]={"95th_Car"};
		};

		class 95th_Warning_Muzzle: ThrowMuzzle {
			magazines[]={"95th_Warning"};
		};
	};
};

class Extended_PreInit_EventHandlers
{
	class 95th_Equip_PreInit
	{
		init="call compile preprocessFileLineNumbers '\95th_Equipment\Bootstrap\XEH_preInit.sqf'";
	};
};

class Extended_Fired_Eventhandlers
{
	class CAManBase
	{
		class 95th_Fire_Class
		{
			fired="[_this select 0, _this select 1, _this select 2, _this select 3, _this select 4, _this select 5, _this select 6] spawn Fired_95th_EH";
		};
	};
};