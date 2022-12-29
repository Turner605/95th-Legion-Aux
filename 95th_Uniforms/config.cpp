class CfgPatches 
{ 
    class 95th_Legion_Uniforms 
    {
        author="95th Aux Team";
		scope=2; 
		scopecurator=2;
        name="95th Legion Uniforms";
        requiredAddons[] = {"A3_Characters_F"};
		units[] = {
			"95th_Trooper_Base", 
			"95th_Trooper_Medic", 
			"95th_Trooper_ARC",
			"95th_Trooper_ARF",
			"95th_Trooper_Airborne",
			"95th_Trooper_Pilot",
			"95th_Trooper_Senior",
			"95th_Trooper_Veteran",
			"95th_Trooper_Sergeant",
			"95th_Trooper_Captain",
			"95th_Trooper_Lieutenant",
			"95th_Uniform_Custom_Turner",
		};
    };
}; 

//************************************************************************************************************************************************************************************************
//*****        Factions                  *********************************************************************************************************************************************************
//************************************************************************************************************************************************************************************************
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
	class 95th_Base
	{
		displayName="P1 Troopers";
	};

	class 95th_Customs
	{
		displayName="Individuals";
	};

	class 95th_Airborne
	{
		displayName="Airborne";
	};

	class 95th_ARF
	{
		displayName="ARF";
	};

	class 95th_RoleBased
	{
		displayName="Role Based";
	};
};

class UniformSlotInfo 
{ 
    slotType = 0; 
    linkProxy = "-"; 
}; 

class CfgVehicles 
{     
    //************************************************************************************************************************************************************************************************
    //*****             Unit Base                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    class 95th_Unit; 
	class HitPoints;
    class JLTS_Clone_P2_DC15A;
    
