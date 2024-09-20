#define NEW_95th_NIGHTVISION_RANGEFINDER(COLOUR) class AUX_95th_P1_NVG_Rangefinder_##COLOUR : SEA_P1_Rangefinder {\
    displayName=QUOTE([95th] P1 NVG);\
    author=QUOTE(95th Aux Team);\
    visionMode[]={QUOTE(Normal), QUOTE(NVG), QUOTE(TI)};\
    hiddenSelectionsTextures[]={QUOTE(\z\AUX_95th\addons\players\shared\data\nvg\rangefinder\COLOUR.paa)};\
    modelOptics = QUOTE(\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d);\
    class XtdGearInfo {\
        model = QUOTE(AUX_95th_NVG_P1);\
        Type = QUOTE(Rangefinder);\
        Colour = QUOTE(COLOUR);\
        Overlay = QUOTE(Disabled);\
    };\
}

#define NEW_95th_NIGHTVISION_RANGEFINDER_OVERLAY(COLOUR) class AUX_95th_P1_NVG_Rangefinder_Overlay_##COLOUR : SEA_P1_Rangefinder {\
    displayName=QUOTE([95th] P1 NVG);\
    author=QUOTE(95th Aux Team);\
    visionMode[]={QUOTE(Normal), QUOTE(NVG), QUOTE(TI)};\
    hiddenSelectionsTextures[]={QUOTE(\z\AUX_95th\addons\players\shared\data\nvg\rangefinder\COLOUR.paa)};\
    modelOptics = QUOTE(\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d);\
    DSS_HUD_Overlay_Enabled = 1;\
    class XtdGearInfo {\
        model = QUOTE(AUX_95th_NVG_P1);\
        Type = QUOTE(Rangefinder);\
        Colour = QUOTE(COLOUR);\
        Overlay = QUOTE(Enabled);\
    };\
}



#define NEW_95th_NIGHTVISION_VISOR(COLOUR) class AUX_95th_P1_NVG_Visor_##COLOUR : PhoenixCore_NVG_CloneNVG {\
    displayName=QUOTE([95th] P1 NVG);\
    author=QUOTE(95th Aux Team);\
    visionMode[]={QUOTE(Normal), QUOTE(NVG), QUOTE(TI)};\
    hiddenSelectionsTextures[]={QUOTE(\z\AUX_95th\addons\players\shared\data\nvg\visor\COLOUR.paa)};\
    modelOptics = QUOTE(\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d);\
    class XtdGearInfo {\
        model = QUOTE(AUX_95th_NVG_P1);\
        Type = QUOTE(Visor);\
        Colour = QUOTE(COLOUR);\
        Overlay = QUOTE(Disabled);\
    };\
}

#define NEW_95th_NIGHTVISION_VISOR_OVERLAY(COLOUR) class AUX_95th_P1_NVG_Visor_Overlay_##COLOUR : PhoenixCore_NVG_CloneNVG {\
    displayName=QUOTE([95th] P1 NVG);\
    author=QUOTE(95th Aux Team);\
    visionMode[]={QUOTE(Normal), QUOTE(NVG), QUOTE(TI)};\
    hiddenSelectionsTextures[]={QUOTE(\z\AUX_95th\addons\players\shared\data\nvg\visor\COLOUR.paa)};\
    modelOptics = QUOTE(\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d);\
    DSS_HUD_Overlay_Enabled = 1;\
    class XtdGearInfo {\
        model = QUOTE(AUX_95th_NVG_P1);\
        Type = QUOTE(Visor);\
        Colour = QUOTE(COLOUR);\
        Overlay = QUOTE(Enabled);\
    };\
}



#define NEW_95th_NIGHTVISION_SERGEANT(COLOUR) class AUX_95th_P1_NVG_Sergeant_##COLOUR : JLTS_PA_Core_P1_CloneCC {\
    displayName=QUOTE([95th] P1 NVG);\
    author=QUOTE(95th Aux Team);\
    visionMode[]={QUOTE(Normal), QUOTE(NVG), QUOTE(TI)};\
    hiddenSelectionsTextures[]={QUOTE(\z\AUX_95th\addons\players\shared\data\nvg\sergeant\COLOUR.paa)};\
    modelOptics = QUOTE(\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d);\
    class XtdGearInfo {\
        model = QUOTE(AUX_95th_NVG_P1);\
        Type = QUOTE(Sergeant);\
        Colour = QUOTE(COLOUR);\
        Overlay = QUOTE(Disabled);\
    };\
}

#define NEW_95th_NIGHTVISION_SERGEANT_OVERLAY(COLOUR) class AUX_95th_P1_NVG_Sergeant_Overlay_##COLOUR : JLTS_PA_Core_P1_CloneCC {\
    displayName=QUOTE([95th] P1 NVG);\
    author=QUOTE(95th Aux Team);\
    visionMode[]={QUOTE(Normal), QUOTE(NVG), QUOTE(TI)};\
    hiddenSelectionsTextures[]={QUOTE(\z\AUX_95th\addons\players\shared\data\nvg\sergeant\COLOUR.paa)};\
    modelOptics = QUOTE(\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d);\
    DSS_HUD_Overlay_Enabled = 1;\
    class XtdGearInfo {\
        model = QUOTE(AUX_95th_NVG_P1);\
        Type = QUOTE(Sergeant);\
        Colour = QUOTE(COLOUR);\
        Overlay = QUOTE(Enabled);\
    };\
}



