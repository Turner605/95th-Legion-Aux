#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
            "AUX_95th_Yasher_SquadLeader",
            "AUX_95th_Yasher_Rifleman",
            "AUX_95th_Yasher_Sniper",
            "AUX_95th_Yasher_Heavy",
            "AUX_95th_Yasher_AT",
            "AUX_95th_Yasher_AA",
            "AUX_95th_Yasher_Devastator"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "AUX_95th_main", 
            "AUX_95th_units_shared", 
            "JMSJEFF_inf",
            "SFA_Vehicles_S"
        };
        authors[] = {"Turner"};
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

class CfgFactionClasses { 
    class AUX_95th_Faction_Yashers {displayName = "[95th] Yashers"; scope=2; scopecurator=2; priority = 1; side = 1;};  
};

class CfgEditorCategories{
	class AUX_95th_Faction_Yashers{displayName = "[95th] Yashers";};
};

class CfgEditorSubcategories {
	class AUX_95th_Faction_Yashers_Category_Ground_Infantry{displayName="Infantry";};
	class AUX_95th_Faction_Yashers_Category_Ground_Tanks{displayName="Tanks";};
};

class CfgVehicles {
    class JMSJEFF_yasher_war_serg;
    class JMSJEFF_yasher_war_hunter;
    class JMSJEFF_yasher_war_snip;
    class JMSJEFF_yasher_war_warrior;
    class JMSJEFF_yasher_war_albino;
    class SFA_Devastator_F;

    class AUX_95th_Yasher_SquadLeader : JMSJEFF_yasher_war_serg{
        displayName="Squad Leader";
        faction="AUX_95th_Faction_Yashers";
        editorCategory="AUX_95th_Faction_Yashers";
        editorSubcategory="AUX_95th_Faction_Yashers_Category_Ground_Infantry";
        weapons[]={"SWLW_ZH73", "Throw", "Put"};
        respawnWeapons[]={"SWLW_ZH73", "Throw", "Put"};
        magazines[]={"SWLW_ZH73_Mag", "SWLW_ZH73_Mag", "SWLW_ZH73_Mag", "SWLW_ZH73_Mag", "SWLW_ZH73_Mag"};
        respawnMagazines[]={"SWLW_ZH73_Mag", "SWLW_ZH73_Mag", "SWLW_ZH73_Mag", "SWLW_ZH73_Mag", "SWLW_ZH73_Mag"};
    };

    class AUX_95th_Yasher_Rifleman : JMSJEFF_yasher_war_hunter{
        displayName="Rifleman";
        faction="AUX_95th_Faction_Yashers";
        editorCategory="AUX_95th_Faction_Yashers";
        editorSubcategory="AUX_95th_Faction_Yashers_Category_Ground_Infantry";
        weapons[]={"SWLW_ACPR", "Throw", "Put"};
        respawnWeapons[]={"SWLW_ACPR", "Throw", "Put"};
        magazines[]={"SWLW_acpr_Mag", "SWLW_acpr_Mag", "SWLW_acpr_Mag", "SWLW_acpr_Mag", "SWLW_acpr_Mag"};
        respawnMagazines[]={"SWLW_acpr_Mag", "SWLW_acpr_Mag", "SWLW_acpr_Mag", "SWLW_acpr_Mag", "SWLW_acpr_Mag"};
    };

    class AUX_95th_Yasher_Sniper : JMSJEFF_yasher_war_snip{
        displayName="Sniper";
        faction="AUX_95th_Faction_Yashers";
        editorCategory="AUX_95th_Faction_Yashers";
        editorSubcategory="AUX_95th_Faction_Yashers_Category_Ground_Infantry";
        weapons[]={"SWLW_sniper", "Throw", "Put"};
        respawnWeapons[]={"SWLW_sniper", "Throw", "Put"};
        magazines[]={"SWLW_sniper_Mag", "SWLW_sniper_Mag", "SWLW_sniper_Mag", "SWLW_sniper_Mag", "SWLW_sniper_Mag"};
        respawnMagazines[]={"SWLW_sniper_Mag", "SWLW_sniper_Mag", "SWLW_sniper_Mag", "SWLW_sniper_Mag", "SWLW_sniper_Mag"};
    };

