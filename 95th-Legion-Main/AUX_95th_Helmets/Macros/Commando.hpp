#define NEW_AUX_95TH_COMMANDO_HELMET(player,squad,displaySquad) class AUX_95th_Helmet_Commando_##player## : 3AS_H_Katarn_Helmet {\
    scope = 2;\
    scopeArsenal = 2;\
	author=95th Aux Team;\
	picture=\AUX_95th_Helmets\Data\Insignias\##squad##;\
	displayName=[95th] ##displaySquad## Helmets;\
	hiddenSelections[]={Camo1,Visor};\
	hiddenSelectionsTextures[]={\
		\AUX_95th_Helmets\Data\Commando\Helmet_##player##.paa,\
		\AUX_95th_Helmets\Data\Commando\Helmet_##player##.paa\
	};\
	class XtdGearInfo {\
		model = AUX_95th_Helmet_Squad_##squad##;\
		Type = Commando;\
		Player = ##player##;\
	};\
};