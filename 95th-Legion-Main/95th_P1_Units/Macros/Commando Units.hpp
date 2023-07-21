#define NEW_95TH_COMMANDO_UNIT(name,helmet,vest) class 95th_Commando_Unit_##name## : 3AS_Rep_Commando_F {\
    scope = 2;\
	scopecurator=2;\
    author=95th Aux Team;\
	faction=95th_Legion_Faction_Clones;\
	editorSubcategory=95th_Commando;\
	displayName=[95th] Commando - ##name##;\
	uniformClass=95th_Commando_Uniform_##name##;\
	linkedItems[]={95th_Commando_Helmet_##helmet##,95th_Commando_Vest_##vest##,ItemMap,JLTS_clone_comlink,ItemCompass,ItemWatch};\
	respawnLinkedItems[]={95th_Commando_Helmet_##helmet##,95th_Commando_Vest_##vest##,ItemMap,JLTS_clone_comlink,ItemCompass,ItemWatch};\
	hiddenSelectionsTextures[]= {\
		\95th_P1_Units\Data\Uniforms\Commando\##name##\Uniform.paa,\
		\3AS\3AS_Characters\Commando\data\Katarn_Undersuit_CO.paa\
	};

#define NEW_95TH_COMMANDO_UNIFORM(name,uniformClassName) class 95th_Commando_Uniform_##name## : 3AS_U_Rep_Katarn_Armor {\
    scope = 2;\
    scopeArsenal = 2;\
	author=95th Aux Team;\
	displayName=[95th] Commando Uniforms;\
	class ItemInfo: UniformItem {\
		uniformClass=95th_Commando_Unit_##uniformClassName##;\
		uniformModel=-;\
		containerClass=Supply150;\
		mass=40;\
	};\
	class XtdGearInfo {\
		model = 95th_Commando_Uniform;\
		Type = ##name##;\
	};

#define NEW_95TH_COMMANDO_HELMET(name) class 95th_Commando_Helmet_##name## : 3AS_H_Katarn_Helmet {\
    scope = 2;\
    scopeArsenal = 2;\
	author=95th Aux Team;\
	displayName=[95th] Commando Helmet;\
	hiddenSelections[]={Camo1,Visor};\
	hiddenSelectionsTextures[]={\
		\95th_P1_Units\Data\Helmets\Commando\Helmet_##name##.paa,\
		\95th_P1_Units\Data\Helmets\Commando\Helmet_##name##.paa\
	};\
		class XtdGearInfo {\
		model = 95th_Commando_Helmet;\
		Type = ##name##;\
	};