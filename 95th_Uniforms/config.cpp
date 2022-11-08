class CfgPatches 
{ 
    class 95th_Legion_Uniforms 
    {
        author="95th Aux Team";
        name="95th Legion Uniforms";
        requiredAddons[] = {"A3_Characters_F"};
        weapons[] = {};
		units[] = {};
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
        priority = 1; // Position in list. 
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon = ""; //Custom Icon 
    };  
};

class CfgEditorSubcategories
{
	class 95th_Phase1_Clones
	{
		displayName="Troopers";
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
    //*****             Units                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    class 95th_Unit; 
	class HitPoints;
    class JLTS_Clone_P2_DC15A;
    
	class 95th_Trooper_Base: JLTS_Clone_P2_DC15A
	{
		displayName="95th Trooper";
		faction="95th_Legion";
		editorSubcategory="95th_Phase1_Clones"; //TODO: Change?
		editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_DC15A.jpg";
		icon="JLTS_iconManHeavy";
		weapons[]=
		{
			"JLTS_DC15A_UGL_plastic",
			"JLTS_DC17SA",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_DC15A_UGL_plastic",
			"JLTS_DC17SA",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		uniformClass="95th_Uniform_Base";
		model="\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\95th_Uniforms\Data\Clone_upper_1_ColorDarkBlue.paa",
			"\95th_Uniforms\Data\Clone_lower_1_ColorDarkBlue.paa",
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

	class 95th_Trooper_Medic: 95th_Trooper_Base
	{
		displayName="95th Medic";
		editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_DC15AUGL.jpg";
		icon="JLTS_iconManHeavy";
		uniformClass="95th_Uniform_Medic";
		model="\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		hiddenSelectionsTextures[]=
		{
			// "\95th_Uniforms\Data\Clone_armorTEST1_co",
			// "\95th_Uniforms\Data\Clone_armorTEST1_co",
			// "\95th_Uniforms\Data\Clone_armorTEST1_co",
			"\MRC\JLTS\characters\CloneArmor\data\Clone_armor1_co.paa",
			"\MRC\JLTS\characters\CloneArmor\data\Clone_armor2_co.paa",
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

	class 95th_Trooper_Sergeant: 95th_Trooper_Base
	{
		displayName="95th Sergeant";
		editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_DC15AUGL.jpg";
		icon="JLTS_iconManHeavy";
		uniformClass="95th_Uniform_Sergeant";
		model="\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		hiddenSelectionsTextures[]=
		{
			"\95th_Uniforms\Data\Clone_upper_1_ColorPurple.Blue.paa",
			"\95th_Uniforms\Data\Clone_lower_1_ColorLighthissBlue.paa",
			// "\95th_Uniforms\Data\Clone_armorTEST1_co",
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

	class 95th_Trooper_Captain: 95th_Trooper_Base
	{
		displayName="95th Captain";
		editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_DC15AUGL.jpg";
		icon="JLTS_iconManHeavy";
		uniformClass="95th_Uniform_Captain";
		model="\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		hiddenSelectionsTextures[]=
		{
			"\95th_Uniforms\Data\Clone_upper_1_ColorPurple.paa",
			"\95th_Uniforms\Data\Clone_lower_1_ColorPurple.paa",
			// "\95th_Uniforms\Data\Clone_armorTEST1_co",
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

	class 95th_Trooper_Lieutenant: 95th_Trooper_Base
	{
		displayName="95th Lieutenant";
		editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_DC15AUGL.jpg";
		icon="JLTS_iconManHeavy";
		uniformClass="95th_Uniform_Lieutenant";
		model="\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\95th_Uniforms\Data\Clone_upper_1_ColorShit.paa",
			"\95th_Uniforms\Data\Clone_lower_1_ColorShit.paa",
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
};

class cfgWeapons 
{ 
    //********************************************************************************************************************************************************************************************
    //*****            Uniforms              *****************************************************************************************************************************************************
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
		displayName="95th Trooper Uniform";
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

	class 95th_Uniform_Medic: 95th_Uniform_Base
	{
		displayName="95th Medic Uniform";
		class ItemInfo: UniformItem
		{
			uniformClass="95th_Trooper_Medic";
			uniformModel="-";
			containerClass="Supply150";
			mass=40;
		};
	}

	class 95th_Uniform_Sergeant: 95th_Uniform_Base
	{
		displayName="95th Sergeant Uniform";
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
		displayName="95th Captain Uniform";
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
		displayName="95th Lieutenant Uniform";
		class ItemInfo: UniformItem
		{
			uniformClass="95th_Trooper_Lieutenant";
			uniformModel="-";
			containerClass="Supply150";
			mass=40;
		};
	}
}; 