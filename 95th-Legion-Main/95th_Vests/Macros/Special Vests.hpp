#define NEW_95TH_VEST_ARC_TYPE(name) class 95th_ARC_Vest_##name## : JLTS_CloneVestARC {\
	author=95th Aux Team;\
	displayName=[95th] ARC Vest;\
	hiddenSelectionsTextures[]={\95th_Vests\Data\ARC\##name##_Vest.paa};\
	class ItemInfo: VestItem {\
		uniformModel=\MRC\JLTS\characters\CloneArmor\CloneVestARC.p3d;\
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
		model = 95th_ARC_Vests;\
		Type = ##name##;\
	};