#include "script_component.hpp"

class CfgPatches {
    class AUX_95th_players_examplePlayer {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_players_shared"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class XtdGearModels {
	class CfgWeapons {
		class AUX_95th_Helmet_Squad_Basic {
			label = "Basic Helmets";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearHelmets.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\basic.hpp"
		};

		class AUX_95th_Helmet_Squad_Zeus {
			label = "Zeus Helmets";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearHelmets.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\zeus.hpp"
		};

		class AUX_95th_Helmet_Squad_One_Zero {
			label = "1-0 Anooba";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearHelmets.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\one_zero.hpp"
		};

		class AUX_95th_Helmet_Squad_One_One {
			label = "1-1 Ackley";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearHelmets.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\one_one.hpp"
		};

		class AUX_95th_Helmet_Squad_One_Two {
			label = "1-2 Reek";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearHelmets.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\one_two.hpp"
		};

		class AUX_95th_Helmet_Squad_One_Three {
			label = "1-3 Krayt";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearHelmets.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\one_three.hpp"
		};

		class AUX_95th_Helmet_Squad_One_Four {
			label = "1-4 Sarlacc";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearHelmets.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\one_four.hpp"
		};

		class AUX_95th_Helmet_Squad_Five_Zero {
			label = "5-0 Zillo";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearHelmets.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\five_zero.hpp"
		};

		class AUX_95th_Helmet_Squad_Six_Zero {
			label = "6-0 Mynock";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearHelmets.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\six_zero.hpp"
		};

		class AUX_95th_Helmet_Squad_Seven_Zero {
			label = "7-0 Banshee";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearHelmets.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\seven_zero.hpp"
		};

		class AUX_95th_Helmet_Squad_Fallen {
			label = "The Fallen";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearHelmets.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\fallen.hpp"
		};

		class AUX_95th_Helmet_Squad_Unassigned {
			label = "Unassigned";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearHelmets.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\unassigned.hpp"
		};
	};
};

class CfgWeapons {
    class SEA_Helmet_P1_Base;

    #if HELMET_P1_BASIC == 1
        class AUX_95th_Helmet_P1_Basic_##PLAYER_NAME## : SEA_Helmet_P1_Base {
            scope = 2;
            scopeArsenal = 2;
            author="95th Aux Team";
            picture=QUOTE(\AUX_95th_Helmets\Data\Insignias\##SQUAD_KEY##.paa);
            displayName=QUOTE([95th] ##SQUAD_NAME## Helmets); 
            hiddenSelections[]={"Camo1","Visor"};
            hiddenSelectionsTextures[]={
                QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\helmets\p1_basic\Helmet.paa), 
                QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\helmets\p1_basic\Helmet.paa)
            };
            class XtdGearInfo {
                Phase = "P1";
                model = QUOTE(AUX_95th_Helmet_Squad_##SQUAD_KEY##);
                Type = QUOTE(P1_Basic);
                Player = QUOTE(##PLAYER_NAME##);
            };
        };
    #endif

    class SEA_Helmet_Engineer_Base;

    #if HELMET_P1_ENGINEER == 1
        class AUX_95th_Helmet_P1_Engineer_##PLAYER_NAME## : SEA_Helmet_Engineer_Base {
            scope = 2;
            scopeArsenal = 2;
            author="95th Aux Team";
            picture=QUOTE(\AUX_95th_Helmets\Data\Insignias\##SQUAD_KEY##.paa);
            displayName=QUOTE([95th] ##SQUAD_NAME## Helmets); 
            hiddenSelections[]={"Camo1","Visor"};
            hiddenSelectionsTextures[]={
                QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\helmets\p1_engineer\Helmet.paa), 
                QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\helmets\p1_engineer\Helmet.paa)
            };
            class XtdGearInfo {
                Phase = "P1";
                model = QUOTE(AUX_95th_Helmet_Squad_##SQUAD_KEY##);
                Type = QUOTE(P1_Engineer);
                Player = QUOTE(##PLAYER_NAME##);
            };
        };
    #endif

