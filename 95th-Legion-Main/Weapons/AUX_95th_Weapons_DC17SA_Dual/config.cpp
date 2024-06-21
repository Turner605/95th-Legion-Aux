class CfgPatches {
	class AUX_95th_Weapons_DC17SA_Dual {
		author = "95th Legion";
		name = "AUX 95th Weapons DC17SA Dual";
		requiredAddons[] = {"A3_data_F","A3_weapons_F","A3_characters_F","JLTS_weapons_Core","3AS_Weapons"};
		weapons[] = {"AUX_95th_DC17SA_Dual"};
		units[] = {};
		magazines[] = {};
	};
};

class CfgRecoils {
	class recoil_default;
	class AUX_95th_Recoil_Pistol_Dual: recoil_default {
		kickBack[] = {0.01,0.02};
		muzzleOuter[] = {0.1,0.4,0.2,0.2};
		temporary = 0.005;
	};
};

class CfgMagazines {
	class 16Rnd_9x21_Mag;
	class AUX_95th_DC17SA_Dual_Mag: 16Rnd_9x21_Mag {
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		author = "95th Legion";
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\AUX_95th_Weapons_Shared\Data\ui\Pistol_Mag.paa";
		model = "\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
		count = 50;
		displayName = "Dual DC17SA Mag";
		displayNameShort = "Normal Energy";
		descriptionShort = "DC17SA Dual Pistol Cells";
		ammo = "AUX_95th_Pistol_Blue_Ammo";
		tracersEvery = 1;
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons {
	class Pistol;
	class Pistol_Base_F: Pistol {
		class WeaponSlotsInfo;
		class GunParticles;
	};

	class AUX_95th_Stun_Muzzle_Rifle;

	class AUX_95th_DC17SA_Base_F: Pistol_Base_F {
		author = "95th Legion";
		magazines[] = {"AUX_95th_Universal_Pistol_Mag"};
		drySound[] = {"AUX_95th_Weapons_Shared\Sounds\weapon_dry.wss",0.39810717,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07",1,1,10};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto {
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType {
				soundSetShot[] = {"AUX_95th_Pistol_Shot_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = {"AUX_95th_Pistol_Shot_SoundSet"};
			};
			recoil = "recoil_pistol_heavy";
			recoilProne = "recoil_prone_pistol_heavy";
			reloadTime = 0.1;
			dispersion = 0.00399;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		inertia = 0.3;
		aimTransitionSpeed = 1.5;
		dexterity = 1.7;
		fireLightDiffuse[] = {7,110,176};
		fireLightIntensity = 0.02;
		flashSize = 0.1;
		initSpeed = -1;
		recoil = "recoil_pistol_4five";
		maxZeroing = 100;
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 30;
			holsterScale = 0.95;
			class CowsSlot: CowsSlot {
				compatibleItems[] = {};
				iconPosition[] = {0.6,0.27};
				iconScale = 0.15;
			};
			class MuzzleSlot: MuzzleSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconPosition[] = {0.24,0.35};
				iconScale = 0.2;
			};
			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"acc_flashlight_pistol"};
				iconPosition[] = {0.47,0.55};
				iconScale = 0.3;
			};
		};
	};

	class AUX_95th_DC17SA_Dual: AUX_95th_DC17SA_Base_F {
		scope = 2;
		displayName = "[95th] Dual DC-17S Sidearm";
		model = "3AS\3AS_Weapons\DC17S\3AS_DC17S_Dual_F.p3d";
		picture = "\AUX_95th_Weapons_DC17SA_Dual\Data\ui\3as_dc17s_d.paa";
		weaponInfoType = "RscWeaponZeroing";
		reloadAction = "AUX_95th_GestureReloadDualDC17S";
		recoil = "AUX_95th_Recoil_Pistol_Dual";
		cursor = "";
		cursorAim = "gl";
		swayModifier = 0.1;
		swayDecaySpeed = 2;
		handAnim[] = {"OFP2_ManSkeleton","AUX_95th_Weapons_DC17SA_Dual\Anims\attempt1.rtm"};
		magazines[] = {"AUX_95th_Universal_Pistol_Mag", "AUX_95th_DC17SA_Dual_Mag"};
		magazineWell[] = {};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 60;
		};
		muzzles[] = {"this","Stun"};
		class Stun: AUX_95th_Stun_Muzzle_Rifle {
			reloadAction = "AUX_95th_GestureReloadDualDC17S";
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07",1,1,10};
		};
	};
};

class CfgMovesBasic {
	class DefaultDie;
	class ManActions {
		AUX_95th_GestureReloadDualDC17S = "AUX_95th_GestureReloadDualDC17S";
	};
	class Actions {
		class NoActions: ManActions {
			AUX_95th_GestureReloadDualDC17S[] = {"AUX_95th_GestureReloadDualDC17S","Gesture"};
		};
	};
};

class CfgGesturesMale {
	class Default;
	class States {
		class AUX_95th_GestureReloadDualDC17S: Default {
			file = "AUX_95th_Weapons_DC17SA_Dual\Anims\reloadanim.rtm";
			looped = 0;
			speed = 0.8;
			mask = "handsWeapon_pst";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {0.012,1,0.041,0,0.941,0,0.982,1};
		};
	};
};
