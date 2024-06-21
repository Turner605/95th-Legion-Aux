_unit = _this;
nextOilSnd = "run_flame_1";
while {alive _unit} do {
_animState = animationState _unit;
if ((getText (configFile >> "CfgVehicles" >> backpack _unit >> "WBK_BurnEm_FlamethrowerBaloons") != "") and ((_unit ammo primaryWeapon _unit) != 0)) then { 
if (
(_animState == "AmovPercMevaSrasWrflDf") or
(_animState == "AmovPercMevaSrasWrflDfl") or
(_animState == "AmovPercMevaSrasWrflDfr") or
(_animState == "AmovPercMevaSrasWpstDf") or
(_animState == "AmovPercMevaSrasWpstDfl") or
(_animState == "AmovPercMevaSrasWpstDfr") or
(_animState == "AmovPercMevaSlowWpstDf") or
(_animState == "AmovPercMevaSlowWpstDfl") or
(_animState == "AmovPercMevaSlowWpstDfr") or
(_animState == "AmovPercMevaSlowWrflDf") or
(_animState == "AmovPercMevaSlowWrflDfl") or
(_animState == "AmovPercMevaSlowWrflDfr") or 
(_animState == "AmovPknlMevaSrasWrflDf") or 
(_animState == "AmovPknlMevaSrasWrflDfl") or 
(_animState == "AmovPknlMevaSrasWrflDfr") or 
(_animState == "AmovPknlMevaSrasWpstDf") or 
(_animState == "AmovPknlMevaSrasWpstDfl") or 
(_animState == "AmovPknlMevaSrasWpstDfr") or 
(_animState == "AmovPercMevaSnonWnonDf") or 
(_animState == "AmovPercMevaSnonWnonDfl") or 
(_animState == "AmovPercMevaSnonWnonDfr")
) then {

if (nextOilSnd == "run_flame_1") then {
nextOilSnd = "run_flame_2";
}else{
if (nextOilSnd == "run_flame_2") then {
nextOilSnd = "run_flame_3";
}else{
if (nextOilSnd == "run_flame_3") then {
nextOilSnd = "run_flame_4";
}else{
if (nextOilSnd == "run_flame_4") then {
nextOilSnd = "run_flame_5";
}else{
if (nextOilSnd == "run_flame_5") then {
_rndOIL = ["run_flame_6","run_flame_1","run_flame_2","run_flame_5","run_flame_4"] call BIS_fnc_SelectRandom;
nextOilSnd = _rndOIL;
}else{
if (nextOilSnd == "run_flame_6") then {
nextOilSnd = "run_flame_1";
};
};
};
};
};
};
[_unit, nextOilSnd, 25, 3] execVM "\WBK_FlamethrowerSystem\createSoundGlobal.sqf";
}; 
sleep 0.31;


          };
      };