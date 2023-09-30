// Maybe add a setting to decide if we should init this for other servers benefit?

//-----------------------------# Weapon Options #-----------------------------------
private _dc17s = ["JLTS_DC17SA","","JLTS_DC17SA_flashlight","",["JLTS_DC17SA_mag",20],["JLTS_stun_mag_long",5],""];
private _dc15a = ["JLTS_DC15A_plastic","","","",["JLTS_DC15A_mag",60],["JLTS_stun_mag_long",5],""];
private _dc15s = ["JLTS_DC15S","","","",["JLTS_DC15A_mag",60],["JLTS_stun_mag_long",5],""];
private _dc15x = ["JLTS_DC15X","","","JLTS_DC15X_scope",["JLTS_DC15X_mag",15],[],""];

//-----------------------------# Uniform Options #-----------------------------------
private _baseUniform = ["95th_P1_Uniform_Trooper",[["ACE_IR_Strobe_Item",4],["WBK_HeadLampItem",1],["ACE_EntrenchingTool",1],["ACE_CableTie",6],["3AS_SmokeWhite",6,1]]];

//-----------------------------# Backpack Options #-----------------------------------
private _baseBackpack = [["ACE_morphine",2],["ACE_tourniquet",4],["ACE_elasticBandage",20],["ACE_bodyBag",1],["kat_chestSeal",2],["ACE_epinephrine",2],["kat_guedel",4],["ACE_plasmaIV",2],["ACE_plasmaIV_500",2],["ACE_plasmaIV_250",2],["kat_Pulseoximeter",2],["ACE_splint",2],["ACE_packingBandage",20],["kat_Painkiller",5,10],["kat_oxygenTank_150_Item",1,100]];
private _medicBackpack = [""];
private _ATBackpack = [""];
private _FlamerBackpack = [""];






//-----------------------------# Rifleman Loadout #-----------------------------------
private _riflemanLoadout = [[
	_dc15a, [], _dc17s, 
	_baseUniform, 
	["95th_Vest_Trooper",[["JLTS_DC15A_mag",7,60],["JLTS_DC17SA_mag",2,20]]], 
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
	["95th_Vest_Trooper",[["JLTS_DC17SA_mag",2,20],["JLTS_stun_mag_long",2,5],["JLTS_DC15X_mag",7,15]]],
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
	["95th_Vest_Trooper",[["JLTS_DC17SA_mag",2,20],["JLTS_stun_mag_long",2,5],["JLTS_DC15S_mag",7,60]]],
	["95th_Backpack_Trooper",_baseBackpack + [["JLTS_riot_shield_item",1]]], 
	"95th_Helmet_Trooper", 
	"", ["JLTS_CloneBinocular","","","",["Laserbatteries",1],[],""],
	["ItemMap","ItemGPS","JLTS_clone_comlink","ItemCompass","ItemWatch","95th_P1_Nightvision_Invisible"]
],[]];

["[95th] 2 - Riot (DC15S)", _riotLoadout] call ace_arsenal_fnc_addDefaultLoadout;

