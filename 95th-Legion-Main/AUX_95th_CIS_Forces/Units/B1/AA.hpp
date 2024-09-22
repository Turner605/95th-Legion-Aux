class AUX_95th_Droid_B1_Unit_AA : JLTS_Droid_B1_AT {
	identityTypes[] = {"Aux_95th_Identity_B1"};
	DSS_DamageSystem_Active=1;
	DSS_DamageSystem_Resistance=0.25;
	DSS_DamageSystem_Headshot_Multiplier=4;
	displayName="B1 AA (E60R)";
	editorCategory="AUX_95th_CIS_Forces";
	editorSubcategory="AUX_95th_CIS_Forces_Droids_B1";
	faction="AUX_95th_CIS";
	weapons[]={"JLTS_E5", "SWLW_E60R_AA", "Throw", "Put"};
	respawnWeapons[]={"JLTS_E5", "SWLW_E60R_AA", "Throw", "Put"};
	magazines[]={
		"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag",
		"SWLW_e60r_aa_mag", "SWLW_e60r_aa_mag", "SWLW_e60r_aa_mag"
	};
	respawnMagazines[]={
		"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag",
		"SWLW_e60r_aa_mag", "SWLW_e60r_aa_mag", "SWLW_e60r_aa_mag"
	};
};