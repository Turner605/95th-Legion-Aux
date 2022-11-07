class CfgPatches
{
	class 95th_Legion_Backpacks
	{
        author="95th Aux Team";
        name="95th Legion Backpacks";
		requiredAddons[]=
		{
			"JLTS_characters_CloneArmor"
		};
		weapons[] = {};
		units[] = {};
	};
};

class CfgVehicles 
{ 
    //************************************************************************************************************************************************************************************************
    //*****             Backpacks                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    
	class JLTS_Clone_belt_bag;
	class 95th_Backpack_Trooper: JLTS_Clone_belt_bag
	{
		author="95th Aux";
		scope=2;
		maximumLoad = 250;
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_belt_bag_ui_ca.paa";
		displayName="Trooper Bag";
		model="\MRC\JLTS\characters\CloneArmor\CloneBeltBag.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\CloneArmor\data\Clone_belt_bag_co.paa"
		};
	};

	class JLTS_Clone_backpack;
	class 95th_Backpack_Heavy: JLTS_Clone_backpack
	{
		author="95th Aux";
		scope=2;
		maximumLoad = 300;
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
		displayName="Heavy Backpack";
		model="\MRC\JLTS\characters\CloneArmor\CloneBackpack.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\CloneArmor\data\Clone_backpack_co.paa"
		};
	};

	class 95th_Backpack_Medic: JLTS_Clone_backpack
	{
		author="95th Aux";
		scope=2;
		maximumLoad = 350;
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
		displayName="Medic Backpack";
		model="\MRC\JLTS\characters\CloneArmor\CloneBackpack.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\CloneArmor\data\Clone_backpack_medic_co.paa"
		};
	};

	class 95th_Backpack_EOD: JLTS_Clone_backpack
	{
		author="95th Aux";
		scope=2;
		maximumLoad = 350;
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
		displayName="EOD Backpack";
		model="\MRC\JLTS\characters\CloneArmor\CloneBackpack.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\CloneArmor\data\Clone_backpack_eod_co.paa"
		};
	};

	class JLTS_Clone_backpack_RTO;
	class 95th_Backpack_RTO: JLTS_Clone_backpack_RTO
	{
		author="95th Aux";
		scope=2;
		maximumLoad = 250;
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
		displayName="RTO Backpack";
		model="\MRC\JLTS\characters\CloneArmor\CloneBackpackRTO.p3d";
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\CloneArmor\data\Clone_backpack_co.paa"
		};
		tf_dialog="JLTS_clone_rto_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=25000;
		tf_subtype="digital_lr";
	};

	class JLTS_Clone_RTO_pack;
	class 95th_Backpack_Mini_RTO: JLTS_Clone_RTO_pack
	{
		author="95th Aux";
		scope=2;
		maximumLoad = 250;
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_RTO_pack_ui_ca.paa";
		displayName="Mini RTO Backpack";
		model="\MRC\JLTS\characters\CloneArmor\CloneRTOPack.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\CloneArmor\data\Clone_RTO_pack_co.paa"
		};
		tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=12000;
		tf_subtype="digital_lr";
		mass=22;
	};

}; 