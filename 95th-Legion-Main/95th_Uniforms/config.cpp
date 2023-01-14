#define NEW_95TH_P1(name) class 95TH_P1_Unit_##name## : 95th_P1_Unit_Base {\
    scope = 2;\
    scopeArsenal = 2;\
	displayName=[95th] P1 ##name##;\
	uniformClass=95th_P1_Uniform_##name##;\
	hiddenSelectionsTextures[]=\
	{\
		\95th_Uniforms\Data\P1\95th_P1_Uniform_##name##_Upper.paa,\
		\95th_Uniforms\Data\P1\95th_P1_Uniform_##name##_Lower.paa\
	};\

#define NEW_95TH_P1_AIRBORNE(name) class 95TH_P1_Unit_Airborne_##name## : 95th_Unit_Airborne_Base {\
    scope = 2;\
    scopeArsenal = 2;\
	displayName=[95th] Airborne ##name##;\
	uniformClass=95th_P1_Airborne_Uniform_##name##;\
	hiddenSelectionsTextures[]=\
	{\
		\95th_Uniforms\Data\Airborne\95th_P1_Airborne_Uniform_##name##_Upper.paa,\
		\95th_Uniforms\Data\Airborne\95th_P1_Airborne_Uniform_##name##_Lower.paa\
	};\

#define NEW_95TH_P1_ARF(name) class 95TH_P1_Unit_ARF_##name## : 95th_Unit_ARF_Base {\
    scope = 2;\
    scopeArsenal = 2;\
	displayName=[95th] ARF ##name##;\
	uniformClass=95th_P1_ARF_Uniform_##name##;\
	hiddenSelectionsTextures[]=\
	{\
		\95th_Uniforms\Data\ARF\95th_P1_ARF_Uniform_##name##_Upper.paa,\
		\95th_Uniforms\Data\ARF\95th_P1_ARF_Uniform_##name##_Lower.paa\
	};\

#define NEW_95TH_P1_UNIFORM(name) class 95TH_P1_Uniform_##name## : 95th_P1_Uniform_Base {\
    scope = 2;\
    scopeArsenal = 2;\
	displayName=[95th] ##name## Uniform;\
	uniformClass=95TH_P1_Unit_##name##;\
	class ItemInfo: UniformItem\
	{\
		uniformModel=-;\
		containerClass=Supply150;\
		mass=40;\
	};\

class CfgPatches 
{ 
    class 95th_Legion_Uniforms 
    {
        author="95th Aux Team";
		scope=2; 
		scopecurator=2;
        name="95th Legion Uniforms";
        requiredAddons[] = {
			"A3_Characters_F", 
			"OPTRE_Jackal_F",
			"JLTS_characters_CloneArmor",
			"3AS_Characters_Clones_Headgear"
		};
		units[] = {
			"95th_Jedi", 
			"95TH_P1_Unit_Base", 
			"95TH_P1_Unit_Medic", 
			"95TH_P1_Unit_ARC", 
			"95TH_P1_Unit_Pilot", 
			"95TH_P1_Unit_Trooper", 
			"95TH_P1_Unit_Senior",
			"95TH_P1_Unit_Veteran",
			"95TH_P1_Unit_Sergeant",
			"95TH_P1_Unit_Captain",
			"95TH_P1_Unit_Lieutenant",
			"95TH_P1_Unit_ARF_Base",
			"95TH_P1_Unit_ARF_Trooper",
			"95TH_P1_Unit_ARF_Sergeant",
			"95TH_P1_Unit_ARF_Captain",
			"95TH_P1_Unit_ARF_Lieutenant",
			"95TH_P1_Unit_Airborne_Base",
			"95TH_P1_Unit_Airborne_Trooper",
			"95TH_P1_Unit_Airborne_Sergeant",
			"95TH_P1_Unit_Airborne_Captain",
			"95TH_P1_Unit_Airborne_Lieutenant",
			"95th_Tooper_Custom_Turner",
		};
    };
}; 

class cfgFactionClasses 
{ 
    class 95th_Legion 
    { 
        displayName = "95th Legion"; 
		scope=2; 
		scopecurator=2;
        priority = 1; // Position in list. 
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon = ""; //Custom Icon 
    };  
};

