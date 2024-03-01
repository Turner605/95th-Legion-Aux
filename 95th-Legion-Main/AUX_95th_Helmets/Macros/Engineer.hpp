#define NEW_AUX_95TH_ENGINEER_HELMET(player,squad) class AUX_95th_Helmet_Engineer_##player## : SEA_Helmet_Engineer_Base {\
    scope = 2;\
    scopeArsenal = 2;\
	author=95th Aux Team;\
	displayName=[95th] Helmet;\
	hiddenSelectionsTextures[]={\
		\AUX_95th_Helmets\Data\Engineer\Helmet_##player##.paa,\
		\AUX_95th_Helmets\Data\Engineer\Helmet_##player##.paa\
	};\
	class XtdGearInfo {\
		model = AUX_95th_Helmet;\
		Type = Engineer;\
		Squad = ##squad##;\
		Player = ##player##;\
	};\
};