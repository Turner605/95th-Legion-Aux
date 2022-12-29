class CfgPatches 
{ 
    class 95th_Legion_CIS
    {
        author="95th Aux Team";
		scope=2; 
		scopecurator=2;
        name="95th Legion CIS";
        requiredAddons[] = {"A3_Characters_F"};
		units[] = {
			"95th_CIS_Disguised_Trooper", 
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
        displayName = "95th_CIS"; 
		scope=2; 
		scopecurator=2;
        priority = 1; // Position in list. 
        side = 0; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon = ""; //Custom Icon 
    };  
};

class CfgEditorSubcategories
{
	class 95th_Disguised_BX
	{
		displayName="[95th] Disguised BX's";
	};
};

class CfgVehicles 
{     
    //************************************************************************************************************************************************************************************************
    //*****             BX Units                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
	class 95th_Trooper_Base;

	class 95th_CIS_Disguised_Trooper: 95th_Trooper_Base
	{
		displayName="[95th] Disguised Trooper";
		faction="95th_CIS";
		editorSubcategory="95th_Disguised_BX";
		uniformClass="95th_Uniform_Base";
        side = 0;
		editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_AB.jpg"; //todo: change me
		linkedItems[]={"95th_Helmet_Phase1","95th_Vest_Trooper","JLTS_Clone_radio","ItemGPS","ItemMap","ItemWatch","ItemCompass"};
		respawnLinkedItems[]={"95th_Helmet_Phase1","lsd_cis_bx_head","95th_Vest_Trooper","JLTS_Clone_radio","ItemGPS","ItemMap","ItemWatch","ItemCompass"};
		nakedUniform = "lsd_cis_bxDroid_uniform";
		identityTypes[] = {"LanguageENG_F","Head_LSD_BX"};	//todo: fix
	};
};