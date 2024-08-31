#include "Macros\Backpacks.hpp"
#include "Macros\Officers.hpp"
#include "Macros\Basic Vests.hpp"
#include "Macros\Officer Vests.hpp"
#include "Macros\Special Vests.hpp"

#include "Macros\P1 Basic.hpp"
#include "Macros\P1 MC.hpp"
#include "Macros\P1 Cold Assault.hpp"
#include "Macros\Commando.hpp"

class CfgPatches {
	class AUX_95th_Depricated {
        author="95th Aux Team";
        name="95th Legion Depricated";
		requiredAddons[]= {
			"JLTS_characters_CloneArmor",
			"WBK_PhoenixTreal_FlamethrowerMOD",
			"3as_Backpacks"
		};
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

class CfgVehicles {
	class JLTS_Clone_backpack;

    class AUX_95th_Backpack_Depricated : JLTS_Clone_backpack {
		scope=2;
        author="95th Aux Team";
        displayName="DEPRICATED"; 
	    maximumLoad=500;
        hiddenSelectionsTextures[]={
            "\z\AUX_95th\addons\players\shared\data\MissingTexture.paa"
        };
    };

	//###############################Backpacks###############################

	NEW_95TH_BAG_BACKPACK_VISIBLE(Trooper,95th_Backpacks,"95th Backpack",150)};
	NEW_95TH_BAG_BACKPACK_INVISIBLE(Trooper,95th_Backpacks,"95th Backpack",150)};

