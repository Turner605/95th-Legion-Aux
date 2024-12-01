#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {"AUX_95th_Disc_Shield","AUX_95th_Turret_Deployer","AUX_95th_Drone_Deployer","AUX_95th_MFD_Item"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "ls_weapons", "WBK_PhoenixTreal_FlamethrowerMOD"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class DarkswordHackingAbilities {
	class Decoys {
		displayName = "Holo Decoys";
		condition = "true";
		action = "[ace_player] spawn AUX_95th_fnc_triggerHoloDecoys";
		icon = "";
		cooldown = 60;
		activationSound = "";
		activationGesture = "";
	};
};

class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class AUX_95th_Turret_Actions {
                displayName = "Engineer Turret Actions";
                // icon = "";
                condition = "[_player] call AUX_95th_fnc_hasTurretItem";
                exceptions[] = {};
                statement = "";

				class AUX_95th_Turret_Action_Normal {
					displayName = "Normal Turret";
					// icon = "";
					condition = "true";
					statement = "[_player, 'Normal'] call AUX_95th_fnc_setupTurretOption";
				};

				class AUX_95th_Turret_Action_Auto {
					displayName = "Auto Turret";
					// icon = "";
					condition = "true";
					statement = "[_player, 'Auto'] call AUX_95th_fnc_setupTurretOption";
				};
			};

            class AUX_95th_Drone_Actions {
                displayName = "Drone Actions";
                // icon = "";
                condition = "[_player] call AUX_95th_fnc_hasDroneItem";
                exceptions[] = {};
                statement = "";

				class AUX_95th_Drone_Action_Spotter {
					displayName = "Spotter Drone";
					// icon = "";
					condition = "true";
					statement = "[_player, 'Spotter'] call AUX_95th_fnc_setupDroneOption";
				};
			};
		};
	};
};

class CfgAmmo {
	class DSS_Ammo_Grenade_Dummy;

	class AUX_95th_Ammo_Grenade_Medical_Shield: DSS_Ammo_Grenade_Dummy {
		model="3AS\3AS_Shield\SquadShield_Throwable.p3d";
		simulation="shotShell";
	};

	class ATLAS3_st_grenade_inc;
	class 95th_Pyro_Ammo: ATLAS3_st_grenade_inc {
		model="3as\3AS_Equipment\model\3AS_Thermaldet.p3d";  
	};
};

class cfgMagazines {
	class DSS_Magazine_Grenade_Dummy;

	class AUX_95th_Magazine_Grenade_Medical_Shield: DSS_Magazine_Grenade_Dummy {
		displayName = "[95th] Medical Shield"; descriptionShort="Medical Squad Shield"; displayNameShort="Medic Shield";
		ammo = "AUX_95th_Ammo_Grenade_Medical_Shield"; scope=2;
		NFL_Is_Medical_Shield = 1;
		mass=60; value=1; count=1;
		initSpeed=18; maxLeadSpeed=7; type=256;
		model="3as\3as_shield\SquadShield_Throwable.p3d";
	};

	class GrenadeInsiendPSENG;
	class 95th_Pyro_Grenade: GrenadeInsiendPSENG {
		author="95th Aux Team";
		model="3as\3AS_Equipment\model\3AS_Thermaldet.p3d";  
		displayName="Pyro Grenade";
		displayNameShort="Pyro";
		descriptionShort="Type: Offensive Flame Grenade<br />Rounds: 1<br />Used in: Hand";
		picture="\z\AUX_95th\addons\equipment\data\Grenades\PyroGrenade.paa";
		ammo = "95th_Pyro_Ammo";
	};
};

class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons {
	class GrenadeLauncher;
	class Throw: GrenadeLauncher {
		class ThrowMuzzle;

		muzzles[]+={
			"AUX_95th_Muzzle_Grenade_Medical_Shield",
			"95th_Pyro_Muzzle"
		};

		class AUX_95th_Muzzle_Grenade_Medical_Shield: ThrowMuzzle { magazines[] = {"AUX_95th_Magazine_Grenade_Medical_Shield"}; };

		//---------------------------------------------------------------------------------------------------------------------------
		//---------------------------------------------------Pyro Muzzles-------------------------------------------------------
		//---------------------------------------------------------------------------------------------------------------------------

		class 95th_Pyro_Muzzle: ThrowMuzzle { magazines[]= {"95th_Pyro_Grenade"}; };
	};

	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;

