class AUX_95th_Droid_B1_Backpack_Diplomat : JLTS_B1_backpack {
	displayName="B1 Diplomat Backpack";\
	hiddenSelectionsTextures[]={"\z\AUX_95th_Extras\addons\units\data\b1\backpacks\Backpack_Diplomat.paa"};
};

class AUX_95th_Droid_B1_Backpack_Firefighter : JLTS_B1_backpack {
	displayName="B1 Firefighter Backpack";\
	hiddenSelectionsTextures[]={"\z\AUX_95th_Extras\addons\units\data\b1\backpacks\Backpack_Firefighter.paa"};
};

class AUX_95th_Droid_B1_Backpack_Medic : JLTS_B1_backpack {
	displayName="B1 Medic Backpack";\
	hiddenSelectionsTextures[]={"\z\AUX_95th_Extras\addons\units\data\b1\backpacks\Backpack_Medic.paa"};
};

class AUX_95th_Droid_B1_Backpack_Police : JLTS_B1_backpack {
	displayName="B1 Police Backpack";\
	hiddenSelectionsTextures[]={"\z\AUX_95th_Extras\addons\units\data\b1\backpacks\Backpack_Police.paa"};
};

class AUX_95th_Droid_B1_Backpack_Aqua : JLTS_B1_jetpack_Rocket {
	displayName="B1 Aqua Backpack";\
	hiddenSelectionsTextures[]={"\z\AUX_95th_Extras\addons\units\data\b1\backpacks\Jetpack_Aqua.paa"};
	JLTS_isJumppack = 0;
};

class AUX_95th_Droid_B1_Backpack_Rocket : JLTS_B1_jetpack_Rocket {
	displayName="B1 Rocket Backpack";\
	JLTS_isJumppack = 0;
	DSS_Is_Jetpack = 1;
	DSS_Jetpack_Acceleration = 1;
	DSS_Jetpack_Resistance = 2;
	DSS_Jetpack_Dash_Power_Modifier = 1.5;
	DSS_Jetpack_Dash_Cost = 5;
	DSS_Jetpack_Max_Heat = 30;
	DSS_Jetpack_Launcher_Penalty = 6;
};