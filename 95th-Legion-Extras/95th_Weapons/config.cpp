class CfgPatches 
{ 
    class 95th_Legion_Weapons
    {
        author="95th Aux Team";
		scope=2; 
		scopecurator=2;
        name="95th Legion CIS";
        requiredAddons[] = {
			"WBK_PhoenixTreal_FlamethrowerMOD", 
			"JLTS_characters_CloneArmor",
			"3AS_Weapons"
		};
		units[] = {
			"95th_Marine_Test"
		};
    };
}; 

class CfgWeapons
{
	class 41_Flammenwerfer_02_F; //// Base flamethrower weapon
	class WeaponSlotsInfo;
	class 95th_FlameThrower: 41_Flammenwerfer_02_F
	{
		WBK_BurnEm_IsFlamethrower = "True"; ///// Defines if that weapon is a flamethrower
		WBK_BurnEm_RequiredBackpack = "95th_FlameThrower_Backpack"; ////// If that flamethrower requires aditional backpack for usage, leave blank if you want so flamethrower can operate on its own
		WBK_BurnEm_FlamethrowerSoundArray = ['flamewerfer_start','flamewerfer_looping',4.8,'flamewerfer_end']; ///////Sounds that will be used by flamethrower [start_sound,loop_sound,loop_delay,end_sound]
		WBK_BurnEm_FlamethrowerParticlePos=[[-0.73,0.35,-0.3],'leftHand']; //////Position of the particle, use attachTo command to see where to put it, second element is the bone that particles will be attached
		WBK_BurnEm_FlamethrowerDistance = 12.5; /////Distance of the flame
		
		////////And here is default weapon config, for that search BIS wiki
		scope=2;
		displayName="41-Flammenwerfer";
		author="PhoenixTREAL And Webknight";
		model="\3AS\3AS_Weapons\X42\BX42.p3d";
		picture="\3AS\3AS_Weapons\X42\Data\BTX42_ui_ca.paa";
		UiPicture="\A3\Weapons_F\data\UI\icon_regular_CA.paa";
		weaponInfoType="RscWeaponZeroing";
		muzzles[]=
		{
			"this"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=40;
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"3AS\3AS_Weapons\Data\Anim\BX42.rtm"
		};
	};
};