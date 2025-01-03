#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {"Aux_95th_Paranoia_Device"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_objects_shared"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CBA_Extended_EventHandlers_base;

class CfgVehicles {
    class Land_3AS_Generator_Imp;

    class Aux_95th_Paranoia_Device: Land_3AS_Generator_Imp {
        displayName="Paranoia Device";
        editorCategory="AUX_95th_Objects_CIS";
        editorSubcategory="AUX_95th_Objects_Statics";
        class EventHandlers {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
    };
};

class CfgFunctions {
    class AUX_95th {
        class  Objects_ParanoiaDevice {
			file = "\z\AUX_95th\addons\objects\paranoiaDevice\functions";
            class handleParanoiaDeviceInit {};
        };
    };
};

class Extended_InitPost_EventHandlers {	
	class Aux_95th_Paranoia_Device {class Aux_95th_Paranoia_Device_Init {init="[_this select 0] call AUX_95th_fnc_handleParanoiaDeviceInit;";};};
};

#include "CfgEventHandlers.hpp"