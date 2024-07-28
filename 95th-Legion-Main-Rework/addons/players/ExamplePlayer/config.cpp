#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"DSS_main"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class XtdGearModels {
	class CfgWeapons {
		class AUX_95th_Helmet_Squad_Basic {
			label = "Basic Helmets";
			#include "XtdGearModels\xtdGearShared.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\basic.hpp"
		};

		class AUX_95th_Helmet_Squad_Zeus {
			label = "Zeus Helmets";
			#include "XtdGearModels\xtdGearShared.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\zeus.hpp"
		};

		class AUX_95th_Helmet_Squad_One_Zero {
			label = "1-0 Anooba";
			#include "XtdGearModels\xtdGearShared.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\one_zero.hpp"
		};

		class AUX_95th_Helmet_Squad_One_One {
			label = "1-1 Ackley";
			#include "XtdGearModels\xtdGearShared.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\one_one.hpp"
		};

		class AUX_95th_Helmet_Squad_One_Two {
			label = "1-2 Reek";
			#include "XtdGearModels\xtdGearShared.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\one_two.hpp"
		};

		class AUX_95th_Helmet_Squad_One_Three {
			label = "1-3 Krayt";
			#include "XtdGearModels\xtdGearShared.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\one_three.hpp"
		};

		class AUX_95th_Helmet_Squad_One_Four {
			label = "1-4 Sarlacc";
			#include "XtdGearModels\xtdGearShared.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\one_four.hpp"
		};

		class AUX_95th_Helmet_Squad_Five_Zero {
			label = "5-0 Zillo";
			#include "XtdGearModels\xtdGearShared.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\five_zero.hpp"
		};

		class AUX_95th_Helmet_Squad_Six_Zero {
			label = "6-0 Mynock";
			#include "XtdGearModels\xtdGearShared.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\six_zero.hpp"
		};

		class AUX_95th_Helmet_Squad_Seven_Zero {
			label = "7-0 Banshee";
			#include "XtdGearModels\xtdGearShared.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\seven_zero.hpp"
		};

		class AUX_95th_Helmet_Squad_Fallen {
			label = "The Fallen";
			#include "XtdGearModels\xtdGearShared.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\fallen.hpp"
		};

		class AUX_95th_Helmet_Squad_Unassigned {
			label = "Unassigned";
			#include "XtdGearModels\xtdGearShared.hpp"
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
                model = QUOTE(AUX_95th_Helmet_Squad_##SQUAD_KEY##);
                Type = QUOTE(P1_ARF);
                Player = QUOTE(##PLAYER_NAME##);
            };
        };
    #endif

};



// Helmets
// Backpacks
// Uniforms
