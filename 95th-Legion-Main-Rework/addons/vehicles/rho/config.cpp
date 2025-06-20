#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
			"AUX_95th_Rho", 
			"AUX_95th_Rho_Crate_Transport", 
			"AUX_95th_Rho_Crate_Ground_Deployment",
			"AUX_95th_Rho_Crate_Air_Deployment",
			"AUX_95th_Rho_Crate_Defence_Deployment",
			"AUX_95th_Rho_Crate_Utility_Deployment"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_vehicles_shared", "3AS_Republic_Heli_Rho"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;

class ls_impulsor_base;

class CfgVehicles {

	// Rho
	class Air;
	class Helicopter: Air {
		class HitPoints;
		class ACE_Actions {
			class ACE_MainActions;
		};
	};

	class Helicopter_Base_F: Helicopter {
		class Turrets;
		class Eventhandlers;
		class HitPoints: HitPoints {
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitHull;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitFuel;
		};
	};

	class Helicopter_Base_H: Helicopter_Base_F {
		class RotorLibHelicopterProperties;
		class ViewPilot;
		class ViewOptics;
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
		class AnimationSources;
		class Components;
	};

	class 3AS_Rho_Base_F: Helicopter_Base_H {};

	class 3AS_Rho_REP_F: 3AS_Rho_Base_F {};


	// Crates
	class 3AS_Prop_Base;
	class Land;
	class LandVehicle: Land {
		class ViewPilot;
		class ViewGunner;
		class NewTurret;
	};

	class StaticWeapon: LandVehicle {
		class Turrets {
			class MainTurret;
		};
	};

