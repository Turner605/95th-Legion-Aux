class AUX_95th_Droid_BX_Unit_Base: lsd_cis_bxdroid_specops {
    scope=1;
    DSS_DamageSystem_Active=1;
    DSS_DamageSystem_Resistance=0.5;
    DSS_DamageSystem_Headshot_Multiplier=2;
    AUX_95th_Has_Commando_Jump=1;
    faction="AUX_95th_Faction_SeparatistDroids";
    editorCategory="AUX_95th_Faction_SeparatistDroids";
    editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Commandos";
    identityTypes[]={"Head_LSD_BX","Aux_95th_Identity_BX"};
    facewear="";
    items[]={"ls_cis_bxCommando_vest","SWLB_comlink_droid","JLTS_NVG_droid_chip_2","ItemGPS","ItemMap","ItemWatch","ItemCompass"};
    linkedItems[]={"ls_cis_bxCommando_vest","SWLB_comlink_droid","JLTS_NVG_droid_chip_2","ItemGPS","ItemMap","ItemWatch","ItemCompass"};
    respawnLinkedItems[]={"ls_cis_bxCommando_vest","SWLB_comlink_droid","JLTS_NVG_droid_chip_2","ItemGPS","ItemMap","ItemWatch","ItemCompass"};
    weapons[]={"JLTS_E5","WBK_Dutch_Vibro","Throw","Put"};
    respawnWeapons[]={"JLTS_E5","WBK_Dutch_Vibro","Throw","Put"};
    magazines[]={
        "JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag",
        "DSS_Magazine_Grenade_Flashbang","DSS_Magazine_Grenade_Flashbang"
    };
    respawnMagazines[]={
        "JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag",
        "DSS_Magazine_Grenade_Flashbang","DSS_Magazine_Grenade_Flashbang"
    };
    uniformClass="lsd_cis_bxDroid_uniform";
};

class AUX_95th_Droid_BX_Unit_Rifleman : AUX_95th_Droid_BX_Unit_Base {
    scope=2;
    displayName="BX Rifleman (E-5)";
};

class AUX_95th_Droid_BX_Unit_Shotgun : AUX_95th_Droid_BX_Unit_Base {
    scope=2;
    displayName="BX CQB (SB-B3)";
    weapons[]={"JLTS_SBB3","WBK_Dutch_Vibro","Throw","Put"};
    respawnWeapons[]={"JLTS_SBB3","WBK_Dutch_Vibro","Throw","Put"};
    magazines[]={
        "JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag",
        "DSS_Magazine_Grenade_Flashbang","DSS_Magazine_Grenade_Flashbang"
    };
    respawnMagazines[]={
        "JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag",
        "DSS_Magazine_Grenade_Flashbang","DSS_Magazine_Grenade_Flashbang"
    };
};

class AUX_95th_Droid_BX_Unit_Sniper : AUX_95th_Droid_BX_Unit_Base {
    scope=2;
    displayName="BX Sniper (E-5S)";
    weapons[]={"JLTS_E5S","WBK_Dutch_Vibro","Throw","Put"};
    respawnWeapons[]={"JLTS_E5S","WBK_Dutch_Vibro","Throw","Put"};
    magazines[]={
        "JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag",
        "DSS_Magazine_Grenade_Flashbang","DSS_Magazine_Grenade_Flashbang"
    };
    respawnMagazines[]={
        "JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag",
        "DSS_Magazine_Grenade_Flashbang","DSS_Magazine_Grenade_Flashbang"
    };
    uniformClass="lsd_cis_bxDroid_uniform";
};

class AUX_95th_Droid_BX_Unit_Diplomat : AUX_95th_Droid_BX_Unit_Base {
    scope=2;
    displayName="BX Diplomat (E-5)";
    uniformClass="lsd_cis_bxDiplomatDroid_uniform";
};

class AUX_95th_Droid_BX_Unit_Guard : AUX_95th_Droid_BX_Unit_Base {
    scope=2;
    displayName="BX Guard (E-5)";
    respawnWeapons[]={"JLTS_E5_shield_attached","Throw","Put"};
    magazines[]={
        "JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag",
        "DSS_Magazine_Grenade_Flashbang","DSS_Magazine_Grenade_Flashbang"
    };
    respawnMagazines[]={
        "JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag",
        "DSS_Magazine_Grenade_Flashbang","DSS_Magazine_Grenade_Flashbang"
    };
    uniformClass="lsd_cis_bxSecurityDroid_uniform";
};

class AUX_95th_Droid_BX_Unit_Commander : AUX_95th_Droid_BX_Unit_Base {
    scope=2;
    displayName="BX Commander (E-5)";
    uniformClass="lsd_cis_bxCaptainDroid_uniform";
};

class AUX_95th_CIS_Disguised_Trooper: AUX_95th_Unit_P1_Basic_Trooper {
    displayName="[95th] Disguised BX Trooper";
    author="95th Aux Team";
    DSS_Is_Disguised_As_Bluefor=1;
    faction="AUX_95th_Faction_SeparatistDroids";
    editorCategory="AUX_95th_Faction_SeparatistDroids";
    editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Commandos";
    uniformClass="AUX_95th_Uniform_P1_Basic_Trooper";
    side = 0;
    scope=2; 
    scopecurator=2;
    editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_AB.jpg"; //todo: change me
    linkedItems[]={"AUX_95th_Helmet_P1_Basic_Trooper","95th_Basic_Vest_Rifleman","JLTS_Clone_radio","ItemGPS","ItemMap","ItemWatch","ItemCompass"};
    respawnLinkedItems[]={"AUX_95th_Helmet_P1_Basic_Trooper","95th_Basic_Vest_Rifleman","JLTS_Clone_radio","ItemGPS","ItemMap","ItemWatch","ItemCompass"};
    nakedUniform = "lsd_cis_bxDroid_uniform";
    identityTypes[] = {"Head_LSD_BX"};
    allowedFacewear[] = {
        "Facewear_Empty_HUD_ARFAntenna_95th", 0.2,
        "Facewear_Empty_HUD_Headlamps_95th", 1,
        "Facewear_Empty_Headlamp_95th", 1,
        "Facewear_Poncho_Empty_Green_95th", 0.1,
        "Facewear_Scarf_Empty_Brown_95th", 0.1,
        "Facewear_Scarf_Empty_Black_95th", 0.1,
        "", 1
    };
    headgearList[] = {
        "AUX_95th_Helmet_P1_Basic_Trooper", 0.9,
        "AUX_95th_Helmet_P2_Airborne_Trooper", 0,
        "AUX_95th_Helmet_P1_ARF_Trooper", 0.6,
        "AUX_95th_Helmet_P1_Engineer_Trooper", 0.6,
        "AUX_95th_Helmet_P1_SpecOps_Trooper", 0.6
    };
    class EventHandlers {
        class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        init = "if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; };";
    };
};