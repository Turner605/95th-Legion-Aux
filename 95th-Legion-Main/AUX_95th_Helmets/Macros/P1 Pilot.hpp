#define NEW_AUX_95TH_P1_PILOT_HELMET(player,squad,displaySquad) class AUX_95th_Helmet_P1_Pilot_##player## : LSEA_Helmet_Pilot_P1_Base {\
    scope = 2;\
    scopeArsenal = 2;\
	author=95th Aux Team;\
	picture=\AUX_95th_Helmets\Data\Insignias\##squad##;\
	displayName=[95th] ##displaySquad## Helmets;\
	hiddenSelections[]= { Camo1, camo2, Visor };\
	hiddenSelectionsTextures[]={\
		\AUX_95th_Helmets\Data\P1 Pilot\##player##\Helmet.paa,\
		\AUX_95th_Helmets\Data\P1 Pilot\##player##\LifeSupport.paa,\
		\AUX_95th_Helmets\Data\P1 Pilot\##player##\Helmet.paa\
	};\
	class XtdGearInfo {\
		model = AUX_95th_Helmet_Squad_##squad##;\
		Type = P1Pilot;\
		Player = ##player##;\
	};\
};