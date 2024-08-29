#define NEW_AUX_95TH_UNIFORM_P1_MC(name,squad,displaySquad) class AUX_95th_Uniform_P1_MC_##name## : U_I_CombatUniform {\
    scope = 2;\
    scopeArsenal = 2;\
	author=95th Aux Team;\
	displayName=[95th] ##displaySquad## Uniforms;\
	picture=\AUX_95th_Helmets\Data\Insignias\##squad##;\
	class ItemInfo: UniformItem {\
		uniformClass=AUX_95th_Unit_P1_MC_##name##;\
		uniformModel=-;\
		containerClass=Supply150;\
		mass=40;\
	};\
	class XtdGearInfo {\
		model = AUX_95th_Uniform_Squad_##squad##;\
		Type = MC;\
		Player = ##name##;\
	};\
};

#define NEW_AUX_95TH_UNIT_P1_MC(name,helmet,vest,squad) class AUX_95th_Unit_P1_MC_##name## : JLTS_Clone_P2_DC15A {\
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
	displayName=##name## (MC);\
	model=\MRC\JLTS\characters\CloneArmor\CloneArmorMC.p3d;\
	uniformClass=AUX_95th_Uniform_P1_MC_##name##;\
	linkedItems[]={##helmet##,##vest##,ItemMap,JLTS_clone_comlink,ItemCompass,ItemWatch};\
	respawnLinkedItems[]={##helmet##,##vest##,ItemMap,JLTS_clone_comlink,ItemCompass,ItemWatch};\
	hiddenSelectionsTextures[]={\
		\z\AUX_95th\addons\players\shared\data\MissingTexture.paa,\
		\z\AUX_95th\addons\players\shared\data\MissingTexture.paa\
	};\
};
