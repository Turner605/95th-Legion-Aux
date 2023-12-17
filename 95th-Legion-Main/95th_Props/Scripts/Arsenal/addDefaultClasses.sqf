// Maybe add a setting to decide if we should init this for other servers benefit?

// 01 - Rifleman
// 01 - Marksman
// 02 - Riot
// 03 - Heavy
// 04 - Engineer
// 05 - Medic
// 06 - AT
// 07 - Crewman
// 08 - Pilot
// 09 - NCO
// 10 - Flame
// 11 - Jet
// 12 - Grenadier
// 13 - Stealth
// 14 - Tech
// 15 - Support

//-----------------------------# Weapon Options #-----------------------------------
private _dc17s = ["JLTS_DC17SA","","JLTS_DC17SA_flashlight","",["JLTS_DC17SA_mag",20],["JLTS_stun_mag_long",5],""];
private _dc15a = ["JLTS_DC15A_plastic","","","",["JLTS_DC15A_mag",60],["JLTS_stun_mag_long",5],""];
private _dc15a_ugl = ["JLTS_DC15A_ugl_plastic","","","",["JLTS_DC15A_mag",60],["JLTS_stun_mag_long",5],""];
private _dc15s = ["JLTS_DC15S","","","",["JLTS_DC15S_mag",80],["JLTS_stun_mag_long",5],""];
private _dc15x = ["AUX_95th_JLTS_DC15X","","","AUX_95th_JLTS_DC15X_scope",["AUX_95th_JLTS_DC15X_mag",15],[],""];
private _z6 = ["JLTS_Z6","","","",["JLTS_Z6_mag",300],[],""];
private _rps6 = ["3AS_RPS6_HP","","","",["3AS_MK41_AT",1],[],""];
private _bx42 = ["95th_FlameThrower","","","",["95th_FlameThrower_Fuel",300],[],""];

//-----------------------------# Ammo Options #-----------------------------------
private _dc17s_Ammo = [["JLTS_DC17SA_mag",2,20],["JLTS_stun_mag_long",2,5]];
private _dc15a_Ammo = _dc17s_Ammo + [["JLTS_DC15A_mag",7,60]];
private _dc15a_ugl_Ammo = _dc17s_Ammo + [["JLTS_DC15A_mag",7,60],["1Rnd_HE_Grenade_shell",7,1]];
private _dc15s_Ammo = _dc17s_Ammo + [["JLTS_DC15S_mag",7,80]];
private _dc15x_Ammo = _dc17s_Ammo + [["AUX_95th_JLTS_DC15X_mag",7,15]];
private _z6_Ammo = _dc17s_Ammo + [["JLTS_Z6_mag",7,300]];
private _rps6_Ammo = _dc17s_Ammo + [["3AS_MK41_AT",2,1]];
private _bx42_Ammo = _dc17s_Ammo + [["95th_FlameThrower_Fuel",2,300]];

//-----------------------------# Base Options #-----------------------------------
private _baseUniformContent = [["ACE_IR_Strobe_Item",4],["WBK_HeadLampItem",1],["ACE_EntrenchingTool",1],["ACE_CableTie",6],["3AS_SmokeWhite",6,1]];
private _baseBackpackContent = [["ACE_morphine",2],["ACE_tourniquet",4],["ACE_elasticBandage",20],["ACE_bodyBag",1],["kat_chestSeal",2],["ACE_epinephrine",2],["kat_guedel",4],["ACE_plasmaIV",2],["ACE_plasmaIV_500",2],["ACE_plasmaIV_250",2],["kat_Pulseoximeter",2],["ACE_splint",2],["ACE_packingBandage",20],["kat_Painkiller",5,10]];
private _medicBackpackContent = [["ACE_morphine",5],["ACE_tourniquet",16],["ACE_elasticBandage",50],["ACE_bodyBag",1],["kat_chestSeal",12],["ACE_epinephrine",5],["kat_guedel",4],["ACE_plasmaIV_500",13],["ACE_plasmaIV_250",2],["kat_Pulseoximeter",8],["ACE_splint",10],["ACE_packingBandage",50],["kat_aatKit",5],["kat_etomidate",10],["kat_flumazenil",10],["kat_lorazepam",10],["ACE_adenosine",5],["kat_larynx",10],["kat_IO_FAST",10],["ACE_plasmaIV",8],["kat_stethoscope",1],["kat_BVM",1],["kat_accuvac",1],["kat_Painkiller",5,10],["kat_Carbonate",1,10]];

