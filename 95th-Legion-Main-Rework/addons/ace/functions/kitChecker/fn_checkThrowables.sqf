// params ["_unit"];

// private _throwables = throwables _unit;
// private _removedThrowables = [];
// private _removedThrowablesString = "";

// {
//     _throwableMagazine = (_x select 0);

//     if(!(_throwableMagazine in AUX_95th_Arsenal_Whitelisted_Throwables)) then {
//         _unit removeItems _throwableMagazine;
//         _removedThrowables pushBack _throwableMagazine;
//         _removedThrowablesString = _removedThrowablesString + ", " + (getText(configFile >> "CfgWeapons" >> _primary >> "displayName"));
//     };

// } forEach _throwables;

// if((count _removedThrowables) > 0) then {
//     systemChat ("Incorrect throwable(s) removed: " + _removedThrowablesString);
// };


// Want to check an overall count of each and tell them they should not be carrying that many but dont remove them?