	NEW_95TH_BACKPACK_VISIBLE(Heavy,95th_Backpacks,"95th Backpack",300)};
	NEW_95TH_BACKPACK_INVISIBLE(Heavy,95th_Backpacks,"95th Backpack",300)};
	NEW_95TH_BACKPACK_VISIBLE(Medic,95th_Backpacks,"95th Backpack",400)};
	NEW_95TH_BACKPACK_INVISIBLE(Medic,95th_Backpacks,"95th Backpack",400)};
	NEW_95TH_BACKPACK_VISIBLE(Ordnance,95th_Backpacks,"95th Backpack",400)};
	NEW_95TH_BACKPACK_INVISIBLE(Ordnance,95th_Backpacks,"95th Backpack",400)};

	NEW_95TH_RTO_BACKPACK_VISIBLE(Medic,95th_Backpacks,"95th Backpack",400)};
	NEW_95TH_RTO_BACKPACK_INVISIBLE(Medic,95th_Backpacks,"95th Backpack",400)};
	NEW_95TH_RTO_BACKPACK_VISIBLE(RTO,95th_Backpacks,"95th Backpack",150)};
	NEW_95TH_RTO_BACKPACK_INVISIBLE(RTO,95th_Backpacks,"95th Backpack",150)};
	NEW_95TH_RTO_BACKPACK_VISIBLE_MINI(RTO,95th_Backpacks,"95th Backpack",150)};

	NEW_95TH_RTO_BACKPACK_VISIBLE_MINI(Turner,95th_Custom_Backpacks,"95th Custom Backpack",400)};

	NEW_95TH_BACKPACK_VISIBLE(Stitch,95th_Custom_Backpacks,"95th Custom Backpack",400)};
	NEW_95TH_RTO_BACKPACK_VISIBLE(Stitch,95th_Custom_Backpacks,"95th Custom Backpack",400)};

	NEW_95TH_BACKPACK_VISIBLE(Pendragon,95th_Custom_Backpacks,"95th Custom Backpack",400)};
	NEW_95TH_RTO_BACKPACK_VISIBLE(Pendragon,95th_Custom_Backpacks,"95th Custom Backpack",400)};

	NEW_95TH_BACKPACK_VISIBLE(Gridlock,95th_Custom_Backpacks,"95th Custom Backpack",400)};
	NEW_95TH_RTO_BACKPACK_VISIBLE(Gridlock,95th_Custom_Backpacks,"95th Custom Backpack",400)};

	NEW_95TH_BACKPACK_VISIBLE(Titan,95th_Custom_Backpacks,"95th Custom Backpack",400)};
	NEW_95TH_RTO_BACKPACK_VISIBLE(Titan,95th_Custom_Backpacks,"95th Custom Backpack",400)};

	NEW_95TH_BACKPACK_VISIBLE(Bretek,95th_Custom_Backpacks,"95th Custom Backpack",400)};
	NEW_95TH_RTO_BACKPACK_VISIBLE(Bretek,95th_Custom_Backpacks,"95th Custom Backpack",400)};

	NEW_95TH_BACKPACK_VISIBLE(Smaug,95th_Custom_Backpacks,"95th Custom Backpack",400)};
	NEW_95TH_RTO_BACKPACK_VISIBLE(Smaug,95th_Custom_Backpacks,"95th Custom Backpack",400)};

	NEW_95TH_BACKPACK_VISIBLE(Gear,95th_Custom_Backpacks,"95th Custom Backpack",400)};
	NEW_95TH_RTO_BACKPACK_VISIBLE(Gear,95th_Custom_Backpacks,"95th Custom Backpack",400)};

	NEW_95TH_BACKPACK_VISIBLE(Galvin,95th_Custom_Backpacks,"95th Custom Backpack",400)};
	NEW_95TH_RTO_BACKPACK_VISIBLE(Galvin,95th_Custom_Backpacks,"95th Custom Backpack",400)};

	NEW_95TH_BACKPACK_VISIBLE(Kev,95th_Custom_Backpacks,"95th Custom Backpack",400)};
	NEW_95TH_RTO_BACKPACK_VISIBLE(Kev,95th_Custom_Backpacks,"95th Custom Backpack",400)};

	NEW_95TH_BACKPACK_VISIBLE(Blue,95th_Custom_Backpacks,"95th Custom Backpack",400)};
	NEW_95TH_RTO_BACKPACK_VISIBLE(Blue,95th_Custom_Backpacks,"95th Custom Backpack",400)};

	//###############################Jetpacks###############################

	NEW_95TH_JETPACK_JT12(Trooper,95th_Jetpacks,"95th Jetpacks",150)};
	NEW_95TH_JETPACK_JT12(Medic,95th_Jetpacks,"95th Jetpacks",150)};
	NEW_95TH_JETPACK_JT12(Stitch,95th_Custom_Jetpacks,"95th Custom Jetpacks",400)};

	NEW_95TH_JETPACK_MC(Trooper,95th_Jetpacks,"95th Jetpacks",150)};
	NEW_95TH_JETPACK_MC(Turner,95th_Custom_Jetpacks,"95th Custom Jetpacks",400)};


	//###############################Depricated###############################
	class 95th_Katarn_Backpack: AUX_95th_Backpack_Depricated {};

	class JLTS_Clone_P2_DC15A;
	class 3AS_Rep_ColdAssault_base_F;
	class 3AS_Rep_Commando_F;

	class AUX_95th_Unit_Depricated : JLTS_Clone_P2_DC15A {
		scope = 1;
		scopecurator=1;
		faction="AUX_95th_Legion_Faction_Clones";
		editorSubcategory="AUX_95th_Legion_Characters_Category_Depricated";
		author="95th Aux Team";
		displayName="DEPRICATED";
		uniformClass="AUX_95th_Uniform_Depricated";\
		hiddenSelectionsTextures[]={\
			"\z\AUX_95th\addons\players\shared\data\MissingTexture.paa",
			"\z\AUX_95th\addons\players\shared\data\MissingTexture.paa"
		};
	};

	// NEW_AUX_95TH_UNIT_COMMANDO(Trooper,AUX_95th_Helmet_P1_Commando_Trooper,95th_Basic_Vest_Rifleman,Basic)
	// NEW_AUX_95TH_UNIT_P1_BASIC(Trooper,AUX_95th_Helmet_P1_Basic_Trooper,95th_Basic_Vest_Rifleman,Basic)
	// NEW_AUX_95TH_UNIT_P1_BASIC(Shiny,AUX_95th_Helmet_P1_Basic_Shiny,95th_Basic_Vest_Rifleman,Basic)
	// NEW_AUX_95TH_UNIT_P1_BASIC(Medic,AUX_95th_Helmet_P1_Basic_Medic,95th_Basic_Vest_Rifleman,Basic)
	// NEW_AUX_95TH_UNIT_P1_BASIC(Senior,AUX_95th_Helmet_P1_Basic_Senior,95th_Basic_Vest_Rifleman,Basic)
	// NEW_AUX_95TH_UNIT_P1_BASIC(Veteran,AUX_95th_Helmet_P1_Basic_Veteran,AUX_95th_Vest_Kama_Trooper,Basic)
	// NEW_AUX_95TH_UNIT_P1_BASIC(Sergeant,AUX_95th_Helmet_P1_Basic_Veteran,AUX_95th_Vest_Sergeant_Trooper,Basic)
	// NEW_AUX_95TH_UNIT_P1_BASIC(Lieutenant,AUX_95th_Helmet_P1_Basic_Veteran,AUX_95th_Vest_Lieutenant_Trooper,Basic)

	// NEW_AUX_95TH_UNIT_P1_BASIC(Volt,AUX_95th_Helmet_P1_Basic_Volt,AUX_95th_Vest_Sergeant_Trooper,One)
	// NEW_AUX_95TH_UNIT_P1_BASIC(Jinter,AUX_95th_Helmet_P1_Pilot_Jinter,95th_Basic_Vest_Rifleman,Fallen)
	// NEW_AUX_95TH_UNIT_P1_BASIC(Bretek,AUX_95th_Helmet_P1_Basic_Bretek,AUX_95th_Vest_Sergeant_Trooper,Four)
	// NEW_AUX_95TH_UNIT_P1_BASIC(Commie,AUX_95th_Helmet_P1_Basic_Commie,95th_ARC_Vest_Trooper,Zeus)
	// NEW_AUX_95TH_UNIT_P1_BASIC(Smaug,AUX_95th_Helmet_P1_Basic_Smaug,95th_Basic_Vest_Rifleman,Two)
	// NEW_AUX_95TH_UNIT_P1_BASIC(Smokery,AUX_95th_Helmet_P1_Basic_Smokery,AUX_95th_Vest_CIO_Trooper,Two)
	// NEW_AUX_95TH_UNIT_P1_BASIC(Manila,AUX_95th_Helmet_P1_Basic_Manila,95th_ARC_Vest_Trooper,One)
	// NEW_AUX_95TH_UNIT_P1_BASIC(Havoc,AUX_95th_Helmet_P1_Basic_Havoc,AUX_95th_Vest_Lieutenant_Trooper,Unassigned)
	// NEW_AUX_95TH_UNIT_P1_BASIC(MadHatter,AUX_95th_Helmet_P1_Basic_MadHatter,95th_Basic_Vest_Rifleman,Fallen)
	// NEW_AUX_95TH_UNIT_P1_BASIC(Cheezy,AUX_95th_Helmet_P1_ARF_Cheezy,95th_Basic_Vest_Rifleman,Fallen)
	// NEW_AUX_95TH_UNIT_P1_BASIC(Revan,AUX_95th_Helmet_P1_Engineer_Revan,95th_Basic_Vest_Rifleman,Five)
	// NEW_AUX_95TH_UNIT_P1_BASIC(Sand,AUX_95th_Helmet_P1_Basic_Sand,AUX_95th_Vest_Sergeant_Trooper,One)
	// NEW_AUX_95TH_UNIT_P1_BASIC(Kev,AUX_95th_Helmet_P1_Engineer_Kev,95th_Basic_Vest_Rifleman,Two)
	// NEW_AUX_95TH_UNIT_P1_BASIC(Sythe,AUX_95th_Helmet_P1_ARF_Sythe,AUX_95th_Vest_Sergeant_Trooper,Fallen)
	// NEW_AUX_95TH_UNIT_P1_BASIC(Splash,AUX_95th_Helmet_P1_Basic_Splash,AUX_95th_Vest_CIO_Trooper,Zeus)
	// NEW_AUX_95TH_UNIT_P1_BASIC(Solvest,AUX_95th_Helmet_P1_Basic_Solvest,AUX_95th_Vest_CIO_Trooper,Zeus)
	// NEW_AUX_95TH_UNIT_P1_BASIC(Dilanza,AUX_95th_Helmet_P1_SpecOps_Dilanza,AUX_95th_Vest_Sergeant_Trooper,Seven)
	// NEW_AUX_95TH_UNIT_P1_BASIC(Hypo,AUX_95th_Helmet_P1_Basic_Hypo,AUX_95th_Vest_Sergeant_Trooper,Seven)
	// NEW_AUX_95TH_UNIT_P1_BASIC(Foley,AUX_95th_Helmet_P1_Basic_Foley,AUX_95th_Vest_Sergeant_Trooper,Fallen)
	// NEW_AUX_95TH_UNIT_P1_BASIC(Stitch,AUX_95th_Helmet_P1_Basic_Stitch,AUX_95th_Vest_Sergeant_Trooper,Zero)
	// NEW_AUX_95TH_UNIT_P1_BASIC(Prophet,AUX_95th_Helmet_P1_Basic_Prophet,AUX_95th_Vest_Sergeant_Trooper,Fallen)
	// NEW_AUX_95TH_UNIT_P1_BASIC(King,AUX_95th_Helmet_P1_Basic_King,AUX_95th_Basic_Vest_Rifleman,One)
	// NEW_AUX_95TH_UNIT_P1_BASIC(Titan,AUX_95th_Helmet_P1_Basic_Titan,95th_Basic_Vest_Rifleman,Two)
	// NEW_AUX_95TH_UNIT_P1_BASIC(Dracus,AUX_95th_Helmet_P1_Basic_Dracus,95th_Basic_Vest_AT,One)
	// NEW_AUX_95TH_UNIT_P1_BASIC(Pendragon,AUX_95th_Helmet_P1_Basic_Pendragon,95th_Basic_Vest_Rifleman,Two)
	// NEW_AUX_95TH_UNIT_P1_BASIC(Edge,AUX_95th_Helmet_P1_Pilot_Edge,95th_Basic_Vest_Rifleman,Six)
	// NEW_AUX_95TH_UNIT_P1_BASIC(Chimera,AUX_95th_Helmet_P1_Basic_Chimera,95th_Basic_Vest_Rifleman,One)

	// NEW_AUX_95TH_GENERIC_UNIT_P1_BASIC(Rifleman,AUX_95th_Helmet_P1_Basic_Trooper,95th_Basic_Vest_Rifleman)
	// NEW_AUX_95TH_GENERIC_UNIT_P1_BASIC(Pilot,AUX_95th_Helmet_P1_Pilot_Trooper,95th_Basic_Vest_Rifleman)
	// NEW_AUX_95TH_GENERIC_UNIT_P1_BASIC(ARF,AUX_95th_Helmet_P1_ARF_Trooper,95th_Basic_Vest_Rifleman)
	NEW_AUX_95TH_GENERIC_UNIT_P1_BASIC(Airborne,AUX_95th_Helmet_P2_Airborne_Trooper,95th_Basic_Vest_Rifleman)
	// NEW_AUX_95TH_GENERIC_UNIT_P1_BASIC(SpecOps,AUX_95th_Helmet_P1_SpecOps_Trooper,95th_Basic_Vest_Rifleman)
	// NEW_AUX_95TH_GENERIC_UNIT_P1_BASIC(Engineer,AUX_95th_Helmet_P1_Engineer_Trooper,95th_Basic_Vest_Rifleman)
	// NEW_AUX_95TH_GENERIC_UNIT_P1_BASIC(Hazard,AUX_95th_Helmet_P1_Hazard_Trooper,95th_Basic_Vest_Rifleman)

	// NEW_AUX_95TH_UNIT_P1_MC(Trooper,AUX_95th_Helmet_P1_Basic_Trooper,AUX_95th_Vest_CIO_Trooper,Basic)
	// NEW_AUX_95TH_UNIT_P1_MC(Turner,AUX_95th_Helmet_P1_Basic_Turner,AUX_95th_Vest_CIO_Turner,Zeus)

	// NEW_AUX_95TH_UNIT_P1_COLD_ASSAULT(Trooper,AUX_95th_Helmet_P1_Cold_Assault_Trooper,95th_Basic_Vest_Rifleman,Basic)
};

