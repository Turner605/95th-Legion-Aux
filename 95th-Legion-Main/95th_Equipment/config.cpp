class CfgPatches {
	class 95th_Equipment {
        author="95th Aux Team";
        name="95th Legion Equipment";
		requiredAddons[]={
			"WBK_PhoenixTreal_FlamethrowerMOD", 
			"ls_weapons"
		};
		weapons[] = {"NFL_Disc_Shield","NFL_Auto_Turret","NFL_MFD_Item",
			"AUX_95th_JLTS_DP23",
			"AUX_95th_JLTS_DC15X", "AUX_95th_JLTS_DC15X_scope"
		};
		units[]={};
	};
};

class CfgAmmo {
	class DSS_Ammo_Grenade_Dummy;

	class NFL_Ammo_Grenade_Medical_Shield: DSS_Ammo_Grenade_Dummy {
		model="3AS\3AS_Shield\SquadShield_Throwable.p3d";
		simulation="shotShell";
	};

	class JLTS_bullet_scatter_blue;
	class AUX_95th_JLTS_bullet_scatter_blue: JLTS_bullet_scatter_blue {
		simulation = "shotSpread";
	};
};

class cfgMagazines {
	class DSS_Magazine_Grenade_Dummy;

	class NFL_Magazine_Grenade_Medical_Shield: DSS_Magazine_Grenade_Dummy {
		displayName = "[95th] Medical Shield"; descriptionShort="Medical Squad Shield"; displayNameShort="Medic Shield";
		ammo = "NFL_Ammo_Grenade_Medical_Shield"; scope=2;
		NFL_Is_Medical_Shield = 1;
		mass=60; value=1; count=1;
		initSpeed=18; maxLeadSpeed=7; type=256;
		model="3as\3as_shield\SquadShield_Throwable.p3d";
	};

	class M2_Fuel_Tank;
	class 95th_FlameThrower_Fuel: M2_Fuel_Tank {
		descriptionShort="Fuel for the 95th Flamethrower";
		author="95th Aux Team";
		scope=2;
		mass=60;
		displayName="[95th] BX-42 Fuel";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		ammo="Flamethrower_Fuel";
	};

	class JLTS_DP23_mag;
	class AUX_95th_JLTS_DP23_mag: JLTS_DP23_mag {
		author = "95th Aux Team";
		displayName = "[95th] DP23 Mag";
		displayNameShort = "$STR_JLTS_snames_EnergyCellLow";
		descriptionShort = "$STR_JLTS_descs_DP23_mag";
		ammo = "AUX_95th_JLTS_bullet_scatter_blue";
	};

	class JLTS_DC15X_mag;
	class AUX_95th_JLTS_DC15X_mag: JLTS_DC15X_mag {
		displayName = "[95th] DC15X Mag";
		author = "95th Aux Team";
		count = 15;
	};
};

class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons {
	class arifle_MX_Base_F;
	class JLTS_DP23: arifle_MX_Base_F {
		class WeaponSlotsInfo;
	};

	class GrenadeLauncher;
	class Throw: GrenadeLauncher {
		class ThrowMuzzle;

		muzzles[]+={
			"NFL_Muzzle_Grenade_Medical_Shield"
		};

		class NFL_Muzzle_Grenade_Medical_Shield: ThrowMuzzle { magazines[] = {"NFL_Magazine_Grenade_Medical_Shield"}; };
	};

	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;

