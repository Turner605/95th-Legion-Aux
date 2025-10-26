#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_objects_shared"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CBA_Extended_EventHandlers_base;

class CfgVehicles {
    class 3AS_Barricade_2_C_prop;
    class 3AS_Short_Wall_Bunker;
    class Land_lsb_fob_hBarrier_ramp;
    class Land_lsb_fob_hBarrier_wall;

    class AUX_95th_Fortify_Barricade : 3AS_Barricade_2_C_prop {
        displayName="Barricade";
        editorCategory="AUX_95th_Objects_Generic";
        editorSubcategory="AUX_95th_Objects_Fortify";
    };

    class AUX_95th_Fortify_Bunker: 3AS_Short_Wall_Bunker {
        displayName="Bunker";
        editorCategory="AUX_95th_Objects_Generic";
        editorSubcategory="AUX_95th_Objects_Fortify";
    };

    class AUX_95th_Fortify_Ramp: Land_lsb_fob_hBarrier_ramp {
        displayName="Ramp";
        editorCategory="AUX_95th_Objects_Generic";
        editorSubcategory="AUX_95th_Objects_Fortify";
    };

    class AUX_95th_Fortify_Wall: Land_lsb_fob_hBarrier_wall {
        displayName="Wall";
        editorCategory="AUX_95th_Objects_Generic";
        editorSubcategory="AUX_95th_Objects_Fortify";
    };

    class Land;
	class LandVehicle: Land {};

	class StaticWeapon: LandVehicle {
		class Turrets {
			class MainTurret;
		};
	};

	class StaticMGWeapon: StaticWeapon {
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				class ViewOptics;
			};
		};
	};

	class 3AS_HeavyRepeater_Base: StaticMGWeapon {
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				class ViewOptics: ViewOptics {};
			};
		};
	};

	class 3AS_HeavyRepeater_Unarmoured: 3AS_HeavyRepeater_Base {
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
	};

    class AUX_95th_Fortify_Turret: 3AS_HeavyRepeater_Unarmoured {
        displayName="Heavy Repeater";
        editorCategory="AUX_95th_Objects_Generic";
        editorSubcategory="AUX_95th_Objects_Fortify";
        class Turrets: Turrets {
			class MainTurret: MainTurret {
				gunnerOpticsModel = "";
			};
		};
    };
};

#include "CfgEventHandlers.hpp"