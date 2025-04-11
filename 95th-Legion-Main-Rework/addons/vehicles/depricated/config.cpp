#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
            "AUX_95th_Command_Outpost",
			"AUX_95th_Swamp_Speeder",
			"AUX_95th_Swamp_Speeder_Transport",
			"AUX_95th_TX_130",
			"AUX_95th_TX_130_Shield",
			"AUX_95th_RX200",
			"AUX_95th_ATTE",
			"AUX_95th_ATRT"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_vehicles_shared", "3AS_Prop_Crates", "3AS_SaberTank"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};


class CfgFunctions {
    class AUX_95th {
        class Vehicles_Depricated {
			file = "\z\AUX_95th\addons\vehicles\depricated\functions";
            class handleLAATRespawnToggle {};
        };

        class Init {
			file = "\z\AUX_95th\addons\vehicles\depricated\functions\init";
            class handleATRTInit {};
            class handleCommandOutpostInit {};
            class handleTXShieldInit {};
        };

        class TXShield {
			file = "\z\AUX_95th\addons\vehicles\depricated\functions\TXShield";
            class handleToggleTXShield {};
            class handleTXRemoved {};
            class handleTXShieldDamage {};
            class TXShieldOffAnimation {};
        };

        class ResupplyBomb {
			file = "\z\AUX_95th\addons\vehicles\depricated\functions\Resupply Bomb";
            class handleLoadResupplyBomb {};
            class handleResupplyBombDetonated {};
            class checkIsNearResupplyPad {};
        };
    };
};

class ViewOptics;
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class Optics_Armored;
class Optics_Gunner_APC_01: Optics_Armored { class Wide; class Medium; class Narrow; };
class DefaultVehicleSystemsDisplayManagerLeft { class components; };
class DefaultVehicleSystemsDisplayManagerRight { class components; };
class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft { class components; };
class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight { class components; };
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft { class components; };
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight { class components; };
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft { class components; };
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight { class components; };
class GunParticles;
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;

class CfgVehicles {
	class 3AS_Republic_FCP;
	class 3AS_ISP;
	class 3AS_ISP_Transport;
	class 3as_saber_m1;
	class 3as_saber_m1Recon;

	class LandVehicle;
	class Tank_F: LandVehicle { class NewTurret; class Sounds; class HitPoints; };
	class 3AS_RX200_Base: Tank_F {
		class Turrets {
			class MainTurret: NewTurret {
				class ViewGunner;
				class Turrets { class CommanderOptics; };
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints {class HitHull; class HitFuel; class HitEngine; class HitLTrack; class HitRTrack;};
		class Sounds: Sounds {class Engine; class Movement;};
		class EventHandlers;
		class Reflectors {class Left; class Right: Left {}; class Right2: Right {}; class Left2: Left {};};
	};

	class 3AS_ATRT;

	// Static Vehicles
	#include "Static Vehicles\Command Outpost.hpp"

	// Ground Vehicles
	#include "Ground Vehicles\RX200.hpp"
	#include "Ground Vehicles\Swamp Speeder.hpp"
	#include "Ground Vehicles\Swamp Speeder (Transport).hpp"
	#include "Ground Vehicles\TX-130.hpp"
	#include "Ground Vehicles\TX-130 (Shield).hpp"
	#include "Ground Vehicles\ATRT.hpp"
};

#include "CfgEventHandlers.hpp"