    class AUX_95th_Yasher_Heavy : JMSJEFF_yasher_war_warrior{
        displayName="Heavy";
        faction="AUX_95th_Faction_Yashers";
        editorCategory="AUX_95th_Faction_Yashers";
        editorSubcategory="AUX_95th_Faction_Yashers_Category_Ground_Infantry";
        weapons[]={"ls_weapon_ls150_primary", "Throw", "Put"};
        respawnWeapons[]={"ls_weapon_ls150_primary", "Throw", "Put"};
        magazines[]={"SWLW_LS150_mag", "SWLW_LS150_mag", "SWLW_LS150_mag"};
        respawnMagazines[]={"SWLW_LS150_mag", "SWLW_LS150_mag", "SWLW_LS150_mag"};
    };

    class AUX_95th_Yasher_AT : JMSJEFF_yasher_war_albino{
        displayName="AT";
        faction="AUX_95th_Faction_Yashers";
        editorCategory="AUX_95th_Faction_Yashers";
        editorSubcategory="AUX_95th_Faction_Yashers_Category_Ground_Infantry";
        weapons[]={"SWLW_ACPR", "SWLW_E60R", "Throw", "Put"};
        respawnWeapons[]={"SWLW_ACPR", "SWLW_E60R", "Throw", "Put"};
        magazines[]={"SWLW_acpr_Mag", "SWLW_acpr_Mag", "SWLW_acpr_Mag", "SWLW_acpr_Mag", "SWLW_acpr_Mag", "SWLW_e60r_at_mag", "SWLW_e60r_at_mag"};
        respawnMagazines[]={"SWLW_acpr_Mag", "SWLW_acpr_Mag", "SWLW_acpr_Mag", "SWLW_acpr_Mag", "SWLW_acpr_Mag", "SWLW_e60r_at_mag", "SWLW_e60r_at_mag"};
    };

    class AUX_95th_Yasher_AA : JMSJEFF_yasher_war_albino{
        displayName="AA";
        faction="AUX_95th_Faction_Yashers";
        editorCategory="AUX_95th_Faction_Yashers";
        editorSubcategory="AUX_95th_Faction_Yashers_Category_Ground_Infantry";
        weapons[]={"SWLW_ACPR", "SWLW_E60R_AA", "Throw", "Put"};
        respawnWeapons[]={"SWLW_ACPR", "SWLW_E60R_AA", "Throw", "Put"};
        magazines[]={"SWLW_acpr_Mag", "SWLW_acpr_Mag", "SWLW_acpr_Mag", "SWLW_acpr_Mag", "SWLW_acpr_Mag", "SWLW_e60r_aa_mag", "SWLW_e60r_aa_mag"};
        respawnMagazines[]={"SWLW_acpr_Mag", "SWLW_acpr_Mag", "SWLW_acpr_Mag", "SWLW_acpr_Mag", "SWLW_acpr_Mag", "SWLW_e60r_aa_mag", "SWLW_e60r_aa_mag"};
    };

    class AUX_95th_Yasher_Devastator: SFA_Devastator_F{
        displayName="Devastator";
        faction="AUX_95th_Faction_Yashers";
        editorCategory="AUX_95th_Faction_Yashers";
        editorSubcategory="AUX_95th_Faction_Yashers_Category_Ground_Tanks";
        crew="AUX_95th_Yasher_Rifleman";
    };
};

class CfgGroups {
	class East {
		class AUX_95th_Faction_Yashers  {
			name = "[95th] Yashers";
			class AUX_95th_Faction_Yashers_Category_Ground_Infantry {
				name = "Infantry";

