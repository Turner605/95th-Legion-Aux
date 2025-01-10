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
// 16 - Airborne
// 17 - Drone Operator

if (!isServer) exitWith {};

//-----------------------------# Weapon Options #-----------------------------------
private _dc17s = ["AUX_95th_DC17SA","","AUX_95th_DC17SA_flashlight","",["AUX_95th_DC17SA_mag",20],["AUX_95th_Stun_Long_Mag",5],""];
private _dc15a = ["AUX_95th_DC15A_plastic","","","",["AUX_95th_Universal_Rifle_Mag",60],["AUX_95th_Stun_Long_Mag",5],""];
private _dc15a_ugl = ["AUX_95th_DC15A_ugl_plastic","","","",["AUX_95th_Universal_Rifle_Mag",60],["AUX_95th_Stun_Long_Mag",5],""];
private _dc15s = ["AUX_95th_DC15S","","","",["AUX_95th_Universal_Rifle_Mag",80],["AUX_95th_Stun_Long_Mag",5],""];
private _dc15x = ["AUX_95th_DC15X","","","AUX_95th_DC15X_Scope",["AUX_95th_Sniper_Rifle_Mag",15],["AUX_95th_Stun_Long_Mag",5],""];
private _z6 = ["AUX_95th_Z6","","","",["AUX_95th_Universal_Heavy_Mag",300],[],""];
private _rps6 = ["3AS_RPS6_HP","","","",["3AS_MK41_AT",1],[],""];
private _bx42 = ["AUX_95th_BX42","","","",["AUX_95th_BX42_Fuel",300],[],""];

//-----------------------------# Ammo Options #-----------------------------------
private _dc17s_Ammo = [["AUX_95th_DC17SA_mag",2,20],["AUX_95th_Stun_Long_Mag",2,5]];
private _dc15a_Ammo = _dc17s_Ammo + [["AUX_95th_Universal_Rifle_Mag",7,60]];
private _dc15a_ugl_Ammo = _dc17s_Ammo + [["AUX_95th_Universal_Rifle_Mag",7,60],["1Rnd_HE_Grenade_shell",7,1]];
private _dc15s_Ammo = _dc17s_Ammo + [["AUX_95th_Universal_Rifle_Mag",7,80]];
private _dc15x_Ammo = _dc17s_Ammo + [["AUX_95th_Universal_Sniper_Mag",7,15]];
private _z6_Ammo = _dc17s_Ammo + [["AUX_95th_Universal_Heavy_Mag",7,300]];
private _rps6_Ammo = _dc17s_Ammo + [["3AS_MK41_AT",2,1]];
private _bx42_Ammo = _dc17s_Ammo + [["AUX_95th_BX42_Fuel",2,300]];

//-----------------------------# Base Options #-----------------------------------
private _baseUniformContent = [["ACE_IR_Strobe_Item",4],["WBK_HeadLampItem_Double",1],["ACE_EntrenchingTool",1],["ACE_CableTie",6],["DSS_Magazine_Grenade_Multi_Smoke",3,1],["DSS_Grenade_Magazine_Thermal_C1",2,1]];
private _baseBackpackContent = [["ACE_morphine",2],["ACE_tourniquet",4],["ACE_elasticBandage",20],["ACE_bodyBag",1],["kat_chestSeal",2],["ACE_epinephrine",2],["kat_guedel",4],["ACE_plasmaIV",2],["ACE_plasmaIV_500",2],["ACE_plasmaIV_250",2],["kat_Pulseoximeter",2],["ACE_splint",2],["ACE_packingBandage",20],["kat_Painkiller",5,10]];
private _medicBackpackContent = [["ACE_morphine",5],["ACE_tourniquet",16],["ACE_elasticBandage",50],["ACE_bodyBag",1],["kat_chestSeal",12],["ACE_epinephrine",5],["kat_guedel",4],["ACE_plasmaIV_500",13],["ACE_plasmaIV_250",2],["kat_Pulseoximeter",8],["ACE_splint",10],["ACE_packingBandage",50],["kat_aatKit",5],["kat_etomidate",10],["kat_flumazenil",10],["kat_lorazepam",10],["ACE_adenosine",5],["kat_larynx",10],["kat_IO_FAST",10],["ACE_plasmaIV",8],["kat_stethoscope",1],["kat_BVM",1],["kat_accuvac",1],["kat_Painkiller",5,10],["kat_Carbonate",1,10]];

