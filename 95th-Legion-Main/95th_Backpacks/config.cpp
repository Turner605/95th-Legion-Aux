class CfgPatches {
	class 95th_Legion_Backpacks {
        author="95th Aux Team";
        name="95th Legion Backpacks";
		requiredAddons[]= {
			"JLTS_characters_CloneArmor",
			"3as_Backpacks"
		};
		units[] = {
			"95th_Backpack_Trooper"
		};
	};
};

class CfgVehicles { 
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
		displayName="[95th] Trooper Bag";
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
		displayName="[95th] Heavy Backpack";
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

	class 95th_Backpack_Medic: JLTS_Clone_backpack {
		author="95th Aux";
		scope=2;
		maximumLoad = 350;
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
		displayName="[95th] Medic Backpack";
		model="\MRC\JLTS\characters\CloneArmor\CloneBackpack.p3d";
		hiddenSelections[]={"camo1"};
		hiddenSelectionsTextures[]={"\MRC\JLTS\characters\CloneArmor\data\Clone_backpack_medic_co.paa"};

		tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=16000;
		tf_subtype="digital_lr";
	};

	class 95th_Backpack_EOD: JLTS_Clone_backpack
	{
		author="95th Aux";
		scope=2;
		maximumLoad = 350;
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
		displayName="[95th] Ordnance Backpack";
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
		displayName="[95th] RTO Backpack";
		model="\MRC\JLTS\characters\CloneArmor\CloneBackpackRTO.p3d";
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\CloneArmor\data\Clone_backpack_co.paa"
		};
		tf_dialog="JLTS_clone_rto_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=16000;
		tf_subtype="digital_lr";
	};

	class JLTS_Clone_RTO_pack;
	class 95th_Backpack_Mini_RTO: JLTS_Clone_RTO_pack
	{
		author="95th Aux";
		scope=2;
		maximumLoad = 250;
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_RTO_pack_ui_ca.paa";
		displayName="[95th] Mini RTO Backpack";
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
		tf_range=16000;
		tf_subtype="digital_lr";
		mass=22;
	};

	class 3as_JT12;
	class 95th_JumpPack_Base : 3as_JT12{
		author="95th Aux Team";
		displayName="[95th] JumpPack Base";
		scope=0;
		maximumLoad = 250;

		tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=16000;
		tf_subtype="digital_lr";

		DSS_IsInsertionDevice = 1;
	}

	class 95th_JumpPack : 95th_JumpPack_Base{
		author="95th Aux Team";
		displayName="[95th] JumpPack";
		DSS_IsInsertionDevice = 1;
		scope=2;
		picture="\MRC\JLTS\characters\CloneArmor2\data\ui\Clone_jumppack_jt12_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor2\CloneJumppackJT12.p3d";
		hiddenSelections[]={"camo1"};
		hiddenSelectionsTextures[]={"\95th_Backpacks\Data\JT12.paa"};
		JLTS_isJumppack = 1;
		JLTS_steeringCoef = 0.1;
		JLTS_jumpLimits[] = {50,{2,50},"default"};
		JLTS_energy[] = {15,150};
		JLTS_recharge = 2;
		JLTS_sounds[] = {{"MRC\JLTS\jumppacks\sounds\ignite.wss",1,1},{"MRC\JLTS\jumppacks\sounds\ignite_fail.wss",3,1},{"MRC\JLTS\jumppacks\sounds\stop.wss",1,1},{"MRC\JLTS\jumppacks\sounds\stop_emergency.wss",5,1},"JLTS_jumppack_error","JLTS_SFX_jumppack_idle"};
		JLTS_effectPoints[] = {"effect_left","effect_right"};
		JLTS_settingsDialog = "JLTS_clone_jumppack_dialog";
	}

	class 95th_JumpPack_MC : 95th_JumpPack_Base{
		author="95th Aux Team";
		displayName="[95th] MC JumpPack";
		DSS_IsInsertionDevice = 1;
		scope=2;
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_jumppack_mc_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneJumppackMC.p3d";
		hiddenSelections[]={"camo1"};
		hiddenSelectionsTextures[]={"\95th_Backpacks\Data\MCJetpack.paa"}; 
		JLTS_isJumppack = 1;
		JLTS_steeringCoef = 0.02;
		JLTS_jumpLimits[] = {15,{2,30},"default"};
		JLTS_energy[] = {5,50};
		JLTS_recharge = 2;
		JLTS_sounds[] = {{"MRC\JLTS\jumppacks\sounds\ignite.wss",1,1},{"MRC\JLTS\jumppacks\sounds\ignite_fail.wss",3,1},{"MRC\JLTS\jumppacks\sounds\stop.wss",1,1},{"MRC\JLTS\jumppacks\sounds\stop_emergency.wss",5,1},"JLTS_jumppack_error","JLTS_SFX_jumppack_idle"};
		JLTS_effectPoints[] = {"effect"};
		JLTS_settingsDialog = "JLTS_clone_jumppack_dialog";
	}

	class 3AS_B_Katarn_Backpack;
	class 95th_Katarn_Backpack: 3AS_B_Katarn_Backpack {
		displayName = "[95th] Commando Backpack";
		hiddenSelectionsTextures[] = {"\95th_Backpacks\Data\Commando_Backpack.paa"};
		maximumLoad = 250;

		tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=16000;
		tf_subtype="digital_lr";
	};
};