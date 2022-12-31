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
			"WBK_Combinus"
		};
		units[] = {
			"95th_CIS_Disguised_Trooper", 
			"95th_CIS_Commando_Base", 
			"95th_CIS_Commando_Captain", 
			"95th_CIS_Commando_Citadel", 
			"95th_CIS_Commando_Diplomat", 
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
		displayName="[95th] Commandos";
	};
};

class CfgVehicles 
{     
    //************************************************************************************************************************************************************************************************
    //*****             BX Units                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
	class 95th_Trooper_Base;
	class WBK_Combine_ASS_Sniper;

	class 95th_CIS_Disguised_Trooper: 95th_Trooper_Base
	{
		displayName="[95th] Disguised BX Trooper";
		faction="95th_CIS";
		editorSubcategory="95th_Commandos";
		uniformClass="95th_Uniform_Base";
        side = 0;
		editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_AB.jpg"; //todo: change me
		linkedItems[]={"95th_Helmet_Phase1","lsd_cis_bx_head""95th_Vest_Trooper","JLTS_Clone_radio","ItemGPS","ItemMap","ItemWatch","ItemCompass"};
		respawnLinkedItems[]={"95th_Helmet_Phase1","lsd_cis_bx_head","95th_Vest_Trooper","JLTS_Clone_radio","ItemGPS","ItemMap","ItemWatch","ItemCompass"};
		nakedUniform = "lsd_cis_bxDroid_uniform";
		identityTypes[] = {"BX_Droid"};
	};

	class 95th_CIS_Commando_Base: WBK_Combine_ASS_Sniper
	{
		displayName="[95th] BX Commando";
		faction="95th_CIS";
		editorSubcategory="95th_Commandos";
		uniformClass="BX_BaseUniform";
        side = 0;
		identityTypes[]={};
		facewear="";
		editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_AB.jpg"; //todo: change me
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

	class 95th_CIS_Commando_Captain: 95th_CIS_Commando_Base
	{
		displayName="[95th] BX Captain";
		uniformClass="BX_CaptainUniform";
	};

	class 95th_CIS_Commando_Citadel: 95th_CIS_Commando_Base
	{
		displayName="[95th] BX Citadel Guard";
		uniformClass="BX_CitadelUniform";
	};

	class 95th_CIS_Commando_Diplomat: 95th_CIS_Commando_Base
	{
		displayName="[95th] BX Diplomat";
		uniformClass="BX_DiplomatUniform";
	};
};