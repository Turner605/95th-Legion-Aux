// Maybe add a setting to decide if we should init this for other servers benefit?

//-----------------------------# Weapon Options #-----------------------------------
private _dc17s = ["JLTS_DC17SA","","JLTS_DC17SA_flashlight","",["JLTS_DC17SA_mag",20],["JLTS_stun_mag_long",5],""];
private _dc15a = ["JLTS_DC15A_plastic","","","",["JLTS_DC15A_mag",60],["JLTS_stun_mag_long",5],""];
private _dc15s = ["JLTS_DC15S","","","",["JLTS_DC15S_mag",80],["JLTS_stun_mag_long",5],""];
private _dc15x = ["JLTS_DC15X","","","JLTS_DC15X_scope",["JLTS_DC15X_mag",15],[],""];
private _z6 = ["JLTS_Z6","","","",["JLTS_Z6_mag",300],[],""];

//-----------------------------# Uniform Options #-----------------------------------
private _baseUniform = ["95th_P1_Uniform_Trooper",[["ACE_IR_Strobe_Item",4],["WBK_HeadLampItem",1],["ACE_EntrenchingTool",1],["ACE_CableTie",6],["3AS_SmokeWhite",6,1]]];
private _engineerUniform = ["95th_P1_Uniform_Trooper",[["ACE_IR_Strobe_Item",4],["ACE_EntrenchingTool",1],["ACE_CableTie",6],["ACE_Fortify",1],["ACE_DefusalKit",1],["ACE_wirecutter",1],["ACE_Clacker",1],["WBK_HeadLampItem",1],["ACE_EntrenchingTool",1],["ACE_CableTie",6],["3AS_SmokeWhite",6,1]]];

//-----------------------------# Backpack Options #-----------------------------------
private _baseBackpack = [["ACE_morphine",2],["ACE_tourniquet",4],["ACE_elasticBandage",20],["ACE_bodyBag",1],["kat_chestSeal",2],["ACE_epinephrine",2],["kat_guedel",4],["ACE_plasmaIV",2],["ACE_plasmaIV_500",2],["ACE_plasmaIV_250",2],["kat_Pulseoximeter",2],["ACE_splint",2],["ACE_packingBandage",20],["kat_Painkiller",5,10],["kat_oxygenTank_150_Item",1,100]];
private _engineerBackpack = _baseBackpack + [["SWLW_DetPack_remote_mag",6,1]];
private _medicBackpack = [""];
private _ATBackpack = [""];
private _FlamerBackpack = [""];






//-----------------------------# Rifleman Loadout #-----------------------------------
private _riflemanLoadout = [[
	_dc15a, [], _dc17s, 
	_baseUniform, 
	["95th_Basic_Vest_Rifleman",[["JLTS_DC15A_mag",7,60],["JLTS_DC17SA_mag",2,20]]], 
	["95th_Backpack_Trooper",_baseBackpack], 
	"95th_Helmet_Trooper", 
	"", ["JLTS_CloneBinocular","","","",["Laserbatteries",1],[],""],
	["ItemMap","ItemGPS","JLTS_clone_comlink","ItemCompass","ItemWatch","95th_P1_Nightvision_Invisible"]
],[]];

["[95th] 0 - Rifleman (DC15A)", _riflemanLoadout] call ace_arsenal_fnc_addDefaultLoadout;

//-----------------------------# Marksman Loadout #-----------------------------------
private _marksmanLoadout = [[
	_dc15x, [], _dc17s, 
	_baseUniform, 
	["95th_Basic_Vest_Marksman",[["JLTS_DC17SA_mag",2,20],["JLTS_stun_mag_long",2,5],["JLTS_DC15X_mag",7,15]]],
	["95th_Backpack_Trooper",_baseBackpack], 
	"95th_ARF_Helmet_Trooper", 
	"", ["JLTS_CloneBinocular","","","",["Laserbatteries",1],[],""],
	["ItemMap","ItemGPS","JLTS_clone_comlink","ItemCompass","ItemWatch","95th_P1_Nightvision_Invisible"]
],[]];

["[95th] 1 - Marksman (DC15X)", _marksmanLoadout] call ace_arsenal_fnc_addDefaultLoadout;

