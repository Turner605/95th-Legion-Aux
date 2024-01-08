aiDispersionCoefX = 2;
aiDispersionCoefY = 2;
autoFire = 0;
ballisticsComputer = 0;
discreteDistance[] = {50};
discreteDistanceInitIndex = 0;
displayName = "Equipment";
drySound[] = {"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",5,1,10};
fireSpreadAngle = 0.95;
magazines[] = {"AUX_95th_Grappler_Mag"};
magazineWell[] = {};
maxZeroing = 50;
reloadAction = "GestureReloadMX";
reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\Reload_Mx",1,1,10};
modes[] = {"Single"};
class Single: Mode_SemiAuto {
	sounds[] = {"StandardSound"};
	class BaseSoundModeType {
		weaponSoundEffect = "";
		closure1[] = {};
		closure2[] = {};
		soundClosure[] = {};
	};
	class StandardSound: BaseSoundModeType {
		weaponSoundEffect = "";
		begin1[] = {"MRC\JLTS\weapons\Core\sounds\stun",5,1.5,1800}; //TODO
		soundBegin[] = {"begin1",1};
	};
	recoil = "recoil_pistol_light";
	recoilProne = "recoil_prone_pistol_light";
	reloadTime = 0.5;
	dispersion = 0.0029;
	minRange = 5; minRangeProbab = 0.3;
	midRange = 25; midRangeProbab = 0.6;
	maxRange = 50; maxRangeProbab = 0.1;
	aiRateOfFire = 2; aiRateOfFireDistance = 25;
};