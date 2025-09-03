// T-Series
class 3AS_CIS_TS_Base;
class 3AS_CIS_TS_F: 3AS_CIS_TS_Base {
    #include "../macros/droidSpecialist.hpp"
};
class 3AS_CIS_TS_Green: 3AS_CIS_TS_Base {
    #include "../macros/droidSpecialist.hpp"
};
class 3AS_CIS_TS_Red: 3AS_CIS_TS_Base {
    #include "../macros/droidSpecialist.hpp"
};
class 3AS_CIS_TS_TV24: 3AS_CIS_TS_Base {
    #include "../macros/droidSpecialist.hpp"
};



// Humans
class 3AS_CIS_Light_Base_F;
class 3AS_U_CIS_Officer: 3AS_CIS_Light_Base_F {
    #include "../macros/human.hpp"
};
class 3AS_U_CIS_Medic: 3AS_CIS_Light_Base_F {
    #include "../macros/human.hpp"
};
class 3AS_U_CIS_Light: 3AS_CIS_Light_Base_F {
    #include "../macros/human.hpp"
};

class 3AS_CIS_Heavy_Base_F;
class 3AS_U_CIS_Heavy: 3AS_CIS_Heavy_Base_F {
    #include "../macros/human.hpp"
};



// Droidekas
class 3AS_Deka_Static_Base;
class 3AS_Deka_Static: 3AS_Deka_Static_Base {
    #include "../macros/droidAdvanced.hpp"
    DSS_isDroid=1;
};

class 3AS_Deka_Static_Sniper_Base;
class 3AS_Deka_Static_Sniper: 3AS_Deka_Static_Sniper_Base {
    #include "../macros/droidAdvanced.hpp"
    DSS_isDroid=1;
};



// // B1 Droids
class O_Soldier_base_F;
class JLTS_Droid_B1_E5: O_Soldier_base_F {
    displayName = "Standard (Rifleman)";
    #include "../macros/droidB1.hpp"

	magazines[]={
		"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag",
		"SmokeShell", "SmokeShell"
	};
	respawnMagazines[]={
		"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag",
		"SmokeShell", "SmokeShell"
	};
};

class JLTS_Droid_B1_Security: JLTS_Droid_B1_E5 {
    displayName = "Standard (Security)";
    #include "../macros/droidB1.hpp"

	magazines[]={
		"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag",
		"SmokeShell", "SmokeShell"
	};
	respawnMagazines[]={
		"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag",
		"SmokeShell", "SmokeShell"
	};
};

class JLTS_Droid_B1_SBB3: JLTS_Droid_B1_E5 {
    displayName = "Standard (Breacher)";
    #include "../macros/droidB1.hpp"

	magazines[]={
		"JLTS_SBB3_mag", "JLTS_SBB3_mag", "JLTS_SBB3_mag", "JLTS_SBB3_mag", "JLTS_SBB3_mag",
		"SmokeShell", "SmokeShell", "DSS_Grenade_Magazine_Thermal_C1"
	};
	respawnMagazines[]={
		"JLTS_SBB3_mag", "JLTS_SBB3_mag", "JLTS_SBB3_mag", "JLTS_SBB3_mag", "JLTS_SBB3_mag",
		"SmokeShell", "SmokeShell", "DSS_Grenade_Magazine_Thermal_C1"
	};
};

class O_crew_F;
class JLTS_Droid_B1_Crew: O_crew_F {
    displayName = "Standard (Crew)";
    #include "../macros/droidB1.hpp"

	magazines[]={
		"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag",
		"SmokeShell", "SmokeShell"
	};
	respawnMagazines[]={
		"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag",
		"SmokeShell", "SmokeShell"
	};
};

class O_sniper_F;
class JLTS_Droid_B1_Sniper: O_sniper_F {
    displayName = "Standard (Sniper)";
    #include "../macros/droidB1.hpp"

	magazines[]={
		"JLTS_E5S_mag", "JLTS_E5S_mag", "JLTS_E5S_mag", "JLTS_E5S_mag", "JLTS_E5S_mag",
		"SmokeShell", "SmokeShell"
	};
	respawnMagazines[]={
		"JLTS_E5S_mag", "JLTS_E5S_mag", "JLTS_E5S_mag", "JLTS_E5S_mag", "JLTS_E5S_mag",
		"SmokeShell", "SmokeShell"
	};
};

class O_Soldier_AR_F;
class JLTS_Droid_B1_AR: O_Soldier_AR_F {
    displayName = "Standard (Autorifleman)";
    #include "../macros/droidB1.hpp"

