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

class cfgWeapons { 
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
	class 95th_P1_ColdAssault_Helmet_Base;

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
	NEW_95TH_P1_OTHER_HELMET(Engineer,Kong)
		hiddenSelectionsTextures[]=
		{
			"\95th_P1_Other_Units\Data\Helmets\95th_P1_Engineer_Helmet_Kong.paa",
			"\95th_P1_Other_Units\Data\Helmets\95th_P1_Engineer_Helmet_Kong.paa"
		};
	};
	NEW_95TH_P1_OTHER_HELMET(Engineer,Revan)
		hiddenSelectionsTextures[]=
		{
			"\95th_P1_Other_Units\Data\Helmets\95th_P1_Engineer_Helmet_Revan.paa",
			"\95th_P1_Other_Units\Data\Helmets\95th_P1_Engineer_Helmet_Revan.paa"
		};
	};

	NEW_95TH_P1_OTHER_HELMET(ColdAssault,Trooper)
		hiddenSelectionsTextures[]=
		{
			"\95th_P1_Other_Units\Data\Helmets\95th_P1_Cold_Assault.paa",
			"\95th_P1_Other_Units\Data\Helmets\95th_P1_Cold_Assault.paa",
			"\95th_P1_Other_Units\Data\Helmets\95th_P1_Cold_Assault.paa"
		};
	};

	class 3AS_U_Rep_ColdAssault_Armor;
	class 95th_P1_Cold_Assault_Uniform: 3AS_U_Rep_ColdAssault_Armor {
		scope=2;
		displayName="[95th] Cold Assault";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem {
			uniformClass="95th_P1_Cold_Assault_Unit";
			uniformModel="-";
			containerClass="Supply150";
			mass=40;
		};
	};
};


class CfgVehicles {
	class 3AS_Rep_ColdAssault_base_F;
	class 95th_P1_Cold_Assault_Unit: 3AS_Rep_ColdAssault_base_F {
		scope=2;
		displayName="[95th] Cold Assault";
		uniformClass="95th_P1_Cold_Assault_Uniform";
		hiddenSelectionsTextures[]= {
			"\95th_P1_Other_Units\Data\Uniforms\95th_P1_Cold_Assault.paa",
			"\95th_P1_Other_Units\Data\Uniforms\95th_P1_Cold_Assault.paa"
		};
		linkedItems[]= {
			"95th_P1_Cold_Assault_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]= {
			"95th_P1_Cold_Assault_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
}