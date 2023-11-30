#define NEW_95TH_BACKPACK_VISIBLE(name,modelName,modelDisplayName) class AUX_95th_Backpack_Visible_##name## : JLTS_Clone_backpack {\
	author=95th Aux Team;\
	displayName=##modelDisplayName##;\
	maximumLoad = 250;\
	hiddenSelectionsTextures[]={\95th_Backpacks\Data\Backpacks\Backpack_##name##.paa};\
	class XtdGearInfo {\
		model = ##modelName##;\
		Role = ##name##;\
		Visibility = Shown;\
		Type = Normal;\
		Size = Normal;\
	};

#define NEW_95TH_BACKPACK_INVISIBLE(name,modelName,modelDisplayName) class AUX_95th_Backpack_Invisible_##name## : JLTS_Clone_backpack {\
	author=95th Aux Team;\
	displayName=##modelDisplayName##;\
	maximumLoad = 250;\
	model=\a3\weapons_f\empty.p3d;\
	class XtdGearInfo {\
		model = ##modelName##;\
		Role = ##name##;\
		Visibility = Hidden;\
		Type = Normal;\
		Size = Normal;\
	};

#define NEW_95TH_BAG_BACKPACK_VISIBLE(name,modelName,modelDisplayName) class AUX_95th_Bag_Backpack_Visible_##name## : JLTS_Clone_belt_bag {\
	author=95th Aux Team;\
	displayName=##modelDisplayName##;\
	maximumLoad = 250;\
	hiddenSelectionsTextures[]={\95th_Backpacks\Data\Backpacks\Bag_##name##.paa};\
	class XtdGearInfo {\
		model = ##modelName##;\
		Role = ##name##;\
		Visibility = Shown;\
		Type = Normal;\
		Size = Normal;\
	};

#define NEW_95TH_BAG_BACKPACK_INVISIBLE(name,modelName,modelDisplayName) class AUX_95th_Bag_Backpack_Invisible_##name## : JLTS_Clone_belt_bag {\
	author=95th Aux Team;\
	displayName=##modelDisplayName##;\
	maximumLoad = 250;\
	model=\a3\weapons_f\empty.p3d;\
	class XtdGearInfo {\
		model = ##modelName##;\
		Role = ##name##;\
		Visibility = Hidden;\
		Type = Normal;\
		Size = Normal;\
	};

#define NEW_95TH_RTO_BACKPACK_VISIBLE(name,modelName,modelDisplayName) class AUX_95th_RTO_Backpack_Visible_##name## : JLTS_Clone_backpack_RTO {\
	author=95th Aux Team;\
	displayName=##modelDisplayName##;\
	maximumLoad = 250;\
	hiddenSelectionsTextures[]={\95th_Backpacks\Data\Backpacks\Backpack_##name##.paa};\
	tf_dialog="JLTS_clone_lr_programmer_radio_dialog";\
	tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";\
	tf_encryptionCode="tf_west_radio_code";\
	tf_hasLRradio=1;\
	tf_range=16000;\
	tf_subtype="digital_lr";\
	class XtdGearInfo {\
		model = ##modelName##;\
		Role = ##name##;\
		Visibility = Shown;\
		Type = RTO;\
		Size = Normal;\
	};

#define NEW_95TH_RTO_BACKPACK_INVISIBLE(name,modelName,modelDisplayName) class AUX_95th_RTO_Backpack_Invisible_##name## : JLTS_Clone_backpack_RTO {\
	author=95th Aux Team;\
	displayName=##modelDisplayName##;\
	maximumLoad = 250;\
	model=\a3\weapons_f\empty.p3d;\
	tf_dialog="JLTS_clone_lr_programmer_radio_dialog";\
	tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";\
	tf_encryptionCode="tf_west_radio_code";\
	tf_hasLRradio=1;\
	tf_range=16000;\
	tf_subtype="digital_lr";\
	class XtdGearInfo {\
		model = ##modelName##;\
		Role = ##name##;\
		Visibility = Hidden;\
		Type = RTO;\
		Size = Normal;\
	};

#define NEW_95TH_RTO_BACKPACK_VISIBLE_MINI(name,modelName,modelDisplayName) class AUX_95th_RTO_Backpack_Visible_Mini_##name## : JLTS_Clone_RTO_pack {\
	author=95th Aux Team;\
	displayName=##modelDisplayName##;\
	maximumLoad = 250;\
	hiddenSelectionsTextures[]={\95th_Backpacks\Data\Backpacks\Backpack_Mini_##name##.paa};\
	tf_dialog="JLTS_clone_lr_programmer_radio_dialog";\
	tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";\
	tf_encryptionCode="tf_west_radio_code";\
	tf_hasLRradio=1;\
	tf_range=16000;\
	tf_subtype="digital_lr";\
	class XtdGearInfo {\
		model = ##modelName##;\
		Role = ##name##;\
		Visibility = Shown;\
		Type = RTO;\
		Size = Mini;\
	};

#define NEW_95TH_JETPACK_JT12(name,modelName,modelDisplayName) class AUX_95th_JT12_Jetpack_##name## : 3as_JT12 {\
	author=95th Aux Team;\
	displayName=##modelDisplayName##;\
	maximumLoad = 250;\
	DSS_IsInsertionDevice = 1;\
	JLTS_isJumppack = 0;\
	picture="\MRC\JLTS\characters\CloneArmor2\data\ui\Clone_jumppack_jt12_ui_ca.paa";\
	model="\MRC\JLTS\characters\CloneArmor2\CloneJumppackJT12.p3d";\
	hiddenSelectionsTextures[]={"\95th_Backpacks\Data\Jetpacks\JT12_##name##.paa"};\
	tf_dialog="JLTS_clone_lr_programmer_radio_dialog";\
	tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";\
	tf_encryptionCode="tf_west_radio_code";\
	tf_hasLRradio=1;\
	tf_range=16000;\
	tf_subtype="digital_lr";\
	NSM_jumppack_is_jumppack=1;\
	NSM_jumppack_spam_delay=1;\
	NSM_jumppack_energy_capacity=200;\
	NSM_jumppack_recharge=4;\
	NSM_jumppack_jump_effect_script="NSM_jumppack_effect_fnc_jt_21";\
	NSM_jumppack_effect_points[]={{"effect1",{0,0.60000002,1}},{"effect2",{0,0.60000002,1}}};\
	NSM_jumppack_sound_ignite[]={"NSM_Main\sounds\cdv21Start.ogg"};\
	NSM_jumppack_sound_land[]={"NSM_Main\sounds\cdv21End.ogg"};\
	NSM_jumppack_sound_idle[]={"NSM_Main\sounds\cdv21Idle.ogg"};\
	NSM_jumppack_jump_types[]={{"Forward Jump",{12,20,50,0,0,0}},{"Short Jump",{12,5,10,0,1,0}}};\
	class XtdGearInfo {\
		model = ##modelName##;\
		Role = ##name##;\
		Variant = JT12;\
	};

#define NEW_95TH_JETPACK_MC(name,modelName,modelDisplayName) class AUX_95th_MC_Jetpack_##name## : 3as_JT12 {\
	author=95th Aux Team;\
	displayName=##modelDisplayName##;\
	maximumLoad = 250;\
	DSS_IsInsertionDevice = 1;\
	JLTS_isJumppack = 0;\
	picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_jumppack_mc_ui_ca.paa";\
	model="\MRC\JLTS\characters\CloneArmor\CloneJumppackMC.p3d";\
	hiddenSelections[]={"camo1"};\
	hiddenSelectionsTextures[]={"\95th_Backpacks\Data\Jetpacks\MC_##name##.paa"};\
	tf_dialog="JLTS_clone_lr_programmer_radio_dialog";\
	tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";\
	tf_encryptionCode="tf_west_radio_code";\
	tf_hasLRradio=1;\
	tf_range=16000;\
	tf_subtype="digital_lr";\
	NSM_jumppack_is_jumppack=1;\
	NSM_jumppack_spam_delay=1;\
	NSM_jumppack_energy_capacity=200;\
	NSM_jumppack_recharge=4;\
	NSM_jumppack_jump_effect_script="NSM_jumppack_effect_fnc_jt_21";\
	NSM_jumppack_effect_points[]={{"effect1",{0,0.60000002,1}},{"effect2",{0,0.60000002,1}}};\
	NSM_jumppack_sound_ignite[]={"NSM_Main\sounds\cdv21Start.ogg"};\
	NSM_jumppack_sound_land[]={"NSM_Main\sounds\cdv21End.ogg"};\
	NSM_jumppack_sound_idle[]={"NSM_Main\sounds\cdv21Idle.ogg"};\
	NSM_jumppack_jump_types[]={{"Forward Jump",{12,20,50,0,0,0}},{"Short Jump",{12,5,10,0,1,0}}};\
	class XtdGearInfo {\
		model = ##modelName##;\
		Role = ##name##;\
		Variant = MC;\
	};