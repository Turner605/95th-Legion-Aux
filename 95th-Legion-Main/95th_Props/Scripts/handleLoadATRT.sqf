params ["_this"];

private _nearestObjects = nearestObjects[_this, [], 50];
private _targetPad = 0;

{
	if((typeOf _x) == "95th_Ground_Pad") then {
		_targetPad = _x;
	};
} forEach _nearestObjects;

if(!(isNil "_targetPad")) then {
	if(!(isNull _targetPad)) then {
		private _laat = nearestObjects[_targetPad, ["Helicopter"], 30] select 0; 

		_laat addAction["Unload AT-RT",{
			_laat = _this#0;
			_this#0 removeAction _this#2;

			_laatPos = getPosATL _laat;
			Pos = getPosATL player;
			_deployPos = [_laatPos select 0, _laatPos select 1, (_laatPos select 2) - 10];
			
			_dir = getDir _laat;
			
			_deployable = (createGroup WEST) createUnit ["3AS_ATRT",[0,0,0],[],0,"CAN_COLLIDE"];    

			_deployable setDir _dir;
			_deployable setPosASL _deployPos;

			createVehicleCrew _deployable; 
		}];
	};
};