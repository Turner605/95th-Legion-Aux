#define NEW_AUX_95TH_UNIFORM_P1_COLD_ASSAULT(name,squad) class AUX_95th_Uniform_P1_Cold_Assault_##name## : 3AS_U_Rep_ColdAssault_Armor {\
    scope = 2;\
    scopeArsenal = 2;\
	author=95th Aux Team;\
	displayName=[95th];\
	picture=\AUX_95th_Helmets\Data\Insignias\##squad##;\
	class ItemInfo: UniformItem {\
		uniformClass=AUX_95th_Unit_P1_Cold_Assault_##name##;\
		uniformModel=-;\
		containerClass=Supply150;\
		mass=40;\
	};\
	class XtdGearInfo {\
		model = AUX_95th_Uniform_Squad_##squad##;\
		Type = ColdAssault;\
		Player = ##name##;\
	};\
};

#define NEW_AUX_95TH_UNIT_P1_COLD_ASSAULT(name,helmet,vest,squad) class AUX_95th_Unit_P1_Cold_Assault_##name## : 3AS_Rep_ColdAssault_base_F {\
    scope = 2;\
	scopecurator=2;\
	faction=AUX_95th_Legion_Faction_Clones;\
	editorSubcategory=AUX_95th_Legion_Characters_Category_Squad_##squad##;\
    author=95th Aux Team;\
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
	displayName=##name## (Cold Assault);\
	uniformClass=AUX_95th_Uniform_P1_Cold_Assault_##name##;\
	linkedItems[]={##helmet##,##vest##,ItemMap,JLTS_clone_comlink,ItemCompass,ItemWatch};\
	respawnLinkedItems[]={##helmet##,##vest##,ItemMap,JLTS_clone_comlink,ItemCompass,ItemWatch};\
	hiddenSelectionsTextures[]={\
		\AUX_95th_Characters\Data\P1 Cold Assault\##name##\Uniform.paa,\
		\AUX_95th_Characters\Data\P1 Cold Assault\##name##\Uniform.paa\
	};\
};
