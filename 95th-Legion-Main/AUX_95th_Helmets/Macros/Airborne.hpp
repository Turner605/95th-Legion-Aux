#define NEW_AUX_95TH_AIRBORNE_HELMET(player,squad,displaySquad) class AUX_95th_Helmet_Airborne_##player## : lsd_gar_airborne_new {\
    scope = 2;\
    scopeArsenal = 2;\
	author=95th Aux Team;\
	picture=\AUX_95th_Helmets\Data\Insignias\##squad##;\
	displayName=[95th] ##displaySquad## Helmets;\
	hiddenSelectionsTextures[]={\
		\AUX_95th_Helmets\Data\Airborne\Helmet_##player##.paa,\
		\AUX_95th_Helmets\Data\Airborne\Helmet_##player##.paa\
	};\
	class XtdGearInfo {\
		model = AUX_95th_Helmet_Squad_##squad##;\
		Type = Airborne;\
		Player = ##player##;\
	};\
};