// private _allTreeObjects = nearestTerrainObjects [
//     [worldSize / 2, worldSize / 2],
//     ["Tree"],
//     worldSize * sqrt 2 / 2,
//     false,
//     true
// ]; 

// private _existingTreeCount = (count _allTreeObjects);

// private _newTreeArray = ["egl_tr1b", "egl_tr3", "egl_tr5", "egl_tr2", "egl_tr4", "egl_tr3e", "egl_tr1", "egl_gb4", "egl_gb7", "egl_gb5"]; 

// private _chunksCount = 50;

// for "_i" from 1 to _chunksCount do {
//     private _startPos = _i+((_i-1)*(_existingTreeCount/_chunksCount));
//     private _endPos = -(_existingTreeCount/_chunksCount);

//     private _chunkToProcess = [_allTreeObjects, _startPos, _endPos] call BIS_fnc_subSelect;

//     [_chunkToProcess, _newTreeArray] spawn {
//         params ["_chunkToProcess", "_newTreeArray"];

//         { 
//             _x hideObject true;
            
//             private _treePos = getPosATL _x;
//             private _ranTree = selectRandom _newTreeArray;
//             private _tree = _ranTree createVehicle _treePos;
            
//             _simpleTree = _tree call BIS_fnc_replaceWithSimpleObject;
//             _simpleTree setFeatureType 2;
//             sleep 0.001;
//         } forEach _chunkToProcess;
//     };
// };























// [] spawn {
//     private _allTreeObjects = nearestTerrainObjects [
//         [worldSize / 2, worldSize / 2],
//         ["Tree"],
//         worldSize * sqrt 2 / 2,
//         false,
//         true
//     ]; 

//     private _existingTreeCount = (count _allTreeObjects);

//     private _newTreeArray = ["egl_tr1b", "egl_tr3", "egl_tr5", "egl_tr2", "egl_tr4", "egl_tr3e", "egl_tr1", "egl_gb4", "egl_gb7", "egl_gb5"]; 

//     private _chunksCount = 100;

//     for "_i" from 1 to _chunksCount do {
//         private _startPos = _i+((_i-1)*(_existingTreeCount/_chunksCount));
//         private _endPos = -(_existingTreeCount/_chunksCount);

//         private _chunkToProcess = [_allTreeObjects, _startPos, _endPos] call BIS_fnc_subSelect;

//         [_chunkToProcess, _newTreeArray] call {
//             params ["_chunkToProcess", "_newTreeArray"];

//             {
//                 _x hideObject true;
                
//                 private _treePos = getPosATL _x;
//                 private _ranTree = selectRandom _newTreeArray;
//                 private _tree = _ranTree createVehicle _treePos;
                
//                 _simpleTree = _tree call BIS_fnc_replaceWithSimpleObject;
//                 _simpleTree setFeatureType 2;
//             } forEach _chunkToProcess;
//         };

//         systemChat ("Batch " + (str _i) + "/" + (str _chunksCount) + " Done");
//     };
// };
