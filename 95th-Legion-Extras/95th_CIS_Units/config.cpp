#include "Macros\Commando Units.hpp"
#include "Macros\B1 Units.hpp"

class CfgPatches { 
    class 95th_CIS_Units {
        author="95th Aux Team";
		scope=2; 
		scopecurator=2;
        name="95th Legion CIS Units";
        requiredAddons[] = {"A3_Characters_F", "WBK_Combinus", "JLTS_core", "95th_P1_Units"};
		units[] = {
			"95th_CIS_Disguised_Trooper",
			"AUX_95th_Independent_B1_Unit_Diplomat", "AUX_95th_Independent_B1_Unit_Firefighter", "AUX_95th_Independent_B1_Unit_Medic", "AUX_95th_Independent_B1_Unit_Police",
			"AUX_95th_Commando_Unit_Normal", "AUX_95th_Commando_Unit_Captain", "AUX_95th_Commando_Unit_Citadel", "AUX_95th_Commando_Unit_Diplomat",
			"AUX_95th_3AS_U_CIS_Heavy"
		};
    };
}; 

class cfgFactionClasses {
    class 95th_CIS {displayName = "[95th] CIS"; priority = 1;};  
    class 95th_CIS_Humanitarian {displayName = "[95th] CIS Humanitarian"; priority = 1;};  
};

class CfgEditorSubcategories {
	class 95th_CIS_Commandos { displayName="Commandos"; };
	class 95th_CIS_Humans { displayName="Humans"; };
	class 95th_CIS_Turrets { displayName="Turrets"; };
	class 95th_CIS_Humanitarian_CivilServices { displayName="Civil Services"; };
};

class CfgWeapons {
    class ItemCore;
    class UniformItem;
    class Uniform_Base: ItemCore { class ItemInfo; };

	class JLTS_DroidB1;

	//############################################################### B1 Uniforms ###############################################################
	NEW_95TH_INDEPENDENT_B1_UNIFORM(Diplomat)};
	NEW_95TH_INDEPENDENT_B1_UNIFORM(Firefighter)};
	NEW_95TH_INDEPENDENT_B1_UNIFORM(Medic)};
	NEW_95TH_INDEPENDENT_B1_UNIFORM(Police)};
};

class CfgVehicles {
	class 95th_Rifleman_Unit_Trooper;
	class lsd_cis_bxdroid_specops;
	class JLTS_Droid_B1_E5;
	class JLTS_B1_backpack;

	//############################################################### B1 Units ###############################################################
	NEW_95TH_INDEPENDENT_B1_UNIT(Diplomat,Diplomat)};
	NEW_95TH_INDEPENDENT_B1_UNIT(Firefighter,Firefighter)};
	NEW_95TH_INDEPENDENT_B1_UNIT(Medic,Medic)};
	NEW_95TH_INDEPENDENT_B1_UNIT(Police,Police)};

	//############################################################### B1 Backpacks ###############################################################
	NEW_95TH_INDEPENDENT_B1_BACKPACK(Diplomat)};
	NEW_95TH_INDEPENDENT_B1_BACKPACK(Firefighter)};
	NEW_95TH_INDEPENDENT_B1_BACKPACK(Medic)};
	NEW_95TH_INDEPENDENT_B1_BACKPACK(Police)};

	//############################################################### Commando Units ###############################################################
	NEW_95TH_COMMANDO_UNIT(Normal,Normal,lsd_cis_bxDroid_uniform)};
	NEW_95TH_COMMANDO_UNIT(Captain,Captain,lsd_cis_bxCaptainDroid_uniform)};
	NEW_95TH_COMMANDO_UNIT(Citadel,Citadel Guard,lsd_cis_bxSecurityDroid_uniform)};
	NEW_95TH_COMMANDO_UNIT(Diplomat,Diplomat,lsd_cis_bxDiplomatDroid_uniform)};
	
	class 95th_CIS_Disguised_Trooper: 95th_Rifleman_Unit_Trooper {
		displayName="[95th] Disguised BX Trooper";
		author="95th Aux Team";
		faction="95th_CIS";
		editorSubcategory="95th_CIS_Commandos";
		uniformClass="95th_P1_Uniform_Trooper";
        side = 0;
		scope=2; 
		scopecurator=2;
		editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_AB.jpg"; //todo: change me
		linkedItems[]={"95th_Helmet_Trooper","lsd_cis_bx_head""95th_Basic_Vest_Rifleman","JLTS_Clone_radio","ItemGPS","ItemMap","ItemWatch","ItemCompass"};
		respawnLinkedItems[]={"95th_Helmet_Trooper","lsd_cis_bx_head","95th_Basic_Vest_Rifleman","JLTS_Clone_radio","ItemGPS","ItemMap","ItemWatch","ItemCompass"};
		nakedUniform = "lsd_cis_bxDroid_uniform";
		identityTypes[] = {"BX_Droid"};
	};

	class 3AS_U_CIS_Heavy;
	class AUX_95th_3AS_U_CIS_Heavy: 3AS_U_CIS_Heavy {
		author="95th Aux Team";
		faction="95th_CIS";
		editorSubcategory="95th_CIS_Humans";
		NFL_Can_Use_Shield=1;
	};

	class WBK_Combine_WalhammerShield_actual;
	class AUX_95th_WBK_Combine_WalhammerShield_actual: WBK_Combine_WalhammerShield_actual {
		hiddenSelectionsTextures[]= {"\95th_CIS_Units\Data\Personal Shield\PersonalShieldRed.paa"};
	};
};

