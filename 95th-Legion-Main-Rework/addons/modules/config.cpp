#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "TAG_Module_Nuke"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgFunctions {
    class AUX_95th {
        class Modules {
			file = "\z\AUX_95th\addons\modules\functions";
            class cisQuickGarrison {};
            class jetDroidInsertion {};
            class droidPodInsertion {};
            class isCloseToGround {};
            class broadcastOrder66 {};
            class reanimateDroid {};
            class startIonStorm {};
        };

        class Modules_DroidPod {
			file = "\z\AUX_95th\addons\modules\functions\droidPods";
            class handleDroidPodModule {};
            class handleDroidPodDrop {};
            class handleDroidPodPlace {};
            class handleDroidPodSpawning {};
        };
    };
};

class CfgSounds {
	class executeOrder66 {
		name = "executeOrder66";
		sound[] = {"\z\AUX_95th\addons\modules\sounds\order66.wav",5,1};
		titles[] = {};
	};
};

// class CfgVehicles {
// 	class Logic;
// 	class Module_F : Logic {
// 		class AttributesBase {
// 			class Default;
// 			class Edit;					// Default edit box (i.e. text input field)
// 			class Combo;				// Default combo box (i.e. drop-down menu)
// 			class Checkbox;				// Default checkbox (returned value is Boolean)
// 			class CheckboxNumber;		// Default checkbox (returned value is Number)
// 			class ModuleDescription;	// Module description
// 			class Units;				// Selection of units on which the module is applied
// 		};

// 		class ModuleDescription {
// 			class AnyBrain;
// 		};
// 	};

// 	class TAG_Module_Nuke : Module_F {
// 		scope = 2;
// 		scopeCurator = 2;
// 		displayName = "[95th] Test";
// 		icon = "\TAG_addonName\data\icon_Nuke_ca.paa";
// 		category = "[95th] Modules";

// 		function = "TAG_fnc_moduleNuke";

// 		functionPriority = 1;
// 		isGlobal = 1; // 0 for server only execution, 1 for global execution, 2 for persistent global execution
// 		isTriggerActivated = 1; // 1 for module waiting until all synced triggers are activated
// 		isDisposable = 1; // 1 if modules is to be disabled once it is activated (i.e. repeated trigger activation will not work)
// 		is3DEN = 1; // 1 to run init function in Eden Editor as well
// 		curatorCanAttach = 1; // 1 to allow Zeus to attach the module to an entity
// 		curatorInfoType = "RscDisplayAttributeModuleTest"; // Menu displayed when the module is placed or double-clicked on by Zeus

// 		canSetArea = 1; // Allows for setting the area values in the Attributes menu in 3DEN
// 		canSetAreaShape = 1; // Allows for setting "Rectangle" or "Ellipse" in Attributes menu in 3DEN
// 		canSetAreaHeight = 1; // Allows for setting height or Z value in Attributes menu in 3DEN
		
//         class AttributeValues {
// 			size3[] = { 100, 100, -1 }; // 3D size (x-axis radius, y-axis radius, z-axis radius)
// 			isRectangle = 0; // Sets if the default shape should be a rectangle or ellipse
// 		};

// 		class Attributes : AttributesBase {
// 			class Units : Units {
// 				property = "TAG_Module_Nuke_Units";
// 			};

// 			class Yield : Combo {
// 				property = "TAG_Module_Nuke_Yield";
// 				displayName = "Nuclear weapon yield";
// 				tooltip = "How strong will the explosion be";
// 				typeName = "NUMBER"; // "NUMBER", "STRING" or "BOOL"
// 				defaultValue = "50";

// 				class Values {
// 					class 50Mt	{ name = "50 megatons";	value = 50; };
// 					class 100Mt	{ name = "100 megatons"; value = 100; };
// 				};
// 			};

// 			class Name : Edit {
// 				displayName = "Name";
// 				tooltip = "Name of the nuclear device";
// 				property = "TAG_Module_Nuke_Name";
// 				defaultValue = """Tsar Bomba"""; // Because this is an expression, one must have a string within a string to return a string
// 			};

// 			class ModuleDescription : ModuleDescription {};
// 		};

// 		class ModuleDescription : ModuleDescription {
// 			description = "Short module description";
// 			sync[] = { "LocationArea_F" };

// 			class LocationArea_F {
// 				description[] = {
// 					"First line",
// 					"Second line"
// 				};
// 				position = 1;	// Position is taken into effect
// 				direction = 1;	// Direction is taken into effect
// 				optional = 1;	// Synced entity is optional
// 				duplicate = 1;	// Multiple entities of this type can be synced
// 				synced[] = { "BluforUnit", "AnyBrain" };	// Pre-defined entities like "AnyBrain" can be used (see the table below)
// 			};

// 			class BluforUnit {
// 				description = "Short description";
// 				displayName = "Any BLUFOR unit";	// Custom name
// 				icon = "iconMan";					// Custom icon (can be file path or CfgVehicleIcons entry)
// 				side = 1;							// Custom side (determines icon color)
// 			};
// 		};
// 	};
// };

#include "CfgEventHandlers.hpp"