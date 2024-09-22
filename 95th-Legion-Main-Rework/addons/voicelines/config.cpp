#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "A3_Dubbing_Radio_F_EXP"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgIdentities {
	class Male01ENG;
	class Aux_95th_Identity_B1: Male01ENG {
		name = "B1 Battledroid";
		glasses = "None";
		face = "";
		nameSound = "";
		speaker = "Aux_95th_Voice_B1";
		pitch = 1;
	};

	class Aux_95th_Identity_BX: Male01ENG {
		name = "BX Battledroid";
		glasses = "None";
		face = "";
		nameSound = "";
		speaker = "Aux_95th_Voice_BX";
		pitch = 1;
	};
};

class CfgVoice {
	voices[] += {"Aux_95th_Voice_B1", "Aux_95th_Voice_BX"};

	class Base;
	class Aux_95th_Voice_B1: Base {
		displayName = "B1 Battledroid";
		protocol = "RadioProtocolENG";
		identityTypes[] = {"Aux_95th_Identity_B1"};
        icon = "";
		scope = 2;
		directories[] = {
            "\z\AUX_95th\addons\voicelines\B1\",
            "\z\AUX_95th\addons\voicelines\B1\"
		};
	};

	class Aux_95th_Voice_BX: Base {
		displayName = "BX Battledroid";
		protocol = "RadioProtocolENG";
		identityTypes[] = {"Aux_95th_Identity_BX"};
        icon = "";
		scope = 2;
		directories[] = {
            "\z\AUX_95th\addons\voicelines\BX\",
            "\z\AUX_95th\addons\voicelines\BX\"
		};
	};
};

#include "CfgEventHandlers.hpp"