                class AUX_95th_Groups_Yasher_AT_Squad {
                    side = 0;
                    faction = "AUX_95th_Faction_Yashers";
                    name="Fire Team";
                    class Unit0{side = 0; vehicle = "AUX_95th_Yasher_SquadLeader"; rank = "SERGEANT"; position[] = {0,0,0};};
                    class Unit1{side = 0; vehicle = "AUX_95th_Yasher_Heavy"; rank = "PRIVATE"; position[] = {5,5,0};};
                    class Unit2{side = 0; vehicle = "AUX_95th_Yasher_Rifleman"; rank = "PRIVATE"; position[] = {-5,-5,0};};
                    class Unit3{side = 0; vehicle = "AUX_95th_Yasher_Rifleman"; rank = "PRIVATE"; position[] = {5,-5,0};};
                    class Unit4{side = 0; vehicle = "AUX_95th_Yasher_Rifleman"; rank = "PRIVATE"; position[] = {-5,5,0};};
                    class Unit5{side = 0; vehicle = "AUX_95th_Yasher_Rifleman"; rank = "PRIVATE"; position[] = {10,10,0};};
                    class Unit6{side = 0; vehicle = "AUX_95th_Yasher_Rifleman"; rank = "PRIVATE"; position[] = {-10,-10,0};};
                    class Unit7{side = 0; vehicle = "AUX_95th_Yasher_AT"; rank = "PRIVATE"; position[] = {10,-10,0};};
                };

                class AUX_95th_Groups_Yasher_AA_Squad {
                    side = 0;
                    faction = "AUX_95th_Faction_Yashers";
                    name="Fire Team";
                    class Unit0{side = 0; vehicle = "AUX_95th_Yasher_SquadLeader"; rank = "SERGEANT"; position[] = {0,0,0};};
                    class Unit1{side = 0; vehicle = "AUX_95th_Yasher_Heavy"; rank = "PRIVATE"; position[] = {5,5,0};};
                    class Unit2{side = 0; vehicle = "AUX_95th_Yasher_Rifleman"; rank = "PRIVATE"; position[] = {-5,-5,0};};
                    class Unit3{side = 0; vehicle = "AUX_95th_Yasher_Rifleman"; rank = "PRIVATE"; position[] = {5,-5,0};};
                    class Unit4{side = 0; vehicle = "AUX_95th_Yasher_Rifleman"; rank = "PRIVATE"; position[] = {-5,5,0};};
                    class Unit5{side = 0; vehicle = "AUX_95th_Yasher_Rifleman"; rank = "PRIVATE"; position[] = {10,10,0};};
                    class Unit6{side = 0; vehicle = "AUX_95th_Yasher_Rifleman"; rank = "PRIVATE"; position[] = {-10,-10,0};};
                    class Unit7{side = 0; vehicle = "AUX_95th_Yasher_AA"; rank = "PRIVATE"; position[] = {10,-10,0};};
                };

                class AUX_95th_Groups_Yasher_FireTeam {
                    side = 0;
                    faction = "AUX_95th_Faction_Yashers";
                    name="Fire Team";
                    class Unit0{side = 0; vehicle = "AUX_95th_Yasher_SquadLeader"; rank = "SERGEANT"; position[] = {0,0,0};};
                    class Unit1{side = 0; vehicle = "AUX_95th_Yasher_Rifleman"; rank = "PRIVATE"; position[] = {5,-5,0};};
                    class Unit2{side = 0; vehicle = "AUX_95th_Yasher_Rifleman"; rank = "PRIVATE"; position[] = {-5,-5,0};};
                    class Unit3{side = 0; vehicle = "AUX_95th_Yasher_Rifleman"; rank = "PRIVATE"; position[] = {10,-10,0};};
                };
			};
		};
	};
};

#include "CfgEventHandlers.hpp"