#include "Macros\Backpacks.hpp"
#include "Macros\Officers.hpp"
#include "Macros\Basic Vests.hpp"
#include "Macros\Officer Vests.hpp"
#include "Macros\Special Vests.hpp"

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
};