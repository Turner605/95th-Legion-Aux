#define NEW_95TH_BASIC_VEST(name,baseclass) class 95th_Basic_Vest_##name## : ##baseclass## {\
	author=95th Aux Team;\
	displayName=[95th] Basic Vest;\
	hiddenSelectionsTextures[]={\
		\95th_Vests\Data\Basic\##name##_Vest_Bottom.paa,\
		\95th_Vests\Data\Basic\##name##_Vest_Top.paa\
	};\
	class XtdGearInfo {\
		model = 95th_Basic_Vests;\
		Type = ##name##;\
	};

#define NEW_95TH_BASIC_VEST_ARMOUR_OVERRIDEN(name,baseclass) class 95th_Basic_Vest_##name## : ##baseclass## {\
	author=95th Aux Team;\
	displayName=[95th] Basic Vest;\
	hiddenSelectionsTextures[]={\
		\95th_Vests\Data\Basic\##name##_Vest_Bottom.paa,\
		\95th_Vests\Data\Basic\##name##_Vest_Top.paa\
	};\
	class ItemInfo: VestItem {\
		uniformModel=\MRC\JLTS\characters\CloneArmor2\CloneVestHolster.p3d;\
		containerClass = Supply190;\
		hiddenSelections[]= { camo1 };\
		mass=80;\
		class HitpointsProtectionInfo {\
			class Chest { HitpointName=HitChest; armor=6; PassThrough=0.30000001; };\
			class Legs { hitpointName=HitLegs; armor=6; passThrough=0.30000001; };\
			class Arms { hitpointName=HitArms; armor=4; passThrough=0.30000001; };\
		};\
	};\
	class XtdGearInfo {\
		model = 95th_Basic_Vests;\
		Type = ##name##;\
	};

#define NEW_95TH_BASIC_VEST_NO_BOTTOM(name,baseclass) class 95th_Basic_Vest_##name## : ##baseclass## {\
	author=95th Aux Team;\
	displayName=[95th] Basic Vest;\
	hiddenSelectionsTextures[]={\
		,\
		\95th_Vests\Data\Basic\##name##_Vest_Top.paa\
	};\
	class XtdGearInfo {\
		model = 95th_Basic_Vests;\
		Type = ##name##;\
	};

#define NEW_95TH_VEST_RECON_TYPE(name) class 95th_Basic_Vest_##name## : JLTS_CloneVestRecon {\
	author=95th Aux Team;\
	displayName=[95th] Basic Vest;\
	hiddenSelectionsTextures[]={\95th_Vests\Data\Basic\##name##_Vest_Recon.paa};\
	class XtdGearInfo {\
		model = 95th_Basic_Vests;\
		Type = ##name##;\
	};

#define NEW_95TH_VEST_SUSPENDER_TYPE(name) class 95th_Basic_Vest_##name## : JLTS_CloneVestSuspender {\
	author=95th Aux Team;\
	displayName=[95th] Basic Vest;\
	hiddenSelectionsTextures[]={\95th_Vests\Data\Basic\##name##_Vest_Suspender.paa};\
	class XtdGearInfo {\
		model = 95th_Basic_Vests;\
		Type = ##name##;\
	};
	