#define NEW_95th_NIGHTVISION_LIEUTENANT(COLOUR) class AUX_95th_P1_NVG_Lieutenant_##COLOUR : JLTS_PA_Core_P1_CloneMC {\
    displayName=QUOTE([95th] P1 NVG);\
    author=QUOTE(95th Aux Team);\
    visionMode[]={QUOTE(Normal), QUOTE(NVG), QUOTE(TI)};\
    hiddenSelectionsTextures[]={QUOTE(\z\AUX_95th\addons\players\shared\data\nvg\lieutenant\COLOUR.paa)};\
    modelOptics = QUOTE(\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d);\
    class XtdGearInfo {\
        model = QUOTE(AUX_95th_NVG_P1);\
        Type = QUOTE(Lieutenant);\
        Colour = QUOTE(COLOUR);\
        Overlay = QUOTE(Disabled);\
    };\
}

#define NEW_95th_NIGHTVISION_LIEUTENANT_OVERLAY(COLOUR) class AUX_95th_P1_NVG_Lieutenant_Overlay_##COLOUR : JLTS_PA_Core_P1_CloneMC {\
    displayName=QUOTE([95th] P1 NVG);\
    author=QUOTE(95th Aux Team);\
    visionMode[]={QUOTE(Normal), QUOTE(NVG), QUOTE(TI)};\
    hiddenSelectionsTextures[]={QUOTE(\z\AUX_95th\addons\players\shared\data\nvg\lieutenant\COLOUR.paa)};\
    modelOptics = QUOTE(\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d);\
    DSS_HUD_Overlay_Enabled = 1;\
    class XtdGearInfo {\
        model = QUOTE(AUX_95th_NVG_P1);\
        Type = QUOTE(Lieutenant);\
        Colour = QUOTE(COLOUR);\
        Overlay = QUOTE(Enabled);\
    };\
}



#define NEW_95th_NIGHTVISION_MEDICAL(COLOUR) class AUX_95th_P1_NVG_Medical_##COLOUR : lsd_gar_medicalScanner_nvg {\
    displayName=QUOTE([95th] P1 NVG);\
    author=QUOTE(95th Aux Team);\
    visionMode[]={QUOTE(Normal), QUOTE(NVG), QUOTE(TI)};\
	hiddenSelections[] = {QUOTE(glow),QUOTE(Camo1)};\
	hiddenSelectionsTextures[]={\
		QUOTE(\z\AUX_95th\addons\players\shared\data\nvg\medical\COLOUR.paa),\
		"#(argb,8,8,3)color(0.501961,1,1,1.0,co)"\
	};\
    modelOptics = QUOTE(\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d);\
    class XtdGearInfo {\
        model = QUOTE(AUX_95th_NVG_P1);\
        Type = QUOTE(Medical);\
        Colour = QUOTE(COLOUR);\
        Overlay = QUOTE(Disabled);\
    };\
	class ItemInfo: ItemInfo {\
		type = 616;\
	    hiddenSelections[] = {QUOTE(glow),QUOTE(Camo1)};\
		hiddenSelectionsTextures[]={\
            QUOTE(\z\AUX_95th\addons\players\shared\data\nvg\medical\COLOUR.paa),\
		    "#(argb,8,8,3)color(0.501961,1,1,1.0,co)"\
		};\
		uniformModel = "\lsd_equipment_bluefor\accessories\gar\medicScanner\lsd_gar_medicalScanner_nvg_on";\
		modelOff = "\lsd_equipment_bluefor\accessories\gar\medicScanner\lsd_gar_medicalScanner_nvg_off";\
		mass = 1;\
	};\
}

#define NEW_95th_NIGHTVISION_MEDICAL_OVERLAY(COLOUR) class AUX_95th_P1_NVG_Medical_Overlay_##COLOUR : lsd_gar_medicalScanner_nvg {\
    displayName=QUOTE([95th] P1 NVG);\
    author=QUOTE(95th Aux Team);\
    visionMode[]={QUOTE(Normal), QUOTE(NVG), QUOTE(TI)};\
	hiddenSelections[] = {QUOTE(glow),QUOTE(Camo1)};\
	hiddenSelectionsTextures[]={\
		QUOTE(\z\AUX_95th\addons\players\shared\data\nvg\medical\COLOUR.paa),\
		"#(argb,8,8,3)color(0.501961,1,1,1.0,co)"\
	};\
    modelOptics = QUOTE(\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d);\
    DSS_HUD_Overlay_Enabled = 1;\
    class XtdGearInfo {\
        model = QUOTE(AUX_95th_NVG_P1);\
        Type = QUOTE(Medical);\
        Colour = QUOTE(COLOUR);\
        Overlay = QUOTE(Enabled);\
    };\
	class ItemInfo: ItemInfo {\
		type = 616;\
	    hiddenSelections[] = {QUOTE(glow),QUOTE(Camo1)};\
		hiddenSelectionsTextures[]={\
            QUOTE(\z\AUX_95th\addons\players\shared\data\nvg\medical\COLOUR.paa),\
		    "#(argb,8,8,3)color(0.501961,1,1,1.0,co)"\
		};\
		uniformModel = "\lsd_equipment_bluefor\accessories\gar\medicScanner\lsd_gar_medicalScanner_nvg_on";\
		modelOff = "\lsd_equipment_bluefor\accessories\gar\medicScanner\lsd_gar_medicalScanner_nvg_off";\
		mass = 1;\
	};\
}