	magazines[]={
		"JLTS_E5C_mag", "JLTS_E5C_mag", "JLTS_E5C_mag", "JLTS_E5C_mag", "JLTS_E5C_mag",
		"SmokeShell", "SmokeShell"
	};
	respawnMagazines[]={
		"JLTS_E5C_mag", "JLTS_E5C_mag", "JLTS_E5C_mag", "JLTS_E5C_mag", "JLTS_E5C_mag",
		"SmokeShell", "SmokeShell"
	};
};

class O_officer_F;
class JLTS_Droid_B1_Commander: O_officer_F {
    displayName = "Standard (Commander)";
    #include "../macros/droidB1.hpp"

	magazines[]={
		"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag",
		"SmokeShell", "SmokeShell"
	};
	respawnMagazines[]={
		"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag",
		"SmokeShell", "SmokeShell"
	};
};

class O_Soldier_AT_F;
class JLTS_Droid_B1_Marine: O_Soldier_AT_F {
    displayName = "Standard (AA)";
    #include "../macros/droidB1.hpp"

    weapons[]={"JLTS_E5", "SWLW_E60R_AA", "Throw", "Put"};
	respawnWeapons[]={"JLTS_E5", "SWLW_E60R_AA", "Throw", "Put"};
	magazines[]={
		"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag",
		"SWLW_e60r_aa_mag", "SWLW_e60r_aa_mag", "SWLW_e60r_aa_mag"
	};
	respawnMagazines[]={
		"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag",
		"SWLW_e60r_aa_mag", "SWLW_e60r_aa_mag", "SWLW_e60r_aa_mag"
	};
};

class O_Soldier_LAT_F;
class JLTS_Droid_B1_AT: O_Soldier_LAT_F {
    displayName = "Standard (AT)";
    #include "../macros/droidB1.hpp"

    magazines[]={
        "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag",
        "JLTS_RPS6_mag", "JLTS_RPS6_mag", "JLTS_RPS6_mag"
	};
	respawnMagazines[]={
		"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag",
		"JLTS_RPS6_mag", "JLTS_RPS6_mag", "JLTS_RPS6_mag"
	};
};

class O_helipilot_F;
class JLTS_Droid_B1_Pilot: O_helipilot_F {
    displayName = "Standard (Pilot)";
    #include "../macros/droidB1.hpp"

	magazines[]={
		"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag",
		"SmokeShell", "SmokeShell"
	};
	respawnMagazines[]={
		"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag",
		"SmokeShell", "SmokeShell"
	};
};



// // B1 Geonosis Droids
class JLTS_Droid_B1_Geonosis_Commander: JLTS_Droid_B1_Commander {
    displayName = "Geonosis (Commander)";
    #include "../macros/droidB1.hpp"
};

class JLTS_Droid_B1_Geonosis_SBB3: JLTS_Droid_B1_SBB3 {
    displayName = "Geonosis (Breacher)";
    #include "../macros/droidB1.hpp"
};

class JLTS_Droid_B1_Geonosis_AR: JLTS_Droid_B1_AR {
    displayName = "Geonosis (AutoRifleman)";
    #include "../macros/droidB1.hpp"
};

class JLTS_Droid_B1_Geonosis_Sniper: JLTS_Droid_B1_Sniper {
    displayName = "Geonosis (Sniper)";
    #include "../macros/droidB1.hpp"
};

class JLTS_Droid_B1_Geonosis_E5: JLTS_Droid_B1_E5 {
    displayName = "Geonosis (Rifleman)";
    #include "../macros/droidB1.hpp"
};

class JLTS_Droid_B1_Geonosis_AT: JLTS_Droid_B1_AT {
    displayName = "Geonosis (AT)";
    #include "../macros/droidB1.hpp"
};



// // B1 Training Droids
class JLTS_Droid_B1_Training_Commander: JLTS_Droid_B1_Commander {
    displayName = "Training (Commander)";
    #include "../macros/droidB1.hpp"
};

class JLTS_Droid_B1_Training_SBB3: JLTS_Droid_B1_SBB3 {
    displayName = "Training (Breacher)";
    #include "../macros/droidB1.hpp"
};

class JLTS_Droid_B1_Training_AR: JLTS_Droid_B1_AR {
    displayName = "Training (AutoRifleman)";
    #include "../macros/droidB1.hpp"
};

class JLTS_Droid_B1_Training_Sniper: JLTS_Droid_B1_Sniper {
    displayName = "Training (Sniper)";
    #include "../macros/droidB1.hpp"
};

class JLTS_Droid_B1_Training_E5: JLTS_Droid_B1_E5 {
    displayName = "Training (Rifleman)";
    #include "../macros/droidB1.hpp"
};

