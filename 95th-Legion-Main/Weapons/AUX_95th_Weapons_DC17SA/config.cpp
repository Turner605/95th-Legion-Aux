class CfgPatches {
	class AUX_95th_Weapons_DC17SA {
		author = "95th Legion";
		name = "AUX 95th Weapons DC17SA";
		requiredAddons[] = {"A3_data_F","A3_weapons_F","A3_characters_F","JLTS_weapons_Core"};
		weapons[] = {"AUX_95th_DC17SA","AUX_95th_DC17SA_fried","AUX_95th_DC17SA_flashed","AUX_95th_DC17SA_flashlight"};
		units[] = {};
		magazines[] = {};
	};
};

class CfgMagazines {
	class 16Rnd_9x21_Mag;
	class AUX_95th_DC17SA_mag: 16Rnd_9x21_Mag {
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		author = "95th Legion";
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		displayName = "$STR_JLTS_names_DC17SA_mag";
		displayNameShort = "$STR_JLTS_snames_EnergyCellLow";
		model = "\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
		picture = "\AUX_95th_Weapons_DC17SA\Data\ui\DC17SA_mag_ui_ca.paa";
		count = 20;
		ammo = "AUX_95th_Pistol_Blue_Ammo";
		descriptionShort = "$STR_JLTS_descs_DC17SA_mag";
		tracersEvery = 1;
	};
};

class Mode_SemiAuto;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons {
	class acc_flashlight_pistol;
	class AUX_95th_DC17SA_flashlight: acc_flashlight_pistol {
		author = "95th Legion";
		scope = 2;
		displayName = "$STR_JLTS_names_DC17SA_flash";
		picture = "\AUX_95th_Weapons_DC17SA\Data\ui\DC17SA_flash_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC17SA\DC17SA_flash.p3d";
	};
	class Pistol_Base_F;
	class hgun_P07_F: Pistol_Base_F {
		class WeaponSlotsInfo;
	};

	class AUX_95th_Stun_Muzzle;

	class AUX_95th_DC17SA: hgun_P07_F {
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "AUX_95th_DC17SA_fried";
		JLTS_repairTime = 20;
		JLTS_canHaveShield = 1;
		JLTS_shieldedWeapon = "AUX_95th_DC17SA_shield";
		author = "95th Legion";
		displayName = "[95th] DC17SA]";
		descriptionShort = "$STR_JLTS_descs_BlasterPistol";
		scope = 2;
		baseWeapon = "AUX_95th_DC17SA";
		picture = "\AUX_95th_Weapons_DC17SA\Data\ui\DC17SA_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC17SA\DC17SA.p3d";
		hiddenSelections[] = {"camo1","illum"};
		hiddenSelectionsTextures[] = {"\AUX_95th_Weapons_DC17SA\Data\DC17SA_co.paa"};
		hiddenSelectionsMaterials[] = {"","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		magazines[] = {"AUX_95th_DC17SA_mag"};
		magazineWell[] = {};
		fireLightDiffuse[] = {0,0,1};
		drySound[] = {"AUX_95th_Weapons_Shared\Sounds\weapon_dry.wss",5,1,10};
		muzzles[] = {"this","Stun"};
		class Stun: AUX_95th_Stun_Muzzle {
			reloadAction = "GestureReloadPistol";
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07",1,1,10};
		};
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
				begin1[] = {"AUX_95th_Weapons_DC17SA\Sounds\dc17sa_fire",3,0.9,1800};
				soundBegin[] = {"begin1",1};
			};
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.12;
			dispersion = 0.0029;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 20;
			class CowsSlot{};
			class PointerSlot: PointerSlot {
				compatibleItems[] = {"AUX_95th_DC17SA_flashlight"};
			};
			class MuzzleSlot: MuzzleSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconPosition[] = {0.24,0.35};
				iconScale = 0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot {
				compatibleItems[] = {};
			};
		};
	};

	class AUX_95th_DC17SA_flashed: AUX_95th_DC17SA {
		scope = 1;
		class LinkedItems {
			class LinkedItemsPointer {
				slot = "PointerSlot";
				item = "AUX_95th_DC17SA_flashlight";
			};
		};
	};

	class AUX_95th_DC17SA_fried: AUX_95th_DC17SA {
		JLTS_isFried = 1;
		JLTS_shieldedWeapon = "AUX_95th_DC17SA_shield_fried";
		baseWeapon = "AUX_95th_DC17SA_fried";
		displayName = "$STR_JLTS_names_DC17SAFried";
		descriptionShort = "$STR_JLTS_descs_BlasterFried";
		scope = 1;
		picture = "\AUX_95th_Weapons_DC17SA\Data\ui\DC17SA_fried_ui_ca.paa";
		magazines[] = {};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
		class Stun: Stun {
			displayName = "Stun mode (fried)";
			magazines[] = {};
			drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
		};
	};

	class AUX_95th_DC17SA_shield: AUX_95th_DC17SA {
		displayName = "$STR_JLTS_names_DC17SAShield";
		baseWeapon = "AUX_95th_DC17SA_shield";
		scope = 1;
		JLTS_isShielded = 1;
		JLTS_baseWeapon = "AUX_95th_DC17SA";
		JLTS_friedItem = "AUX_95th_DC17SA_shield_fried";
		model = "\MRC\JLTS\weapons\DC17SA\DC17SA_shielded.p3d";
		handAnim[] = {"OFP2_ManSkeleton","\AUX_95th_Weapons_DC17SA\Anims\DC17SA_shielded_handanim.rtm"};
		inertia = 0.8;
		recoil = "recoil_pdw";
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 110;
			class UnderBarrelSlot: UnderBarrelSlot {
				compatibleItems[] = {"JLTS_riot_shield_attachment","JLTS_riot_shield_212_attachment","JLTS_riot_shield_501_attachment","JLTS_riot_shield_101_attachment","JLTS_riot_shield_CG_attachment","JLTS_riot_shield_GD_attachment","JLTS_riot_shield_droid_attachment"};
			};
		};
	};

	class AUX_95th_DC17SA_shield_fried: AUX_95th_DC17SA_shield {
		JLTS_baseWeapon = "AUX_95th_DC17SA_fried";
		JLTS_isFried = 1;
		baseWeapon = "AUX_95th_DC17SA_shield_fried";
		displayName = "$STR_JLTS_names_DC17SAShieldFried";
		descriptionShort = "$STR_JLTS_descs_BlasterFried";
		scope = 1;
		picture = "\AUX_95th_Weapons_DC17SA\Data\ui\DC17SA_fried_ui_ca.paa";
		magazines[] = {};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
		class Stun: Stun {
			displayName = "$STR_JLTS_names_StunModeFried";
			magazines[] = {};
			drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
		};
	};
};