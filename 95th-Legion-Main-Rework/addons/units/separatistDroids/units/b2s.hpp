class AUX_95th_Droid_B2_Unit_Blaster : lsd_cis_b2_standard {
    faction="AUX_95th_Faction_SeparatistDroids";
    editorCategory="AUX_95th_Faction_SeparatistDroids";
    editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_B2_Battledroids";
    uniformClass = "AUX_95th_Droid_B2_Uniform";
    DSS_EMP_Protection_Value=0.95;
    DSS_DamageSystem_Active=1;
	DSS_DamageSystem_Resistance=4;
	DSS_DamageSystem_Headshot_Multiplier=4;
	displayName="B2 (Blaster)";
    backpack = "";
    weapons[] = {"WBK_B2_NormalMod","Throw","Put"};
    magazines[] = {"SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag"};
    items[] = {};
    linkedItems[] = {"ls_cis_bxCommando_vest","ItemMap","ItemCompass","ItemWatch","SWLB_comlink_droid"};
    _generalMacro = "WBK_AI_StarWars_Droids";
    impactEffectsBlood = "ImpactMetal";
    impactEffectsNoBlood = "ImpactPlastic";
    canBleed = 0;

    class SoundEnvironExt {		
        generic[] = {
         {"walk", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}}, 
         {"walk", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}},
         {"walk", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}},
         {"run", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}}, 
         {"run", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}},
         {"run", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}},
         {"sprint", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}}, 
         {"sprint", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}},
         {"sprint", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}}
        };
    };

    class SoundEquipment {	
        soldier[] = {
         {"walk", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}}, 
         {"walk", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}},
         {"walk", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}},
         {"run", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}}, 
         {"run", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}},
         {"run", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}},
         {"sprint", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}}, 
         {"sprint", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}},
         {"sprint", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}}
        };
    };

    class SoundBreath {breath[] = {};};
    class SoundDrown {breath[] = {};};
    class SoundInjured {breath[] = {};};
    class SoundBleeding {breath[] = {};};
    class SoundBurning {breath[] = {};};
    class SoundChoke {breath[] = {};};
    class SoundRecovered {breath[] = {};};
};

class AUX_95th_Droid_B2_Unit_GL : AUX_95th_Droid_B2_Unit_Blaster {
    uniformClass = "lsd_cis_b2Droid_uniform";
    backpack = "";
    weapons[] = {"WBK_B2_GrenadeMod","Throw","Put"};
    magazines[] = {"SWLW_mag_40mm_6rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd"};
    items[] = {};
    linkedItems[] = {"ls_cis_bxCommando_vest","ItemMap","ItemCompass","ItemWatch","SWLB_comlink_droid"};
	displayName="B2 (GL)";
};

class AUX_95th_Droid_B2_Unit_Shotgun : AUX_95th_Droid_B2_Unit_Blaster {
    uniformClass = "lsd_cis_b2Droid_uniform";
    backpack = "";
    weapons[] = {"WBK_B2_ShotgunMod","Throw","Put"};
    magazines[] = {"SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag"};
    items[] = {};
    linkedItems[] = {"ls_cis_bxCommando_vest","ItemMap","ItemCompass","ItemWatch","SWLB_comlink_droid"};
	displayName="B2 (Shotgun)";
};