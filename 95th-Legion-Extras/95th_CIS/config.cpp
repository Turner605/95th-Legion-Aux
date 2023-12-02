// Depricated

class CfgPatches { 
    class 95th_Legion_CIS {
        author="95th Aux Team";
		scope=2; 
		scopecurator=2;
        name="95th Legion CIS";
        requiredAddons[] = {
			"A3_Characters_F", 
			"WBK_Combinus",
			"JLTS_core",
			"JLTS_weapons_core",
			"95th_P1_Units"
		};
		units[] = {
			"95th_CIS_Disguised_Trooper", 
			"95th_CIS_Commando_Base", 
			"95th_CIS_Commando_Captain", 
			"95th_CIS_Commando_Citadel", 
			"95th_CIS_Commando_Diplomat",
			"95th_Stun_Turret_Backpack",
			"95th_Stun_Turret"
		};
    };
}; 

class CfgWeapons {
	class manual; class close; class short; class medium; class far;

	class JLTS_UST_turret_weapon;

	class 95th_Stun_Turret_Weapon: JLTS_UST_turret_weapon {
		displayName="[95th] Stun Auto Turret";
		displayNameShort="[95th] Stun Auto Turret";
		magazines[]= {"JLTS_stun_mag_short" };
		magazineReloadTime=5;
		
		class StandardSound {begin1[]={"MRC\JLTS\weapons\Core\sounds\stun",5, 1.5, 1800}; soundBegin[]={"begin1", 1}; soundClosure[]={}; };

		class manual: manual { 
			sounds[]={"StandardSound"}; soundContinuous=0; soundBurst=0;
			class StandardSound {begin1[]={"MRC\JLTS\weapons\Core\sounds\stun",5, 1.5, 1800}; soundBegin[]={"begin1", 1}; soundClosure[]={}; };
		};

		class close: close {
			sounds[]={"StandardSound"};
			class StandardSound {begin1[]={"MRC\JLTS\weapons\Core\sounds\stun",5, 1.5, 1800}; soundBegin[]={"begin1", 1}; soundClosure[]={}; };
		};

		class far: far {
			sounds[]={"StandardSound"};
			class StandardSound {begin1[]={"MRC\JLTS\weapons\Core\sounds\stun",5, 1.5, 1800}; soundBegin[]={"begin1", 1}; soundClosure[]={}; };
		};

		class medium: medium {
			sounds[]={"StandardSound"};
			class StandardSound {begin1[]={"MRC\JLTS\weapons\Core\sounds\stun",5, 1.5, 1800}; soundBegin[]={"begin1", 1}; soundClosure[]={}; };
		};
		
		class short: short {
			sounds[]={"StandardSound"};
			class StandardSound {begin1[]={"MRC\JLTS\weapons\Core\sounds\stun",5, 1.5, 1800}; soundBegin[]={"begin1", 1}; soundClosure[]={}; };
		};
	};
};

class CfgVehicles {
	class 95th_Rifleman_Unit_Trooper;
	class JLTS_UST_turret_CIS_backpack;
	class JLTS_UST_turret_CIS;

	class Turrets;
	class MainTurret;
	class assembleInfo;

	class 95th_CIS_Disguised_Trooper: 95th_Rifleman_Unit_Trooper {
		displayName="[95th] Disguised BX Trooper";
		author="95th Aux Team";
		faction="95th_CIS";
		editorSubcategory="95th_CIS_Commandos";
		uniformClass="95th_P1_Uniform_Trooper";
        side = 0;
		scope=2; 
		scopecurator=2;
		editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_AB.jpg"; //todo: change me
		linkedItems[]={"95th_P1_Helmet_Trooper","lsd_cis_bx_head""95th_Basic_Vest_Rifleman","JLTS_Clone_radio","ItemGPS","ItemMap","ItemWatch","ItemCompass"};
		respawnLinkedItems[]={"95th_P1_Helmet_Trooper","lsd_cis_bx_head","95th_Basic_Vest_Rifleman","JLTS_Clone_radio","ItemGPS","ItemMap","ItemWatch","ItemCompass"};
		nakedUniform = "lsd_cis_bxDroid_uniform";
		identityTypes[] = {"BX_Droid"};
	};

	//############################################################### Turrets ###############################################################

	class 95th_Stun_Turret_Backpack: JLTS_UST_turret_CIS_backpack {
		displayName="[95th] Stun Auto Turret";
		author="95th Aux Team";
		faction="95th_CIS";
		editorSubcategory="EdSubcat_Backpacks";
		class assembleInfo: assembleInfo {
			base="";
			displayName="[95th] Stun Auto Turret";
			assembleTo="95th_Stun_Turret";
		};
	};

	class 95th_Stun_Turret: JLTS_UST_turret_CIS {
		displayName="[95th] Stun Auto Turret";
		author="95th Aux Team";
		editorSubcategory="95th_CIS_Turrets";
		editorPreview="\MRC\JLTS\weapons\Statics\turret\data\ui\editorPreviews\JLTS_UST_turret_CIS.jpg";
		side = 0;
		scope=2; 
		scopecurator=2;
		faction="95th_CIS";
		class assembleInfo {
			primary=1;
			base="";
			assembleTo="";
			dissasembleTo[]= {"95th_Stun_Turret_Backpack"};
			displayName="";
		};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[]={"95th_Stun_Turret_Weapon"};
				magazines[]= {"JLTS_stun_mag_short", "JLTS_stun_mag_short", "JLTS_stun_mag_short", "JLTS_stun_mag_short", "JLTS_stun_mag_short", "JLTS_stun_mag_short"};
			};
		};
	};
};