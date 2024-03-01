#define NEW_AUX_95TH_P1_PILOT_HELMET(player) class AUX_95th_Helmet_P1_Pilot_##player## : LSEA_Helmet_Pilot_P1_Base {\
    scope = 2;\
    scopeArsenal = 2;\
	author=95th Aux Team;\
	displayName=[95th] Helmet;\
	hiddenSelections[]= { Camo1, camo2, Visor };\
	hiddenSelectionsTextures[]={\
		\AUX_95th_Helmets\Data\P1 Pilot\##name##\Helmet.paa,\
		\AUX_95th_Helmets\Data\P1 Pilot\##name##\LifeSupport.paa,\
		\AUX_95th_Helmets\Data\P1 Pilot\##name##\Helmet.paa\
	};\
	class XtdGearInfo {\
		model = AUX_95th_Helmet;\
		Type = P1Pilot;\
		Player = ##player##;\
	};\
};