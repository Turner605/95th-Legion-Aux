#define NEW_95th_FACEWEAR_HUD(name,baseClass,faceModel) class Facewear_HUD_##name##_95th : ##baseClass## {\
	displayName=[95th] Misc Facewear;\
	scope=2;\
	model = ##faceModel##;\
	class XtdGearInfo {\
		model = 95th_Facewear_Misc;\
		Type = ##name##;\
		Interior = HUD;\
	};

#define NEW_95th_FACEWEAR_EMPTY(name,baseClass,faceModel) class Facewear_Empty_##name##_95th : ##baseClass## {\
	displayName=[95th] Misc Facewear;\
	scope=2;\
	model = ##faceModel##;\
	class XtdGearInfo {\
		model = 95th_Facewear_Misc;\
		Type = ##name##;\
		Interior = Empty;\
	};

#define NEW_95th_SCARF_EMPTY(name) class Facewear_Scarf_Empty_##name##_95th : SWLB_CEE_Clone_Scarf {\
	displayName=[95th] Scarf;\
	hiddenSelectionsTextures[]={95th_P1_Facewear\Data\Facewear\Scarfs\Scarf_##name##.paa};\
	scope=2;\
	class XtdGearInfo {\
		model = 95th_Facewear_Scarfs;\
		Colour = ##name##;\
		Interior = Empty;\
	};

#define NEW_95th_PONCHO_EMPTY(name) class Facewear_Poncho_Empty_##name##_95th : PhoenixCore_Poncho {\
	displayName=[95th] Poncho;\
	author = 95th Aux Team;\
	hiddenSelectionsTextures[]={95th_P1_Facewear\Data\Facewear\Ponchos\Poncho_##name##.paa};\
	scope=2;\
	class XtdGearInfo {\
		model = 95th_Facewear_Scarfs;\
		Colour = ##name##;\
		Interior = Empty;\
	};