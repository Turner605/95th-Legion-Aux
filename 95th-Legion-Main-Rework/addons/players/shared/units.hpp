class 3AS_Rep_ColdAssault_base_F;
class 3AS_Rep_Commando_F;
class SEA_GM_Base_21_Plastic;

class B_soldier_base_F;
class B_Soldier_f: B_soldier_base_F {
    class HitPoints;
};
class JLTS_Clone_P2_DC15A: B_Soldier_f {};

#if UNIFORM_P1_BASIC == 1
    class AUX_95th_Unit_P1_Basic_##PLAYER_NAME : JLTS_Clone_P2_DC15A {\
        scope = 2;
        scopecurator=2;
        faction=QUOTE(AUX_95th_Legion_Faction_Clones);
        editorSubcategory=QUOTE(DOUBLES(AUX_95th_Legion_Characters_Category_Squad,SQUAD_KEY));
        author="95th Aux Team";
        editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_DC15A.jpg";
        weapons[]={"JLTS_DC15A_plastic", "JLTS_DC17SA", "Throw", "Put"};
        respawnWeapons[]={"JLTS_DC15A_plastic", "JLTS_DC17SA", "Throw", "Put"};
        magazines[]={
            "JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag",
            "JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag",
            "Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"
        };
        respawnMagazines[]={
            "JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag",
            "JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag",
            "Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"
        };
        displayName=QUOTE(PLAYER_NAME_BEAUTIFIED (P1)); 
        uniformClass=QUOTE(DOUBLES(AUX_95th_Uniform_P1_Basic,PLAYER_NAME));
        linkedItems[]={QUOTE(DOUBLES(AUX_95th_Helmet_P1_Basic,PLAYER_NAME)),"95th_Basic_Vest_Trooper","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"};
        respawnLinkedItems[]={QUOTE(DOUBLES(AUX_95th_Helmet_P1_Basic,PLAYER_NAME)),"95th_Basic_Vest_Trooper","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"};
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\uniforms\p1_basic\Uniform_Upper.paa), 
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\uniforms\p1_basic\Uniform_Lower.paa)
        };
        class HitPoints: HitPoints {
            class HitFace {armor = 1; material = -1; name = "face_hub"; passThrough = 0.8; radius = 0.08; explosionShielding = 0.1; minimalHit = 0.01;};
            class HitNeck: HitFace {armor = 1; material = -1; name = "neck"; passThrough = 0.8; radius = 0.1; explosionShielding = 0.5; minimalHit = 0.01;};
            class HitHead: HitNeck {armor = 1; material = -1; name = "head"; passThrough = 0.8; radius = 0.2; explosionShielding = 0.5; minimalHit = 0.01; depends = "HitFace max HitNeck";};
            class HitPelvis: HitHead {armor = 8; material = -1; name = "pelvis"; passThrough = 0.8; radius = 0.24; explosionShielding = 3; visual = "injury_body"; minimalHit = 0.01; depends = "";};
            class HitAbdomen: HitPelvis {armor = 6; material = -1; name = "spine1"; passThrough = 0.8; radius = 0.16; explosionShielding = 3; visual = "injury_body"; minimalHit = 0.01;};
            class HitDiaphragm: HitAbdomen {armor = 6; material = -1; name = "spine2"; passThrough = 0.33; radius = 0.18; explosionShielding = 6; visual = "injury_body"; minimalHit = 0.01;};
            class HitChest: HitDiaphragm {armor = 8; material = -1; name = "spine3"; passThrough = 0.33; radius = 0.18; explosionShielding = 6; visual = "injury_body"; minimalHit = 0.01;};
            class HitBody: HitChest {armor = 1000; material = -1; name = "body"; passThrough = 1; radius = 0; explosionShielding = 6; visual = "injury_body"; minimalHit = 0.01; depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";};
            class HitArms: HitBody {armor = 6; material = -1; name = "arms"; passThrough = 1; radius = 0.1; explosionShielding = 3; visual = "injury_hands"; minimalHit = 0.01; depends = "0";};
            class HitHands: HitArms {armor = 6; material = -1; name = "hands"; passThrough = 1; radius = 0.1; explosionShielding = 1; visual = "injury_hands"; minimalHit = 0.01; depends = "HitArms";};
            class HitLegs: HitHands {armor = 6; material = -1; name = "legs"; passThrough = 1; radius = 0.14;  explosionShielding = 3; visual = "injury_legs"; minimalHit = 0.01; depends = "0";};
            class Incapacitated: HitLegs {armor = 1000; material = -1; name = "body"; passThrough = 1; radius = 0; explosionShielding = 3; visual = ""; minimalHit = 0; depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";};
            class HitLeftArm {armor = 6; material = -1; name = "hand_l"; passThrough = 1; radius = 0.08; explosionShielding = 3; visual = "injury_hands"; minimalHit = 0.01;};
            class HitRightArm: HitLeftArm {name = "hand_r";};
            class HitLeftLeg {armor = 6; material = -1; name = "leg_l"; passThrough = 1; radius = 0.1; explosionShielding = 3; visual = "injury_legs"; minimalHit = 0.01;};
            class HitRightLeg: HitLeftLeg {name = "leg_r";};
        };
    };
#endif

#if UNIFORM_P1_MC == 1
    class AUX_95th_Unit_P1_MC_##PLAYER_NAME : JLTS_Clone_P2_DC15A {\
        scope = 2;
        scopecurator=2;
        faction=QUOTE(AUX_95th_Legion_Faction_Clones);
        editorSubcategory=QUOTE(DOUBLES(AUX_95th_Legion_Characters_Category_Squad,SQUAD_KEY));
        author="95th Aux Team";
        editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_DC15A.jpg";
        weapons[]={"JLTS_DC15A_plastic", "JLTS_DC17SA", "Throw", "Put"};
        respawnWeapons[]={"JLTS_DC15A_plastic", "JLTS_DC17SA", "Throw", "Put"};
        magazines[]={
            "JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag",
            "JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag",
            "Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"
        };
        respawnMagazines[]={
            "JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag",
            "JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag",
            "Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"
        };
        displayName=QUOTE(PLAYER_NAME_BEAUTIFIED (MC));
        uniformClass=QUOTE(DOUBLES(AUX_95th_Uniform_P1_MC,PLAYER_NAME));
	    model=QUOTE(\MRC\JLTS\characters\CloneArmor\CloneArmorMC.p3d);\
        linkedItems[]={QUOTE(DOUBLES(AUX_95th_Helmet_P1_Basic,PLAYER_NAME)),"95th_Basic_Vest_Trooper","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"};
        respawnLinkedItems[]={QUOTE(DOUBLES(AUX_95th_Helmet_P1_Basic,PLAYER_NAME)),"95th_Basic_Vest_Trooper","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"};
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\uniforms\p1_mc\Uniform_Upper.paa), 
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\uniforms\p1_mc\Uniform_Lower.paa)
        };
    };
