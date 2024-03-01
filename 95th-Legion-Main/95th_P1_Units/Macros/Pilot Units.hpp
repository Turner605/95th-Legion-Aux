#define NEW_95TH_PILOT_UNIT(name,helmet,vest) class 95th_Pilot_Unit_##name## : JLTS_Clone_P2_DC15A {\
    scope = 2;\
	scopecurator=2;\
    author=95th Aux Team;\
	faction=95th_Legion_Faction_Clones;\
	editorSubcategory=95th_Pilots;\
	editorPreview=\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_DC15A.jpg;\
	weapons[]={JLTS_DC17SA,Throw,Put};\
	respawnWeapons[]={JLTS_DC17SA,Throw,Put};\
	magazines[]={\
		JLTS_DC17SA_mag,JLTS_DC17SA_mag,JLTS_DC17SA_mag,JLTS_DC17SA_mag,\
		Chemlight_green,Chemlight_green\
	};\
	respawnMagazines[]=\
	{\
		JLTS_DC17SA_mag,JLTS_DC17SA_mag,JLTS_DC17SA_mag,JLTS_DC17SA_mag,\
		Chemlight_green,Chemlight_green\
	};\
	displayName=[95th] Pilot - ##name##;\
	uniformClass=95th_P1_Uniform_##name##;\
	linkedItems[]={95th_P1_Pilot_Helmet_##helmet##,95th_Basic_Vest_##vest##,ItemMap,JLTS_clone_comlink,ItemCompass,ItemWatch};\
	respawnLinkedItems[]={95th_P1_Pilot_Helmet_##helmet##,95th_Basic_Vest_##vest##,ItemMap,JLTS_clone_comlink,ItemCompass,ItemWatch};\
	hiddenSelectionsTextures[]=\
	{\
		\95th_P1_Units\Data\Uniforms\P1\##name##\Uniform_Upper.paa,\
		\95th_P1_Units\Data\Uniforms\P1\##name##\Uniform_Lower.paa\
	};

