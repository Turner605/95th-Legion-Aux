class AUX_95th_Droid_B1_Rocket_Unit_AT : JLTS_Droid_B1_Rocket {
	DSS_DamageSystem_Active=1;
	DSS_DamageSystem_Resistance=0.25;
	DSS_DamageSystem_Headshot_Multiplier=4;
	displayName="B1 AT (E-5)";
	editorCategory="AUX_95th_CIS_Forces";
	editorSubcategory="AUX_95th_CIS_Forces_Droids_B1_Rocket";
	faction="AUX_95th_CIS";
	AUX_95th_Is_Immune_To_FallDamage = 1;
	weapons[]={"JLTS_E5", "JLTS_RPS6", "Throw", "Put"};
	respawnWeapons[]={"JLTS_E5", "JLTS_RPS6", "Throw", "Put"};
	magazines[]={
		"JLTS_RPS6_mag", "JLTS_RPS6_mag", "JLTS_RPS6_mag",
		"JLTS_E5", "JLTS_E5", "JLTS_E5", "JLTS_E5", "JLTS_E5"
	};
	respawnMagazines[]={
		"JLTS_RPS6_mag", "JLTS_RPS6_mag", "JLTS_RPS6_mag",
		"JLTS_E5", "JLTS_E5", "JLTS_E5", "JLTS_E5", "JLTS_E5"
	};
};


