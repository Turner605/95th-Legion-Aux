class CfgPatches
{
	class 95th_Extra_Equipment
	{
        author="95th Aux Team";
        name="95th Legion Equipment";
		requiredAddons[]={
			"WBK_PhoenixTreal_FlamethrowerMOD",
			"SUP_flash"
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
};

class cfgMagazines {
	class GrenadeInsiendPSENG;
	class 95th_Pyro_Grenade: GrenadeInsiendPSENG {
		author="95th Aux Team";
		model="3as\3AS_Equipment\model\3AS_Thermaldet.p3d";  
		displayName="Pyro Grenade";
		displayNameShort="Pyro";
		descriptionShort="Type: Offensive Flame Grenade<br />Rounds: 1<br />Used in: Hand";
		picture="\95th_Extra_Equipment\Data\Grenades\PyroGrenade.paa";
		ammo = "95th_Pyro_Ammo";
	};

	class SUPER_flash;
	class 95th_Concussion_Grenade: SUPER_flash {
		author="95th Aux Team";
		model="3as\3AS_Equipment\model\3AS_Thermaldet.p3d";
		displayName="Concussion Grenade";
		displayNameShort="Concussion";
		descriptionShort="Type: Defensive Stun Grenade<br />Rounds: 1<br />Used in: Hand";
		picture="\95th_Extra_Equipment\Data\Grenades\Concussion.paa";
		ammo = "95th_Concussion_Ammo";
	};
}

class CfgWeapons
{
	class GrenadeLauncher;
	class Throw: GrenadeLauncher {
		class ThrowMuzzle;

		muzzles[]+={"95th_Pyro_Muzzle", "95th_Concussion_Muzzle"};

		class 95th_Pyro_Muzzle: ThrowMuzzle {
			magazines[]= {"95th_Pyro_Grenade"};
		};

		class 95th_Concussion_Muzzle: ThrowMuzzle {
			magazines[] = {"95th_Concussion_Grenade"};
		};
	};
};

class CfgFunctions {
	class ninefiveth {
		class FlashBang {
			class flashThrown {
				file = "\95th_Extra_Equipment\Scripts\flashThrown.sqf";
			};
		};
	};
};

class Extended_PostInit_EventHandlers
{
	class 95th_Extra_Equip_PostInit
	{
		init="call compile preprocessFileLineNumbers '\95th_Extra_Equipment\Bootstrap\XEH_postInit.sqf'";
	};
};

class Extended_PreInit_EventHandlers
{
	class 95th_Extra_Equip_PreInit
	{
		init="call compile preprocessFileLineNumbers '\95th_Extra_Equipment\Bootstrap\XEH_preInit.sqf'";
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