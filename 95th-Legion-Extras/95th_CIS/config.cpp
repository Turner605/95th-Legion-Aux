class CfgPatches 
{ 
    class 95th_Legion_CIS
    {
        author="95th Aux Team";
		scope=2; 
		scopecurator=2;
        name="95th Legion CIS";
        requiredAddons[] = {
			"A3_Characters_F", 
			"WBK_Combinus",
			"JLTS_core",
			"JLTS_weapons_core",
			"95th_P1_Base_Units",
			"95th_P1_Units"
		};
		units[] = {
			"95th_CIS_Disguised_Trooper", 
			"95th_CIS_Commando_Base", 
			"95th_CIS_Commando_Captain", 
			"95th_CIS_Commando_Citadel", 
			"95th_CIS_Commando_Diplomat",
			"95th_Stun_Turret_Backpack",
			"95th_Stun_Turret"
		};
    };
}; 

//************************************************************************************************************************************************************************************************
//*****        Factions                  *********************************************************************************************************************************************************
//************************************************************************************************************************************************************************************************
class cfgFactionClasses 
{ 
    class 95th_CIS 
    { 
        displayName = "95th CIS"; 
		scope=2; 
		scopecurator=2;
        priority = 1; // Position in list. 
        side = 0; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon = ""; //Custom Icon 
    };  
};

class CfgEditorSubcategories
{
	class 95th_Commandos
	{
		displayName="[95th] Commandos (NO AI)";
	};

	class 95th_Turrets
	{
		displayName="[95th] Turrets";
	};
};

class CfgWeapons
{
	class manual;
	class close;
	class short;
	class medium;
	class far;

	class JLTS_UST_turret_weapon;

	//************************************************************************************************************************************************************************************************
	//*****             Stun Weapon                *********************************************************************************************************************************************************
	//************************************************************************************************************************************************************************************************

	class 95th_Stun_Turret_Weapon: JLTS_UST_turret_weapon
	{
		displayName="[95th] Stun Auto Turret";
		displayNameShort="[95th] Stun Auto Turret";
		magazines[]=
		{
			"JLTS_stun_mag_short"
		};
		magazineReloadTime=5;
		
		class StandardSound
		{
			begin1[]={"MRC\JLTS\weapons\Core\sounds\stun",5, 1.5, 1800};
			soundBegin[]={"begin1", 1};
			soundClosure[]={};
		};

		class manual: manual
		{
			sounds[]={"StandardSound"};
			soundContinuous=0;
			soundBurst=0;
			class StandardSound
			{
				begin1[]={"MRC\JLTS\weapons\Core\sounds\stun",5, 1.5, 1800};
				soundBegin[]={"begin1", 1};
				soundClosure[]={};
			};
		};

		class close: close
		{
			sounds[]={"StandardSound"};
			class StandardSound
			{
				begin1[]={"MRC\JLTS\weapons\Core\sounds\stun",5, 1.5, 1800};
				soundBegin[]={"begin1", 1};
				soundClosure[]={};
			};
		};

		class far: far
		{
			sounds[]={"StandardSound"};
			class StandardSound
			{
				sounds[]={"StandardSound"};

				class StandardSound
				{
					begin1[]={"MRC\JLTS\weapons\Core\sounds\stun",5, 1.5, 1800};
					soundBegin[]={"begin1", 1};
					soundClosure[]={};
				};
			};
		};
		class medium: medium
		{
			sounds[]={"StandardSound"};
			class StandardSound
			{
				begin1[]={"MRC\JLTS\weapons\Core\sounds\stun",5, 1.5, 1800};
				soundBegin[]={"begin1", 1};
				soundClosure[]={};
			};
		};
		class short: short
		{
			sounds[]={"StandardSound"};
			class StandardSound
			{
				begin1[]={"MRC\JLTS\weapons\Core\sounds\stun",5, 1.5, 1800};
				soundBegin[]={"begin1", 1};
				soundClosure[]={};
			};
		};
	};
};


class CfgVehicles 
{     
    //************************************************************************************************************************************************************************************************
    //*****             CIS                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
	class 95th_P1_Unit_Trooper;
	class 95th_Unit_Base;
	class lsd_cis_bxdroid_specops;
	class WBK_Combine_ASS_Sniper;
	class JLTS_UST_turret_CIS_backpack;
	class JLTS_UST_turret_CIS;

	class Turrets;
	class MainTurret;

	class assembleInfo;

	//************************************************************************************************************************************************************************************************
	//*****        Commandos                  *********************************************************************************************************************************************************
	//************************************************************************************************************************************************************************************************

	class 95th_CIS_Disguised_Trooper: 95th_P1_Unit_Trooper
	{
		displayName="[95th] Disguised BX Trooper";
		author="95th Aux Team";
		faction="95th_CIS";
		editorSubcategory="95th_Commandos";
		uniformClass="95th_P1_Uniform_Trooper";
        side = 0;
		scope=2; 
		scopecurator=2;
		editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_AB.jpg"; //todo: change me
		linkedItems[]={"95th_P1_Helmet_Trooper","lsd_cis_bx_head""95th_Vest_Trooper","JLTS_Clone_radio","ItemGPS","ItemMap","ItemWatch","ItemCompass"};
		respawnLinkedItems[]={"95th_P1_Helmet_Trooper","lsd_cis_bx_head","95th_Vest_Trooper","JLTS_Clone_radio","ItemGPS","ItemMap","ItemWatch","ItemCompass"};
		nakedUniform = "lsd_cis_bxDroid_uniform";
		identityTypes[] = {"BX_Droid"};
	};

