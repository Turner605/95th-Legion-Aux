#define NEW_95TH_P1_AIRBORNE_UNIT(name) class 95th_P1_Airborne_Unit_##name## : 95th_P1_Airborne_Unit_Base {\
    scope = 2;\
	scopecurator=2;\
	displayName=[95th] Airborne - ##name##;\
	linkedItems[]={95th_P1_Airborne_Helmet_##name##,95th_Vest_##name##,ItemMap,JLTS_clone_comlink,ItemCompass,ItemWatch};\
	respawnLinkedItems[]={95th_P1_Airborne_Helmet_##name##,95th_Vest_##name##,ItemMap,JLTS_clone_comlink,ItemCompass,ItemWatch};\
	uniformClass=95th_P1_Airborne_Uniform_##name##;\
	hiddenSelectionsTextures[]=\
	{\
		\95th_P1_Airborne_Units\Data\Uniforms\95th_P1_Airborne_Uniform_##name##_Upper.paa,\
		\95th_P1_Airborne_Units\Data\Uniforms\95th_P1_Airborne_Uniform_##name##_Lower.paa\
	};\

#define NEW_95TH_P1_AIRBORNE_UNIFORM(name) class 95th_P1_Airborne_Uniform_##name## : 95th_P1_Uniform_Base {\
    scope = 2;\
    scopeArsenal = 2;\
	displayName=[95th] Airborne Uniform - ##name##;\
	class ItemInfo: UniformItem\
	{\
		uniformClass=95th_P1_Airborne_Unit_##name##;\
		uniformModel=-;\
		containerClass=Supply150;\
		mass=40;\
	};

#define NEW_95TH_P1_AIRBORNE_HELMET(name) class 95th_P1_Airborne_Helmet_##name## : 95th_P1_Airborne_Helmet_Base {\
    scope = 2;\
    scopeArsenal = 2;\
	displayName=[95th] Airborne Helmet - ##name##;\
	hiddenSelectionsTextures[]={\95th_P1_Airborne_Units\Data\Helmets\95th_P1_Airborne_Helmet_##name##.paa};\

class CfgPatches 
{
    class 95th_P1_Airborne_Units
    {
        author="95th Aux Team";
		scope=2;
		scopecurator=2;
        name="95th Legion Airborne";
        requiredAddons[] = {
			"A3_Characters_F", 
			"JLTS_characters_CloneArmor",
			"95th_P1_Base_Units"
		};
		units[] = {
			"95th_P1_Airborne_Unit_Trooper",
			"95th_P1_Airborne_Unit_Sergeant",
			"95th_P1_Airborne_Unit_Captain",
			"95th_P1_Airborne_Unit_Lieutenant",
		};
    };
}; 

class CfgEditorSubcategories{
	class 95th_Airborne{displayName="Airborne";};
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
	class 95th_P1_Airborne_Helmet_Base;
    
	NEW_95TH_P1_AIRBORNE_UNIFORM(Trooper)};
	NEW_95TH_P1_AIRBORNE_UNIFORM(Sergeant)};
	NEW_95TH_P1_AIRBORNE_UNIFORM(Captain)};
	NEW_95TH_P1_AIRBORNE_UNIFORM(Lieutenant)};

	NEW_95TH_P1_AIRBORNE_HELMET(Trooper)};
	NEW_95TH_P1_AIRBORNE_HELMET(Sergeant)};
	NEW_95TH_P1_AIRBORNE_HELMET(Captain)};
	NEW_95TH_P1_AIRBORNE_HELMET(Lieutenant)};
}; 

class CfgVehicles 
{     
	class 95th_P1_Airborne_Unit_Base;

	NEW_95TH_P1_AIRBORNE_UNIT(Trooper)};
	NEW_95TH_P1_AIRBORNE_UNIT(Sergeant)};
	NEW_95TH_P1_AIRBORNE_UNIT(Captain)};
	NEW_95TH_P1_AIRBORNE_UNIT(Lieutenant)};
};