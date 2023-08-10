#define NEW_95TH_VEST_RECON_NCO_TYPE(name) class 95th_Officer_Vest_##name## : JLTS_CloneVestReconOfficer {\
	author=95th Aux Team;\
	displayName=[95th] Officer Vest;\
	hiddenSelectionsTextures[]={\
		MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa,\
		\95th_Vests\Data\Officer\##name##_Vest_Top.paa\
	};\
	class ItemInfo: VestItem {\
		uniformModel=\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d;\
		containerClass = Supply190;\
		hiddenSelections[]= { camo1, camo2 };\
		mass=80;\
		class HitpointsProtectionInfo {\
			class Chest { HitpointName=HitChest; armor=6; PassThrough=0.30000001; };\
			class Legs { hitpointName=HitLegs; armor=6; passThrough=0.30000001; };\
			class Arms { hitpointName=HitArms; armor=4; passThrough=0.30000001; };\
		};\
	};\
	class XtdGearInfo {\
		model = 95th_Officer_Vests;\
		Type = ##name##;\
	};

#define NEW_95TH_VEST_OFFICER_LIEUTENANT_TYPE(name) class 95th_Officer_Vest_##name## : JLTS_CloneVestOfficer {\
	author=95th Aux Team;\
	displayName=[95th] Officer Vest;\
	hiddenSelectionsTextures[]={\95th_Vests\Data\Officer\##name##_Vest_Top.paa};\
	class ItemInfo: VestItem {\
		uniformModel=\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d;\
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
		model = 95th_Officer_Vests;\
		Type = ##name##;\
	};

#define NEW_95TH_VEST_OFFICER_ZEUS_TYPE(name) class 95th_Officer_Vest_##name## : JLTS_CloneVestOfficer2 {\
	author=95th Aux Team;\
	displayName=[95th] Officer Vest;\
	hiddenSelectionsTextures[]={\95th_Vests\Data\Officer\##name##_Vest_Top.paa};\
	class ItemInfo: VestItem {\
		uniformModel=\MRC\JLTS\characters\CloneArmor\CloneVestOfficer2.p3d;\
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
		model = 95th_Officer_Vests;\
		Type = ##name##;\
	};