//-----------------------------# Rifleman Options #-----------------------------------
private _riflemanUniform = "AUX_95th_Uniform_P1_Basic_Trooper";
private _riflemanBackpack = "AUX_95th_Backpack_Belt_Light_Shown_Trooper";
private _heavyBackpack = "AUX_95th_Backpack_Rucksack_Heavy_Shown_Trooper";
private _medicBackpack = "AUX_95th_Backpack_Rucksack_Medic_Shown_Trooper";
private _ordnanceBackpack = "AUX_95th_Backpack_Rucksack_Ordnance_Shown_Trooper";
private _radioBackpack = "AUX_95th_Backpack_Mini_Light_RTO_Shown_Trooper";
private _jetBackpack = "AUX_95th_Backpack_JT12_Light_Shown_Trooper";

//-----------------------------# Role Options #-----------------------------------

private _roleArray = [
	[
		"[95th] 00 - Rifleman (DC15A)",
		_dc15a, [], _dc17s,
		_riflemanUniform, _baseUniformContent,
		"AUX_95th_Vest_Standard_Rifleman_Trooper", _dc15a_Ammo,
		_riflemanBackpack, _baseBackpackContent,
		"AUX_95th_Helmet_P1_Basic_Trooper",
		"AUX_95th_Class_Designator_Rifleman"
	],
	[
		"[95th] 01 - Marksman (DC15X)",
		_dc15x, [], _dc17s,
		_riflemanUniform, _baseUniformContent,
		"AUX_95th_Vest_Standard_Marksman_Trooper", _dc15x_Ammo,
		_riflemanBackpack, _baseBackpackContent,
		"AUX_95th_Helmet_P1_ARF_Trooper",
		"AUX_95th_Class_Designator_Marksman" 
	],
	[
		"[95th] 02 - Riot (DC15S)",
		_dc15s, [], _dc17s,
		_riflemanUniform, _baseUniformContent,
		"AUX_95th_Vest_Standard_Riot_Trooper", _dc15s_Ammo,
		_riflemanBackpack, _baseBackpackContent + [["JLTS_riot_shield_item",1]],
		"AUX_95th_Helmet_P1_Basic_Trooper",
		"AUX_95th_Class_Designator_Riot"
	],
	[
		"[95th] 03 - Heavy (Z6)",
		_z6, [], _dc17s,
		_riflemanUniform, _baseUniformContent + [["AUX_95th_Disc_Shield",1]],
		"AUX_95th_Vest_Standard_Heavy_Trooper", _z6_Ammo,
		_heavyBackpack, _baseBackpackContent + [["ACE_Tripod",1]],
		"AUX_95th_Helmet_P1_Basic_Trooper",
		"AUX_95th_Class_Designator_Heavy"
	],
	[
		"[95th] 04 - Engineer (DC15A)",
		_dc15a, [], _dc17s,
		_riflemanUniform, _baseUniformContent + [["ACE_Fortify",1],["ACE_DefusalKit",1],["ACE_wirecutter",1],["ACE_Clacker",1]],
		"AUX_95th_Vest_Standard_Engineer_Trooper", _dc15a_Ammo,
		_ordnanceBackpack, _baseBackpackContent + [["SWLW_DetPack_remote_mag",6,1], ["AUX_95th_Turret_Deployer",1]],
		"AUX_95th_Helmet_P1_Engineer_Trooper",
		"AUX_95th_Class_Designator_Engineer"
	],
	[
		"[95th] 05 - Medic (DC15A)",
		_dc15a, [], _dc17s,
		_riflemanUniform, _baseUniformContent + [["AUX_95th_Magazine_Grenade_Medical_Shield",1,1]],
		"AUX_95th_Vest_Standard_Medic_Trooper", _dc15a_Ammo,
		_medicBackpack, _medicBackpackContent,
		"AUX_95th_Helmet_P1_Basic_Medic",
		"AUX_95th_Class_Designator_Medic"
	],
	[
		"[95th] 06 - AT (DC15A)",
		_dc15a, _rps6, _dc17s,
		_riflemanUniform, _baseUniformContent,
		"AUX_95th_Vest_Standard_AT_Trooper", _dc15a_Ammo,
		_ordnanceBackpack, _baseBackpackContent + _rps6_Ammo,
		"AUX_95th_Helmet_P1_Basic_Trooper",
		"AUX_95th_Class_Designator_AT"
	],
	[
		"[95th] 07 - Crewman (DC15S)",
		_dc15s, [], _dc17s,
		_riflemanUniform, _baseUniformContent,
		"AUX_95th_Vest_Standard_Crewman_Trooper", _dc15s_Ammo,
		_ordnanceBackpack, _baseBackpackContent,
		"AUX_95th_Helmet_P1_Engineer_Trooper",
		"AUX_95th_Class_Designator_Crewman"
	],
	[
		"[95th] 08 - Pilot (DC15S)",
		_dc15s, [], _dc17s,
		_riflemanUniform, _baseUniformContent,
		"AUX_95th_Vest_Standard_Pilot_Trooper", _dc15s_Ammo,
		_riflemanBackpack, _baseBackpackContent,
		"AUX_95th_Helmet_P1_Pilot_Trooper",
		"AUX_95th_Class_Designator_Pilot"
	],
	[
		"[95th] 09 - NCO (DC15S)",
		_dc15s, [], _dc17s,
		_riflemanUniform, _baseUniformContent,
		"AUX_95th_Vest_Sergeant_Rifleman_Trooper", _dc15s_Ammo,
		_radioBackpack, _baseBackpackContent,
		"AUX_95th_Helmet_P1_Basic_Trooper",
		"AUX_95th_Class_Designator_NCO"
	],
	[
		"[95th] 10 - Flame (DC15S)",
		_bx42, [], _dc17s,
		_riflemanUniform, _baseUniformContent + [["AUX_95th_Disc_Shield",1]],
		"AUX_95th_Vest_Standard_Flame_Trooper", _bx42_Ammo,
		"AUX_95th_BX42_Backpack", _baseBackpackContent,
		"AUX_95th_Helmet_P1_Hazard_Trooper",
		"AUX_95th_Class_Designator_Flame"
	],
	[
		"[95th] 11 - Jet (DC15S)",
		_dc15s, [], _dc17s,
		_riflemanUniform, _baseUniformContent,
		"AUX_95th_Vest_Standard_Jet_Trooper", _dc15s_Ammo,
		_jetBackpack, _baseBackpackContent,
		"AUX_95th_Helmet_P2_Airborne_Trooper",
		"AUX_95th_Class_Designator_Jet"
	],
	[
		"[95th] 12 - Grenadier (DC15A UGL)",
		_dc15a_ugl, [], _dc17s,
		_riflemanUniform, _baseUniformContent,
		"AUX_95th_Vest_Standard_Grenadier_Trooper", _dc15a_ugl_Ammo,
		_heavyBackpack, _baseBackpackContent,
		"AUX_95th_Helmet_P1_Basic_Trooper",
		"AUX_95th_Class_Designator_Grenadier"
	],
	[
		"[95th] 13 - Stealth (DC15A)",
		_dc15a, [], _dc17s,
		_riflemanUniform, _baseUniformContent + [["DSS_Cloaking_Device",1]],
		"AUX_95th_Vest_Standard_Stealth_Trooper", _dc15a_Ammo,
		_riflemanBackpack, _baseBackpackContent,
		"AUX_95th_Helmet_P1_SpecOps_Trooper",
		"AUX_95th_Class_Designator_Stealth"
	],
	[
		"[95th] 14 - Tech (DC15A)",
		_dc15a, [], _dc17s,
		_riflemanUniform, _baseUniformContent + [["DSS_Hacking_Device",1]],
		"AUX_95th_Vest_Standard_Tech_Trooper", _dc15a_Ammo,
		_riflemanBackpack, _baseBackpackContent,
		"AUX_95th_Helmet_P1_SpecOps_Trooper",
		"AUX_95th_Class_Designator_Tech"
	],
	[
		"[95th] 15 - Support (DC15A)",
		_dc15a, [], _dc17s,
		_riflemanUniform, _baseUniformContent + [["DSS_Support_Device",1]],
		"AUX_95th_Vest_Standard_Support_Trooper", _dc15a_Ammo,
		_riflemanBackpack, _baseBackpackContent,
		"AUX_95th_Helmet_P1_SpecOps_Trooper",
		"AUX_95th_Class_Designator_Support"
	],
	[
		"[95th] 16 - Airborne (DC15S)",
		_dc15s, [], _dc17s,
		_riflemanUniform, _baseUniformContent + [["AUX_95th_Disc_Shield",1]],
		"AUX_95th_Vest_Kama_Rifleman_Trooper", _dc15s_Ammo,
		_jetBackpack, _medicBackpackContent,
		"AUX_95th_Helmet_P2_Airborne_Trooper",
		"AUX_95th_Class_Designator_Airborne"
	],
	[
		"[95th] 17 - Drone Operator (DC15S)",
		_dc15s, [], _dc17s,
		_riflemanUniform, _baseUniformContent + [["AUX_95th_Turret_Deployer",1]],
		"AUX_95th_Vest_Standard_Drone_Operator_Trooper", _dc15s_Ammo,
		_jetBackpack, _medicBackpackContent,
		"AUX_95th_Helmet_P1_ARF_Trooper",
		"AUX_95th_Class_Designator_DroneOperator"
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
			"", ["JLTS_CloneBinocular","","","",["Laserbatteries",1],[],""], ["ItemMap","ItemGPS","JLTS_clone_comlink", (_x select 11) ,"ItemWatch","AUX_95th_P1_NVG_Invisible"]
		], createHashMapFromArray []
	],
	true
] call ace_arsenal_fnc_addDefaultLoadout; } forEach _roleArray;


