faction="AUX_95th_Separatist_Army";
editorCategory="AUX_95th_Separatist_Army";
editorSubcategory="AUX_95th_Category_Droids_B1";

identityTypes[] = {"Aux_95th_Identity_B1"};
DSS_DamageSystem_Active=1;
DSS_DamageSystem_Resistance=0.25;
DSS_DamageSystem_Headshot_Multiplier=4;
DSS_EMP_Protection_Value=0.1;
impactEffectsBlood = "ImpactMetal";
impactEffectsNoBlood = "ImpactPlastic";
canBleed = 0;

class EventHandlers {
    class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
    init = "[(_this select 0)] call AUX_95th_Extras_fnc_B1Init;"; 
};