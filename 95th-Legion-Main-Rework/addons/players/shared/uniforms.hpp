class U_I_CombatUniform;
class 3AS_U_Rep_ColdAssault_Armor;
class 3AS_U_Rep_Katarn_Armor;

#if UNIFORM_P1_BASIC == 1
    class AUX_95th_Uniform_P1_Basic_##PLAYER_NAME : U_I_CombatUniform {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Uniforms); 
        class ItemInfo: UniformItem {
            uniformClass=QUOTE(DOUBLES(AUX_95th_Unit_P1_Basic,PLAYER_NAME));
            uniformModel="-";
            containerClass="Supply150";
            mass=40;
        };
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Uniform_Squad,SQUAD_KEY));
            Phase = "P1";
            Type = QUOTE(Basic);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

#if UNIFORM_P1_MC == 1
    class AUX_95th_Uniform_P1_MC_##PLAYER_NAME : U_I_CombatUniform {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Uniforms); 
        class ItemInfo: UniformItem {
            uniformClass=QUOTE(DOUBLES(AUX_95th_Unit_P1_MC,PLAYER_NAME));
            uniformModel="-";
            containerClass="Supply150";
            mass=40;
        };
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Uniform_Squad,SQUAD_KEY));
            Phase = "P1";
            Type = QUOTE(MC);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

#if UNIFORM_P1_COLDASSAULT == 1
    class AUX_95th_Uniform_P1_Cold_Assault_##PLAYER_NAME : 3AS_U_Rep_ColdAssault_Armor {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Uniforms); 
        class ItemInfo: UniformItem {
            uniformClass=QUOTE(DOUBLES(AUX_95th_Unit_P1_Cold_Assault,PLAYER_NAME));
            uniformModel="-";
            containerClass="Supply150";
            mass=40;
        };
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Uniform_Squad,SQUAD_KEY));
            Phase = "P1";
            Type = QUOTE(ColdAssault);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

#if UNIFORM_P1_COMMANDO == 1
    class AUX_95th_Uniform_P1_Commando_##PLAYER_NAME : 3AS_U_Rep_Katarn_Armor {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Uniforms); 
        class ItemInfo: UniformItem {
            uniformClass=QUOTE(DOUBLES(AUX_95th_Unit_Commando,PLAYER_NAME));
            uniformModel="-";
            containerClass="Supply150";
            mass=40;
        };
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Uniform_Squad,SQUAD_KEY));
            Phase = "P1";
            Type = QUOTE(Commando);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif