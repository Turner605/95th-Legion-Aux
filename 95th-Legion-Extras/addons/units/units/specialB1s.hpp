// Has a bubble shield
class AUX_95th_Droid_B1_Shield: JLTS_Droid_B1_Prototype {
    displayName = "B1 Shield (E-5)";
    scope = 2;
    faction="AUX_95th_Separatist_Army";
    editorCategory="AUX_95th_Separatist_Army";
    editorSubcategory="AUX_95th_Category_Droids_B1";
    identityTypes[] = {"Aux_95th_Identity_B1"};
    DSS_DamageSystem_Active=1;
    DSS_DamageSystem_Resistance=0.25;
    DSS_DamageSystem_Headshot_Multiplier=4;
    class EventHandlers {
        class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        init = "[(_this select 0)] call AUX_95th_Extras_fnc_B1Init;"; 
    };
    DSS_EMP_Protection_Value=0.7;
    impactEffectsBlood = "ImpactMetal";
    impactEffectsNoBlood = "ImpactPlastic";
    canBleed = 0;
};

// Has a turret it should deploy in combat
class AUX_95th_Droid_B1_Turret: JLTS_Droid_B1_Prototype {
    displayName = "B1 Turret (E-5)";
    scope = 2;
    faction="AUX_95th_Separatist_Army";
    editorCategory="AUX_95th_Separatist_Army";
    editorSubcategory="AUX_95th_Category_Droids_B1";
    identityTypes[] = {"Aux_95th_Identity_B1"};
    DSS_DamageSystem_Active=1;
    DSS_DamageSystem_Resistance=0.25;
    DSS_DamageSystem_Headshot_Multiplier=4;
    class EventHandlers {
        class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        init = "[(_this select 0)] call AUX_95th_Extras_fnc_B1Init;"; 
    };
    DSS_EMP_Protection_Value=0.7;
    impactEffectsBlood = "ImpactMetal";
    impactEffectsNoBlood = "ImpactPlastic";
    canBleed = 0;
};

// Has a mortar it should deploy in combat
class AUX_95th_Droid_B1_Mortar: JLTS_Droid_B1_Prototype {
    displayName = "B1 Mortar (E-5)";
    scope = 2;
    faction="AUX_95th_Separatist_Army";
    editorCategory="AUX_95th_Separatist_Army";
    editorSubcategory="AUX_95th_Category_Droids_B1";
    identityTypes[] = {"Aux_95th_Identity_B1"};
    DSS_DamageSystem_Active=1;
    DSS_DamageSystem_Resistance=0.25;
    DSS_DamageSystem_Headshot_Multiplier=4;
    class EventHandlers {
        class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        init = "[(_this select 0)] call AUX_95th_Extras_fnc_B1Init;"; 
    };
    DSS_EMP_Protection_Value=0.7;
    impactEffectsBlood = "ImpactMetal";
    impactEffectsNoBlood = "ImpactPlastic";
    canBleed = 0;
};

// Has a flame thrower
class AUX_95th_Droid_B1_Unit_FireCauser : JLTS_Droid_B1_E5 {
    displayName = "B1 FireCauser (Flamer)";
    scope = 2;
    faction="AUX_95th_Separatist_Army";
    editorCategory="AUX_95th_Separatist_Army";
    editorSubcategory="AUX_95th_Category_Droids_B1";
    uniformClass = "AUX_95th_Droid_B1_Uniform_Firefighter";
	backpack = "AUX_95th_Droid_B1_Backpack_Firefighter";
	hiddenSelectionsTextures[]={"\z\AUX_95th\addons\units\separatistDroids\data\b1\Body_Firefighter.paa"};
    identityTypes[] = {"Aux_95th_Identity_B1"};
    DSS_DamageSystem_Active=1;
    DSS_DamageSystem_Resistance=0.25;
    DSS_DamageSystem_Headshot_Multiplier=4;
    class EventHandlers {
        class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        init = "[(_this select 0)] call AUX_95th_Extras_fnc_B1Init;"; 
    };
    DSS_EMP_Protection_Value=0.7;
    impactEffectsBlood = "ImpactMetal";
    impactEffectsNoBlood = "ImpactPlastic";
    canBleed = 0;
};
