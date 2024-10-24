#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_Extras_main", "ace_arsenal"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgFunctions {
    class AUX_95th_Extras {
        class Kits {
			file = "\z\AUX_95th_Extras\addons\kits\functions";
            class checkKit {};
            class checkThrowables {};
            class checkWeapons {};
            class checkCerts {};
            class addDefaultClasses {};
        };
    };
};

class CfgWeapons {
    class ItemCompass;



    class AUX_95th_Class_Designator_Zeus: ItemCompass {
		displayName = "[95th] Class - Zeus"; 
		// picture = "z\AUX_95th_Extras\addons\kits\data\rifleman.paa";
        AUX_95th_Class_Designation = "Zeus";
    };

    class AUX_95th_Class_Designator_FunOP: ItemCompass {
		displayName = "[95th] Class - FunOP"; 
		// picture = "z\AUX_95th_Extras\addons\kits\data\rifleman.paa";
        AUX_95th_Class_Designation = "FunOP";
    };

    class AUX_95th_Class_Designator_Rifleman: ItemCompass {
		displayName = "[95th] Class - Rifleman"; 
		// picture = "z\AUX_95th_Extras\addons\kits\data\rifleman.paa";
        AUX_95th_Class_Designation = "Rifleman";
    };

    class AUX_95th_Class_Designator_Marksman: ItemCompass {
		displayName = "[95th] Class - Marksman"; 
		// picture = "z\AUX_95th_Extras\addons\kits\data\rifleman.paa";
        AUX_95th_Class_Designation = "Marksman";
    };

    class AUX_95th_Class_Designator_Riot: ItemCompass {
		displayName = "[95th] Class - Riot"; 
		// picture = "z\AUX_95th_Extras\addons\kits\data\rifleman.paa";
        AUX_95th_Class_Designation = "Riot";
    };

    class AUX_95th_Class_Designator_Heavy: ItemCompass {
		displayName = "[95th] Class - Heavy"; 
		// picture = "z\AUX_95th_Extras\addons\kits\data\rifleman.paa";
        AUX_95th_Class_Designation = "Heavy";
    };

    class AUX_95th_Class_Designator_Engineer: ItemCompass {
		displayName = "[95th] Class - Engineer"; 
		// picture = "z\AUX_95th_Extras\addons\kits\data\rifleman.paa";
        AUX_95th_Class_Designation = "Engineer";
    };

    class AUX_95th_Class_Designator_Medic: ItemCompass {
		displayName = "[95th] Class - Medic"; 
		// picture = "z\AUX_95th_Extras\addons\kits\data\rifleman.paa";
        AUX_95th_Class_Designation = "Medic";
    };

    class AUX_95th_Class_Designator_AT: ItemCompass {
		displayName = "[95th] Class - AT"; 
		// picture = "z\AUX_95th_Extras\addons\kits\data\rifleman.paa";
        AUX_95th_Class_Designation = "AT";
    };

    class AUX_95th_Class_Designator_Crewman: ItemCompass {
		displayName = "[95th] Class - Crewman"; 
		// picture = "z\AUX_95th_Extras\addons\kits\data\rifleman.paa";
        AUX_95th_Class_Designation = "Crewman";
    };

    class AUX_95th_Class_Designator_Pilot: ItemCompass {
		displayName = "[95th] Class - Pilot"; 
		// picture = "z\AUX_95th_Extras\addons\kits\data\rifleman.paa";
        AUX_95th_Class_Designation = "Pilot";
    };

    class AUX_95th_Class_Designator_NCO: ItemCompass {
		displayName = "[95th] Class - NCO"; 
		// picture = "z\AUX_95th_Extras\addons\kits\data\rifleman.paa";
        AUX_95th_Class_Designation = "NCO";
    };

    class AUX_95th_Class_Designator_Flame: ItemCompass {
		displayName = "[95th] Class - Flame"; 
		// picture = "z\AUX_95th_Extras\addons\kits\data\rifleman.paa";
        AUX_95th_Class_Designation = "Flame";
    };

    class AUX_95th_Class_Designator_Jet: ItemCompass {
		displayName = "[95th] Class - Jet"; 
		// picture = "z\AUX_95th_Extras\addons\kits\data\rifleman.paa";
        AUX_95th_Class_Designation = "Jet";
    };

    class AUX_95th_Class_Designator_Grenadier: ItemCompass {
		displayName = "[95th] Class - Grenadier"; 
		// picture = "z\AUX_95th_Extras\addons\kits\data\rifleman.paa";
        AUX_95th_Class_Designation = "Grenadier";
    };

    class AUX_95th_Class_Designator_Stealth: ItemCompass {
		displayName = "[95th] Class - Stealth"; 
		// picture = "z\AUX_95th_Extras\addons\kits\data\rifleman.paa";
        AUX_95th_Class_Designation = "Stealth";
    };

    class AUX_95th_Class_Designator_Tech: ItemCompass {
		displayName = "[95th] Class - Tech"; 
		// picture = "z\AUX_95th_Extras\addons\kits\data\rifleman.paa";
        AUX_95th_Class_Designation = "Tech";
    };

    class AUX_95th_Class_Designator_Support: ItemCompass {
		displayName = "[95th] Class - Support"; 
		// picture = "z\AUX_95th_Extras\addons\kits\data\rifleman.paa";
        AUX_95th_Class_Designation = "Support";
    };

    class AUX_95th_Class_Designator_Airborne: ItemCompass {
		displayName = "[95th] Class - Airborne"; 
		// picture = "z\AUX_95th_Extras\addons\kits\data\rifleman.paa";
        AUX_95th_Class_Designation = "Airborne";
    };

    class AUX_95th_Class_Designator_DroneOperator: ItemCompass {
		displayName = "[95th] Class - Drone Operator"; 
		// picture = "z\AUX_95th_Extras\addons\kits\data\rifleman.paa";
        AUX_95th_Class_Designation = "Drone Operator";
    };
};

// class ace_arsenal_display: ace_arsenal_display {
// 	class controls: controls {
//         class tabLeft: tabLeft {

//         };
//     };


	// class controls: controls {
	// 	class tabLeft: tabLeft {
	// 		idc = 20;
	// 		x = "safezoneX + 1 * (pixelW * pixelGridNoUIScale * 0.25)";
	// 		y = "safezoneY + 8 * (pixelH * pixelGridNoUIScale * 0.25)";
	// 		w = "12 * (pixelW * pixelGridNoUIScale * 0.25)";
	// 		h = "200 * (pixelH * pixelGridNoUIScale * 0.25)";
	// 		class controls: controls {
	// 			class buttonCompass: buttonCompass {
	// 				idc = 2029;
	// 				tooltip = "$STR_A3_RscDisplayArsenal_tab_Compass";
	// 				text = "Test";
	// 				y = "130 * (pixelH * pixelGridNoUIScale * 0.25)";
	// 			};
	// 		};
	// 	};
    // };
// };

#include "CfgEventHandlers.hpp"