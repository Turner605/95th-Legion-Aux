#include "script_component.hpp"

class CfgPatches {
    class AUX_95th_players_shared {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			"AUX_95th_main",
			"JLTS_characters_CloneArmor",
			"3as_Backpacks"
		};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgFunctions {
    class AUX_95th {
        class players_shared {
			file = "\z\AUX_95th\addons\players\shared\functions";
            class addPlayerGearToArsenal {};
        };
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



		class AUX_95th_Uniform_Squad_Basic {
			label = "Basic Uniforms";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearUniforms.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\basic.hpp"
		};

		class AUX_95th_Uniform_Squad_Zeus {
			label = "Zeus Uniforms";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearUniforms.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\zeus.hpp"
		};

		class AUX_95th_Uniform_Squad_One_Zero {
			label = "1-0 Anooba";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearUniforms.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\one_zero.hpp"
		};

		class AUX_95th_Uniform_Squad_One_One {
			label = "1-1 Ackley";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearUniforms.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\one_one.hpp"
		};

		class AUX_95th_Uniform_Squad_One_Two {
			label = "1-2 Reek";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearUniforms.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\one_two.hpp"
		};

		class AUX_95th_Uniform_Squad_One_Three {
			label = "1-3 Krayt";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearUniforms.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\one_three.hpp"
		};

		class AUX_95th_Uniform_Squad_One_Four {
			label = "1-4 Sarlacc";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearUniforms.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\one_four.hpp"
		};

		class AUX_95th_Uniform_Squad_Five_Zero {
			label = "5-0 Zillo";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearUniforms.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\five_zero.hpp"
		};

		class AUX_95th_Uniform_Squad_Six_Zero {
			label = "6-0 Mynock";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearUniforms.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\six_zero.hpp"
		};

		class AUX_95th_Uniform_Squad_Seven_Zero {
			label = "7-0 Banshee";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearUniforms.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\seven_zero.hpp"
		};

		class AUX_95th_Uniform_Squad_Fallen {
			label = "The Fallen";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearUniforms.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\fallen.hpp"
		};

		class AUX_95th_Uniform_Squad_Unassigned {
			label = "Unassigned";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearUniforms.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\unassigned.hpp"
		};

		class AUX_95th_Vests_Squad_Basic {
			label = "Basic Helmets";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearVests.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\basic.hpp"
		};

		class AUX_95th_Vests_Squad_Zeus {
			label = "Zeus Helmets";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearVests.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\zeus.hpp"
		};

		class AUX_95th_Vests_Squad_One_Zero {
			label = "1-0 Anooba";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearVests.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\one_zero.hpp"
		};

		class AUX_95th_Vests_Squad_One_One {
			label = "1-1 Ackley";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearVests.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\one_one.hpp"
		};

		class AUX_95th_Vests_Squad_One_Two {
			label = "1-2 Reek";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearVests.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\one_two.hpp"
		};

		class AUX_95th_Vests_Squad_One_Three {
			label = "1-3 Krayt";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearVests.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\one_three.hpp"
		};

		class AUX_95th_Vests_Squad_One_Four {
			label = "1-4 Sarlacc";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearVests.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\one_four.hpp"
		};

		class AUX_95th_Vests_Squad_Five_Zero {
			label = "5-0 Zillo";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearVests.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\five_zero.hpp"
		};

		class AUX_95th_Vests_Squad_Six_Zero {
			label = "6-0 Mynock";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearVests.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\six_zero.hpp"
		};

		class AUX_95th_Vests_Squad_Seven_Zero {
			label = "7-0 Banshee";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearVests.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\seven_zero.hpp"
		};

		class AUX_95th_Vests_Squad_Fallen {
			label = "The Fallen";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearVests.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\fallen.hpp"
		};

		class AUX_95th_Vests_Squad_Unassigned {
			label = "Unassigned";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearVests.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\unassigned.hpp"
		};
	};

	class CfgVehicles {
		class AUX_95th_Backpacks_Squad_Basic {
			label = "Basic Backpacks";
		#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearBackpacks.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\basic.hpp"
		};

		class AUX_95th_Backpacks_Squad_Zeus {
			label = "Zeus Backpacks";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearBackpacks.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\zeus.hpp"
		};

		class AUX_95th_Backpacks_Squad_One_Zero {
			label = "1-0 Anooba";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearBackpacks.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\one_zero.hpp"
		};

		class AUX_95th_Backpacks_Squad_One_One {
			label = "1-1 Ackley";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearBackpacks.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\one_one.hpp"
		};

		class AUX_95th_Backpacks_Squad_One_Two {
			label = "1-2 Reek";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearBackpacks.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\one_two.hpp"
		};

		class AUX_95th_Backpacks_Squad_One_Three {
			label = "1-3 Krayt";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearBackpacks.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\one_three.hpp"
		};

		class AUX_95th_Backpacks_Squad_One_Four {
			label = "1-4 Sarlacc";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearBackpacks.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\one_four.hpp"
		};

		class AUX_95th_Backpacks_Squad_Five_Zero {
			label = "5-0 Zillo";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearBackpacks.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\five_zero.hpp"
		};

		class AUX_95th_Backpacks_Squad_Six_Zero {
			label = "6-0 Mynock";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearBackpacks.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\six_zero.hpp"
		};

		class AUX_95th_Backpacks_Squad_Seven_Zero {
			label = "7-0 Banshee";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearBackpacks.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\seven_zero.hpp"
		};

		class AUX_95th_Backpacks_Squad_Fallen {
			label = "The Fallen";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearBackpacks.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\fallen.hpp"
		};

		class AUX_95th_Backpacks_Squad_Unassigned {
			label = "Unassigned";
			#include "\z\AUX_95th\addons\players\shared\XtdGearModels\xtdGearBackpacks.hpp"
			#include "\z\AUX_95th\addons\main\xtdGearSquads\unassigned.hpp"
		};
	};

};

class CfgFactionClasses {
    class AUX_95th_Legion_Faction_Clones {displayName = "[95th] Clones";  priority = 1; side = 1;};
};

class CfgEditorSubcategories {
	class AUX_95th_Legion_Characters_Category_Squad_Depricated{displayName="Depricated Units";};
	class AUX_95th_Legion_Characters_Category_Squad_Basic{displayName="Basic Units";};
	class AUX_95th_Legion_Characters_Category_Squad_Unassigned{displayName="Unassigned Units";};
	class AUX_95th_Legion_Characters_Category_Squad_Fallen{displayName="Fallen Units";};
	class AUX_95th_Legion_Characters_Category_Squad_Zeus{displayName="Zeus Units";};
	class AUX_95th_Legion_Characters_Category_Squad_One_Zero{displayName="1-0 Units";};
	class AUX_95th_Legion_Characters_Category_Squad_One_One{displayName="1-1 Units";};
	class AUX_95th_Legion_Characters_Category_Squad_One_Two{displayName="1-2 Units";};
	class AUX_95th_Legion_Characters_Category_Squad_One_Three{displayName="1-3 Units";};
	class AUX_95th_Legion_Characters_Category_Squad_One_Four{displayName="1-4 Units";};
	class AUX_95th_Legion_Characters_Category_Squad_Five_Zero{displayName="5-0 Units";};
	class AUX_95th_Legion_Characters_Category_Squad_Six_Zero{displayName="6-0 Units";};
	class AUX_95th_Legion_Characters_Category_Squad_Seven_Zero{displayName="7-0 Units";};
};

class CfgVehicles {
	//############################### Flamethrower Backpack ###############################
	class ReammoBox;
	class Bag_Base: ReammoBox{};
	class AUX_95th_BX42_Backpack: Bag_Base {
		displayName="[95th] BX-42 Flamethrower Pack";
		author="95th Aux Team";
		WBK_BurnEm_FlamethrowerBaloons = "true";
		scope=2; maximumLoad=250; mass=80;
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_jumppack_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneJumppack.p3d";
		hiddenSelections[]={"camo1"};
		hiddenSelectionsTextures[]={"\z\AUX_95th\addons\players\shared\data\Backpack_Flame.paa"};
		tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=16000;
		tf_subtype="digital_lr";
        class XtdGearInfo {
            model = "AUX_95th_Backpacks_Squad_Basic";
            Type = "Flamer";
            Role = "Light";
            Visibility = "Shown";
            Radio = "Enabled";
            Player = "Trooper";
        };
	};
};

#include "CfgEventHandlers.hpp"