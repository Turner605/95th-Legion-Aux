#include "script_component.hpp"

class CfgPatches {
    class AUX_95th_objects_shared {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			"AUX_95th_main",
            "3AS_Prop_Crates"
		};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgEditorCategories{
	class AUX_95th_CIS_Objects{displayName = "[95th] CIS";};
};

class CfgEditorSubcategories{
	class AUX_95th_CIS_Statics{displayName="Statics";};
};

class CfgFunctions {
    class AUX_95th {
        class Objects_Shared {
			file = "\z\AUX_95th\addons\objects\functions";
            class handleSkinSelection {};
            class handleCrateSpawned {};
            class checkPlayerInBriefing {};
        };

        class Objects_Shared_Air {
			file = "\z\AUX_95th\addons\objects\functions\AirUtil";
            class handleAirSpawned {};
            class handleAirVehicleServiced {};
            class handlePylonEdit {};
        };

        class Objects_Shared_Ground {
			file = "\z\AUX_95th\addons\objects\functions\GroundUtil";
            class handleGroundSpawned {};
            class handleGroundVehicleServiced {};
            class handleLoadATRT {};
        };

        class Objects_Shared_DroidFactories {
			file = "\z\AUX_95th\addons\objects\functions\DroidFactories";
            class handleFactoryTerminalOptions {};
        };

        class Objects_Shared_Airborne {
			file = "\z\AUX_95th\addons\objects\functions\Airborne";
            class handleParadrop {};
            class becomeAirborne {};
        };
    };
};

#include "CfgEventHandlers.hpp"