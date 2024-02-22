#define NEW_AUX_95TH_OFFICER_VEST_SET(name) class AUX_95th_Vest_Sergeant_##name## : JLTS_CloneVestReconOfficer {\
	author=95th Aux Team;\
	displayName=[95th] Sergeant Vest;\
	hiddenSelectionsTextures[]={\
		\AUX_95th_Vests\Data\Officers\##name##\Vest_Officer.paa,\
		\AUX_95th_Vests\Data\Officers\##name##\Vest_Top_Sergeant.paa\
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
		model = AUX_95th_Sergeant_Vests;\
		Type = ##name##;\
	};\
};\
\
class AUX_95th_Vest_Lieutenant_##name## : JLTS_CloneVestOfficer {\
	author=95th Aux Team;\
	displayName=[95th] Lieutenant Vest;\
	hiddenSelectionsTextures[]={\AUX_95th_Vests\Data\Officers\##name##\Vest_Officer.paa};\
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
		model = AUX_95th_Lieutenant_Vests;\
		Type = ##name##;\
	};\
};\
\
class AUX_95th_Vest_CIO_##name## : JLTS_CloneVestOfficer2 {\
	author=95th Aux Team;\
	displayName=[95th] CIO Vest;\
	hiddenSelectionsTextures[]={\AUX_95th_Vests\Data\Officers\##name##\Vest_Officer.paa};\
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
		model = AUX_95th_CIO_Vests;\
		Type = ##name##;\
	};\
};\
\
class AUX_95th_Vest_Kama_##name## : JLTS_CloneVestKama {\
	author=95th Aux Team;\
	displayName=[95th] Kama Vest;\
	hiddenSelectionsTextures[]={\AUX_95th_Vests\Data\Officers\##name##\Vest_Officer.paa};\
	class ItemInfo: VestItem {\
		uniformModel=\MRC\JLTS\characters\CloneArmor\CloneVestKama.p3d;\
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
		model = AUX_95th_Kama_Vests;\
		Type = ##name##;\
	};\
};\
