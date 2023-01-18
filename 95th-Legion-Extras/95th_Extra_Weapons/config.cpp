class CfgPatches 
{ 
    class 95th_Extra_Weapons
    {
        author="95th Aux Team";
		scope=2; 
		scopecurator=2;
        name="95th Legion Weapons";
        requiredAddons[] = {
			"WBK_PhoenixTreal_FlamethrowerMOD", 
			"JLTS_characters_CloneArmor",
			"3AS_Weapons"
		};
		units[] = {};
    };
}; 

class CfgWeapons
{
	class 41_Flammenwerfer_02_F; //// Base flamethrower weapon
	class WeaponSlotsInfo;
	class 95th_FlameThrower: 41_Flammenwerfer_02_F
	{
		displayName="[95th] BX-42 Flamethrower";
		author="95th Aux Team";
		WBK_BurnEm_IsFlamethrower = "True";
		WBK_BurnEm_RequiredBackpack = "95th_FlameThrower_Backpack";
		WBK_BurnEm_FlamethrowerSoundArray = ['flamewerfer_start','flamewerfer_looping',4.8,'flamewerfer_end'];
		WBK_BurnEm_FlamethrowerParticlePos=[[-0.73,0.35,-0.3],'leftHand'];
		WBK_BurnEm_FlamethrowerDistance = 18.5;
		scope=2;
		model="\3AS\3AS_Weapons\X42\BX42.p3d";
		picture="\3AS\3AS_Weapons\X42\Data\BTX42_ui_ca.paa";
		UiPicture="\A3\Weapons_F\data\UI\icon_regular_CA.paa";
		weaponInfoType="RscWeaponZeroing";
		magazines[]={"95th_FlameThrower_Fuel"};
		muzzles[]={"this"};
		class WeaponSlotsInfo: WeaponSlotsInfo{mass=40;};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"3AS\3AS_Weapons\Data\Anim\BX42.rtm"
		};
	};
};

class CfgMagazines
{
	class M2_Fuel_Tank;
	class 95th_FlameThrower_Fuel: M2_Fuel_Tank
	{
		scope=2;
		mass=60;
		displayName="[95th] BX-42 Fuel";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		author="95th Aux Team";
		ammo="Flamethrower_Fuel";
		descriptionShort="Fuel for the 95th Flamethrower";
	};
};