#include "Macros\Backpacks.hpp"

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