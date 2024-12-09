#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {"AUX_95th_PX10_Repair"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_vehicles_shared", "3AS_Rebel_Armor_PX10"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class DefaultVehicleSystemsDisplayManagerLeft {
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight {
	class components;
};
class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft {
	class components;
};
class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight {
	class components;
};
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft {
	class components;
};
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight {
	class components;
};
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft {
	class components;
};
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight {
	class components;
};
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class Mode_SemiAuto;
class CargoTurret;
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class CfgVehicles {
	class LandVehicle;
	class Tank: LandVehicle {
		class NewTurret;
		class Sounds;
		class HitPoints;
		class Eventhandlers;
	};

	class Tank_F: Tank {
		class Turrets {
			class MainTurret: NewTurret {
				class ViewGunner;
				class Turrets {
					class CommanderOptics;
				};
			};
		};

		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class Components;
		class HitPoints: HitPoints {
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};

		class Sounds: Sounds {
			class Engine;
			class Movement;
		};
	};

	class Wreck_base_F;
	class 3AS_PX10_Base_F: Tank_F {};
	class 3AS_PX10_F: 3AS_PX10_Base_F {};
	class 3AS_PX10_REB_F: 3AS_PX10_F {};
	class 3AS_PX10_REB_R3: 3AS_PX10_REB_F {};
	class AUX_95th_PX10_Repair: 3AS_PX10_REB_R3 {
        side=1;
        faction="AUX_95th_Legion_Faction_Vehicles";
		editorCategory="AUX_95th_Legion_Faction_Vehicles";
		editorSubcategory="AUX_95th_Legion_Vehicles_Category_Ground_Light";
		crew = "AUX_95th_Unit_P1_Basic_Trooper";
		displayName = "PX-10 (Repair)";
		hiddenSelectionsTextures[] = {
            "\z\AUX_95th\addons\vehicles\px10\data\Default\Body.paa",
            "\z\AUX_95th\addons\vehicles\px10\data\Default\IntBack.paa",
            "\z\AUX_95th\addons\vehicles\px10\data\Default\IntFront.paa",
            "\z\AUX_95th\addons\vehicles\px10\data\Default\Fuel.paa",
            "\z\AUX_95th\addons\vehicles\px10\data\Default\Crane.paa"
        };
		class TextureSources {
			class Default {
				displayName = "Default";
				textures[] = {
                    "\z\AUX_95th\addons\vehicles\px10\data\Default\Body.paa",
                    "\z\AUX_95th\addons\vehicles\px10\data\Default\IntBack.paa",
                    "\z\AUX_95th\addons\vehicles\px10\data\Default\IntFront.paa",
                    "\z\AUX_95th\addons\vehicles\px10\data\Default\Fuel.paa",
                    "\z\AUX_95th\addons\vehicles\px10\data\Default\Crane.paa"
                };
				factions[] = {"AUX_95th_Legion_Faction_Vehicles"};
			};
		};
    };
};

class CfgFunctions {
    class AUX_95th {
        class Vehicles_PX10 {
			file = "\z\AUX_95th\addons\vehicles\px10\functions";
            class handlePX10Init {};
        };
    };
};

class Extended_InitPost_EventHandlers {	
	class AUX_95th_PX10_Repair {class AUX_95th_PX10_Repair_Init {init="[_this select 0] call AUX_95th_fnc_handlePX10Init;";};};
};

#include "CfgEventHandlers.hpp"