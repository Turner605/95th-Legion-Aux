#include "Macros\LAAT Texture.hpp"
#include "Macros\LAAT Shared.hpp"

class CfgVehicles {
	class 3AS_Republic_FCP;
	class 3AS_ISP;
	class 3AS_ISP_Transport;
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

	// Static Vehicles
	#include "Static Vehicles\Command Outpost.hpp"

	// Ground Vehicles
	#include "Ground Vehicles\Swamp Speeder.hpp"
	#include "Ground Vehicles\Swamp Speeder (Transport).hpp"
	#include "Ground Vehicles\TX-130.hpp"
	#include "Ground Vehicles\TX-130 (Shield).hpp"
	#include "Ground Vehicles\RX200.hpp"
	#include "Ground Vehicles\UGV.hpp"

	// Air Vehicles
	#include "Air Vehicles\LAAT (Mrk1).hpp"
	#include "Air Vehicles\LAAT (Mrk2).hpp"
	#include "Air Vehicles\LAAT (Mrk2-Lights).hpp"
};