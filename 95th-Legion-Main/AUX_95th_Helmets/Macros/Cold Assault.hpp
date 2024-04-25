#define NEW_AUX_95TH_COLD_ASSAULT_HELMET(player,squad,displaySquad) class AUX_95th_Helmet_Cold_Assault_##player## : 3AS_H_ColdAssault_Helmet {\
    scope = 2;\
    scopeArsenal = 2;\
	author=95th Aux Team;\
	picture=\AUX_95th_Helmets\Data\Insignias\##squad##;\
	displayName=[95th] ##displaySquad## Helmets;\
	hiddenSelectionsTextures[]={\
		\AUX_95th_Helmets\Data\Cold Assault\Helmet_##player##,\
		\AUX_95th_Helmets\Data\Cold Assault\Helmet_##player##,\
		\AUX_95th_Helmets\Data\Cold Assault\Helmet_##player##\
	};\
	class XtdGearInfo {\
		model = AUX_95th_Helmet_Squad_##squad##;\
		Type = ColdAssault;\
		Player = ##player##;\
	};\
};