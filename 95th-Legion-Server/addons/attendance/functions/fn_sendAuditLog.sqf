params ["_title", "_description", "_colour", "_playerName", "_actionName"];

systemTimeUTC params ["_year", "_month", "_day", "_hours", "_minutes", "_seconds"]; 
private _date = (str _year+'-'+str _month+'-'+str _day+'T'+str _hours+':'+str _minutes+':'+str _seconds+'.000Z');

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

"daa" callExtension ["post", [
    "AttendanceTracking", 
    "https://discord.com/api/webhooks/1256603032230035536/HQ61S0B-bWmXMWf_vxbsLGMhSdq1cc-IuZJQI8ghGXPmM_nLeey73yM8i4_znnuWiQZC",
    _contentString,
    "content-type:application/json" 
]];






_title="_title"
_description="_description"
_colour=""
_playerName="_playerName"
_actionName="_actionName"


systemTimeUTC params ["_year", "_month", "_day", "_hours", "_minutes", "_seconds"]; 
private _date = (str _year+'-'+str _month+'-'+str _day+'T'+str _hours+':'+str _minutes+':'+str _seconds+'.000Z');

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

"daa" callExtension ["post", [
    "AttendanceTracking", 
    "https://discord.com/api/webhooks/1256603032230035536/HQ61S0B-bWmXMWf_vxbsLGMhSdq1cc-IuZJQI8ghGXPmM_nLeey73yM8i4_znnuWiQZC",
    _contentString,
    "content-type:application/json" 
]];
