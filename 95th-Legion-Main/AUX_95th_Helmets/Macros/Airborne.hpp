#define NEW_AUX_95TH_AIRBORNE_HELMET(player,squad) class AUX_95th_Helmet_Airborne_##player## : lsd_gar_airborne_new {\
    scope = 2;\
    scopeArsenal = 2;\
	author=95th Aux Team;\
	displayName=[95th] Helmet;\
	hiddenSelectionsTextures[]={\
		\AUX_95th_Helmets\Data\Airborne\Helmet_##player##.paa,\
		\AUX_95th_Helmets\Data\Airborne\Helmet_##player##.paa\
	};\
	class XtdGearInfo {\
		model = AUX_95th_Helmet;\
		Type = Airborne;\
		Squad = ##squad##;\
		Player = ##player##;\
	};\
};