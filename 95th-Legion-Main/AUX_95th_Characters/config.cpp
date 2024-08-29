#include "Macros\P1 Basic.hpp"
#include "Macros\P1 MC.hpp"
#include "Macros\P1 Cold Assault.hpp"
#include "Macros\Commando.hpp"

class CfgPatches {
	class AUX_95th_Characters {
        author="95th Aux Team";
        name="95th Legion Characters";
		requiredAddons[]= {};
		units[] = {};
	};
};

class CfgGroups {
    class West {
		name="$STR_A3_CfgGroups_West0"; side=1;
        class AUX_95th_Legion_Faction_Clones {
            name = "[95th] Clones";
            class AUX_95th_Legion_Characters_Category_Squad_Generic {
            	name = "Infantry";
				class AUX_95th_FireTeam {
					side = 1;
					faction = "AUX_95th_Legion_Faction_Clones";
					name="Fire Team";
					class Unit0 {side = 1; vehicle = "AUX_95th_Unit_P1_Basic_Sergeant"; rank = "SERGEANT"; position[] = {0,0,0};};
					class Unit1 {side = 1; vehicle = "AUX_95th_Unit_P1_Basic_Medic"; rank = "PRIVATE"; position[] = {5,-5,0};};
					class Unit2{side = 1; vehicle = "AUX_95th_Unit_P1_Basic_Trooper"; rank = "PRIVATE"; position[] = {-5,-5,0};};
					class Unit3{side = 1; vehicle = "AUX_95th_Unit_P1_Basic_Trooper"; rank = "PRIVATE"; position[] = {10,-10,0};};
				};
            };
        };
    };
};

class CfgWeapons {
	class InventoryItem_Base_F;
    class ItemCore;
    class UniformItem;
    class Uniform_Base: ItemCore { class ItemInfo; };
    class U_I_CombatUniform;
	class 3AS_U_Rep_ColdAssault_Armor;
	class 3AS_U_Rep_Katarn_Armor;

	#include "Config\CfgWeapons.hpp"
};

class CfgVehicles {
	class JLTS_Clone_P2_DC15A;
	class 3AS_Rep_ColdAssault_base_F;
	class 3AS_Rep_Commando_F;

	#include "Config\CfgVehicles.hpp"
};
