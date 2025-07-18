#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {"AUX_95th_MAVr"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_vehicles_shared", "QS_Mavr_F"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class DefaultEventhandlers;
class EventHandlers;
class AnimationSources;
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
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_AAA_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
				class Components;
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class Components;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitEngine;
			class HitFuel;
			class HitHull;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class EventHandlers;
	};

	class QS_Mavr: Tank_F {};

	class AUX_95th_MAVr: QS_Mavr {
		author = "95th Aux Team";
		crew = "AUX_95th_Unit_P1_Basic_Trooper";
		typicalCargo[] = {"AUX_95th_Unit_P1_Basic_Trooper"};
		#include "\z\AUX_95th\addons\main\inventories\vehicleInventory.hpp"
		tas_canBlift=1;
		tas_liftVars = "[[[[0,-4,-4]]], [0.1], [-0.5]]";
		faction="AUX_95th_Legion_Faction_Vehicles";
		editorCategory="AUX_95th_Legion_Faction_Vehicles";
		editorSubcategory="AUX_95th_Legion_Vehicles_Category_Ground_Light";
		displayName = "MAVr";
		hiddenSelections[] = {"base","turret","elements","inter","wires"};
		hiddenSelectionsTextures[] = {
			"\z\AUX_95th\addons\vehicles\mavr\data\Default\Base_CO.paa",
			"\z\AUX_95th\addons\vehicles\mavr\data\Default\Turret_CO.paa",
			"\z\AUX_95th\addons\vehicles\mavr\data\Default\Elements_CO.paa",
			"\z\AUX_95th\addons\vehicles\mavr\data\Default\Internal_CO.paa",
			"\z\AUX_95th\addons\vehicles\mavr\data\Default\Wires_CO.paa"
		};

		hiddenSelectionsMaterials[] = {
			"\z\AUX_95th\addons\vehicles\mavr\Base.rvmat",
			"\z\AUX_95th\addons\vehicles\mavr\Turret.rvmat",
			"\z\AUX_95th\addons\vehicles\mavr\Elements.rvmat"
		};

		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = {"95th_LAAT_Light_Cannon", "missiles_titan_AA"};
				magazines[] = {"95th_LAAT_Light_Cannon_Magazine","95th_LAAT_Light_Cannon_Magazine","95th_LAAT_Light_Cannon_Magazine","4Rnd_Titan_long_missiles_O","4Rnd_Titan_long_missiles_O","4Rnd_Titan_long_missiles_O","4Rnd_Titan_long_missiles_O","4Rnd_Titan_long_missiles_O"};
			};
		};

		class HitPoints: HitPoints {
			class HitHull: HitHull {
				armor = 1.5;
				material = -1;
				armorComponent = "hit_hull";
				name = "hit_hull_point";
				visual = "zbytek";
				passThrough = 1;
				minimalHit = 0.2;
				explosionShielding = 0.4;
				radius = 0.15;
			};
			class HitEngine: HitEngine {
				armor = 1.5;
				material = -1;
				passThrough = 0.2;
				explosionShielding = 0.4;
				armorComponent = "hit_engine";
				name = "hit_engine_point";
				visual = "-";
				minimalHit = 0.2;
				radius = 0.15;
			};
			class HitFuel: HitFuel {
				armor = 1.5;
				material = -1;
				armorComponent = "hit_fuel";
				name = "hit_fuel_point";
				visual = "-";
				passThrough = 0.2;
				minimalHit = 0.2;
				explosionShielding = 0.5;
				radius = 0.15;
			};
			class HitLTrack: HitLTrack {
				armor = 2;
				material = -1;
				armorComponent = "hit_trackL";
				name = "track_l_hit";
				visual = "-";
				radius = 0.2;
				minimalHit = 0.0738462;
				explosionShielding = 0.8;
				passThrough = 0;
			};
			class HitRTrack: HitRTrack {
				armor = 2;
				material = -1;
				armorComponent = "hit_trackR";
				name = "track_r_hit";
				visual = "-";
				passThrough = 0;
				minimalHit = 0.1;
				explosionShielding = 0.2;
				radius = 0.15;
			};
		};

		textureList[] = {"Default",0};
		class TextureSources {
			class Default {
				displayName = "Default";
				author = "95th Aux Team";
				textures[] = {
					"\z\AUX_95th\addons\vehicles\mavr\data\Default\Base_CO.paa",
					"\z\AUX_95th\addons\vehicles\mavr\data\Default\Turret_CO.paa",
					"\z\AUX_95th\addons\vehicles\mavr\data\Default\Elements_CO.paa",
					"\z\AUX_95th\addons\vehicles\mavr\data\Default\Internal_CO.paa",
					"\z\AUX_95th\addons\vehicles\mavr\data\Default\Wires_CO.paa"
				};
				factions[] = {"AUX_95th_Legion_Faction_Vehicles"};
			};
		};
	};
};

// Init for a shield on the gun
// private _nearest = nearestObject [_this#1, "AUX_95th_MAVr"]; 
// _this#1 attachTo [_nearest, [0, 8, 0], "usti hlavne", true];
// _this#1 setVectorDirAndUp [[1,0,0],[0,0,1]]; 

#include "CfgEventHandlers.hpp"