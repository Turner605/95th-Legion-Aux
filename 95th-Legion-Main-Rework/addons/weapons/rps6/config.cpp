#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {"AUX_95th_RPS6_HP", "3AS_RPS6_F"};
        magazines[] = {"AUX_95th_MK40_AT", "AUX_95th_MK41_AT", "AUX_95th_MK42_HE"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_weapons_shared"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgMagazines {
    class Default;
	class CA_Magazine: Default{};
	class CA_LauncherMagazine: CA_Magazine{};
    class 3AS_MK40_AT: CA_LauncherMagazine {};
    class 3AS_MK41_AT: CA_LauncherMagazine {};
    class 3AS_MK42_HE: 3AS_MK41_AT {};

    class AUX_95th_MK40_AT: 3AS_MK40_AT {
		author = "95th Aux Team";
		displayName = "[95th] MK40 AT Rocket";
	};

    class AUX_95th_MK41_AT: 3AS_MK41_AT {
		author = "95th Aux Team";
		displayName = "[95th] MK41 AT Rocket";
		mass = 30;
	};

	class AUX_95th_MK42_HE: 3AS_MK42_HE {
		author = "95th Aux Team";
		displayName = "[95th] MK42 HE Rocket";
		mass = 20;
	};
};

class CBA_DisposableLaunchers {
	AUX_95th_RPS6_Base[] = {"AUX_95th_RPS6_F","AUX_95th_RPS6_Used"};
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
	class Launcher;
	class Launcher_Base_F: Launcher {
		class WeaponSlotsInfo;
	};

    class 3AS_RPS6_HP: Launcher_Base_F {};

	class 3AS_RPS6_Base: Launcher_Base_F {};

    class AUX_95th_RPS6_Base: 3AS_RPS6_Base {
		author = "95th Aux Team";
		displayName = "[95th] Disposible RPS6";
		baseWeapon = "AUX_95th_RPS6_F";
		magazines[] = {"3AS_MK40_AT"};
    };

    class AUX_95th_RPS6_F: AUX_95th_RPS6_Base {
		scope = 2;
		baseWeapon = "AUX_95th_RPS6_F";
		magazines[] = {"CBA_FakeLauncherMagazine"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 100;
		};
    };

	class AUX_95th_RPS6_Used: AUX_95th_RPS6_Base {
		scope = 1;
		displayName = "[95th] Used RPS6 Disposible Rocket Launcher";
		baseWeapon = "AUX_95th_RPS6_Used";
		magazines[] = {"CBA_FakeLauncherMagazine"};
    };

    class AUX_95th_RPS6_HP: 3AS_RPS6_HP {
		author = "95th Aux Team";
		scope = 2;
		displayName = "[95th] RPS6";
		magazines[] = {"AUX_95th_MK41_AT","AUX_95th_MK42_HE"};
	};
};

#include "CfgEventHandlers.hpp"