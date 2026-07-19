#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
			"AUX_95th_Barc_Stretcher",
			"AUX_95th_Barc_Sidecar_Ion",
			"AUX_95th_Barc_Sidecar_Double",
			"AUX_95th_Barc"
		};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_vehicles_shared", "QS_Barc_F"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgVehicles {
	class QS_Barc_Stretcher;
	class QS_Barc_Sidecar_Ion;
	class QS_Barc_Sidecar_Double;
	class QS_Barc;

	class AUX_95th_Barc_Stretcher: QS_Barc_Stretcher {
		displayName = "BARC (Stretcher)";
		author = "95th Aux Team";
		crew = "AUX_95th_Unit_P1_Basic_Trooper";
		tas_canBlift=1;
		tas_liftVars = "[[[[0,-4,-4]]], [0.1], [-0.5]]";
		faction="AUX_95th_Legion_Faction_Vehicles";
		editorCategory="AUX_95th_Legion_Faction_Vehicles";
		editorSubcategory="AUX_95th_Legion_Vehicles_Category_Ground_Light";
		#include "\z\AUX_95th\addons\main\inventories\vehicleInventory.hpp"
	};

	class AUX_95th_Barc_Sidecar_Ion: QS_Barc_Sidecar_Ion {
		displayName = "BARC (Ion)";
		author = "95th Aux Team";
		crew = "AUX_95th_Unit_P1_Basic_Trooper";
		tas_canBlift=1;
		tas_liftVars = "[[[[0,-4,-4]]], [0.1], [-0.5]]";
		faction="AUX_95th_Legion_Faction_Vehicles";
		editorCategory="AUX_95th_Legion_Faction_Vehicles";
		editorSubcategory="AUX_95th_Legion_Vehicles_Category_Ground_Light";
		#include "\z\AUX_95th\addons\main\inventories\vehicleInventory.hpp"
	};

	class AUX_95th_Barc_Sidecar_Double: QS_Barc_Sidecar_Double {
		displayName = "BARC (Blaster)";
		author = "95th Aux Team";
		crew = "AUX_95th_Unit_P1_Basic_Trooper";
		tas_canBlift=1;
		tas_liftVars = "[[[[0,-4,-4]]], [0.1], [-0.5]]";
		faction="AUX_95th_Legion_Faction_Vehicles";
		editorCategory="AUX_95th_Legion_Faction_Vehicles";
		editorSubcategory="AUX_95th_Legion_Vehicles_Category_Ground_Light";
		#include "\z\AUX_95th\addons\main\inventories\vehicleInventory.hpp"
	};

	class AUX_95th_Barc: QS_Barc {
		displayName = "BARC";
		author = "95th Aux Team";
		crew = "AUX_95th_Unit_P1_Basic_Trooper";
		tas_canBlift=1;
		tas_liftVars = "[[[[0,-4,-4]]], [0.1], [-0.5]]";
		faction="AUX_95th_Legion_Faction_Vehicles";
		editorCategory="AUX_95th_Legion_Faction_Vehicles";
		editorSubcategory="AUX_95th_Legion_Vehicles_Category_Ground_Light";
		#include "\z\AUX_95th\addons\main\inventories\vehicleInventory.hpp"
	};
};

#include "CfgEventHandlers.hpp"