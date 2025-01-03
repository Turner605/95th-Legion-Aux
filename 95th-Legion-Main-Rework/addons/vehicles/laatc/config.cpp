#include "script_component.hpp"
#include "Macros\LAAT C Texture.hpp"
#include "Macros\LAAT C Shared.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
			"AUX_95th_LAAT_C"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_vehicles_shared", "3AS_LAAT"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgVehicles {
    
    class Air;
	class Helicopter: Air {
		class ACE_SelfActions;
		class Turrets;
		class HitPoints;
	};

	class Helicopter_Base_F: Helicopter {
		class HitPoints: HitPoints {
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitMissiles;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitWinch;
		};
		class Turrets: Turrets {
			class MainTurret;
		};
		class AnimationSources;
		class EventHandlers;
		class ViewOptics;
		class ViewPilot;
		class Components;
	};

	class Helicopter_Base_H: Helicopter_Base_F {
		class Turrets: Turrets {
			class MainTurret: MainTurret{};
			class CopilotTurret: MainTurret{};
		};
		class AnimationSources: AnimationSources{};
	};

	class 3AS_laat_Base: Helicopter_Base_H {};
	class 3AS_LAAT_Cargo_Base: 3AS_laat_Base{};
	class 3AS_LAATC: 3AS_LAAT_Cargo_Base{};

    class AUX_95th_LAAT_C: 3AS_LAATC {
        displayname="LAAT/C";
        hiddenSelectionsTextures[] = {
            "\z\AUX_95th\addons\vehicles\laatc\data\Default\Hull.paa",
            "\z\AUX_95th\addons\vehicles\laatc\data\Default\Wings.paa",
            "\z\AUX_95th\addons\vehicles\laatc\data\Default\Top.paa",
            "\z\AUX_95th\addons\vehicles\laatc\data\Default\Details_Front.paa"
        };
        class TextureSources {
			textureList[] = {"Default",1};
			NEW_95TH_LAATC_TEXTURE(Default)
		};
        NEW_SHARED_LAAT_C_CONFIG()
        #include "\z\AUX_95th\addons\main\inventories\vehicleInventory.hpp"
    };
};

#include "CfgEventHandlers.hpp"