class CfgWeapons {
	class JLTS_CloneVestHolster;
	class JLTS_CloneVestAirborne;
	class JLTS_CloneVestRecon;
	class JLTS_CloneVestSuspender;
	class JLTS_CloneVestReconOfficer;
	class JLTS_CloneVestOfficer;
	class JLTS_CloneVestOfficer2;
	class JLTS_CloneVestARC;
	class JLTS_CloneVestKama;

	class VestItem;
	class ItemInfo;

	class AUX_95th_Vest_Depricated : JLTS_CloneVestKama {
		scope=2;
        author="95th Aux Team";
        displayName="DEPRICATED"; 
	    maximumLoad=500;
        hiddenSelectionsTextures[]={
            "\z\AUX_95th\addons\players\shared\data\MissingTexture.paa"
        };
    };

	NEW_AUX_95TH_OFFICER_VEST_SET(Trooper)
	NEW_AUX_95TH_OFFICER_VEST_SET(Turner)
	NEW_AUX_95TH_OFFICER_VEST_SET(Outcast)
	NEW_AUX_95TH_OFFICER_VEST_SET(Havoc)
	NEW_AUX_95TH_OFFICER_VEST_SET(Hypo)
	NEW_AUX_95TH_OFFICER_VEST_SET(Bretek)
	NEW_AUX_95TH_OFFICER_VEST_SET(Taun)
	NEW_AUX_95TH_OFFICER_VEST_SET(Volt)
	NEW_AUX_95TH_OFFICER_VEST_SET(Stitch)
	NEW_AUX_95TH_OFFICER_VEST_SET(Lisek)
	NEW_AUX_95TH_OFFICER_VEST_SET(Styx)
	NEW_AUX_95TH_OFFICER_VEST_SET(Sand)
	NEW_AUX_95TH_OFFICER_VEST_SET(Smokery)
	NEW_AUX_95TH_OFFICER_VEST_SET(Splash)

