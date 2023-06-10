#define NEW_95TH_MC_UNIT(name,helmet,vest) class 95th_MC_Unit_##name## : JLTS_Clone_P2_DC15A {\
    scope = 2;\
	scopecurator=2;\
    author=95th Aux Team;\
	faction=95th_Legion_Faction_Clones;\
	editorSubcategory=95th_MC;\
	editorPreview=\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_DC15A.jpg;\
	weapons[]={JLTS_DC15A_plastic, JLTS_DC17SA, Throw, Put};\
	respawnWeapons[]={JLTS_DC15A_plastic, JLTS_DC17SA, Throw, Put};\
	magazines[]={\
		JLTS_DC15A_mag,JLTS_DC15A_mag,JLTS_DC15A_mag,JLTS_DC15A_mag,JLTS_DC15A_mag,JLTS_DC15A_mag,JLTS_DC15A_mag,\
		JLTS_DC17SA_mag,JLTS_DC17SA_mag,JLTS_DC17SA_mag,\
		Chemlight_green,Chemlight_green,HandGrenade,HandGrenade\
	};\
	respawnMagazines[]={\
		JLTS_DC15A_mag,JLTS_DC15A_mag,JLTS_DC15A_mag,JLTS_DC15A_mag,JLTS_DC15A_mag,JLTS_DC15A_mag,JLTS_DC15A_mag,\
		JLTS_DC17SA_mag,JLTS_DC17SA_mag,JLTS_DC17SA_mag,\
		Chemlight_green,Chemlight_green,HandGrenade,HandGrenade\
	};\
	displayName=[95th] MC - ##name##;\
	uniformClass=95th_MC_Uniform_##name##;\
	linkedItems[]={95th_Helmet_##helmet##,95th_Vest_##vest##,ItemMap,JLTS_clone_comlink,ItemCompass,ItemWatch};\
	respawnLinkedItems[]={95th_Helmet_##helmet##,95th_Vest_##vest##,ItemMap,JLTS_clone_comlink,ItemCompass,ItemWatch};\
	icon=JLTS_iconManMarshalCMDR;\
	model=\MRC\JLTS\characters\CloneArmor\CloneArmorMC.p3d;\
	hiddenSelections[]={camo1,camo2,camo3};\
	hiddenSelectionsTextures[]=\
	{\
		\95th_P1_New\Data\Uniforms\MC\##name##\Uniform_Upper.paa,\
		\95th_P1_New\Data\Uniforms\MC\##name##\Uniform_Lower.paa\
		\
	};\

#define NEW_95TH_MC_UNIFORM(name,uniformClassName) class 95th_MC_Uniform_##name## : U_I_CombatUniform {\
    scope = 2;\
    scopeArsenal = 2;\
	author=95th Aux Team;\
	displayName=[95th] MC Uniform;\
	class ItemInfo: UniformItem\
	{\
		uniformClass=95th_MC_Unit_##uniformClassName##;\
		uniformModel=-;\
		containerClass=Supply150;\
		mass=40;\
	};\
	class XtdGearInfo {\
		model = 95th_MC_Uniform;\
		Type = ##name##;\
	};
