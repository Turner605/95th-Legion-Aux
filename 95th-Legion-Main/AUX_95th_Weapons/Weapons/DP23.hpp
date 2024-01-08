class AUX_95th_DP23: JLTS_DP23 {
	displayName = "[95th] DP-23";
	JLTS_friedItem = "AUX_95th_DP23_fried";
	JLTS_canHaveShield = 1;
	JLTS_shieldedWeapon = "AUX_95th_DP23_shield";
	author = "95th Aux mod";
	fireSpreadAngle = 1;
	muzzles[] = {"this","Stun"};
	magazines[] = {"AUX_95th_DP23_Mag"};
	class Stun: AUX_95th_Stun_Muzzle{};
	class Single: Mode_SemiAuto {
		sounds[] = {"StandardSound"};
		class BaseSoundModeType {weaponSoundEffect = ""; closure1[] = {}; closure2[] = {}; soundClosure[] = {};};
		class StandardSound: BaseSoundModeType {weaponSoundEffect = ""; begin1[] = {"\MRC\JLTS\weapons\DP23\sounds\dp23_fire.wss",1,1,1800}; soundBegin[] = {"begin1",1};};
		reloadTime = 0.3; dispersion = 0.00073;
		minRange = 1; minRangeProbab = 0.5;
		midRange = 30; midRangeProbab = 0.7;
		maxRange = 60; maxRangeProbab = 0.3;
	};
};

class AUX_95th_DP23_fried: AUX_95th_DP23 {
	JLTS_isFried = 1;
	JLTS_shieldedWeapon = "AUX_95th_DP23_shield_fried";
	baseWeapon = "AUX_95th_DP23_fried";
	displayName = "$STR_JLTS_names_DP23Fried";
	descriptionShort = "$STR_JLTS_descs_BlasterFried";
	scope = 1;
	picture = "\MRC\JLTS\weapons\DP23\data\ui\DP23_fried_ui_ca.paa";
	muzzles[] = {"this"}; magazines[] = {};
	drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
};

class AUX_95th_DP23_shield: AUX_95th_DP23 {
	displayName = "$STR_JLTS_names_DP23Shield";
	baseWeapon = "AUX_95th_DP23_shield";
	scope = 1;
	JLTS_isShielded = 1;
	JLTS_baseWeapon = "AUX_95th_DP23";
	JLTS_friedItem = "AUX_95th_DP23_shield_fried";
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

class AUX_95th_DP23_shield_fried: AUX_95th_DP23_shield {
	JLTS_baseWeapon = "AUX_95th_DP23_fried";
	JLTS_isFried = 1;
	baseWeapon = "AUX_95th_DP23_shield_fried";
	displayName = "$STR_JLTS_names_DP23ShieldFried";
	descriptionShort = "$STR_JLTS_descs_BlasterFried";
	scope = 1;
	picture = "\MRC\JLTS\weapons\DP23\data\ui\DP23_fried_ui_ca.paa";
	magazines[] = {};
	drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
};