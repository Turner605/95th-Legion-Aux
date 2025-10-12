// AATs
class 3AS_CIS_AAT_F;

class 3AS_AAT: 3AS_CIS_AAT_F {
    #include "../macros/mediumTank.hpp"
};
class 3AS_AAT_CIS: 3AS_AAT {
    #include "../macros/mediumTank.hpp"
};
class 3AS_AAT_Aqua: 3AS_AAT {
    #include "../macros/mediumTank.hpp"
};
class 3AS_AAT_Arid: 3AS_AAT {
    #include "../macros/mediumTank.hpp"
};
class 3AS_AAT_CIS_White: 3AS_AAT {
    #include "../macros/mediumTank.hpp"
};
class 3AS_AAT_Desert: 3AS_AAT {
    #include "../macros/mediumTank.hpp"
};
class 3AS_AAT_Geonosis: 3AS_AAT {
    #include "../macros/mediumTank.hpp"
};
class 3AS_AAT_Green: 3AS_AAT {
    #include "../macros/mediumTank.hpp"
};
class 3AS_AAT_tan: 3AS_AAT {
    #include "../macros/mediumTank.hpp"
};
class 3AS_AAT_Tropical: 3AS_AAT {
    #include "../macros/mediumTank.hpp"
};
class 3AS_AAT_Winter: 3AS_AAT {
    #include "../macros/mediumTank.hpp"
};
class 3AS_AAT_Woodland: 3AS_AAT {
    #include "../macros/mediumTank.hpp"
};
class 3AS_AAT_Red: 3AS_AAT {
    #include "../macros/heavyTank.hpp"
};



// APCs
class 3AS_PAC_Base_F;
class 3AS_PAC_F: 3AS_PAC_Base_F {
    #include "../macros/apc.hpp"
};
class 3AS_PAC_Brown: 3AS_PAC_F {
    #include "../macros/apc.hpp"
};
class 3AS_PAC_Tan: 3AS_PAC_F {
    #include "../macros/apc.hpp"
};

class 3AS_SAC_Base_F;
class 3AS_SAC_F: 3AS_SAC_Base_F {
    #include "../macros/apc.hpp"
};
class 3AS_SAC_Brown: 3AS_SAC_F {
    #include "../macros/apc.hpp"
};
class 3AS_SAC_Tan: 3AS_SAC_F {
    #include "../macros/apc.hpp"
};

class 3AS_SAC_Repair_F: 3AS_SAC_F {
    #include "../macros/apc.hpp"
};
class 3AS_SAC_Repair_Brown: 3AS_SAC_Brown {
    #include "../macros/apc.hpp"
};
class 3AS_SAC_Repair_Tan: 3AS_SAC_Tan {
    #include "../macros/apc.hpp"
};



// Speeders
class 3AS_Fliknot_Base_F;
class 3AS_Fliknot_F: 3AS_Fliknot_Base_F {
    #include "../macros/speeder.hpp"
};
class 3AS_Fliknot_Brown: 3AS_Fliknot_Base_F {
    #include "../macros/speeder.hpp"
};

class 3AS_Combat_Speeder_Base_F;
class 3AS_Combat_Speeder_F: 3AS_Combat_Speeder_Base_F {
    #include "../macros/speeder.hpp"
};



// Drones
class ScavBase;
class 3as_CIS_ScavDroid: ScavBase { 
    #include "../macros/drone.hpp"
};

class JLTS_UAV_prowler_base;
class JLTS_UAV_prowler_cis: JLTS_UAV_prowler_base {
    #include "../macros/drone.hpp"
};

class JLTS_UGV_MSE6;
class JLTS_UGV_MSE6_CIS: JLTS_UGV_MSE6 {
    #include "../macros/drone.hpp"
};



// Dropships
class ls_vehicle_cisDropship_base;
class ls_vehicle_cisDropship: ls_vehicle_cisDropship_base {
    #include "../macros/gunship.hpp"
};



