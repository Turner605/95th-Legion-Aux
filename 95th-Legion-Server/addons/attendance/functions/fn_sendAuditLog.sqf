params ["_title", "_description", "_colour", "_playerName"];

systemTimeUTC params ["_year", "_month", "_day", "_hours", "_minutes", "_seconds"];

if((count (str _hours)) == 1)then{_hours = '0'+(str _hours);}else{_hours = (str _hours)};
if((count (str _minutes)) == 1)then{_minutes = '0'+(str _minutes);}else{_minutes = (str _minutes)};
if((count (str _seconds)) == 1)then{_seconds = '0'+(str _seconds);}else{_seconds = (str _seconds)};

private _date = (str _year+'-'+str _month+'-'+str _day+'T'+_hours+':'+_minutes+':'+_seconds+'.000Z');

private _contentString = '{' +
    '"content": null,' +
    '"embeds": [{' +
        '"title": "' + _title + '",' +
        '"description": "' + _description + '",' +
        '"color": '+_colour+',' + 
        '"author": {"name": "'+_playerName+'"},' +
        '"footer": {"text": "Date"},' +
        '"timestamp": "'+_date+'"' +
    '}]' +
'}';

private _auditLoggingWebhook = (["AuditLoggingWebhook"] call AUX_95th_Server_fnc_getServerVariable);

"daa" callExtension ["post", [
    "AuditLogging", 
    _auditLoggingWebhook,
    _contentString,
    "content-type:application/json" 
]];

// ["title", "description", "16734296", "playerName"] remoteExec ["AUX_95TH_SERVER_fnc_sendAuditLog", 2];