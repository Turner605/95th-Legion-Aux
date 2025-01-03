#include "script_component.hpp"
#include "Macros\LAAT Texture.hpp"
#include "Macros\LAAT Shared.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
            "AUX_95th_LAAT_Mrk1",
			"AUX_95th_LAAT_Mrk2",
			"AUX_95th_LAAT_Mrk2_Lights"
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
	class 3as_LAAT_Mk1: 3AS_laat_Base {};
	class 3as_LAAT_Mk2: 3AS_laat_Base {};
	class 3AS_LAAT_LampBase: 3AS_laat_Base{};
	class 3AS_LAAT_Mk2Lights: 3AS_LAAT_LampBase{};

    class AUX_95th_LAAT_Mrk1: 3as_LAAT_Mk1 {
        displayname="LAAT/I Mk.1";
        hiddenSelectionsTextures[]={
            "\z\AUX_95th\addons\vehicles\laat\data\Default\Hull.paa",  
            "\z\AUX_95th\addons\vehicles\laat\data\Default\Wings.paa",
            "\z\AUX_95th\addons\vehicles\laat\data\Default\Weapons.paa",
            "\z\AUX_95th\addons\vehicles\laat\data\Default\Weapon_Details.paa",
            "\z\AUX_95th\addons\vehicles\laat\data\Default\Interior.paa"
        };
        class TextureSources {
			textureList[] = {"Default",1,"AUX_95th_76561198051916304",0,"AUX_95th_76561198820607430",0,"AUX_95th_76561198060130630",0};
			NEW_95TH_LAAT_TEXTURE(Default)
			NEW_95TH_LAAT_TEXTURE(AUX_95th_76561198051916304)
			NEW_95TH_LAAT_TEXTURE(AUX_95th_76561198820607430)
			NEW_95TH_LAAT_TEXTURE(AUX_95th_76561198060130630)
		};
        NEW_SHARED_LAAT_CONFIG()
        #include "\z\AUX_95th\addons\main\inventories\vehicleInventory.hpp"
    };

    class AUX_95th_LAAT_Mrk2_Lights: 3AS_LAAT_Mk2Lights {
        displayname="LAAT/I Mk.2 (Lights)";
        hiddenSelectionsTextures[]={
            "\z\AUX_95th\addons\vehicles\laat\data\Default\Hull.paa",
            "\z\AUX_95th\addons\vehicles\laat\data\Default\Wings.paa",
            "\z\AUX_95th\addons\vehicles\laat\data\Default\Weapons.paa",
            "\z\AUX_95th\addons\vehicles\laat\data\Default\Weapon_Details.paa",
            "\z\AUX_95th\addons\vehicles\laat\data\Default\Interior.paa"
        };
        class TextureSources {
			textureList[] = {"Default",1,"AUX_95th_76561198051916304",0,"AUX_95th_76561198820607430",0,"AUX_95th_76561198060130630",0};
			NEW_95TH_LAAT_TEXTURE(Default)
			NEW_95TH_LAAT_TEXTURE(AUX_95th_76561198051916304)
			NEW_95TH_LAAT_TEXTURE(AUX_95th_76561198820607430)
			NEW_95TH_LAAT_TEXTURE(AUX_95th_76561198060130630)
		};
        NEW_SHARED_LAAT_CONFIG()
        #include "\z\AUX_95th\addons\main\inventories\vehicleInventory.hpp"
    };

    class AUX_95th_LAAT_Mrk2: 3as_LAAT_Mk2 {
        displayname="LAAT/I Mk.2";
        hiddenSelectionsTextures[]={
            "\z\AUX_95th\addons\vehicles\laat\data\Default\Hull.paa",
            "\z\AUX_95th\addons\vehicles\laat\data\Default\Wings.paa",
            "\z\AUX_95th\addons\vehicles\laat\data\Default\Weapons.paa",
            "\z\AUX_95th\addons\vehicles\laat\data\Default\Weapon_Details.paa",
            "\z\AUX_95th\addons\vehicles\laat\data\Default\Interior.paa"
        };
        class TextureSources {
			textureList[] = {"Default",1,"AUX_95th_76561198051916304",0,"AUX_95th_76561198820607430",0,"AUX_95th_76561198060130630",0};
			NEW_95TH_LAAT_TEXTURE(Default)
			NEW_95TH_LAAT_TEXTURE(AUX_95th_76561198051916304)
			NEW_95TH_LAAT_TEXTURE(AUX_95th_76561198820607430)
			NEW_95TH_LAAT_TEXTURE(AUX_95th_76561198060130630)
		};
        NEW_SHARED_LAAT_CONFIG()
        #include "\z\AUX_95th\addons\main\inventories\vehicleInventory.hpp"
    };

    class Extended_init_EventHandlers {
        class AUX_95th_LAAT_Mrk1 {class AUX_95th_LAAT_Mrk1_Init {init = "(_this) spawn AUX_95th_fnc_handleLAATInit;";};};
        class AUX_95th_LAAT_Mrk2 {class AUX_95th_LAAT_Mrk2_Init {init = "(_this) spawn AUX_95th_fnc_handleLAATInit;";};};
        class AUX_95th_LAAT_Mrk2_Lights {class AUX_95th_LAAT_Mrk2_Lights_Init {init = "(_this) spawn AUX_95th_fnc_handleLAATInit;";};};
    };
};

#include "CfgEventHandlers.hpp"