// Gunships
class 3AS_HMP_Base;
class 3AS_HMP_Gunship: 3AS_HMP_Base {
    #include "../macros/gunship.hpp"
};
class 3AS_HMP_Transport: 3AS_HMP_Base {
    #include "../macros/gunship.hpp"
};

class 3AS_MAF_Base_F;
class 3AS_MAF_Gunship_F: 3AS_MAF_Base_F {
    #include "../macros/gunship.hpp"
};
class 3AS_MAF_Transport_F: 3AS_MAF_Base_F {
    #include "../macros/gunship.hpp"
};



// Fighters
class 3AS_Tri_Fighter_DynamicLoadout_Base;
class 3AS_Tri_Fighter_DynamicLoadout: 3AS_Tri_Fighter_DynamicLoadout_Base {
    #include "../macros/fighter.hpp"
};

class 3AS_Vulture_Base_F;
class 3AS_CIS_Vulture_F: 3AS_Vulture_Base_F {
    #include "../macros/fighter.hpp"
};
class 3AS_CIS_Vulture_Brown: 3AS_Vulture_Base_F {
    #include "../macros/fighter.hpp"
};
class 3AS_CIS_Vulture_Tan: 3AS_Vulture_Base_F {
    #include "../macros/fighter.hpp"
};

class 3AS_CIS_Vulture_AA_F: 3AS_Vulture_Base_F {
    #include "../macros/fighter.hpp"
};
class 3AS_CIS_Vulture_AA_Brown: 3AS_CIS_Vulture_AA_F {
    #include "../macros/fighter.hpp"
};
class 3AS_CIS_Vulture_AA_Tan: 3AS_CIS_Vulture_AA_F {
    #include "../macros/fighter.hpp"
};

class 3AS_CIS_Vulture_CAS_F: 3AS_Vulture_Base_F {
    #include "../macros/fighter.hpp"
};
class 3AS_CIS_Vulture_CAS_Brown: 3AS_CIS_Vulture_CAS_F {
    #include "../macros/fighter.hpp"
};
class 3AS_CIS_Vulture_CAS_Tan: 3AS_CIS_Vulture_CAS_F {
    #include "../macros/fighter.hpp"
};



// MTTs
class 3AS_MTT_01_Base;
class 3AS_MTT: 3AS_MTT_01_Base {
    #include "../macros/heavyTank.hpp"
};
class 3AS_MTT_tan: 3AS_MTT {
    #include "../macros/heavyTank.hpp"
};



// Shield AAT's
class 3AS_Heavy_AAT_Base_F;
class 3AS_Heavy_AAT_Shield_F: 3AS_Heavy_AAT_Base_F {
    #include "../macros/mediumTank.hpp"
};
class 3AS_Heavy_AAT_Shield_Green: 3AS_Heavy_AAT_Shield_F {
    #include "../macros/mediumTank.hpp"
};
class 3AS_Heavy_AAT_Shield_Red: 3AS_Heavy_AAT_Shield_F {
    #include "../macros/mediumTank.hpp"
};



// Flamer AAT's
class 3AS_Heavy_AAT_Flamer_F: 3AS_Heavy_AAT_Base_F {
    #include "../macros/mediumTank.hpp"
};
class 3AS_Heavy_AAT_Flamer_Camo: 3AS_Heavy_AAT_Flamer_F {
    #include "../macros/mediumTank.hpp"
};
class 3AS_Heavy_AAT_Flamer_Green: 3AS_Heavy_AAT_Flamer_F {
    #include "../macros/mediumTank.hpp"
};
class 3AS_Heavy_AAT_Flamer_Red: 3AS_Heavy_AAT_Flamer_F {
    #include "../macros/mediumTank.hpp"
};



