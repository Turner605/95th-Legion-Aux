#define NEW_AUX_95TH_ARF_HELMET(player,squad) class AUX_95th_Helmet_ARF_##player## : SEA_Helmet_ARF_base {\
    scope = 2;\
    scopeArsenal = 2;\
	author=95th Aux Team;\
	picture=\AUX_95th_Helmets\Data\Insignias\##squad##;\
	displayName=[95th];\
	hiddenSelections[]={Camo1,Camo2,Visor};\
	hiddenSelectionsTextures[]={\
		\AUX_95th_Helmets\Data\ARF\##player##\Helmet.paa,\
		\AUX_95th_Helmets\Data\ARF\##player##\Plates.paa,\
		\AUX_95th_Helmets\Data\ARF\##player##\Visor.paa\
	};\
	class XtdGearInfo {\
		model = AUX_95th_Helmet_Squad_##squad##;\
		Type = ARF;\
		Player = ##player##;\
	};\
};