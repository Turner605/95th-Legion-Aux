class CfgPatches 
{ 
    class 95th_Extra_Backpacks
    {
        author="95th Aux Team";
		scope=2; 
		scopecurator=2;
        name="95th Legion Extra Backpacks";
        requiredAddons[] = {
			"WBK_PhoenixTreal_FlamethrowerMOD", 
			"JLTS_characters_CloneArmor"
		};
		units[] = {};
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
		hiddenSelectionsTextures[]={"\95th_Extra_Weapons\Data\95th_Clone_Flame_Pack.paa"}; 
	};

	class JLTS_Clone_jumppack_mc;
	class JLTS_Clone_jumppack_JT12;

	class 95th_JumpPack_MC : JLTS_Clone_jumppack_mc
	{
		author="95th Aux Team";
		displayName="[95th] Command JumpPack";
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\CloneArmor\data\Clone_jumppack_mc_co.paa"
		};
		RD501_jumppack_energy_capacity=10;
		RD501_jumppack_recharge=4;
		NSM_jumppack_energy_capacity=10;
		NSM_jumppack_recharge=4;
		RD501_jumppack_jump_types[]=
		{
			{"Forward Jump",{12,20,50,0,0,0}},
			{"Short Jump",{12,5,30,0,1,0}}
		};
	}

	class 95th_JumpPack : JLTS_Clone_jumppack_JT12
	{
		author="95th Aux Team";
		displayName="[95th] JumpPack";
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\CloneArmor2\data\Clone_jumppack_jt12_co.paa"
		};
		RD501_jumppack_energy_capacity=10;
		RD501_jumppack_recharge=4;
		NSM_jumppack_energy_capacity=10;
		NSM_jumppack_recharge=4;
	}
};