    class SEA_Helmet_ARF_base;

    #if HELMET_P1_ARF == 1
        class AUX_95th_Helmet_P1_ARF_##PLAYER_NAME## : SEA_Helmet_ARF_base {
            scope = 2;
            scopeArsenal = 2;
            author="95th Aux Team";
            picture=QUOTE(\AUX_95th_Helmets\Data\Insignias\##SQUAD_KEY##.paa);
            displayName=QUOTE([95th] ##SQUAD_NAME## Helmets); 
			hiddenSelections[]={"Camo1","Camo2","Visor"};
            hiddenSelectionsTextures[]={
                QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\helmets\p1_arf\Helmet.paa), 
                QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\helmets\p1_arf\Plates.paa), 
                QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\helmets\p1_arf\Visor.paa)
            };
            class XtdGearInfo {
                Phase = "P1";
                model = QUOTE(AUX_95th_Helmet_Squad_##SQUAD_KEY##);
                Type = QUOTE(P1_ARF);
                Player = QUOTE(##PLAYER_NAME##);
            };
        };
    #endif

    class LSEA_Helmet_Pilot_P1_Base;

    #if HELMET_P1_PILOT == 1
        class AUX_95th_Helmet_P1_Pilot_##PLAYER_NAME## : LSEA_Helmet_Pilot_P1_Base {
            scope = 2;
            scopeArsenal = 2;
            author="95th Aux Team";
            picture=QUOTE(\AUX_95th_Helmets\Data\Insignias\##SQUAD_KEY##.paa);
            displayName=QUOTE([95th] ##SQUAD_NAME## Helmets); 
			hiddenSelections[]= { "Camo1", "camo2", "Visor" };
            hiddenSelectionsTextures[]={
                QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\helmets\p1_pilot\Helmet.paa), 
                QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\helmets\p1_pilot\LifeSupport.paa), 
                QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\helmets\p1_pilot\Helmet.paa)
            };
            class XtdGearInfo {
                Phase = "P1";
                model = QUOTE(AUX_95th_Helmet_Squad_##SQUAD_KEY##);
                Type = QUOTE(P1_Pilot);
                Player = QUOTE(##PLAYER_NAME##);
            };
        };
    #endif

    class SEA_Helmet_SpecOps_SR_Base;

    #if HELMET_P1_SPECOPS == 1
        class AUX_95th_Helmet_P1_SpecOps_##PLAYER_NAME## : SEA_Helmet_SpecOps_SR_Base {
            scope = 2;
            scopeArsenal = 2;
            author="95th Aux Team";
            picture=QUOTE(\AUX_95th_Helmets\Data\Insignias\##SQUAD_KEY##.paa);
            displayName=QUOTE([95th] ##SQUAD_NAME## Helmets); 
            hiddenSelectionsTextures[]={
                QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\helmets\p1_specops\Helmet.paa), 
                QUOTE(\JLTS_AE\Data\BaseTextures\SpecOps\Antennas\SR_Antenna_co.paa), 
                QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\helmets\p1_specops\Helmet.paa)
            };
            class XtdGearInfo {
                Phase = "P1";
                model = QUOTE(AUX_95th_Helmet_Squad_##SQUAD_KEY##);
                Type = QUOTE(P1_SpecOps);
                Player = QUOTE(##PLAYER_NAME##);
            };
        };
    #endif

    class SEA_Helmet_Hazard_Base;