//-----------------------------# Role Options #-----------------------------------

private _roleArray = [
	[
		"[95th] 00 - Rifleman (DC15A)",
		_dc15a, [], _dc17s,
		"95th_P1_Uniform_Trooper", _baseUniformContent,
		"95th_Basic_Vest_Rifleman", _dc15a_Ammo,
		"AUX_95th_Bag_Backpack_Visible_Trooper", _baseBackpackContent,
		"95th_Helmet_Trooper"
	],
	[
		"[95th] 01 - Marksman (DC15X)",
		_dc15x, [], _dc17s,
		"95th_P1_Uniform_Trooper", _baseUniformContent,
		"95th_Basic_Vest_Marksman", _dc15x_Ammo,
		"AUX_95th_Bag_Backpack_Visible_Trooper", _baseBackpackContent,
		"95th_ARF_Helmet_Trooper"
	],
	[
		"[95th] 02 - Riot (DC15S)",
		_dc15s, [], _dc17s,
		"95th_P1_Uniform_Trooper", _baseUniformContent,
		"95th_Basic_Vest_Riot", _dc15s_Ammo,
		"AUX_95th_Bag_Backpack_Visible_Trooper", _baseBackpackContent + [["JLTS_riot_shield_item",1]],
		"95th_Helmet_Trooper"
	],
	[
		"[95th] 03 - Heavy (Z6)",
		_z6, [], _dc17s,
		"95th_P1_Uniform_Trooper", _baseUniformContent + [["NFL_Disc_Shield",1]],
		"95th_Basic_Vest_Heavy", _z6_Ammo,
		"AUX_95th_Backpack_Visible_Heavy", _baseBackpackContent + [["ACE_Tripod",1]],
		"95th_Helmet_Trooper"
	],
	[
		"[95th] 04 - Engineer (DC15A)",
		_dc15a, [], _dc17s,
		"95th_P1_Uniform_Trooper", _baseUniformContent + [["ACE_Fortify",1],["ACE_DefusalKit",1],["ACE_wirecutter",1],["ACE_Clacker",1]],
		"95th_Basic_Vest_Engineer", _dc15a_Ammo,
		"AUX_95th_Backpack_Visible_Ordnance", _baseBackpackContent + [["SWLW_DetPack_remote_mag",6,1], ["NFL_Auto_Turret",1]],
		"95th_Engineer_Helmet_Trooper"
	],
	[
		"[95th] 05 - Medic (DC15A)",
		_dc15a, [], _dc17s,
		"95th_P1_Uniform_Medic", _baseUniformContent + [["NFL_Magazine_Grenade_Medical_Shield",1,1]],
		"95th_Basic_Vest_Medic", _dc15a_Ammo,
		"AUX_95th_Backpack_Visible_Medic", _medicBackpackContent,
		"95th_Helmet_Medic"
	],
	[
		"[95th] 06 - AT (DC15A)",
		_dc15a, _rps6, _dc17s,
		"95th_P1_Uniform_Trooper", _baseUniformContent,
		"95th_Basic_Vest_AT", _dc15a_Ammo,
		"AUX_95th_Backpack_Visible_Ordnance", _baseBackpackContent + _rps6_Ammo,
		"95th_Helmet_Trooper"
	],
	[
		"[95th] 07 - Crewman (DC15S)",
		_dc15s, [], _dc17s,
		"95th_P1_Uniform_Trooper", _baseUniformContent,
		"95th_Basic_Vest_Crewman", _dc15s_Ammo,
		"AUX_95th_Backpack_Visible_Ordnance", _baseBackpackContent,
		"95th_Engineer_Helmet_Trooper"
	],
	[
		"[95th] 08 - Pilot (DC15S)",
		_dc15s, [], _dc17s,
		"95th_P1_Uniform_Trooper", _baseUniformContent,
		"95th_Basic_Vest_Pilot", _dc15s_Ammo,
		"AUX_95th_Bag_Backpack_Visible_Trooper", _baseBackpackContent,
		"95th_P1_Pilot_Helmet_Trooper"
	],
	[
		"[95th] 09 - NCO (DC15S)",
		_dc15s, [], _dc17s,
		"95th_P1_Uniform_Sergeant", _baseUniformContent,
		"95th_Officer_Vest_Sergeant", _dc15s_Ammo,
		"AUX_95th_RTO_Backpack_Visible_RTO", _baseBackpackContent,
		"95th_Helmet_Trooper"
	],
	[
		"[95th] 10 - Flame (DC15S)",
		_bx42, [], _dc17s,
		"95th_P1_Uniform_Trooper", _baseUniformContent + [["NFL_Disc_Shield",1]],
		"95th_Basic_Vest_Flame", _bx42_Ammo,
		"95th_FlameThrower_Backpack", _baseBackpackContent,
		"95th_Hazard_Helmet_Trooper"
	],
	[
		"[95th] 11 - Jet (DC15S)",
		_dc15s, [], _dc17s,
		"95th_P1_Uniform_Trooper", _baseUniformContent,
		"95th_Basic_Vest_Jet", _dc15s_Ammo,
		"AUX_95th_JT12_Jetpack_Trooper", _baseBackpackContent,
		"95th_Helmet_Trooper"
	],
	[
		"[95th] 12 - Grenadier (DC15A UGL)",
		_dc15a_ugl, [], _dc17s,
		"95th_P1_Uniform_Trooper", _baseUniformContent,
		"95th_Basic_Vest_Grenadier", _dc15a_ugl_Ammo,
		"AUX_95th_Backpack_Visible_Heavy", _baseBackpackContent,
		"95th_Helmet_Trooper"
	],
	[
		"[95th] 13 - Stealth (DC15A)",
		_dc15a, [], _dc17s,
		"95th_P1_Uniform_Trooper", _baseUniformContent + [["DSS_Cloaking_Device",1]],
		"95th_Basic_Vest_Stealth", _dc15a_Ammo,
		"AUX_95th_Bag_Backpack_Visible_Trooper", _baseBackpackContent,
		"95th_SpecOps_Helmet_Trooper"
	],
	[
		"[95th] 14 - Tech (DC15A)",
		_dc15a, [], _dc17s,
		"95th_P1_Uniform_Trooper", _baseUniformContent + [["DSS_Hacking_Device",1]],
		"95th_Basic_Vest_Tech", _dc15a_Ammo,
		"AUX_95th_Bag_Backpack_Visible_Trooper", _baseBackpackContent,
		"95th_SpecOps_Helmet_Trooper"
	],
	[
		"[95th] 15 - Support (DC15A)",
		_dc15a, [], _dc17s,
		"95th_P1_Uniform_Trooper", _baseUniformContent + [["DSS_Support_Device",1]],
		"95th_Basic_Vest_Support", _dc15a_Ammo,
		"AUX_95th_Bag_Backpack_Visible_Trooper", _baseBackpackContent,
		"95th_SpecOps_Helmet_Trooper"
	]
];

{[
	_x select 0, 
	[
		[
			_x select 1,
			_x select 2, 
			_x select 3,
			[_x select 4, _x select 5], 
			[_x select 6, _x select 7], 
			[_x select 8, _x select 9], 
			_x select 10, 
			"", ["JLTS_CloneBinocular","","","",["Laserbatteries",1],[],""], ["ItemMap","ItemGPS","JLTS_clone_comlink","ItemCompass","ItemWatch","95th_P1_Nightvision_Invisible"]
		],[]
	]
] call ace_arsenal_fnc_addDefaultLoadout; } forEach _roleArray;