    class AUX_95th_Disc_Shield: CBA_MiscItem {
		AUX_95th_IsDiscShieldDevice = 1;
        author="95th Aux";
		displayName = "[95th] Disc Shield Generator";
		descriptionShort = "Disc Shield Generator";
		model = "\a3\structures_f_heli\items\electronics\tablet_01_f.p3d";
		picture = ""; //todo
		scope = 2;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 44;
        };
    };

	class AUX_95th_Turret_Deployer: CBA_MiscItem {
		AUX_95th_IsTurretDevice = 1;
        author="95th Aux";
		displayName = "[95th] Turret Deployer";
		descriptionShort = "Turret Deployer";
		model = "\a3\structures_f_heli\items\electronics\tablet_01_f.p3d";
		picture = ""; //todo
		scope = 2;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 44;
        };
    };

	class AUX_95th_Drone_Deployer: CBA_MiscItem {
		AUX_95th_IsDroneDevice = 1;
        author="95th Aux";
		displayName = "[95th] Drone Deployer";
		descriptionShort = "Drone Deployer";
		model = "\a3\structures_f_heli\items\electronics\tablet_01_f.p3d";
		picture = ""; //todo
		scope = 2;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 44;
        };
    };

    class AUX_95th_MFD_Item: CBA_MiscItem {
		DSS_IsCloakingDevice = 1;
		DSS_IsHackingDevice = 1;
		DSS_IsSupportDevice = 1;
		AUX_95th_IsDiscShieldDevice = 1;
		AUX_95th_IsTurretDevice = 1;
		AUX_95th_IsDroneDevice = 1;
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
};

class CfgFunctions {
    class AUX_95th {
        class DiscShield {
			file = "\z\AUX_95th\addons\equipment\functions\discShield";
            class handleDiscPressed {};
            class handleDiscTriggered {};
        };

        class MedicalShield {
			file = "\z\AUX_95th\addons\equipment\functions\medicalShield";
            class handleMedicalShield {};
            class handleMedicalShieldBandages {};
        };

        class PersonalShield {
			file = "\z\AUX_95th\addons\equipment\functions\personalShield";
            class checkCanShield {};
        };

        class EngineerTurret {
			file = "\z\AUX_95th\addons\equipment\functions\engineerTurret";
            class handleTurretTriggered {};
            class hasTurretItem {};
            class setupTurretOption {};
            class deployNormalTurret {};
            class deployAutoTurret {};
        };

        class Drone {
			file = "\z\AUX_95th\addons\equipment\functions\drone";
            class handleDroneTriggered {};
            class hasDroneItem {};
            class setupDroneOption {};
            class deploySpotterDrone {};
        };

        class Riot {
			file = "\z\AUX_95th\addons\equipment\functions\riot";
            class handleRiotFlash {};
        };

        class Hacker {
			file = "\z\AUX_95th\addons\equipment\functions\hacker";
            class triggerHoloDecoys {};
        };
    };
};

class CfgUserActions {
	class AUX_95th_Disc_Shield {
		displayName = "Personal Disc Shield";
		tooltip = "Personal Disc Shield";
		onActivate = "_this call AUX_95th_fnc_handleDiscPressed";
		modifierBlocking = 1;
	};

	class AUX_95th_Turret_Deployer {
		displayName = "Deploy Turret";
		tooltip = "Bind to deploy the selected turret";
		onActivate = "[player] call AUX_95th_fnc_handleTurretTriggered";
		modifierBlocking = 1;
	};

	class AUX_95th_Drone_Deployer {
		displayName = "Deploy Drone";
		tooltip = "Bind to deploy the selected drone";
		onActivate = "[player] call AUX_95th_fnc_handleDroneTriggered";
		modifierBlocking = 1;
	};

	class AUX_95th_Riot_Flash {
		displayName = "Riot Shield Flash";
		tooltip = "Bind to trigger the flashbang on the riot shield";
		onActivate = "[player] call AUX_95th_fnc_handleRiotFlash";
		modifierBlocking = 1;
	};
	// 3as_uas2 - small drone
};

class CfgDefaultKeysPresets {
	class Arma2 {
		class Mappings {
			AUX_95th_Disc_Shield[] = {0x25};
			AUX_95th_Turret_Deployer[] = {0x25};
			AUX_95th_Drone_Deployer[] = {0x25};
			AUX_95th_Riot_Flash[] = {0x25};
		};
	};
};

class UserActionGroups {
	class NFL_Equipment {
		name = "95th - Equipment";
		isAddon = 1;
		group[] = {"AUX_95th_Disc_Shield","AUX_95th_Turret_Deployer","AUX_95th_Drone_Deployer","AUX_95th_Riot_Flash"};
	};
};

#include "CfgEventHandlers.hpp"