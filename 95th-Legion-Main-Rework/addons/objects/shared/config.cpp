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
	class AUX_95th_Objects_CIS{displayName = "[95th] CIS";};
	class AUX_95th_Objects_GAR{displayName = "[95th] GAR";};
};

class CfgEditorSubcategories{
	class AUX_95th_Objects_CIS_Statics{displayName="Statics";};
	class AUX_95th_Objects_GAR_Air{displayName="Air Utilities";};
	class AUX_95th_Objects_GAR_Ground{displayName="Ground Utilities";};
	class AUX_95th_Objects_GAR_Crates{displayName="Crates";};
};

class CfgFunctions {
    class AUX_95th {
        class Objects_Shared {
			file = "\z\AUX_95th\addons\objects\shared\functions";
            class handleSkinSelection {};
            class handleCrateSpawned {};
            class checkPlayerInBriefing {};
        };

        class Objects_Shared_Air {
			file = "\z\AUX_95th\addons\objects\shared\functions\AirUtil";
            class handleAirSpawned {};
            class handleAirVehicleServiced {};
            class handlePylonEdit {};
        };

        class Objects_Shared_Ground {
			file = "\z\AUX_95th\addons\objects\shared\functions\GroundUtil";
            class handleGroundSpawned {};
            class handleGroundVehicleServiced {};
            class handleLoadATRT {};
        };

        class Objects_Shared_DroidFactories {
			file = "\z\AUX_95th\addons\objects\shared\functions\DroidFactories";
            class handleFactoryTerminalOptions {};
        };

        class Objects_Shared_Airborne {
			file = "\z\AUX_95th\addons\objects\shared\functions\Airborne";
            class handleParadrop {};
            class becomeAirborne {};
        };
    };
};

#include "CfgEventHandlers.hpp"