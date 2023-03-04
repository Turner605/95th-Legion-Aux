#define NEW_95TH_P1_ARC_UNIT(name) class 95th_P1_ARC_Unit_##name## : 95th_P1_ARC_Unit_Base {\
    scope = 2;\
	scopecurator=2;\
	displayName=[95th] ARC - ##name##;\
	linkedItems[]={95th_P1_ARC_Helmet_##name##,95th_Vest_ARC,ItemMap,JLTS_clone_comlink,ItemCompass,ItemWatch};\
	respawnLinkedItems[]={95th_P1_ARC_Helmet_##name##,95th_Vest_ARC,ItemMap,JLTS_clone_comlink,ItemCompass,ItemWatch};\
	uniformClass=95th_P1_Uniform_##name##;\
	hiddenSelectionsTextures[]=\
	{\
		\95th_P1_Units\Data\Uniforms\95th_P1_Uniform_##name##_Upper.paa,\
		\95th_P1_Units\Data\Uniforms\95th_P1_Uniform_##name##_Lower.paa\
	};\

#define NEW_95TH_P1_ARC_HELMET(name) class 95th_P1_ARC_Helmet_##name## : 95th_P1_ARC_Helmet_Base {\
    scope = 2;\
    scopeArsenal = 2;\
	displayName=[95th] ARC Helmet - ##name##;\
	hiddenSelectionsTextures[]={\95th_P1_ARC_Units\Data\Helmets\95th_P1_ARC_Helmet_##name##.paa};\


class CfgPatches 
{
    class 95th_P1_ARC_Units
    {
        author="95th Aux Team";
		scope=2;
		scopecurator=2;
        name="95th Legion ARC";
        requiredAddons[] = {
			"A3_Characters_F", 
			"JLTS_characters_CloneArmor",
			"95th_P1_Base_Units"
		};
		units[] = {
			"95th_P1_ARC_Unit_Trooper"
		};
    };
}; 

class CfgEditorSubcategories{
	class 95th_ARC{displayName="Phase 1 - ARC";};
};

class cfgWeapons 
{ 
    class ItemCore;
    class UniformItem;
    class Uniform_Base: ItemCore
    {
        class ItemInfo;
    };

	class 95th_P1_ARC_Helmet_Base;
    
	NEW_95TH_P1_ARC_HELMET(Trooper)};
}; 

class CfgVehicles 
{     
	class 95th_P1_ARC_Unit_Base;

	NEW_95TH_P1_ARC_UNIT(Trooper)};
};