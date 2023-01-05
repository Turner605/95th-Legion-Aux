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
			"95th_CIS_Commando_Test"
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
		scope=2; 
		scopecurator=2;
		editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_AB.jpg"; //todo: change me
		linkedItems[]={"95th_Helmet_Phase1","lsd_cis_bx_head""95th_Vest_Trooper","JLTS_Clone_radio","ItemGPS","ItemMap","ItemWatch","ItemCompass"};
		respawnLinkedItems[]={"95th_Helmet_Phase1","lsd_cis_bx_head","95th_Vest_Trooper","JLTS_Clone_radio","ItemGPS","ItemMap","ItemWatch","ItemCompass"};
		nakedUniform = "lsd_cis_bxDroid_uniform";
		identityTypes[] = {"BX_Droid"};
	};

	class 95th_CIS_Commando_Base: 95th_Trooper_Base
	{
		displayName="[95th] BX TEST";
		faction="95th_CIS";
		identityTypes[] = {"BX_Droid"};
		WBK_CombineType=" assasin_";
		WBK_BehaveLikeHuman="true";
		editorSubcategory="95th_Commandos";
		uniformClass="BX_BaseUniform";
        side = 0;
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

class Extended_InitPost_EventHandlers
{
	class 95th_CIS_Commando_Base
	{
		class  95th_CIS_Commando_Main_Init
		{
			onRespawn="true";
			init="_unit = _this select 0; if (local _unit) then {_unit setVariable ['WBK_HL_CustomArmour',getNumber (configFile >> 'CfgVehicles' >> typeOf _unit >> 'WBK_CustomHPparam'),true]; _unit setVariable ['SFX_R_DisableDyingSounds',1,true]; _unit setSpeaker 'NoVoice';_unit disableAI 'RADIOPROTOCOL'; removeGoggles _unit; [_unit, 'WBK_CombineHead'] remoteExec ['setFace', 0, true]; {_unit removeMagazines _x;} forEach magazines _unit; removeUniform _unit; _unit forceAddUniform (getText (configFile >> 'CfgVehicles' >> typeOf _unit >> 'uniformClass')); _unit setVariable ['dam_ignore_hit0',true,true];_unit setVariable ['dam_ignore_effect0',true,true]; _value = (configFile >> 'CfgVehicles' >> typeOf _unit >> 'magazines') call BIS_fnc_getCfgData;{_unit addMagazine _x;} forEach _value;};";
		};
		class 95th_CIS_Commando_VoiceType_Init
		{
			init="_unit = _this select 0; if (local _unit) then {_unit setVariable ['WBK_HL_CustomArmour_MAX',getNumber (configFile >> 'CfgVehicles' >> typeOf _unit >> 'WBK_CustomHPparam'),true]; _unit setVariable ['WBK_CombineType',getText (configFile >> 'CfgVehicles' >> typeOf _unit >> 'WBK_CombineType'),true];};";
		};
	};
};