    #if HELMET_P1_HAZARD == 1
        class AUX_95th_Helmet_P1_Hazard_##PLAYER_NAME## : SEA_Helmet_Hazard_Base {
            scope = 2;
            scopeArsenal = 2;
            author="95th Aux Team";
            picture=QUOTE(\AUX_95th_Helmets\Data\Insignias\##SQUAD_KEY##.paa);
            displayName=QUOTE([95th] ##SQUAD_NAME## Helmets); 
            hiddenSelectionsTextures[]={
                QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\helmets\p1_hazard\Helmet.paa), 
                QUOTE(\JLTS_AE\Data\BaseTextures\Hazard\Necc_CO.paa), 
                QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\helmets\p1_hazard\Helmet.paa)
            };
            class XtdGearInfo {
                Phase = "P1";
                model = QUOTE(AUX_95th_Helmet_Squad_##SQUAD_KEY##);
                Type = QUOTE(P1_Hazard);
                Player = QUOTE(##PLAYER_NAME##);
            };
        };
    #endif

    class 3AS_H_ColdAssault_Helmet;

    #if HELMET_P1_COLD_ASSAULT == 1
        class AUX_95th_Helmet_P1_Cold_Assault_##PLAYER_NAME## : 3AS_H_ColdAssault_Helmet {
            scope = 2;
            scopeArsenal = 2;
            author="95th Aux Team";
            picture=QUOTE(\AUX_95th_Helmets\Data\Insignias\##SQUAD_KEY##.paa);
            displayName=QUOTE([95th] ##SQUAD_NAME## Helmets); 
            hiddenSelectionsTextures[]={
                QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\helmets\p1_cold_assault\Helmet.paa), 
                QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\helmets\p1_cold_assault\Helmet.paa), 
                QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\helmets\p1_cold_assault\Helmet.paa)
            };
            class XtdGearInfo {
                Phase = "P1";
                model = QUOTE(AUX_95th_Helmet_Squad_##SQUAD_KEY##);
                Type = QUOTE(P1_Cold_Assault);
                Player = QUOTE(##PLAYER_NAME##);
            };
        };
    #endif

    class 3AS_H_Katarn_Helmet;

    #if HELMET_P1_COMMANDO == 1
        class AUX_95th_Helmet_P1_Commando_##PLAYER_NAME## : 3AS_H_Katarn_Helmet {
            scope = 2;
            scopeArsenal = 2;
            author="95th Aux Team";
            picture=QUOTE(\AUX_95th_Helmets\Data\Insignias\##SQUAD_KEY##.paa);
            displayName=QUOTE([95th] ##SQUAD_NAME## Helmets); 
			hiddenSelections[]={"Camo1","Visor"};
            hiddenSelectionsTextures[]={
                QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\helmets\p1_commando\Helmet.paa), 
                QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\helmets\p1_commando\Helmet.paa)
            };
            class XtdGearInfo {
                Phase = "P1";
                model = QUOTE(AUX_95th_Helmet_Squad_##SQUAD_KEY##);
                Type = QUOTE(P1_Commando);
                Player = QUOTE(##PLAYER_NAME##);
            };
        };
    #endif

    class lsd_gar_airborne_new;

    #if HELMET_P2_AIRBORNE == 1
        class AUX_95th_Helmet_P2_Airborne_##PLAYER_NAME## : lsd_gar_airborne_new {
            scope = 2;
            scopeArsenal = 2;
            author="95th Aux Team";
            picture=QUOTE(\AUX_95th_Helmets\Data\Insignias\##SQUAD_KEY##.paa);
            displayName=QUOTE([95th] ##SQUAD_NAME## Helmets); 
            hiddenSelectionsTextures[]={
                QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\helmets\p2_airborne\Helmet.paa), 
                QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\helmets\p2_airborne\Helmet.paa)
            };
            class XtdGearInfo {
                Phase = "P2";
                model = QUOTE(AUX_95th_Helmet_Squad_##SQUAD_KEY##);
                Type = QUOTE(P2_Airborne);
                Player = QUOTE(##PLAYER_NAME##);
            };
        };
    #endif

};

#include "CfgEventHandlers.hpp"

// Helmets
// Backpacks
// Uniforms
