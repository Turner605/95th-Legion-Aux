class CfgPatches {
	class AUX_95th_Weapons {
        author="95th Aux Team";
        name="AUX 95th Weapons";
		requiredAddons[]={
			"WBK_PhoenixTreal_FlamethrowerMOD", 
			"JLTS_weapons_Core",
			"JLTS_weapons_DC15X", "JLTS_weapons_DP23"
		};
		weapons[] = {};
		units[]={};
	};
};

// TODO:
// - Stuns
// - Grapple
// - Scopes?

// Ammo Ideas:
// - Scatter Stuns (DP23) Probably Not
// - Recon Dart - Sonar Round (DC15X)
// - EMP Round - One shot to take down shields or something idk
// - Hacking Dart - One shot to hack a target

//TODO:
// DW32S
// DC17A (Pistol)

// Westar - 3AS_WestarM5_F
// Westar GL - 3AS_WestarM5_GL
// DC15L - 3AS_DC15L_F
// DC15C GL - 3AS_DC15C_GL
// DC15C - 3AS_DC15C_F
// Z6 - JLTS_Z6
// EPL2 - JLTS_EPL2
// DC15S - JLTS_DC15S
// DC15A - JLTS_DC15A_plastic
// DC15A GL - JLTS_DC15A_ugl_plastic

class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;

class CfgAmmo {
	#include "Ammo\Definitions.hpp"
	// #include "Ammo\BX42.hpp" // Not Applicable
	#include "Ammo\BX42_Rocket_HE.hpp"
	#include "Ammo\Grappler.hpp"
};

class CfgWeapons {
	class AUX_95th_Stun_Muzzle;

	#include "Muzzles\Definitions.hpp"
	#include "Muzzles\BX42.hpp"

	#include "Weapons\Definitions.hpp"
	#include "Weapons\BX42.hpp"
};

class CfgMagazines {
	#include "Magazines\Definitions.hpp"
	#include "Magazines\BX42.hpp"
	#include "Magazines\Grappler.hpp"
	#include "Magazines\BX42_Rocket_HE.hpp"
};