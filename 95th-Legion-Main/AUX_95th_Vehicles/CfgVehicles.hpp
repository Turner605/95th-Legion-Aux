#include "Macros\LAAT Texture.hpp"
#include "Macros\ATTE Texture.hpp"
#include "Macros\LAAT Shared.hpp"
#include "Macros\LAAT C Shared.hpp"

class CfgVehicles {
	class 3AS_Republic_FCP;
	class 3AS_ISP;
	class 3AS_ISP_Transport;
	class 3AS_LAATC;
	class 3as_LAAT_Mk1;
	class 3as_LAAT_Mk2;
	class 3as_LAAT_Mk2Lights;
	class 3as_saber_m1;
	class 3as_saber_m1Recon;
	class I_UGV_01_rcws_F;

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

	class CCS_Manta_Base: I_UGV_01_rcws_F {
		class ViewOptics;
		class HitPoints {
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
		class NewTurret;
		class Turrets {
			class MainTurret: NewTurret {
				class ViewOptics;
			};
		};
		class AnimationSources;
	};

	class Car;
	class Car_F: Car {
		class Sounds;
		class Eventhandlers;
		class HitPoints {
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitHull;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
	};

	class Wheeled_APC_F: Car_F {
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds {
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets {
			class MainTurret: NewTurret {
				class ViewOptics;
				class ViewGunner;
				class Turrets {
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
	};

	class APC_Wheeled_01_base_F: Wheeled_APC_F{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics{};
				};
			};
		};	
	};

	class 3AS_ATTE_Base: APC_Wheeled_01_base_F {
		class Turrets : Turrets {
			class MainTurretTop: Mainturret {
				class OpticsIn {
					class Wide;
					class Narrow : Wide{};
				};
				class HitPoints {
					class HitTurrettop;
					class HitGuntop;
				};
				class ViewGunner: ViewGunner{};	
				class Turrets{};
			};
			class MainTurretFront: MainTurretTop {
				class OpticsIn {
					class Wide;
					class Narrow : Wide{};
				};
				class HitPoints {
					class HitTurretFront;
					class HitGunFront;
				};
				class ViewGunner: ViewGunner{};	
				class Turrets{};
			};
			class MainTurretBack : MainTurretFront {
				class ViewGunner: ViewGunner{};
				class HitPoints {
					class HitTurretRear;
					class HitGunRear;
				};
			};
		};
	};

	// Static Vehicles
	#include "Static Vehicles\Command Outpost.hpp"

	// Ground Vehicles
	#include "Ground Vehicles\ATTE.hpp"
	#include "Ground Vehicles\RX200.hpp"
	#include "Ground Vehicles\Swamp Speeder.hpp"
	#include "Ground Vehicles\Swamp Speeder (Transport).hpp"
	#include "Ground Vehicles\TX-130.hpp"
	#include "Ground Vehicles\TX-130 (Shield).hpp"
	#include "Ground Vehicles\UGV.hpp"

	// Air Vehicles
	#include "Air Vehicles\LAAT (Mrk1).hpp"
	#include "Air Vehicles\LAAT (Mrk2).hpp"
	#include "Air Vehicles\LAAT (Mrk2-Lights).hpp"
	#include "Air Vehicles\LAAT (C).hpp"
};