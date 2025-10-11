#include "script_component.hpp"
#define MAG_5(a) a, a, a, a, a
#define MAG_2(a) a, a

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
            "AUX_95th_Tiberian_Militia_Rifleman",
            "AUX_95th_Tiberian_Militia_AutoRifleman",
            "AUX_95th_Tiberian_Militia_AT",
            "AUX_95th_Tiberian_Militia_AA",
            "AUX_95th_Tiberian_Militia_Sniper",
            "AUX_95th_Tiberian_Militia_Officer",

            "AUX_95th_Tiberian_Militia_Firebrand",
            "AUX_95th_Tiberian_Militia_Shuttle_GUSA",
            "AUX_95th_Tiberian_Militia_Shuttle_GUSM"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "AUX_95th_main", 
            "AUX_95th_units_shared", 
            "JMSJEFF_inf",
            "SFA_Vehicles_S",
            "SFA_Mandalorian_Equipment"
        };
        authors[] = {"Turner"};
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

class CfgFactionClasses { 
    class AUX_95th_Faction_Tiberian_Militia {displayName = "[95th] Tiberian Militia"; scope=2; scopecurator=2; priority = 1; side = 0;};  
};

class CfgEditorCategories{
	class AUX_95th_Faction_Tiberian_Militia{displayName = "[95th] Tiberian Militia";};
};

class CfgWeapons {
	class 3AS_DLT19;
	class AUX_95th_DLT19_Tiberian_Autorifleman : 3AS_DLT19 {
		scope = 2;
		class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "3AS_Imp_Optic_1";
			};

			class LinkedItemsUnder {
				slot = "UnderBarrelSlot";
				item = "3AS_Imp_Bipod_DLT19";
			};
		};
	};

	class 3AS_DLT19X;
	class AUX_95th_DLT19_Tiberian_Sniper : 3AS_DLT19X {
		scope = 2;
		class LinkedItems {
            class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "3AS_Imp_Optic_DLT19x";
			};

			class LinkedItemsUnder {
				slot = "UnderBarrelSlot";
				item = "3AS_Imp_Bipod_DLT19";
			};

            class LinkedItemsMuzzle {
				slot = "UnderBarrelSlot";
				item = "3AS_Imp_Muzzle_DLT19x";
			};
		};
	};

    class UniformItem;
    class SFA_Hunter_Armor_Black;

	class AUX_95th_Tiberian_Militia_Uniform: SFA_Hunter_Armor_Black {
		scope = 2;
		scopeArsenal = 2;
		displayName = "Tiberian Uniform";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass = "AUX_95th_Tiberian_Militia_Rifleman";
			containerClass="Supply150";
			mass=40;
		};
	};
};

class CfgVehicles {
    class 3AS_B_Imperial_Stormtrooper_Backpack_F;
    class AUX_95th_Tiberian_Militia_Backpack_AutoRifleman : 3AS_B_Imperial_Stormtrooper_Backpack_F {
        class TransportMagazines {
            class _xx_3AS_200Rnd_EM40_DLT19_Mag{magazine="3AS_200Rnd_EM40_DLT19_Mag"; count=4;};
        };
    };

    class AUX_95th_Tiberian_Militia_Backpack_AT : 3AS_B_Imperial_Stormtrooper_Backpack_F {
        class TransportMagazines {
            class _xx_3AS_MK41_AT{magazine="3AS_MK41_AT"; count=4;};
        };
    };

    class AUX_95th_Tiberian_Militia_Backpack_AA : 3AS_B_Imperial_Stormtrooper_Backpack_F {
        class TransportMagazines {
            class _xx_ls_magazine_e60r_aa{magazine="ls_magazine_e60r_aa"; count=4;};
        };
    };
    
