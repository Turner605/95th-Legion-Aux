class AUX_95th_DC15X: JLTS_DC15X {
	JLTS_friedItem = "AUX_95th_DC15X_fried";
	displayName = "[95th] DC15X";
	author = "95th Aux mod";
	baseWeapon = "AUX_95th_DC15X";
	muzzles[] = {"this","Stun","Equipment"};
	magazines[] = {"AUX_95th_DC15X_Mag"};
	class Stun: AUX_95th_Stun_Muzzle{};
	class Equipment: AUX_95th_DC15X_Muzzle{};

	class WeaponSlotsInfo: WeaponSlotsInfo {
		mass = 92;
		class CowsSlot: CowsSlot {compatibleItems[] = {"AUX_95th_DC15X_Scope"}; iconPicture = "";};
		class MuzzleSlot: MuzzleSlot {compatibleItems[] = {};};
		class PointerSlot: PointerSlot {
			compatibleItems[] = {};
			linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
			iconPosition[] = {0.24,0.35};
			iconScale = 0.2;
		};
		class UnderBarrelSlot: UnderBarrelSlot {compatibleItems[] = {};};
	};
};

class AUX_95th_DC15X_fried: AUX_95th_DC15X {
	baseWeapon = "AUX_95th_DC15X_fried";
	displayName = "$STR_JLTS_names_DC15XFried";
	descriptionShort = "$STR_JLTS_descs_BlasterFried";
	scope = 1;
	picture = "\MRC\JLTS\weapons\DC15X\data\ui\DC15X_fried_ui_ca.paa";
	muzzles[] = {"this"};
	magazines[] = {};
	JLTS_isFried = 1;
	drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
};