class JLTS_Clone_P2_DC15A;
class 3AS_Rep_ColdAssault_base_F;
class 3AS_Rep_Commando_F;

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