class JLTS_Droid_B1_Training_AT: JLTS_Droid_B1_AT {
    displayName = "Training (AT)";
    #include "../macros/droidB1.hpp"
};



// BX Droids
class ls_droid_base;
class ls_droid_bx: ls_droid_base {
    displayName = "BX (Rifleman)";
    #include "../macros/droidCommando.hpp"
    
    weapons[]={"JLTS_E5","WBK_Dutch_Vibro","Throw","Put"};
    respawnWeapons[]={"JLTS_E5","WBK_Dutch_Vibro","Throw","Put"};
    magazines[]={
        "JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag",
        "DSS_Magazine_Grenade_Flashbang","DSS_Magazine_Grenade_Flashbang"
    };
    respawnMagazines[]={
        "JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag",
        "DSS_Magazine_Grenade_Flashbang","DSS_Magazine_Grenade_Flashbang"
    };
};

class ls_droid_bx_captain: ls_droid_bx {
    displayName = "BX (Captain)";
    #include "../macros/droidCommando.hpp"
};

class ls_droid_bx_assassain: ls_droid_bx {
    displayName = "BX (Sniper)";
    #include "../macros/droidCommando.hpp"

    weapons[]={"JLTS_E5S","WBK_Dutch_Vibro","Throw","Put"};
    respawnWeapons[]={"JLTS_E5S","WBK_Dutch_Vibro","Throw","Put"};
    magazines[]={
        "JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag",
        "DSS_Magazine_Grenade_Flashbang","DSS_Magazine_Grenade_Flashbang"
    };
    respawnMagazines[]={
        "JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag",
        "DSS_Magazine_Grenade_Flashbang","DSS_Magazine_Grenade_Flashbang"
    };
};

class ls_droid_bx_diplomat: ls_droid_bx {
    displayName = "BX (Diplomat)";
    #include "../macros/droidCommando.hpp"
};

class ls_droid_bx_security: ls_droid_bx {
    displayName = "BX (Security)";
    #include "../macros/droidCommando.hpp"

    weapons[]={"AUX_95th_E5_shield_attached","Throw","Put"};
    respawnWeapons[]={"AUX_95th_E5_shield_attached","Throw","Put"};
    magazines[]={
        "JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag",
        "DSS_Magazine_Grenade_Flashbang","DSS_Magazine_Grenade_Flashbang"
    };
    respawnMagazines[]={
        "JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag",
        "DSS_Magazine_Grenade_Flashbang","DSS_Magazine_Grenade_Flashbang"
    };
};

class ls_droid_bx_hologram: ls_droid_bx {
    displayName = "BX (Hologram)";
    #include "../macros/droidCommando.hpp"
};

class ls_droid_bx_simulation: ls_droid_bx_hologram {
    displayName = "BX (Simulation)";
    #include "../macros/droidCommando.hpp"
};



// B2 Droids
class ls_droid_b2: ls_droid_base {
    displayName = "B2 (Standard)";
    #include "../macros/droidAdvanced.hpp"
    // uniformClass = "AUX_95th_Droid_B2_Uniform";

    DSS_EMP_Protection_Value=0.95;
    DSS_DamageSystem_Active=1;
	DSS_DamageSystem_Resistance=4;
	DSS_DamageSystem_Headshot_Multiplier=4;
    canBleed = 0;
    impactEffectsBlood = "ImpactMetal";
    impactEffectsNoBlood = "ImpactPlastic";

    weapons[] = {"WBK_B2_NormalMod","Throw","Put"};
    magazines[] = {"ls_magazine_zh73","ls_magazine_zh73","ls_magazine_zh73","ls_magazine_zh73","ls_magazine_zh73","ls_magazine_zh73","ls_magazine_zh73","ls_magazine_zh73","ls_magazine_zh73","ls_magazine_zh73","ls_magazine_zh73","ls_magazine_zh73","ls_magazine_zh73"};
    items[] = {};
    
    class SoundEnvironExt {
        generic[] = {
         {"walk", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}}, 
         {"walk", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}},
         {"walk", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}},
         {"run", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}}, 
         {"run", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}},
         {"run", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}},
         {"sprint", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}}, 
         {"sprint", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}},
         {"sprint", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}}
        };
    };

    class SoundEquipment {
        soldier[] = {
         {"walk", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}}, 
         {"walk", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}},
         {"walk", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}},
         {"run", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}}, 
         {"run", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}},
         {"run", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}},
         {"sprint", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}}, 
         {"sprint", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}},
         {"sprint", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}}
        };
    };

    class SoundBreath {breath[] = {};};
    class SoundDrown {breath[] = {};};
    class SoundInjured {breath[] = {};};
    class SoundBleeding {breath[] = {};};
    class SoundBurning {breath[] = {};};
    class SoundChoke {breath[] = {};};
    class SoundRecovered {breath[] = {};};

    class EventHandlers {
        class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        init = "[(_this select 0)] call AUX_95th_Extras_fnc_B2Init;"; 
    };
};

