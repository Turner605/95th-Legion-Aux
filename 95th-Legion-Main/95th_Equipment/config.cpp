class CfgPatches
{
	class 95th_Equipment
	{
        author="95th Aux Team";
        name="95th Legion Equipment";
		requiredAddons[]={
			"ls_weapons"
		};
		units[] = {};
	};
};

class CfgAmmo
{
	class ls_ammo_classC_thermalDet;
	class 95th_Thermal_T1_Ammo: ls_ammo_classC_thermalDet {
		model="3as\3AS_Equipment\model\3AS_Thermaldet.p3d";  
	};
};

class cfgMagazines {
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
}

class CfgWeapons
{
	class GrenadeLauncher;
	class Throw: GrenadeLauncher {
		class ThrowMuzzle;

		muzzles[]+={"95th_Thermal_T1_Muzzle"};

		class 95th_Thermal_T1_Muzzle: ThrowMuzzle {
			magazines[]={"95th_Thermal_T1_Grenade"};
		};
	};
};