#define NEW_95th_FACEWEAR_HUD(name,baseClass,faceModel) class 95th_Facewear_HUD_##name## : ##baseClass## {\
	displayName=[95th] Misc Facewear;\
	scope=2;\
	model = ##faceModel##;\
	class XtdGearInfo {\
		model = 95th_Facewear_Misc;\
		Type = ##name##;\
		Interior = HUD;\
	};

#define NEW_95th_FACEWEAR_EMPTY(name,baseClass,faceModel) class 95th_Facewear_Empty_##name## : ##baseClass## {\
	displayName=[95th] Misc Facewear;\
	scope=2;\
	model = ##faceModel##;\
	class XtdGearInfo {\
		model = 95th_Facewear_Misc;\
		Type = ##name##;\
		Interior = Empty;\
	};