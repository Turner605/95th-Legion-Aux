class CfgPatches {
	class 95th_Extra_Equipment {
        author="95th Aux Team";
        name="95th Legion Equipment";
		requiredAddons[]={
			"WBK_PhoenixTreal_FlamethrowerMOD"
		};
		units[] = {};
	};
};

class CfgAmmo {
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
};

class CfgWeapons {
	class Default;
	class GrenadeLauncher: Default{};

	class Throw: GrenadeLauncher {
		class ThrowMuzzle;

		muzzles[]+={"95th_Pyro_Muzzle"};

		//---------------------------------------------------------------------------------------------------------------------------
		//---------------------------------------------------Pyro Muzzles-------------------------------------------------------
		//---------------------------------------------------------------------------------------------------------------------------

		class 95th_Pyro_Muzzle: ThrowMuzzle { magazines[]= {"95th_Pyro_Grenade"}; };
	};
};

class Extended_PostInit_EventHandlers {
	class 95th_Extra_Equipment_PostInit {
		init="call compile preprocessFileLineNumbers '\95th_Extra_Equipment\Init\XEH_postInit.sqf'";
	};
};