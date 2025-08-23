// params ["_replaceTrees", "_replaceBuildings"];

// if (!isServer) exitWith {};

// if(_replaceBuildings) {

//     // ClassToReplace, ClassToUse, Offset, Rotational Offset
//     private _buildingArray = createHashMapFromArray [
//         ["Land_u_House_Big_02_V1_F", ["land_3as_FOBBuilding1G", [0,0,0], [0,0,0]]]
//     ];

//     private _allToReplace = [];

//     {_allToReplace pushBackUnique _x} forEach _buildingArray;

//     private _allBuilldings = nearestTerrainObjects [
//         [worldSize / 2, worldSize / 2],
//         ["House"],
//         worldSize * sqrt 2 / 2,
//         false,
//         true
//     ];

//     {
//         private _oldBuilding = _x;

//         private _newBuildingDetails = _buildingArray get (typeOf _oldBuilding);

//         private _oldBuildingPos = (getPosATL _oldBuilding) + (_newBuildingDetails select 1);
//         private _oldBuildingDir = (getDir _oldBuilding) + (_newBuildingDetails select 2);

//         systemChat (str _oldBuildingPos);
//         systemChat (str _oldBuildingDir);

//         systemChat str _newBuildingDetails;

//         if(!isNull (getAssignedCuratorLogic player)) then {
//             _oldBuilding hideObject true;
            
//             private _newBuilding = createVehicle [(_newBuildingDetails select 0), _oldBuildingPos, [], 0, "CAN_COLLIDE"];
//             _newBuilding setDir _oldBuildingDir;
//         };
//     } forEach _allBuilldings;
// }

// // private _allTreeObjects = nearestTerrainObjects [
// //     [worldSize / 2, worldSize / 2],
// //     ["Tree"],
// //     worldSize * sqrt 2 / 2,
// //     false,
// //     true
// // ]; 

// // private _existingTreeCount = (count _allTreeObjects);

// // private _newTreeArray = ["egl_tr1b", "egl_tr3", "egl_tr5", "egl_tr2", "egl_tr4", "egl_tr3e", "egl_tr1", "egl_gb4", "egl_gb7", "egl_gb5"]; 

// // private _chunksCount = 50;

// // for "_i" from 1 to _chunksCount do {
// //     private _startPos = _i+((_i-1)*(_existingTreeCount/_chunksCount));
// //     private _endPos = -(_existingTreeCount/_chunksCount);

// //     private _chunkToProcess = [_allTreeObjects, _startPos, _endPos] call BIS_fnc_subSelect;

// //     [_chunkToProcess, _newTreeArray] spawn {
// //         params ["_chunkToProcess", "_newTreeArray"];

// //         { 
// //             _x hideObject true;
            
// //             private _treePos = getPosATL _x;
// //             private _ranTree = selectRandom _newTreeArray;
// //             private _tree = _ranTree createVehicle _treePos;
            
// //             _simpleTree = _tree call BIS_fnc_replaceWithSimpleObject;
// //             _simpleTree setFeatureType 2;
// //             sleep 0.001;
// //         } forEach _chunkToProcess;
// //     };
// // };























// // [] spawn {
// //     private _allTreeObjects = nearestTerrainObjects [
// //         [worldSize / 2, worldSize / 2],
// //         ["Tree"],
// //         worldSize * sqrt 2 / 2,
// //         false,
// //         true
// //     ]; 

// //     private _existingTreeCount = (count _allTreeObjects);

// //     private _newTreeArray = ["egl_tr1b", "egl_tr3", "egl_tr5", "egl_tr2", "egl_tr4", "egl_tr3e", "egl_tr1", "egl_gb4", "egl_gb7", "egl_gb5"]; 

// //     private _chunksCount = 100;

// //     for "_i" from 1 to _chunksCount do {
// //         private _startPos = _i+((_i-1)*(_existingTreeCount/_chunksCount));
// //         private _endPos = -(_existingTreeCount/_chunksCount);

// //         private _chunkToProcess = [_allTreeObjects, _startPos, _endPos] call BIS_fnc_subSelect;

// //         [_chunkToProcess, _newTreeArray] call {
// //             params ["_chunkToProcess", "_newTreeArray"];

// //             {
// //                 _x hideObject true;
                
// //                 private _treePos = getPosATL _x;
// //                 private _ranTree = selectRandom _newTreeArray;
// //                 private _tree = _ranTree createVehicle _treePos;
                
// //                 _simpleTree = _tree call BIS_fnc_replaceWithSimpleObject;
// //                 _simpleTree setFeatureType 2;
// //             } forEach _chunkToProcess;
// //         };

// //         systemChat ("Batch " + (str _i) + "/" + (str _chunksCount) + " Done");
// //     };
// // };
