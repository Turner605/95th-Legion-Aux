#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
            "AUX_95th_Misc_Motion_Sensor", "AUX_95th_Misc_Radio_Extender", "AUX_95th_Misc_Reinsert_Requester",
            "AUX_95th_Misc_Shield_Generator", "AUX_95th_Misc_2DFCK", "AUX_95th_Venator_Briefing_Room"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_objects_shared","AUX_95th_Ace"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CBA_Extended_EventHandlers_base;

class CfgVehicles {
    class Land_3AS_Small_Sensor;
    class SatelliteAntenna_01_Sand_F;
    class Land_OPTRE_vidphone_terminal;
    class Land_3AS_Generator_Cy_S;
    class DSS_Objects_Misc_Cardboard_Target;
    class 3AS_Venator_Room_Medium_Prop;

    class AUX_95th_Misc_Motion_Sensor : Land_3AS_Small_Sensor {
        displayName="Motion Sensor";
        editorCategory="AUX_95th_Objects_Generic";
        editorSubcategory="AUX_95th_Objects_Misc";
        class EventHandlers {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
    };

    class AUX_95th_Misc_Radio_Extender : SatelliteAntenna_01_Sand_F {
        displayName="Radio Extender";
        editorCategory="AUX_95th_Objects_Generic";
        editorSubcategory="AUX_95th_Objects_Misc";
        class EventHandlers {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
    };

    class AUX_95th_Misc_Reinsert_Requester : Land_OPTRE_vidphone_terminal {
        displayName="Reinsert Requester";
        editorCategory="AUX_95th_Objects_Generic";
        editorSubcategory="AUX_95th_Objects_Misc";
        class EventHandlers {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
    };

    class AUX_95th_Misc_Shield_Generator : Land_3AS_Generator_Cy_S {
        displayName="Shield Generator";
        editorCategory="AUX_95th_Objects_Generic";
        editorSubcategory="AUX_95th_Objects_Misc";
        class EventHandlers {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
    };

    class AUX_95th_Misc_2DFCK : DSS_Objects_Misc_Cardboard_Target {
        displayName="2D Field Commander Kit";
        editorCategory="AUX_95th_Objects_Generic";
        editorSubcategory="AUX_95th_Objects_Misc";
        scopecurator=2;
    };

    class AUX_95th_Venator_Briefing_Room : 3AS_Venator_Room_Medium_Prop {
        displayName="Briefing Room";
        editorCategory="AUX_95th_Objects_Generic";
        editorSubcategory="AUX_95th_Objects_Misc";
    };
};

class CfgFunctions {
    class AUX_95th {
        class Objects_Shared {
			file = "\z\AUX_95th\addons\objects\shared\misc";
            class motionSensorInit {};
            class ShieldGeneratorInit {};
            class reinsertRequesterInit {};
        };
    };
};

#include "CfgEventHandlers.hpp"