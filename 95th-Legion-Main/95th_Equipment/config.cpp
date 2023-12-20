class CfgPatches {
	class 95th_Equipment {
        author="95th Aux Team";
        name="95th Legion Equipment";
		requiredAddons[]={
			"ls_weapons"
		};
		weapons[] = {
			"NFL_Disc_Shield","NFL_Turret_Deployer","NFL_MFD_Item",
		};
		units[]={};
	};
};

class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class NFA_Turret_Actions {
                displayName = "Engineer Turret Actions";
                // icon = "";
                condition = "[_player] call DSS_fnc_hasTurretItem";
                exceptions[] = {};
                statement = "";

				class NFA_Turret_Action_Normal {
					displayName = "Normal Turret";
					// icon = "";
					condition = "true";
					statement = "[_player, 'Normal'] call NFA_fnc_setupTurretOption";
				};

				class NFA_Turret_Action_Auto {
					displayName = "Auto Turret";
					// icon = "";
					condition = "true";
					statement = "[_player, 'Auto'] call NFA_fnc_setupTurretOption";
				};
			};
		};
	};
};

class CfgAmmo {
	class DSS_Ammo_Grenade_Dummy;

	class NFL_Ammo_Grenade_Medical_Shield: DSS_Ammo_Grenade_Dummy {
		model="3AS\3AS_Shield\SquadShield_Throwable.p3d";
		simulation="shotShell";
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
			"NFL_Muzzle_Grenade_Medical_Shield"
		};

		class NFL_Muzzle_Grenade_Medical_Shield: ThrowMuzzle { magazines[] = {"NFL_Magazine_Grenade_Medical_Shield"}; };
	};

	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;

    class NFL_Disc_Shield: CBA_MiscItem {
		NFL_IsDiscShieldDevice = 1;
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

	class NFL_Turret_Deployer: CBA_MiscItem {
		NFL_IsTurretDevice = 1;
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

    class NFL_MFD_Item: CBA_MiscItem {
		DSS_IsCloakingDevice = 1;
		DSS_IsHackingDevice = 1;
		DSS_IsSupportDevice = 1;
		NFL_IsDiscShieldDevice = 1;
		NFL_IsTurretDevice = 1;
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
	class NFA {
		class Equipment {
			class handleDiscPressed {file = "\95th_Equipment\Scripts\handleDiscPressed.sqf";};
			class handleDiscTriggered {file = "\95th_Equipment\Scripts\handleDiscTriggered.sqf";};

			class handleMedicalShield {file = "\95th_Equipment\Scripts\Medical Squad Shield\handleMedicalShield.sqf";};
			class handleMedicalShieldBandages {file = "\95th_Equipment\Scripts\Medical Squad Shield\handleMedicalShieldBandages.sqf";};

			class handleTurretTriggered {file = "\95th_Equipment\Scripts\Engineer Turret Deployer\handleTurretTriggered.sqf";};
			class hasTurretItem {file = "\95th_Equipment\Scripts\Engineer Turret Deployer\hasTurretItem.sqf";};
			class setupTurretOption {file = "\95th_Equipment\Scripts\Engineer Turret Deployer\setupTurretOption.sqf";};

			class deployNormalTurret {file = "\95th_Equipment\Scripts\Engineer Turret Deployer\deployNormalTurret.sqf";};
			class deployAutoTurret {file = "\95th_Equipment\Scripts\Engineer Turret Deployer\deployAutoTurret.sqf";};
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

	class NFL_Turret_Deployer {
		displayName = "Deploy Turret";
		tooltip = "Bind to deploy the selected turret";
		onActivate = "[player] call NFA_fnc_handleTurretTriggered";
		modifierBlocking = 1;
	};
};

class CfgDefaultKeysPresets {
	class Arma2 {
		class Mappings {
			NFL_Disc_Shield[] = {0x25};
			NFL_Turret_Deployer[] = {0x25};
		};
	};
};

class UserActionGroups {
	class NFL_Equipment {
		name = "95th Legion";
		isAddon = 1;
		group[] = {"NFL_Disc_Shield","NFL_Turret_Deployer"};
	};
};
