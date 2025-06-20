#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
            "AUX_95th_Factory_Proxy",
            "AUX_95th_Droid_Factory_Terminal",
            "AUX_95th_Flak_Factory",
            "AUX_95th_Ground_Factory"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_objects_shared"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CBA_Extended_EventHandlers_base;

class CfgVehicles {
    class Land_HelipadEmpty_F;
    class 3AS_CIS_Console_4_Prop;
    class 3AS_Droid_Dispenser_F;

    class AUX_95th_Factory_Proxy : Land_HelipadEmpty_F {
        displayName="Factory Proxy";
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Factories";
    };

    class AUX_95th_Droid_Factory_Terminal : 3AS_CIS_Console_4_Prop {
        displayName="Factory Terminal";
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Factories";
        class EventHandlers {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
    };

    class AUX_95th_Flak_Factory : 3AS_Droid_Dispenser_F {
        displayName="Flak Factory";
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Factories";
        class EventHandlers {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
    };

    class AUX_95th_Ground_Factory : 3AS_Droid_Dispenser_F {
        displayName="Ground Factory";
        faction="AUX_95th_Faction_SeparatistDroids";
        editorCategory="AUX_95th_Faction_SeparatistDroids";
		editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_Factories";
        class EventHandlers {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
    };
};

class CfgFunctions {
    class AUX_95th {
        class Objects_Factories {
			file = "\z\AUX_95th\addons\objects\factories\functions";
            class droidFactoryTerminalInit {};
            class droidFlakFactoryInit {};
            class droidFactoryInit {};
        };
    };
};

#include "CfgEventHandlers.hpp"