    class NFL_Disc_Shield: CBA_MiscItem {
		NFL_IsDiscShieldDevice = 1;
        author="95th Aux";
		displayName = "Disc Shield Generator";
		descriptionShort = "Disc Shield Generator";
		model = "\a3\structures_f_heli\items\electronics\tablet_01_f.p3d";
		picture = ""; //todo
		scope = 2;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 44;
        };
    };

	class NFL_Auto_Turret: CBA_MiscItem {
		NFL_IsAutoTurretDevice = 1;
        author="95th Aux";
		displayName = "Auto Turret Deployer";
		descriptionShort = "Auto Turret Deployer";
		model = "\a3\structures_f_heli\items\electronics\tablet_01_f.p3d";
		picture = ""; //todo
		scope = 2;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 44;
        };
    };

    class NFL_MFD_Item: CBA_MiscItem {
		DSS_IsCloakingDevice = 1;
		DSS_IsHackingDevice = 1;
		DSS_IsSupportDevice = 1;
		NFL_IsDiscShieldDevice = 1;
        author="95th Aux";
		displayName = "[95th] MFD";
		descriptionShort = "Multi Functional Device";
		model = "\a3\structures_f_heli\items\electronics\tablet_01_f.p3d";
		picture = ""; //todo
		scope = 2;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 44;
        };
    };

	class AUX_95th_JLTS_DP23: JLTS_DP23 {
		displayName = "[95th] DP-23";
		JLTS_friedItem = "AUX_95th_JLTS_DP23_fried";
		JLTS_canHaveShield = 1;
		JLTS_shieldedWeapon = "AUX_95th_JLTS_DP23_shield";
		author = "95th Aux mod";
		fireSpreadAngle = 1;
		magazines[] = {"AUX_95th_JLTS_DP23_mag"};
		class Single: Mode_SemiAuto {
			sounds[] = {"StandardSound"};
			class BaseSoundModeType {weaponSoundEffect = ""; closure1[] = {}; closure2[] = {}; soundClosure[] = {};};
			class StandardSound: BaseSoundModeType {weaponSoundEffect = ""; begin1[] = {"\MRC\JLTS\weapons\DP23\sounds\dp23_fire.wss",1,1,1800}; soundBegin[] = {"begin1",1};};
			reloadTime = 0.1; dispersion = 0.00073;
			minRange = 1; minRangeProbab = 0.5;
			midRange = 30; midRangeProbab = 0.7;
			maxRange = 60; maxRangeProbab = 0.3;
		};
	};

	class AUX_95th_JLTS_DP23_fried: AUX_95th_JLTS_DP23 {
		JLTS_isFried = 1;
		JLTS_shieldedWeapon = "AUX_95th_JLTS_DP23_shield_fried";
		baseWeapon = "AUX_95th_JLTS_DP23_fried";
		displayName = "$STR_JLTS_names_DP23Fried";
		descriptionShort = "$STR_JLTS_descs_BlasterFried";
		scope = 1;
		picture = "\MRC\JLTS\weapons\DP23\data\ui\DP23_fried_ui_ca.paa";
		muzzles[] = {"this"}; magazines[] = {};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
	};

	class AUX_95th_JLTS_DP23_shield: AUX_95th_JLTS_DP23 {
		displayName = "$STR_JLTS_names_DP23Shield";
		baseWeapon = "AUX_95th_JLTS_DP23_shield";
		scope = 1;
		JLTS_isShielded = 1;
		JLTS_baseWeapon = "AUX_95th_JLTS_DP23";
		JLTS_friedItem = "AUX_95th_JLTS_DP23_shield_fried";
		model = "\MRC\JLTS\weapons\DP23\DP23_shielded.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\DP23\data\DP23_co.paa","\95th_Equipment\Data\Shield\Default.paa"};
		handAnim[] = {"OFP2_ManSkeleton","\MRC\JLTS\weapons\DP23\anims\DP23_shielded_handanim.rtm"};
		inertia = 0.8;
		recoil = "recoil_pdw";
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 110;
			class UnderBarrelSlot: UnderBarrelSlot {
				compatibleItems[] = {"JLTS_riot_shield_attachment","JLTS_riot_shield_212_attachment","JLTS_riot_shield_501_attachment","JLTS_riot_shield_101_attachment","JLTS_riot_shield_CG_attachment","JLTS_riot_shield_GD_attachment","JLTS_riot_shield_droid_attachment"};
			};
		};
	};

	class AUX_95th_JLTS_DP23_shield_fried: AUX_95th_JLTS_DP23_shield {
		JLTS_baseWeapon = "AUX_95th_JLTS_DP23_fried";
		JLTS_isFried = 1;
		baseWeapon = "AUX_95th_JLTS_DP23_shield_fried";
		displayName = "$STR_JLTS_names_DP23ShieldFried";
		descriptionShort = "$STR_JLTS_descs_BlasterFried";
		scope = 1;
		picture = "\MRC\JLTS\weapons\DP23\data\ui\DP23_fried_ui_ca.paa";
		magazines[] = {};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
	};

	class JLTS_DC15X_scope;
	class AUX_95th_JLTS_DC15X_scope: JLTS_DC15X_scope {
		displayName = "[95th] DC15X Scope";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\DC15X\data\DC15X_scope_co.paa"};
		thermalMode[] = {0};
	};

	class JLTS_DC15X: arifle_MX_Base_F {
		class WeaponSlotsInfo;
		class GunParticles;
	};

	class AUX_95th_JLTS_DC15X: JLTS_DC15X {
		JLTS_friedItem = "AUX_95th_JLTS_DC15X_fried";
		displayName = "[95th] DC15X";
		author = "95th Aux mod";
		baseWeapon = "AUX_95th_JLTS_DC15X";
		magazines[] = {"JLTS_DC15X_mag"};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 92;
			class CowsSlot: CowsSlot {compatibleItems[] = {"AUX_95th_JLTS_DC15X_scope"}; iconPicture = "";};
			class MuzzleSlot: MuzzleSlot {compatibleItems[] = {};};
			class PointerSlot: PointerSlot {compatibleItems[] = {};};
			class UnderBarrelSlot: UnderBarrelSlot {compatibleItems[] = {};};
		};
	};

	class AUX_95th_JLTS_DC15X_fried: AUX_95th_JLTS_DC15X {
		baseWeapon = "AUX_95th_JLTS_DC15X_fried";
		displayName = "$STR_JLTS_names_DC15XFried";
		descriptionShort = "$STR_JLTS_descs_BlasterFried";
		scope = 1;
		picture = "\MRC\JLTS\weapons\DC15X\data\ui\DC15X_fried_ui_ca.paa";
		muzzles[] = {"this"};
		magazines[] = {};
		JLTS_isFried = 1;
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
	};

	class 41_Flammenwerfer_02_F;
	class WeaponSlotsInfo;
	class 95th_FlameThrower: 41_Flammenwerfer_02_F {
		displayName="[95th] BX-42 Flamethrower";
		author="95th Aux Team";
		WBK_BurnEm_IsFlamethrower = "True";
		WBK_BurnEm_RequiredBackpack = "95th_FlameThrower_Backpack";
		WBK_BurnEm_FlamethrowerSoundArray = ['flamewerfer_start','flamewerfer_looping',4.8,'flamewerfer_end'];
		WBK_BurnEm_FlamethrowerParticlePos = [[-0.73,0.35,-0.3],'leftHand'];
		WBK_BurnEm_FlamethrowerDistance = 18.5;
		scope=2;
		model="\3AS\3AS_Weapons\X42\BX42.p3d";
		picture="\3AS\3AS_Weapons\X42\Data\BTX42_ui_ca.paa";
		UiPicture="\A3\Weapons_F\data\UI\icon_regular_CA.paa";
		weaponInfoType="RscWeaponZeroing";
		magazines[]={"95th_FlameThrower_Fuel"};
		muzzles[]={"this"};
		class WeaponSlotsInfo: WeaponSlotsInfo{mass=40;};
		handAnim[]= {"OFP2_ManSkeleton", "3AS\3AS_Weapons\Data\Anim\BX42.rtm" };
	};
};

