#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
			"AUX_95th_UserTexture_1m", 
			"AUX_95th_UserTexture_1x2m_Horizontal", 
			"AUX_95th_UserTexture_1x2m_Vertical"
		};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_objects_shared"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgFunctions {
    class AUX_95th {
        class Objects_Posters {
			file = "\z\AUX_95th\addons\objects\posters\functions";
            class initPoster {};
        };
    };
};

class CBA_Extended_EventHandlers_base;

class CfgVehicles {
	class NonStrategic;
	class UserTexture1m_F: NonStrategic {};
	class UserTexture_1x2_F: NonStrategic{};

	class AUX_95th_UserTexture_1m: UserTexture1m_F {
		author = "95th Aux Team";
		displayName = "Poster (Square)";
		editorCategory = "AUX_95th_Objects_Generic";
		editorSubcategory = "AUX_95th_Objects_Misc";

		hiddenSelectionsTextures[] = {"\Z\AUX_95th\addons\objects\posters\data\complete\Poster_Square.paa"};

		class EventHandlers {
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
			init = "[(_this select 0), 'Square'] call AUX_95th_fnc_initPoster;"; 
		};
	};

	class AUX_95th_UserTexture_1x2m_Horizontal: UserTexture_1x2_F {
		author = "95th Aux Team";
		displayName = "Poster (Horizontal)";
		editorCategory = "AUX_95th_Objects_Generic";
		editorSubcategory = "AUX_95th_Objects_Misc";

		hiddenSelectionsTextures[] = {"\Z\AUX_95th\addons\objects\posters\data\complete\Poster_Horizontal.paa"};

		class EventHandlers {
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
			init = "[(_this select 0), 'Horizontal'] call AUX_95th_fnc_initPoster;"; 
		};
	};

	class AUX_95th_UserTexture_1x2m_Vertical: UserTexture_1x2_F {
		author = "95th Aux Team";
		displayName = "Poster (Vertical)";
		editorCategory = "AUX_95th_Objects_Generic";
		editorSubcategory = "AUX_95th_Objects_Misc";

		hiddenSelectionsTextures[] = {"\Z\AUX_95th\addons\objects\posters\data\complete\Poster_Vertical.paa"};

		class EventHandlers {
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
			init = "[(_this select 0), 'Vertical'] call AUX_95th_fnc_initPoster;"; 
		};
	};
};


#include "CfgEventHandlers.hpp"