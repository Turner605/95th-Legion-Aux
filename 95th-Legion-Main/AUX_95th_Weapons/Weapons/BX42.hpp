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
	muzzles[]={"this"};
	class WeaponSlotsInfo: WeaponSlotsInfo{mass=40;};
	handAnim[]= {"OFP2_ManSkeleton", "3AS\3AS_Weapons\Data\Anim\BX42.rtm" };
};