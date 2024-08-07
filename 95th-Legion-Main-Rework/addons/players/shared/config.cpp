#include "script_component.hpp"

class CfgPatches {
    class AUX_95th_players_shared {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main"};
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

#include "CfgEventHandlers.hpp"