    class SFA_Mando_Hunter_Heavy;
    class AUX_95th_Tiberian_Militia_Rifleman : SFA_Mando_Hunter_Heavy {
        author="95th Aux Team";
		side=0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        faction="AUX_95th_Faction_Tiberian_Militia";
        editorCategory="AUX_95th_Faction_Tiberian_Militia";
        editorSubcategory="AUX_95th_Faction_Category_Ground_Infantry";
        // identityTypes[] = { "LanguageENG_F","Head_NATO","G_NATO_default" };
        displayName="Rifleman";
        uniformClass = "AUX_95th_Tiberian_Militia_Uniform";
        backpack = "";
        weapons[]={"3AS_Arkanian_F", "3AS_A180_F", "Throw", "Put"};
        respawnWeapons[]={"3AS_Arkanian_F", "3AS_A180_F", "Throw", "Put"};
        Items[] = {};
        RespawnItems[] = {};
        magazines[] = {
            "3AS_40Rnd_EM50_Mag", "3AS_40Rnd_EM50_Mag", "3AS_40Rnd_EM50_Mag", "3AS_40Rnd_EM50_Mag", "3AS_18Rnd_EM20_Mag",
            "SmokeShell", "SmokeShell", "SmokeShellGreen"
        };
        respawnMagazines[] = {
            "3AS_40Rnd_EM50_Mag", "3AS_40Rnd_EM50_Mag", "3AS_40Rnd_EM50_Mag", "3AS_40Rnd_EM50_Mag", "3AS_18Rnd_EM20_Mag",
            "SmokeShell", "SmokeShell", "SmokeShellGreen"
        };
        linkedItems[] = { "JMSJEFF_Yasher_grey_armor", "SFA_Hunter_Helmet_Black", "ls_glasses_scarf_white", "AUX_95th_P1_NVG_Invisible",
            "ItemMap", "ItemGPS", "ItemCompass", "ItemWatch", "ItemRadio"
        };
        respawnLinkedItems[] = { "JMSJEFF_Yasher_grey_armor", "SFA_Hunter_Helmet_Black", "ls_glasses_scarf_white", "AUX_95th_P1_NVG_Invisible",
            "ItemMap", "ItemGPS", "ItemCompass", "ItemWatch", "ItemRadio"
        };
    };

    class AUX_95th_Tiberian_Militia_AutoRifleman : AUX_95th_Tiberian_Militia_Rifleman {
        displayName="Auto Rifleman";
        backpack = "AUX_95th_Tiberian_Militia_Backpack_AutoRifleman";
        weapons[]={"AUX_95th_DLT19_Tiberian_Autorifleman", "3AS_A180_F", "Throw", "Put"};
        respawnWeapons[]={"AUX_95th_DLT19_Tiberian_Autorifleman", "3AS_A180_F", "Throw", "Put"};
        magazines[] = {
            "3AS_18Rnd_EM20_Mag",
            "SmokeShell", "SmokeShell", "SmokeShellGreen"
        };
        respawnMagazines[] = {
            "3AS_18Rnd_EM20_Mag",
            "SmokeShell", "SmokeShell", "SmokeShellGreen"
        };
        linkedItems[] = {
            "JMSJEFF_Yasher_grey_armor", "SFA_Hunter_Helmet_Black", "ls_glasses_scarf_white", "ls_mandalorian_rangefinder",
            "ItemMap", "ItemGPS", "ItemCompass", "ItemWatch", "ItemRadio"
        };
        respawnLinkedItems[] = {
            "JMSJEFF_Yasher_grey_armor", "SFA_Hunter_Helmet_Black", "ls_glasses_scarf_white", "ls_mandalorian_rangefinder",
            "ItemMap", "ItemGPS", "ItemCompass", "ItemWatch", "ItemRadio"
        };
    };

