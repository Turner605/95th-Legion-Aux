class CfgPatches {
	class 95th_Legion_Vehicles {
        author="95th Aux Team";
		scope=2;
		scopecurator=2;
        name="95th Legion Vehicles";
		requiredAddons[]= { "3AS_SaberTank", "3AS_LAAT" };
		units[]={
			"95th_TX_130",
			"95th_TX_130_Shield",

			"95th_RX200"
		};
	};
};

class CfgVehicles {
	//############################################################### Sabers ###############################################################
	class 3as_saber_m1;
	class 3as_saber_m1Recon;

	class 95th_TX_130 : 3as_saber_m1 {
		author="95th Aux"; displayname="95th TX-130";
        crew = "95th_Rifleman_Unit_Trooper"; faction="95th_Legion_Faction_Clones";
		hiddenSelectionsTextures[]={"\95th_Vehicles\Data\Saber\Hull.paa", "\95th_Vehicles\Data\Saber\Weapons.paa"};
		class ACE_Cargo {class Cargo {class track {type = "ACE_Track"; amount = 2;};};}; ace_cargo_space = 26;
	};

	class 95th_TX_130_Shield : 3as_saber_m1Recon {
		author="95th Aux"; displayname="95th TX-130 (Shield)";
        crew = "95th_Rifleman_Unit_Trooper"; faction="95th_Legion_Faction_Clones";
		hiddenSelectionsTextures[]={"\95th_Vehicles\Data\Saber\Hull.paa", "\95th_Vehicles\Data\Saber\Weapons.paa"};
		class ACE_Cargo {class Cargo {class track {type = "ACE_Track"; amount = 2;};};}; ace_cargo_space = 26;
		class UserActions {
			class ToggleTXShield {
				priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
				displayName = "Toggle Shield";
				statement = "[this, player] spawn NFA_fnc_handleToggleTXShield;"; 
			};
		};
	};

	//############################################################### RX200 ###############################################################
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

	class 95th_RX200 : 3AS_RX200_Base {
		author="95th Aux";
		scopecurator=2;
		scope = 2;
        crew = "95th_Rifleman_Unit_Trooper";
		faction="95th_Legion_Faction_Clones";
		displayname="95th RX200";
		ace_cargo_space = 26;
		tas_canBlift=1;
		tas_liftVars="[[[[0, -4, -8]]], [0.1], [-0.5]]";
		hiddenSelectionsTextures[]={"\95th_Vehicles\Data\RX200\RX200.paa"};
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
	};

	class 3as_Big_Box_2_prop;
	class AUX_95th_AV7_Box: 3as_Big_Box_2_prop {
		author="95th Aux Team";
		faction="95th_Legion_Faction_Clones";
		tas_canBlift=1;
		tas_liftVars="[[[[0, -4, -8]]], [0.1], [-0.5]]";
	};
}; 

class CfgFunctions {
	class NFA {
		class Vehicles {
			class handleLAATRespawnToggle {file = "\95th_Vehicles\Scripts\handleLAATRespawnToggle.sqf";};
			class handleToggleTXShield {file = "\95th_Vehicles\Scripts\TXShield\handleToggleTXShield.sqf";};
			class handleTXShieldInit {file = "\95th_Vehicles\Scripts\TXShield\handleTXShieldInit.sqf";};
			class handleTXRemoved {file = "\95th_Vehicles\Scripts\TXShield\handleTXRemoved.sqf";};
			class handleTXShieldDamage {file = "\95th_Vehicles\Scripts\TXShield\handleTXShieldDamage.sqf";};
			class TXShieldOffAnimation {file = "\95th_Vehicles\Scripts\TXShield\TXShieldOffAnimation.sqf";};

			class handleLoadResupplyBomb {file = "\95th_Vehicles\Scripts\Resupply Bomb\handleLoadResupplyBomb.sqf";};
			class handleResupplyBombDetonated {file = "\95th_Vehicles\Scripts\Resupply Bomb\handleResupplyBombDetonated.sqf";};
			class checkIsNearResupplyPad {file = "\95th_Vehicles\Scripts\Resupply Bomb\checkIsNearResupplyPad.sqf";};

			class handleLAATInit {file = "\95th_Vehicles\Init\LAAT\handleLAATInit.sqf";};
		};
	};
};

class Extended_InitPost_EventHandlers {	
	class 95th_TX_130_Shield {class 95th_TX_130_Shield_Init {onRespawn="true";serverInit="[_this select 0] call NFA_fnc_handleTXShieldInit;";};};
};
