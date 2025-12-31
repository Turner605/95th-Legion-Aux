params ["_replaceTrees", "_replaceBuildings"];

if (!isServer) exitWith {};

if(_replaceBuildings) then {
    // [ClassToReplace, [ClassToUse, Offset, Rotational Offset, DisableSim, isSimple, isLocal, HideOnly]], 
    private _buildingReplacementMap = createHashMapFromArray [
        ["Land_u_House_Big_02_V1_F", ["land_3as_FOBBuilding1Mb", [1,-1,0], 0, false, false, false, false]]
    ];

    private _existingBuildings = nearestTerrainObjects [
        [worldSize / 2, worldSize / 2],
        ["House"],
        worldSize * sqrt 2 / 2,
        false,
        true
    ];

    [_buildingReplacementMap, _existingBuildings] spawn {
        params ["_buildingReplacementMap", "_existingBuildings"];

        {
            private _oldBuilding = _x;
            private _oldBuildingPos = (getPosATL _oldBuilding);
            private _oldBuildingDir = (getDir _oldBuilding);
            
            private _newBuildingDetails = _buildingReplacementMap get (typeOf _oldBuilding);

            if(count _newBuildingDetails > 0) then {
                private _newBuildingClass = (_newBuildingDetails select 0);
                private _newBuildingAddPos = (_newBuildingDetails select 1);
                private _newBuildingAddDir = (_newBuildingDetails select 2);
                private _newBuildingDisableSim = (_newBuildingDetails select 3);
                private _newBuildingIsSimple = (_newBuildingDetails select 4);
                private _newBuildingIsLocal = (_newBuildingDetails select 5);
                private _newBuildingHideOnly = (_newBuildingDetails select 6);

                private _newBuildingPos = _oldBuildingPos vectorAdd _newBuildingAddPos;
                private _newBuildingDir = _oldBuildingDir + _newBuildingAddDir;

                private _hideLogic = create3DENEntity ["Logic", "ModuleHideTerrainObjects_F", _oldBuildingPos, true];
                
                _hideLogic set3DENAttribute ["size2", [1, 1]];
            
                if(!_newBuildingHideOnly) then {
                    private _newBuilding = create3DENEntity ["Object", _newBuildingClass, _newBuildingPos, true];
                
                    _currentRotation = (_newBuilding get3DENAttribute "Rotation") select 0;

                    set3DENAttributes [[
                        [_newBuilding],
                        "Rotation",
                        [(_currentRotation select 0),
                        (_currentRotation select 1),
                        (_currentRotation select 2)+_oldBuildingDir]
                    ]];

                    if(_newBuildingDisableSim) then {
                        _newBuilding set3DENAttribute ["enableSimulation", false];
                    };

                    if(_newBuildingIsSimple) then {
                        _newBuilding set3DENAttribute ["objectIsSimple", true];
                    };

                    if(_newBuildingIsLocal) then {
                        _newBuilding set3DENAttribute ["isLocalOnly", true];
                    };
                };

                sleep 0.01;
            };

            private _existCount = (count _existingBuildings);
            private _remainingCount = parseNumber ((((_existCount - _forEachIndex) / _existCount)*100) toFixed 2);

            if((_remainingCount % 10) == 0) then {
                systemChat (["Percentage Remaning:",(str _remainingCount)] joinString " ");
            };

            if((_forEachIndex+1) == (count _existingBuildings)) then {
                systemChat "Done Buildings";
            };
            
        } forEach _existingBuildings;
    };
};









if(_replaceTrees) then {
    private _treeReplacementMap = createHashMapFromArray [
        ["Land_u_House_Big_02_V1_F", ["egl_tr1b", [1,-1,0], 0]]
    ];

    // private _newTreeArray = ["egl_tr1b", "egl_tr3", "egl_tr5", "egl_tr2", "egl_tr4", "egl_tr3e", "egl_tr1", "egl_gb4", "egl_gb7", "egl_gb5"]; 

    private _existingTrees = nearestTerrainObjects [
        [worldSize / 2, worldSize / 2],
        ["Tree"],
        worldSize * sqrt 2 / 2,
        false,
        true
    ];

    systemChat (_existingTrees select 0);

    [_treeReplacementMap, _existingTrees] spawn {
        params ["_treeReplacementMap", "_existingTrees"];

        {
            private _oldTree = _x;
            private _oldTreePos = (getPosATL _oldTree);
            private _oldTreePosDir = (getDir _oldTree);
            
            private _newTreeDetails = _treeReplacementMap get (typeOf _oldTree);

            if(count _newTreeDetails > 0) then {
                private _newBuildingClass = (_newTreeDetails select 0);
                private _newTreeAddPos = (_newTreeDetails select 1);
                private _newTreeAddDir = (_newTreeDetails select 2);

                private _newBuildingPos = _oldTreePos vectorAdd _newTreeAddPos;
                private _newBuildingDir = _oldTreePosDir + _newTreeAddDir;

                private _hideLogic = create3DENEntity ["Logic", "ModuleHideTerrainObjects_F", _oldTreePos, true];
                
                _hideLogic set3DENAttribute ["size2", [1, 1]];
            
                private _newBuilding = create3DENEntity ["Object", _newBuildingClass, _newBuildingPos, true];
            
                _currentRotation = (_newBuilding get3DENAttribute "Rotation") select 0;

                set3DENAttributes [[
                    [_newBuilding],
                    "Rotation",
                    [(_currentRotation select 0),
                    (_currentRotation select 1),
                    (_currentRotation select 2)+_oldTreePosDir]
                ]];

                _newBuilding set3DENAttribute ["objectIsSimple", true];

                sleep 0.01;
            };

            private _existCount = (count _existingTrees);
            private _remainingCount = parseNumber ((((_existCount - _forEachIndex) / _existCount)*100) toFixed 2);

            if((_remainingCount % 10) == 0) then {
                systemChat (["Percentage Remaning:",(str _remainingCount)] joinString " ");
            };

            if((_forEachIndex+1) == (count _existingTrees)) then {
                systemChat "Done Trees";
            };
            
        } forEach _existingTrees;
    };
}







    // private _existingTrees = nearestTerrainObjects [
    //     [worldSize / 2, worldSize / 2],
    //     ["Tree"],
    //     worldSize * sqrt 2 / 2,
    //     false,
    //     true
    // ];

    // private _newTreeArray = ["egl_tr1b", "egl_tr3", "egl_tr5", "egl_tr2", "egl_tr4", "egl_tr3e", "egl_tr1", "egl_gb4", "egl_gb7", "egl_gb5"]; 

    // [_newTreeArray, _existingTrees] spawn {
    //     params ["_newTreeArray", "_existingTrees"];

    //     {
    //         private _oldTree = _x;
    //         private _oldTreePos = (getPosATL _oldTree);
    //         private _oldTreePosDir = (getDir _oldTree);

    //         private _hideLogic = create3DENEntity ["Logic", "ModuleHideTerrainObjects_F", _oldTreePos, true];
    //         _hideLogic set3DENAttribute ["size2", [1, 1]];

    //         private _newTree = create3DENEntity ["Object", (selectRandom _newTreeArray), _oldTreePos, true];
    //         _newTree set3DENAttribute ["objectIsSimple", true];

    //         sleep 0.01;
    //     } forEach _existingTrees;
    // };









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


// https://community.bistudio.com/wiki/create3DENEntity
// SetPos
// Figure out how to set size on hide object module probs with setAttribute
// https://community.bistudio.com/wiki/Eden_Editor:_Object
// Need to make sure it goes into a new eden layer to make it easy to delete