    class AUX_95th_Tiberian_Militia_AT : AUX_95th_Tiberian_Militia_Rifleman {
        displayName="AT";
        backpack = "AUX_95th_Tiberian_Militia_Backpack_AT";
        weapons[]={"3AS_Arkanian_F", "3AS_A180_F", "3AS_HH12_F", "Throw", "Put"};
        respawnWeapons[]={"3AS_Arkanian_F", "3AS_A180_F", "3AS_HH12_F", "Throw", "Put"};
        magazines[] = {
            "3AS_40Rnd_EM50_Mag", "3AS_40Rnd_EM50_Mag", "3AS_40Rnd_EM50_Mag", "3AS_18Rnd_EM20_Mag",
            "SmokeShell", "SmokeShell", "SmokeShellGreen"
        };
        respawnMagazines[] = {
            "3AS_40Rnd_EM50_Mag", "3AS_40Rnd_EM50_Mag", "3AS_40Rnd_EM50_Mag", "3AS_18Rnd_EM20_Mag",
            "SmokeShell", "SmokeShell", "SmokeShellGreen"
        };
        linkedItems[] = {
            "JMSJEFF_Yasher_grey_armor", "SFA_Hunter_Helmet_Black", "ls_glasses_scarf_white", "AUX_95th_P1_NVG_Invisible",
            "ItemMap", "ItemGPS", "ItemCompass", "ItemWatch", "ItemRadio"
        };
        respawnLinkedItems[] = {
            "JMSJEFF_Yasher_grey_armor", "SFA_Hunter_Helmet_Black", "ls_glasses_scarf_white", "AUX_95th_P1_NVG_Invisible",
            "ItemMap", "ItemGPS", "ItemCompass", "ItemWatch", "ItemRadio"
        };
    };

    class AUX_95th_Tiberian_Militia_AA : AUX_95th_Tiberian_Militia_Rifleman {
        displayName="AA";
        backpack = "AUX_95th_Tiberian_Militia_Backpack_AA";
        weapons[]={"3AS_Arkanian_F", "3AS_A180_F", "ls_weapon_e60r_aa", "Throw", "Put"};
        respawnWeapons[]={"3AS_Arkanian_F", "3AS_A180_F", "ls_weapon_e60r_aa", "Throw", "Put"};
        magazines[] = {
            "3AS_40Rnd_EM50_Mag", "3AS_40Rnd_EM50_Mag", "3AS_40Rnd_EM50_Mag", "3AS_18Rnd_EM20_Mag",
            "SmokeShell", "SmokeShell", "SmokeShellGreen"
        };
        respawnMagazines[] = {
            "3AS_40Rnd_EM50_Mag", "3AS_40Rnd_EM50_Mag", "3AS_40Rnd_EM50_Mag", "3AS_18Rnd_EM20_Mag",
            "SmokeShell", "SmokeShell", "SmokeShellGreen"
        };
        linkedItems[] = {
            "JMSJEFF_Yasher_grey_armor", "SFA_Hunter_Helmet_Black", "ls_glasses_scarf_white", "AUX_95th_P1_NVG_Invisible",
            "ItemMap", "ItemGPS", "ItemCompass", "ItemWatch", "ItemRadio"
        };
        respawnLinkedItems[] = {
            "JMSJEFF_Yasher_grey_armor", "SFA_Hunter_Helmet_Black", "ls_glasses_scarf_white", "AUX_95th_P1_NVG_Invisible",
            "ItemMap", "ItemGPS", "ItemCompass", "ItemWatch", "ItemRadio"
        };
    };

    class AUX_95th_Tiberian_Militia_Sniper : AUX_95th_Tiberian_Militia_Rifleman {
        displayName="Sniper";
        backpack = "";
        weapons[]={"AUX_95th_DLT19_Tiberian_Sniper", "3AS_A180_F", "Throw", "Put"};
        respawnWeapons[]={"AUX_95th_DLT19_Tiberian_Sniper", "3AS_A180_F", "Throw", "Put"};
        magazines[] = {
            "3AS_10Rnd_EM80_Mag_Imp", "3AS_10Rnd_EM80_Mag_Imp", "3AS_10Rnd_EM80_Mag_Imp", "3AS_18Rnd_EM20_Mag",
            "SmokeShell", "SmokeShell", "SmokeShellGreen"
        };
        respawnMagazines[] = {
            "3AS_10Rnd_EM80_Mag_Imp", "3AS_10Rnd_EM80_Mag_Imp", "3AS_10Rnd_EM80_Mag_Imp", "3AS_18Rnd_EM20_Mag",
            "SmokeShell", "SmokeShell", "SmokeShellGreen"
        };
        linkedItems[] = {
            "JMSJEFF_Yasher_grey_armor", "SFA_Hunter_Helmet_Black", "ls_glasses_poncho_peaceBlue", "JLTS_PA_Core_P1_CloneMC",
            "ItemMap", "ItemGPS", "ItemCompass", "ItemWatch", "ItemRadio"
        };
        respawnLinkedItems[] = {
            "JMSJEFF_Yasher_grey_armor", "SFA_Hunter_Helmet_Black", "ls_glasses_poncho_peaceBlue", "JLTS_PA_Core_P1_CloneMC",
            "ItemMap", "ItemGPS", "ItemCompass", "ItemWatch", "ItemRadio"
        };
    };