//-----------------------------# Marksman Loadout #-----------------------------------
private _riotLoadout = [[
	_dc15s, [], _dc17s, 
	_baseUniform, 
	["95th_Basic_Vest_Riot",[["JLTS_DC17SA_mag",2,20],["JLTS_stun_mag_long",2,5],["JLTS_DC15S_mag",7,80]]],
	["95th_Backpack_Trooper",_baseBackpack + [["JLTS_riot_shield_item",1]]], 
	"95th_Helmet_Trooper", 
	"", ["JLTS_CloneBinocular","","","",["Laserbatteries",1],[],""],
	["ItemMap","ItemGPS","JLTS_clone_comlink","ItemCompass","ItemWatch","95th_P1_Nightvision_Invisible"]
],[]];

["[95th] 2 - Riot (DC15S)", _riotLoadout] call ace_arsenal_fnc_addDefaultLoadout;

//-----------------------------# Heavy Loadout #-----------------------------------
private _heavyLoadout = [[
	_z6, [], _dc17s, 
	_baseUniform, 
	["95th_Basic_Vest_Heavy",[["JLTS_DC17SA_mag",2,20],["JLTS_Z6_mag",7,300],["JLTS_stun_mag_long",2,5]]],
	["95th_Backpack_Trooper",_baseBackpack], 
	"95th_Helmet_Trooper", 
	"", ["JLTS_CloneBinocular","","","",["Laserbatteries",1],[],""],
	["ItemMap","ItemGPS","JLTS_clone_comlink","ItemCompass","ItemWatch","95th_P1_Nightvision_Invisible"]
],[]];

["[95th] 2 - Heavy (Z6)", _heavyLoadout] call ace_arsenal_fnc_addDefaultLoadout;

//-----------------------------# Engineer Loadout #-----------------------------------
private _engineerLoadout = [[
	_dc15a, [], _dc17s, 
	_engineerUniform, 
	["95th_Basic_Vest_Engineer",[["JLTS_DC15A_mag",7,60],["JLTS_DC17SA_mag",2,20]]],
	["95th_Backpack_EOD",_engineerBackpack], 
	"95th_Engineer_Helmet_Trooper", 
	"", ["JLTS_CloneBinocular","","","",["Laserbatteries",1],[],""],
	["ItemMap","ItemGPS","JLTS_clone_comlink","ItemCompass","ItemWatch","95th_P1_Nightvision_Invisible"]
],[]];

["[95th] 2 - Engineer (DC15A)", _engineerLoadout] call ace_arsenal_fnc_addDefaultLoadout;

//-----------------------------# Medic Loadout #-----------------------------------
private _medicLoadout = [[
	_dc15s, [], _dc17s, 
	_engineerUniform, 
	["95th_Basic_Vest_Medic",[["JLTS_DC15S_mag",7,80],["JLTS_DC17SA_mag",2,20],["JLTS_stun_mag_long",2,5]]],
	["95th_Backpack_Medic", _medicBackpack], 
	"95th_Helmet_Medic", 
	"", ["JLTS_CloneBinocular","","","",["Laserbatteries",1],[],""],
	["ItemMap","ItemGPS","JLTS_clone_comlink","ItemCompass","ItemWatch","95th_P1_Nightvision_Invisible"]
],[]];

["[95th] 2 - Medic (DC15S)", _medicLoadout] call ace_arsenal_fnc_addDefaultLoadout;


// 0 - Marksman - Done
// 1 - Riot - Done
// 2 - Heavy - Done
// 3 - Engineer - Done
// 4 - Medic
// 5 - AT
// 6 - Crewman
// 7 - Pilot
// 8 - NCO
// 9 - Flame
// 10 - Jet
// 11 - Stealth
// 12 - Grenadier
// 13 - Tech
// 14 - Support

["95th_P1_Uniform_Trooper",[["ACE_IR_Strobe_Item",4],["WBK_HeadLampItem",1],["OPTRE_M2_Smoke",6,1]]]


