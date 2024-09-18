#include "\z\AUX_95th\addons\players\shared\script_squad_defines.hpp"
class SEA_Helmet_P1_Base;

#if HELMET_P1_BASIC == 1
    class AUX_95th_Helmet_P1_Basic_##PLAYER_NAME : SEA_Helmet_P1_Base {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Helmets); 
        hiddenSelections[]={"Camo1","Visor"};
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\helmets\p1_basic\Helmet.paa), 
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\helmets\p1_basic\Helmet.paa)
        };
        class XtdGearInfo {
            Phase = "P1";
            model = QUOTE(DOUBLES(AUX_95th_Helmet_Squad,SQUAD_KEY));
            Type = QUOTE(P1_Basic);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

class SEA_Helmet_Engineer_Base;

#if HELMET_P1_ENGINEER == 1
    class AUX_95th_Helmet_P1_Engineer_##PLAYER_NAME : SEA_Helmet_Engineer_Base {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Helmets); 
        hiddenSelections[]={"Camo1","Visor"};
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\helmets\p1_engineer\Helmet.paa), 
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\helmets\p1_engineer\Helmet.paa)
        };
        class XtdGearInfo {
            Phase = "P1";
            model = QUOTE(DOUBLES(AUX_95th_Helmet_Squad,SQUAD_KEY));
            Type = QUOTE(P1_Engineer);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

class SEA_Helmet_ARF_base;

#if HELMET_P1_ARF == 1
    class AUX_95th_Helmet_P1_ARF_##PLAYER_NAME : SEA_Helmet_ARF_base {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Helmets); 
        hiddenSelections[]={"Camo1","Camo2","Visor"};
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\helmets\p1_arf\Helmet.paa), 
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\helmets\p1_arf\Plates.paa), 
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\helmets\p1_arf\Visor.paa)
        };
        class XtdGearInfo {
            Phase = "P1";
            model = QUOTE(DOUBLES(AUX_95th_Helmet_Squad,SQUAD_KEY));
            Type = QUOTE(P1_ARF);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

class LSEA_Helmet_Pilot_P1_Base;

#if HELMET_P1_PILOT == 1
    class AUX_95th_Helmet_P1_Pilot_##PLAYER_NAME : LSEA_Helmet_Pilot_P1_Base {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Helmets); 
        hiddenSelections[]= { "Camo1", "camo2", "Visor" };
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\helmets\p1_pilot\Helmet.paa), 
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\helmets\p1_pilot\LifeSupport.paa), 
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\helmets\p1_pilot\Helmet.paa)
        };
        class XtdGearInfo {
            Phase = "P1";
            model = QUOTE(DOUBLES(AUX_95th_Helmet_Squad,SQUAD_KEY));
            Type = QUOTE(P1_Pilot);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

class SEA_Helmet_SpecOps_SR_Base;

#if HELMET_P1_SPECOPS == 1
    class AUX_95th_Helmet_P1_SpecOps_##PLAYER_NAME : SEA_Helmet_SpecOps_SR_Base {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Helmets); 
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\helmets\p1_specops\Helmet.paa), 
            QUOTE(\JLTS_AE\Data\BaseTextures\SpecOps\Antennas\SR_Antenna_co.paa), 
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\helmets\p1_specops\Helmet.paa)
        };
        class XtdGearInfo {
            Phase = "P1";
            model = QUOTE(DOUBLES(AUX_95th_Helmet_Squad,SQUAD_KEY));
            Type = QUOTE(P1_SpecOps);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

class SEA_Helmet_Hazard_Base;

#if HELMET_P1_HAZARD == 1
    class AUX_95th_Helmet_P1_Hazard_##PLAYER_NAME : SEA_Helmet_Hazard_Base {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Helmets); 
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\helmets\p1_hazard\Helmet.paa), 
            QUOTE(\JLTS_AE\Data\BaseTextures\Hazard\Necc_CO.paa), 
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\helmets\p1_hazard\Helmet.paa)
        };
        class XtdGearInfo {
            Phase = "P1";
            model = QUOTE(DOUBLES(AUX_95th_Helmet_Squad,SQUAD_KEY));
            Type = QUOTE(P1_Hazard);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

class 3AS_H_ColdAssault_Helmet;

#if HELMET_P1_COLD_ASSAULT == 1
    class AUX_95th_Helmet_P1_Cold_Assault_##PLAYER_NAME : 3AS_H_ColdAssault_Helmet {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Helmets); 
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\helmets\p1_cold_assault\Helmet.paa), 
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\helmets\p1_cold_assault\Helmet.paa), 
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\helmets\p1_cold_assault\Helmet.paa)
        };
        class XtdGearInfo {
            Phase = "P1";
            model = QUOTE(DOUBLES(AUX_95th_Helmet_Squad,SQUAD_KEY));
            Type = QUOTE(P1_Cold_Assault);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

class 3AS_H_Katarn_Helmet;

#if HELMET_P1_COMMANDO == 1
    class AUX_95th_Helmet_P1_Commando_##PLAYER_NAME : 3AS_H_Katarn_Helmet {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Helmets); 
        hiddenSelections[]={"Camo1","Visor"};
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\helmets\p1_commando\Helmet.paa), 
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\helmets\p1_commando\Helmet.paa)
        };
        class XtdGearInfo {
            Phase = "P1";
            model = QUOTE(DOUBLES(AUX_95th_Helmet_Squad,SQUAD_KEY));
            Type = QUOTE(P1_Commando);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

class lsd_gar_airborne_new;

#if HELMET_P2_AIRBORNE == 1
    class AUX_95th_Helmet_P2_Airborne_##PLAYER_NAME : lsd_gar_airborne_new {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Helmets); 
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\helmets\p2_airborne\Helmet.paa), 
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\helmets\p2_airborne\Helmet.paa)
        };
        class XtdGearInfo {
            Phase = "P2";
            model = QUOTE(DOUBLES(AUX_95th_Helmet_Squad,SQUAD_KEY));
            Type = QUOTE(P2_Airborne);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif