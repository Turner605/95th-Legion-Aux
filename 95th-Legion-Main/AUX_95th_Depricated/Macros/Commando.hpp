#define NEW_AUX_95TH_UNIFORM_P1_COMMANDO(name,squad,displaySquad) class AUX_95th_Uniform_Commando_##name## : 3AS_U_Rep_Katarn_Armor {\
    scope = 2;\
    scopeArsenal = 2;\
	author=95th Aux Team;\
	displayName=[95th] ##displaySquad## Uniforms;\
	picture=\AUX_95th_Helmets\Data\Insignias\##squad##;\
	class ItemInfo: UniformItem {\
		uniformClass=AUX_95th_Unit_Commando_##name##;\
		uniformModel=-;\
		containerClass=Supply150;\
		mass=40;\
	};\
	class XtdGearInfo {\
		model = AUX_95th_Uniform_Squad_##squad##;\
		Type = Commando;\
		Player = ##name##;\
	};\
};

#define NEW_AUX_95TH_UNIT_COMMANDO(name,helmet,vest,squad) class AUX_95th_Unit_Commando_##name## : 3AS_Rep_Commando_F {\
    scope = 2;\
	scopecurator=2;\
	faction=AUX_95th_Legion_Faction_Clones;\
	editorSubcategory=AUX_95th_Legion_Characters_Category_Squad_##squad##;\
    author=95th Aux Team;\
	displayName=##name## (Commando);\
	uniformClass=AUX_95th_Uniform_Commando_##name##;\
	linkedItems[]={##helmet##,##vest##,ItemMap,JLTS_clone_comlink,ItemCompass,ItemWatch};\
	respawnLinkedItems[]={##helmet##,##vest##,ItemMap,JLTS_clone_comlink,ItemCompass,ItemWatch};\
	hiddenSelectionsTextures[]={\
		\z\AUX_95th\addons\players\shared\data\MissingTexture.paa,\
		\z\AUX_95th\addons\players\shared\data\MissingTexture.paa\
	};\
};