	class 95th_CIS_Commando_Base: lsd_cis_bxdroid_specops
	{
		scope=2;
		scopecurator=2;
        side = 0;
		displayName="[95th] BX Commando";
		author="95th Aux Team";
		faction="95th_CIS";
		facewear="";
		editorSubcategory="95th_Commandos";
		identityTypes[]={"LanguageENG_F","Head_LSD_BX"};
		WBK_CombineType=" assasin_";
		WBK_BehaveLikeHuman="true";
		WBK_CustomHPparam=5;
		nakedUniform="lsd_cis_bxDroid_uniform";
		items[]={"BX_SwordVest","SWLB_comlink_droid","JLTS_NVG_droid_chip_2","ItemGPS","ItemMap","ItemWatch","ItemCompass","WBK_Health_Battery","WBK_Health_Battery","WBK_Health_Syringe"};
		linkedItems[]={"BX_SwordVest","SWLB_comlink_droid","JLTS_NVG_droid_chip_2","ItemGPS","ItemMap","ItemWatch","ItemCompass","WBK_Health_Battery","WBK_Health_Battery","WBK_Health_Syringe"};
		respawnLinkedItems[]={"BX_SwordVest","SWLB_comlink_droid","JLTS_NVG_droid_chip_2","ItemGPS","ItemMap","ItemWatch","ItemCompass","WBK_Health_Battery","WBK_Health_Battery","WBK_Health_Syringe"};
		weapons[]={"JLTS_E5","WBK_Dutch_Vibro","Throw","Put"};
		respawnWeapons[]={"JLTS_E5","WBK_Dutch_Vibro","Throw","Put"};
		magazines[]=
		{
			"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag",
			"HandGrenade","HandGrenade"
		};
		respawnMagazines[]=
		{
			"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag",
			"HandGrenade","HandGrenade"
		};
	};

	class 95th_CIS_Commando_Citadel: 95th_CIS_Commando_Base
	{
		displayName="[95th] BX Citadel Guard";
		uniformClass="lsd_cis_bxSecurityDroid_uniform";
		hiddenSelectionsTextures[]=
		{
			"lsd_units_redfor\cis\specops\textures\bx_security_co.paa"
		};
	};

	class 95th_CIS_Commando_Diplomat: 95th_CIS_Commando_Base
	{
		displayName="[95th] BX Diplomat";
		uniformClass="lsd_cis_bxDiplomatDroid_uniform";
		hiddenSelectionsTextures[]=
		{
			"lsd_units_redfor\cis\specops\textures\bx_diplomat_co.paa"
		};
	};

	class 95th_CIS_Commando_Captain: 95th_CIS_Commando_Base
	{
		displayName="[95th] BX Captain";
		icon="LSiconLeader";
		uniformClass="lsd_cis_bxCaptainDroid_uniform";
		hiddenSelectionsTextures[]=
		{
			"lsd_units_redfor\cis\specops\textures\bx_captain_co.paa"
		};
	};

	//************************************************************************************************************************************************************************************************
	//*****        Turrets                  *********************************************************************************************************************************************************
	//************************************************************************************************************************************************************************************************

	class 95th_Stun_Turret_Backpack: JLTS_UST_turret_CIS_backpack
	{
		displayName="[95th] Stun Auto Turret";
		author="95th Aux Team";
		faction="95th_CIS";
		editorSubcategory="EdSubcat_Backpacks";
		class assembleInfo: assembleInfo
		{
			base="";
			displayName="[95th] Stun Auto Turret";
			assembleTo="95th_Stun_Turret";
		};
	};

	class 95th_Stun_Turret: JLTS_UST_turret_CIS
	{
		displayName="[95th] Stun Auto Turret";
		author="95th Aux Team";
		editorSubcategory="95th_Turrets";
		editorPreview="\MRC\JLTS\weapons\Statics\turret\data\ui\editorPreviews\JLTS_UST_turret_CIS.jpg";
		side = 0;
		scope=2; 
		scopecurator=2;
		faction="95th_CIS";
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"95th_Stun_Turret_Backpack"
			};
			displayName="";
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]={"95th_Stun_Turret_Weapon"};
				magazines[]=
				{
					"JLTS_stun_mag_short",
					"JLTS_stun_mag_short",
					"JLTS_stun_mag_short",
					"JLTS_stun_mag_short",
					"JLTS_stun_mag_short",
					"JLTS_stun_mag_short",
					"JLTS_stun_mag_short",
					"JLTS_stun_mag_short",
					"JLTS_stun_mag_short",
					"JLTS_stun_mag_short"
				};
			};
		};
	};
};

class Extended_InitPost_EventHandlers
{
	class 95th_CIS_Commando_Base
	{
		class  95th_CIS_Commando_Main_Init
		{
			onRespawn="true";
			init="_unit = _this select 0; if (local _unit) then {_unit setVariable ['SFX_R_DisableDyingSounds',1,true]; _unit setSpeaker 'NoVoice'; _unit disableAI 'RADIOPROTOCOL'; removeGoggles _unit;};";
		};
		class 95th_CIS_Commando_VoiceType_Init
		{
			init="_unit = _this select 0; if (local _unit) then {_unit setVariable ['WBK_CombineType',getText (configFile >> 'CfgVehicles' >> typeOf _unit >> 'WBK_CombineType'),true];};";
		};
	};
};