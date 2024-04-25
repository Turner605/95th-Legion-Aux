#define NEW_AUX_95TH_P1_BASIC_HELMET(player,squad,displaySquad) class AUX_95th_Helmet_P1_Basic_##player## : SEA_Helmet_P1_Base {\
    scope = 2;\
    scopeArsenal = 2;\
	author=95th Aux Team;\
	picture=\AUX_95th_Helmets\Data\Insignias\##squad##;\
	displayName=[95th] ##displaySquad## Helmets;\
	hiddenSelections[]={Camo1,Visor};\
	hiddenSelectionsTextures[]={\
		\AUX_95th_Helmets\Data\P1Basic\Helmet_##player##.paa,\
		\AUX_95th_Helmets\Data\P1Basic\Helmet_##player##.paa\
	};\
	class XtdGearInfo {\
		model = AUX_95th_Helmet_Squad_##squad##;\
		Type = P1Basic;\
		Player = ##player##;\
	};\
};