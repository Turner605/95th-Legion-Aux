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
};

class 3AS_Deka_Static_Sniper_Base;
class 3AS_Deka_Static_Sniper: 3AS_Deka_Static_Sniper_Base {
    #include "../macros/droidAdvanced.hpp"
};



// // B1 Droids
class O_Soldier_base_F;
class JLTS_Droid_B1_E5: O_Soldier_base_F {
    displayName = "Standard (Rifleman)";
    #include "../macros/droidB1.hpp"
};

class JLTS_Droid_B1_Security: JLTS_Droid_B1_E5 {
    displayName = "Standard (Security)";
    #include "../macros/droidB1.hpp"
};

class JLTS_Droid_B1_SBB3: JLTS_Droid_B1_E5 {
    displayName = "Standard (Breacher)";
    #include "../macros/droidB1.hpp"
};

class O_crew_F;
class JLTS_Droid_B1_Crew: O_crew_F {
    displayName = "Standard (Crew)";
    #include "../macros/droidB1.hpp"
};

class O_sniper_F;
class JLTS_Droid_B1_Sniper: O_sniper_F {
    displayName = "Standard (Sniper)";
    #include "../macros/droidB1.hpp"
};

class O_Soldier_AR_F;
class JLTS_Droid_B1_AR: O_Soldier_AR_F {
    displayName = "Standard (Autorifleman)";
    #include "../macros/droidB1.hpp"
};

class O_officer_F;
class JLTS_Droid_B1_Commander: O_officer_F {
    displayName = "Standard (Commander)";
    #include "../macros/droidB1.hpp"
};

class O_Soldier_AT_F;
class JLTS_Droid_B1_Marine: O_Soldier_AT_F {
    displayName = "Standard (AA)";
    #include "../macros/droidB1.hpp"
};

class O_Soldier_LAT_F;
class JLTS_Droid_B1_AT: O_Soldier_LAT_F {
    displayName = "Standard (AT)";
    #include "../macros/droidB1.hpp"
};

class O_helipilot_F;
class JLTS_Droid_B1_Pilot: O_helipilot_F {
    displayName = "Standard (Pilot)";
    #include "../macros/droidB1.hpp"
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
class 3AS_CIS_B2_Base; class 3AS_CIS_B2_F: 3AS_CIS_B2_Base {scope=1;};

class lsd_cis_b2Droid_base;
class lsd_cis_b2_standard: lsd_cis_b2Droid_base { scope = 1; };
class WBK_B2_Mod_Standart: lsd_cis_b2_standard { scope = 1; };
class WBK_B2_Mod_GL: WBK_B2_Mod_Standart { scope = 1; };
class WBK_B2_Mod_Shotgun: WBK_B2_Mod_Standart { scope = 1; };