class CfgEditorSubcategories
{
	class 95th_Misc{displayName="Misc";};
	class 95th_Base{displayName="P1 Troopers";};
	class 95th_Customs{displayName="Individuals";};
	class 95th_Airborne{displayName="Airborne";};
	class 95th_ARF{displayName="ARF";};
	class 95th_RoleBased{displayName="Role Based";};
};

class UniformSlotInfo 
{ 
    slotType = 0; 
    linkProxy = "-"; 
}; 

class CfgVehicles 
{     
    //************************************************************************************************************************************************************************************************
    //*****             Units Base                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    class 95th_Unit; 
	class HitPoints;
    class JLTS_Clone_P2_DC15A;

	class 95th_P1_Unit_Base: JLTS_Clone_P2_DC15A
	{
		displayName="[95th] Unit Base";
		scope=0; 
		scopecurator=0;
		faction="95th_Legion";
		editorSubcategory="95th_Base";
		editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_DC15A.jpg";
		icon="JLTS_iconManHeavy";
		linkedItems[]=
		{
			"95th_P1_Helmet_Trooper",
			"95th_Vest_Trooper",
			"JLTS_Clone_radio",
			"ItemGPS",
			"ItemMap",
			"ItemWatch",
			"ItemCompass"
		};
		respawnLinkedItems[]=
		{
			"95th_P1_Helmet_Trooper",
			"95th_Vest_Trooper",
			"JLTS_Clone_radio",
			"ItemGPS",
			"ItemMap",
			"ItemWatch",
			"ItemCompass"
		};
		weapons[]={"JLTS_DC15A_plastic", "JLTS_DC17SA", "Throw", "Put"};
		respawnWeapons[]={"JLTS_DC15A_plastic", "JLTS_DC17SA", "Throw", "Put"};
		magazines[]=
		{
			"JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag",
			"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag",
			"Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"
		};
		respawnMagazines[]=
		{
			"JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag",
			"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag",
			"Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"
		};
		uniformClass="95th_P1_Uniform_Base";
		model="\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		hiddenSelections[]={"camo1","camo2","camo3","insignia"};
		hiddenSelectionsTextures[]=
		{
			"\95th_Uniforms\Data\95th_Uniform_Trooper_Upper.paa",
			"\95th_Uniforms\Data\95th_Uniform_Trooper_Lower.paa",
			"\MRC\JLTS\characters\CloneArmor\data\Clone_armor_recon_co.paa"
		};
		class HitPoints: HitPoints
		{
			class HitFace {armor=1; material=-1; name="face_hub"; passThrough=0.80000001; radius=0.079999998; explosionShielding=0.1; minimalHit=0.0099999998;};
			class HitNeck: HitFace {armor=1; material=-1; name="neck"; passThrough=0.80000001; radius=0.1; explosionShielding=0.5; minimalHit=0.0099999998;};
			class HitHead: HitNeck {armor=1; material=-1; name="head"; passThrough=0.80000001; radius=0.2; explosionShielding=0.5; minimalHit=0.0099999998; depends="HitFace max HitNeck";};
			class HitPelvis: HitHead {armor=8; material=-1; name="pelvis"; passThrough=0.80000001; radius=0.23999999; explosionShielding=3; visual="injury_body"; minimalHit=0.0099999998; depends="";};
			class HitAbdomen: HitPelvis {armor=6; material=-1; name="spine1"; passThrough=0.80000001; radius=0.16; explosionShielding=3; visual="injury_body"; minimalHit=0.0099999998;};
			class HitDiaphragm: HitAbdomen {armor=6; material=-1; name="spine2"; passThrough=0.33000001; radius=0.18000001; explosionShielding=6; visual="injury_body"; minimalHit=0.0099999998;};
			class HitChest: HitDiaphragm {armor=8; material=-1; name="spine3"; passThrough=0.33000001; radius=0.18000001; explosionShielding=6; visual="injury_body"; minimalHit=0.0099999998;};
			class HitBody: HitChest {armor=1000; material=-1; name="body"; passThrough=1; radius=0; explosionShielding=6; visual="injury_body"; minimalHit=0.0099999998; depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";};
			class HitArms: HitBody {armor=6; material=-1; name="arms"; passThrough=1; radius=0.1; explosionShielding=3; visual="injury_hands"; minimalHit=0.0099999998; depends="0";};
			class HitHands: HitArms {armor=6; material=-1; name="hands"; passThrough=1; radius=0.1; explosionShielding=1; visual="injury_hands"; minimalHit=0.0099999998; depends="HitArms";};
			class HitLegs: HitHands {armor=6; material=-1; name="legs"; passThrough=1; radius=0.14; explosionShielding=3; visual="injury_legs"; minimalHit=0.0099999998; depends="0";};
			class Incapacitated: HitLegs {armor=1000; material=-1; name="body"; passThrough=1; radius=0; explosionShielding=3; visual=""; minimalHit=0; depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";};
			class HitLeftArm {armor=6; material=-1; name="hand_l"; passThrough=1; radius=0.079999998; explosionShielding=3; visual="injury_hands"; minimalHit=0.0099999998;};
			class HitRightArm: HitLeftArm {name="hand_r";};
			class HitLeftLeg {armor=6; material=-1; name="leg_l"; passThrough=1; radius=0.1; explosionShielding=3; visual="injury_legs"; minimalHit=0.0099999998;};
			class HitRightLeg: HitLeftLeg {name="leg_r";};
		};
	};

