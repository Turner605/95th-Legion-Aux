#include "script_component.hpp"
ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

[
    "AUX_95th_Enable_Kit_Checker", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    "Enable The Arsenal Kit Checker", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "95th Aux Mod", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [false, true, false], // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "AUX_95th_Spectator_Enabled", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    "Enable Spectator Cam On Death", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "95th Aux Mod", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [false, true, false], // data for this setting: [min, max, default, number of shown trailing decimals]
    0, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "AUX_95th_Fortify_Forceload_Enabled", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    "Forecload the 95th Small preset for fortify", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "95th Aux Mod", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [true, false, true], // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "AUX_95th_Default_Kits_Enabled", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    "Enable The Arsenal Default Kits", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "95th Aux Mod", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [false, true, true], // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

AUX_95th_Arsenal_Whitelisted_Weapons = [
    "AUX_95th_DC15L","AUX_95th_BX42","AUX_95th_DC15A_plastic","AUX_95th_DC15A","AUX_95th_DC15A_ugl_plastic", "AUX_95th_DC15A_ugl",
    "AUX_95th_DC15S","AUX_95th_DC15X","AUX_95th_DP23","AUX_95th_DW32S","AUX_95th_Z6","AUX_95th_DC15C","AUX_95th_DC15C_GL",
    "3AS_MPL_F","3AS_RepublicDatapadRifle","3AS_Valken38X_F","AUX_95th_WestarM5_GL","AUX_95th_WestarM5",

    "AUX_95th_DC17SA","ACE_VMH3","ACE_VMM3","ACE_Flashlight_Maglite_ML300L","hgun_esd_01_F","Weap_melee_knife","Knife_m3","Police_Bat",
    "Shovel_Russian","Shovel_Russian_Rotated","UNSC_Knife","UNSC_Knife_reversed","SW_clone_knife","WBK_SciFi_Sword_1","IMS_HL_StunBaton",
    "AUX_95th_DC17SA_Dual","3AS_RepublicDatapadPistol","Knife_kukri",

    "3AS_PLX1_F","3AS_RPS6_F","3AS_RPS6_HP","3AS_RPS6_G"
];

AUX_95th_Arsenal_Whitelisted_Throwables = [
    "95th_Pyro_Grenade","ACE_HandFlare_Yellow","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","OPTRE_M8_Flare_Blue","OPTRE_M8_Flare_Green",
    "OPTRE_M8_Flare","OPTRE_M8_Flare_White","OPTRE_M8_Flare_Yellow","B_IR_Grenade","ls_mag_glowrod_hiBlue","ls_mag_glowrod_hiGreen","ls_mag_glowrod_hiOrange",
    "ls_mag_glowrod_hiRed","ls_mag_glowrod_hiWhite","ls_mag_glowrod_hiYellow","JLTS_grenade_emp_mag","DSS_Grenade_Magazine_Thermal_C1","DSS_Magazine_Grenade_Sonar",
    "DSS_Magazine_Grenade_Hacker","DSS_Magazine_Grenade_Flashbang","SquadShieldMagazine","ShieldGrenade_Mag","3AS_SmokeYellow","3AS_SmokeWhite","3AS_SmokeRed",
    "3AS_SmokePurple","3AS_SmokeOrange","3AS_SmokeGreen","3AS_SmokeBlue", "AUX_95th_Magazine_Grenade_Medical_Shield", "DSS_Magazine_Grenade_Droid_Detector", 
    "DSS_Magazine_Grenade_Droid_Popper", "3AS_ThrowableCharge"
];

AUX_95th_Arsenal_Whitelisted_Explosives = [
    "IEDUrbanSmall_Remote_Mag","IEDLandSmall_Remote_Mag","JLTS_explosive_emp_20_mag","JLTS_explosive_emp_10_mag","JLTS_explosive_emp_50_mag","APERSMineDispenser_Mag",
    "IEDLandBig_Remote_Mag","IEDUrbanBig_Remote_Mag","ACE_FlareTripMine_Mag","SWLW_DetPack_remote_mag","APERSTripMine_Wire_Mag"
];

AUX_95th_Arsenal_Whitelisted_Magazines = [
	"AUX_95th_Universal_Shotgun_Mag","AUX_95th_Universal_Rifle_Mag","AUX_95th_Universal_Heavy_Mag","AUX_95th_Universal_Sniper_Mag","AUX_95th_Universal_Pistol_Mag",
	"AUX_95th_Stun_Long_Mag","AUX_95th_Stun_Short_Mag",
	"AUX_95th_DC17SA_Dual_Mag","AUX_95th_BX42_Fuel",

	"1Rnd_HE_Grenade_shell",
	"UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F", "UGL_FlareYellow_F","UGL_FlareCIR_F","ACE_40mm_Flare_ir",
	"3Rnd_HE_Grenade_shell","3Rnd_UGL_FlareWhite_F","3Rnd_UGL_FlareGreen_F","3Rnd_UGL_FlareRed_F","3Rnd_UGL_FlareYellow_F","3Rnd_UGL_FlareCIR_F",
	
	"1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell",
	
	"ACE_HuntIR_M203","ACE_40mm_Flare_white",
	
	"JLTS_RPS6_mag","JLTS_RPS6_HE_mag","ls_mag_at_plx","ls_mag_ap_plx","ls_mag_aa_plx","3AS_JLTS_MK43_AT","3AS_JLTS_MK44_HE","3AS_JLTS_MK39_AA","3AS_MK41_AT","3AS_MK42_HE",
	
	"Laserbatteries","3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell",
	"3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell",
	"3AS_6Rnd_HE_Grenade_shell"
];

AUX_95th_Arsenal_Whitelisted_Attachments = [
	"AUX_95th_optic_acog_DC15C","AUX_95th_optic_reflex_DC15C","AUX_95th_DC15X_Scope","3AS_Optic_Scope_WestarM5",
	"SEA_Optic_Holo_Two_Blue","SEA_Optic_Holo_Two_Red","SEA_Optic_Holo_Two_Yellow","SEA_Optic_Holo_Two_Green",
	"SEA_Optic_Holo_One_Blue","SEA_Optic_Holo_One_Green","SEA_Optic_Holo_One_Red","SEA_Optic_Holo_One_Yellow",
	"acc_flashlight","acc_pointer_IR","ACE_acc_pointer_green","AUX_95th_DC17SA_flashlight","acc_flashlight_pistol","AUX_95th_Bipod_DC15L_f",
	"AUX_95th_Optic_Scope_WestarM5"
];

AUX_95th_Arsenal_Whitelisted_Gear = [
	"JLTS_CloneBinocular","JLTS_CloneBinocular_black","ItemMap","ItemCompass","JLTS_clone_comlink","TFAR_microdagr","ItemWatch","ACE_Altimeter",
	"ItemGPS","B_UavTerminal",

	"95th_P1_Nightvision_Invisible",

	"NVG_Rangefinder_Gray_95th", "NVG_Rangefinder_White_95th", "NVG_Rangefinder_Brown_95th", "NVG_Rangefinder_Biege_95th",
	"NVG_Rangefinder_Overlay_Gray_95th", "NVG_Rangefinder_Overlay_White_95th", "NVG_Rangefinder_Overlay_Brown_95th", "NVG_Rangefinder_Overlay_Biege_95th",

	"NVG_Visor_Gray_95th", "NVG_Visor_White_95th", "NVG_Visor_Brown_95th", "NVG_Visor_Biege_95th",
	"NVG_Visor_Overlay_Gray_95th", "NVG_Visor_Overlay_White_95th", "NVG_Visor_Overlay_Brown_95th", "NVG_Visor_Overlay_Biege_95th",

	"NVG_Sergeant_Gray_95th", "NVG_Sergeant_White_95th", "NVG_Sergeant_Brown_95th", "NVG_Sergeant_Biege_95th",
	"NVG_Sergeant_Overlay_Gray_95th", "NVG_Sergeant_Overlay_White_95th", "NVG_Sergeant_Overlay_Brown_95th", "NVG_Sergeant_Overlay_Biege_95th",

	"NVG_Lieutenant_Gray_95th", "NVG_Lieutenant_White_95th", "NVG_Lieutenant_Brown_95th", "NVG_Lieutenant_Biege_95th",
	"NVG_Lieutenant_Overlay_Gray_95th", "NVG_Lieutenant_Overlay_White_95th", "NVG_Lieutenant_Overlay_Brown_95th", "NVG_Lieutenant_Overlay_Biege_95th",

	"NVG_Medical_Gray_95th", "NVG_Medical_White_95th", "NVG_Medical_Brown_95th", "NVG_Medical_Biege_95th",
	"NVG_Medical_Overlay_Gray_95th", "NVG_Medical_Overlay_White_95th", "NVG_Medical_Overlay_Brown_95th", "NVG_Medical_Overlay_Biege_95th",

	"Facewear_HUD_ARFAntenna_95th", "Facewear_HUD_Headlamps_95th", "Facewear_HUD_Headlamp_95th",
	"Facewear_Empty_ARFAntenna_95th", "Facewear_Empty_Headlamps_95th", "Facewear_Empty_Headlamp_95th",
	"Facewear_Scarf_Empty_Black_95th", "Facewear_Scarf_Empty_White_95th", "Facewear_Scarf_Empty_Brown_95th",
	"Facewear_Poncho_Empty_Green_95th"
];

AUX_95th_Arsenal_Whitelisted_Medical = [
	"kat_TXA","ACE_tourniquet","ACE_surgicalKit","kat_stethoscope","ACE_splint","kat_scalpel","kat_retractor","kat_Pulseoximeter","ACE_plasmaIV",
	"ACE_plasmaIV_250","ACE_plasmaIV_500","kat_PainkillerItem","kat_phenylephrine","kat_norepinephrine","kat_nitroglycerin","kat_naloxone","kat_nalbuphine",
	"kat_IV_16","kat_aatKit","kat_accuvac","ACE_adenosine","kat_X_AED","kat_amiodarone","kat_CarbonateItem","kat_atropine","Attachable_Helistretcher",
	"kat_AED","ACE_fieldDressing","ACE_elasticBandage","ACE_packingBandage","ACE_quikclot","ACE_bodyBag","kat_plate","kat_chestSeal","kat_clamp",
	"kat_vacuum","kat_EACA","ACE_epinephrine","kat_etomidate","kat_IO_FAST","kat_fentanyl","kat_flumazenil","kat_guedel","kat_ketamine",
	"kat_larynx","kat_lidocaine","kat_lorazepam","ACE_morphine","kat_sealant","kat_ncdKit","kat_gasmaskFilter","kat_CaffeineItem",
    "ACE_bloodIV","ACE_bloodIV_250","ACE_bloodIV_500","kat_Bubble_Wrap_Item","kat_BVM","kat_pocketBVM","kat_oxygenTank_150_Item","kat_oxygenTank_300_Item",
    "ACE_salineIV","ACE_salineIV_250","ACE_salineIV_500", "kat_AFAK", "ACE_bodyBag_blue", "ACE_bodyBag_white", "kat_IFAK", "kat_MFAK", "kat_PenthroxItem",
	"ACE_suture", "ACE_personalAidKit", "kat_suction", "ACE_painkillers", "kat_Painkiller", "kat_Carbonate", "kat_Caffeine", "kat_Penthrox", "kat_Bubble_Wrap",
	"kat_oxygenTank_150", "kat_oxygenTank_300", "kat_ultrasound", "kat_epinephrineIV", "kat_nasal", "kat_Pervitin", "kat_phenylephrineAuto", "kat_reboa", "kat_coag_sense" 
];

AUX_95th_Arsenal_Whitelisted_Equipment = [
	"ACE_wirecutter","ToolKit","ACE_Tripod","ACE_SpraypaintRed","ACE_SpraypaintGreen","ACE_SpraypaintBlue","ACE_SpraypaintBlack","ACE_SpottingScope",
	"ACE_CableTie","ACE_Chemlight_Shield","ACE_DeadManSwitch","ACE_DefusalKit","ACE_DAGR","ACE_EntrenchingTool","ACE_Fortify","ACE_Flashlight_MX991",
	"JLTS_riot_shield_item","WBK_HeadLampItem","ACE_IR_Strobe_Item","ACE_M26_Clacker","ACE_Clacker","ACE_Flashlight_XL50","ACE_MapTools",
	"ace_marker_flags_black","ace_marker_flags_blue","ace_marker_flags_green","ace_marker_flags_orange","ace_marker_flags_purple","ace_marker_flags_red",
	"ace_marker_flags_white","ace_marker_flags_yellow","ACE_microDAGR","MineDetector","ACE_HuntIR_monitor","ACE_RangeTable_82mm","DSS_Hacking_Device",
	"DSS_Cloaking_Device","AUX_95th_Disc_Shield","DSS_Support_Device","rw_canistra","ACE_RangeCard","AUX_95th_Turret_Deployer", "AUX_95th_Drone_Deployer"
];

//-----------------------------# Helmets #-----------------------------------
AUX_95th_Arsenal_Whitelisted_Helmets = [];
{_arsenalHelmets pushBack "AUX_95th_Helmet_P2_Airborne_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalHelmets pushBack "AUX_95th_Helmet_P1_ARF_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalHelmets pushBack "AUX_95th_Helmet_P1_Cold_Assault_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalHelmets pushBack "AUX_95th_Helmet_P1_Commando_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalHelmets pushBack "AUX_95th_Helmet_P1_Engineer_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalHelmets pushBack "AUX_95th_Helmet_P1_Hazard_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalHelmets pushBack "AUX_95th_Helmet_P1_Basic_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalHelmets pushBack "AUX_95th_Helmet_P1_Pilot_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalHelmets pushBack "AUX_95th_Helmet_P1_SpecOps_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;

//-----------------------------# Uniforms #-----------------------------------
AUX_95th_Arsenal_Whitelisted_Uniforms = [];
{_arsenalUniforms pushBack "AUX_95th_Uniform_P1_Basic_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalUniforms pushBack "AUX_95th_Uniform_P1_Cold_Assault_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalUniforms pushBack "AUX_95th_Uniform_P1_MC_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalUniforms pushBack "AUX_95th_Uniform_P1_Commando_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;

//-----------------------------# Vests #-----------------------------------
AUX_95th_Arsenal_Whitelisted_Vests = [];
{_arsenalVests pushBack "AUX_95th_Vest_Standard_Rifleman_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalVests pushBack "AUX_95th_Vest_Standard_Pilot_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalVests pushBack "AUX_95th_Vest_Standard_Jet_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalVests pushBack "AUX_95th_Vest_Standard_Grenadier_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalVests pushBack "AUX_95th_Vest_Standard_Medic_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalVests pushBack "AUX_95th_Vest_Standard_AT_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalVests pushBack "AUX_95th_Vest_Standard_Heavy_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalVests pushBack "AUX_95th_Vest_Standard_Marksman_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalVests pushBack "AUX_95th_Vest_Standard_Riot_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalVests pushBack "AUX_95th_Vest_Standard_Flame_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalVests pushBack "AUX_95th_Vest_Standard_Stealth_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalVests pushBack "AUX_95th_Vest_Standard_Support_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalVests pushBack "AUX_95th_Vest_Standard_Tech_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalVests pushBack "AUX_95th_Vest_Standard_Engineer_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalVests pushBack "AUX_95th_Vest_Standard_Crewman_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalVests pushBack "AUX_95th_Vest_Standard_Drone_Operator_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalVests pushBack "AUX_95th_Vest_ARC_Rifleman_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalVests pushBack "AUX_95th_Vest_Commando_Engineer_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalVests pushBack "AUX_95th_Vest_Commando_Tech_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalVests pushBack "AUX_95th_Vest_Commando_Marksman_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalVests pushBack "AUX_95th_Vest_Commando_Support_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalVests pushBack "AUX_95th_Vest_Sergeant_Rifleman_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalVests pushBack "AUX_95th_Vest_Lieutenant_Rifleman_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalVests pushBack "AUX_95th_Vest_CIO_Rifleman_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalVests pushBack "AUX_95th_Vest_Kama_Rifleman_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;


//-----------------------------# Backpacks #-----------------------------------
AUX_95th_Arsenal_Whitelisted_Backpacks = ["AUX_95th_BX42_Backpack"];
{_arsenalBackpacks pushBack "AUX_95th_Backpack_Belt_Light_Shown_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalBackpacks pushBack "AUX_95th_Backpack_Belt_Light_Hidden_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalBackpacks pushBack "AUX_95th_Backpack_Belt_Light_RTO_Shown_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalBackpacks pushBack "AUX_95th_Backpack_Belt_Light_RTO_Hidden_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalBackpacks pushBack "AUX_95th_Backpack_Rucksack_Light_Shown_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalBackpacks pushBack "AUX_95th_Backpack_Rucksack_Light_Hidden_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalBackpacks pushBack "AUX_95th_Backpack_Rucksack_Light_RTO_Shown_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalBackpacks pushBack "AUX_95th_Backpack_Rucksack_Light_RTO_Hidden_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalBackpacks pushBack "AUX_95th_Backpack_Rucksack_Heavy_Shown_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalBackpacks pushBack "AUX_95th_Backpack_Rucksack_Heavy_Hidden_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalBackpacks pushBack "AUX_95th_Backpack_Rucksack_Heavy_RTO_Shown_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalBackpacks pushBack "AUX_95th_Backpack_Rucksack_Heavy_RTO_Hidden_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalBackpacks pushBack "AUX_95th_Backpack_Rucksack_Medic_Shown_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalBackpacks pushBack "AUX_95th_Backpack_Rucksack_Medic_Hidden_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalBackpacks pushBack "AUX_95th_Backpack_Rucksack_Medic_RTO_Shown_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalBackpacks pushBack "AUX_95th_Backpack_Rucksack_Medic_RTO_Hidden_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalBackpacks pushBack "AUX_95th_Backpack_Rucksack_Ordnance_Shown_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalBackpacks pushBack "AUX_95th_Backpack_Rucksack_Ordnance_Hidden_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalBackpacks pushBack "AUX_95th_Backpack_Rucksack_Ordnance_RTO_Shown_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalBackpacks pushBack "AUX_95th_Backpack_Rucksack_Ordnance_RTO_Hidden_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalBackpacks pushBack "AUX_95th_Backpack_Mini_Light_Shown_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalBackpacks pushBack "AUX_95th_Backpack_Mini_Light_Hidden_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalBackpacks pushBack "AUX_95th_Backpack_Mini_Light_RTO_Shown_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalBackpacks pushBack "AUX_95th_Backpack_Mini_Light_RTO_Hidden_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalBackpacks pushBack "AUX_95th_Backpack_Micro_Light_Shown_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalBackpacks pushBack "AUX_95th_Backpack_Micro_Light_Hidden_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalBackpacks pushBack "AUX_95th_Backpack_Micro_Light_RTO_Shown_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalBackpacks pushBack "AUX_95th_Backpack_Micro_Light_RTO_Hidden_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalBackpacks pushBack "AUX_95th_Backpack_JT12_Light_Shown_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalBackpacks pushBack "AUX_95th_Backpack_JT12_Light_RTO_Shown_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalBackpacks pushBack "AUX_95th_Backpack_JT12_Medic_Shown_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalBackpacks pushBack "AUX_95th_Backpack_JT12_Medic_RTO_Shown_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalBackpacks pushBack "AUX_95th_Backpack_JT14_Light_Shown_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalBackpacks pushBack "AUX_95th_Backpack_JT14_Light_RTO_Shown_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;
{_arsenalBackpacks pushBack "AUX_95th_Backpack_Commando_Heavy_RTO_Shown_"+_x; } forEach AUX_95th_Arsenal_Whitelisted_Names;

AUX_95th_Arsenal_Whitelisted_All = (
    AUX_95th_Arsenal_Whitelisted_Weapons + 
    AUX_95th_Arsenal_Whitelisted_Attachments + 
    AUX_95th_Arsenal_Whitelisted_Magazines + 
    AUX_95th_Arsenal_Whitelisted_Throwables + 
    AUX_95th_Arsenal_Whitelisted_Explosives + 
    AUX_95th_Arsenal_Whitelisted_Medical + 
    AUX_95th_Arsenal_Whitelisted_Gear + 
    AUX_95th_Arsenal_Whitelisted_Equipment +
    AUX_95th_Arsenal_Whitelisted_Helmets + 
    AUX_95th_Arsenal_Whitelisted_Uniforms + 
    AUX_95th_Arsenal_Whitelisted_Vests + 
    AUX_95th_Arsenal_Whitelisted_Backpacks
);

// AUX_95th_Arsenal_Class_Items = [
// 	["AUX_95th_DC15X","JLTS_DW32S"], // 0 - Marksman
// 	["JLTS_riot_shield_item"], // 1 - Riot
// 	["AUX_95th_Disc_Shield","3AS_DC15L_F","JLTS_Z6"], // 2 - Heavy
// 	["95th_Backpack_EOD"], // 3 - Engineer
// 	["95th_Backpack_Medic"], // 4 - Medic
// 	["3AS_PLX1_F","3AS_RPS6_HP"], // 5 - AT
// 	[], // 6 - Crewman
// 	[], // 7 - Pilot
// 	["3AS_DC15C_F","3AS_DC15C_GL"], // 8 - NCO
// 	["AUX_95th_BX42"], // 9 - Flame
// 	["95th_JumpPack"], // 10 - Jet
// 	["DSS_Cloaking_Device"], // 11 - Stealth
// 	["JLTS_DC15A_ugl_plastic","JLTS_DC15A_ugl","3AS_WestarM5_GL"], // 12 - Grenadier
// 	["DSS_Hacking_Device"], // 13 - Tech
// 	["DSS_Support_Device"] // 14 - Support
// ];

ADDON = true;
