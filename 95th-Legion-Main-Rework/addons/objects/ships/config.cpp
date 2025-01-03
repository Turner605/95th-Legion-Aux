#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {"AUX_95th_Acclimator_Hollow"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_objects_shared"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgVehicles {
    class ls_acclamator_4;

    class AUX_95th_Acclimator_Hollow: ls_acclamator_4 {
        displayname = "Acclamator (Hollow)";
        editorCategory="AUX_95th_Objects_GAR";
        editorSubcategory="AUX_95th_Objects_GAR_Ships";
        hiddenselectionstextures[] = {
            "\z\AUX_95th\addons\objects\ships\data\Acclimator\body_co.paa", 
            "\z\AUX_95th\addons\objects\ships\data\Acclimator\body_2_co.paa",
            "\z\AUX_95th\addons\objects\ships\data\Acclimator\body_3_co.paa",
            "\z\AUX_95th\addons\objects\ships\data\Acclimator\body_4_co.paa",
            "\z\AUX_95th\addons\objects\ships\data\Acclimator\body_5_co.paa",
            "\z\AUX_95th\addons\objects\ships\data\Acclimator\body_6_co.paa",
            "\z\AUX_95th\addons\objects\ships\data\Acclimator\engine_co.paa",
            "","","","","","","",""
        };
    };
};

#include "CfgEventHandlers.hpp"