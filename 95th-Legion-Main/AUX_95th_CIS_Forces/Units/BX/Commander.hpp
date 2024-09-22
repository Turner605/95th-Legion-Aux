class AUX_95th_Droid_BX_Unit_Commander : lsd_cis_bxdroid_specops {
	DSS_DamageSystem_Active=1;
	DSS_DamageSystem_Resistance=0.5;
	DSS_DamageSystem_Headshot_Multiplier=2;
	displayName="BX Commander (E-5)";
	editorCategory="AUX_95th_CIS_Forces";
	editorSubcategory="AUX_95th_CIS_Forces_Droids_BX";
	faction="AUX_95th_CIS";
	facewear="";
	identityTypes[]={"Head_LSD_BX","LanguageENG_F"};
	AUX_95th_Has_Commando_Jump=1;
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
	uniformClass="lsd_cis_bxCaptainDroid_uniform";
};