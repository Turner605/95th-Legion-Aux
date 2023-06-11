#define NEW_95TH_HAZARD_UNIT(name,helmet,vest) class 95th_Hazard_Unit_##name## : JLTS_Clone_P2_DC15A {\
    scope = 2;\
	scopecurator=2;\
    author=95th Aux Team;\
	faction=95th_Legion_Faction_Clones;\
	editorSubcategory=95th_Hazard;\
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
	displayName=[95th] Hazard - ##name##;\
	uniformClass=95th_P1_Uniform_##name##;\
	linkedItems[]={95th_Hazard_Helmet_##helmet##,95th_Vest_##vest##,ItemMap,JLTS_clone_comlink,ItemCompass,ItemWatch};\
	respawnLinkedItems[]={95th_Hazard_Helmet_##helmet##,95th_Vest_##vest##,ItemMap,JLTS_clone_comlink,ItemCompass,ItemWatch};\
	hiddenSelectionsTextures[]=\
	{\
		\95th_P1_Units\Data\Uniforms\P1\##name##\Uniform_Upper.paa,\
		\95th_P1_Units\Data\Uniforms\P1\##name##\Uniform_Lower.paa\
	};

#define NEW_95TH_HAZARD_HELMET(name) class 95th_Hazard_Helmet_##name## : SEA_Helmet_Hazard_Base {\
    scope = 2;\
    scopeArsenal = 2;\
	author=95th Aux Team;\
	displayName=[95th] Hazard Helmet;\
	hiddenSelectionsTextures[]={\
		\95th_P1_Units\Data\Helmets\Hazard\##name##\Helmet.paa,\
		\JLTS_AE\Data\BaseTextures\Hazard\Necc_CO.paa,\
		\95th_P1_Units\Data\Helmets\Hazard\##name##\Helmet.paa\
	};\
	class XtdGearInfo {\
		model = 95th_Hazard_Helmet;\
		Type = ##name##;\
	};