// Defoliator AAT's
class 3AS_Heavy_AAT_Defoliator_F: 3AS_Heavy_AAT_Base_F {
    #include "../macros/artillery.hpp"
};
class 3AS_Heavy_AAT_Defoliator_Green: 3AS_Heavy_AAT_Defoliator_F {
    #include "../macros/artillery.hpp"
};
class 3AS_Heavy_AAT_Defoliator_Red: 3AS_Heavy_AAT_Defoliator_F {
    #include "../macros/artillery.hpp"
};



// N99's
class 3AS_CIS_N99_F;
class 3AS_N99: 3AS_CIS_N99_F {
    #include "../macros/lightTank.hpp"
};
class 3AS_N99_Canister: 3AS_CIS_N99_F {
    #include "../macros/lightTank.hpp"
};



// Hailfires
class 3AS_Hailfire_Base;
class 3AS_Hailfire_AT: 3AS_Hailfire_Base {
    #include "../macros/lightTank.hpp"
};
class 3AS_Hailfire_SAM: 3AS_Hailfire_Base {
    #include "../macros/lightTank.hpp"
};
class 3AS_Hailfire_Rocket: 3AS_Hailfire_Base {
    #include "../macros/artillery.hpp"
};



// HAGM
class Tank_F;
class 3AS_HAGM_Tan: Tank_F {
    #include "../macros/lightTank.hpp"
};
class 3AS_HAGM_CIS: 3AS_HAGM_Tan {
    #include "../macros/lightTank.hpp"
};



// Scout Tank
class ls_vehicle_ast_base;
class ls_vehicle_ast: ls_vehicle_ast_base {
    #include "../macros/lightTank.hpp"
};



// Raptor
class ls_vehicle_agtRaptor_base;
class ls_vehicle_agtRaptor: ls_vehicle_agtRaptor_base {
    #include "../macros/lightTank.hpp"
};



// GAT
class 3AS_CIS_GAT_base_F;
class 3AS_GAT: 3AS_CIS_GAT_base_F {
    #include "../macros/lightTank.hpp"
};
class 3AS_GAT_Olive: 3AS_GAT {
    #include "../macros/lightTank.hpp"
};

class 3AS_GAT_Light_base_F;
class 3AS_GAT_Light: 3AS_GAT_Light_base_F {
    #include "../macros/lightTank.hpp"
};
class 3AS_GAT_Light_Olive: 3AS_GAT_Light {
    #include "../macros/lightTank.hpp"
};



// DSD
class 3AS_Advanced_DSD_Base;
class 3AS_Advanced_DSD: 3AS_Advanced_DSD_Base {
    #include "../macros/heavyTank.hpp"
};

class StaticMGWeapon;
class 3AS_OG9Turret: StaticMGWeapon {
    #include "../macros/heavyTank.hpp"
};



// Turrets
class 3as_ParticleCannon_Base;
class 3as_ParticleCannon: 3as_ParticleCannon_Base {
    #include "../macros/turret.hpp"
    crew="JLTS_Droid_B1_Crew";
};

class 3AS_J1_Proton_Cannon_Base;
class 3AS_J1_Proton_Cannon: 3AS_J1_Proton_Cannon_Base {
    #include "../macros/turret.hpp"
    crew="JLTS_Droid_B1_Crew";
};
class 3AS_J1_Proton_Legged: 3AS_J1_Proton_Cannon_Base {
    #include "../macros/turret.hpp"
    crew="JLTS_Droid_B1_Crew";
};

class 3as_FlakCannon_Base;
class 3as_FlakCannon: 3as_FlakCannon_Base {
    #include "../macros/turret.hpp"
    crew="JLTS_Droid_B1_Crew";
};

class 3AS_J10s_Base_F;
class 3AS_J10s_F: 3AS_J10s_Base_F {
    #include "../macros/turret.hpp"
    crew="JLTS_Droid_B1_Crew";
};

class 3AS_Republic_Mortar;
class 3AS_CIS_Mortar: 3AS_Republic_Mortar {
    #include "../macros/turret.hpp"
    crew="JLTS_Droid_B1_Crew";
};

