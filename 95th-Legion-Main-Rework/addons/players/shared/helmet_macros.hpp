#define NEW_HELMET_P1_BASIC(PLAYER_NAME,SQUAD_KEY,SQUAD_NAME) class AUX_95th_Helmet_P1_Basic_##PLAYER_NAME## : SEA_Helmet_P1_Base {\
    scope = 2;\
    scopeArsenal = 2;\
    author=QUOTE(95th Aux Team);\
    picture=QUOTE(\AUX_95th_Helmets\Data\Insignias\##SQUAD_KEY##.paa);\
    displayName=QUOTE([95th] ##SQUAD_NAME## Helmets); \
    hiddenSelections[]={QUOTE(Camo1),QUOTE(Visor)};\
    hiddenSelectionsTextures[]={\
        QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\helmets\p1_basic\Helmet.paa), \
        QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\helmets\p1_basic\Helmet.paa)\
    };\
    class XtdGearInfo {\
        Phase = QUOTE(P1);\
        model = QUOTE(AUX_95th_Helmet_Squad_##SQUAD_KEY##);\
        Type = QUOTE(P1_Basic);\
        Player = QUOTE(##PLAYER_NAME##);\
    };\
};

