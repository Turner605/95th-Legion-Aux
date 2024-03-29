class CfgPatches {
	class AUX_95th_Weapons {
        author="95th Aux Team";
        name="AUX 95th Weapons";
		requiredAddons[]={
			"WBK_PhoenixTreal_FlamethrowerMOD", 
			"JLTS_weapons_Core",
			"JLTS_weapons_DC15X", "JLTS_weapons_DP23"
		};
		weapons[] = {
			"AUX_95th_DC15X", "AUX_95th_DC15X_Scope",
			"AUX_95th_DP23",
		};
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
// DC15A
// DC15S
// DW32S
// DC17A (Pistol)
// DC15L
// Westar
// DC15C
// DC15C_GL
// Westar_GL

class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;

class CfgAmmo {
	#include "Ammo\Definitions.hpp"
	#include "Ammo\DC15X.hpp"
	#include "Ammo\DP23.hpp"
	// #include "Ammo\BX42.hpp" // Not Applicable
	#include "Ammo\Grappler.hpp"
};

class CfgWeapons {
	#include "Muzzles\Definitions.hpp"
	#include "Muzzles\Stuns.hpp"
	#include "Muzzles\DC15X.hpp"
	#include "Muzzles\DP23.hpp"

	#include "Weapons\Definitions.hpp"
	#include "Weapons\DC15X.hpp"
	#include "Weapons\DP23.hpp"
	#include "Weapons\BX42.hpp"

	#include "Attachments\Definitions.hpp"
	#include "Attachments\DC15X_Scope.hpp"
};

class CfgMagazines {
	#include "Magazines\Definitions.hpp"
	#include "Magazines\DC15X.hpp"
	#include "Magazines\DP23.hpp"
	#include "Magazines\BX42.hpp"
	#include "Magazines\Stuns.hpp"
	#include "Magazines\Grappler.hpp"
};