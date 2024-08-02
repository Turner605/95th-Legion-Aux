class CfgPatches {
	class AUX_95th_Vehicles_V19 {
		author = "95th Legion";
		name = "AUX 95th Vehicles V-19";
		requiredAddons[] = {"3as_V19_Torrent"};
		weapons[] = {};
		units[] = {"AUX_95th_V19"};
		magazines[] = {};
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

class DefaultVehicleSystemsDisplayManagerLeft {
	class components;
};

class DefaultVehicleSystemsDisplayManagerRight {
	class components;
};

class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft {
	class components;
};

class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight {
	class components;
};

class CfgVehicles {
	class thingX;
	class Motorcycle;
	class Air;
	class Plane: Air {
		class NewTurret;
		class ViewPilot;
		class HitPoints {
			class HitHull;
		};
	};

	class Plane_Base_F: Plane {
		class AnimationSources;
		class Components;
	};

	class Plane_Fighter_03_base_F: Plane_Base_F{};
	class 3as_V19_base: Plane_Fighter_03_base_F {};

	class AUX_95th_V19: 3as_V19_base {
		author = "95th Aux Team";
		crew = "AUX_95th_Generic_Unit_P1_Basic_Rifleman";
		typicalCargo[] = {"AUX_95th_Generic_Unit_P1_Basic_Rifleman"};
		faction="AUX_95th_Legion_Faction_Vehicles";
		editorSubcategory="AUX_95th_Legion_Vehicles_Category_Air_Fighters";
		displayName = "V19 Torrent";
		hiddenselections[] = {"camo1","camo2","camo3","camo4","camo5","camo6"};
		hiddenselectionstextures[] = {
			"3as\3as_v19\textures\wings_co.paa",
			"\AUX_95th_Vehicles_V19\Data\Default\Wing_Plates.paa",
			"\AUX_95th_Vehicles_V19\Data\Default\Hull.paa",
			"\AUX_95th_Vehicles_V19\Data\Default\Gun_Gear.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
			"\AUX_95th_Vehicles_V19\Data\Default\Pizzlepit.paa",
		};
		class TextureSources {
			class Default {
				displayName = "Default";
				author = "95th Aux Team";
				textures[] = {
					"3as\3as_v19\textures\wings_co.paa",
					"\AUX_95th_Vehicles_V19\Data\Default\Wing_Plates.paa",
					"\AUX_95th_Vehicles_V19\Data\Default\Hull.paa",
					"\AUX_95th_Vehicles_V19\Data\Default\Gun_Gear.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
					"\AUX_95th_Vehicles_V19\Data\Default\Pizzlepit.paa",
				};
				factions[] = {"AUX_95th_Legion_Faction_Vehicles"};
			};
		};
	};
};