	class 95th_Trooper_Base: JLTS_Clone_P2_DC15A
	{
		displayName="[95th] Trooper";
		scope=2; 
		scopecurator=2;
		faction="95th_Legion";
		editorSubcategory="95th_Base";
		editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_DC15A.jpg";
		icon="JLTS_iconManHeavy";
		linkedItems[]=
		{
			"95th_Helmet_Phase1",
			"95th_Vest_Trooper",
			"JLTS_Clone_radio",
			"ItemGPS",
			"ItemMap",
			"ItemWatch",
			"ItemCompass"
		};
		respawnLinkedItems[]=
		{
			"95th_Helmet_Phase1",
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
		uniformClass="95th_Uniform_Base";
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

    //************************************************************************************************************************************************************************************************
    //*****             Units By Rank           *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    
	class 95th_Trooper_Senior: 95th_Trooper_Base
	{
		displayName="[95th] Senior";
		editorSubcategory="95th_Base";
		uniformClass="95th_Uniform_Senior";
		hiddenSelectionsTextures[]=
		{
			"\95th_Uniforms\Data\95th_Uniform_Senior_Upper.paa",
			"\95th_Uniforms\Data\95th_Uniform_Senior_Lower.paa",
			"\MRC\JLTS\characters\CloneArmor\data\Clone_armor_recon_co.paa"
		};
	};

	class 95th_Trooper_Veteran: 95th_Trooper_Base
	{
		displayName="[95th] Veteran";
		editorSubcategory="95th_Base";
		uniformClass="95th_Uniform_Veteran";
		linkedItems[] = {"95th_Helmet_Phase1","95th_Vest_Veteran","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {"95th_Helmet_Phase1","95th_Vest_Trooper","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	};

	class 95th_Trooper_Sergeant: 95th_Trooper_Base
	{
		displayName="[95th] Sergeant";
		editorSubcategory="95th_Base";
		uniformClass="95th_Uniform_Sergeant";
		hiddenSelectionsTextures[]=
		{
			"\95th_Uniforms\Data\95th_Uniform_Sergeant_Upper.paa", 
			"\95th_Uniforms\Data\95th_Uniform_Sergeant_Lower.paa",
			"\MRC\JLTS\characters\CloneArmor\data\Clone_armor_recon_co.paa"
		};
        linkedItems[] = {"95th_Helmet_Phase1","95th_Vest_Sergeant","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {"95th_Helmet_Phase1","95th_Vest_Sergeant","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	};

	class 95th_Trooper_Captain: 95th_Trooper_Base
	{
		displayName="[95th] Captain";
		editorSubcategory="95th_Base";
		uniformClass="95th_Uniform_Captain";
		hiddenSelectionsTextures[]=
		{
			"\95th_Uniforms\Data\95th_Uniform_Captain_Upper.paa",
			"\95th_Uniforms\Data\95th_Uniform_Captain_Lower.paa",
			"\MRC\JLTS\characters\CloneArmor\data\Clone_armor_recon_co.paa"
		};
        linkedItems[] = {"95th_Helmet_Phase1","95th_Vest_Captain","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {"95th_Helmet_Phase1","95th_Vest_Captain","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	};

	class 95th_Trooper_Lieutenant: 95th_Trooper_Base
	{
		displayName="[95th] Lieutenant";
		editorSubcategory="95th_Base";
		uniformClass="95th_Uniform_Lieutenant";
		hiddenSelectionsTextures[]=
		{
			"\95th_Uniforms\Data\95th_Uniform_Lieutenant_Upper.paa",
			"\95th_Uniforms\Data\95th_Uniform_Lieutenant_Lower.paa",
			"\MRC\JLTS\characters\CloneArmor\data\Clone_armor_recon_co.paa"
		};
        linkedItems[] = {"95th_Helmet_Phase1","95th_Vest_Lieutenant","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {"95th_Helmet_Phase1","95th_Vest_Lieutenant","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	};

    //************************************************************************************************************************************************************************************************
    //*****             Units By Role           *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    
	class 95th_Trooper_Medic: 95th_Trooper_Base
	{
		displayName="[95th] Medic";
		editorSubcategory="95th_RoleBased";
		editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_DC15AUGL.jpg";
		uniformClass="95th_Uniform_Medic";
		hiddenSelectionsTextures[]=
		{
			"\95th_Uniforms\Data\95th_Uniform_Medic_Upper.paa",
			"\95th_Uniforms\Data\95th_Uniform_Medic_Lower.paa",
			"\MRC\JLTS\characters\CloneArmor\data\Clone_armor_recon_co.paa"
		};
		attendant=1;
	};

	class 95th_Trooper_ARC: 95th_Trooper_Base
	{
		displayName="[95th] ARC";
		editorSubcategory="95th_RoleBased";
		linkedItems[] = {"95th_Helmet_Phase1","95th_Vest_ARC","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {"95th_Helmet_Phase1","95th_Vest_ARC","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	};

	class 95th_Trooper_ARF: 95th_Trooper_Base
	{
		displayName="[95th] ARF";
		editorSubcategory="95th_ARF";
		linkedItems[] = {"95th_ARF_Trooper","95th_Vest_Trooper","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {"95th_ARF_Trooper","95th_Vest_Trooper","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	};

	class 95th_Trooper_Airborne: 95th_Trooper_Base
	{
		displayName="[95th] Airborne";
		editorSubcategory="95th_Airborne";
		editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_AB.jpg";
		linkedItems[]={"95th_Airborne_Trooper","95th_Vest_Trooper","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"};
		respawnLinkedItems[]={"95th_Airborne_Trooper","95th_Vest_Trooper","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"};
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

	class 95th_Trooper_Pilot: 95th_Trooper_Base
	{
		displayName="[95th] Pilot";
		editorSubcategory="95th_RoleBased";
        linkedItems[] = {"95th_Helmet_Phase1_Pilot","95th_Vest_Trooper","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {"95th_Helmet_Phase1_Pilot","95th_Vest_Trooper","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	};

    //************************************************************************************************************************************************************************************************
    //*****             Custom Units           *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    
	class 95th_Uniform_Custom_Turner: 95th_Trooper_Base
	{
		displayName="[95th] Turner";
		editorSubcategory="95th_Customs";
		uniformClass="95th_Uniform_Custom_Turner";
		hiddenSelectionsTextures[]=
		{
			"\95th_Uniforms\Data\Customs\95th_Uniform_Custom_Turner_Upper.paa",
			"\95th_Uniforms\Data\Customs\95th_Uniform_Custom_Turner_Lower.paa",
			"\MRC\JLTS\characters\CloneArmor\data\Clone_armor_recon_co.paa"
		};
		linkedItems[] = {"95th_Helmet_Custom_Turner","95th_Vest_Lieutenant","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {"95th_Helmet_Custom_Turner","95th_Vest_Lieutenant","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
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

	class 95th_Uniform_Base: U_I_CombatUniform
	{
		author="95th Aux";
		scope=2;
		displayName="[95th] Trooper Uniform";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass="95th_Trooper_Base";
			uniformModel="-";
			containerClass="Supply150";
			mass=40;
		};
	};

    //********************************************************************************************************************************************************************************************
    //*****            Uniform By Rank              *****************************************************************************************************************************************************
    //********************************************************************************************************************************************************************************************
	
	class 95th_Uniform_Senior: 95th_Uniform_Base
	{
		displayName="[95th] Senior Uniform";
		scope=2;
		class ItemInfo: UniformItem
		{
			uniformClass="95th_Trooper_Senior";
			uniformModel="-";
			containerClass="Supply150";
			mass=40;
		};
	}

	class 95th_Uniform_Veteran: 95th_Uniform_Base
	{
		displayName="[95th] Veteran Uniform";
		scope=2;
		class ItemInfo: UniformItem
		{
			uniformClass="95th_Trooper_Veteran";
			uniformModel="-";
			containerClass="Supply150";
			mass=40;
		};
	}

	class 95th_Uniform_Sergeant: 95th_Uniform_Base
	{
		displayName="[95th] NCO Uniform";
		scope=2;
		class ItemInfo: UniformItem
		{
			uniformClass="95th_Trooper_Sergeant";
			uniformModel="-";
			containerClass="Supply150";
			mass=40;
		};
	}

	class 95th_Uniform_Captain: 95th_Uniform_Base
	{
		displayName="[95th] Platoon Uniform";
		scope=2;
		class ItemInfo: UniformItem
		{
			uniformClass="95th_Trooper_Captain";
			uniformModel="-";
			containerClass="Supply150";
			mass=40;
		};
	}

	class 95th_Uniform_Lieutenant: 95th_Uniform_Base
	{
		displayName="[95th] Command Uniform";
		scope=2;
		class ItemInfo: UniformItem
		{
			uniformClass="95th_Trooper_Lieutenant";
			uniformModel="-";
			containerClass="Supply150";
			mass=40;
		};
	}

    //********************************************************************************************************************************************************************************************
    //*****            Uniform By Role              *****************************************************************************************************************************************************
    //********************************************************************************************************************************************************************************************
    
	class 95th_Uniform_Medic: 95th_Uniform_Base
	{
		displayName="[95th] Medic Uniform";
		scope=2;
		class ItemInfo: UniformItem
		{
			uniformClass="95th_Trooper_Medic";
			uniformModel="-";
			containerClass="Supply150";
			mass=40;
		};
	}

    //********************************************************************************************************************************************************************************************
    //*****            Custom Uniforms              *****************************************************************************************************************************************************
    //********************************************************************************************************************************************************************************************
    
	class 95th_Uniform_Custom_Turner: 95th_Uniform_Base
	{
		displayName="[95th] Custom Uniform - Turner ";
		scope=2;
		class ItemInfo: UniformItem
		{
			uniformClass="95th_Uniform_Custom_Turner";
			uniformModel="-";
			containerClass="Supply150";
			mass=40;
		};
	}
}; 