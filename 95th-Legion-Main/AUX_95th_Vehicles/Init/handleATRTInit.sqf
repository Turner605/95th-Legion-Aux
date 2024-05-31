params ["_vehicle"];

_AUX_95th_ATRT_Handler = [{ 
    _params = _this select 0; 
    _vehicle = _params select 0; 
 
    if((speed _vehicle) > 30) then {
        _vehicle setAnimSpeedCoef 1.8;
    }else{
        _vehicle setAnimSpeedCoef 1;
    };
 
}, 0, [_vehicle]] call CBA_fnc_addPerFrameHandler;

_vehicle setVariable ["AUX_95th_ATRT_Handler", _AUX_95th_ATRT_Handler, true];

_vehicle addEventHandler ["Killed", {
	params ["_unit", "_killer"];

    [_unit getVariable "AUX_95th_ATRT_Handler"] call CBA_fnc_removePerFrameHandler;
}];