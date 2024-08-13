class U_I_CombatUniform;

#if UNIFORM_P1_BASIC == 1
    class AUX_95th_Uniform_P1_Basic_##PLAYER_NAME## : U_I_CombatUniform {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        picture=QUOTE(\AUX_95th_Helmets\Data\Insignias\##SQUAD_KEY##.paa);
        displayName=QUOTE([95th] ##SQUAD_NAME## Uniforms); 
        class ItemInfo: UniformItem {
            uniformClass=QUOTE(AUX_95th_Unit_P1_Basic_##PLAYER_NAME##);
            uniformModel="-";
            containerClass="Supply150";
            mass=40;
        };
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Uniform_Squad_##SQUAD_KEY##);
            Phase = "P1";
            Type = QUOTE(P1_Basic);
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };
#endif