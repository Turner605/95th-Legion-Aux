#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {"AUX_95th_Riot_Comet"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_weapons_shared"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class Mode_SemiAuto;

class CfgMagazines {
	class 3AS_16Rnd_EM20_Mag;

	class AUX_95th_AUX_95th_Riot_Comet_Magazine: 3AS_16Rnd_EM20_Mag {
		displayName = "[95th] Riot Comet Mag";
		modelSpecial = "\3as\3AS_Weapons\Imperial\3as_SE14R_mag.p3d";
		modelSpecialIsProxy = 1;
		count = 18;
	};
};

class CfgWeapons {
    class OPTRE_Comet_Riot_Shield_Urban;

    class AUX_95th_Riot_Comet: OPTRE_Comet_Riot_Shield_Urban{
		displayname = "Comet + Shield";
		descriptionShort = "Blaster Pistol + Shield";
		magazines[] = {"AUX_95th_AUX_95th_Riot_Comet_Magazine"};
        soundBullet[] = {"caseless",1};
		drySound[] = {"\3AS\3AS_Main\Sounds\Blaster_empty",2,1,20};
		reloadMagazineSound[] = {"\3AS\3AS_Main\Sounds\DC15A\DC15aReload",1,1,30};

		class Single: Mode_SemiAuto {
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType {
				soundSetShot[] = {"3AS_RK3_Shot_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = {"3AS_RK3_Shot_SoundSet"};
			};
			recoil = "recoil_pistol_heavy";
			recoilProne = "recoil_prone_pistol_heavy";
			reloadTime = 0.1;
			dispersion = 0.00399;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
    };
};

#include "CfgEventHandlers.hpp"