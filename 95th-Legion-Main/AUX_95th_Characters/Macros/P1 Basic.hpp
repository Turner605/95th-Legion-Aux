#define NEW_AUX_95TH_UNIFORM_P1_BASIC(name,squad,displaySquad) class AUX_95th_Uniform_P1_Basic_##name## : U_I_CombatUniform {\
    scope = 2;\
    scopeArsenal = 2;\
	author=95th Aux Team;\
	displayName=[95th] ##displaySquad## Uniforms;\
	picture=\AUX_95th_Helmets\Data\Insignias\##squad##;\
	class ItemInfo: UniformItem {\
		uniformClass=AUX_95th_Unit_P1_Basic_##name##;\
		uniformModel=-;\
		containerClass=Supply150;\
		mass=40;\
	};\
	class XtdGearInfo {\
		model = AUX_95th_Uniform_Squad_##squad##;\
		Type = P1Basic;\
		Player = ##name##;\
	};\
};

#define NEW_AUX_95TH_UNIT_P1_BASIC(name,helmet,vest,squad) class AUX_95th_Unit_P1_Basic_##name## : JLTS_Clone_P2_DC15A {\
    scope = 2;\
	scopecurator=2;\
	faction=AUX_95th_Legion_Faction_Clones;\
	editorSubcategory=AUX_95th_Legion_Characters_Category_Squad_##squad##;\
    author=95th Aux Team;\
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
	displayName=##name## (P1);\
	uniformClass=AUX_95th_Uniform_P1_Basic_##name##;\
	linkedItems[]={##helmet##,##vest##,ItemMap,JLTS_clone_comlink,ItemCompass,ItemWatch};\
	respawnLinkedItems[]={##helmet##,##vest##,ItemMap,JLTS_clone_comlink,ItemCompass,ItemWatch};\
	hiddenSelectionsTextures[]={\
		\AUX_95th_Characters\Data\P1 Basic\##name##\Uniform_Upper.paa,\
		\AUX_95th_Characters\Data\P1 Basic\##name##\Uniform_Lower.paa\
	};\
};

#define NEW_AUX_95TH_GENERIC_UNIT_P1_BASIC(name,helmet,vest) class AUX_95th_Generic_Unit_P1_Basic_##name## : JLTS_Clone_P2_DC15A {\
    scope = 2;\
	scopecurator=2;\
	faction=AUX_95th_Legion_Faction_Clones;\
	editorSubcategory=AUX_95th_Legion_Characters_Category_Squad_Generic;\
    author=95th Aux Team;\
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
	displayName=##name## (P1);\
	uniformClass=AUX_95th_Uniform_P1_Basic_Trooper;\
	linkedItems[]={##helmet##,##vest##,ItemMap,JLTS_clone_comlink,ItemCompass,ItemWatch};\
	respawnLinkedItems[]={##helmet##,##vest##,ItemMap,JLTS_clone_comlink,ItemCompass,ItemWatch};\
	hiddenSelectionsTextures[]={\
		\AUX_95th_Characters\Data\P1 Basic\Trooper\Uniform_Upper.paa,\
		\AUX_95th_Characters\Data\P1 Basic\Trooper\Uniform_Lower.paa\
	};\
};