	class 95th_Unit_Airborne_Base : 95TH_P1_Unit_Base
	{
		displayName="[95th] Airborne";
		editorSubcategory="95th_Airborne";
		editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_AB.jpg";
		linkedItems[]={"95th_Helmet_P1_Airborne_Trooper","95th_Vest_Trooper","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"};
		respawnLinkedItems[]={"95th_Helmet_P1_Airborne_Trooper","95th_Vest_Trooper","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"};
		weapons[]={"JLTS_DC15S","JLTS_DC17SA","Throw","Put"};
		respawnWeapons[]={"JLTS_DC15S","JLTS_DC17SA","Throw","Put"};
		magazines[]=
		{
			"JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag",
			"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag",
			"Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"
		};
		respawnMagazines[]=
		{
			"JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag",
			"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag",
			"Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"
		};
	};

	class 95th_Unit_ARF_Base: 95TH_P1_Unit_Base
	{
		displayName="[95th] ARF";
		editorSubcategory="95th_ARF";
		linkedItems[] = {"95th_Helmet_P1_ARF_Trooper","95th_Vest_Trooper","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {"95th_Helmet_P1_ARF_Trooper","95th_Vest_Trooper","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	};

    //************************************************************************************************************************************************************************************************
    //*****             Usable Units                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    
	//P1
	NEW_95TH_P1(Trooper)};
	
	NEW_95TH_P1(Senior)};

	NEW_95TH_P1(Veteran)
		linkedItems[] = {"95th_P1_Helmet_Trooper","95th_Vest_Veteran","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {"95th_P1_Helmet_Trooper","95th_Vest_Trooper","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	};

	NEW_95TH_P1(Sergeant)
        linkedItems[] = {"95th_P1_Helmet_Trooper","95th_Vest_Sergeant","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {"95th_P1_Helmet_Trooper","95th_Vest_Sergeant","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	};

	NEW_95TH_P1(Captain)
        linkedItems[] = {"95th_P1_Helmet_Trooper","95th_Vest_Captain","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {"95th_P1_Helmet_Trooper","95th_Vest_Captain","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	};

	NEW_95TH_P1(Lieutenant)
        linkedItems[] = {"95th_P1_Helmet_Trooper","95th_Vest_Lieutenant","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {"95th_P1_Helmet_Trooper","95th_Vest_Lieutenant","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	};

	NEW_95TH_P1(Medic)
		editorSubcategory="95th_RoleBased";
		attendant=1;
	};

	NEW_95TH_P1(ARC)
		editorSubcategory="95th_RoleBased";
		linkedItems[] = {"95th_P1_Helmet_Trooper","95th_Vest_ARC","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {"95th_P1_Helmet_Trooper","95th_Vest_ARC","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	};

	NEW_95TH_P1(Pilot)
		editorSubcategory="95th_RoleBased";
		linkedItems[] = {"95th_Helmet_P1_Pilot_Trooper","95th_Vest_Trooper","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {"95th_Helmet_P1_Pilot_Trooper","95th_Vest_Trooper","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	};