// Engineer: [[["JLTS_DC15A_plastic","","","",["JLTS_DC15A_mag",60],["JLTS_stun_mag_long",5],""],[],["JLTS_DC17SA","","JLTS_DC17SA_flashlight","",["JLTS_DC17SA_mag",20],["JLTS_stun_mag_long",5],""],["95th_P1_Uniform_Trooper",[["ACE_IR_Strobe_Item",4],["WBK_HeadLampItem",1],["ACE_EntrenchingTool",1],["ACE_CableTie",6],["ACE_Fortify",1],["ACE_DefusalKit",1],["ACE_wirecutter",1],["ACE_Clacker",1],["OPTRE_M2_Smoke",6,1]]],["95th_Vest_Trooper",[["JLTS_DC15A_mag",7,60],["JLTS_DC17SA_mag",2,20]]],["95th_Backpack_EOD",[["ACE_morphine",2],["ACE_tourniquet",4],["ACE_elasticBandage",20],["ACE_bodyBag",1],["kat_chestSeal",2],["ACE_epinephrine",2],["kat_guedel",4],["ACE_plasmaIV",2],["ACE_plasmaIV_500",2],["ACE_plasmaIV_250",2],["kat_Pulseoximeter",2],["ACE_splint",2],["ACE_packingBandage",20],["kat_Painkiller",5,10],["kat_oxygenTank_150",1,100],["ls_mag_detPack_remoteCharge",6,1]]],"95th_Engineer_Helmet_Trooper","",["JLTS_CloneBinocular","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","JLTS_clone_comlink","ItemCompass","ItemWatch",""]],[]]
// Medic: [[["JLTS_DC15A_plastic","","","",["JLTS_DC15A_mag",60],["JLTS_stun_mag_long",5],""],[],["JLTS_DC17SA","","JLTS_DC17SA_flashlight","",["JLTS_DC17SA_mag",20],["JLTS_stun_mag_long",5],""],["95th_P1_Uniform_Medic",[["ACE_IR_Strobe_Item",4],["WBK_HeadLampItem",1],["ACE_EntrenchingTool",1],["ACE_CableTie",6],["ACE_EarPlugs",1],["OPTRE_M2_Smoke",6,1]]],["95th_Vest_Trooper",[["JLTS_DC15A_mag",7,60],["JLTS_DC17SA_mag",2,20]]],["95th_Backpack_Medic",[["ACE_morphine",6],["ACE_tourniquet",8],["ACE_elasticBandage",50],["ACE_bodyBag",1],["kat_chestSeal",8],["ACE_plasmaIV",10],["ACE_plasmaIV_500",4],["ACE_plasmaIV_250",4],["kat_Pulseoximeter",2],["ACE_splint",6],["ACE_packingBandage",50],["kat_accuvac",1],["kat_AED",1],["ACE_adenosine",6],["kat_BVM",1],["ACE_epinephrine",6],["kat_larynx",8],["kat_Painkiller",2,10],["kat_oxygenTank_150",1,100],["kat_Carbonate",2,10]]],"95th_Helmet_Medic","",["JLTS_CloneBinocular","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","","ItemCompass","ItemWatch","95th_P1_Nightvision_Invisible"]],[]]
// AT: [[["JLTS_DC15A_plastic","","","",["JLTS_DC15A_mag",60],["JLTS_stun_mag_long",5],""],["3AS_RPS6_HP","","","",["3AS_MK41_AT",1],[],""],["JLTS_DC17SA","","JLTS_DC17SA_flashlight","",["JLTS_DC17SA_mag",20],["JLTS_stun_mag_long",5],""],["95th_P1_Uniform_Trooper",[["ACE_IR_Strobe_Item",4],["WBK_HeadLampItem",1],["ACE_EntrenchingTool",1],["ACE_CableTie",6],["OPTRE_M2_Smoke",6,1]]],["95th_Vest_Trooper",[["JLTS_DC15A_mag",7,60],["JLTS_DC17SA_mag",2,20]]],["95th_Backpack_EOD",[["ACE_morphine",2],["ACE_tourniquet",4],["ACE_elasticBandage",20],["ACE_bodyBag",1],["kat_chestSeal",2],["ACE_epinephrine",2],["kat_guedel",4],["ACE_plasmaIV",2],["ACE_plasmaIV_500",2],["ACE_plasmaIV_250",2],["kat_Pulseoximeter",2],["ACE_splint",2],["ACE_packingBandage",20],["kat_Painkiller",5,10],["kat_oxygenTank_150",1,100],["3AS_MK41_AT",3,1],["3AS_MK42_HE",1,1]]],"95th_Helmet_Trooper","",["JLTS_CloneBinocular","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","JLTS_clone_comlink","ItemCompass","ItemWatch","95th_P1_Nightvision_Invisible"]],[]]
// Flame: [[["95th_FlameThrower","","","",["95th_FlameThrower_Fuel",300],[],""],[],["JLTS_DC17SA","","JLTS_DC17SA_flashlight","",["JLTS_DC17SA_mag",20],["JLTS_stun_mag_long",5],""],["95th_P1_Uniform_Trooper",[["ACE_IR_Strobe_Item",4],["WBK_HeadLampItem",1],["ACE_EntrenchingTool",1],["ACE_CableTie",6],["OPTRE_M2_Smoke",6,1]]],["95th_Vest_Trooper",[["JLTS_DC17SA_mag",2,20],["95th_FlameThrower_Fuel",1,300]]],["95th_FlameThrower_Backpack",[["ACE_morphine",2],["ACE_tourniquet",4],["ACE_elasticBandage",20],["ACE_bodyBag",1],["kat_chestSeal",2],["ACE_epinephrine",2],["kat_guedel",4],["ACE_plasmaIV",2],["ACE_plasmaIV_500",2],["ACE_plasmaIV_250",2],["kat_Pulseoximeter",2],["ACE_splint",2],["ACE_packingBandage",20],["kat_Painkiller",5,10],["kat_oxygenTank_150",1,100],["95th_FlameThrower_Fuel",2,300]]],"95th_Hazard_Helmet_Trooper","",["JLTS_CloneBinocular","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","JLTS_clone_comlink","ItemCompass","ItemWatch","95th_P1_Nightvision_Invisible"]],[]]
// Stealth: [[["JLTS_DC15A_plastic","","","",["JLTS_DC15A_mag",60],["JLTS_stun_mag_long",5],""],[],["JLTS_DC17SA","","JLTS_DC17SA_flashlight","",["JLTS_DC17SA_mag",20],["JLTS_stun_mag_long",5],""],["95th_P1_Uniform_Trooper",[["ACE_IR_Strobe_Item",4],["WBK_HeadLampItem",1],["ACE_EntrenchingTool",1],["ACE_CableTie",6],["OPTRE_M2_Smoke",6,1]]],["95th_Vest_Trooper",[["JLTS_DC15A_mag",7,60],["JLTS_DC17SA_mag",2,20]]],["95th_Backpack_Trooper",[["ACE_morphine",2],["ACE_tourniquet",4],["ACE_elasticBandage",20],["ACE_bodyBag",1],["kat_chestSeal",2],["ACE_epinephrine",2],["kat_guedel",4],["ACE_plasmaIV",2],["ACE_plasmaIV_500",2],["ACE_plasmaIV_250",2],["kat_Pulseoximeter",2],["ACE_splint",2],["ACE_packingBandage",20],["kat_Painkiller",5,10],["kat_oxygenTank_150",1,100]]],"95th_SpecOps_Helmet_Trooper","",["JLTS_CloneBinocular","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","JLTS_clone_comlink","ItemCompass","ItemWatch",""]],[]]
// Tech: [[["JLTS_DC15A_plastic","","","",["JLTS_DC15A_mag",60],["JLTS_stun_mag_long",5],""],[],["JLTS_DC17SA","","JLTS_DC17SA_flashlight","",["JLTS_DC17SA_mag",20],["JLTS_stun_mag_long",5],""],["95th_P1_Uniform_Trooper",[["ACE_IR_Strobe_Item",4],["WBK_HeadLampItem",1],["ACE_EntrenchingTool",1],["ACE_CableTie",6],["OPTRE_M2_Smoke",6,1]]],["95th_Vest_Trooper",[["JLTS_DC15A_mag",7,60],["JLTS_DC17SA_mag",2,20]]],["95th_Backpack_Trooper",[["ACE_morphine",2],["ACE_tourniquet",4],["ACE_elasticBandage",20],["ACE_bodyBag",1],["kat_chestSeal",2],["ACE_epinephrine",2],["kat_guedel",4],["ACE_plasmaIV",2],["ACE_plasmaIV_500",2],["ACE_plasmaIV_250",2],["kat_Pulseoximeter",2],["ACE_splint",2],["ACE_packingBandage",20],["kat_Painkiller",5,10],["kat_oxygenTank_150",1,100]]],"95th_SpecOps_Helmet_Trooper","",["JLTS_CloneBinocular","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","JLTS_clone_comlink","ItemCompass","ItemWatch",""]],[]]
