#define NEW_95TH_COMMANDO_UNIT(className,name,uniformClassName) class AUX_95th_Commando_Unit_##className## : lsd_cis_bxdroid_specops {\
	displayName=##name##;\
	author=95th Aux Team;\
	faction=AUX_95th_CIS;\
	editorCategory=AUX_95th_CIS_Forces;\
	editorSubcategory=AUX_95th_CIS_Forces_Droids_Commando;\
	facewear="";\
	identityTypes[]={LanguageENG_F,Head_LSD_BX};\
	AUX_95th_Has_Commando_Jump=1;\
	items[]={ls_cis_bxCommando_vest,SWLB_comlink_droid,JLTS_NVG_droid_chip_2,ItemGPS,ItemMap,ItemWatch,ItemCompass};\
	linkedItems[]={ls_cis_bxCommando_vest,SWLB_comlink_droid,JLTS_NVG_droid_chip_2,ItemGPS,ItemMap,ItemWatch,ItemCompass};\
	respawnLinkedItems[]={ls_cis_bxCommando_vest,SWLB_comlink_droid,JLTS_NVG_droid_chip_2,ItemGPS,ItemMap,ItemWatch,ItemCompass};\
	weapons[]={JLTS_E5,WBK_Dutch_Vibro,Throw,Put};\
	magazines[]= {JLTS_E5_mag,JLTS_E5_mag,JLTS_E5_mag,JLTS_E5_mag,JLTS_E5_mag,JLTS_E5_mag,DSS_Magazine_Grenade_Flashbang,DSS_Magazine_Grenade_Flashbang};\
	respawnWeapons[]={JLTS_E5,WBK_Dutch_Vibro,Throw,Put};\
	respawnMagazines[]= {JLTS_E5_mag,JLTS_E5_mag,JLTS_E5_mag,JLTS_E5_mag,JLTS_E5_mag,JLTS_E5_mag,DSS_Magazine_Grenade_Flashbang,DSS_Magazine_Grenade_Flashbang};\
	uniformClass=##uniformClassName##;\
};