class CfgFunctions {
	class NFA {
		class CIS_Units {
			class commandoInit {file = "\95th_CIS_Units\Init\commandoInit.sqf";};
			class checkIsInHouse {file = "\95th_CIS_Units\Scripts\checkIsInHouse.sqf";};
			class checkCanJump {file = "\95th_CIS_Units\Scripts\checkCanJump.sqf";};
			class handleCommandoJump {file = "\95th_CIS_Units\Scripts\handleCommandoJump.sqf";};
			class handleCommandoFallDamage {file = "\95th_CIS_Units\Scripts\handleCommandoFallDamage.sqf";};

			class checkCanShield {file = "\95th_CIS_Units\Scripts\Personal Shield\checkCanShield.sqf";};
			class handlePersonalShield {file = "\95th_CIS_Units\Scripts\Personal Shield\handlePersonalShield.sqf";};
		};
	};
};

class Extended_InitPost_EventHandlers {
	class AUX_95th_Commando_Unit_Normal {class AUX_95th_Commando_Unit_Normal_Init {onRespawn="true"; serverInit="[_this select 0] call NFA_fnc_commandoInit;";};};
	class AUX_95th_Commando_Unit_Captain {class AUX_95th_Commando_Unit_Captain_Init {onRespawn="true"; serverInit="[_this select 0] call NFA_fnc_commandoInit;";};};
	class AUX_95th_Commando_Unit_Citadel {class AUX_95th_Commando_Unit_Citadel_Init {onRespawn="true"; serverInit="[_this select 0] call NFA_fnc_commandoInit;";};};
	class AUX_95th_Commando_Unit_Diplomat {class AUX_95th_Commando_Unit_Diplomat_Init {onRespawn="true"; serverInit="[_this select 0] call NFA_fnc_commandoInit;";};};
};

class CfgUserActions {
	class NFL_Commando_Jump {
		displayName = "Commando Jump"; tooltip = "Jump with the BX Commandos";
		onActivate = "[player] spawn NFA_fnc_handleCommandoJump"; modifierBlocking = 1;
	};

	class NFL_Personal_Shield {
		displayName = "Personal Shield"; tooltip = "Activate the Personal Shield";
		onActivate = "[player] spawn NFA_fnc_handlePersonalShield"; modifierBlocking = 1;
	};
};

class CfgDefaultKeysPresets {
	class Arma2 {
		class Mappings {
			NFL_Commando_Jump[] = {0x1D130004};
			NFL_Personal_Shield[] = {0x1D130004};
		};
	};
};

class UserActionGroups {
	class NFL_CIS_Units {
		name = "95th - CIS";
		isAddon = 1;
		group[] = {"NFL_Commando_Jump", "NFL_Personal_Shield"};
	};
};

class ACE_Medical_Injuries {
	class damageTypes {
		class woundHandlers;
		class falling {
			class woundHandlers: woundHandlers {
				NFA_Commando_Medical_Handler = "{ call NFA_fnc_handleCommandoFallDamage }";
			};
		};
	};
};