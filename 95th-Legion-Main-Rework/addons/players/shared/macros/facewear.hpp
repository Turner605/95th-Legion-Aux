#define NEW_95TH_ANTENNA(COLOUR) class AUX_95th_P1_Facewear_Antenna_##COLOUR : AUX_95th_Facewear_Base {\
    displayName=QUOTE([95th] P1 Facewear);\
	scope=2;\
	model = QUOTE(\lsd_equipment_bluefor\facewear\gar\arfAntenna\lsd_gar_arfAntenna.p3d);\
    hiddenSelectionsTextures[]={QUOTE(\z\AUX_95th\addons\players\shared\data\facewear\Antenna\COLOUR.paa)};\
    class XtdGearInfo {\
        model = QUOTE(AUX_95th_Facewear_P1);\
        Type = QUOTE(Antenna);\
        Colour = QUOTE(COLOUR);\
    };\
}

#define NEW_95TH_HEADLAMP(COLOUR) class AUX_95th_P1_Facewear_Headlamp_##COLOUR : AUX_95th_Facewear_Base {\
    displayName=QUOTE([95th] P1 Facewear);\
	scope=2;\
	model = QUOTE(\lsd_equipment_bluefor\facewear\gar\headlampSingle\lsd_gar_p1_lamp.p3d);\
    hiddenSelectionsTextures[]={QUOTE(\z\AUX_95th\addons\players\shared\data\facewear\Headlamp\COLOUR.paa)};\
    class XtdGearInfo {\
        model = QUOTE(AUX_95th_Facewear_P1);\
        Type = QUOTE(Headlamp);\
        Colour = QUOTE(COLOUR);\
    };\
}

#define NEW_95TH_HEADLAMPS(COLOUR) class AUX_95th_P1_Facewear_Headlamps_##COLOUR : AUX_95th_Facewear_Base {\
    displayName=QUOTE([95th] P1 Facewear);\
	scope=2;\
	model = QUOTE(\3AS\3AS_Characters\Clones\Headgear\3as_P1_lamps.p3d);\
    hiddenSelectionsTextures[]={QUOTE(\z\AUX_95th\addons\players\shared\data\facewear\Headlamps\COLOUR.paa)};\
    class XtdGearInfo {\
        model = QUOTE(AUX_95th_Facewear_P1);\
        Type = QUOTE(Headlamps);\
        Colour = QUOTE(COLOUR);\
    };\
}

#define NEW_95TH_SCARF(COLOUR) class AUX_95th_Facewear_Scarf_##COLOUR : SWLB_CEE_Clone_Scarf {\
    displayName=QUOTE([95th] P1 Scarfs);\
	author = QUOTE(95th Aux Team);\
	scope=2;\
    hiddenSelectionsTextures[]={QUOTE(\z\AUX_95th\addons\players\shared\data\facewear\Scarf\COLOUR.paa)};\
    class XtdGearInfo {\
        model = QUOTE(AUX_95th_Facewear_Scarfs);\
        Colour = QUOTE(COLOUR);\
    };\
}

#define NEW_95TH_PONCHO(COLOUR) class AUX_95th_Facewear_Poncho_##COLOUR : PhoenixCore_Poncho {\
    displayName=QUOTE([95th] P1 Ponchos);\
	author = QUOTE(95th Aux Team);\
	scope=2;\
    hiddenSelectionsTextures[]={QUOTE(\z\AUX_95th\addons\players\shared\data\facewear\Poncho\COLOUR.paa)};\
    class XtdGearInfo {\
        model = QUOTE(AUX_95th_Facewear_Ponchos);\
        Colour = QUOTE(COLOUR);\
    };\
}