class 3AS_CIS_Naval_Gun: StaticMGWeapon {
    #include "../macros/turret.hpp"
    crew = "B_UAV_AI";
};
class 3AS_CIS_Naval_Gun_180: 3AS_CIS_Naval_Gun {
    #include "../macros/turret.hpp"
    crew = "B_UAV_AI";
};

class JLTS_UST_turret_base;
class JLTS_UST_turret_CIS: JLTS_UST_turret_base {
    #include "../macros/turret.hpp"
    crew = "B_UAV_AI";
};

class 3AS_FieldCannon_Base;
class 3AS_FieldCannon: 3AS_FieldCannon_Base {
    #include "../macros/turret.hpp"
    crew = "B_UAV_AI";
};

class ls_turret_autoturret_base;
class ls_turret_pirate_autoturret: ls_turret_autoturret_base {
    #include "../macros/turret.hpp"
    crew = "B_UAV_AI";
};

class ls_turret_autoturret_CQC_base;
class ls_turret_pirate_autoturretCQC: ls_turret_autoturret_CQC_base {
    #include "../macros/turret.hpp"
    crew = "B_UAV_AI";
};



// Statics
class 3AS_Republic_FCP;
class 3AS_CIS_FCP: 3AS_Republic_FCP {
    #include "../macros/static.hpp"
    crew="JLTS_Droid_B1_Crew";
};

class 3AS_Droid_Dispenser_Base_F;
class 3AS_Droid_Dispenser_F: 3AS_Droid_Dispenser_Base_F {
    #include "../macros/static.hpp"
    crew = "B_UAV_AI";
};

class ls_droidDispenser_base;
class ls_droidDispenser: ls_droidDispenser_base {
    #include "../macros/static.hpp"
    crew = "B_UAV_AI";
};

class ls_vehicle_radarDish;
class ls_vehicle_radarDish_opfor: ls_vehicle_radarDish {
    #include "../macros/static.hpp"
    crew = "B_UAV_AI";
};

class ls_vehicle_radarDish_woodland;
class ls_vehicle_radarDish_woodland_opfor: ls_vehicle_radarDish_woodland {
    #include "../macros/static.hpp"
    crew = "B_UAV_AI";
};

class ls_vehicle_radarDish_desert;
class ls_vehicle_radarDish_desert_opfor: ls_vehicle_radarDish_desert {
    #include "../macros/static.hpp"
    crew = "B_UAV_AI";
};



// Hiding Misc
class ls_ground_aat_base;
class ls_ground_aat: ls_ground_aat_base { scope = 1; };

class ls_vehicle_mtt_base;
class ls_vehicle_mtt_cis: ls_vehicle_mtt_base { scope = 1; };
class ls_vehicle_mtt_federation: ls_vehicle_mtt_base { scope = 1; };

class ls_vehicle_hmp_base;
class ls_vehicle_hmp: ls_vehicle_hmp_base { scope = 1; };
class ls_vehicle_hmp_transport: ls_vehicle_hmp_base { scope = 1; };

class ls_vehicle_aat_base;
class ls_vehicle_aat: ls_vehicle_aat_base { scope = 1; };
class ls_vehicle_aat_red: ls_vehicle_aat { scope = 1; };
class ls_vehicle_aat_cis: ls_vehicle_aat { scope = 1; };
class ls_vehicle_aat_green: ls_vehicle_aat { scope = 1; };
class ls_vehicle_aat_winter: ls_vehicle_aat { scope = 1; };

class ls_vehicle_bawhag_base;
class ls_vehicle_bawhag: ls_vehicle_bawhag_base { scope = 1; };

class ls_vehicle_j10_base;
class ls_vehicle_j10: ls_vehicle_j10_base { scope = 1; };

class ls_vehicle_mortar_base;
class ls_vehicle_mortar_cis: ls_vehicle_mortar_base { scope = 1; };