class ls_droid_b2_hologram: ls_droid_b2 {
    displayName = "B2 (Hologram)";
};

class ls_droid_b2_junkyard: ls_droid_b2 {
    displayName = "B2 (Damaged)";
};

class ls_droid_b2_simulation: ls_droid_b2 {
    displayName = "B2 (Simulation)";
};

class lsd_cis_b2_standard: ls_droid_b2 {};

// Hiding Misc
class JLTS_Droid_B1_OOM9: JLTS_Droid_B1_Commander { scope = 1; };
class JLTS_Droid_B1_Prototype: JLTS_Droid_B1_E5 { scope = 1; };
class JLTS_Droid_B1_Rocket: JLTS_Droid_B1_E5 { scope = 1; };

class O_Soldier_F;
class JLTS_Droid_B1_UAV_prowler: O_Soldier_F { scope = 1; };

class TAS_Droid_B1_Commander: JLTS_Droid_B1_Commander { scope = 1; };
class TAS_Droid_B1_Rocket: JLTS_Droid_B1_Rocket { scope = 1; };
class TAS_Droid_B1_SBB3: JLTS_Droid_B1_SBB3 { scope = 1; };
class TAS_Droid_B1_Security: JLTS_Droid_B1_Security { scope = 1; };
class TAS_Droid_B1_Sniper: JLTS_Droid_B1_Sniper { scope = 1; };
class TAS_Droid_B1_Marine: JLTS_Droid_B1_Marine { scope = 1; };
class TAS_Droid_B1_Pilot: JLTS_Droid_B1_Pilot { scope = 1; };
class TAS_Droid_B1_AT: JLTS_Droid_B1_AT {scope=1;};
class TAS_Droid_B1_AR: JLTS_Droid_B1_AR {scope=1;};
class TAS_Droid_B1_E5: JLTS_Droid_B1_E5 {scope=1;};
class TAS_Droid_B1_Prototype: JLTS_Droid_B1_Prototype {scope=1;};
class TAS_Droid_B1_Crew: JLTS_Droid_B1_Crew {scope=1;};
class TAS_Droid_B1_OOM9: JLTS_Droid_B1_OOM9 {scope=1;};
class TAS_Droid_B1_UAV_prowler: JLTS_Droid_B1_UAV_prowler {scope=1;};

class 3AS_CIS_B2_Base; 
class 3AS_CIS_B2_F: 3AS_CIS_B2_Base {scope=1;};

class WBK_B2_Mod_Standart: lsd_cis_b2_standard { scope = 1; scopeCurator = 1; };
class WBK_B2_Mod_GL: WBK_B2_Mod_Standart { scope = 1; scopeCurator = 1; };
class WBK_B2_Mod_Shotgun: WBK_B2_Mod_Standart { scope = 1; scopeCurator = 1; };
class ls_droid_bx_cloneDisguise_phase2: ls_droid_base { scope = 1; scopeCurator = 1; };
class ls_droid_bx_cloneDisguise_phase1: ls_droid_bx_cloneDisguise_phase2 { scope = 1; scopeCurator = 1; };

class lsd_cis_bxdroid_specops;
class WBK_BX_Assasin_1: lsd_cis_bxdroid_specops { scope = 1; scopeCurator = 1; };
class WBK_BX_Assasin_Commander: WBK_BX_Assasin_1 { scope = 1; scopeCurator = 1; };

class ls_droid_b1: ls_droid_base { scope = 1; scopeCurator = 1; };
class ls_droid_b1_at: ls_droid_b1 { scope = 1; scopeCurator = 1; };
class ls_droid_b1_grenadier: ls_droid_b1 { scope = 1; scopeCurator = 1; };
class ls_droid_b1_hologram: ls_droid_b1 { scope = 1; scopeCurator = 1; };
class ls_droid_b1_marksman: ls_droid_b1 { scope = 1; scopeCurator = 1; };
class ls_droid_b1_heavyAA: ls_droid_b1 { scope = 1; scopeCurator = 1; };
class ls_droid_b1_shotgun: ls_droid_b1 { scope = 1; scopeCurator = 1; };
class ls_droid_b1_simulation: ls_droid_b1 { scope = 1; scopeCurator = 1; };
class ls_droid_b1_squadLeader: ls_droid_b1 { scope = 1; scopeCurator = 1; };
class ls_droid_b1_officer: ls_droid_b1 { scope = 1; scopeCurator = 1; };