class CfgFunctions {
	class NFA {
		class Equipment {
			class handleDiscPressed {file = "\95th_Equipment\Scripts\handleDiscPressed.sqf";};
			class handleDiscTriggered {file = "\95th_Equipment\Scripts\handleDiscTriggered.sqf";};

			class handleMedicalShield {file = "\95th_Equipment\Scripts\Medical Squad Shield\handleMedicalShield.sqf";};
			class handleMedicalShieldBandages {file = "\95th_Equipment\Scripts\Medical Squad Shield\handleMedicalShieldBandages.sqf";};

			class handleAutoTurretPressed {file = "\95th_Equipment\Scripts\Engineer Auto Turret\handleAutoTurretPressed.sqf";};
			class handleAutoTurretTriggered {file = "\95th_Equipment\Scripts\Engineer Auto Turret\handleAutoTurretTriggered.sqf";};
			class handleAutoTurretEnd {file = "\95th_Equipment\Scripts\Engineer Auto Turret\handleAutoTurretEnd.sqf";};
		};
	};
};

class Extended_PreInit_EventHandlers {
	class NFL_Equipment_PreInit {
		init="call compile preprocessFileLineNumbers '\95th_Equipment\Init\XEH_preInit.sqf'";
	};
};

class Extended_PostInit_EventHandlers {
	class NFL_Equipment_PostInit {
		init="call compile preprocessFileLineNumbers '\95th_Equipment\Init\XEH_postInit.sqf'";
	};
};

class CfgUserActions {
	class NFL_Disc_Shield {
		displayName = "Personal Disc Shield";
		tooltip = "Personal Disc Shield";
		onActivate = "_this call NFA_fnc_handleDiscPressed";
		modifierBlocking = 1;
	};

	class NFL_Auto_Turret {
		displayName = "Deploy Auto Turret";
		tooltip = "Bind to deploy the auto turret";
		onActivate = "_this call NFA_fnc_handleAutoTurretPressed";
		modifierBlocking = 1;
	};
};

class CfgDefaultKeysPresets {
	class Arma2 {
		class Mappings {
			NFL_Disc_Shield[] = {0x25};
			NFL_Auto_Turret[] = {0x25};
		};
	};
};

class UserActionGroups {
	class NFL_Equipment {
		name = "95th Legion";
		isAddon = 1;
		group[] = {"NFL_Disc_Shield","NFL_Auto_Turret"};
	};
};
