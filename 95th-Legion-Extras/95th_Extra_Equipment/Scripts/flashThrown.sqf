params ["_projectile"];

private _impactPos = getPosATL _projectile;

while {alive _projectile} do {
	_impactPos = getPosATL _projectile;
	sleep 0.1;
};

[_impactPos] call SUPER_fnc_CheckForEffect;