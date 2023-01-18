#define NEW_95TH_P1_UNIT(name) class 95th_P1_Unit_##name## : 95th_P1_Unit_Base {\
    scope = 2;\
	scopecurator=2;\
	displayName=[95th] P1 - ##name##;\
	linkedItems[]={95th_P1_Helmet_##name##,95th_Vest_##name##,ItemMap,JLTS_clone_comlink,ItemCompass,ItemWatch};\
	respawnLinkedItems[]={95th_P1_Helmet_##name##,95th_Vest_##name##,ItemMap,JLTS_clone_comlink,ItemCompass,ItemWatch};\
	uniformClass=95th_P1_Uniform_##name##;\
	hiddenSelectionsTextures[]=\
	{\
		\95th_P1_Units\Data\Uniforms\95th_P1_Uniform_##name##_Upper.paa,\
		\95th_P1_Units\Data\Uniforms\95th_P1_Uniform_##name##_Lower.paa\
	};\

#define NEW_95TH_P1_UNIFORM(name) class 95th_P1_Uniform_##name## : 95th_P1_Uniform_Base {\
    scope = 2;\
    scopeArsenal = 2;\
	displayName=[95th] P1 Uniform - ##name##;\
	class ItemInfo: UniformItem\
	{\
		uniformClass=95th_P1_Unit_##name##;\
		uniformModel=-;\
		containerClass=Supply150;\
		mass=40;\
	};

#define NEW_95TH_P1_HELMET(name) class 95th_P1_Helmet_##name## : 95th_P1_Helmet_Base {\
    scope = 2;\
    scopeArsenal = 2;\
	displayName=[95th] P1 Helmet - ##name##;\
	hiddenSelections[]={"Camo1","Visor"};\
	hiddenSelectionsTextures[]={\
		\95th_P1_Units\Data\Helmets\95th_P1_Helmet_##name##.paa,\
		\95th_P1_Units\Data\Helmets\95th_P1_Helmet_##name##.paa\
	};\

class CfgPatches 
{
    class 95th_P1_Units
    {
        author="95th Aux Team";
		scope=2;
		scopecurator=2;
        name="95th Legion P1";
        requiredAddons[] = {
			"A3_Characters_F", 
			"JLTS_characters_CloneArmor",
			"SEA_JLTS_ExtendedArsenal",
			"95th_P1_Base_Units"
		};
		units[] = {
			"95th_P1_Unit_Trooper",
			"95th_P1_Unit_Medic",
			"95th_P1_Unit_Senior",
			"95th_P1_Unit_Veteran",
			"95th_P1_Unit_Sergeant",
			"95th_P1_Unit_Captain",
			"95th_P1_Unit_Lieutenant",
			"95th_P1_Unit_Outcast",
			"95th_P1_Unit_Turner"
		};
    };
}; 

class CfgEditorSubcategories{
	class 95th_P1{displayName="Phase 1";};
};

class cfgWeapons 
{ 
    class ItemCore;
    class UniformItem;
    class Uniform_Base: ItemCore
    {
        class ItemInfo;
    };

	class 95th_P1_Uniform_Base;
	class 95th_P1_Helmet_Base;
    
	NEW_95TH_P1_UNIFORM(Trooper)};
	NEW_95TH_P1_UNIFORM(Medic)};
	NEW_95TH_P1_UNIFORM(Senior)};
	NEW_95TH_P1_UNIFORM(Veteran)};
	NEW_95TH_P1_UNIFORM(Sergeant)};
	NEW_95TH_P1_UNIFORM(Captain)};
	NEW_95TH_P1_UNIFORM(Lieutenant)};
	NEW_95TH_P1_UNIFORM(Outcast)};
	NEW_95TH_P1_UNIFORM(Turner)};

	NEW_95TH_P1_HELMET(Trooper)};
	NEW_95TH_P1_HELMET(Medic)};
	NEW_95TH_P1_HELMET(Senior)};
	NEW_95TH_P1_HELMET(Veteran)};
	NEW_95TH_P1_HELMET(Sergeant)};
	NEW_95TH_P1_HELMET(Captain)};
	NEW_95TH_P1_HELMET(Lieutenant)};
	NEW_95TH_P1_HELMET(Outcast)};
	NEW_95TH_P1_HELMET(Turner)};
}; 

class CfgVehicles 
{     
	class 95th_P1_Unit_Base;

	NEW_95TH_P1_UNIT(Trooper)};
	NEW_95TH_P1_UNIT(Medic)};
	NEW_95TH_P1_UNIT(Senior)};
	NEW_95TH_P1_UNIT(Veteran)};
	NEW_95TH_P1_UNIT(Sergeant)};
	NEW_95TH_P1_UNIT(Captain)};
	NEW_95TH_P1_UNIT(Lieutenant)};
	NEW_95TH_P1_UNIT(Outcast)};
	NEW_95TH_P1_UNIT(Turner)};
};