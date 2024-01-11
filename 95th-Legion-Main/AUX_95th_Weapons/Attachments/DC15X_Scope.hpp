class AUX_95th_DC15X_Scope: JLTS_DC15X_scope {
	displayName = "[95th] DC15X Scope";
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\DC15X\data\DC15X_scope_co.paa"};
	thermalMode[] = {0};
	
	class ItemInfo: InventoryOpticsItem_Base_F {
		mass = 16;
		opticType = 2;
		weaponInfoType = "RscWeaponRangeZeroingFOV";
		optics = 1;
		modelOptics = "\A3\Weapons_F\acc\reticle_sniper_F";
		class OpticsModes {
			class Snip {
				opticsID = 1;
				opticsDisplayName = "WFOV";
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				opticsZoomMin = 0.01;
				opticsZoomMax = 0.042;
				opticsZoomInit = 0.042;
				discreteDistance[] = {300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
				discreteDistanceInitIndex = 2;
				distanceZoomMin = 300;
				distanceZoomMax = 2400;
				discretefov[] = {0.042,0.01};
				discreteInitIndex = 0;
				memoryPointCamera = "opticView";
				modelOptics[] = {"\A3\Weapons_F\acc\reticle_lrps_F","\A3\Weapons_F\acc\reticle_lrps_z_F"};
				visionMode[] = {"Normal","NVG","TI"};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				cameraDir = "";
			};

			// class Iron: Snip {
			// 	opticsID = 2;
			// 	distanceZoomMin = 100;
			// 	distanceZoomMax = 1000;
			// 	cameraDir = "";
			// 	useModelOptics = 0;
			// 	opticsPPEffects[] = {"",""};
			// 	opticsFlare = 0;
			// 	opticsDisablePeripherialVision = 0;
			// 	discreteDistance[] = {50};
			// 	discreteDistanceInitIndex = 0;
			// 	opticsZoomMin = 0.25;
			// 	opticsZoomMax = 1.25;
			// 	opticsZoomInit = 0.75;
			// 	memoryPointCamera = "eye";
			// 	visionMode[] = {};
			// };
		};
	};
};