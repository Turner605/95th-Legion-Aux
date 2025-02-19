class AUX_95th_Droid_B1_Shield: JLTS_Droid_B1_Prototype {
    displayName = "B1 Shield (E-5)";
    scope = 2;
    faction="AUX_95th_Faction_SeparatistDroids";
    editorCategory="AUX_95th_Faction_SeparatistDroids";
    editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_B1_Battledroids";
    identityTypes[] = {"Aux_95th_Identity_B1"};
    DSS_DamageSystem_Active=1;
    DSS_DamageSystem_Resistance=0.25;
    DSS_DamageSystem_Headshot_Multiplier=4;
};

class AUX_95th_Droid_B1_Unit_Diplomat : JLTS_Droid_B1_E5 {
    displayName = "B1 Diplomat (E-5)";
    scope = 2;
    faction="AUX_95th_Faction_SeparatistDroids";
    editorCategory="AUX_95th_Faction_SeparatistDroids";
    editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_B1_Battledroids";
    uniformClass = "AUX_95th_Droid_B1_Uniform_Diplomat";
	backpack = "AUX_95th_Droid_B1_Backpack_Diplomat";
	hiddenSelectionsTextures[]={"\z\AUX_95th\addons\units\separatistDroids\data\b1\Body_Diplomat.paa"};
};

class AUX_95th_Droid_B1_Unit_Firefighter : JLTS_Droid_B1_E5 {
    displayName = "B1 Firefighter (E-5)";
    scope = 2;
    faction="AUX_95th_Faction_SeparatistDroids";
    editorCategory="AUX_95th_Faction_SeparatistDroids";
    editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_B1_Battledroids";
    uniformClass = "AUX_95th_Droid_B1_Uniform_Firefighter";
	backpack = "AUX_95th_Droid_B1_Backpack_Firefighter";
	hiddenSelectionsTextures[]={"\z\AUX_95th\addons\units\separatistDroids\data\b1\Body_Firefighter.paa"};
};

class AUX_95th_Droid_B1_Unit_Medic : JLTS_Droid_B1_E5 {
    displayName = "B1 Medic (E-5)";
    scope = 2;
    faction="AUX_95th_Faction_SeparatistDroids";
    editorCategory="AUX_95th_Faction_SeparatistDroids";
    editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_B1_Battledroids";
    uniformClass = "AUX_95th_Droid_B1_Uniform_Medic";
	backpack = "AUX_95th_Droid_B1_Backpack_Medic";
	hiddenSelectionsTextures[]={"\z\AUX_95th\addons\units\separatistDroids\data\b1\Body_Medic.paa"};
};

class AUX_95th_Droid_B1_Unit_Police : JLTS_Droid_B1_E5 {
    displayName = "B1 Police (E-5)";
    scope = 2;
    faction="AUX_95th_Faction_SeparatistDroids";
    editorCategory="AUX_95th_Faction_SeparatistDroids";
    editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_B1_Battledroids";
    uniformClass = "AUX_95th_Droid_B1_Uniform_Police";
	backpack = "AUX_95th_Droid_B1_Backpack_Police";
	hiddenSelectionsTextures[]={"\z\AUX_95th\addons\units\separatistDroids\data\b1\Body_Police.paa"};
};

class AUX_95th_Droid_B1_Backpack_Diplomat : JLTS_B1_backpack {
	displayName="B1 Diplomat Backpack";\
	hiddenSelectionsTextures[]={"\z\AUX_95th\addons\units\separatistDroids\data\b1\backpacks\Backpack_Diplomat.paa"};
};

class AUX_95th_Droid_B1_Backpack_Firefighter : JLTS_B1_backpack {
	displayName="B1 Firefighter Backpack";\
	hiddenSelectionsTextures[]={"\z\AUX_95th\addons\units\separatistDroids\data\b1\backpacks\Backpack_Firefighter.paa"};
};

class AUX_95th_Droid_B1_Backpack_Medic : JLTS_B1_backpack {
	displayName="B1 Medic Backpack";\
	hiddenSelectionsTextures[]={"\z\AUX_95th\addons\units\separatistDroids\data\b1\backpacks\Backpack_Medic.paa"};
};

class AUX_95th_Droid_B1_Backpack_Police : JLTS_B1_backpack {
	displayName="B1 Police Backpack";\
	hiddenSelectionsTextures[]={"\z\AUX_95th\addons\units\separatistDroids\data\b1\backpacks\Backpack_Police.paa"};
};