class CfgPatches {
	class AUX_95th_Vehicles_Z95 {
		author = "95th Legion";
		name = "AUX 95th Vehicles Bantha";
		requiredAddons[] = {"QS_Bantha_F"};
		weapons[] = {};
		units[] = {"AUX_95th_Bantha"};
		magazines[] = {};
	};
};

class DefaultEventHandlers;
class EventHandlers;
class AnimationSources;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_01: Optics_Armored {
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_APC_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class NewTurret;
		class Sounds;
		class HitPoints
		{
			class HitHull;
			class HitLFWheel;
			class HitLF2Wheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitBody;
			class HitFuel;
			class HitEngine;
		};
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
	class QS_Bantha_B: Wheeled_APC_F
	{
		author = "Quasar Studios";
		mapSize = 10.44;
		_generalMacro = "QS_Bantha_B";
		accuracy = 0.25;
		displayName = "Bantha IFV";
		attenuationEffectType = "TankAttenuation";
		destrType = "DestructWreck";
		enableGPS = 1;
		unitInfoType = "RscUnitInfoTank";
		soundGetIn[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out",0.56234133,1};
		soundTurnIn[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out",1.7782794,1,20};
		soundTurnOut[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out",1.7782794,1,20};
		soundTurnInInternal[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out",1.7782794,1,20};
		soundTurnOutInternal[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out",1.7782794,1,20};
		soundDammage[] = {"",0.56234133,1};
		soundEngineOnInt[] = {"QS_Weapons_F\Sounds\TX\Start.ogg",0.39810717,1};
		soundEngineOnExt[] = {"QS_Weapons_F\Sounds\TX\Start.ogg",0.56234133,1,200};
		soundEngineOffInt[] = {"QS_Weapons_F\Sounds\TX\Stop.ogg",0.39810717,1};
		soundEngineOffExt[] = {"QS_Weapons_F\Sounds\TX\Stop.ogg",0.56234133,1,200};
		soundBushCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",0.17782794,1,100};
		soundBushCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",0.17782794,1,100};
		soundBushCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",0.17782794,1,100};
		soundBushCrash[] = {"soundBushCollision1",0.33,"soundBushCollision2",0.33,"soundBushCollision3",0.33};
		soundGeneralCollision1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_1",1,1,100};
		soundGeneralCollision2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_2",1,1,100};
		soundGeneralCollision3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_3",1,1,100};
		soundGeneralCollision4[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_4",1,1,100};
		soundCrashes[] = {"soundGeneralCollision1",0.25,"soundGeneralCollision2",0.25,"soundGeneralCollision3",0.25,"soundGeneralCollision4",0.25};
		buildCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_1",1,1,200};
		buildCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_2",1,1,200};
		buildCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_3",1,1,200};
		buildCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_4",1,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_1",1,1,200};
		WoodCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_2",1,1,200};
		WoodCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_3",1,1,200};
		WoodCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_4",1,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166};
		ArmorCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_1",1,1,200};
		ArmorCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_2",1,1,200};
		ArmorCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_3",1,1,200};
		ArmorCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_4",1,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"QS_Weapons_F\Sounds\TX\Ext_eng.ogg",0.3548134,1,200};
				frequency = "0.95 + ((rpm/ 2300) factor[(10/ 2300),(200/ 2300)])*0.15";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(10/ 2300),(200/ 2300)]) * ((rpm/ 2300) factor[(500/ 2300),(425/ 2300)]))";
			};
			class Engine
			{
				sound[] = {"QS_Weapons_F\Sounds\TX\Ext_eng.ogg",0.39810717,1,200};
				frequency = "0.8 + ((rpm/ 2300) factor[(430/ 2300),(730/ 2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(430/ 2300),(510/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(620/ 2300)]))";
			};
			class Engine1_ext
			{
				sound[] = {"QS_Weapons_F\Sounds\TX\Ext_eng.ogg",0.4466836,1,200};
				frequency = "0.8 + ((rpm/ 2300) factor[(630/ 2300),(1000/ 2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(600/ 2300),(720/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(840/ 2300)]))";
			};
			class Engine2_ext
			{
				sound[] = {"QS_Weapons_F\Sounds\TX\Ext_eng.ogg",0.5011872,1,250};
				frequency = "0.8 + ((rpm/ 2300) factor[(850/ 2300),(1300/ 2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(800/ 2300),(1000/ 2300)]) * ((rpm/ 2300) factor[(1300/ 2300),(1100/ 2300)]))";
			};
			class Engine3_ext
			{
				sound[] = {"QS_Weapons_F\Sounds\TX\Ext_eng.ogg",0.56234133,1,300};
				frequency = "0.8 + ((rpm/ 2300) factor[(1100/ 2300),(1600/ 2300)])*0.1";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(1100/ 2300),(1270/ 2300)]) * ((rpm/ 2300) factor[(1550/ 2300),(1380/ 2300)]))";
			};
			class Engine4_ext
			{
				sound[] = {"QS_Weapons_F\Sounds\TX\Ext_eng.ogg",0.63095737,1,300};
				frequency = "0.8 + ((rpm/ 2300) factor[(1400/ 2300),(2000/ 2300)])*0.1";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(1380/ 2300),(1500/ 2300)]) * ((rpm/ 2300) factor[(2000/ 2300),(1700/ 2300)]))";
			};
			class Engine5_ext
			{
				sound[] = {"QS_Weapons_F\Sounds\TX\Ext_eng.ogg",0.70794576,1,300};
				frequency = "0.8 + ((rpm/ 2300) factor[(1700/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*camPos*((rpm/ 2300) factor[(1600/ 2300),(2100/ 2300)])";
			};
			class IdleThrust
			{
				sound[] = {"QS_Weapons_F\Sounds\TX\Ext_eng.ogg",0.56234133,1,200};
				frequency = "0.8 + ((rpm/ 2300) factor[(10/ 2300),(200/ 2300)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(10/ 2300),(200/ 2300)]) * ((rpm/ 2300) factor[(500/ 2300),(425/ 2300)]))";
			};
			class EngineThrust
			{
				sound[] = {"QS_Weapons_F\Sounds\TX\Ext_eng.ogg",0.63095737,1,200};
				frequency = "0.8 + ((rpm/ 2300) factor[(430/ 2300),(730/ 2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(430/ 2300),(510/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(620/ 2300)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"QS_Weapons_F\Sounds\TX\Ext_eng.ogg",0.63095737,1,230};
				frequency = "0.8 + ((rpm/ 2300) factor[(630/ 2300),(1000/ 2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(600/ 2300),(720/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(840/ 2300)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"QS_Weapons_F\Sounds\TX\Ext_eng.ogg",0.70794576,1,250};
				frequency = "0.8 + ((rpm/ 2300) factor[(850/ 2300),(1300/ 2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(800/ 2300),(1000/ 2300)]) * ((rpm/ 2300) factor[(1300/ 2300),(1100/ 2300)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"QS_Weapons_F\Sounds\TX\Ext_eng.ogg",0.70794576,1,350};
				frequency = "0.8 + ((rpm/ 2300) factor[(1100/ 2300),(1600/ 2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1100/ 2300),(1270/ 2300)]) * ((rpm/ 2300) factor[(1550/ 2300),(1380/ 2300)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"QS_Weapons_F\Sounds\TX\Ext_eng.ogg",1,1,350};
				frequency = "0.8 + ((rpm/ 2300) factor[(1400/ 2300),(2000/ 2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1380/ 2300),(1500/ 2300)]) * ((rpm/ 2300) factor[(2000/ 2300),(1700/ 2300)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"QS_Weapons_F\Sounds\TX\Ext_eng.ogg",1.1220185,1,400};
				frequency = "0.8 + ((rpm/ 2300) factor[(1700/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2300) factor[(1600/ 2300),(2100/ 2300)])";
			};
			class Idle_int
			{
				sound[] = {"QS_Weapons_F\Sounds\TX\Int_eng.ogg",0.31622776,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(10/ 2300),(200/ 2300)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(10/ 2300),(200/ 2300)]) * ((rpm/ 2300) factor[(500/ 2300),(425/ 2300)]))";
			};
			class Engine_int
			{
				sound[] = {"QS_Weapons_F\Sounds\TX\Int_eng.ogg",0.3548134,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(430/ 2300),(730/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(430/ 2300),(510/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(620/ 2300)]))";
			};
			class Engine1_int
			{
				sound[] = {"QS_Weapons_F\Sounds\TX\Int_eng.ogg",0.39810717,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(630/ 2300),(1000/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(600/ 2300),(720/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(840/ 2300)]))";
			};
			class Engine2_int
			{
				sound[] = {"QS_Weapons_F\Sounds\TX\Int_eng.ogg",0.4466836,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(850/ 2300),(1300/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(800/ 2300),(1000/ 2300)]) * ((rpm/ 2300) factor[(1300/ 2300),(1100/ 2300)]))";
			};
			class Engine3_int
			{
				sound[] = {"QS_Weapons_F\Sounds\TX\Int_eng.ogg",0.5011872,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1100/ 2300),(1600/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(1100/ 2300),(1270/ 2300)]) * ((rpm/ 2300) factor[(1550/ 2300),(1380/ 2300)]))";
			};
			class Engine4_int
			{
				sound[] = {"QS_Weapons_F\Sounds\TX\Int_eng.ogg",0.56234133,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1400/ 2300),(2000/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(1380/ 2300),(1500/ 2300)]) * ((rpm/ 2300) factor[(2000/ 2300),(1700/ 2300)]))";
			};
			class Engine5_int
			{
				sound[] = {"QS_Weapons_F\Sounds\TX\Int_eng.ogg",0.63095737,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1700/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/ 2300) factor[(1600/ 2300),(2100/ 2300)])";
			};
			class IdleThrust_int
			{
				sound[] = {"QS_Weapons_F\Sounds\TX\Int_eng.ogg",0.3548134,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(10/ 2300),(200/ 2300)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(10/ 2300),(200/ 2300)]) * ((rpm/ 2300) factor[(500/ 2300),(425/ 2300)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"QS_Weapons_F\Sounds\TX\Int_eng.ogg",0.39810717,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(430/ 2300),(730/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(430/ 2300),(510/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(620/ 2300)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"QS_Weapons_F\Sounds\TX\Int_eng.ogg",0.4466836,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(630/ 2300),(1000/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(600/ 2300),(720/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(840/ 2300)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"QS_Weapons_F\Sounds\TX\Int_eng.ogg",0.4466836,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(850/ 2300),(1300/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(800/ 2300),(1000/ 2300)]) * ((rpm/ 2300) factor[(1300/ 2300),(1100/ 2300)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"QS_Weapons_F\Sounds\TX\Int_eng.ogg",0.5011872,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1100/ 2300),(1600/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1100/ 2300),(1270/ 2300)]) * ((rpm/ 2300) factor[(1550/ 2300),(1380/ 2300)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"QS_Weapons_F\Sounds\TX\Int_eng.ogg",0.56234133,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1400/ 2300),(2000/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1380/ 2300),(1500/ 2300)]) * ((rpm/ 2300) factor[(2000/ 2300),(1700/ 2300)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"QS_Weapons_F\Sounds\TX\Int_eng.ogg",0.63095737,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1700/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2300) factor[(1600/ 2300),(2100/ 2300)])";
			};
			class NoiseInt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",0.5011872,1};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(Speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",0.63095737,1,150};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(Speed factor[4, 15])";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",1,1,60};
				frequency = "1";
				volume = "camPos*rock*(Speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",1,1,60};
				frequency = "1";
				volume = "camPos*sand*(Speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",1,1,60};
				frequency = "1";
				volume = "camPos*grass*(Speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",1,1,60};
				frequency = "1";
				volume = "camPos*mud*(Speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",1,1,60};
				frequency = "1";
				volume = "camPos*gravel*(Speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",1,1,60};
				frequency = "1";
				volume = "camPos*asphalt*(Speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",1.5848932,1,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(Speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",0.70794576,1};
				frequency = "1";
				volume = "(1-camPos)*rock*(Speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",0.70794576,1};
				frequency = "1";
				volume = "(1-camPos)*sand*(Speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",0.70794576,1};
				frequency = "1";
				volume = "(1-camPos)*grass*(Speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",0.70794576,1};
				frequency = "1";
				volume = "(1-camPos)*mud*(Speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",0.70794576,1};
				frequency = "1";
				volume = "(1-camPos)*gravel*(Speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",0.70794576,1};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(Speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",0.5011872,1};
				frequency = "1";
				volume = "(damper0 max 0.1)*(Speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",1,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive factor[-0.2, -0.3])*(Speed factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive factor[0.2, 0.3])*(Speed factor[10, 1])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive factor[0.15, 0.3])*(Speed factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive factor[-0.15, -0.3])*(Speed factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",1,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive factor[-0.2, -0.3])*(Speed factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive factor[0.2, 0.3])*(Speed factor[10, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive factor[0.15, 0.3])*(Speed factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive factor[-0.15, -0.3])*(Speed factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",1,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive factor[-0.2, -0.3])*(Speed factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive factor[0.2, 0.3])*(Speed factor[10, 1])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive factor[0.15, 0.3])*(Speed factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive factor[-0.15, -0.3])*(Speed factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",1,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive factor[-0.2, -0.3])*(Speed factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive factor[0.2, 0.3])*(Speed factor[10, 1])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive factor[0.15, 0.3])*(Speed factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive factor[-0.15, -0.3])*(Speed factor[0, 10])";
			};
			class RainExt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",1,1,100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int",1,1,100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
		thrustDelay = 0.2;
		brakeIdleSpeed = 1.78;
		maxSpeed = 90;
		fuelCapacity = 50;
		wheelCircumference = 3.805;
		waterLeakiness = 1;
		normalSpeedForwardCoef = 0.52;
		accelAidForceYOffset = -1.5;
		antiRollbarForceCoef = 24;
		antiRollbarForceLimit = 30;
		antiRollbarSpeedMin = 15;
		antiRollbarSpeedMax = 65;
		simulation = "carx";
		dampersBumpCoef = 4.5;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.3;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 65;
		enginePower = 2000;
		peakTorque = 6000;
		idleRpm = 600;
		redRpm = 4000;
		maxOmega = 241;
		minOmega = 50;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 2;
		dampingRateZeroThrottleClutchDisengaged = 0.05;
		memoryPointLMissile = "Rocket_1";
		memoryPointRMissile = "Rocket_2";
		torqueCurve[] = {{"(0/2300)","(0/2260)"},{"(1000/2300)","(1625/2260)"},{"(1400/2300)","(2100/2260)"},{"(1500/2300)","(2200/2260)"},{"(1550/2300)","(2260/2260)"},{"(1600/2300)","(2200/2260)"},{"(2300/2300)","(1700/2260)"},{"(4700/2300)","(0/2260)"}};
		changeGearMinEffectivity[] = {0.5,0.15,0.97,0.97,0.97,0.97,0.97,0.985};
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-4.84,"N",0,"D1",3.43,"D2",2.01,"D3",1.42,"D4",1,"D5",0.83,"D6",0.59};
			TransmissionRatios[] = {"High",8};
			AmphibiousRatios[] = {"R1",-10,"N",0,"D1",30};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		switchTime = 0.1;
		latency = 1.4;
		class Wheels
		{
			class L1
			{
				side = "left";
				suspTravelDirection[] = {0,-1,0};
				boneName = "wheel_1_1_damper";
				center = "wheel_1_1_center";
				boundary = "wheel_1_1_bound";
				steering = 1;
				width = 0.35;
				mass = 187.5;
				MOI = 60;
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				maxBrakeTorque = 45000;
				maxHandBrakeTorque = 0;
				suspForceAppPointOffset = "wheel_1_1_center";
				tireForceAppPointOffset = "wheel_1_1_center";
				maxCompression = 0.1125;
				maxDroop = 0.15;
				sprungMass = 3090;
				springStrength = 110000;
				springDamperRate = 27900;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class R1: L1
			{
				boneName = "wheel_2_1_damper";
				steering = 1;
				center = "wheel_2_1_center";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_center";
				tireForceAppPointOffset = "wheel_2_1_center";
				side = "right";
			};
			class L2: L1
			{
				boneName = "wheel_1_2_damper";
				steering = 1;
				center = "wheel_1_2_center";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_center";
				tireForceAppPointOffset = "wheel_1_2_center";
			};
			class L3: L1
			{
				boneName = "wheel_1_3_damper";
				steering = 0;
				center = "wheel_1_3_center";
				boundary = "wheel_1_3_bound";
				suspForceAppPointOffset = "wheel_1_3_center";
				tireForceAppPointOffset = "wheel_1_3_center";
			};
			class L4: L1
			{
				boneName = "wheel_1_4_damper";
				steering = 0;
				center = "wheel_1_4_center";
				boundary = "wheel_1_4_bound";
				maxHandBrakeTorque = 4000;
				suspForceAppPointOffset = "wheel_1_4_center";
				tireForceAppPointOffset = "wheel_1_4_center";
			};
			class L5: L1
			{
				boneName = "wheel_1_5_damper";
				steering = 0;
				center = "wheel_1_5_center";
				boundary = "wheel_1_5_bound";
				maxHandBrakeTorque = 4000;
				suspForceAppPointOffset = "wheel_1_5_center";
				tireForceAppPointOffset = "wheel_1_5_center";
			};
			class R2: R1
			{
				boneName = "wheel_2_2_damper";
				steering = 1;
				center = "wheel_2_2_center";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_center";
				tireForceAppPointOffset = "wheel_2_2_center";
			};
			class R3: R1
			{
				boneName = "wheel_2_3_damper";
				steering = 1;
				center = "wheel_2_3_center";
				boundary = "wheel_2_3_bound";
				suspForceAppPointOffset = "wheel_2_3_center";
				tireForceAppPointOffset = "wheel_2_3_center";
			};
			class R4: R1
			{
				boneName = "wheel_2_4_damper";
				steering = 0;
				center = "wheel_2_4_center";
				boundary = "wheel_2_4_bound";
				maxHandBrakeTorque = 4000;
				suspForceAppPointOffset = "wheel_2_4_center";
				tireForceAppPointOffset = "wheel_2_4_center";
			};
			class R5: R1
			{
				boneName = "wheel_2_5_damper";
				steering = 0;
				center = "wheel_2_5_center";
				boundary = "wheel_2_5_bound";
				maxHandBrakeTorque = 4000;
				suspForceAppPointOffset = "wheel_2_5_center";
				tireForceAppPointOffset = "wheel_2_5_center";
			};
		};
		memoryPointTaskMarker = "TaskMarker_1_pos";
		terrainCoef = 1.5;
		turnCoef = 2;
		canFloat = 1;
		waterAngularDampingCoef = 10;
		waterPPInVehicle = 0;
		waterResistanceCoef = 0.5;
		engineShiftY = -0.5;
		armor = 500;
		armorStructural = 5;
		armorLights = 0.1;
		crewExplosionProtection = 1;
		damageResistance = 0.0072;
		cost = 1000000;
		driverAction = "Driver_APC_Wheeled_02_rcws_F_out";
		driverInAction = "Driver_APC_Wheeled_02_rcws_F_in";
		cargoAction[] = {"passenger_apc_narrow_generic02_low","passenger_apc_narrow_generic01_low","passenger_apc_narrow_generic03","passenger_apc_generic03_low","passenger_apc_generic02","passenger_generic02_foldhands","passenger_apc_narrow_generic01_low","passenger_apc_narrow_generic02_low","passenger_apc_narrow_generic03","passenger_apc_generic03_low","passenger_apc_generic02"};
		getInAction = "GetInHigh";
		getOutAction = "GetOutHigh";
		cargoGetInAction[] = {"GetInAMV_cargo"};
		cargoGetOutAction[] = {"GetOutLow"};
		hideWeaponsCargo = 1;
		driverForceOptics = 1;
		driverOpticsModel = "\a3\weapons_f\reticle\Optics_Driver_01_F";
		memoryPointDriverOptics = "driverview";
		cargoIsCoDriver[] = {0};
		forceHideDriver = 0;
		class ViewOptics: ViewOptics
		{
			visionMode[] = {"Normal","NVG"};
			initFov = 0.85;
			minFov = 0.85;
			maxFov = 0.85;
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor = 2;
				material = -1;
				name = "hit_hull_point";
				passThrough = 0.4;
				visual = "zbytek";
				minimalHit = 0.1;
				explosionShielding = 0.5;
				radius = 0.3;
			};
			class HitEngine: HitEngine
			{
				armorComponent = "hit_engine";
				name = "hit_engine_point";
				armor = 2;
				material = -1;
				passThrough = 0.2;
				minimalHit = 0.1;
				explosionShielding = 0.4;
				radius = 0.3;
			};
			class HitFuel: HitFuel
			{
				armor = 2;
				material = -1;
				name = "hit_fuel_point";
				passThrough = 0.2;
				minimalHit = 0.1;
				explosionShielding = 0.4;
				radius = 0.3;
			};
			class HitSLAT_front_1
			{
				simulation = "Armor_SLAT";
				armorComponent = "cage_front_1_geo";
				name = "cage_front_1_point";
				armor = 0.4;
				minimalHit = 1.5;
				passThrough = 0;
				visual = "-";
				explosionShielding = 5;
				radius = 0.25;
			};
			class HitSLAT_front_2: HitSLAT_front_1
			{
				armorComponent = "cage_front_2_geo";
				name = "cage_front_2_point";
			};
			class HitSLAT_front_3: HitSLAT_front_1
			{
				armorComponent = "cage_front_3_geo";
				name = "cage_front_3_point";
			};
			class HitSLAT_front_4: HitSLAT_front_1
			{
				armorComponent = "cage_front_4_geo";
				name = "cage_front_4_point";
			};
			class HitSLAT_front_5: HitSLAT_front_1
			{
				armorComponent = "cage_front_5_geo";
				name = "cage_front_5_point";
			};
			class HitSLAT_Left_1: HitSLAT_front_1
			{
				armorComponent = "cage_left_1_geo";
				name = "cage_left_1_point";
			};
			class HitSLAT_Left_2: HitSLAT_front_1
			{
				armorComponent = "cage_left_2_geo";
				name = "cage_left_2_point";
			};
			class HitSLAT_Left_3: HitSLAT_front_1
			{
				armorComponent = "cage_left_3_geo";
				name = "cage_left_3_point";
			};
			class HitSLAT_Left_4: HitSLAT_front_1
			{
				armorComponent = "cage_left_4_geo";
				name = "cage_left_4_point";
			};
			class HitSLAT_Left_5: HitSLAT_front_1
			{
				armorComponent = "cage_left_5_geo";
				name = "cage_left_5_point";
			};
			class HitSLAT_Left_6: HitSLAT_front_1
			{
				armorComponent = "cage_left_6_geo";
				name = "cage_left_6_point";
			};
			class HitSLAT_Right_1: HitSLAT_front_1
			{
				armorComponent = "cage_Right_1_geo";
				name = "cage_Right_1_point";
			};
			class HitSLAT_Right_2: HitSLAT_front_1
			{
				armorComponent = "cage_Right_2_geo";
				name = "cage_Right_2_point";
			};
			class HitSLAT_Right_3: HitSLAT_front_1
			{
				armorComponent = "cage_Right_3_geo";
				name = "cage_Right_3_point";
			};
			class HitSLAT_Right_4: HitSLAT_front_1
			{
				armorComponent = "cage_Right_4_geo";
				name = "cage_Right_4_point";
			};
			class HitSLAT_Right_5: HitSLAT_front_1
			{
				armorComponent = "cage_Right_5_geo";
				name = "cage_Right_5_point";
			};
			class HitSLAT_Right_6: HitSLAT_front_1
			{
				armorComponent = "cage_Right_6_geo";
				name = "cage_Right_6_point";
			};
			class HitLFWheel: HitLFWheel
			{
				radius = 0.33;
				visual = "wheel_1_1_hide";
				armorComponent = "wheel_1_1_hide";
				armor = 2;
				minimalHit = 0.4;
				explosionShielding = 4;
				passThrough = 0;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				radius = 0.33;
				visual = "wheel_1_2_hide";
				armorComponent = "wheel_1_2_hide";
				armor = 2;
				minimalHit = 0.4;
				explosionShielding = 4;
				passThrough = 0;
			};
			class HitLMWheel: HitLMWheel
			{
				radius = 0.33;
				visual = "wheel_1_3_hide";
				armorComponent = "wheel_1_3_hide";
				armor = 2;
				minimalHit = 0.4;
				explosionShielding = 4;
				passThrough = 0;
			};
			class HitLBWheel: HitLBWheel
			{
				radius = 0.33;
				visual = "wheel_1_4_hide";
				armorComponent = "wheel_1_4_hide";
				armor = 2;
				minimalHit = 0.4;
				explosionShielding = 4;
				passThrough = 0;
			};
			class HitLB2Wheel: HitLBWheel
			{
				radius = 0.33;
				visual = "wheel_1_5_hide";
				armorComponent = "wheel_1_5_hide";
				armor = 2;
				minimalHit = 0.4;
				explosionShielding = 4;
				passThrough = 0;
			};
			class HitRFWheel: HitRFWheel
			{
				radius = 0.33;
				visual = "wheel_2_1_hide";
				armorComponent = "wheel_2_1_hide";
				armor = 2;
				minimalHit = 0.4;
				explosionShielding = 4;
				passThrough = 0;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				radius = 0.33;
				visual = "wheel_2_2_hide";
				armorComponent = "wheel_2_2_hide";
				armor = 2;
				minimalHit = 0.4;
				explosionShielding = 4;
				passThrough = 0;
			};
			class HitRMWheel: HitRMWheel
			{
				radius = 0.33;
				visual = "wheel_2_3_hide";
				armorComponent = "wheel_2_3_hide";
				armor = 2;
				minimalHit = 0.4;
				explosionShielding = 4;
				passThrough = 0;
			};
			class HitRBWheel: HitRBWheel
			{
				radius = 0.33;
				visual = "wheel_2_4_hide";
				armorComponent = "wheel_2_4_hide";
				armor = 2;
				minimalHit = 0.5;
				explosionShielding = 4;
				passThrough = 0;
			};
			class HitRB2Wheel: HitRBWheel
			{
				radius = 0.33;
				visual = "wheel_2_5_hide";
				armorComponent = "wheel_2_5_hide";
				armor = 2;
				minimalHit = 0.5;
				explosionShielding = 4;
				passThrough = 0;
			};
		};
		wheelDamageThreshold = 0.75;
		wheelDamageRadiusCoef = 0.75;
		weapons[] = {"TruckHorn"};
		magazines[] = {};
		smokeLauncherGrenadeCount = 18;
		smokeLauncherVelocity = 8;
		smokeLauncherOnTurret = 0;
		smokeLauncherAngle = 360;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner;
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						memoryPointGunnerOutOptics = "commanderview";
						memoryPointGunnerOptics = "commanderview";
						gunBeg = "Usti hlavne3";
						gunEnd = "Konec hlavne3";
						memoryPointGun = "usti hlavne3";
						selectionFireAnim = "zasleh2";
						minElev = -17;
						maxElev = 60;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						minCamElev = -90;
						maxCamElev = 90;
						weapons[] = {"SmokeLauncher","QS_127_APC_G","Laserdesignator_vehicle"};
						magazines[] = {"SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag","QS_127_99_500rnd_blue_M","QS_127_99_500rnd_blue_M","Laserbatteries"};
						soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",1,1,30};
						soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",1,1,30};
						canHideGunner = -1;
						inGunnerMayFire = 1;
						outGunnerMayFire = 0;
						viewGunnerInExternal = 1;
						viewGunnerShadow = 1;
						forceHideGunner = 1;
						gunnerOutForceOptics = 0;
						gunnerOutOpticsShowCursor = 0;
						gunnerAction = "commander_apcwheeled1_out";
						gunnerInAction = "commander_apcwheeled1_in";
						gunnerGetInAction = "GetInAMV_cargo";
						gunnerGetOutAction = "GetOutLow";
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel = "";
						gunnerOpticsEffect[] = {};
						personTurretAction = "vehicle_turnout_0";
						minOutElev = -10;
						maxOutElev = 15;
						initOutElev = 0;
						minOutTurn = -45;
						maxOutTurn = 90;
						initOutTurn = 0;
						class ViewGunner: ViewGunner
						{
							initAngleX = -5;
							initAngleY = 0;
							initFov = 0.9;
							minFov = 0.25;
							maxFov = 1.25;
							minAngleX = -65;
							maxAngleX = 85;
							minAngleY = -150;
							maxAngleY = 150;
							minMoveX = -0.075;
							maxMoveX = 0.075;
							minMoveY = -0.075;
							maxMoveY = 0.075;
							minMoveZ = -0.075;
							maxMoveZ = 0.1;
						};
						class ViewOptics: ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.31;
							minFov = 0.035;
							maxFov = 0.31;
							visionMode[] = {"Normal","TI"};
							thermalMode[] = {2,3};
						};
						class OpticsIn: Optics_Commander_01
						{
							class Wide: Wide{};
							class Medium: Medium{};
							class Narrow: Narrow{};
						};
						turretInfoType = "RscOptics_MBT_01_commander";
						showCrewAim = 1;
						startEngine = 0;
						class HitPoints
						{
							class HitComTurret
							{
								armor = 0.5;
								material = -1;
								name = "hit_com_turret_point";
								visual = "hit_com_turret_point";
								passThrough = 0;
								minimalHit = 0.1;
								explosionShielding = 0.4;
								radius = 0.25;
								isTurret = 1;
							};
							class HitComGun
							{
								armor = 0.5;
								material = -1;
								name = "hit_com_gun_point";
								visual = "hit_com_gun_point";
								passThrough = 0;
								minimalHit = 0.1;
								radius = 0.15;
								isGun = 1;
							};
						};
						stabilizedInAxes = 3;
						maxHorizontalRotSpeed = 1.8;
						maxVerticalRotSpeed = 1.8;
						gunnerHasFlares = 1;
					};
				};
				body = "mainTurret";
				gun = "mainGun";
				weapons[] = {};
				magazines[] = {};
				soundServo[] = {"A3\sounds_f\dummysound",0.01,1,30};
				commanding = 1;
				minElev = -8;
				initElev = 0;
				maxElev = 60;
				minCamElev = -90;
				maxCamElev = 90;
				gunnerAction = "mbt1_slot2_out";
				gunnerInAction = "mbt1_slot2_in";
				getInAction = "GetInHigh";
				getOutAction = "GetOutHigh";
				viewGunnerInExternal = 1;
				castGunnerShadow = 1;
				stabilizedInAxes = 3;
				startEngine = 0;
				gunnerForceOptics = 1;
				inGunnerMayFire = 1;
				outGunnerMayFire = 0;
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex = 2;
				memoryPointGunnerOptics = "gunnerview";
				selectionFireAnim = "zasleh2";
				isPersonTurret = 0;
				personTurretAction = "vehicle_turnout_0";
				minOutElev = -30;
				maxOutElev = 60;
				initOutElev = 0;
				minOutTurn = -160;
				maxOutTurn = 160;
				initOutTurn = 0;
				class ViewOptics: RCWSOptics
				{
					visionMode[] = {"Normal","TI"};
				};
				class OpticsIn: Optics_Gunner_APC_01
				{
					class Wide: Wide{};
					class Medium: Medium{};
					class Narrow: Narrow{};
				};
				turretInfoType = "RscOptics_APC_Wheeled_01_gunner";
				showCrewAim = 2;
				class HitPoints
				{
					class HitTurret
					{
						armor = 1.2;
						material = -1;
						name = "hit_main_turret_point";
						visual = "hit_main_turret_point";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.2;
						radius = 0.25;
						isTurret = 1;
					};
					class HitGun
					{
						armor = 0.90000004;
						material = -1;
						name = "hit_main_gun_point";
						visual = "hit_main_gun_point";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.4;
						radius = 0.25;
						isTurret = 1;
					};
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class HitTurret_src
			{
				source = "Hit";
				hitpoint = "HitTurret";
				raw = 1;
			};
			class HitComTurret_src
			{
				source = "Hit";
				hitpoint = "HitComTurret";
				raw = 1;
			};
			class HideTurret
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.001;
			};
			class HitEngine_src
			{
				source = "Hit";
				hitpoint = "HitEngine";
				raw = 1;
			};
			class HitFuel_src
			{
				source = "Hit";
				hitpoint = "HitFuel";
				raw = 1;
			};
			class HitHull_src
			{
				source = "Hit";
				hitpoint = "HitHull";
				raw = 1;
			};
			class HitMainGun_src
			{
				source = "Hit";
				hitpoint = "HitGun";
				raw = 1;
			};
			class recoil_source
			{
				source = "reload";
				weapon = "QS_APC_40mm_G";
			};
			class HitSLAT_front_1_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_front_1";
				raw = 1;
			};
			class HitSLAT_front_2_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_front_2";
				raw = 1;
			};
			class HitSLAT_front_3_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_front_3";
				raw = 1;
			};
			class HitSLAT_front_4_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_front_4";
				raw = 1;
			};
			class HitSLAT_front_5_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_front_5";
				raw = 1;
			};
			class HitSLAT_Left_1_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Left_1";
				raw = 1;
			};
			class HitSLAT_Left_2_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Left_2";
				raw = 1;
			};
			class HitSLAT_Left_3_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Left_3";
				raw = 1;
			};
			class HitSLAT_Left_4_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Left_4";
				raw = 1;
			};
			class HitSLAT_Left_5_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Left_5";
				raw = 1;
			};
			class HitSLAT_Left_6_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Left_6";
				raw = 1;
			};
			class HitSLAT_Right_1_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Right_1";
				raw = 1;
			};
			class HitSLAT_Right_2_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Right_2";
				raw = 1;
			};
			class HitSLAT_Right_3_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Right_3";
				raw = 1;
			};
			class HitSLAT_Right_4_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Right_4";
				raw = 1;
			};
			class HitSLAT_Right_5_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Right_5";
				raw = 1;
			};
			class HitSLAT_Right_6_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Right_6";
				raw = 1;
			};
			class HitLFWheel
			{
				source = "Hit";
				hitpoint = "HitLFWheel";
				raw = 1;
			};
			class HitRFWheel: HitLFWheel
			{
				hitpoint = "HitRFWheel";
			};
			class HitLF2Wheel: HitLFWheel
			{
				hitpoint = "HitLF2Wheel";
			};
			class HitRF2Wheel: HitLFWheel
			{
				hitpoint = "HitRF2Wheel";
			};
			class HitLBWheel: HitLFWheel
			{
				hitpoint = "HitLBWheel";
			};
			class HitRBWheel: HitLFWheel
			{
				hitpoint = "HitRBWheel";
			};
			class HitLMWheel: HitLFWheel
			{
				hitpoint = "HitLMWheel";
			};
			class HitRMWheel: HitLFWheel
			{
				hitpoint = "HitRMWheel";
			};
			class HitLB2Wheel: HitLFWheel
			{
				hitpoint = "HitLB2Wheel";
			};
			class HitRB2Wheel: HitLFWheel
			{
				hitpoint = "HitRB2Wheel";
			};
			class Missiles_revolving
			{
				source = "revolving";
				weapon = "QS_Rocket_SDR_F";
			};
			class Missiles_reloadMagazine: Missiles_revolving
			{
				source = "reloadMagazine";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_adds.rvmat","a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_adds_damage.rvmat","a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_adds_destruct.rvmat","a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_base.rvmat","a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_base_damage.rvmat","a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_base_destruct.rvmat","a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_tows.rvmat","a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_tows_damage.rvmat","a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_tows_destruct.rvmat","a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_int.rvmat","a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_int_damage.rvmat","a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_int_destruct.rvmat"};
		};
		viewCargoShadowDiff = 0.05;
		viewCargoShadowAmb = 0.5;
		class Exhausts
		{
			class Exhaust
			{
				position = "exhaust";
				direction = "exhaust_dir";
				effect = "ExhaustsEffectAMV";
			};
			class Exhaust1
			{
				position = "exhaust1";
				direction = "exhaust_dir";
				effect = "ExhaustsEffectAMV";
			};
		};
		engineStartSpeed = 5;
		class NVGMarkers
		{
			class NVGMarker01
			{
				name = "nvg_marker";
				color[] = {0.03,0.003,0.003,1};
				ambient[] = {0.003,0.0003,0.0003,1};
				brightness = 0.001;
				blinking = 1;
			};
		};
		explosionEffect = "FuelExplosionBig";
		engineEffectSpeed = 5;
		memoryPointsLeftEngineEffect = "EngineEffectL";
		memoryPointsRightEngineEffect = "EngineEffectR";
		class Reflectors
		{
			class Left
			{
				color[] = {1900,1800,1700};
				ambient[] = {5,5,5};
				position = "Light_L";
				direction = "Light_L_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class Right: Left
			{
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
			class Right2: Right
			{
				position = "light_R_flare";
				useFlare = 1;
			};
			class Left2: Left
			{
				position = "light_L_flare";
				useFlare = 1;
			};
			class Right3: Right2
			{
				position = "light_R_flare2";
				flareSize = 0.7;
				hitpoint = "Light_R2";
				selection = "Light_R2";
			};
			class Left3: Left2
			{
				position = "light_L_flare2";
				flareSize = 0.7;
				hitpoint = "Light_L2";
				selection = "Light_L2";
			};
		};
		aggregateReflectors[] = {{"Left","Left2","Left3","Right","Right2","Right3"}};
		class compartmentsLights
		{
			class Comp1
			{
				class Light1
				{
					color[] = {16,20,20};
					ambient[] = {5,5,5};
					coneFadeCoef = 20;
					intensity = 20;
					size = 0;
					useFlare = 0;
					flareSize = 0;
					flareMaxDistance = 0;
					dayLight = 0;
					blinking = 0;
					class Attenuation
					{
						start = 0;
						constant = 0;
						linear = 1;
						quadratic = 100;
						hardLimitStart = 1;
						hardLimitEnd = 3;
					};
					point = "light_interior1";
				};
				class Light2: Light1
				{
					point = "light_interior2";
				};
				class Light3: Light1
				{
					point = "light_interior3";
				};
			};
		};
		selectionFireAnim = "";
		transportSoldier = 10;
		showNVGCommander = 1;
		showNVGGunner = 1;
		showNVGDriver = 1;
		numberPhysicalWheels = 10;
		tas_canBlift = 1;
		tas_liftVars = "[[[[0,-2,-3.5]]], [0.4], [-0.3]]";
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass = "B_Parachute_02_F";
				parachuteHeightLimit = 5;
				canBeTransported = 1;
				dimensions[] = {"BBox_1_1_pos","BBox_1_2_pos"};
			};
		};
	};
	class QS_Bantha_F: QS_Bantha_B{};

	class QS_Bantha: QS_Bantha_F {
		class SimpleObject
		{
			eden = 1;
			animate[] = {{"damagehide",0},{"damagehidevez",0},{"damagehidehlaven",0},{"wheel_1_1",0},{"wheel_2_1",0},{"wheel_1_2",0},{"wheel_1_3",0},{"wheel_2_2",0},{"wheel_2_3",0},{"wheel_1_4",0},{"wheel_1_5",0},{"wheel_2_4",0},{"wheel_2_5",0},{"daylights",0},{"wheel_1_1_damper",0.48},{"wheel_2_1_damper",0.49},{"wheel_1_2_damper",0.49},{"wheel_1_3_damper",0.5},{"wheel_2_2_damper",0.49},{"wheel_2_3_damper",0.5},{"wheel_1_4_damper",0.51},{"wheel_1_5_damper",0.51},{"wheel_2_4_damper",0.57},{"wheel_2_5_damper",0.57},{"steering_1_1",0},{"steering_2_1",0},{"steering_1_2",0},{"steering_2_2",0},{"hatchdriver",0},{"mainturret",0},{"turretbase",0},{"maingun",0},{"obsturret",0},{"obsgun",0},{"damagehlaven",0},{"vrtulea",0},{"vrtuleb",0},{"poklop_gunner",0},{"poklop_commander",0},{"zasleh_rot",0},{"zasleh2_rot",81.64},{"zasleh_hide",0},{"reverse_light",1}};
			hide[] = {"zasleh2","zasleh1","light_l","light_r"};
			verticalOffset = 2.386;
			verticalOffsetWorld = -0.076;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};




		threat[] = {1,1,0.3};
		hiddenSelections[] = {"main","side","turret","transmission","wheels","inter"};
		hiddenSelectionsTextures[] = {"QS_Bantha_F\data\gar_1\camo1_co.paa","QS_Bantha_F\data\gar_1\camo2_co.paa","QS_Bantha_F\data\gar_1\camo3_co.paa","QS_Bantha_F\data\camo4_co.paa","QS_Bantha_F\data\camo5_co.paa","QS_Bantha_F\data\inter_co.paa"};
		class TextureSources
		{
			class gar_1
			{
				displayname = "[QS] Bantha (GAR-1)";
				author = "Quasar Studios";
				textures[] = {"QS_Bantha_F\data\gar_1\camo1_co.paa","QS_Bantha_F\data\gar_1\camo2_co.paa","QS_Bantha_F\data\gar_1\camo3_co.paa"};
			};
			class gar_2
			{
				displayname = "[QS] Bantha (GAR-2)";
				author = "Quasar Studios";
				textures[] = {"QS_Bantha_F\data\gar_2\2_camo1_co.paa","QS_Bantha_F\data\gar_2\2_camo2_co.paa","QS_Bantha_F\data\gar_2\2_camo3_co.paa"};
			};
			class 66th_1
			{
				displayname = "[QS] Bantha (66th-1)";
				author = "Quasar Studios";
				textures[] = {"QS_Bantha_F\data\66th_1\66th_camo1_co.paa","QS_Bantha_F\data\66th_1\66th_camo2_co.paa","QS_Bantha_F\data\66th_1\66th_camo3_co.paa"};
			};
			class 501st_1
			{
				displayname = "[QS] Bantha (501st-1)";
				author = "Quasar Studios";
				textures[] = {"QS_Bantha_F\data\501st_1\501st_camo1_co.paa","QS_Bantha_F\data\501st_1\501st_camo2_co.paa","QS_Bantha_F\data\501st_1\501st_camo3_co.paa"};
			};
			class 501st_2
			{
				displayname = "[QS] Bantha (501st-2)";
				author = "Quasar Studios";
				textures[] = {"QS_Bantha_F\data\501st_2\501st_camo1_co.paa","QS_Bantha_F\data\501st_2\501st_camo2_co.paa","QS_Bantha_F\data\501st_2\501st_camo3_co.paa"};
			};
			class sob_1
			{
				displayname = "[QS] Bantha (SOB-1)";
				author = "Quasar Studios";
				textures[] = {"QS_Bantha_F\data\sob_1\sob_camo1_co.paa","QS_Bantha_F\data\sob_1\sob_camo2_co.paa","QS_Bantha_F\data\sob_1\sob_camo3_co.paa"};
			};
			class sob_2
			{
				displayname = "[QS] Bantha (SOB-2)";
				author = "Quasar Studios";
				textures[] = {"QS_Bantha_F\data\sob_2\sob_camo1_co.paa","QS_Bantha_F\data\sob_2\sob_camo2_co.paa","QS_Bantha_F\data\sob_2\sob_camo3_co.paa"};
			};
		};
		textureList[] = {"gar_1",1,"gar_2",0,"66th_1",0,"501st_1",0,"501st_2",0,"sob_1",0,"sob_2",0};
		class EventHandlers: EventHandlers
		{
			fired = "[_this select 0,_this select 6,'missile_move','MissileBase'] call BIS_fnc_missileLaunchPositionFix; _this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
	};
};