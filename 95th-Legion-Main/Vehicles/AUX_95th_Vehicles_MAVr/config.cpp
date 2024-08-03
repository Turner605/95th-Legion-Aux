class CfgPatches {
	class AUX_95th_Vehicles_MAVr {
		author = "95th Legion";
		name = "AUX 95th Vehicles MAVr";
		requiredAddons[] = {"QS_Mavr_F", "AUX_95th_Vehicles_Shared"};
		weapons[] = {};
		units[] = {"AUX_95th_MAVr"};
		magazines[] = {};
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
		crew = "AUX_95th_Generic_Unit_P1_Basic_Rifleman";
		typicalCargo[] = {"AUX_95th_Generic_Unit_P1_Basic_Rifleman"};
		tas_canBlift=1;
		tas_liftVars = "[[[[0,-4,-4]]], [0.1], [-0.5]]";
		faction="AUX_95th_Legion_Faction_Vehicles";
		editorCategory="AUX_95th_Legion_Faction_Vehicles";
		editorSubcategory="AUX_95th_Legion_Vehicles_Category_Ground_Heavy";
		displayName = "MAVr";
		hiddenSelections[] = {"base","turret","elements","inter","wires"};
		hiddenSelectionsTextures[] = {
			"\AUX_95th_Vehicles_MAVr\Data\Default\Base.paa",
			"\AUX_95th_Vehicles_MAVr\Data\Default\Turret.paa",
			"\AUX_95th_Vehicles_MAVr\Data\Default\Elements.paa",
			"\AUX_95th_Vehicles_MAVr\Data\Default\Internal.paa",
			"\AUX_95th_Vehicles_MAVr\Data\Default\Wires.paa"
		};
		textureList[] = {"Default",0};
		class TextureSources {
			class Default {
				displayName = "Default";
				author = "95th Aux Team";
				textures[] = {
					"\AUX_95th_Vehicles_MAVr\Data\Default\Base.paa",
					"\AUX_95th_Vehicles_MAVr\Data\Default\Turret.paa",
					"\AUX_95th_Vehicles_MAVr\Data\Default\Elements.paa",
					"\AUX_95th_Vehicles_MAVr\Data\Default\Internal.paa",
					"\AUX_95th_Vehicles_MAVr\Data\Default\Wires.paa"
				};
				factions[] = {"AUX_95th_Legion_Faction_Vehicles"};
			};
		};
	};
};