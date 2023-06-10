#define NEW_95TH_RIFLEMAN_UNIT(name,helmet,vest) class 95th_Rifleman_Unit_##name## : JLTS_Clone_P2_DC15A {\
    scope = 2;\
	scopecurator=2;\
    author=95th Aux Team;\
	faction=95th_Legion_Faction_Clones;\
	editorSubcategory=95th_Rifleman;\
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
	displayName=[95th] Rifleman - ##name##;\
	uniformClass=95th_P1_Uniform_##name##;\
	linkedItems[]={95th_Helmet_##helmet##,95th_Vest_##vest##,ItemMap,JLTS_clone_comlink,ItemCompass,ItemWatch};\
	respawnLinkedItems[]={95th_Helmet_##helmet##,95th_Vest_##vest##,ItemMap,JLTS_clone_comlink,ItemCompass,ItemWatch};\
	hiddenSelectionsTextures[]=\
	{\
		\95th_P1_Units\Data\Uniforms\P1\##name##\Uniform_Upper.paa,\
		\95th_P1_Units\Data\Uniforms\P1\##name##\Uniform_Lower.paa\
	};

#define NEW_95TH_P1_UNIFORM(name,uniformClassName) class 95th_P1_Uniform_##name## : U_I_CombatUniform {\
    scope = 2;\
    scopeArsenal = 2;\
	author=95th Aux Team;\
	displayName=[95th] Basic Uniforms;\
	picture=\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa;\
	class ItemInfo: UniformItem {\
		uniformClass=95th_Rifleman_Unit_##uniformClassName##;\
		uniformModel=-;\
		containerClass=Supply150;\
		mass=40;\
	};\
	class XtdGearInfo {\
		model = 95th_P1_Basic_Uniform;\
		Type = ##name##;\
	};

#define NEW_95TH_P1_HELMET(name) class 95th_Helmet_##name## : SEA_Helmet_P1_Base {\
    scope = 2;\
    scopeArsenal = 2;\
	author=95th Aux Team;\
	displayName=[95th] P1 Helmet;\
	hiddenSelections[]={"Camo1","Visor"};\
	hiddenSelectionsTextures[]={\
		\95th_P1_Units\Data\Helmets\Rifleman\Helmet_##name##.paa,\
		\95th_P1_Units\Data\Helmets\Rifleman\Helmet_##name##.paa\
	};\
		class XtdGearInfo {\
		model = 95th_P1_Helmet;\
		Type = ##name##;\
	};