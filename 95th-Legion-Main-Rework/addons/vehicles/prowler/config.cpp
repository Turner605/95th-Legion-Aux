#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {"AUX_95th_Prowler", "AUX_95th_Prowler_Spotter"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_vehicles_shared"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgVehicles {
    class Bag_Base;
	class Weapon_Bag_Base: Bag_Base {
		class assembleInfo;
	};

    class JLTS_UAV_prowler_gar;

	class AUX_95th_Prowler: JLTS_UAV_prowler_gar {
		displayName = "Prowler";
		scope = 2;
		side = 1;
		faction="AUX_95th_Legion_Faction_Vehicles";
		editorSubcategory="AUX_95th_Legion_Vehicles_Category_Air_Drones";
		hiddenSelectionsTextures[] = {"\z\AUX_95th\addons\vehicles\prowler\data\spotter.paa"};

		class assembleInfo {};

		class TextureSources {
			class Spotter {
				displayName = "Spotter";
				author = "Turner";
				textures[] = {"\z\AUX_95th\addons\vehicles\prowler\data\spotter.paa"};
				factions[] = {"AUX_95th_Legion_Faction_Vehicles"};
			};
		};

		textureList[] = {"Spotter",1};
	};

	class AUX_95th_Prowler_Spotter: AUX_95th_Prowler {
		displayName = "Spotter";
		textureList[] = {"Spotter",1};
    };

};

#include "CfgEventHandlers.hpp"