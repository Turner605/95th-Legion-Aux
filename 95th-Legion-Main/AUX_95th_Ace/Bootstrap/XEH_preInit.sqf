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

AUX_95th_Arsenal_Class_Items = [
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

AUX_95th_Arsenal_Whitelisted_Weapons = [
    "AUX_95th_DC15L","AUX_95th_BX42","AUX_95th_DC15A_plastic","AUX_95th_DC15A","AUX_95th_DC15A_ugl_plastic", "AUX_95th_DC15A_ugl",
    "AUX_95th_DC15S","AUX_95th_DC15X","AUX_95th_DP23","AUX_95th_DW32S","AUX_95th_Z6","AUX_95th_DC15C","AUX_95th_DC15C_GL","3AS_DC17M_F",
    "3AS_MPL_F","3AS_RepublicDatapadRifle","3AS_Valken38X_F","AUX_95th_WestarM5_GL","AUX_95th_WestarM5",

    "AUX_95th_DC17SA","ACE_VMH3","ACE_VMM3","ACE_Flashlight_Maglite_ML300L","hgun_esd_01_F","Weap_melee_knife","Knife_m3","Police_Bat",
    "Shovel_Russian","Shovel_Russian_Rotated","UNSC_Knife","UNSC_Knife_reversed","SW_clone_knife","WBK_SciFi_Sword_1","IMS_HL_StunBaton",
    "AUX_95th_Weapons_DC17SA_Dual","3AS_RepublicDatapadPistol","Knife_kukri",

    "3AS_PLX1_F","3AS_RPS6_Base","3AS_RPS6_HP","3AS_RPS6_Guided"
];

AUX_95th_Arsenal_Whitelisted_Throwables = [
    "95th_Pyro_Grenade","ACE_HandFlare_Yellow","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","OPTRE_M8_Flare_Blue","OPTRE_M8_Flare_Green",
    "OPTRE_M8_Flare","OPTRE_M8_Flare_White","OPTRE_M8_Flare_Yellow","B_IR_Grenade","ls_mag_glowrod_hiBlue","ls_mag_glowrod_hiGreen","ls_mag_glowrod_hiOrange",
    "ls_mag_glowrod_hiRed","ls_mag_glowrod_hiWhite","ls_mag_glowrod_hiYellow","JLTS_grenade_emp_mag","DSS_Grenade_Magazine_Thermal_C1","DSS_Magazine_Grenade_Sonar",
    "DSS_Magazine_Grenade_Hacker","DSS_Magazine_Grenade_Flashbang","SquadShieldMagazine","ShieldGrenade_Mag","3AS_SmokeYellow","3AS_SmokeWhite","3AS_SmokeRed",
    "3AS_SmokePurple","3AS_SmokeOrange","3AS_SmokeGreen","3AS_SmokeBlue", "NFL_Magazine_Grenade_Medical_Shield"
];

AUX_95th_Arsenal_Whitelisted_Magazines = [
	"AUX_95th_Universal_Shotgun_Mag","AUX_95th_Universal_Rifle_Mag","AUX_95th_Universal_Heavy_Mag","AUX_95th_Universal_Sniper_Mag","AUX_95th_Universal_Pistol_Mag",
	"AUX_95th_Stun_Long_Mag","AUX_95th_Stun_Short_Mag",
	"3AS_40Rnd_EC40_Mag",

	"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F",
	"UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell",
	"1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","ACE_HuntIR_M203","OPTRE_1Rnd_Smoke_Grenade_shell",
	"OPTRE_1Rnd_SmokeRed_Grenade_shell","OPTRE_1Rnd_SmokeGreen_Grenade_shell","OPTRE_1Rnd_SmokeYellow_Grenade_shell","OPTRE_1Rnd_SmokePurple_Grenade_shell",
	"OPTRE_1Rnd_SmokeBlue_Grenade_shell","OPTRE_1Rnd_SmokeOrange_Grenade_shell","ACE_40mm_Flare_white","ACE_40mm_Flare_red","ACE_40mm_Flare_green","ACE_40mm_Flare_ir",
	"OPTRE_3Rnd_Smoke_Grenade_shell","OPTRE_3Rnd_SmokeRed_Grenade_shell","OPTRE_3Rnd_SmokeGreen_Grenade_shell","OPTRE_3Rnd_SmokeYellow_Grenade_shell",
	"OPTRE_3Rnd_SmokePurple_Grenade_shell","OPTRE_3Rnd_SmokeBlue_Grenade_shell","OPTRE_3Rnd_SmokeOrange_Grenade_shell","JLTS_DC15S_mag","AUX_95th_DC15X_Mag",
	"AUX_95th_DP23_Mag","JLTS_DW32S_mag","JLTS_Z6_mag","JLTS_RPS6_mag","JLTS_RPS6_HE_mag","ls_mag_at_plx","ls_mag_ap_plx","ls_mag_aa_plx","AUX_95th_DC17SA_Dual_Mag",
	"JLTS_EMP_mag","AUX_95th_BX42_Fuel","3AS_JLTS_MK43_AT","3AS_JLTS_MK44_HE","3AS_JLTS_MK39_AA","CBA_FakeLauncherMagazine","3AS_MK41_AT","3AS_MK42_HE",
	"Laserbatteries","3Rnd_HE_Grenade_shell","3Rnd_UGL_FlareWhite_F","3Rnd_UGL_FlareGreen_F","3Rnd_UGL_FlareRed_F","3Rnd_UGL_FlareYellow_F","3Rnd_UGL_FlareCIR_F",
	"3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell",
	"3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell","3AS_100Rnd_EC40_mag","3AS_5Rnd_EC80_mag","3AS_AntiArmour_mag","3AS_60Rnd_EC50_Mag",
	"3AS_6Rnd_HE_Grenade_shell","3AS_40Rnd_EM40_Mag","3AS_200Rnd_EM40_Mag","OPTRE_1Rnd_MasterKey_Pellets","OPTRE_1Rnd_MasterKey_Slugs","OPTRE_signalSmokeR",
	"OPTRE_signalSmokeO","OPTRE_signalSmokeY","OPTRE_signalSmokeG","OPTRE_signalSmokeB","OPTRE_signalSmokeP","OPTRE_3Rnd_MasterKey_Pellets","OPTRE_3Rnd_MasterKey_Slugs"
];