#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {"AUX_95th_Medical_Shield", "AUX_95th_WBK_Combine_WalhammerShield_actual", "AUX_95th_Shield_Small", "AUX_95th_Shield_Target_Test"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_objects_shared"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};
class CfgVehicles {
    class SquadShield;
    class WBK_Combine_WalhammerShield_actual;
    class 3as_planetaryshield_501w;

    class AUX_95th_Medical_Shield: SquadShield {
        displayName="Shield (Medical)";
        model="3AS\3AS_Shield\SquadShield.p3d";
        vehicleClass="VRObjects";
        armor=999999;
        simulation="Fountain";
        armorStructural=999;
        scope=1;
        scopecurator=1;
        editorCategory="AUX_95th_Objects_Generic";
        editorSubcategory="AUX_95th_Objects_Shields";
        sound="Shield";
    };

    class AUX_95th_WBK_Combine_WalhammerShield_actual: WBK_Combine_WalhammerShield_actual {
        hiddenSelectionsTextures[]= {"\z\AUX_95th\addons\objects\shields\data\PersonalShieldRed.paa"};
    };

    class AUX_95th_Shield_Small : 3as_planetaryshield_501w {
        displayName="Shield (Small)";
        editorCategory="AUX_95th_Objects_Generic";
        editorSubcategory="AUX_95th_Objects_Shields";
    };

    class CBA_B_InvisibleTarget;
    class AUX_95th_Shield_Target_Test : CBA_B_InvisibleTarget {
        displayName="Shield (Test)";
        editorCategory="AUX_95th_Objects_Generic";
        editorSubcategory="AUX_95th_Objects_Shields";
        model="3AS\3AS_Shield\SquadShield.p3d";
        armor=999999;
        sound="Shield";
        scope=2;
        scopecurator=2;
    };
};

#include "CfgEventHandlers.hpp"