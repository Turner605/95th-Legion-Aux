params ["_shieldGenDep", "_medic"];

while {alive _shieldGenDep} do {
	{
		private _patient = _x;
		private _woundsToTreat = [];

		{if ([_medic, _patient, _x, "FieldDressing"] call ace_medical_treatment_fnc_canbandage) then {
				_woundsToTreat pushBackUnique _x;
		}} forEach ["head", "body", "leftarm", "rightarm", "leftleg", "rightleg"];

		{[_medic, _patient, _x, "FieldDressing"] call ace_medical_treatment_fnc_bandage} forEach _woundsToTreat;

	} forEach (_shieldGenDep getVariable "PlayersToTreat");

	sleep NFL_Medical_Shield_Bandage_Rate;
}