#endif

#if UNIFORM_P1_COLDASSAULT == 1
    class AUX_95th_Unit_P1_Cold_Assault_##PLAYER_NAME : 3AS_Rep_ColdAssault_base_F {\
        scope = 2;
        scopecurator=2;
        faction=QUOTE(AUX_95th_Legion_Faction_Clones);
        editorSubcategory=QUOTE(DOUBLES(AUX_95th_Legion_Characters_Category_Squad,SQUAD_KEY));
        author="95th Aux Team";
        editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_DC15A.jpg";
        weapons[]={"JLTS_DC15A_plastic", "JLTS_DC17SA", "Throw", "Put"};
        respawnWeapons[]={"JLTS_DC15A_plastic", "JLTS_DC17SA", "Throw", "Put"};
        magazines[]={
            "JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag",
            "JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag",
            "Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"
        };
        respawnMagazines[]={
            "JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag",
            "JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag",
            "Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"
        };
        displayName=QUOTE(PLAYER_NAME_BEAUTIFIED (CA));
        uniformClass=QUOTE(DOUBLES(AUX_95th_Uniform_P1_Cold_Assault,PLAYER_NAME));
        linkedItems[]={QUOTE(DOUBLES(AUX_95th_Helmet_P1_Cold_Assault,PLAYER_NAME)),"95th_Basic_Vest_Trooper","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"};
        respawnLinkedItems[]={QUOTE(DOUBLES(AUX_95th_Helmet_P1_Cold_Assault,PLAYER_NAME)),"95th_Basic_Vest_Trooper","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"};
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\uniforms\p1_coldAssault\Uniform.paa), 
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\uniforms\p1_coldAssault\Uniform.paa)
        };
    };