    //Airborne
	NEW_95TH_P1_AIRBORNE(Trooper)};

	NEW_95TH_P1_AIRBORNE(Sergeant)
		linkedItems[]={"95th_Helmet_P1_Airborne_Trooper","95th_Vest_Sergeant","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"};
		respawnLinkedItems[]={"95th_Helmet_P1_Airborne_Trooper","95th_Vest_Sergeant","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"};
	};

	NEW_95TH_P1_AIRBORNE(Captain)
		linkedItems[]={"95th_Helmet_P1_Airborne_Trooper","95th_Vest_Captain","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"};
		respawnLinkedItems[]={"95th_Helmet_P1_Airborne_Trooper","95th_Vest_Captain","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"};
	};

	NEW_95TH_P1_AIRBORNE(Lieutenant)
		linkedItems[]={"95th_Helmet_P1_Airborne_Trooper","95th_Vest_Lieutenant","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"};
		respawnLinkedItems[]={"95th_Helmet_P1_Airborne_Trooper","95th_Vest_Lieutenant","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"};
	};


    //ARF
	NEW_95TH_P1_ARF(Trooper)};

	NEW_95TH_P1_ARF(Sergeant)
		linkedItems[] = {"95th_Helmet_P1_ARF_Trooper","95th_Vest_Sergeant","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {"95th_Helmet_P1_ARF_Trooper","95th_Vest_Sergeant","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	};

	NEW_95TH_P1_ARF(Captain)
		linkedItems[] = {"95th_Helmet_P1_ARF_Trooper","95th_Vest_Captain","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {"95th_Helmet_P1_ARF_Trooper","95th_Vest_Captain","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	};

	NEW_95TH_P1_ARF(Lieutenant)
		linkedItems[] = {"95th_Helmet_P1_ARF_Trooper","95th_Vest_Lieutenant","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {"95th_Helmet_P1_ARF_Trooper","95th_Vest_Lieutenant","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	};


	//Misc
	class 95th_Jedi: 95TH_P1_Unit_Base
	{
		displayName="[95th] Jedi";
		editorSubcategory="95th_Misc";
		uniformClass="lsd_gar_phase2Insulated_uniform"; 
		linkedItems[] = {"JLTS_clone_comlink","SWLB_CEE_Clone_Scarf_White","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {"JLTS_clone_comlink","SWLB_CEE_Clone_Scarf_White","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		weapons[]={"WBK_lightsaberOldRep_jedi","Throw","Put"};
		respawnWeapons[]={"WBK_lightsaberOldRep_jedi","Throw","Put"};
		identityTypes[]={"OPTRE_Jackal_02"};
		magazines[]={"WBK_Cybercrystal","WBK_Cybercrystal","WBK_Cybercrystal"};
		respawnMagazines[]={"WBK_Cybercrystal","WBK_Cybercrystal","WBK_Cybercrystal"};
	};

	//Customs
	NEW_95TH_P1(Turner)
		linkedItems[] = {"95th_P1_Helmet_Turner","95th_Vest_Lieutenant","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {"95th_P1_Helmet_Turner","95th_Vest_Lieutenant","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	};
};

class cfgWeapons 
{ 
    //********************************************************************************************************************************************************************************************
    //*****            Uniform Base              *****************************************************************************************************************************************************
    //********************************************************************************************************************************************************************************************
    class InventoryItem_Base_F;
    class ItemCore;
    class UniformItem;
    class Uniform_Base: ItemCore
    {
        class ItemInfo;
    };
    
    class U_I_CombatUniform;

	class 95th_P1_Uniform_Base: U_I_CombatUniform
	{
		author="95th Aux";
		scope=2;
		displayName="[95th] Trooper Uniform";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass="95TH_P1_Unit_Base";
			uniformModel="-";
			containerClass="Supply150";
			mass=40;
		};
	};

	//Rank Uniforms
	NEW_95TH_P1_UNIFORM(Senior)};
	NEW_95TH_P1_UNIFORM(Veteran)};
	NEW_95TH_P1_UNIFORM(Sergeant)};
	NEW_95TH_P1_UNIFORM(Captain)};
	NEW_95TH_P1_UNIFORM(Lieutenant)};

	//Role Uniforms
	NEW_95TH_P1_UNIFORM(Medic)};

	//Custom Uniforms
	NEW_95TH_P1_UNIFORM(Turner)};
}; 