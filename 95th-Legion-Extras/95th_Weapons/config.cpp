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
		displayName="[95th] BX-42 Flamethrower";
		author="95th Aux Team";
		WBK_BurnEm_IsFlamethrower = "True";
		WBK_BurnEm_RequiredBackpack = "95th_FlameThrower_Backpack";
		WBK_BurnEm_FlamethrowerSoundArray = ['flamewerfer_start','flamewerfer_looping',4.8,'flamewerfer_end'];
		WBK_BurnEm_FlamethrowerParticlePos=[[-0.73,0.35,-0.3],'leftHand'];
		WBK_BurnEm_FlamethrowerDistance = 12.5;
		scope=2;
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

class CfgVehicles
{
	class ReammoBox;
	class Bag_Base: ReammoBox{};
	class 95th_FlameThrower_Backpack: Bag_Base
	{
		displayName="[95th] BX-42 Flamethrower Pack";
		author="95th Aux Team";
		WBK_BurnEm_FlamethrowerBaloons = "true";
		scope=2;
		maximumLoad=250;
		mass=80;
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_jumppack_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneJumppack.p3d";
		hiddenSelections[]={"camo1"};
		hiddenSelectionsTextures[]={"\95th_Uniforms\Data\ARF\95th_Clone_Flame_Pack.paa"}; 
	};
};