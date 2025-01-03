class AUX_95th_RX200 : 3AS_RX200_Base {
	author="95th Aux Team";
	scopecurator=2;
	scope = 2;
	crew = "AUX_95th_Unit_P1_Basic_Trooper";
	faction="AUX_95th_Legion_Faction_Vehicles";
	editorSubcategory="AUX_95th_Legion_Vehicles_Category_Ground_Heavy";
	displayname="RX200";
	ace_cargo_space = 26;
	tas_canBlift=1;
	tas_liftVars="[[[[0, -4, -8]]], [0.1], [-0.5]]";
	AUX_95th_Strafing_Available=1;
	hiddenSelectionsTextures[]={"\AUX_95th_Vehicles_Depricated\Data\RX200\RX200.paa"};
	class ACE_Cargo {
		class Cargo {
			class track {
				type = "ACE_Track";
				amount = 2;
			};
		};
	};
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			class Turrets {};
			memoryPointGun="laser_l_chamber";
			gunEnd="laser_l_chamber"; gunBeg="laser_l_muzzle";
			weapons[]= { "3AS_RX_ParticleBeamCannon" };
			magazines[]= { "3AS_Laser_Battery_RX_F", "3AS_Laser_Battery_RX_F" };
			memoryPointLRocket="L raketa"; memoryPointRRocket="P raketa";
			missileBeg="missleEnd"; missileEnd="missleBeg";
			minElev=-5; maxElev=70; initElev=5;
			soundServo[]= { "A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner", 0.56234133, 1, 50 };
			soundServoVertical[]= { "A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical", 0.56234133, 1, 50 };
			startEngine=0; showCrewAim=2; stabilizedInAxes=3; maxHorizontalRotSpeed=0.55000001; maxVerticalRotSpeed=0.55000001;
			turretInfoType="RscWeaponRangeZeroing";
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
			discreteDistanceInitIndex=2; memoryPointGunnerOptics="gunnerview"; 
			gunnerOutOpticsModel=""; gunnerOutOpticsEffect[]={}; gunnerOpticsEffect[]={}; gunnerForceOptics=1;
			class OpticsIn: Optics_Gunner_APC_01 {
				class Wide: Wide {gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_w_F.p3d"; gunnerOpticsEffect[]={};};
				class Medium: Medium{gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_m_F.p3d";};
				class Narrow: Narrow{gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_n_F.p3d";};
			};
			gunnerAction="mbt2_slot2a_out"; gunnerInAction="mbt2_slot2a_in"; gunnerGetInAction="GetInLow"; gunnerGetOutAction="GetOutLow"; forceHideGunner=1;
			inGunnerMayFire=1; viewGunnerInExternal=1;
			class HitPoints {
				class HitTurret { armor=0.80000001; material=-1; name="vez"; visual="vez"; passThrough=0; minimalHit=0.02; explosionShielding=0.30000001; radius=0.2; };
				class HitGun {armor=0.30000001; material=-1; name="zbran"; visual=""; passThrough=0; minimalHit=0; explosionShielding=1; radius=0.25; };
			};
			class Components {
				class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner {
					class Components: components {
						class SensorDisplay { componentType="SensorsDisplayComponent"; range[]={4000,300,2000,1000}; resource="RscCustomInfoSensors"; };
					};
				};
				class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner {
					defaultDisplay="SensorDisplay";
					class Components: components {
						class SensorDisplay { componentType="SensorsDisplayComponent"; range[]={4000,300,2000,1000}; resource="RscCustomInfoSensors"; };
					};
				};
			};
		};
	};
	#include "\z\AUX_95th\addons\main\inventories\vehicleInventory.hpp"
};