#define NEW_95TH_INDEPENDENT_B1_UNIT(className,name) class AUX_95th_Independent_B1_Unit_##className## : JLTS_Droid_B1_E5 {\
	displayName=##name##;\
	side = 2;\
	author=95th Aux Team;\
	faction=AUX_95th_CIS_Humanitarian;\
	editorCategory=AUX_95th_CIS_Forces;\
	editorSubcategory=AUX_95th_CIS_Forces_CivilServices;\
	uniformClass=AUX_95th_Independent_B1_Uniform_##className##;\
	hiddenSelectionsTextures[]={\AUX_95th_CIS_Forces\Data\B1\Body_##name##.paa};\
	backpack = AUX_95th_Independent_B1_Backpack_##className##;\
};

#define NEW_95TH_INDEPENDENT_B1_UNIFORM(className) class AUX_95th_Independent_B1_Uniform_##className## : JLTS_DroidB1 {\
	displayName=##className##;\
	author=95th Aux Team;\
	faction=AUX_95th_CIS_Humanitarian;\
	editorSubcategory=AUX_95th_CIS_Forces_CivilServices;\
	class ItemInfo: UniformItem {\
		uniformClass=AUX_95th_Independent_B1_Unit_##className##;\
		uniformModel=-;\
		containerClass=Supply150;\
		mass=40;\
	};\
};

#define NEW_95TH_INDEPENDENT_B1_BACKPACK(className) class AUX_95th_Independent_B1_Backpack_##className## : JLTS_B1_backpack {\
	displayName=##className##;\
	author=95th Aux Team;\
	hiddenSelectionsTextures[]={\AUX_95th_CIS_Forces\Data\B1\Backpacks\Backpack_##className##.paa};\
};