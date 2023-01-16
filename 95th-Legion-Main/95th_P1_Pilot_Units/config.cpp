#define NEW_95TH_P1_Pilot_UNIT(name) class 95th_P1_Pilot_Unit_##name## : 95th_P1_Pilot_Unit_Base {\
    scope = 2;\
	scopecurator=2;\
	displayName=[95th] Pilot - ##name##;\
	linkedItems[]={95th_P1_Pilot_Helmet_##name##,95th_Vest_##name##,ItemMap,JLTS_clone_comlink,ItemCompass,ItemWatch};\
	respawnLinkedItems[]={95th_P1_Pilot_Helmet_##name##,95th_Vest_##name##,ItemMap,JLTS_clone_comlink,ItemCompass,ItemWatch};\
	uniformClass=95th_P1_Pilot_Uniform_##name##;\
	hiddenSelectionsTextures[]=\
	{\
		\95th_P1_Pilot_Units\Data\Uniforms\95th_P1_Pilot_Uniform_##name##_Upper.paa,\
		\95th_P1_Pilot_Units\Data\Uniforms\95th_P1_Pilot_Uniform_##name##_Lower.paa\
	};\

#define NEW_95TH_P1_Pilot_UNIFORM(name) class 95th_P1_Pilot_Uniform_##name## : 95th_P1_Uniform_Base {\
    scope = 2;\
    scopeArsenal = 2;\
	displayName=[95th] Pilot Uniform - ##name##;\
	class ItemInfo: UniformItem\
	{\
		uniformClass=95th_P1_Pilot_Unit_##name##;\
		uniformModel=-;\
		containerClass=Supply150;\
		mass=40;\
	};

#define NEW_95TH_P1_Pilot_HELMET(name) class 95th_P1_Pilot_Helmet_##name## : 95th_P1_Pilot_Helmet_Base {\
    scope = 2;\
    scopeArsenal = 2;\
	displayName=[95th] Pilot Helmet - ##name##;\
	hiddenSelectionsTextures[]={\95th_P1_Pilot_Units\Data\Helmets\95th_P1_Pilot_Helmet_##name##.paa};\


class CfgPatches 
{
    class 95th_P1_Pilot_Units
    {
        author="95th Aux Team";
		scope=2;
		scopecurator=2;
        name="95th Legion Pilot";
        requiredAddons[] = {
			"A3_Characters_F", 
			"JLTS_characters_CloneArmor",
			"95th_P1_Base_Units"
		};
		units[] = {
			"95th_P1_Pilot_Unit_Trooper",
			"95th_P1_Pilot_Unit_Senior",
			"95th_P1_Pilot_Unit_Veteran",
			"95th_P1_Pilot_Unit_Sergeant",
		};
    };
}; 

class CfgEditorSubcategories{
	class 95th_Pilots{displayName="Pilots";};
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
	class 95th_P1_Pilot_Helmet_Base;
    
	NEW_95TH_P1_Pilot_UNIFORM(Trooper)};
	NEW_95TH_P1_Pilot_UNIFORM(Senior)};
	NEW_95TH_P1_Pilot_UNIFORM(Veteran)};
	NEW_95TH_P1_Pilot_UNIFORM(Sergeant)};

	NEW_95TH_P1_Pilot_HELMET(Trooper)};
	NEW_95TH_P1_Pilot_HELMET(Senior)};
	NEW_95TH_P1_Pilot_HELMET(Veteran)};
	NEW_95TH_P1_Pilot_HELMET(Sergeant)};
}; 

class CfgVehicles 
{     
	class 95th_P1_Pilot_Unit_Base;

	NEW_95TH_P1_Pilot_UNIT(Trooper)};
	NEW_95TH_P1_Pilot_UNIT(Senior)};
	NEW_95TH_P1_Pilot_UNIT(Veteran)};
	NEW_95TH_P1_Pilot_UNIT(Sergeant)};
};