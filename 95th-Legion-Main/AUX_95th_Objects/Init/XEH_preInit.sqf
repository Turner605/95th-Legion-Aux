[
    "enable_kit_checker_95th", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    "Enable The Arsenal Kit Checker", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "95th Aux Mod", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [false, true, true], // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "AUX_95th_Shield_Small_Health", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    ["Small Shield Health", "Small Shield Health"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["95th Aux Mod", "Shields"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [10, 10000, 2000, 0, false], // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "AUX_95th_Shield_Small_Cooldown_Duration", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    ["Small Shield Cooldown", "Small Shield Cooldown"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["95th Aux Mod", "Shields"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [1, 240, 60, 0, false], // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "AUX_95th_Droid_Factory_Wave_Delay", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    ["Spawner Wave Delay", "The delay between spawner waves."], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["95th Aux Mod", "Droid Factories"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [1, 240, 60, 0, false], // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "AUX_95th_Droid_Factory_Flak_Build_Delay", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    ["Spawner Wave Delay", "The delay before a flak cannon will rebuild itself."], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["95th Aux Mod", "Droid Factories"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [1, 920, 480, 0, false], // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "AUX_95th_Droid_Factory_Ground_Range", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    ["Spawner Ground Range", "The distance to search for valid ground targets"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["95th Aux Mod", "Droid Factories"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [100, 20000, 1500, 0, false], // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "AUX_95th_Droid_Factory_Air_Range", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    ["Spawner Air Range", "The distance to search for valid air targets"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["95th Aux Mod", "Droid Factories"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [100, 100000, 20000, 0, false], // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

//-----------------------------# Weapons #-----------------------------------
private _arsenalWeapons = [
	"JLTS_DC15S","JLTS_DC15A_plastic","JLTS_DC15A","AUX_95th_DP23","3AS_WestarM5_F","JLTS_DC17SA","ACE_VMH3","ACE_VMM3","Weap_melee_knife","Knife_m3",
	"Police_Bat","Shovel_Russian","UNSC_Knife","UNSC_Knife_reversed","3AS_RPS6_F","AUX_95th_DC15X","JLTS_DW32S","3AS_DC15L_F","JLTS_Z6","3AS_PLX1_F",
	"3AS_RPS6_HP","3AS_DC15C_F","3AS_DC15C_GL","AUX_95th_BX42","JLTS_DC15A_ugl_plastic","JLTS_DC15A_ugl","3AS_WestarM5_GL"
];

//-----------------------------# Ammo #-----------------------------------
private _arsenalAmmo = [
	"3AS_40Rnd_EC40_Mag","3AS_200Rnd_EC40_Mag","JLTS_DC15A_mag","JLTS_stun_mag_short","JLTS_stun_mag_long",
	"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F",
	"UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell",
	"1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","ACE_HuntIR_M203","OPTRE_1Rnd_Smoke_Grenade_shell",
	"OPTRE_1Rnd_SmokeRed_Grenade_shell","OPTRE_1Rnd_SmokeGreen_Grenade_shell","OPTRE_1Rnd_SmokeYellow_Grenade_shell","OPTRE_1Rnd_SmokePurple_Grenade_shell",
	"OPTRE_1Rnd_SmokeBlue_Grenade_shell","OPTRE_1Rnd_SmokeOrange_Grenade_shell","ACE_40mm_Flare_white","ACE_40mm_Flare_red","ACE_40mm_Flare_green","ACE_40mm_Flare_ir",
	"OPTRE_3Rnd_Smoke_Grenade_shell","OPTRE_3Rnd_SmokeRed_Grenade_shell","OPTRE_3Rnd_SmokeGreen_Grenade_shell","OPTRE_3Rnd_SmokeYellow_Grenade_shell",
	"OPTRE_3Rnd_SmokePurple_Grenade_shell","OPTRE_3Rnd_SmokeBlue_Grenade_shell","OPTRE_3Rnd_SmokeOrange_Grenade_shell","JLTS_DC15S_mag","AUX_95th_DC15X_Mag",
	"AUX_95th_DP23_Mag","JLTS_DW32S_mag","JLTS_Z6_mag","JLTS_RPS6_mag","JLTS_RPS6_HE_mag","ls_mag_at_plx","ls_mag_ap_plx","ls_mag_aa_plx","JLTS_DC17SA_mag",
	"JLTS_EMP_mag","AUX_95th_BX42_Fuel","3AS_JLTS_MK43_AT","3AS_JLTS_MK44_HE","3AS_JLTS_MK39_AA","CBA_FakeLauncherMagazine","3AS_MK41_AT","3AS_MK42_HE",
	"Laserbatteries","3Rnd_HE_Grenade_shell","3Rnd_UGL_FlareWhite_F","3Rnd_UGL_FlareGreen_F","3Rnd_UGL_FlareRed_F","3Rnd_UGL_FlareYellow_F","3Rnd_UGL_FlareCIR_F",
	"3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell",
	"3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell","3AS_100Rnd_EC40_mag","3AS_5Rnd_EC80_mag","3AS_AntiArmour_mag","3AS_60Rnd_EC50_Mag",
	"3AS_6Rnd_HE_Grenade_shell","3AS_40Rnd_EM40_Mag","3AS_200Rnd_EM40_Mag","OPTRE_1Rnd_MasterKey_Pellets","OPTRE_1Rnd_MasterKey_Slugs","OPTRE_signalSmokeR",
	"OPTRE_signalSmokeO","OPTRE_signalSmokeY","OPTRE_signalSmokeG","OPTRE_signalSmokeB","OPTRE_signalSmokeP","OPTRE_3Rnd_MasterKey_Pellets","OPTRE_3Rnd_MasterKey_Slugs",
	"3AS_100Rnd_EM40_mag","3AS_5Rnd_EM80_mag","3AS_60Rnd_Test_mag","3AS_60Rnd_EM50_RedPlasma"
];

//-----------------------------# Weapon Attachments #-----------------------------------
private _arsenalAttachments = [
	"3AS_optic_acog_DC15C","3AS_optic_reflex_DC15C","AUX_95th_DC15X_Scope","3AS_Optic_Scope_WestarM5","3AS_Optic_DC15L",
	"SEA_Optic_Holo_Two_Blue","SEA_Optic_Holo_Two_Red","SEA_Optic_Holo_Two_Yellow","SEA_Optic_Holo_Two_Green",
	"SEA_Optic_Holo_One_Blue","SEA_Optic_Holo_One_Green","SEA_Optic_Holo_One_Red","SEA_Optic_Holo_One_Yellow",
	"acc_flashlight","acc_pointer_IR","ACE_acc_pointer_green","JLTS_DC17SA_flashlight","acc_flashlight_pistol","3AS_Bipod_DC15L_f"
];

//-----------------------------# Helmets #-----------------------------------
private _arsenalHelmets = [
	"95th_P1_Pilot_Helmet_Trooper","95th_P1_Pilot_Helmet_Jinter","95th_SpecOps_Helmet_Trooper","95th_Helmet_Trooper","95th_Helmet_Shiny","95th_Helmet_Neary","95th_Helmet_Bretek",
	"95th_Helmet_Havoc","95th_Helmet_Sand","95th_Helmet_Manila","95th_Helmet_Biedronka","95th_Helmet_Volt","95th_Helmet_Splash","95th_Helmet_Turner",
	"95th_Helmet_Outcast","95th_Helmet_Veteran","95th_Helmet_Senior","95th_Helmet_Medic","95th_Hazard_Helmet_Trooper","95th_Engineer_Helmet_Revan",
	"95th_Engineer_Helmet_Kong","95th_Engineer_Helmet_Trooper","95th_ColdAssault_Helmet_Trooper","95th_ARF_Helmet_Trooper","95th_ARC_Helmet_Trooper",
	"95th_Airborne_Helmet_Trooper","95th_Engineer_Helmet_Som","95th_Commando_Helmet_Trooper","95th_ARF_Helmet_Osprey","95th_ARF_Helmet_Sythe",
	"95th_Helmet_Smaug","95th_Helmet_Commie","95th_Helmet_Ratler","95th_ARF_Helmet_Cheezy","95th_Helmet_Som","95th_Helmet_Hypo", "95th_Helmet_MadHatter",
	"95th_P1_Pilot_Helmet_Outcast", "95th_Helmet_Third", "95th_Helmet_Stitch", "95th_ARF_Helmet_Mobius"
];

//-----------------------------# Uniforms #-----------------------------------
private _arsenalUniforms = [
	"95th_P1_Uniform_Veteran","95th_P1_Uniform_Trooper","95th_P1_Uniform_Shiny","95th_P1_Uniform_Sergeant","95th_P1_Uniform_Senior","95th_P1_Uniform_Medic",
	"95th_P1_Uniform_Lieutenant","95th_P1_Uniform_Captain","95th_P1_Uniform_Volt","95th_ColdAssault_Uniform_Trooper","95th_MC_Uniform_Zeus",
	"95th_MC_Uniform_Turner","95th_Commando_Uniform_Trooper","95th_P1_Uniform_Jinter","95th_P1_Uniform_Bretek"
];

//-----------------------------# Vests #-----------------------------------
private _arsenalVests = [
	"95th_Katarn_Vest_Demo","95th_Katarn_Vest_Tech","95th_Officer_Vest_Zeus","95th_Officer_Vest_Lieutenant","95th_Officer_Vest_Sergeant",
	"95th_Basic_Vest_Rifleman","95th_Basic_Vest_Crewman","95th_Basic_Vest_Engineer","95th_Basic_Vest_Tech","95th_Basic_Vest_Support","95th_Basic_Vest_Stealth",
	"95th_Basic_Vest_Flame","95th_Basic_Vest_Riot","95th_Basic_Vest_Marksman","95th_Basic_Vest_Heavy","95th_Basic_Vest_AT",
	"95th_Basic_Vest_Medic","95th_Basic_Vest_Jet","95th_Basic_Vest_Grenadier","95th_Basic_Vest_Pilot","95th_ARC_Vest_Trooper",
	"95th_Officer_Vest_Havoc", "95th_Officer_Vest_Outcast", "95th_Officer_Vest_Turner",



	"AUX_95th_Vest_Sergeant_Trooper", "AUX_95th_Vest_Lieutenant_Trooper", "AUX_95th_Vest_CIO_Trooper", "AUX_95th_Kama_Trooper",
	"AUX_95th_Vest_Sergeant_Havoc", "AUX_95th_Vest_Lieutenant_Havoc", "AUX_95th_Vest_CIO_Havoc", "AUX_95th_Kama_Havoc",
	"AUX_95th_Vest_Sergeant_Outcast", "AUX_95th_Vest_Lieutenant_Outcast", "AUX_95th_Vest_CIO_Outcast", "AUX_95th_Kama_Outcast",
	"AUX_95th_Vest_Sergeant_Turner", "AUX_95th_Vest_Lieutenant_Turner", "AUX_95th_Vest_CIO_Turner", "AUX_95th_Kama_Turner"
];

//-----------------------------# Backpacks #-----------------------------------
private _arsenalBackpacks = [
	"AUX_95th_Bag_Backpack_Visible_Trooper", "AUX_95th_Bag_Backpack_Invisible_Trooper",
 	"AUX_95th_Backpack_Visible_Heavy", "AUX_95th_Backpack_Invisible_Heavy", 
	"AUX_95th_Backpack_Visible_Medic", "AUX_95th_Backpack_Invisible_Medic", 
	"AUX_95th_Backpack_Visible_Ordnance", "AUX_95th_Backpack_Invisible_Ordnance",
	"AUX_95th_RTO_Backpack_Visible_Medic", "AUX_95th_RTO_Backpack_Invisible_Medic", 
	"AUX_95th_RTO_Backpack_Visible_RTO", "AUX_95th_RTO_Backpack_Invisible_RTO", 
	"AUX_95th_RTO_Backpack_Visible_Mini_RTO", "AUX_95th_RTO_Backpack_Visible_Mini_Turner",
	"AUX_95th_JT12_Jetpack_Trooper",
	"AUX_95th_MC_Jetpack_Trooper", "AUX_95th_MC_Jetpack_Turner",
	"95th_Katarn_Backpack","AUX_95th_BX42_Backpack",
	"3AS_Republic_HR_Bag","3AS_Republic_HR_Shield_Bag","JLTS_UST_turret_GAR_backpack","JLTS_portable_shield_gar_backpack", "ACE_TacticalLadder_Pack",
	"AUX_95th_Backpack_Visible_Stitch", "AUX_95th_RTO_Backpack_Visible_Stitch", "AUX_95th_RTO_Backpack_Invisible_Stitch"
];

//-----------------------------# Gear #-----------------------------------
// Facewear, NVG's, Binocs, Map, Terminal, Radio, Compass, Watch Slot, 
private _arsenalGear = [
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

//-----------------------------# Medical #-----------------------------------
private _arsenalMedical = [
	"kat_TXA","ACE_tourniquet","ACE_surgicalKit","kat_stethoscope","ACE_splint","kat_scalpel","kat_retractor","kat_Pulseoximeter","ACE_plasmaIV",
	"ACE_plasmaIV_250","ACE_plasmaIV_500","kat_PainkillerItem","kat_phenylephrine","kat_norepinephrine","kat_nitroglycerin","kat_naloxone","kat_nalbuphine",
	"kat_IV_16","kat_aatKit","kat_accuvac","ACE_adenosine","kat_X_AED","kat_amiodarone","kat_CarbonateItem","kat_atropine","Attachable_Helistretcher",
	"kat_AED","ACE_fieldDressing","ACE_elasticBandage","ACE_packingBandage","ACE_quikclot","ACE_bodyBag","kat_plate","kat_chestSeal","kat_clamp",
	"kat_vacuum","kat_EACA","ACE_epinephrine","kat_etomidate","kat_IO_FAST","kat_fentanyl","kat_flumazenil","kat_guedel","kat_ketamine",
	"kat_larynx","kat_lidocaine","kat_lorazepam","ACE_morphine","kat_sealant","kat_PervitinItem","kat_ncdKit","kat_gasmaskFilter","kat_CaffeineItem",
    "ACE_bloodIV","ACE_bloodIV_250","ACE_bloodIV_500","kat_Bubble_Wrap_Item","kat_BVM","kat_pocketBVM","kat_oxygenTank_150_Item","kat_oxygenTank_300_Item",
    "ACE_salineIV","ACE_salineIV_250","ACE_salineIV_500", "kat_AFAK", "ACE_bodyBag_blue", "ACE_bodyBag_white", "kat_IFAK", "kat_MFAK", "kat_PenthroxItem",
	"ACE_suture"
];

//-----------------------------# Explosives #-----------------------------------
private _arsenalExplosives = [
    "IEDUrbanSmall_Remote_Mag","IEDLandSmall_Remote_Mag","JLTS_explosive_emp_20_mag","JLTS_explosive_emp_10_mag","JLTS_explosive_emp_50_mag","APERSMineDispenser_Mag",
    "IEDLandBig_Remote_Mag","IEDUrbanBig_Remote_Mag","ACE_FlareTripMine_Mag","SWLW_DetPack_remote_mag","APERSTripMine_Wire_Mag"
];

//-----------------------------# Grenades #-----------------------------------
private _arsenalGrenades = [
    "95th_Pyro_Grenade","ACE_HandFlare_Yellow","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","OPTRE_M8_Flare_Blue","OPTRE_M8_Flare_Green",
    "OPTRE_M8_Flare","OPTRE_M8_Flare_White","OPTRE_M8_Flare_Yellow","B_IR_Grenade","ls_mag_glowrod_hiBlue","ls_mag_glowrod_hiGreen","ls_mag_glowrod_hiOrange",
    "ls_mag_glowrod_hiRed","ls_mag_glowrod_hiWhite","ls_mag_glowrod_hiYellow","JLTS_grenade_emp_mag","DSS_Grenade_Magazine_Thermal_C1","DSS_Magazine_Grenade_Sonar",
    "DSS_Magazine_Grenade_Hacker","DSS_Magazine_Grenade_Flashbang","SquadShieldMagazine","ShieldGrenade_Mag","3AS_SmokeYellow","3AS_SmokeWhite","3AS_SmokeRed",
    "3AS_SmokePurple","3AS_SmokeOrange","3AS_SmokeGreen","3AS_SmokeBlue", "NFL_Magazine_Grenade_Medical_Shield"
];

//-----------------------------# Equipment #-----------------------------------
private _arsenalEquipment = [
	"ACE_wirecutter","ToolKit","ACE_Tripod","ACE_SpraypaintRed","ACE_SpraypaintGreen","ACE_SpraypaintBlue","ACE_SpraypaintBlack","ACE_SpottingScope",
	"ACE_CableTie","ACE_Chemlight_Shield","ACE_DeadManSwitch","ACE_DefusalKit","ACE_DAGR","ACE_EntrenchingTool","ACE_Fortify","ACE_Flashlight_MX991",
	"JLTS_riot_shield_item","WBK_HeadLampItem","ACE_IR_Strobe_Item","ACE_M26_Clacker","ACE_Clacker","ACE_Flashlight_XL50","ACE_MapTools",
	"ace_marker_flags_black","ace_marker_flags_blue","ace_marker_flags_green","ace_marker_flags_orange","ace_marker_flags_purple","ace_marker_flags_red",
	"ace_marker_flags_white","ace_marker_flags_yellow","ACE_microDAGR","MineDetector","ACE_HuntIR_monitor","ACE_RangeTable_82mm","DSS_Hacking_Device",
	"DSS_Cloaking_Device","NFL_Disc_Shield","DSS_Support_Device","rw_canistra","ACE_RangeCard"
];

Arsenal_All_Items_95th = (_arsenalWeapons + _arsenalAmmo + _arsenalAttachments + _arsenalHelmets + _arsenalUniforms + _arsenalVests + _arsenalBackpacks + _arsenalGear + _arsenalMedical + _arsenalExplosives + _arsenalGrenades + _arsenalEquipment);

Arsenal_Class_Items_95th = [
	["AUX_95th_DC15X","JLTS_DW32S"], // 0 - Marksman
	["JLTS_riot_shield_item"], // 1 - Riot
	["NFL_Disc_Shield","3AS_DC15L_F","JLTS_Z6"], // 2 - Heavy
	["95th_Backpack_EOD"], // 3 - Engineer
	["95th_Backpack_Medic"], // 4 - Medic
	["3AS_PLX1_F","3AS_RPS6_HP"], // 5 - AT
	[], // 6 - Crewman
	[], // 7 - Pilot
	["3AS_DC15C_F","3AS_DC15C_GL"], // 8 - NCO
	["AUX_95th_BX42"], // 9 - Flame
	["95th_JumpPack"], // 10 - Jet
	["DSS_Cloaking_Device"], // 11 - Stealth
	["JLTS_DC15A_ugl_plastic","JLTS_DC15A_ugl","3AS_WestarM5_GL"], // 12 - Grenadier
	["DSS_Hacking_Device"], // 13 - Tech
	["DSS_Support_Device"] // 14 - Support
];

// What is: "SCH_B_LTD_Packed","SCH_B_WD_LTD_Packed"

// What to do with:
// "3AS_DC17STest_F" - Dual pistols 
// "3AS_Valken38X_F" - Valken,
// "LFP_sonar_device" - Sonar