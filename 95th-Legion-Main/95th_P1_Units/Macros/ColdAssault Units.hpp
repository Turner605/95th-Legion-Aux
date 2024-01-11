#define NEW_95TH_COLDASSAULT_UNIT(name,helmet,vest) class 95th_ColdAssault_Unit_##name## : 3AS_Rep_ColdAssault_base_F {\
    scope = 2;\
	scopecurator=2;\
    author=95th Aux Team;\
	faction=95th_Legion_Faction_Clones;\
	editorSubcategory=95th_ColdAssault;\
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
	displayName=[95th] ColdAssault - ##name##;\
	uniformClass=95th_ColdAssault_Uniform_##name##;\
	linkedItems[]={95th_ColdAssault_Helmet_##helmet##,95th_Basic_Vest_##vest##,ItemMap,JLTS_clone_comlink,ItemCompass,ItemWatch};\
	respawnLinkedItems[]={95th_ColdAssault_Helmet_##helmet##,95th_Basic_Vest_##vest##,ItemMap,JLTS_clone_comlink,ItemCompass,ItemWatch};\
	hiddenSelectionsTextures[]=\
	{\
		\95th_P1_Units\Data\Uniforms\ColdAssault\##name##\Uniform.paa,\
		\95th_P1_Units\Data\Uniforms\ColdAssault\##name##\Uniform.paa\
	};

#define NEW_95TH_COLDASSAULT_UNIFORM(name,uniformClassName) class 95th_ColdAssault_Uniform_##name## : 3AS_U_Rep_ColdAssault_Armor {\
    scope = 2;\
    scopeArsenal = 2;\
	author=95th Aux Team;\
	displayName=[95th] Cold Assault Uniforms;\
	picture=\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa;\
	class ItemInfo: UniformItem {\
		uniformClass=95th_ColdAssault_Unit_##uniformClassName##;\
		uniformModel=-;\
		containerClass=Supply150;\
		mass=40;\
	};\
	class XtdGearInfo {\
		model = 95th_ColdAssault_Uniform;\
		Type = ##name##;\
	};


#define NEW_95TH_COLDASSAULT_HELMET(name) class 95th_ColdAssault_Helmet_##name## : 3AS_H_ColdAssault_Helmet {\
    scope = 2;\
    scopeArsenal = 2;\
	author=95th Aux Team;\
	displayName=[95th] ColdAssault Helmet;\
	hiddenSelectionsTextures[]={\
		\95th_P1_Units\Data\Helmets\ColdAssault\##name##\Helmet.paa,\
		\95th_P1_Units\Data\Helmets\ColdAssault\##name##\Helmet.paa,\
		\95th_P1_Units\Data\Helmets\ColdAssault\##name##\Helmet.paa\
	};\
	class XtdGearInfo {\
		model = 95th_ColdAssault_Helmet;\
		Type = ##name##;\
	};