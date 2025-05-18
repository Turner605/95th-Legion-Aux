#include "script_component.hpp"
#define MAG_5(a) a, a, a, a, a
#define MAG_2(a) a, a

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
            "AUX_95th_Tiberian_Militia_Rifleman",
            "AUX_95th_Tiberian_Militia_AutoRifleman"
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

    class U_I_CombatUniform;
    class SFA_Hunter_Armor_Black: U_I_CombatUniform {
		class ItemInfo;
	};

	class AUX_95th_Tiberian_Militia_Uniform: SFA_Hunter_Armor_Black {
		scope = 2;
		scopeArsenal = 2;
		displayName = "Tiberian Militia";
		class ItemInfo: ItemInfo {
			uniformModel = "-";
			uniformClass = "AUX_95th_Tiberian_Militia_Rifleman";
			containerClass = "Supply150";
			mass = 40;
		};
	};
};

class CfgVehicles {
    class B_Soldier_base_F;
    class AUX_95th_Tiberian_Militia_Rifleman : B_Soldier_base_F {
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
        Items[] = {"SmokeShell", "SmokeShell", "DSS_Grenade_Magazine_Thermal_C1"};
        RespawnItems[] = {};
        magazines[] = {"3AS_40Rnd_EM50_Mag", "3AS_40Rnd_EM50_Mag", "3AS_40Rnd_EM50_Mag", "3AS_40Rnd_EM50_Mag", "3AS_18Rnd_EM20_Mag", "SmokeShell", "SmokeShell", "DSS_Grenade_Magazine_Thermal_C1"};
        respawnMagazines[] = {"3AS_40Rnd_EM50_Mag", "3AS_40Rnd_EM50_Mag", "3AS_40Rnd_EM50_Mag", "3AS_40Rnd_EM50_Mag", "3AS_18Rnd_EM20_Mag", "SmokeShell", "SmokeShell", "DSS_Grenade_Magazine_Thermal_C1"};
        linkedItems[] = { "JMSJEFF_Yasher_grey_armor", "SFA_Hunter_Helmet_Black", "SWLB_CEE_Clone_Scarf_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "AUX_95th_P1_NVG_Invisible" };
        respawnLinkedItems[] = { "JMSJEFF_Yasher_grey_armor", "SFA_Hunter_Helmet_Black", "SWLB_CEE_Clone_Scarf_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "AUX_95th_P1_NVG_Invisible" };
    };

    // class AUX_95th_Tiberian_Militia_AutoRifleman : B_Soldier_base_F {
    //     author="95th Aux Team";
	// 	side=0;
    //     scope = 2;
    //     scopeCurator = 2;
    //     scopeArsenal = 2;
    //     faction="AUX_95th_Faction_Tiberian_Militia";
    //     editorCategory="AUX_95th_Faction_Tiberian_Militia";
    //     editorSubcategory="AUX_95th_Faction_Category_Ground_Infantry";
    //     identityTypes[] = { "LanguageENG_F","Head_NATO","G_NATO_default" };
    //     displayName="Auto Rifleman";
    //     uniformClass = "AUX_95th_Tiberian_Militia_Uniform";
    //     backpack = "";
    //     weapons[]={"AUX_95th_DLT19_Tiberian_Autorifleman", "3AS_A180_F", "Throw", "Put"};
    //     respawnWeapons[]={"AUX_95th_DLT19_Tiberian_Autorifleman", "3AS_A180_F", "Throw", "Put"};
    //     Items[] = {"SmokeShell", "SmokeShell", "DSS_Grenade_Magazine_Thermal_C1"};
    //     RespawnItems[] = {};
    //     magazines[] = {"3AS_200Rnd_EM40_Mag_Imp", "3AS_200Rnd_EM40_Mag_Imp", "3AS_200Rnd_EM40_Mag_Imp", "3AS_18Rnd_EM20_Mag", "SmokeShell", "SmokeShell", "DSS_Grenade_Magazine_Thermal_C1"};
    //     respawnMagazines[] = {"3AS_200Rnd_EM40_Mag_Imp", "3AS_200Rnd_EM40_Mag_Imp", "3AS_200Rnd_EM40_Mag_Imp", "3AS_18Rnd_EM20_Mag", "SmokeShell", "SmokeShell", "DSS_Grenade_Magazine_Thermal_C1"};
    //     linkedItems[] = { "JMSJEFF_Yasher_grey_armor", "SFA_Hunter_Helmet_Black", "SWLB_CEE_Clone_Scarf_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "AUX_95th_P1_NVG_Invisible" };
    //     respawnLinkedItems[] = { "JMSJEFF_Yasher_grey_armor", "SFA_Hunter_Helmet_Black", "SWLB_CEE_Clone_Scarf_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "AUX_95th_P1_NVG_Invisible" };
    // };

};

#include "CfgEventHandlers.hpp"