	NEW_95TH_VEST_HOLSTER_TYPE(Rifleman)};
	NEW_95TH_VEST_HOLSTER_TYPE(Pilot)};
	NEW_95TH_VEST_HOLSTER_TYPE(Grenadier)};
	NEW_95TH_VEST_HOLSTER_TYPE(Jet)};

	NEW_95TH_VEST_AIRBORNE_TYPE(Medic)};
	NEW_95TH_VEST_AIRBORNE_TYPE(AT)};
	NEW_95TH_VEST_AIRBORNE_TYPE(Heavy)};

	NEW_95TH_VEST_RECON_TYPE(Marksman)};
	NEW_95TH_VEST_RECON_TYPE(Riot)};
	NEW_95TH_VEST_RECON_TYPE(Flame)};
	NEW_95TH_VEST_RECON_TYPE(Stealth)};
	NEW_95TH_VEST_RECON_TYPE(Tech)};
	NEW_95TH_VEST_RECON_TYPE(Support)};

	NEW_95TH_VEST_SUSPENDER_TYPE(Engineer)};
	NEW_95TH_VEST_SUSPENDER_TYPE(Crewman)};

	NEW_95TH_VEST_ARC_TYPE(Trooper)};

	class InventoryItem_Base_F;
    class ItemCore;
    class UniformItem;
    class Uniform_Base: ItemCore { class ItemInfo; };
    class U_I_CombatUniform;

	class AUX_95th_Uniform_Depricated : U_I_CombatUniform {
		scope = 1;
		scopeArsenal = 1;
		author="95th Aux Team";
		displayName="Depricated";
		class ItemInfo: UniformItem {
			uniformClass="AUX_95th_Unit_Depricated";
			uniformModel="-";
			containerClass="Supply150";
			mass=40;
		};
	};

	// NEW_AUX_95TH_UNIFORM_P1_COMMANDO(Trooper,Basic,Basic)

	// NEW_AUX_95TH_UNIFORM_P1_BASIC(Trooper,Basic,Basic)
	// NEW_AUX_95TH_UNIFORM_P1_BASIC(Shiny,Basic,Basic)
	// NEW_AUX_95TH_UNIFORM_P1_BASIC(Medic,Basic,Basic)
	// NEW_AUX_95TH_UNIFORM_P1_BASIC(Senior,Basic,Basic)
	// NEW_AUX_95TH_UNIFORM_P1_BASIC(Veteran,Basic,Basic)
	// NEW_AUX_95TH_UNIFORM_P1_BASIC(Sergeant,Basic,Basic)
	// NEW_AUX_95TH_UNIFORM_P1_BASIC(Lieutenant,Basic,Basic)

	// NEW_AUX_95TH_UNIFORM_P1_BASIC(Volt,One,1-1)
	// NEW_AUX_95TH_UNIFORM_P1_BASIC(Jinter,Fallen,Fallen)
	// NEW_AUX_95TH_UNIFORM_P1_BASIC(Bretek,Four,1-4)
	// NEW_AUX_95TH_UNIFORM_P1_BASIC(Commie,Zeus,Zeus)
	// NEW_AUX_95TH_UNIFORM_P1_BASIC(Smaug,Two,1-2)
	// NEW_AUX_95TH_UNIFORM_P1_BASIC(Smokery,Two,1-2)
	// NEW_AUX_95TH_UNIFORM_P1_BASIC(Manila,One,1-1)
	// NEW_AUX_95TH_UNIFORM_P1_BASIC(Havoc,Fallen,Fallen)
	// NEW_AUX_95TH_UNIFORM_P1_BASIC(MadHatter,Fallen,Fallen)
	// NEW_AUX_95TH_UNIFORM_P1_BASIC(Cheezy,Fallen,Fallen)
	// NEW_AUX_95TH_UNIFORM_P1_BASIC(Revan,Five,5-0)
	// NEW_AUX_95TH_UNIFORM_P1_BASIC(Sand,One,1-1)
	// NEW_AUX_95TH_UNIFORM_P1_BASIC(Kev,Two,1-2)
	// NEW_AUX_95TH_UNIFORM_P1_BASIC(Sythe,Fallen,Fallen)
	// NEW_AUX_95TH_UNIFORM_P1_BASIC(Splash,Zeus,Zeus)
	// NEW_AUX_95TH_UNIFORM_P1_BASIC(Solvest,Zeus,Zeus)
	// NEW_AUX_95TH_UNIFORM_P1_BASIC(Dilanza,Seven,7-0)
	// NEW_AUX_95TH_UNIFORM_P1_BASIC(Hypo,Seven,7-0)
	// NEW_AUX_95TH_UNIFORM_P1_BASIC(Foley,Three,1-3)
	// NEW_AUX_95TH_UNIFORM_P1_BASIC(Stitch,Zero,1-0)
	// NEW_AUX_95TH_UNIFORM_P1_BASIC(Prophet,Fallen,Fallen)
	// NEW_AUX_95TH_UNIFORM_P1_BASIC(King,One,1-1)
	// NEW_AUX_95TH_UNIFORM_P1_BASIC(Titan,Two,1-2)
	// NEW_AUX_95TH_UNIFORM_P1_BASIC(Dracus,One,1-1)
	// NEW_AUX_95TH_UNIFORM_P1_BASIC(Pendragon,Two,1-2)
	// NEW_AUX_95TH_UNIFORM_P1_BASIC(Edge,Six,6-0)
	// NEW_AUX_95TH_UNIFORM_P1_BASIC(Chimera,One,1-1)
	// NEW_AUX_95TH_UNIFORM_P1_BASIC(Styx,Zero,1-0)

	// NEW_AUX_95TH_UNIFORM_P1_COLD_ASSAULT(Trooper,Basic,Basic)

	// NEW_AUX_95TH_UNIFORM_P1_MC(Trooper,Basic,Basic)
	// NEW_AUX_95TH_UNIFORM_P1_MC(Turner,Zeus,Zeus)
};