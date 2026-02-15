[AUX_95th_PointMessage_FrameHandler] call CBA_fnc_removePerFrameHandler;

AUX_95th_PointMessage_FrameHandler = [{
    private _grenadeCountCurrent = str AUX_95th_Points_Throwables_Current;
    private _grenadeCountMax = str AUX_95th_Points_Throwables_Max;

    private _mainMessage = "<t color='#970000' size='5'>INVALID EQUIPMENT POINT COUNT</t>";
    private _grenadeMessage = "<t color='#cc7400' size='3'>Grenades: "+ _grenadeCountCurrent + " out Of " + _grenadeCountMax + " points used.</t>";
    private _conflictsMessage = "";

    1 cutText [
        _mainMessage + "<br/>" + _grenadeMessage + "<br/><br/><br/>",
        "PLAIN",
        1,
        true,
        true,
        true
    ];
}, 2] call CBA_fnc_addPerFrameHandler;

// Words would include whats conflicting or if theyre over the limit



