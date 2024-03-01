#define NEW_AUX_95TH_SPECOPS_HELMET(player,squad) class AUX_95th_Helmet_SpecOps_##player## : SEA_Helmet_SpecOps_SR_Base {\
    scope = 2;\
    scopeArsenal = 2;\
	author=95th Aux Team;\
	picture=\AUX_95th_Helmets\Data\Insignias\##squad##;\
	displayName=;\
	hiddenSelectionsTextures[]={\
		\AUX_95th_Helmets\Data\SpecOps\Helmet_##player##.paa,\
		\JLTS_AE\Data\BaseTextures\SpecOps\Antennas\SR_Antenna_co.paa,\
		\AUX_95th_Helmets\Data\SpecOps\Helmet_##player##.paa\
	};\
	class XtdGearInfo {\
		model = AUX_95th_Helmet_Squad_##squad##;\
		Type = SpecOps;\
		Player = ##player##;\
	};\
};