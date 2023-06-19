class CfgPatches {
	class 95th_Equipment {
        author="95th Aux Team";
        name="95th Legion Equipment";
		requiredAddons[]={"ls_weapons"};
		weapons[] = {"NFL_Disc_Shield"};
	};
};

class CfgAmmo
{
	class ls_ammo_classC_thermalDet;
	class 95th_Thermal_T1_Ammo: ls_ammo_classC_thermalDet {
		model="3as\3AS_Equipment\model\3AS_Thermaldet.p3d";  
	};
};

class cfgMagazines {
	class ls_mag_classC_thermalDet;
	class 95th_Thermal_T1_Grenade: ls_mag_classC_thermalDet {
		author="95th Aux Team";
		model="3as\3AS_Equipment\model\3AS_Thermaldet.p3d";
		displayName="Thermal Detonator [T1]";
		displayNameShort="T1 Thermal Det";
		descriptionShort="Type: Offensive Explosive Grenade<br />Rounds: 1<br />Used in: Hand";
		picture="\95th_Equipment\Data\Grenades\ThermalDet.paa";
		ammo="95th_Thermal_T1_Ammo";
	};
};

class CfgWeapons{
	class GrenadeLauncher;
	class Throw: GrenadeLauncher {
		class ThrowMuzzle;

		muzzles[]+={"95th_Thermal_T1_Muzzle"};

		class 95th_Thermal_T1_Muzzle: ThrowMuzzle {
			magazines[]={"95th_Thermal_T1_Grenade"};
		};
	};

	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;

    class NFL_Disc_Shield: CBA_MiscItem {
		NFL_IsDiscShieldDevice = 1;
        author="95th Aux";
		displayName = "Disc Shield Generator";
		descriptionShort = "Disc Shield Generator";
		model = ""; //todo
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
		};
	};
};

class Extended_PreInit_EventHandlers {
	class NFL_Equipment_PreInit {
		init="call compile preprocessFileLineNumbers '\95th_Equipment\Init\XEH_preInit.sqf'";
	};
};

class CfgUserActions {
	class NFL_Disc_Shield {
		displayName = "Personal Disc Shield";
		tooltip = "Personal Disc Shield";
		onActivate = "_this call NFA_fnc_handleDiscPressed";
		modifierBlocking = 1;
	};
};

class CfgDefaultKeysPresets {
	class Arma2 {
		class Mappings {
			NFL_Disc_Shield[] = {0x25};
		};
	};
};

class UserActionGroups {
	class NFL_Equipment {
		name = "95th Legion";
		isAddon = 1;
		group[] = {"NFL_Disc_Shield"};
	};
};











