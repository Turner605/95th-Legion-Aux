#define NEW_95TH_P1_OTHER_HELMET(type,name) class 95th_P1_##type##_Helmet_##name## : 95th_P1_##type##_Helmet_Base {\
    scope = 2;\
    scopeArsenal = 2;\
	displayName=[95th] ##type## Helmet - ##name##;\

class CfgPatches 
{
    class 95th_P1_Other_Units
    {
        author="95th Aux Team";
		scope=2;
		scopecurator=2;
        name="95th Legion P1 Other";
        requiredAddons[] = {
			"A3_Characters_F", 
			"JLTS_characters_CloneArmor",
			"95th_P1_Base_Units"
		};
		units[] = {

		};
    };
}; 

class CfgEditorSubcategories{
	class 95th_Other{displayName="Other";};
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

	// NEW_95TH_P1_ARC_UNIFORM(Trooper)};

	// class 95th_P1_ARC_Helmet_Base;
	class 95th_P1_SpecOps_Helmet_Base;
	class 95th_P1_Engineer_Helmet_Base;
	class 95th_P1_Hazard_Helmet_Base;

	NEW_95TH_P1_OTHER_HELMET(SpecOps,Trooper)
		hiddenSelectionsTextures[]=
		{
			"\95th_P1_Other_Units\Data\Helmets\95th_P1_SpecOps_Helmet_Trooper.paa",
			"\JLTS_AE\Data\BaseTextures\SpecOps\Antennas\SR_Antenna_co.paa",
			"\95th_P1_Other_Units\Data\Helmets\95th_P1_SpecOps_Helmet_Trooper.paa"
		};
	};

	NEW_95TH_P1_OTHER_HELMET(Engineer,Trooper)
		hiddenSelectionsTextures[]=
		{
			"\95th_P1_Other_Units\Data\Helmets\95th_P1_Engineer_Helmet_Trooper.paa",
			"\95th_P1_Other_Units\Data\Helmets\95th_P1_Engineer_Helmet_Trooper.paa"
		};
	};

	NEW_95TH_P1_OTHER_HELMET(Hazard,Trooper)
		hiddenSelectionsTextures[]=
		{
			"\95th_P1_Other_Units\Data\Helmets\95th_P1_Hazard_Helmet_Trooper.paa",
			"\JLTS_AE\Data\BaseTextures\Hazard\Necc_CO.paa",
			"\95th_P1_Other_Units\Data\Helmets\95th_P1_Hazard_Helmet_Trooper.paa"
		};
	};
}; 

class CfgVehicles 
{     
	class 95th_P1_ARC_Unit_Base;

	// NEW_95TH_P1_ARC_UNIT(Trooper)};
};