	class StaticMGWeapon: StaticWeapon {
		class Eventhandlers;
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				class ViewOptics;
			};
		};
	};

	class 3AS_Rho_Crate_Base_F: StaticMGWeapon {};


	// Our Stuff
	class AUX_95th_Rho: 3AS_Rho_REP_F {
		tas_can_impulse=0;
		class ls_impulsor: ls_impulsor_base {
			enabled = 1;
			speed = 400;
			fuelDrain = 0.0001;
			overchargeSpeed = 800;
			overchargeCooldown = 60;
        };
		author = "95th Aux Team";
		displayname="Rho Shuttle";
		crew = "AUX_95th_Unit_P1_Basic_Trooper";
		typicalCargo[] = {"AUX_95th_Unit_P1_Basic_Trooper"};
		editorSubcategory="AUX_95th_Legion_Vehicles_Category_Air_Logistics";
		faction="AUX_95th_Legion_Faction_Vehicles";
		hiddenSelectionsTextures[]={
			"\z\AUX_95th\addons\vehicles\rho\data\Shuttle\Default\Hull.paa",
			"\z\AUX_95th\addons\vehicles\rho\data\Shuttle\Default\Hull_Front.paa",
			"\z\AUX_95th\addons\vehicles\rho\data\Shuttle\Default\Wings.paa",
			"\z\AUX_95th\addons\vehicles\rho\data\Shuttle\Default\Cockpit.paa",
			"\z\AUX_95th\addons\vehicles\rho\data\Shuttle\Default\Cockpit_Interfaces.paa",
			"\z\AUX_95th\addons\vehicles\rho\data\Shuttle\Default\Interior.paa",
			"\z\AUX_95th\addons\vehicles\rho\data\Shuttle\Default\Interior_Optional.paa"
		};
		class TextureSources {
			class Default {
				displayName = "Default";
				author = "95th Aux Team";
				textures[] = {
					"\z\AUX_95th\addons\vehicles\rho\data\Shuttle\Default\Hull.paa",
					"\z\AUX_95th\addons\vehicles\rho\data\Shuttle\Default\Hull_Front.paa",
					"\z\AUX_95th\addons\vehicles\rho\data\Shuttle\Default\Wings.paa",
					"\z\AUX_95th\addons\vehicles\rho\data\Shuttle\Default\Cockpit.paa",
					"\z\AUX_95th\addons\vehicles\rho\data\Shuttle\Default\Cockpit_Interfaces.paa",
					"\z\AUX_95th\addons\vehicles\rho\data\Shuttle\Default\Interior.paa",
					"\z\AUX_95th\addons\vehicles\rho\data\Shuttle\Default\Interior_Optional.paa"
				};
				factions[] = {"AUX_95th_Legion_Faction_Vehicles"};
			};
		};
	};

	class AUX_95th_Rho_Crate_Transport: 3AS_Rho_Crate_Base_F {
		author = "95th Aux Team";
		scope = 2;
		displayname="Transport Crate";
		crew = "AUX_95th_Unit_P1_Basic_Trooper";
		typicalCargo[] = {"AUX_95th_Unit_P1_Basic_Trooper"};
		editorSubcategory="AUX_95th_Legion_Vehicles_Category_Static";
		faction="AUX_95th_Legion_Faction_Vehicles";
		hiddenSelectionsTextures[]={
			"\z\AUX_95th\addons\vehicles\rho\data\Crates\Default\Crate_Ext.paa",
			"\z\AUX_95th\addons\vehicles\rho\data\Crates\Default\Crate_Int.paa",
			"\z\AUX_95th\addons\vehicles\rho\data\Crates\Default\Barracks.paa",
			"\z\AUX_95th\addons\vehicles\rho\data\Crates\Default\Clone_Bed.paa",
			"\z\AUX_95th\addons\vehicles\rho\data\Crates\Default\Interior.paa"
		};
		class TextureSources {
			class Default {
				displayName = "Default";
				author = "95th Aux Team";
				textures[] = {
					"\z\AUX_95th\addons\vehicles\rho\data\Crates\Default\Crate_Ext.paa",
					"\z\AUX_95th\addons\vehicles\rho\data\Crates\Default\Crate_Int.paa",
					"\z\AUX_95th\addons\vehicles\rho\data\Crates\Default\Barracks.paa",
					"\z\AUX_95th\addons\vehicles\rho\data\Crates\Default\Clone_Bed.paa",
					"\z\AUX_95th\addons\vehicles\rho\data\Crates\Default\Interior.paa"
				};
				factions[] = {"AUX_95th_Legion_Faction_Vehicles"};
			};
		};
	};

	class AUX_95th_Rho_Crate_Ground_Deployment: AUX_95th_Rho_Crate_Transport {
		displayname="Ground Deployment Crate";
	};

	class AUX_95th_Rho_Crate_Air_Deployment: AUX_95th_Rho_Crate_Transport {
		displayname="Air Deployment Crate";
	};

	class AUX_95th_Rho_Crate_Defence_Deployment: AUX_95th_Rho_Crate_Transport {
		displayname="Defence Deployment Crate";
	};

	class AUX_95th_Rho_Crate_Utility_Deployment: AUX_95th_Rho_Crate_Transport {
		displayname="Utility Deployment Crate";
	};
};

class Extended_init_EventHandlers {
	class AUX_95th_Rho {class AUX_95th_Rho_Init {init = "(_this) spawn AUX_95th_fnc_handleAirVehicleInit;";};};
};

class Extended_InitPost_EventHandlers {	
	class AUX_95th_Rho_Crate_Ground_Deployment {class AUX_95th_Rho_Crate_Ground_Deployment_Init {serverInit="[_this select 0, 'GroundDeployment'] call AUX_95th_fnc_handleRhoCrateInit;";};};
	class AUX_95th_Rho_Crate_Air_Deployment {class AUX_95th_Rho_Crate_Air_Deployment_Init {serverInit="[_this select 0, 'AirDeployment'] call AUX_95th_fnc_handleRhoCrateInit;";};};
	class AUX_95th_Rho_Crate_Defence_Deployment {class AUX_95th_Rho_Crate_Defence_Deployment_Init {serverInit="[_this select 0, 'DefenceDeployment'] call AUX_95th_fnc_handleRhoCrateInit;";};};
	class AUX_95th_Rho_Crate_Utility_Deployment {class AUX_95th_Rho_Crate_Utility_Deployment_Init {serverInit="[_this select 0, 'UtilityDeployment'] call AUX_95th_fnc_handleRhoCrateInit;";};};
};

#include "CfgEventHandlers.hpp"