class AUX_95th_UGV: CCS_Manta_Base {
	editorPreview = "\CCS_Manta\Data\UI\E_Manta_F.jpg";
	displayName = "UGV TBD";
	faction="AUX_95th_Legion_Faction_Vehicles";
	editorSubcategory="AUX_95th_Legion_Vehicles_Category_Ground_Light";
	side = 1;
	textureList[] = {"Clone",1};
	hiddenSelectionsTextures[] = {"\AUX_95th_Vehicles\Data\UGV\UGV.paa"};
	class Turrets: Turrets {
		class MainTurret: NewTurret {
			class HitPoints {
				class HitTurret {
					armor = 1;
					material = -1;
					name = "otochlaven";
					visual = "otochlaven";
					passThrough = 0;
					explosionShielding = 0.4;
					minimalHit = 0.01;
					radius = 0.25;
				};
				class HitGun {
					armor = 1;
					material = -1;
					name = "otochlaven";
					visual = "otochlaven";
					passThrough = 0;
					explosionShielding = 0.4;
					minimalHit = 0.01;
					radius = 0.25;
				};
			};
			isCopilot = 0;
			dontCreateAI = 0;
			body = "mainTurret";
			gun = "mainGun";
			memoryPointGunnerOptics = "PiP1_pos";
			memoryPointGun = "machinegun";
			gunnerForceOptics = 1;
			gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_F.p3d";
			turretInfoType = "RscOptics_UGV_gunner";
			weapons[] = {"JLTS_Z6","manta_missiles"};
			magazines[] = {"JLTS_Z6_mag","JLTS_Z6_mag","8Rnd_Manta_missiles"};
			soundServo[] = {"A3\Sounds_F\vehicles\soft\UGV_01\Servo_UGV_gunner",0.31622776,1,30};
			soundServoVertical[] = {"A3\Sounds_F\vehicles\soft\UGV_01\Servo_UGV_gunner_vertical",0.31622776,1,30};
			minElev = -35;
			maxElev = 60;
			forceHideGunner = 1;
			outGunnerMayFire = 1;
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
			discreteDistanceInitIndex = 2;
			stabilizedInAxes = 3;
			gunnerInAction = "Disabled";
			gunnerAction = "Disabled";
			class ViewOptics: RCWSOptics {
				visionMode[] = {"Normal","TI"};
				initFov = 0.4667;
				maxFov = 0.4667;
				minFov = 0.035;
				directionStabilized = 1;
			};
		};
	};
};