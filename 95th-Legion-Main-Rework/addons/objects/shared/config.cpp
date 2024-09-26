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

#include "CfgEventHandlers.hpp"