    class AUX_95th_Tiberian_Militia_Officer : AUX_95th_Tiberian_Militia_Rifleman {
        displayName="Officer";
        backpack = "";
        weapons[]={"3AS_Arkanian_Stock_F", "3AS_A180_F", "Throw", "Put"};
        respawnWeapons[]={"3AS_Arkanian_Stock_F", "3AS_A180_F", "Throw", "Put"};
        magazines[] = {
            "3AS_40Rnd_EM50_Mag", "3AS_40Rnd_EM50_Mag", "3AS_40Rnd_EM50_Mag", "3AS_18Rnd_EM20_Mag",
            "SmokeShell", "SmokeShell", "SmokeShellGreen", "DSS_Grenade_Magazine_Thermal_C1"
        };
        respawnMagazines[] = {
            "3AS_40Rnd_EM50_Mag", "3AS_40Rnd_EM50_Mag", "3AS_40Rnd_EM50_Mag", "3AS_18Rnd_EM20_Mag",
            "SmokeShell", "SmokeShell", "SmokeShellGreen", "DSS_Grenade_Magazine_Thermal_C1"
        };
        linkedItems[] = {
            "JMSJEFF_Yasher_grey_armor", "SFA_Hunter_Helmet_Black", "ls_glasses_poncho_peaceBlue", "ls_mandalorian_rangefinder",
            "ItemMap", "ItemGPS", "ItemCompass", "ItemWatch", "ItemRadio"
        };
        respawnLinkedItems[] = {
            "JMSJEFF_Yasher_grey_armor", "SFA_Hunter_Helmet_Black", "ls_glasses_poncho_peaceBlue", "ls_mandalorian_rangefinder",
            "ItemMap", "ItemGPS", "ItemCompass", "ItemWatch", "ItemRadio"
        };
    };

    class SFA_Enforcer_Imp;
    class AUX_95th_Tiberian_Militia_Firebrand : SFA_Enforcer_Imp {
        displayName="Firebrand";
        faction="AUX_95th_Faction_Tiberian_Militia";
        editorCategory="AUX_95th_Faction_Tiberian_Militia";
        editorSubcategory="AUX_95th_Faction_Category_Ground_Tanks";
        crew="AUX_95th_Tiberian_Militia_Rifleman";
    };

    class TKE_Ext_GUSA_Innie;
    class AUX_95th_Tiberian_Militia_Shuttle_GUSA : TKE_Ext_GUSA_Innie {
        displayName="Shuttle (Assault)";
        faction="AUX_95th_Faction_Tiberian_Militia";
        editorCategory="AUX_95th_Faction_Tiberian_Militia";
        editorSubcategory="AUX_95th_Faction_Category_Air_Planes";
        crew="AUX_95th_Tiberian_Militia_Rifleman";
    };

    class TKE_Ext_GUSM_Innie;
    class AUX_95th_Tiberian_Militia_Shuttle_GUSM : TKE_Ext_GUSM_Innie {
        displayName="Shuttle (Missiles)";
        faction="AUX_95th_Faction_Tiberian_Militia";
        editorCategory="AUX_95th_Faction_Tiberian_Militia";
        editorSubcategory="AUX_95th_Faction_Category_Air_Planes";
        crew="AUX_95th_Tiberian_Militia_Rifleman";
    };
};

#include "CfgEventHandlers.hpp"