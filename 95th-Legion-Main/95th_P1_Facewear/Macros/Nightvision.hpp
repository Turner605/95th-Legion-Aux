#define NEW_95th_NIGHTVISION_RANGEFINDER(name) class NVG_Rangefinder_##name##_95th : SEA_P1_Rangefinder {\
	author=95th Aux Team;\
	displayName=[95th] Rangefinder;\
	hiddenSelectionsTextures[]={95th_P1_Facewear\Data\NVGs\Rangefinder\Rangefinder_##name##.paa};\
	modelOptics = \MRC\JLTS\Core_mod\nvg_optic_dummy.p3d;\
	class XtdGearInfo {\
		model = 95th_NVG_Rangefinder;\
		Colour = ##name##;\
		Overlay = Empty;\
	};

#define NEW_95th_NIGHTVISION_RANGEFINDER_OVERLAY(name) class NVG_Rangefinder_Overlay_##name##_95th : SEA_P1_Rangefinder {\
	author=95th Aux Team;\
	displayName=[95th] Rangefinder;\
	hiddenSelectionsTextures[]={95th_P1_Facewear\Data\NVGs\Rangefinder\Rangefinder_##name##.paa};\
	modelOptics = \MRC\JLTS\characters\CloneArmor\CloneNVG_regular_optic.p3d;\
	class XtdGearInfo {\
		model = 95th_NVG_Rangefinder;\
		Colour = ##name##;\
		Overlay = Visible;\
	};

#define NEW_95th_NIGHTVISION_VISOR(name) class NVG_Visor_##name##_95th : PhoenixCore_NVG_CloneNVG {\
	author=95th Aux Team;\
	displayName=[95th] Visor;\
	hiddenSelectionsTextures[]={95th_P1_Facewear\Data\NVGs\Visor\Visor_##name##.paa};\
	modelOptics = \MRC\JLTS\Core_mod\nvg_optic_dummy.p3d;\
	class XtdGearInfo {\
		model = 95th_NVG_Visor;\
		Colour = ##name##;\
		Overlay = Empty;\
	};

#define NEW_95th_NIGHTVISION_VISOR_OVERLAY(name) class NVG_Visor_Overlay_##name##_95th : PhoenixCore_NVG_CloneNVG {\
	author=95th Aux Team;\
	displayName=[95th] Visor;\
	hiddenSelectionsTextures[]={95th_P1_Facewear\Data\NVGs\Visor\Visor_##name##.paa};\
	modelOptics = \MRC\JLTS\characters\CloneArmor\CloneNVG_regular_optic.p3d;\
	class XtdGearInfo {\
		model = 95th_NVG_Visor;\
		Colour = ##name##;\
		Overlay = Visible;\
	};

#define NEW_95th_NIGHTVISION_SERGEANT(name) class NVG_Sergeant_##name##_95th : JLTS_PA_Core_P1_CloneCC {\
	author=95th Aux Team;\
	displayName=[95th] Sergeant;\
	hiddenSelectionsTextures[]={95th_P1_Facewear\Data\NVGs\Sergeant\Sergeant_##name##.paa};\
	hiddenSelections[] = {camo};\
	modelOptics = \MRC\JLTS\Core_mod\nvg_optic_dummy.p3d;\
	class XtdGearInfo {\
		model = 95th_NVG_Sergeant;\
		Colour = ##name##;\
		Overlay = Empty;\
	};

#define NEW_95th_NIGHTVISION_SERGEANT_OVERLAY(name) class NVG_Sergeant_Overlay_##name##_95th : JLTS_PA_Core_P1_CloneCC {\
	author=95th Aux Team;\
	displayName=[95th] Sergeant;\
	hiddenSelectionsTextures[]={95th_P1_Facewear\Data\NVGs\Sergeant\Sergeant_##name##.paa};\
	hiddenSelections[] = {head};\
	modelOptics = \MRC\JLTS\characters\CloneArmor\CloneNVG_regular_optic.p3d;\
	class XtdGearInfo {\
		model = 95th_NVG_Sergeant;\
		Colour = ##name##;\
		Overlay = Visible;\
	};

#define NEW_95th_NIGHTVISION_LIEUTENANT(name) class NVG_Lieutenant_##name##_95th : JLTS_PA_Core_P1_CloneMC {\
	author=95th Aux Team;\
	displayName=[95th] Lieutenant;\
	hiddenSelectionsTextures[]={95th_P1_Facewear\Data\NVGs\Lieutenant\Lieutenant_##name##.paa};\
	hiddenSelections[] = {camo};\
	modelOptics = \MRC\JLTS\Core_mod\nvg_optic_dummy.p3d;\
	class XtdGearInfo {\
		model = 95th_NVG_Lieutenant;\
		Colour = ##name##;\
		Overlay = Empty;\
	};

#define NEW_95th_NIGHTVISION_LIEUTENANT_OVERLAY(name) class NVG_Lieutenant_Overlay_##name##_95th : JLTS_PA_Core_P1_CloneMC {\
	author=95th Aux Team;\
	displayName=[95th] Lieutenant;\
	hiddenSelectionsTextures[]={95th_P1_Facewear\Data\NVGs\Lieutenant\Lieutenant_##name##.paa};\
	hiddenSelections[] = {camo};\
	modelOptics = \MRC\JLTS\characters\CloneArmor\CloneNVG_regular_optic.p3d;\
	class XtdGearInfo {\
		model = 95th_NVG_Lieutenant;\
		Colour = ##name##;\
		Overlay = Visible;\
	};	

#define NEW_95th_NIGHTVISION_MEDICAL(name) class NVG_Medical_##name##_95th : lsd_gar_medicalScanner_nvg {\
	author=95th Aux Team;\
	displayName=[95th] Medical;\
	hiddenSelectionsTextures[]={\
		\95th_P1_Facewear\Data\NVGs\Medical\Medical_##name##.paa,\
		#(argb,8,8,3)color(0.501961,1,1,1.0,co)\
	};\
	modelOptics = \MRC\JLTS\Core_mod\nvg_optic_dummy.p3d;\
	class ItemInfo: ItemInfo {\
		type = 616;\
		hiddenSelections[] = {"Camo1"};\
		hiddenSelectionsTextures[] = {"\95th_P1_Facewear\Data\NVGs\Medical\Medical_##name##.paa"};\
		uniformModel = "\lsd_equipment_bluefor\nvg\gar\medicScanner\lsd_gar_medicalScanner_nvg_on";\
		modelOff = "\lsd_equipment_bluefor\nvg\gar\medicScanner\lsd_gar_medicalScanner_nvg_off";\
		mass = 1;\
	};\
	class XtdGearInfo {\
		model = 95th_NVG_Medical;\
		Colour = ##name##;\
		Overlay = Empty;\
	};

#define NEW_95th_NIGHTVISION_MEDICAL_OVERLAY(name) class NVG_Medical_Overlay_##name##_95th : lsd_gar_medicalScanner_nvg {\
	author=95th Aux Team;\
	displayName=[95th] Medical;\
	hiddenSelectionsTextures[]={\
		\95th_P1_Facewear\Data\NVGs\Medical\Medical_##name##.paa,\
		#(argb,8,8,3)color(0.501961,1,1,1.0,co)\
	};\
	modelOptics = \MRC\JLTS\characters\CloneArmor\CloneNVG_regular_optic.p3d;\
	class ItemInfo: ItemInfo {\
		type = 616;\
		hiddenSelections[] = {"Camo1"};\
		hiddenSelectionsTextures[] = {"\95th_P1_Facewear\Data\NVGs\Medical\Medical_##name##.paa"};\
		uniformModel = "\lsd_equipment_bluefor\nvg\gar\medicScanner\lsd_gar_medicalScanner_nvg_on";\
		modelOff = "\lsd_equipment_bluefor\nvg\gar\medicScanner\lsd_gar_medicalScanner_nvg_off";\
		mass = 1;\
	};\
	class XtdGearInfo {\
		model = 95th_NVG_Medical;\
		Colour = ##name##;\
		Overlay = Visible;\
	};	