#endif

#if UNIFORM_P1_COMMANDO == 1
    class AUX_95th_Unit_Commando_##PLAYER_NAME : 3AS_Rep_Commando_F {\
        scope = 2;
        scopecurator=2;
        faction=QUOTE(AUX_95th_Legion_Faction_Clones);
        editorSubcategory=QUOTE(DOUBLES(AUX_95th_Legion_Characters_Category_Squad,SQUAD_KEY));
        author="95th Aux Team";
        editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_DC15A.jpg";
        weapons[]={"JLTS_DC15A_plastic", "JLTS_DC17SA", "Throw", "Put"};
        respawnWeapons[]={"JLTS_DC15A_plastic", "JLTS_DC17SA", "Throw", "Put"};
        magazines[]={
            "JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag",
            "JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag",
            "Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"
        };
        respawnMagazines[]={
            "JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag",
            "JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag",
            "Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"
        };
        displayName=QUOTE(PLAYER_NAME_BEAUTIFIED (Commando));
        uniformClass=QUOTE(DOUBLES(AUX_95th_Uniform_P1_Commando,PLAYER_NAME));
        linkedItems[]={QUOTE(DOUBLES(AUX_95th_Helmet_P1_Commando,PLAYER_NAME)),"95th_Basic_Vest_Trooper","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"};
        respawnLinkedItems[]={QUOTE(DOUBLES(AUX_95th_Helmet_P1_Commando,PLAYER_NAME)),"95th_Basic_Vest_Trooper","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"};
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\uniforms\p1_commando\Uniform.paa), 
            QUOTE(\3AS\3AS_Characters\Commando\data\Katarn_Undersuit_CO.paa)
        };
    };
#endif

#if UNIFORM_P2_MARINE == 1
    class AUX_95th_Unit_Marine_##PLAYER_NAME : SEA_GM_Base_21_Plastic {\
        scope = 2;
        scopecurator=2;
        faction=QUOTE(AUX_95th_Legion_Faction_Clones);
        editorSubcategory=QUOTE(DOUBLES(AUX_95th_Legion_Characters_Category_Squad,SQUAD_KEY));
        author="95th Aux Team";
        weapons[]={"JLTS_DC15A_plastic", "JLTS_DC17SA", "Throw", "Put"};
        respawnWeapons[]={"JLTS_DC15A_plastic", "JLTS_DC17SA", "Throw", "Put"};
        magazines[]={
            "JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag",
            "JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag",
            "Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"
        };
        respawnMagazines[]={
            "JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag",
            "JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag",
            "Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"
        };
        displayName=QUOTE(PLAYER_NAME_BEAUTIFIED (Marine));
        uniformClass=QUOTE(DOUBLES(AUX_95th_Uniform_P1_Marine,PLAYER_NAME));
        linkedItems[]={QUOTE(DOUBLES(AUX_95th_Helmet_P1_Marine,PLAYER_NAME)),"95th_Marine_Vest_Trooper","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"};
        respawnLinkedItems[]={QUOTE(DOUBLES(AUX_95th_Helmet_P1_Marine,PLAYER_NAME)),"95th_Marine_Vest_Trooper","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"};
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\uniforms\p2_marine\upper.paa), 
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\uniforms\p2_marine\lower.paa), 
            QUOTE(\JLTS_AE_GM\data\BaseTextures\Uniform\Undersuit_co.paa)
        };
    };
#endif