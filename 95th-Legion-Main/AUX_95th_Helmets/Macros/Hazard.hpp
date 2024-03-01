#define NEW_AUX_95TH_HAZARD_HELMET(player,squad) class AUX_95th_Helmet_Hazard_##player## : SEA_Helmet_Hazard_Base {\
    scope = 2;\
    scopeArsenal = 2;\
	author=95th Aux Team;\
	displayName=;\
	hiddenSelectionsTextures[]={\
		\AUX_95th_Helmets\Data\Hazard\Helmet_##player##.paa,\
		\JLTS_AE\Data\BaseTextures\Hazard\Necc_CO.paa,\
		\AUX_95th_Helmets\Data\Hazard\Helmet_##player##.paa\
	};\
	class XtdGearInfo {\
		model = AUX_95th_Helmet_Squad_##squad##;\
		Type = Hazard;\
		Player = ##player##;\
	};\
};