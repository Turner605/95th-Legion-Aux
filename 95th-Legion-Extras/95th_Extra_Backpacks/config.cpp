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
};