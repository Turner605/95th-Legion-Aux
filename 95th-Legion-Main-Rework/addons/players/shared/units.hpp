class JLTS_Clone_P2_DC15A;

#if UNIFORM_P1_BASIC == 1
    class AUX_95th_Unit_P1_Basic_##PLAYER_NAME## : JLTS_Clone_P2_DC15A {\
        scope = 2;
        scopecurator=2;
        faction=QUOTE(AUX_95th_Legion_Faction_Clones);
        editorSubcategory=QUOTE(AUX_95th_Legion_Characters_Category_Squad_##SQUAD_KEY##);
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
        displayName=QUOTE(##PLAYER_NAME_BEAUTIFIED## (P1));
        uniformClass=QUOTE(AUX_95th_Uniform_P1_Basic_##PLAYER_NAME##);
        linkedItems[]={"AUX_95th_Helmet_P1_Basic_Helmet","95th_Basic_Vest_Trooper","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"};
        respawnLinkedItems[]={"AUX_95th_Helmet_P1_Basic_Helmet","95th_Basic_Vest_Trooper","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"};
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\uniforms\p1_basic\Uniform_Upper.paa), 
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\uniforms\p1_basic\Uniform_Lower.paa)
        };
    };
#endif